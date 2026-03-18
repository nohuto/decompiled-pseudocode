/*
 * XREFs of MiInitializeSessionGlobals @ 0x140740B00
 * Callers:
 *     MiSessionCreate @ 0x14073FA18 (MiSessionCreate.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140002880 (PsIsCurrentThreadInServerSilo.c)
 *     ObfReferenceObject @ 0x14003E330 (ObfReferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003F170 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     PsGetServerSiloGlobals @ 0x14008D470 (PsGetServerSiloGlobals.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1400E6EE0 (PsGetCurrentServerSiloGlobals.c)
 *     MmIsSessionLeaderProcess @ 0x14073AF50 (MmIsSessionLeaderProcess.c)
 */

__int64 MiInitializeSessionGlobals()
{
  struct _KTHREAD *CurrentThread; // rsi
  _KPROCESS *Process; // rbp
  char v3; // bl

  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->Process;
  if ( (CurrentThread->ApcState.Process[1].DirectoryTableBase & 0x1000000000000LL) != 0 )
    return 3221225505LL;
  if ( MmIsSessionLeaderProcess((__int64)CurrentThread->Process) )
    return 0LL;
  if ( qword_1404659B8 )
  {
    if ( PsIsCurrentThreadInServerSilo() )
    {
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1404659C0, 0LL);
      if ( !*((_QWORD *)PsGetCurrentServerSiloGlobals() + 109) )
      {
        *((_QWORD *)PsGetCurrentServerSiloGlobals() + 109) = Process;
        ObfReferenceObject(Process);
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1404659C0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&qword_1404659C0);
      KeAbPostRelease((ULONG_PTR)&qword_1404659C0);
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    }
    if ( MmIsSessionLeaderProcess((__int64)Process) )
      return 0LL;
  }
  else
  {
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1404659C0, 0LL);
    if ( !qword_1404659B8 )
    {
      qword_1404659B8 = (__int64)Process;
      qword_140464988 = qword_1404659D8 + 20480;
      qword_1404659A8 = qword_1404659D8 + 28672;
      qword_1404659C8 = qword_1404659D8 + 576;
      *((_QWORD *)PsGetServerSiloGlobals(0LL) + 109) = Process;
      v3 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1404659C0, 0xFFFFFFFFFFFFFFFFuLL);
      if ( (v3 & 2) != 0 && (v3 & 4) == 0 )
        ExfTryToWakePushLock((volatile signed __int64 *)&qword_1404659C0);
      KeAbPostRelease((ULONG_PTR)&qword_1404659C0);
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
      ObfReferenceObject(Process);
      return 0LL;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1404659C0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_1404659C0);
    KeAbPostRelease((ULONG_PTR)&qword_1404659C0);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    if ( (_KPROCESS *)qword_1404659B8 == Process )
      return 0LL;
  }
  return 3221225500LL;
}
