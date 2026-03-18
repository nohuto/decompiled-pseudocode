/*
 * XREFs of KiSaveDebugRegisterState @ 0x1401C4BF0
 * Callers:
 *     KxIsrLinkage @ 0x1401C7650 (KxIsrLinkage.c)
 *     KiApcInterrupt @ 0x1401C86D0 (KiApcInterrupt.c)
 *     KiHvInterrupt @ 0x1401C8C70 (KiHvInterrupt.c)
 *     KiVmbusInterrupt0 @ 0x1401C8F50 (KiVmbusInterrupt0.c)
 *     KiVmbusInterrupt1 @ 0x1401C9230 (KiVmbusInterrupt1.c)
 *     KiVmbusInterrupt2 @ 0x1401C9510 (KiVmbusInterrupt2.c)
 *     KiVmbusInterrupt3 @ 0x1401C97F0 (KiVmbusInterrupt3.c)
 *     KiSwInterrupt @ 0x1401CA2B0 (KiSwInterrupt.c)
 *     KiDpcInterrupt @ 0x1401CA870 (KiDpcInterrupt.c)
 *     KiIpiInterrupt @ 0x1401CAD60 (KiIpiInterrupt.c)
 *     KyStartUserThread @ 0x1401CBCC0 (KyStartUserThread.c)
 *     KiDivideErrorFault @ 0x1401CF000 (KiDivideErrorFault.c)
 *     KxDebugTrapOrFault @ 0x1401CF400 (KxDebugTrapOrFault.c)
 *     KiNmiInterruptStart @ 0x1401CF840 (KiNmiInterruptStart.c)
 *     KiBreakpointTrap @ 0x1401CFD00 (KiBreakpointTrap.c)
 *     KiOverflowTrap @ 0x1401D0040 (KiOverflowTrap.c)
 *     KiBoundFault @ 0x1401D0380 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x1401D08C0 (KiInvalidOpcodeFault.c)
 *     KiNpxNotAvailableFault @ 0x1401D0DC0 (KiNpxNotAvailableFault.c)
 *     KiDoubleFaultAbort @ 0x1401D10C0 (KiDoubleFaultAbort.c)
 *     KiNpxSegmentOverrunAbort @ 0x1401D13C0 (KiNpxSegmentOverrunAbort.c)
 *     KiInvalidTssFault @ 0x1401D16C0 (KiInvalidTssFault.c)
 *     KiSegmentNotPresentFault @ 0x1401D19C0 (KiSegmentNotPresentFault.c)
 *     KiStackFault @ 0x1401D1D80 (KiStackFault.c)
 *     KiGeneralProtectionFault @ 0x1401D20C0 (KiGeneralProtectionFault.c)
 *     KiPageFault @ 0x1401D2400 (KiPageFault.c)
 *     KiFloatingErrorFault @ 0x1401D2A40 (KiFloatingErrorFault.c)
 *     KiAlignmentFault @ 0x1401D2E00 (KiAlignmentFault.c)
 *     KiMcheckAbort @ 0x1401D3140 (KiMcheckAbort.c)
 *     KxMcheckAlternateReturn @ 0x1401D3780 (KxMcheckAlternateReturn.c)
 *     KiXmmException @ 0x1401D3C40 (KiXmmException.c)
 *     KiVirtualizationException @ 0x1401D4000 (KiVirtualizationException.c)
 *     KiControlProtectionFault @ 0x1401D4500 (KiControlProtectionFault.c)
 *     KiRaiseSecurityCheckFailure @ 0x1401D49C0 (KiRaiseSecurityCheckFailure.c)
 *     KiRaiseAssertion @ 0x1401D4D00 (KiRaiseAssertion.c)
 *     KiDebugServiceTrap @ 0x1401D5040 (KiDebugServiceTrap.c)
 *     KiSystemCall32 @ 0x1401D55C0 (KiSystemCall32.c)
 *     KiSystemCall64 @ 0x1401D5A80 (KiSystemCall64.c)
 *     KiSystemCall32Shadow @ 0x140351E00 (KiSystemCall32Shadow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiSaveDebugRegisterState()
{
  __int64 v0; // rbp
  KPCR *Pcr; // r9
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rdx
  __int64 result; // rax
  int v9; // r8d
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rax
  int v12; // ecx
  unsigned __int64 v13; // rax
  unsigned int v14; // edx
  unsigned __int64 KernelDr1; // rdx
  unsigned __int64 KernelDr3; // rdx
  unsigned __int64 KernelDr7; // rdx
  int v18; // r8d
  unsigned __int64 v19; // rax
  unsigned int v20; // edx

  Pcr = KeGetPcr();
  v2 = __readdr(0);
  v3 = __readdr(1u);
  *(_QWORD *)(v0 + 88) = v2;
  *(_QWORD *)(v0 + 96) = v3;
  v4 = __readdr(2u);
  v5 = __readdr(3u);
  *(_QWORD *)(v0 + 104) = v4;
  *(_QWORD *)(v0 + 112) = v5;
  v6 = __readdr(6u);
  v7 = __readdr(7u);
  *(_QWORD *)(v0 + 120) = v6;
  *(_QWORD *)(v0 + 128) = v7;
  result = 0LL;
  __writedr(7u, 0LL);
  if ( (KeGetPcr()->Prcb.FeatureBits & 0x20000) != 0 && (v7 & 0x300) != 0 )
  {
    if ( (KiCpuTracingFlags & 2) != 0 )
    {
      *(_QWORD *)(v0 + 152) = 0LL;
      *(_QWORD *)(v0 + 144) = 0LL;
      *(_QWORD *)(v0 + 168) = 0LL;
      *(_QWORD *)(v0 + 160) = 0LL;
    }
    else
    {
      v9 = KiLastBranchTOSMSR;
      if ( KiLastBranchTOSMSR )
      {
        v10 = __readmsr(KiLastBranchTOSMSR);
        v9 = v10;
      }
      v11 = __readmsr(v9 + KiLastBranchFromBaseMSR);
      *(_DWORD *)(v0 + 152) = v11;
      v12 = KiLastBranchToBaseMSR;
      *(_DWORD *)(v0 + 156) = HIDWORD(v11);
      *(_QWORD *)(v0 + 144) = __readmsr(v9 + v12);
      *(_QWORD *)(v0 + 168) = __readmsr(KiLastExceptionFromBaseMSR);
      *(_QWORD *)(v0 + 160) = __readmsr(KiLastExceptionToBaseMSR);
      v13 = __readmsr(0x1D9u);
      v14 = HIDWORD(v13);
      result = (unsigned int)v13 & 0xFFFFFFFC;
      __writemsr(0x1D9u, __PAIR64__(v14, result));
    }
  }
  if ( (Pcr->Prcb.ProcessorState.SpecialRegisters.KernelDr7 & 0x355) != 0 )
  {
    KernelDr1 = Pcr->Prcb.ProcessorState.SpecialRegisters.KernelDr1;
    __writedr(0, Pcr->Prcb.ProcessorState.SpecialRegisters.KernelDr0);
    __writedr(1u, KernelDr1);
    KernelDr3 = Pcr->Prcb.ProcessorState.SpecialRegisters.KernelDr3;
    __writedr(2u, Pcr->Prcb.ProcessorState.SpecialRegisters.KernelDr2);
    __writedr(3u, KernelDr3);
    KernelDr7 = Pcr->Prcb.ProcessorState.SpecialRegisters.KernelDr7;
    result = 0LL;
    __writedr(6u, 0LL);
    __writedr(7u, KernelDr7);
    if ( (KeGetPcr()->Prcb.FeatureBits & 0x20000) != 0 && (KernelDr7 & 0x300) != 0 && (KiCpuTracingFlags & 2) == 0 )
    {
      if ( (KernelDr7 & 0x200) != 0 )
        LODWORD(result) = 2;
      if ( (KernelDr7 & 0x100) != 0 )
        LODWORD(result) = result | 1;
      v18 = result;
      v19 = __readmsr(0x1D9u);
      v20 = HIDWORD(v19);
      result = v18 | (unsigned int)v19 & 0xFFFFFFFC;
      __writemsr(0x1D9u, __PAIR64__(v20, result));
    }
  }
  return result;
}
