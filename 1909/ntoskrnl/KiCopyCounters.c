/*
 * XREFs of KiCopyCounters @ 0x1402AC3F0
 * Callers:
 *     NtContinue @ 0x1401C4DD0 (NtContinue.c)
 *     NtRaiseException @ 0x1401C5090 (NtRaiseException.c)
 *     KiRestoreSetContextState @ 0x1401C55E0 (KiRestoreSetContextState.c)
 *     KiChainedDispatch @ 0x1401C5920 (KiChainedDispatch.c)
 *     KiInterruptDispatch @ 0x1401C6140 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x1401C63D0 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x1401C6660 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoEOI @ 0x1401C68F0 (KiInterruptDispatchNoEOI.c)
 *     KiSpuriousDispatchNoEOI @ 0x1401C6B70 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x1401C7650 (KxIsrLinkage.c)
 *     KiApcInterrupt @ 0x1401C86D0 (KiApcInterrupt.c)
 *     KiHvInterruptDispatch @ 0x1401C9AD0 (KiHvInterruptDispatch.c)
 *     KiVmbusInterruptDispatch @ 0x1401C9D70 (KiVmbusInterruptDispatch.c)
 *     KiSwInterrupt @ 0x1401CA2B0 (KiSwInterrupt.c)
 *     KiDpcInterrupt @ 0x1401CA870 (KiDpcInterrupt.c)
 *     KiIpiInterrupt @ 0x1401CAD60 (KiIpiInterrupt.c)
 *     KxStartUserThread @ 0x1401CBF90 (KxStartUserThread.c)
 *     NtCallEnclave @ 0x1401CD240 (NtCallEnclave.c)
 *     KiNmiInterruptStart @ 0x1401CF840 (KiNmiInterruptStart.c)
 *     KiBoundFault @ 0x1401D0380 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x1401D08C0 (KiInvalidOpcodeFault.c)
 *     KiPageFault @ 0x1401D2400 (KiPageFault.c)
 *     KiMcheckAbort @ 0x1401D3140 (KiMcheckAbort.c)
 *     KxMcheckAlternateReturn @ 0x1401D3780 (KxMcheckAlternateReturn.c)
 *     KiVirtualizationException @ 0x1401D4000 (KiVirtualizationException.c)
 *     KiControlProtectionFault @ 0x1401D4500 (KiControlProtectionFault.c)
 *     KiSystemCall64 @ 0x1401D5A80 (KiSystemCall64.c)
 *     KiExceptionDispatch @ 0x1401D6540 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x1401D6880 (KiFastFailDispatch.c)
 *     KiUmsFastReturnToUser @ 0x1401D6B80 (KiUmsFastReturnToUser.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KiCopyCountersWorker @ 0x14087F178 (KiCopyCountersWorker.c)
 */

__int64 __fastcall KiCopyCounters(__int64 a1)
{
  __int64 v1; // rbp
  unsigned __int8 CurrentIrql; // bl
  __int64 v4; // rsi
  int v5; // eax
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 360);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  do
  {
    v4 = *(_QWORD *)(a1 + 72);
    _enable();
    v5 = KiCopyCountersWorker(a1, v1);
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
