/*
 * XREFs of KeOptimizeSpecCtrlSettings @ 0x14018EF30
 * Callers:
 *     <none>
 * Callees:
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KeGetPrcb @ 0x1400A6204 (KeGetPrcb.c)
 *     KiUpdateSpeculationControl @ 0x1400F83B0 (KiUpdateSpeculationControl.c)
 *     KeExitRetpoline @ 0x14013926C (KeExitRetpoline.c)
 *     KiDetectAmdNonArchSsbdSupport @ 0x1401B44B4 (KiDetectAmdNonArchSsbdSupport.c)
 *     KiIsBranchConfusionMitigationDesired @ 0x1401B459C (KiIsBranchConfusionMitigationDesired.c)
 *     KiIsBranchConfusionMitigationSupported @ 0x1401B45F8 (KiIsBranchConfusionMitigationSupported.c)
 *     KiIsBranchConfusionPresent @ 0x1401B4620 (KiIsBranchConfusionPresent.c)
 *     KiIsRfdsMitigationDesired @ 0x1401B470C (KiIsRfdsMitigationDesired.c)
 *     KiIsRfdsMitigationSupported @ 0x1401B4724 (KiIsRfdsMitigationSupported.c)
 *     KiIsSrsoMitigationDesired @ 0x1401B4798 (KiIsSrsoMitigationDesired.c)
 *     KiIsSrsoMitigationSupported @ 0x1401B4840 (KiIsSrsoMitigationSupported.c)
 *     KiIsTsaMitigationDesired @ 0x1401B4880 (KiIsTsaMitigationDesired.c)
 *     KiIsTsaMitigationSupported @ 0x1401B489C (KiIsTsaMitigationSupported.c)
 *     KiSetVirtualMitigationControl @ 0x1401B49B4 (KiSetVirtualMitigationControl.c)
 *     HvlIsCoreSharingPossible @ 0x140271088 (HvlIsCoreSharingPossible.c)
 *     HvlIsStibpPairingRecommended @ 0x1402710F8 (HvlIsStibpPairingRecommended.c)
 *     KiAddSpecCtrlSsbdBit @ 0x140295954 (KiAddSpecCtrlSsbdBit.c)
 */

ULONG_PTR __fastcall KeOptimizeSpecCtrlSettings(ULONG_PTR Argument)
{
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 CoreProcessorSet; // rdx
  __int64 v4; // rcx
  unsigned __int64 v5; // r10
  __int64 v6; // r8
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rax
  __int64 v9; // r9
  signed __int32 v10; // eax
  unsigned int v11; // edi
  unsigned int v12; // eax
  __int64 v13; // r10
  unsigned __int64 v14; // r8
  __int16 v15; // r11
  __int16 v16; // cx
  unsigned __int16 v17; // ax
  unsigned __int16 *p_BpbNmiSpecCtrl; // rcx
  unsigned __int64 v19; // rax
  unsigned __int16 *v20; // rcx
  signed __int32 v21; // eax
  int v22; // edi
  unsigned int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // r9
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rax
  char v28; // cl
  unsigned __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // rax
  signed __int32 v37; // eax
  unsigned int v38; // edi
  unsigned __int16 *v39; // rcx
  unsigned __int16 BpbKernelSpecCtrl; // ax
  int v42; // [rsp+70h] [rbp+8h] BYREF
  int v43; // [rsp+78h] [rbp+10h] BYREF
  int v44; // [rsp+80h] [rbp+18h] BYREF
  ULONG v45; // [rsp+88h] [rbp+20h]

  CurrentPrcb = KeGetCurrentPrcb();
  CoreProcessorSet = CurrentPrcb->CoreProcessorSet;
  if ( ((CoreProcessorSet - 1) & CoreProcessorSet) != 0 )
    _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 2uLL);
  if ( HvlHypervisorConnected && (unsigned __int8)((__int64 (*)(void))HvlIsCoreSharingPossible)() )
    _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 2uLL);
  v4 = 0x10000000000LL;
  if ( (KiFeatureSettings & 0x80u) != 0 )
    _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 0x10000000000uLL);
  if ( CurrentPrcb->CpuVendor == 1 )
    KiDetectAmdNonArchSsbdSupport(CurrentPrcb, &KiSpeculationFeatures);
  v5 = 0x4000000000LL;
  v6 = 256LL;
  if ( (KiSpeculationFeatures & 0x80) != 0 && (KiSpeculationFeatures & 0x100) == 0 )
  {
    if ( (KiFeatureSettings & 8) != 0 )
      goto LABEL_16;
    if ( (KiFeatureSettings & 0x10) == 0 )
      goto LABEL_17;
    if ( KiSsbdMsr != 72 )
LABEL_16:
      _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 0x4000000000uLL);
    else
      _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 0x8000000000uLL);
  }
