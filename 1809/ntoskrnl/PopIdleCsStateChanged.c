/*
 * XREFs of PopIdleCsStateChanged @ 0x140877724
 * Callers:
 *     PdcPoCurrentPdcPhase @ 0x1402DE160 (PdcPoCurrentPdcPhase.c)
 *     PopDisplayBurstSuppressWorker @ 0x140874B30 (PopDisplayBurstSuppressWorker.c)
 *     PopLidClosedSleepStudyWorker @ 0x140874F90 (PopLidClosedSleepStudyWorker.c)
 * Callees:
 *     PopIdleCancelAoAcDozeS4Timer @ 0x140142450 (PopIdleCancelAoAcDozeS4Timer.c)
 *     PopIdleArmAoAcDozeS4Timer @ 0x1402E4B2C (PopIdleArmAoAcDozeS4Timer.c)
 *     PopReleasePolicyLock @ 0x140565370 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140565690 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopIdleCsStateChanged(char a1)
{
  PopAcquirePolicyLock();
  byte_140417671 = a1;
  if ( a1 )
  {
    qword_140417678 = qword_14043C388;
    if ( !qword_14043C388 )
      qword_140417678 = MEMORY[0xFFFFF78000000008];
    PopIdleArmAoAcDozeS4Timer();
  }
  else if ( PopPdcLastCsExitReason != 6 )
  {
    PopIdleCancelAoAcDozeS4Timer(1u);
    dword_140417650 = 0;
    qword_140417678 = 0LL;
  }
  return PopReleasePolicyLock();
}
