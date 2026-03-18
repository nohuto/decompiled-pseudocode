/*
 * XREFs of KiKernelExit @ 0x140351B40
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
 *     KiBoundFault @ 0x1401D0380 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x1401D08C0 (KiInvalidOpcodeFault.c)
 *     KiPageFault @ 0x1401D2400 (KiPageFault.c)
 *     KxMcheckAlternateReturn @ 0x1401D3780 (KxMcheckAlternateReturn.c)
 *     KiVirtualizationException @ 0x1401D4000 (KiVirtualizationException.c)
 *     KiControlProtectionFault @ 0x1401D4500 (KiControlProtectionFault.c)
 *     KiSystemCall64 @ 0x1401D5A80 (KiSystemCall64.c)
 *     KiExceptionDispatch @ 0x1401D6540 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x1401D6880 (KiFastFailDispatch.c)
 * Callees:
 *     <none>
 */

// positive sp value has been detected, the output may be wrong!
void __fastcall KiKernelExit(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  char v5; // sp
  bool v6; // cf
  _BYTE v7[40]; // [rsp-10h] [rbp-28h] BYREF

  __writegsqword(0x7010u, (unsigned __int64)v7);
  if ( (KeGetPcr()->Prcb.ShadowFlags & 2) == 0 )
  {
    v6 = (v5 & 1) != 0;
    if ( v6 && (KeGetPcr()->Prcb.ShadowFlags & 1) != 0 )
      __writegsdword(0x7018u, KeGetPcr()->Prcb.ShadowFlags & 0xFFFFFFFE);
    __writecr3((unsigned __int64)v7);
  }
  if ( (KeGetPcr()->Prcb.ShadowFlags & 2) == 0 )
    __asm { verw    [rsp+arg_18] }
  __asm
  {
    swapgs
    iretq
  }
}
