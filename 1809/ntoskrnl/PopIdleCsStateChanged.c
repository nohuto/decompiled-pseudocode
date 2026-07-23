/*
 * XREFs of PopIdleCsStateChanged @ 0x140878964
 * Callers:
 *     PdcPoCurrentPdcPhase @ 0x1402DE450 (PdcPoCurrentPdcPhase.c)
 *     PopDisplayBurstSuppressWorker @ 0x140875D70 (PopDisplayBurstSuppressWorker.c)
 *     PopLidClosedSleepStudyWorker @ 0x1408761D0 (PopLidClosedSleepStudyWorker.c)
 * Callees:
 *     PopIdleCancelAoAcDozeS4Timer @ 0x140142570 (PopIdleCancelAoAcDozeS4Timer.c)
 *     PopIdleArmAoAcDozeS4Timer @ 0x1402E4E1C (PopIdleArmAoAcDozeS4Timer.c)
 *     PopReleasePolicyLock @ 0x140566370 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140566690 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopIdleCsStateChanged(char a1)
{
  PopAcquirePolicyLock();
  byte_140418711 = a1;
  if ( a1 )
  {
    qword_140418718 = qword_14043D448;
    if ( !qword_14043D448 )
      qword_140418718 = MEMORY[0xFFFFF78000000008];
    PopIdleArmAoAcDozeS4Timer();
  }
  else if ( PopPdcLastCsExitReason != 6 )
  {
    PopIdleCancelAoAcDozeS4Timer(1u);
    dword_1404186F0 = 0;
    qword_140418718 = 0LL;
  }
  return PopReleasePolicyLock();
}
