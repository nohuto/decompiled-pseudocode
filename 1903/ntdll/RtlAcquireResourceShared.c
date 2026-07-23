/*
 * XREFs of RtlAcquireResourceShared @ 0x18005FB10
 * Callers:
 *     <none>
 * Callees:
 *     DbgPrintEx @ 0x180052780 (DbgPrintEx.c)
 *     ZwWaitForSingleObject @ 0x18009C760 (ZwWaitForSingleObject.c)
 *     sub_1800E6C88 @ 0x1800E6C88 (sub_1800E6C88.c)
 *     RtlRaiseStatus @ 0x1800FBD30 (RtlRaiseStatus.c)
 */

BOOLEAN __cdecl RtlAcquireResourceShared(PRTL_RESOURCE Resource, BOOLEAN Wait)
{
  LONG NumberOfActive; // r8d
  signed __int32 v5; // eax
  signed int NumberOfWaitingShared; // edx
  bool v8; // zf
  int v9; // eax
  int v10; // ebp
  LARGE_INTEGER *v11; // rsi
  int v12; // eax

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
      while ( NumberOfActive >= 0 )
      {
        v5 = _InterlockedCompareExchange(&Resource->NumberOfActive, NumberOfActive + 1, NumberOfActive);
        v8 = NumberOfActive == v5;
        NumberOfActive = v5;
        if ( v8 )
          return 1;
      }
      if ( !Wait )
        break;
      ++Resource->DebugInfo->ContentionCount;
      _InterlockedIncrement((volatile signed __int32 *)&Resource->NumberOfWaitingShared);
      NumberOfActive = Resource->NumberOfActive;
      if ( NumberOfActive >= 0 )
      {
        NumberOfWaitingShared = Resource->NumberOfWaitingShared;
        v8 = NumberOfWaitingShared == 0;
        if ( NumberOfWaitingShared > 0 )
        {
          do
          {
            v9 = _InterlockedCompareExchange(
                   (volatile signed __int32 *)&Resource->NumberOfWaitingShared,
                   NumberOfWaitingShared - 1,
                   NumberOfWaitingShared);
            if ( NumberOfWaitingShared == v9 )
              break;
            NumberOfWaitingShared = v9;
          }
          while ( v9 > 0 );
          v8 = NumberOfWaitingShared == 0;
        }
        if ( !v8 )
          continue;
      }
      v10 = 0;
      while ( 1 )
      {
        v11 = (LARGE_INTEGER *)&qword_180164F00;
        if ( (Resource->Flags & 1) != 0 )
          v11 = 0LL;
        v12 = ZwWaitForSingleObject(Resource->SharedSemaphore, 0, v11);
        if ( v12 != 258 )
          break;
        DbgPrintEx(
          0x65u,
          0,
          "RTL: Acquire Shared Sem Timeout %d(%I64u secs)\n",
          v10,
          ((unsigned __int64)(((unsigned __int128)(v11->QuadPart * (__int128)0x29406B2A1A85BD43LL) >> 64) - v11->QuadPart) >> 63)
        + ((__int64)(((unsigned __int128)(v11->QuadPart * (__int128)0x29406B2A1A85BD43LL) >> 64) - v11->QuadPart) >> 23));
        DbgPrintEx(0x65u, 0, "RTL: Resource at %p\n", Resource);
        if ( (unsigned int)++v10 > 2 )
          sub_1800E6C88(Resource);
        DbgPrintEx(0x65u, 0, "RTL: Re-Waiting\n");
      }
      if ( v12 < 0 )
        RtlRaiseStatus(v12);
      NumberOfActive = Resource->NumberOfActive;
    }
    return 0;
  }
}
