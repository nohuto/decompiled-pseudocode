/*
 * XREFs of RtlAcquireResourceExclusive @ 0x18006DE00
 * Callers:
 *     RtlConvertSharedToExclusive @ 0x18006DDA0 (RtlConvertSharedToExclusive.c)
 * Callees:
 *     DbgPrintEx @ 0x18004D290 (DbgPrintEx.c)
 *     RtlpNonNegativeDecrement @ 0x18006DFE4 (RtlpNonNegativeDecrement.c)
 *     RtlRaiseStatus @ 0x18009F6C0 (RtlRaiseStatus.c)
 *     NtWaitForSingleObject @ 0x1800A0380 (NtWaitForSingleObject.c)
 *     RtlpPossibleDeadlock @ 0x1800E9A20 (RtlpPossibleDeadlock.c)
 */

BOOLEAN __cdecl RtlAcquireResourceExclusive(PRTL_RESOURCE Resource, BOOLEAN Wait)
{
  LONG NumberOfActive; // r9d
  int v6; // ebp
  LARGE_INTEGER *v7; // rsi
  int v8; // eax

  NumberOfActive = Resource->NumberOfActive;
  if ( NumberOfActive < 0 && Resource->ExclusiveOwnerThread == NtCurrentTeb()->ClientId.UniqueThread )
  {
    _InterlockedAdd(&Resource->NumberOfActive, 0xFFFFFFFF);
    return 1;
  }
  else
  {
    while ( 1 )
    {
      while ( !NumberOfActive )
      {
        NumberOfActive = _InterlockedCompareExchange(&Resource->NumberOfActive, -1, 0);
        if ( !NumberOfActive )
        {
          Resource->ExclusiveOwnerThread = NtCurrentTeb()->ClientId.UniqueThread;
          return 1;
        }
      }
      if ( !Wait )
        break;
      ++Resource->DebugInfo->ContentionCount;
      _InterlockedIncrement((volatile signed __int32 *)&Resource->NumberOfWaitingExclusive);
      if ( Resource->NumberOfActive || !(unsigned int)RtlpNonNegativeDecrement() )
      {
        v6 = 0;
        while ( 1 )
        {
          v7 = 0LL;
          if ( (Resource->Flags & 1) == 0 )
            v7 = &RtlpTimeout;
          v8 = NtWaitForSingleObject(Resource->ExclusiveSemaphore, 0, v7);
          if ( v8 != 258 )
            break;
          DbgPrintEx(
            0x65u,
            0,
            "RTL: Acquire Exclusive Sem Timeout %d (%I64u secs)\n",
            v6,
            ((unsigned __int64)(((unsigned __int128)(v7->QuadPart * (__int128)0x29406B2A1A85BD43LL) >> 64) - v7->QuadPart) >> 63)
          + ((__int64)(((unsigned __int128)(v7->QuadPart * (__int128)0x29406B2A1A85BD43LL) >> 64) - v7->QuadPart) >> 23));
          DbgPrintEx(0x65u, 0, "RTL: Resource at %p\n", Resource);
          if ( (unsigned int)++v6 > 2 )
            RtlpPossibleDeadlock(Resource);
          DbgPrintEx(0x65u, 0, "RTL: Re-Waiting\n");
        }
        if ( v8 < 0 )
          RtlRaiseStatus(v8);
        NumberOfActive = Resource->NumberOfActive;
      }
    }
    return 0;
  }
}
