/*
 * XREFs of PopIdleCsStateChanged @ 0x1408B5EB4
 * Callers:
 *     PdcPoCurrentPdcPhase @ 0x1402FAB20 (PdcPoCurrentPdcPhase.c)
 *     PopDisplayBurstSuppressWorker @ 0x1408B10E0 (PopDisplayBurstSuppressWorker.c)
 *     PopLidClosedSleepStudyWorker @ 0x1408B1560 (PopLidClosedSleepStudyWorker.c)
 * Callees:
 *     PopIdleCancelAoAcDozeS4Timer @ 0x14015E1F8 (PopIdleCancelAoAcDozeS4Timer.c)
 *     PopIdleArmAoAcDozeS4Timer @ 0x14030396C (PopIdleArmAoAcDozeS4Timer.c)
 *     PopReleasePolicyLock @ 0x140595868 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1405958A8 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopIdleCsStateChanged(char a1)
{
  PopAcquirePolicyLock();
  byte_140442F51 = a1;
  if ( a1 )
  {
    qword_140442F58 = qword_140467B88;
    if ( !qword_140467B88 )
      qword_140442F58 = MEMORY[0xFFFFF78000000008];
    PopIdleArmAoAcDozeS4Timer();
  }
  else if ( PopPdcLastCsExitReason != 6 )
  {
    PopIdleCancelAoAcDozeS4Timer(1u);
    dword_140442F30 = 0;
    qword_140442F58 = 0LL;
  }
  return PopReleasePolicyLock();
}
