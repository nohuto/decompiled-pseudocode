/*
 * XREFs of DbgkpRemoveErrorPort @ 0x140849BC4
 * Callers:
 *     DbgkFlushErrorPort @ 0x140652D10 (DbgkFlushErrorPort.c)
 *     DbgkpSendErrorMessage @ 0x140849EA8 (DbgkpSendErrorMessage.c)
 * Callees:
 *     PsGetHostSilo @ 0x140015DF0 (PsGetHostSilo.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     KeResetEvent @ 0x1400896E0 (KeResetEvent.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     PsGetServerSiloGlobals @ 0x1400C9B10 (PsGetServerSiloGlobals.c)
 *     DbgkpDeleteErrorPort @ 0x140849B98 (DbgkpDeleteErrorPort.c)
 */

int __fastcall DbgkpRemoveErrorPort(__int64 a1, ULONG_PTR a2, __int64 a3)
{
  _UNKNOWN **v3; // rax
  int v7; // ebp
  __int64 HostSilo; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  v3 = &retaddr;
  if ( !_interlockedbittestandset((volatile signed __int32 *)(a3 + 4), 0) )
  {
    v7 = 0;
    --*(_WORD *)(a1 + 484);
    ExAcquirePushLockExclusiveEx(a2, 0LL);
    if ( *(_QWORD *)(a2 + 8) == a3 )
    {
      *(_QWORD *)(a2 + 16) = 0LL;
      *(_QWORD *)(a2 + 8) = 0LL;
      v7 = 1;
      HostSilo = PsGetHostSilo();
      if ( (void *)a2 == (char *)PsGetServerSiloGlobals(HostSilo) + 960 )
        _interlockedbittestandreset((volatile signed __int32 *)0xFFFFF780000002F0LL, 0);
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)a2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)a2);
    KeAbPostRelease(a2);
    LODWORD(v3) = (unsigned int)KeLeaveCriticalRegionThread(a1);
    if ( v7 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)a3, 0xFFFFFFFF) == 1 )
        DbgkpDeleteErrorPort((HANDLE *)a3);
      LODWORD(v3) = KeResetEvent(*(PRKEVENT *)(a2 + 24));
    }
  }
  return (int)v3;
}