LABEL_17:
  if ( (KiSpeculationFeatures & 4) == 0 )
    _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 0x800000000uLL);
  if ( (KiFeatureSettings & 4) != 0 )
  {
    _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 0x400000000uLL);
  }
  else if ( (KiFeatureSettings & 1) != 0 )
  {
    _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 0x400000000uLL);
    if ( HvlHypervisorConnected )
    {
      if ( (HvlpFlags & 2) != 0
        && (unsigned __int8)HvlIsCoreSharingPossible(v4, CoreProcessorSet, 256LL)
        && (KiSpeculationFeatures & 0x40) != 0 )
      {
        CurrentPrcb->BpbKernelSpecCtrl = 2;
        CurrentPrcb->BpbUserSpecCtrl = 2;
        CurrentPrcb->BpbRetpolineExitSpecCtrl = 2;
      }
    }
  }
  v7 = 0x8000000000000LL;
  if ( (KiSpeculationFeatures & 0x800000) != 0 )
  {
    if ( !(unsigned int)KiIsRfdsMitigationSupported(0x8000000000000LL, &KiSpeculationFeatures, v6) )
    {
      v8 = 0x4000000000000LL;
LABEL_32:
      _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, v8);
      goto LABEL_35;
    }
    if ( !(unsigned int)KiIsRfdsMitigationDesired() )
    {
      v8 = 0x2000000000000LL;
      goto LABEL_32;
    }
    if ( !KiKvaShadow )
      _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, v7);
  }
