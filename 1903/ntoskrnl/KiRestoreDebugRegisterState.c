/*
 * XREFs of KiRestoreDebugRegisterState @ 0x1401C3FF0
 * Callers:
 *     NtContinue @ 0x1401C4250 (NtContinue.c)
 *     NtRaiseException @ 0x1401C4510 (NtRaiseException.c)
 *     KiRestoreSetContextState @ 0x1401C4A60 (KiRestoreSetContextState.c)
 *     KiChainedDispatch @ 0x1401C4DA0 (KiChainedDispatch.c)
 *     KiInterruptDispatch @ 0x1401C55C0 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x1401C5850 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x1401C5AE0 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoEOI @ 0x1401C5D70 (KiInterruptDispatchNoEOI.c)
 *     KiSpuriousDispatchNoEOI @ 0x1401C5FF0 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x1401C6AD0 (KxIsrLinkage.c)
 *     KiCallUserMode @ 0x1401C70F0 (KiCallUserMode.c)
 *     KiApcInterrupt @ 0x1401C7B50 (KiApcInterrupt.c)
 *     KiHvInterruptDispatch @ 0x1401C8F50 (KiHvInterruptDispatch.c)
 *     KiVmbusInterruptDispatch @ 0x1401C91F0 (KiVmbusInterruptDispatch.c)
 *     KiSwInterrupt @ 0x1401C9730 (KiSwInterrupt.c)
 *     KiDpcInterrupt @ 0x1401C9CF0 (KiDpcInterrupt.c)
 *     KiIpiInterrupt @ 0x1401CA1E0 (KiIpiInterrupt.c)
 *     KxStartUserThread @ 0x1401CB410 (KxStartUserThread.c)
 *     NtCallEnclave @ 0x1401CC6C0 (NtCallEnclave.c)
 *     KiNmiInterruptStart @ 0x1401CEC40 (KiNmiInterruptStart.c)
 *     KiBoundFault @ 0x1401CF780 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x1401CFCC0 (KiInvalidOpcodeFault.c)
 *     KiPageFault @ 0x1401D1800 (KiPageFault.c)
 *     KiMcheckAbort @ 0x1401D2540 (KiMcheckAbort.c)
 *     KxMcheckAlternateReturn @ 0x1401D2B80 (KxMcheckAlternateReturn.c)
 *     KiVirtualizationException @ 0x1401D3400 (KiVirtualizationException.c)
 *     KiControlProtectionFault @ 0x1401D3900 (KiControlProtectionFault.c)
 *     KiSystemCall64 @ 0x1401D4E80 (KiSystemCall64.c)
 *     KiExceptionDispatch @ 0x1401D5940 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x1401D5C80 (KiFastFailDispatch.c)
 *     KiUmsFastReturnToUser @ 0x1401D5F80 (KiUmsFastReturnToUser.c)
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
