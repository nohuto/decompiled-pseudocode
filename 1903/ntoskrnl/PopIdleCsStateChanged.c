/*
 * XREFs of PopIdleCsStateChanged @ 0x1408B65E4
 * Callers:
 *     PdcPoCurrentPdcPhase @ 0x1402FB070 (PdcPoCurrentPdcPhase.c)
 *     PopDisplayBurstSuppressWorker @ 0x1408B1880 (PopDisplayBurstSuppressWorker.c)
 *     PopLidClosedSleepStudyWorker @ 0x1408B1D00 (PopLidClosedSleepStudyWorker.c)
 * Callees:
 *     PopIdleCancelAoAcDozeS4Timer @ 0x14015DB58 (PopIdleCancelAoAcDozeS4Timer.c)
 *     PopIdleArmAoAcDozeS4Timer @ 0x140303EBC (PopIdleArmAoAcDozeS4Timer.c)
 *     PopReleasePolicyLock @ 0x140595780 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1405958A8 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopIdleCsStateChanged(char a1)
{
  PopAcquirePolicyLock();
  byte_140442FB1 = a1;
  if ( a1 )
  {
    qword_140442FB8 = qword_140467E48;
    if ( !qword_140467E48 )
      qword_140442FB8 = MEMORY[0xFFFFF78000000008];
    PopIdleArmAoAcDozeS4Timer();
  }
  else if ( PopPdcLastCsExitReason != 6 )
  {
    PopIdleCancelAoAcDozeS4Timer(1u);
    dword_140442F90 = 0;
    qword_140442FB8 = 0LL;
  }
  return PopReleasePolicyLock();
}