LABEL_35:
  if ( ((unsigned __int64)KiSpeculationFeatures & v7) != 0 )
  {
    CurrentPrcb->BpbState |= v6;
    CurrentPrcb->VerwSelector = 24;
  }
  v9 = 0x80000000LL;
  if ( Argument )
  {
    v10 = _InterlockedDecrement((volatile signed __int32 *)Argument);
    v11 = ~v10 & 0x80000000;
    if ( (v10 & 0x7FFFFFFF) != 0 )
    {
      v12 = *(_DWORD *)Argument & 0x80000000;
      v42 = 0;
      if ( v12 != v11 )
      {
        do
        {
          KeYieldProcessorEx(&v42, CoreProcessorSet, v6);
          v9 = 0x80000000LL;
        }
        while ( (*(_DWORD *)Argument & 0x80000000) != v11 );
        v5 = 0x4000000000LL;
      }
    }
    else
    {
      *(_DWORD *)Argument = v11 | *(_DWORD *)(Argument + 4);
    }
  }
  if ( (KiSpeculationFeatures & 0x400000000LL) != 0 || (KiSpeculationFeatures & 0x800000000LL) != 0 )
  {
    if ( (KiSpeculationFeatures & 0x8000000000LL) != 0 )
    {
      _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, v5);
      _InterlockedAnd64((volatile signed __int64 *)&KiSpeculationFeatures, 0xFFFFFF7FFFFFFFFFuLL);
    }
    if ( ((unsigned __int64)KiSpeculationFeatures & v5) != 0 )
    {
      KiAddSpecCtrlSsbdBit((char *)&CurrentPrcb->2 + 14, CoreProcessorSet, v6, 0x80000000LL);
      CurrentPrcb->BpbUserSpecCtrl = *v39;
    }
    goto LABEL_167;
  }
  _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 0x1000000000uLL);
  CurrentPrcb->BpbFeatures |= 2u;
  v13 = 0x4000LL;
  v14 = 0x2000LL;
  v15 = 1024;
  if ( (KiSpeculationFeatures & 1) != 0 )
  {
    v16 = 1;
    if ( (KiSpeculationFeatures & 0x4000) != 0 )
      v16 = 3;
    CoreProcessorSet = (__int64)&CurrentPrcb->PrcbPad12c[1] + 6;
    CurrentPrcb->BpbUserSpecCtrl = v16;
    CurrentPrcb->BpbKernelSpecCtrl = v16;
    CurrentPrcb->BpbRetpolineExitSpecCtrl = v16;
    if ( (KiSpeculationFeatures & 0x4000000000LL) != 0 || (KiSpeculationFeatures & 0x8000000000LL) != 0 )
    {
      KiAddSpecCtrlSsbdBit((char *)&CurrentPrcb->2 + 14, CoreProcessorSet, 0x2000LL, 0x80000000LL);
      v17 = *(_WORD *)CoreProcessorSet;
      CurrentPrcb->BpbUserSpecCtrl = *(_WORD *)CoreProcessorSet;
      CurrentPrcb->BpbRetpolineExitSpecCtrl = v17;
    }
    p_BpbNmiSpecCtrl = &CurrentPrcb->BpbNmiSpecCtrl;
    CurrentPrcb->BpbNmiSpecCtrl = 1;
    if ( (KiSpeculationFeatures & 0x4000000000LL) != 0 || (KiSpeculationFeatures & 0x8000000000LL) != 0 )
      KiAddSpecCtrlSsbdBit(p_BpbNmiSpecCtrl, CoreProcessorSet, v14, v9);
    if ( ((unsigned __int64)KiSpeculationFeatures & v13) != 0 )
      *p_BpbNmiSpecCtrl |= 2u;
    if ( ((unsigned __int64)KiSpeculationFeatures & v14) != 0 )
      *p_BpbNmiSpecCtrl |= 0x80u;
    if ( (KiSpeculationFeatures & 0x10000) != 0 )
    {
      if ( (KiFeatureSettings & 0x800000) != 0 )
      {
        if ( BYTE12(KiSpeculationFeatures) )
        {
          _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 0x80000000000000uLL);
          CurrentPrcb->BpbFeatures ^= (CurrentPrcb->BpbFeatures ^ (16 * BYTE12(KiSpeculationFeatures))) & 0x30;
          goto LABEL_67;
        }
        if ( (KiSpeculationFeatures & 0x20000) != 0 )
        {
          _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 0x40000000000000uLL);
          *(_WORD *)CoreProcessorSet |= v15;
          CurrentPrcb->BpbRetpolineExitSpecCtrl |= v15;
          CurrentPrcb->BpbUserSpecCtrl |= v15;
          *p_BpbNmiSpecCtrl |= v15;
          goto LABEL_67;
        }
        v19 = 0x20000000000000LL;
      }
      else
      {
        v19 = 0x10000000000000LL;
      }
      _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, v19);
    }
