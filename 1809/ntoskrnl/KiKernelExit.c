/*
 * XREFs of KiKernelExit @ 0x14032FB40
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
 *     KiBoundFault @ 0x1401C9140 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x1401C97C0 (KiInvalidOpcodeFault.c)
 *     KiPageFault @ 0x1401CB400 (KiPageFault.c)
 *     KxMcheckAlternateReturn @ 0x1401CC900 (KxMcheckAlternateReturn.c)
 *     KiVirtualizationException @ 0x1401CD300 (KiVirtualizationException.c)
 *     KiControlProtectionFault @ 0x1401CD940 (KiControlProtectionFault.c)
 *     KiSystemCall64 @ 0x1401CF000 (KiSystemCall64.c)
 *     KiExceptionDispatch @ 0x1401CFD80 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x1401D01C0 (KiFastFailDispatch.c)
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
