/*
 * XREFs of KiInitiateUserApc @ 0x1401C11E0
 * Callers:
 *     NtContinue @ 0x1401BC450 (NtContinue.c)
 *     NtRaiseException @ 0x1401BC870 (NtRaiseException.c)
 *     KiChainedDispatch @ 0x1401BD360 (KiChainedDispatch.c)
 *     KiInterruptDispatch @ 0x1401BDCD0 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x1401BE0B0 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x1401BE490 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoEOI @ 0x1401BE870 (KiInterruptDispatchNoEOI.c)
 *     KiSpuriousDispatchNoEOI @ 0x1401BEC50 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x1401BF890 (KxIsrLinkage.c)
 *     KiApcInterrupt @ 0x1401C0BD0 (KiApcInterrupt.c)
 *     KiHvInterruptDispatch @ 0x1401C2170 (KiHvInterruptDispatch.c)
 *     KiVmbusInterruptDispatch @ 0x1401C2560 (KiVmbusInterruptDispatch.c)
 *     KiSwInterrupt @ 0x1401C2C00 (KiSwInterrupt.c)
 *     KiDpcInterrupt @ 0x1401C3320 (KiDpcInterrupt.c)
 *     KiIpiInterrupt @ 0x1401C3960 (KiIpiInterrupt.c)
 *     KxStartUserThread @ 0x1401C4E10 (KxStartUserThread.c)
 *     NtCallEnclave @ 0x1401C6100 (NtCallEnclave.c)
 *     KiBoundFault @ 0x1401C9340 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x1401C99C0 (KiInvalidOpcodeFault.c)
 *     KiPageFault @ 0x1401CB600 (KiPageFault.c)
 *     KxMcheckAlternateReturn @ 0x1401CCB00 (KxMcheckAlternateReturn.c)
 *     KiVirtualizationException @ 0x1401CD500 (KiVirtualizationException.c)
 *     KiControlProtectionFault @ 0x1401CDB40 (KiControlProtectionFault.c)
 *     KiSystemCall64 @ 0x1401CF200 (KiSystemCall64.c)
 *     KiExceptionDispatch @ 0x1401CFF80 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x1401D03C0 (KiFastFailDispatch.c)
 *     KiUmsFastReturnToUser @ 0x1401D0800 (KiUmsFastReturnToUser.c)
 * Callees:
 *     KiDeliverApc @ 0x140058490 (KiDeliverApc.c)
 */

void __fastcall KiInitiateUserApc()
{
  __int64 v0; // rbp
  __int64 v1; // [rsp+0h] [rbp-138h] BYREF

  KiDeliverApc(1, (int)&v1, (_KTRAP_FRAME *)(v0 - 128));
}
