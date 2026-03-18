/*
 * XREFs of MiInitializeSessionGlobals @ 0x140742A00
 * Callers:
 *     MiSessionCreate @ 0x140741918 (MiSessionCreate.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140002880 (PsIsCurrentThreadInServerSilo.c)
 *     ObfReferenceObject @ 0x14003E070 (ObfReferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003EEB0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     PsGetServerSiloGlobals @ 0x1400C9B10 (PsGetServerSiloGlobals.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1400EBE80 (PsGetCurrentServerSiloGlobals.c)
 *     MmIsSessionLeaderProcess @ 0x14073CEB0 (MmIsSessionLeaderProcess.c)
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
  if ( qword_1404656B8 )
  {
    if ( PsIsCurrentThreadInServerSilo() )
    {
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1404656C0, 0LL);
      if ( !*((_QWORD *)PsGetCurrentServerSiloGlobals() + 109) )
      {
        *((_QWORD *)PsGetCurrentServerSiloGlobals() + 109) = Process;
        ObfReferenceObject(Process);
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1404656C0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&qword_1404656C0);
      KeAbPostRelease((ULONG_PTR)&qword_1404656C0);
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    }
    if ( MmIsSessionLeaderProcess((__int64)Process) )
      return 0LL;
  }
  else
  {
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1404656C0, 0LL);
    if ( !qword_1404656B8 )
    {
      qword_1404656B8 = (__int64)Process;
      qword_140464688 = qword_1404656D8 + 20480;
      qword_1404656A8 = qword_1404656D8 + 28672;
      qword_1404656C8 = qword_1404656D8 + 576;
      *((_QWORD *)PsGetServerSiloGlobals(0LL) + 109) = Process;
      v3 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1404656C0, 0xFFFFFFFFFFFFFFFFuLL);
      if ( (v3 & 2) != 0 && (v3 & 4) == 0 )
        ExfTryToWakePushLock((volatile signed __int64 *)&qword_1404656C0);
      KeAbPostRelease((ULONG_PTR)&qword_1404656C0);
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
      ObfReferenceObject(Process);
      return 0LL;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1404656C0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_1404656C0);
    KeAbPostRelease((ULONG_PTR)&qword_1404656C0);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    if ( (_KPROCESS *)qword_1404656B8 == Process )
      return 0LL;
  }
  return 3221225500LL;
}
