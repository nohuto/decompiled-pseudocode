/*
 * XREFs of KeOptimizeSpecCtrlSettings @ 0x140198F80
 * Callers:
 *     <none>
 * Callees:
 *     KeGetPrcb @ 0x140005278 (KeGetPrcb.c)
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     KiUpdateSpeculationControl @ 0x1400EA240 (KiUpdateSpeculationControl.c)
 *     KeExitRetpoline @ 0x1400FF0D8 (KeExitRetpoline.c)
 *     HvlIsCoreSharingPossible @ 0x140284BF8 (HvlIsCoreSharingPossible.c)
 *     HvlIsStibpPairingRecommended @ 0x140284C68 (HvlIsStibpPairingRecommended.c)
 *     KiDetectAmdNonArchSsbdSupport @ 0x1402ABF60 (KiDetectAmdNonArchSsbdSupport.c)
 */

ULONG_PTR __fastcall KeOptimizeSpecCtrlSettings(ULONG_PTR Argument)
{
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v3; // rdx
  unsigned int v4; // r8d
  __int64 v5; // rcx
  signed __int32 v6; // eax
  unsigned int v7; // esi
  volatile signed __int32 v8; // eax
  unsigned __int8 v9; // al
  signed __int32 v10; // eax
  unsigned int v11; // esi
  __int64 v12; // r8
  unsigned __int64 CoreProcessorSet; // r9
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rax
  char v16; // cl
  unsigned __int64 v17; // rax
  int v18; // ecx
  __int64 v19; // rax
  signed __int32 v20; // eax
  unsigned int v21; // esi
  unsigned __int8 BpbKernelSpecCtrl; // al
  unsigned __int8 v23; // al
  int v25; // [rsp+50h] [rbp+8h] BYREF
  int v26; // [rsp+58h] [rbp+10h] BYREF
  int v27; // [rsp+60h] [rbp+18h] BYREF
  int v28; // [rsp+68h] [rbp+20h]

  CurrentPrcb = KeGetCurrentPrcb();
  if ( ((CurrentPrcb->CoreProcessorSet - 1) & CurrentPrcb->CoreProcessorSet) != 0 )
    _InterlockedOr((volatile signed __int32 *)&KiSpeculationFeatures, 2u);
  if ( HvlHypervisorConnected && (unsigned __int8)((__int64 (*)(void))HvlIsCoreSharingPossible)() )
    _InterlockedOr((volatile signed __int32 *)&KiSpeculationFeatures, 2u);
  if ( (KiFeatureSettings & 0x80u) != 0 )
    _InterlockedOr((volatile signed __int32 *)&KiSpeculationFeatures, 0x1000000u);
  if ( CurrentPrcb->CpuVendor == 1 )
    KiDetectAmdNonArchSsbdSupport(CurrentPrcb);
  v3 = 0x800000LL;
  v4 = 0x400000;
  if ( (KiSpeculationFeatures & 0x80u) != 0LL && (KiSpeculationFeatures & 0x100) == 0 )
  {
    if ( (KiFeatureSettings & 8) != 0 )
      goto LABEL_16;
    if ( (KiFeatureSettings & 0x10) == 0 )
      goto LABEL_17;
    if ( KiSsbdMsr != 72 )
LABEL_16:
      _InterlockedOr((volatile signed __int32 *)&KiSpeculationFeatures, 0x400000u);
    else
      _InterlockedOr((volatile signed __int32 *)&KiSpeculationFeatures, 0x800000u);
  }
LABEL_17:
  if ( (KiSpeculationFeatures & 4) == 0 )
    _InterlockedOr((volatile signed __int32 *)&KiSpeculationFeatures, 0x80000u);
  v5 = 0x40000LL;
  if ( (KiFeatureSettings & 4) != 0 )
  {
    _InterlockedOr((volatile signed __int32 *)&KiSpeculationFeatures, 0x40000u);
  }
  else if ( (KiFeatureSettings & 1) != 0 )
  {
    _InterlockedOr((volatile signed __int32 *)&KiSpeculationFeatures, 0x40000u);
    if ( HvlHypervisorConnected )
    {
      if ( (HvlpFlags & 2) != 0
        && (unsigned __int8)HvlIsCoreSharingPossible(0x40000LL, 0x800000LL, 0x400000LL)
        && (KiSpeculationFeatures & 0x40) != 0 )
      {
        CurrentPrcb->BpbKernelSpecCtrl = 2;
        CurrentPrcb->BpbUserSpecCtrl = 2;
        CurrentPrcb->BpbRetpolineExitSpecCtrl = 2;
      }
    }
  }
  if ( Argument )
  {
    v6 = _InterlockedDecrement((volatile signed __int32 *)Argument);
    v7 = ~v6 & 0x80000000;
    if ( (v6 & 0x7FFFFFFF) != 0 )
    {
      v8 = *(_DWORD *)Argument;
      v25 = 0;
      if ( (v8 & 0x80000000) != v7 )
      {
        do
          KeYieldProcessorEx(&v25);
        while ( (*(_DWORD *)Argument & 0x80000000) != v7 );
        v3 = 0x800000LL;
        v4 = 0x400000;
      }
    }
    else
    {
      *(_DWORD *)Argument = v7 | *(_DWORD *)(Argument + 4);
    }
  }
  if ( (KiSpeculationFeatures & 0x40000) != 0 || (KiSpeculationFeatures & 0x80000) != 0 )
  {
    if ( ((unsigned int)KiSpeculationFeatures & (unsigned int)v3) != 0 )
    {
      _InterlockedOr((volatile signed __int32 *)&KiSpeculationFeatures, v4);
      _InterlockedAnd((volatile signed __int32 *)&KiSpeculationFeatures, 0xFF7FFFFF);
    }
    if ( ((unsigned int)KiSpeculationFeatures & v4) != 0 )
    {
      BpbKernelSpecCtrl = CurrentPrcb->BpbKernelSpecCtrl;
      if ( KiSsbdMsr == 72 )
        BpbKernelSpecCtrl |= 4u;
      CurrentPrcb->BpbKernelSpecCtrl = BpbKernelSpecCtrl;
      CurrentPrcb->BpbUserSpecCtrl = BpbKernelSpecCtrl;
    }
  }
  else
  {
    _InterlockedOr((volatile signed __int32 *)&KiSpeculationFeatures, 0x100000u);
    CurrentPrcb->BpbFeatures |= 2u;
    if ( (KiSpeculationFeatures & 1) == 0 )
      goto LABEL_42;
    CurrentPrcb->BpbKernelSpecCtrl = 1;
    CurrentPrcb->BpbUserSpecCtrl = 1;
    CurrentPrcb->BpbRetpolineExitSpecCtrl = 1;
    if ( ((unsigned int)KiSpeculationFeatures & v4) != 0
      || ((unsigned int)KiSpeculationFeatures & (unsigned int)v3) != 0 )
    {
      v9 = CurrentPrcb->BpbKernelSpecCtrl;
      if ( KiSsbdMsr == 72 )
        v9 |= 4u;
      CurrentPrcb->BpbKernelSpecCtrl = v9;
      CurrentPrcb->BpbUserSpecCtrl = v9;
      CurrentPrcb->BpbRetpolineExitSpecCtrl = v9;
    }
    if ( ((unsigned int)KiSpeculationFeatures & (unsigned int)v3) != 0 )
    {
LABEL_42:
      if ( (KiSpeculationFeatures & 0x10) != 0 )
      {
        CurrentPrcb->BpbNmiSpecCtrl = 1;
      }
      else if ( (KiSpeculationFeatures & 0x40) != 0 && (KiSpeculationFeatures & 2) != 0 )
      {
        CurrentPrcb->BpbNmiSpecCtrl = 2;
      }
      if ( (((unsigned int)KiSpeculationFeatures & v4) != 0
         || ((unsigned int)KiSpeculationFeatures & (unsigned int)v3) != 0)
        && KiSsbdMsr == 72 )
      {
        CurrentPrcb->BpbNmiSpecCtrl |= 4u;
      }
      if ( (KiSpeculationFeatures & 1) == 0 )
      {
        if ( Argument )
        {
          v10 = _InterlockedDecrement((volatile signed __int32 *)Argument);
          v11 = ~v10 & 0x80000000;
          if ( (v10 & 0x7FFFFFFF) != 0 )
          {
            v26 = 0;
            while ( (*(_DWORD *)Argument & 0x80000000) != v11 )
              KeYieldProcessorEx(&v26);
          }
          else
          {
            *(_DWORD *)Argument = v11 | *(_DWORD *)(Argument + 4);
          }
        }
        if ( (KiSpeculationFeatures & 0x2000000) != 0 )
        {
          CurrentPrcb->BpbRetpolineState |= 4u;
          KeExitRetpoline();
        }
        if ( (KiSpeculationFeatures & 2) != 0
          && !HvlHypervisorConnected
          && ((KiSpeculationFeatures & 0x10) != 0 || (KiSpeculationFeatures & 0x40) != 0) )
        {
          _InterlockedOr((volatile signed __int32 *)&KiSpeculationFeatures, 0x20000u);
          CurrentPrcb->BpbFeatures |= 1u;
        }
        v12 = 0LL;
        if ( (KiSpeculationFeatures & 2) != 0
          && (KiSpeculationFeatures & 0x40) != 0
          && (KiSpeculationFeatures & 0x10) != 0
          && (KiSpeculationFeatures & 0x1000000) == 0 )
        {
          CoreProcessorSet = CurrentPrcb->CoreProcessorSet;
          v14 = CoreProcessorSet - ((CoreProcessorSet >> 1) & 0x5555555555555555LL);
          v3 = v14 & 0x3333333333333333LL;
          v15 = ((v14 & 0x3333333333333333LL)
               + ((v14 >> 2) & 0x3333333333333333LL)
               + (((v14 & 0x3333333333333333LL) + ((v14 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL;
          v5 = 0x101010101010101LL;
          if ( (0x101010101010101LL * v15) >> 56 == 2
            && (!HvlHypervisorConnected
             || !(unsigned __int8)HvlIsCoreSharingPossible(0x101010101010101LL, v3, 0LL)
             || (HvlpFlags & 2) != 0 && (unsigned __int8)HvlIsStibpPairingRecommended()) )
          {
            v16 = CurrentPrcb->GroupIndex + 1;
            _BitScanForward64(&v17, __ROR8__(CoreProcessorSet, v16));
            v18 = ((_BYTE)v17 + v16) & 0x3F;
            v19 = v18 + (CurrentPrcb->Group << 6);
            v28 = v18;
            CurrentPrcb->PairPrcb = (_KPRCB *)KeGetPrcb(KiProcessorNumberToIndexMappingTable[v19]);
            CurrentPrcb->PairRegister = 6;
            v12 = 1LL;
          }
        }
        if ( (KiFeatureSettings & 0x20) != 0 && (KiSpeculationFeatures & 2) != 0 && (KiSpeculationFeatures & 0x40) != 0
          || (KiSpeculationFeatures & 2) != 0
          && (KiSpeculationFeatures & 0x40) != 0
          && !(_DWORD)v12
          && (KiSpeculationFeatures & 0x1000000) == 0
          && HvlHypervisorConnected
          && (unsigned __int8)HvlIsCoreSharingPossible(v5, v3, v12) )
        {
          _InterlockedOr((volatile signed __int32 *)&KiSpeculationFeatures, 0x10000u);
        }
        if ( CurrentPrcb->CpuVendor != 1 || (KiSpeculationFeatures & 0x10) != 0 || (KiFeatureSettings & 0x40) != 0 )
        {
          if ( Argument )
          {
            v20 = _InterlockedDecrement((volatile signed __int32 *)Argument);
            v21 = ~v20 & 0x80000000;
            if ( (v20 & 0x7FFFFFFF) != 0 )
            {
              v27 = 0;
              while ( (*(_DWORD *)Argument & 0x80000000) != v21 )
                KeYieldProcessorEx(&v27);
            }
            else
            {
              *(_DWORD *)Argument = v21 | *(_DWORD *)(Argument + 4);
            }
          }
          KiUpdateSpeculationControl((__int64)KeGetCurrentThread()->ApcState.Process);
        }
        else
        {
          _InterlockedOr((volatile signed __int32 *)&KiSpeculationFeatures, 0x200000u);
        }
        v4 = 0x400000;
      }
    }
  }
  v23 = CurrentPrcb->BpbKernelSpecCtrl;
  CurrentPrcb->BpbCurrentSpecCtrl = v23;
  if ( v23 )
    __writemsr(0x48u, v23);
  if ( ((unsigned int)KiSpeculationFeatures & v4) != 0 && KiSsbdMsr != 72 )
    __writemsr(KiSsbdMsr, KiSsbdBit | __readmsr(KiSsbdMsr));
  return 0LL;
}
