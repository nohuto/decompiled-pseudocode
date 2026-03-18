/*
 * XREFs of KiRestoreDebugRegisterState @ 0x1401C4B70
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
 *     KiCallUserMode @ 0x1401C7C70 (KiCallUserMode.c)
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
 *     <none>
 */

__int64 __fastcall KiRestoreDebugRegisterState()
{
  unsigned __int64 *v0; // rbp
  unsigned __int64 v1; // rdx
  unsigned __int64 v2; // rdx
  unsigned __int64 v3; // rdx
  __int64 result; // rax
  int v5; // r8d
  unsigned __int64 v6; // rax
  unsigned int v7; // edx

  __writedr(7u, 0LL);
  v1 = v0[12];
  __writedr(0, v0[11]);
  __writedr(1u, v1);
  v2 = v0[14];
  __writedr(2u, v0[13]);
  __writedr(3u, v2);
  v3 = v0[16];
  result = 0LL;
  __writedr(6u, 0LL);
  __writedr(7u, v3);
  if ( (__readgsbyte(0x6422u) & 2) != 0 && (v3 & 0x300) != 0 && (KiCpuTracingFlags & 2) == 0 )
  {
    if ( (v3 & 0x200) != 0 )
      LODWORD(result) = 2;
    if ( (v3 & 0x100) != 0 )
      LODWORD(result) = result | 1;
    v5 = result;
    v6 = __readmsr(0x1D9u);
    v7 = HIDWORD(v6);
    result = v5 | (unsigned int)v6 & 0xFFFFFFFC;
    __writemsr(0x1D9u, __PAIR64__(v7, result));
  }
  return result;
}