LABEL_67:
    if ( (KiSpeculationFeatures & 0x8000000000LL) == 0 )
    {
      v5 = 0x4000000000LL;
      goto LABEL_167;
    }
  }
  if ( (KiSpeculationFeatures & 0x10) != 0 )
  {
    CurrentPrcb->BpbNmiSpecCtrl = 1;
  }
  else if ( (KiSpeculationFeatures & 0x40) != 0 && (KiSpeculationFeatures & 2) != 0 )
  {
    CurrentPrcb->BpbNmiSpecCtrl = 2;
  }
  v20 = &CurrentPrcb->BpbNmiSpecCtrl;
  if ( ((unsigned __int64)KiSpeculationFeatures & v13) != 0 )
    *v20 |= 2u;
  if ( ((unsigned __int64)KiSpeculationFeatures & v14) != 0 )
  {
    v20 = &CurrentPrcb->BpbNmiSpecCtrl;
    CurrentPrcb->BpbNmiSpecCtrl |= 0x80u;
  }
  v5 = 0x4000000000LL;
  if ( (KiSpeculationFeatures & 0x4000000000LL) != 0 || (KiSpeculationFeatures & 0x8000000000LL) != 0 )
    KiAddSpecCtrlSsbdBit(v20, CoreProcessorSet, v14, v9);
  if ( (KiSpeculationFeatures & 1) == 0 )
  {
    if ( Argument )
    {
      v21 = _InterlockedDecrement((volatile signed __int32 *)Argument);
      v22 = v9 & ~v21;
      if ( (v21 & 0x7FFFFFFF) != 0 )
      {
        v23 = v9 & *(_DWORD *)Argument;
        v43 = 0;
        while ( v23 != v22 )
        {
          KeYieldProcessorEx(&v43, CoreProcessorSet, v14);
          v23 = *(_DWORD *)Argument & 0x80000000;
        }
      }
      else
      {
        *(_DWORD *)Argument = v22 | *(_DWORD *)(Argument + 4);
      }
    }
    v24 = 0x20000000000LL;
    if ( (KiSpeculationFeatures & 0x20000000000LL) != 0 )
    {
      CurrentPrcb->BpbRetpolineState |= 4u;
      KeExitRetpoline(0x20000000000LL, CoreProcessorSet, v14, v9);
    }
    if ( (KiSpeculationFeatures & 2) != 0
      && (KiSpeculationFeatures & 0x4000) == 0
      && !HvlHypervisorConnected
      && ((KiSpeculationFeatures & 0x10) != 0 || (KiSpeculationFeatures & 0x40) != 0) )
    {
      _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 0x200000000uLL);
      CurrentPrcb->BpbFeatures |= 1u;
    }
    v25 = 0LL;
    if ( (KiSpeculationFeatures & 2) != 0
      && (KiSpeculationFeatures & 0x40) != 0
      && (KiSpeculationFeatures & 0x10) != 0
      && (KiSpeculationFeatures & 0x4000) == 0
      && (KiSpeculationFeatures & 0x10000000000LL) == 0 )
    {
      v14 = CurrentPrcb->CoreProcessorSet;
      v26 = v14 - ((v14 >> 1) & 0x5555555555555555LL);
      CoreProcessorSet = v26 & 0x3333333333333333LL;
      v27 = ((v26 & 0x3333333333333333LL)
           + ((v26 >> 2) & 0x3333333333333333LL)
           + (((v26 & 0x3333333333333333LL) + ((v26 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL;
      v24 = 0x101010101010101LL;
      if ( (0x101010101010101LL * v27) >> 56 == 2
        && (!HvlHypervisorConnected
         || !(unsigned __int8)HvlIsCoreSharingPossible(0x101010101010101LL, CoreProcessorSet, v14)
         || (HvlpFlags & 2) != 0 && (unsigned __int8)HvlIsStibpPairingRecommended()) )
      {
        v28 = CurrentPrcb->GroupIndex + 1;
        _BitScanForward64(&v29, __ROR8__(v14, v28));
        v45 = KiProcessorNumberToIndexMappingTable[64 * CurrentPrcb->Group + (((unsigned __int8)v29 + v28) & 0x3F)];
        CurrentPrcb->PairPrcb = (_KPRCB *)KeGetPrcb(v45);
        v25 = 1LL;
        CurrentPrcb->PairRegister = 6;
      }
    }
    if ( (KiFeatureSettings & 0x20) != 0 && (KiSpeculationFeatures & 2) != 0 && (KiSpeculationFeatures & 0x40) != 0
      || (KiSpeculationFeatures & 2) != 0
      && (KiSpeculationFeatures & 0x40) != 0
      && !(_DWORD)v25
      && (KiSpeculationFeatures & 0x10000000000LL) == 0
      && HvlHypervisorConnected
      && (unsigned __int8)HvlIsCoreSharingPossible(v24, CoreProcessorSet, v14) )
    {
      _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 0x100000000uLL);
    }
    if ( (KiSpeculationFeatures & 2) != 0
      && (KiSpeculationFeatures & 0x40) != 0
      && (KiSpeculationFeatures & 0x4000) != 0
      && !(_DWORD)v25
      && (KiSpeculationFeatures & 0x10000000000LL) == 0 )
    {
      _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 0x80000000000uLL);
    }
    if ( CurrentPrcb->CpuVendor == 1 && (KiSpeculationFeatures & 0x10) == 0 && (KiFeatureSettings & 0x40) == 0 )
    {
      _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 0x2000000000uLL);
LABEL_126:
      v5 = 0x4000000000LL;
      goto LABEL_167;
    }
    if ( (unsigned int)KiIsBranchConfusionPresent(CurrentPrcb, CoreProcessorSet, v14, v25) )
    {
      _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 0x8000uLL);
      if ( (unsigned int)KiIsBranchConfusionMitigationDesired(CurrentPrcb, &KiSpeculationFeatures) )
      {
        if ( (unsigned int)KiIsBranchConfusionMitigationSupported(v31, &KiSpeculationFeatures) )
          goto LABEL_133;
        v33 = 0x200000000000LL;
      }
      else
      {
        v33 = 0x100000000000LL;
      }
      _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, v33);
    }
