/*
 * XREFs of MiInitializeSessionGlobals @ 0x140716224
 * Callers:
 *     MiSessionCreate @ 0x140715028 (MiSessionCreate.c)
 * Callees:
 *     ObfReferenceObject @ 0x14004E220 (ObfReferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400915C0 (ExfTryToWakePushLock.c)
 *     PsGetServerSiloGlobals @ 0x14009238C (PsGetServerSiloGlobals.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1400B9C00 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140109D20 (PsGetCurrentServerSiloGlobals.c)
 *     MmIsSessionLeaderProcess @ 0x140716360 (MmIsSessionLeaderProcess.c)
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
  if ( (unsigned int)MmIsSessionLeaderProcess(CurrentThread->Process) )
    return 0LL;
  if ( qword_140439FA0 )
  {
    if ( PsIsCurrentThreadInServerSilo() )
    {
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140439FA8, 0LL);
      if ( !*((_QWORD *)PsGetCurrentServerSiloGlobals() + 109) )
      {
        *((_QWORD *)PsGetCurrentServerSiloGlobals() + 109) = Process;
        ObfReferenceObject(Process);
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140439FA8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&qword_140439FA8);
      KeAbPostRelease((ULONG_PTR)&qword_140439FA8);
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    }
    if ( (unsigned int)MmIsSessionLeaderProcess(Process) )
      return 0LL;
  }
  else
  {
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140439FA8, 0LL);
    if ( !qword_140439FA0 )
    {
      qword_140439FA0 = (__int64)Process;
      qword_140438F70 = qword_140439FC0 + 20480;
      qword_140438F68 = qword_140439FC0 + 28672;
      qword_140439F90 = qword_140439FC0 + 4222976;
      qword_14043B8C8 = qword_140439FC0 + 8048;
      qword_140439FB0 = qword_140439FC0 + 3328;
      *((_QWORD *)PsGetServerSiloGlobals(0LL) + 109) = Process;
      v3 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140439FA8, 0xFFFFFFFFFFFFFFFFuLL);
      if ( (v3 & 2) != 0 && (v3 & 4) == 0 )
        ExfTryToWakePushLock((volatile signed __int64 *)&qword_140439FA8);
      KeAbPostRelease((ULONG_PTR)&qword_140439FA8);
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
      ObfReferenceObject(Process);
      return 0LL;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140439FA8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140439FA8);
    KeAbPostRelease((ULONG_PTR)&qword_140439FA8);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    if ( (_KPROCESS *)qword_140439FA0 == Process )
      return 0LL;
  }
  return 3221225500LL;
}
