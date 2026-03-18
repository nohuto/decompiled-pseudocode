/*
 * XREFs of KiRestoreDebugRegisterState @ 0x1401BC070
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
 *     KiCallUserMode @ 0x1401BFE80 (KiCallUserMode.c)
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
