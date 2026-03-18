/*
 * XREFs of KiCopyCounters @ 0x140295DC0
 * Callers:
 *     NtContinue @ 0x1401BC2D0 (NtContinue.c)
 *     NtRaiseException @ 0x1401BC6F0 (NtRaiseException.c)
 *     KiRestoreSetContextState @ 0x1401BCD40 (KiRestoreSetContextState.c)
 *     KiChainedDispatch @ 0x1401BD1E0 (KiChainedDispatch.c)
 *     KiInterruptDispatch @ 0x1401BDB50 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x1401BDF30 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x1401BE310 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoEOI @ 0x1401BE6F0 (KiInterruptDispatchNoEOI.c)
 *     KiSpuriousDispatchNoEOI @ 0x1401BEAD0 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x1401BF710 (KxIsrLinkage.c)
 *     KiApcInterrupt @ 0x1401C0A50 (KiApcInterrupt.c)
 *     KiHvInterruptDispatch @ 0x1401C1FF0 (KiHvInterruptDispatch.c)
 *     KiVmbusInterruptDispatch @ 0x1401C23E0 (KiVmbusInterruptDispatch.c)
 *     KiSwInterrupt @ 0x1401C2A80 (KiSwInterrupt.c)
 *     KiDpcInterrupt @ 0x1401C31A0 (KiDpcInterrupt.c)
 *     KiIpiInterrupt @ 0x1401C37E0 (KiIpiInterrupt.c)
 *     KxStartUserThread @ 0x1401C4C90 (KxStartUserThread.c)
 *     NtCallEnclave @ 0x1401C5F80 (NtCallEnclave.c)
 *     KiNmiInterruptStart @ 0x1401C8600 (KiNmiInterruptStart.c)
 *     KiBoundFault @ 0x1401C9140 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x1401C97C0 (KiInvalidOpcodeFault.c)
 *     KiPageFault @ 0x1401CB400 (KiPageFault.c)
 *     KiMcheckAbort @ 0x1401CC2C0 (KiMcheckAbort.c)
 *     KxMcheckAlternateReturn @ 0x1401CC900 (KxMcheckAlternateReturn.c)
 *     KiVirtualizationException @ 0x1401CD300 (KiVirtualizationException.c)
 *     KiControlProtectionFault @ 0x1401CD940 (KiControlProtectionFault.c)
 *     KiSystemCall64 @ 0x1401CF000 (KiSystemCall64.c)
 *     KiExceptionDispatch @ 0x1401CFD80 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x1401D01C0 (KiFastFailDispatch.c)
 *     KiUmsFastReturnToUser @ 0x1401D0600 (KiUmsFastReturnToUser.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AD8 (KiRemoveSystemWorkPriorityKick.c)
 *     KiCopyCountersWorker @ 0x140844678 (KiCopyCountersWorker.c)
 */

__int64 __fastcall KiCopyCounters(__int64 a1)
{
  __int64 v2; // rbp
  unsigned __int8 CurrentIrql; // bl
  __int64 v4; // rsi
  int v5; // eax
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 360);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  do
  {
    v4 = *(_QWORD *)(a1 + 72);
    _enable();
    v5 = KiCopyCountersWorker(a1, v2);
    _disable();
  }
  while ( !v5 && v4 != *(_QWORD *)(a1 + 72) );
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
