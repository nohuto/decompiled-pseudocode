/*
 * XREFs of KiInitiateUserApc @ 0x1401C8010
 * Callers:
 *     NtContinue @ 0x1401C4250 (NtContinue.c)
 *     NtRaiseException @ 0x1401C4510 (NtRaiseException.c)
 *     KiChainedDispatch @ 0x1401C4DA0 (KiChainedDispatch.c)
 *     KiInterruptDispatch @ 0x1401C55C0 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x1401C5850 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x1401C5AE0 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoEOI @ 0x1401C5D70 (KiInterruptDispatchNoEOI.c)
 *     KiSpuriousDispatchNoEOI @ 0x1401C5FF0 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x1401C6AD0 (KxIsrLinkage.c)
 *     KiApcInterrupt @ 0x1401C7B50 (KiApcInterrupt.c)
 *     KiHvInterruptDispatch @ 0x1401C8F50 (KiHvInterruptDispatch.c)
 *     KiVmbusInterruptDispatch @ 0x1401C91F0 (KiVmbusInterruptDispatch.c)
 *     KiSwInterrupt @ 0x1401C9730 (KiSwInterrupt.c)
 *     KiDpcInterrupt @ 0x1401C9CF0 (KiDpcInterrupt.c)
 *     KiIpiInterrupt @ 0x1401CA1E0 (KiIpiInterrupt.c)
 *     KxStartUserThread @ 0x1401CB410 (KxStartUserThread.c)
 *     NtCallEnclave @ 0x1401CC6C0 (NtCallEnclave.c)
 *     KiBoundFault @ 0x1401CF780 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x1401CFCC0 (KiInvalidOpcodeFault.c)
 *     KiPageFault @ 0x1401D1800 (KiPageFault.c)
 *     KxMcheckAlternateReturn @ 0x1401D2B80 (KxMcheckAlternateReturn.c)
 *     KiVirtualizationException @ 0x1401D3400 (KiVirtualizationException.c)
 *     KiControlProtectionFault @ 0x1401D3900 (KiControlProtectionFault.c)
 *     KiSystemCall64 @ 0x1401D4E80 (KiSystemCall64.c)
 *     KiExceptionDispatch @ 0x1401D5940 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x1401D5C80 (KiFastFailDispatch.c)
 *     KiUmsFastReturnToUser @ 0x1401D5F80 (KiUmsFastReturnToUser.c)
 * Callees:
 *     KiDeliverApc @ 0x140043310 (KiDeliverApc.c)
 */

void __fastcall KiInitiateUserApc()
{
  __int64 v0; // rbp
  __int64 v1; // [rsp+0h] [rbp-138h] BYREF

  KiDeliverApc(1, (int)&v1, (_KTRAP_FRAME *)(v0 - 128));
}
