/*
 * XREFs of KiUpdateStibpPairing @ 0x1400EA770
 * Callers:
 *     KiUpdateSpeculationControl @ 0x1400EA240 (KiUpdateSpeculationControl.c)
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
 *     KePrepareToDispatchVirtualProcessor @ 0x1402ABDF0 (KePrepareToDispatchVirtualProcessor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiUpdateStibpPairing(_KPROCESS *Process)
{
  struct _KPRCB *CurrentPrcb; // r8
  unsigned int v2; // ebx
  int v3; // ebp
  int v4; // r14d
  unsigned int v5; // r9d
  int v6; // r15d
  __int64 v7; // rdi
  _KPRCB *PairPrcb; // r10
  unsigned int v9; // eax
  int v10; // r9d
  signed __int16 v11; // ax
  signed __int16 v12; // r9
  signed __int16 PairRegister; // ax
  signed __int16 v14; // tt
  signed __int16 v15; // tt
  __int64 TrappedSecurityDomain; // rax
  int v17; // esi
  signed __int16 v18; // dx
  signed __int16 v19; // ax
  signed __int16 v20; // cx
  signed __int16 v21; // ax
  signed __int16 v22; // tt
  signed __int16 v23; // ax
  signed __int16 v24; // tt
  unsigned __int8 BpbKernelSpecCtrl; // dl
  __int64 result; // rax
  int v27; // [rsp+38h] [rbp+8h]

  CurrentPrcb = KeGetCurrentPrcb();
  v2 = 0;
  v3 = 0;
  v4 = 1;
  if ( !Process )
  {
    v4 = 0;
    Process = KeGetCurrentThread()->Process;
  }
  v5 = HIDWORD(Process[2].ActiveProcessors.Bitmap[4]);
  v6 = 0;
  v7 = *(_QWORD *)&Process[2].Spare2[23];
  PairPrcb = CurrentPrcb->PairPrcb;
  v9 = v5 >> 23;
  v10 = v5 & 0xC00000;
  v27 = v9 & 1;
  if ( v4 )
  {
    if ( ((HIDWORD(Process[2].ActiveProcessors.Bitmap[4]) >> 22) & 1) != 0 && CurrentPrcb->TrappedSecurityDomain )
    {
      __writemsr(0x49u, 1uLL);
      CurrentPrcb->BpbState &= ~4u;
      _InterlockedOr16(&PairPrcb->PairRegister, 0x20u);
      CurrentPrcb->TrappedSecurityDomain = v7;
      v3 = 1;
      CurrentPrcb->BpbRetpolineState |= 2u;
      v6 = 1;
      CurrentPrcb->BpbTrappedBpbState &= ~0x10u;
    }
  }
  else
  {
    if ( v7 != CurrentPrcb->TrappedSecurityDomain )
    {
      _InterlockedOr16(&PairPrcb->PairRegister, 0x20u);
      CurrentPrcb->TrappedSecurityDomain = v7;
      v3 = 1;
      CurrentPrcb->BpbState |= 4u;
    }
    if ( (CurrentPrcb->BpbState & 4) != 0 )
    {
      __writemsr(0x49u, 1uLL);
      CurrentPrcb->BpbState &= ~4u;
    }
  }
  if ( v10 == 0x400000 )
  {
    _m_prefetchw((char *)&CurrentPrcb->2 + 14);
    PairRegister = CurrentPrcb->PairRegister;
    if ( v4 )
    {
      do
      {
        v14 = PairRegister;
        PairRegister = _InterlockedCompareExchange16(&CurrentPrcb->PairRegister, PairRegister & 0xFEFD, PairRegister);
      }
      while ( v14 != PairRegister );
    }
    else
    {
      do
      {
        v15 = PairRegister;
        PairRegister = _InterlockedCompareExchange16(&CurrentPrcb->PairRegister, PairRegister & 0xFEFD, PairRegister);
      }
      while ( v15 != PairRegister );
    }
    LOBYTE(v12) = PairRegister;
  }
  else if ( (v9 & 1) != 0 )
  {
    v12 = CurrentPrcb->PairRegister;
    v7 = 2LL;
  }
  else
  {
    do
    {
      v11 = CurrentPrcb->PairRegister;
      v12 = v11 & 0xFEFD | 2;
    }
    while ( v11 != _InterlockedCompareExchange16(&CurrentPrcb->PairRegister, v12, v11) );
    v7 = 2LL;
  }
  TrappedSecurityDomain = PairPrcb->TrappedSecurityDomain;
  v17 = 0;
  if ( !TrappedSecurityDomain && (v12 & 0x10) != 0 )
  {
    TrappedSecurityDomain = 1LL;
    _InterlockedOr16(&CurrentPrcb->PairRegister, 2u);
  }
  if ( v7 == TrappedSecurityDomain || (v12 & 8) != 0 )
  {
    do
    {
      v18 = PairPrcb->PairRegister;
      v19 = v18 & 0xFFEE | 1;
      if ( v7 )
        v19 = v18 & 0xFFEE | 0x11;
      v20 = v19 | 2;
      if ( (v12 & 1) != 0 )
        v20 = v19;
    }
    while ( (v20 & 0x100) == 0 && v20 != v18 && v18 != _InterlockedCompareExchange16(&PairPrcb->PairRegister, v20, v18) );
    if ( (v18 & 0x100) == 0 )
    {
      TrappedSecurityDomain = PairPrcb->TrappedSecurityDomain;
      if ( TrappedSecurityDomain || (v12 & 0x10) == 0 )
        goto LABEL_38;
      _InterlockedOr16(&CurrentPrcb->PairRegister, 2u);
    }
    TrappedSecurityDomain = 1LL;
  }
LABEL_38:
  if ( TrappedSecurityDomain != v7 && (v12 & 8) == 0 || v27 || TrappedSecurityDomain == 1 )
  {
    do
      v21 = PairPrcb->PairRegister;
    while ( (((unsigned __int8)v21 | (unsigned __int8)v12) & 1) != 0
         && v21 != _InterlockedCompareExchange16(&PairPrcb->PairRegister, v21 & 0xFFEC | 2, v21) );
    CurrentPrcb->BpbUserSpecCtrl |= 2u;
    if ( (KiSpeculationFeatures & 0x2000000) != 0 )
      CurrentPrcb->BpbKernelSpecCtrl |= 2u;
  }
  else
  {
    CurrentPrcb->BpbUserSpecCtrl &= ~2u;
    if ( (KiSpeculationFeatures & 0x2000000) != 0 )
      CurrentPrcb->BpbKernelSpecCtrl &= ~2u;
    v17 = 1;
  }
  if ( v3 )
  {
    do
      v22 = PairPrcb->PairRegister;
    while ( v22 != _InterlockedCompareExchange16(&PairPrcb->PairRegister, v22 & 0xFFDD | 2, v22) );
  }
  if ( !v17 )
  {
    if ( v27 )
    {
      _m_prefetchw((char *)&CurrentPrcb->2 + 14);
      v23 = CurrentPrcb->PairRegister;
      do
      {
        v24 = v23;
        v23 = _InterlockedCompareExchange16(&CurrentPrcb->PairRegister, v23 | 0x100, v23);
      }
      while ( v24 != v23 );
      if ( (v23 & 1) != 0 && v4 )
        v2 = 1;
    }
  }
  BpbKernelSpecCtrl = CurrentPrcb->BpbKernelSpecCtrl;
  if ( (KiSpeculationFeatures & 0x2000000) != 0 )
    BpbKernelSpecCtrl = CurrentPrcb->BpbRetpolineExitSpecCtrl;
  if ( v7 )
  {
    if ( (BpbKernelSpecCtrl & 3) != 0 )
      goto LABEL_69;
    BpbKernelSpecCtrl = BpbKernelSpecCtrl & 0xFC | 1;
    CurrentPrcb->BpbRetpolineExitSpecCtrl = BpbKernelSpecCtrl;
    if ( (KiSpeculationFeatures & 0x2000000) != 0 )
      goto LABEL_69;
  }
  else
  {
    if ( (v12 & 0x10) == 0 )
    {
      BpbKernelSpecCtrl &= 0xFCu;
      CurrentPrcb->BpbRetpolineExitSpecCtrl = BpbKernelSpecCtrl;
      if ( (KiSpeculationFeatures & 0x2000000) != 0 )
      {
        CurrentPrcb->BpbKernelSpecCtrl &= ~2u;
        CurrentPrcb->BpbUserSpecCtrl &= ~2u;
      }
      else
      {
        CurrentPrcb->BpbUserSpecCtrl &= ~2u;
        CurrentPrcb->BpbKernelSpecCtrl = BpbKernelSpecCtrl;
      }
      goto LABEL_69;
    }
    BpbKernelSpecCtrl = BpbKernelSpecCtrl & 0xFC | 2;
  }
  CurrentPrcb->BpbKernelSpecCtrl = BpbKernelSpecCtrl;
LABEL_69:
  result = v2;
  if ( v6 )
  {
    CurrentPrcb->BpbTrappedBpbState &= ~0x10u;
    CurrentPrcb->BpbTrappedRetpolineExitSpecCtrl = BpbKernelSpecCtrl;
  }
  return result;
}