LABEL_133:
    if ( (KiSpeculationFeatures & 0x2000000) == 0 )
      goto LABEL_140;
    if ( (unsigned int)KiIsTsaMitigationDesired() )
    {
      if ( (unsigned int)KiIsTsaMitigationSupported(CurrentPrcb) )
      {
        CurrentPrcb->BpbFeatures |= 0x40u;
LABEL_140:
        if ( (KiSpeculationFeatures & 0x200000) == 0 )
          goto LABEL_146;
        if ( (unsigned int)KiIsSrsoMitigationSupported(v31, &KiSpeculationFeatures) )
        {
          if ( (unsigned int)KiIsSrsoMitigationDesired(CurrentPrcb, &KiSpeculationFeatures) )
            goto LABEL_146;
          v35 = 0x800000000000LL;
        }
        else
        {
          v35 = 0x1000000000000LL;
        }
        _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, v35);
LABEL_146:
        if ( (KiSpeculationFeatures & 0x10000) != 0 )
        {
          if ( (KiFeatureSettings & 0x800000) == 0 )
          {
            v36 = 0x10000000000000LL;
LABEL_154:
            _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, v36);
            goto LABEL_155;
          }
          if ( BYTE12(KiSpeculationFeatures) )
          {
            _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 0x80000000000000uLL);
            CurrentPrcb->BpbFeatures ^= (CurrentPrcb->BpbFeatures ^ (16 * BYTE12(KiSpeculationFeatures))) & 0x30;
          }
          else
          {
            if ( (KiSpeculationFeatures & 0x20000) == 0 )
            {
              v36 = 0x20000000000000LL;
              goto LABEL_154;
            }
            _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 0x40000000000000uLL);
            CurrentPrcb->BpbKernelSpecCtrl |= 0x400u;
            CurrentPrcb->BpbRetpolineExitSpecCtrl |= 0x400u;
            CurrentPrcb->BpbUserSpecCtrl |= 0x400u;
            CurrentPrcb->BpbNmiSpecCtrl |= 0x400u;
          }
        }
LABEL_155:
        if ( Argument )
        {
          v37 = _InterlockedDecrement((volatile signed __int32 *)Argument);
          v38 = ~v37 & 0x80000000;
          if ( (v37 & 0x7FFFFFFF) != 0 )
          {
            v44 = 0;
            while ( (*(_DWORD *)Argument & 0x80000000) != v38 )
              KeYieldProcessorEx(&v44, v30, v32);
          }
          else
          {
            *(_DWORD *)Argument = v38 | *(_DWORD *)(Argument + 4);
          }
        }
        KiUpdateSpeculationControl(KeGetCurrentThread()->ApcState.Process);
        goto LABEL_126;
      }
      v34 = 0x400000000000000LL;
    }
    else
    {
      v34 = 0x200000000000000LL;
    }
    _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, v34);
    goto LABEL_140;
  }
LABEL_167:
  BpbKernelSpecCtrl = CurrentPrcb->BpbKernelSpecCtrl;
  CurrentPrcb->BpbCurrentSpecCtrl = BpbKernelSpecCtrl;
  if ( BpbKernelSpecCtrl )
    __writemsr(0x48u, BpbKernelSpecCtrl);
  if ( ((unsigned __int64)KiSpeculationFeatures & v5) != 0 && KiSsbdMsr != 72 )
    __writemsr(KiSsbdMsr, KiSsbdBit | __readmsr(KiSsbdMsr));
  KiSetVirtualMitigationControl(CurrentPrcb);
  return 0LL;
}
