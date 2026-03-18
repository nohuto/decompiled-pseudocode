/*
 * XREFs of KiUpdateSpeculationControl @ 0x1400F1C20
 * Callers:
 *     KeOptimizeSpecCtrlSettings @ 0x1401995E0 (KeOptimizeSpecCtrlSettings.c)
 *     SwapContext @ 0x1401CB6C0 (SwapContext.c)
 * Callees:
 *     KiUpdateStibpPairing @ 0x1400F2150 (KiUpdateStibpPairing.c)
 *     KiSynchronizeStibpPairing @ 0x1402ABDAC (KiSynchronizeStibpPairing.c)
 *     KiUpdateSpecCtrlEnhancedIBRS @ 0x1402ABF9C (KiUpdateSpecCtrlEnhancedIBRS.c)
 */

void __fastcall KiUpdateSpeculationControl(__int64 a1)
{
  struct _KPRCB *CurrentPrcb; // rbx
  int v3; // edx
  bool v4; // r9
  unsigned __int8 BpbCurrentSpecCtrl; // di
  char v6; // r13
  int v7; // r14d
  unsigned __int8 BpbRetpolineState; // al
  char v9; // al
  int v10; // r12d
  struct _KPRCB *v11; // r8
  __int64 v12; // r11
  unsigned __int64 TrappedSecurityDomain; // r15
  __int64 BpbRetpolineExitSpecCtrl; // rdx
  unsigned __int8 BpbState; // al
  unsigned __int8 v16; // al
  unsigned __int8 BpbUserSpecCtrl; // cl
  int updated; // eax
  char v19; // di
  bool v20; // cf
  signed __int16 PairRegister; // ax
  signed __int16 v22; // tt
  int v23; // ecx
  unsigned __int8 v24; // al
  unsigned __int8 BpbTrappedRetpolineExitSpecCtrl; // al
  unsigned __int8 BpbKernelSpecCtrl; // al
  int v27; // [rsp+20h] [rbp-48h]
  int v28; // [rsp+78h] [rbp+10h]
  BOOL v29; // [rsp+80h] [rbp+18h]

  CurrentPrcb = KeGetCurrentPrcb();
  v27 = KiSpeculationFeatures;
  v3 = KiSpeculationFeatures;
  if ( (KiSpeculationFeatures & 0x100000) == 0 )
    return;
  _disable();
  CurrentPrcb->BpbState &= 0xE1u;
  if ( (v3 & 1) != 0 )
  {
    KiUpdateSpecCtrlEnhancedIBRS(CurrentPrcb, a1);
    _enable();
    return;
  }
  v4 = 0;
  BpbCurrentSpecCtrl = CurrentPrcb->BpbCurrentSpecCtrl;
  v6 = 0;
  v7 = v3 & 0x2000000;
  if ( (v3 & 0x2000000) != 0 )
  {
    BpbRetpolineState = CurrentPrcb->BpbRetpolineState;
    if ( (BpbRetpolineState & 2) == 0 && (BpbRetpolineState & 1) != 0 )
    {
      v6 = 1;
      BpbCurrentSpecCtrl = CurrentPrcb->BpbTrappedRetpolineExitSpecCtrl;
      v4 = (CurrentPrcb->BpbTrappedBpbState & 0x10) != 0;
    }
  }
  if ( (v3 & 0x400000) != 0 && KiSsbdMsr == 72 )
  {
    BpbCurrentSpecCtrl |= 4u;
    v9 = 4;
  }
  else
  {
    v9 = 0;
  }
  CurrentPrcb->BpbKernelSpecCtrl = v9;
  v10 = 0;
  CurrentPrcb->BpbUserSpecCtrl = v9;
  CurrentPrcb->BpbRetpolineExitSpecCtrl = v9;
  v11 = CurrentPrcb;
  v12 = *(_QWORD *)(a1 + 2144);
  TrappedSecurityDomain = CurrentPrcb->TrappedSecurityDomain;
  v28 = (*(_DWORD *)(a1 + 1788) >> 22) & 1;
  v29 = (*(_DWORD *)(a1 + 1788) & 0x800000) != 0;
  if ( !v28 )
    v12 = 1LL;
  BpbRetpolineExitSpecCtrl = v27 & 0x200000;
  if ( !(_DWORD)BpbRetpolineExitSpecCtrl )
  {
    if ( !v12 )
    {
      if ( (v27 & 2) != 0 )
      {
        if ( (v27 & 0x40) != 0 )
        {
          CurrentPrcb->BpbRetpolineExitSpecCtrl |= 2u;
          if ( !v7 )
            CurrentPrcb->BpbKernelSpecCtrl |= 2u;
        }
        else if ( (v27 & 0x10) != 0 )
        {
          CurrentPrcb->BpbRetpolineExitSpecCtrl |= 1u;
          if ( !v7 )
            CurrentPrcb->BpbKernelSpecCtrl |= 1u;
        }
      }
      goto LABEL_20;
    }
    if ( (v27 & 0x10) != 0 )
    {
      CurrentPrcb->BpbRetpolineExitSpecCtrl |= 1u;
      if ( !v7 )
        CurrentPrcb->BpbKernelSpecCtrl |= 1u;
      CurrentPrcb->BpbState |= 2u;
    }
    else
    {
      if ( (v27 & 0x42) == 0x42 )
      {
        CurrentPrcb->BpbRetpolineExitSpecCtrl |= 2u;
        if ( !v7 )
          CurrentPrcb->BpbKernelSpecCtrl |= 2u;
      }
      BpbState = CurrentPrcb->BpbState;
      if ( v7 )
        v16 = BpbState | 0x12;
      else
        v16 = BpbState | 8;
      CurrentPrcb->BpbState = v16;
    }
  }
  if ( !v12 || (v27 & 0x800000) == 0 )
  {
LABEL_20:
    CurrentPrcb->BpbTrappedRetpolineExitSpecCtrl &= ~4u;
    goto LABEL_21;
  }
  CurrentPrcb->BpbRetpolineExitSpecCtrl |= 4u;
  CurrentPrcb->BpbTrappedRetpolineExitSpecCtrl |= 4u;
  CurrentPrcb->BpbKernelSpecCtrl |= 4u;
  BpbCurrentSpecCtrl |= 4u;
LABEL_21:
  if ( (v27 & 0x42) == 0x42 && ((v27 & 0x10000) != 0 || (*(_DWORD *)(a1 + 2128) & 0x40000000) != 0) )
  {
    CurrentPrcb->BpbUserSpecCtrl |= 2u;
    if ( v7 )
    {
      if ( (PEPROCESS)a1 != PsInitialSystemProcess )
        CurrentPrcb->BpbKernelSpecCtrl |= 2u;
    }
  }
  if ( (v27 & 0x800000) != 0 && (*(_DWORD *)(a1 + 2132) & 0x2000) != 0 )
    CurrentPrcb->BpbUserSpecCtrl |= 4u;
  if ( TrappedSecurityDomain && TrappedSecurityDomain != v12 && TrappedSecurityDomain != *(_QWORD *)(a1 + 2152) )
  {
    if ( (BpbCurrentSpecCtrl & 1) != 0 )
    {
      if ( (v27 & 2) != 0 )
      {
        if ( (CurrentPrcb->PairRegister & 4) == 0 )
        {
          if ( !v7 || (CurrentPrcb->BpbRetpolineState & 1) != 0 )
          {
            if ( (v27 & 0x40) != 0 )
              BpbCurrentSpecCtrl = BpbCurrentSpecCtrl & 4 | 2;
          }
          else
          {
            BpbCurrentSpecCtrl &= 4u;
          }
        }
      }
      else
      {
        BpbCurrentSpecCtrl &= 4u;
      }
      if ( (BpbCurrentSpecCtrl & 1) == 0 )
      {
        v6 = 1;
LABEL_67:
        BpbRetpolineExitSpecCtrl = 0LL;
        __writemsr(0x49u, 1uLL);
        CurrentPrcb->BpbState &= ~4u;
        CurrentPrcb->BpbTrappedBpbState &= ~0x10u;
        CurrentPrcb->TrappedSecurityDomain = 0LL;
        CurrentPrcb->BpbTrappedRetpolineExitSpecCtrl = BpbCurrentSpecCtrl;
        goto LABEL_68;
      }
      goto LABEL_65;
    }
    if ( (_DWORD)BpbRetpolineExitSpecCtrl || (v27 & 0x10) != 0 || v7 && (CurrentPrcb->BpbRetpolineState & 2) == 0 )
LABEL_65:
      CurrentPrcb->BpbState |= 4u;
  }
  if ( v4 )
    goto LABEL_67;
LABEL_68:
  if ( (CurrentPrcb->PairRegister & 4) != 0 )
  {
    if ( TrappedSecurityDomain == v12 )
    {
      BpbUserSpecCtrl = CurrentPrcb->BpbUserSpecCtrl;
      if ( (CurrentPrcb->PairPrcb->PairRegister & 1) != 0 )
      {
        CurrentPrcb->BpbUserSpecCtrl = BpbUserSpecCtrl & 0xFD;
        if ( v7 )
          CurrentPrcb->BpbKernelSpecCtrl &= ~2u;
      }
      else
      {
        CurrentPrcb->BpbUserSpecCtrl = BpbUserSpecCtrl | 2;
        if ( v7 )
          CurrentPrcb->BpbKernelSpecCtrl |= 2u;
      }
    }
    else
    {
      _InterlockedOr16(&CurrentPrcb->PairRegister, 2u);
    }
    if ( !v12 )
    {
      updated = KiUpdateStibpPairing(a1, BpbRetpolineExitSpecCtrl, CurrentPrcb, 2LL);
      v19 = BpbCurrentSpecCtrl & 0xFC;
      BpbRetpolineExitSpecCtrl = CurrentPrcb->BpbRetpolineExitSpecCtrl;
      LOBYTE(BpbRetpolineExitSpecCtrl) = BpbRetpolineExitSpecCtrl & 3;
      v10 = updated;
      CurrentPrcb->BpbTrappedRetpolineExitSpecCtrl = BpbRetpolineExitSpecCtrl | CurrentPrcb->BpbTrappedRetpolineExitSpecCtrl & 0xFC;
      if ( v7 && (CurrentPrcb->BpbRetpolineState & 1) != 0 )
      {
        LOBYTE(BpbRetpolineExitSpecCtrl) = -(char)BpbRetpolineExitSpecCtrl;
        v20 = (_BYTE)BpbRetpolineExitSpecCtrl != 0;
      }
      else
      {
        v20 = (CurrentPrcb->BpbKernelSpecCtrl & 3) != 0;
      }
      v6 = 1;
      BpbCurrentSpecCtrl = (v20 ? 2 : 0) | v19;
      if ( !v28 )
        _InterlockedOr16(&CurrentPrcb->PairRegister, 2u);
      goto LABEL_98;
    }
    if ( v29 )
    {
      BpbRetpolineExitSpecCtrl = 256LL;
      _m_prefetchw((char *)&CurrentPrcb->2 + 14);
      PairRegister = CurrentPrcb->PairRegister;
      do
      {
        v22 = PairRegister;
        PairRegister = _InterlockedCompareExchange16(&CurrentPrcb->PairRegister, PairRegister | 0x100, PairRegister);
      }
      while ( v22 != PairRegister );
      v23 = PairRegister & 1;
      if ( (KiSpeculationFeatures & 0x2000000) != 0 )
      {
        v24 = CurrentPrcb->BpbRetpolineExitSpecCtrl;
        if ( (v24 & 3) == 0 )
          CurrentPrcb->BpbRetpolineExitSpecCtrl = v24 | 2;
        BpbTrappedRetpolineExitSpecCtrl = CurrentPrcb->BpbTrappedRetpolineExitSpecCtrl;
        if ( (BpbTrappedRetpolineExitSpecCtrl & 3) == 0 )
          CurrentPrcb->BpbTrappedRetpolineExitSpecCtrl = BpbTrappedRetpolineExitSpecCtrl | 2;
        if ( (CurrentPrcb->BpbRetpolineState & 1) == 0 )
          goto LABEL_97;
      }
      else
      {
        BpbKernelSpecCtrl = CurrentPrcb->BpbKernelSpecCtrl;
        if ( (BpbKernelSpecCtrl & 3) == 0 )
          CurrentPrcb->BpbKernelSpecCtrl = BpbKernelSpecCtrl | 2;
      }
      if ( (BpbCurrentSpecCtrl & 3) == 0 )
        BpbCurrentSpecCtrl |= 2u;
LABEL_97:
      _InterlockedOr16(&CurrentPrcb->PairRegister, 2u);
      v10 = v23;
    }
  }
LABEL_98:
  if ( BpbCurrentSpecCtrl != CurrentPrcb->BpbCurrentSpecCtrl )
  {
    CurrentPrcb->BpbCurrentSpecCtrl = BpbCurrentSpecCtrl;
    BpbRetpolineExitSpecCtrl = 0LL;
    __writemsr(0x48u, BpbCurrentSpecCtrl);
  }
  if ( v6 )
    CurrentPrcb->BpbRetpolineState |= 2u;
  _mm_lfence();
  _enable();
  if ( v10 )
    KiSynchronizeStibpPairing(CurrentPrcb, BpbRetpolineExitSpecCtrl, v11);
}
