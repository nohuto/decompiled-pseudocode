/*
 * XREFs of RtlAcquireResourceExclusive @ 0x18005FC20
 * Callers:
 *     RtlConvertSharedToExclusive @ 0x18005F9E0 (RtlConvertSharedToExclusive.c)
 * Callees:
 *     DbgPrintEx @ 0x180052780 (DbgPrintEx.c)
 *     ZwWaitForSingleObject @ 0x18009C760 (ZwWaitForSingleObject.c)
 *     sub_1800E6C88 @ 0x1800E6C88 (sub_1800E6C88.c)
 *     RtlRaiseStatus @ 0x1800FBD30 (RtlRaiseStatus.c)
 */

BOOLEAN __cdecl RtlAcquireResourceExclusive(PRTL_RESOURCE Resource, BOOLEAN Wait)
{
  LONG NumberOfActive; // r8d
  BOOLEAN result; // al
  int v6; // ebp
  LARGE_INTEGER *v7; // rsi
  int v8; // eax
  signed int NumberOfWaitingExclusive; // edx
  bool v10; // zf
  int v11; // eax

  NumberOfActive = Resource->NumberOfActive;
  if ( NumberOfActive < 0 && Resource->ExclusiveOwnerThread == NtCurrentTeb()->ClientId.UniqueThread )
  {
    _InterlockedDecrement(&Resource->NumberOfActive);
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
          result = 1;
          Resource->ExclusiveOwnerThread = NtCurrentTeb()->ClientId.UniqueThread;
          return result;
        }
      }
      if ( !Wait )
        break;
      ++Resource->DebugInfo->ContentionCount;
      _InterlockedIncrement((volatile signed __int32 *)&Resource->NumberOfWaitingExclusive);
      NumberOfActive = Resource->NumberOfActive;
      if ( !NumberOfActive )
      {
        NumberOfWaitingExclusive = Resource->NumberOfWaitingExclusive;
        v10 = NumberOfWaitingExclusive == 0;
        if ( NumberOfWaitingExclusive > 0 )
        {
          do
          {
            v11 = _InterlockedCompareExchange(
                    (volatile signed __int32 *)&Resource->NumberOfWaitingExclusive,
                    NumberOfWaitingExclusive - 1,
                    NumberOfWaitingExclusive);
            if ( NumberOfWaitingExclusive == v11 )
              break;
            NumberOfWaitingExclusive = v11;
          }
          while ( v11 > 0 );
          v10 = NumberOfWaitingExclusive == 0;
        }
        if ( !v10 )
          continue;
      }
      v6 = 0;
      while ( 1 )
      {
        v7 = (LARGE_INTEGER *)&qword_180164F00;
        if ( (Resource->Flags & 1) != 0 )
          v7 = 0LL;
        v8 = ZwWaitForSingleObject(Resource->ExclusiveSemaphore, 0, v7);
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
          sub_1800E6C88(Resource);
        DbgPrintEx(0x65u, 0, "RTL: Re-Waiting\n");
      }
      if ( v8 < 0 )
        RtlRaiseStatus(v8);
      NumberOfActive = Resource->NumberOfActive;
    }
    return 0;
  }
}
