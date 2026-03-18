/*
 * XREFs of ?SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMaskType@@E_K@Z @ 0x180082990
 * Callers:
 *     ?ProcessSetTarget@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_SETTARGET@@@Z @ 0x1800828E0 (-ProcessSetTarget@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_SETTARG.c)
 *     ?Initialize@CKeyframeAnimation@@QEAAJPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4Enum@CompositionColorSpace@@W4SubchannelMaskType@@E_KW44KeyframeAnimationDelayBehavior@@MW44KeyframeAnimationDirection@@MW44KeyframeAnimationStopBehavior@@IPEAUKeyframeData@@@Z @ 0x1801E1520 (-Initialize@CKeyframeAnimation@@QEAAJPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4Enum@Comp.c)
 *     ?Initialize@CScrollAnimation@@IEAAJPEAVCInteractionTracker@@W4ScrollAxis@@@Z @ 0x18020731C (-Initialize@CScrollAnimation@@IEAAJPEAVCInteractionTracker@@W4ScrollAxis@@@Z.c)
 * Callees:
 *     ??$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z @ 0x18002B298 (--$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z.c)
 *     ?Create@?$CWeakReference@VCVisual@@@@SAJPEAVCVisual@@PEAPEAV1@@Z @ 0x18002B314 (-Create@-$CWeakReference@VCVisual@@@@SAJPEAVCVisual@@PEAPEAV1@@Z.c)
 *     ?NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z @ 0x18008092C (-NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z.c)
 *     ?TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ @ 0x180082B24 (-TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ.c)
 *     ?SetChannelHandle@CBaseExpression@@IEAAJI@Z @ 0x180082BA4 (-SetChannelHandle@CBaseExpression@@IEAAJI@Z.c)
 *     ?EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ @ 0x180082BD4 (-EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1800881C4 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800CEFE0 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBaseExpression::SetTarget(
        __int64 a1,
        unsigned int a2,
        struct CResource *a3,
        int a4,
        unsigned int a5,
        int a6,
        char a7,
        __int64 a8)
{
  struct CWeakResourceReference *v8; // rsi
  int v13; // eax
  unsigned int v14; // ecx
  unsigned int v15; // ebx
  struct CWeakResourceReference **v16; // rbx
  bool v17; // cf
  void *v18; // rcx
  _BYTE *v20; // rax
  _DWORD *v21; // rax
  _DWORD *v22; // rdx
  int v23; // eax
  __int64 v24; // rax
  unsigned int v25; // [rsp+20h] [rbp-28h]
  struct CWeakResourceReference *v26; // [rsp+60h] [rbp+18h] BYREF

  v8 = 0LL;
  v26 = 0LL;
  if ( !a3 )
  {
    if ( (*(_BYTE *)(a1 + 208) & 2) != 0 )
    {
      v13 = CBaseExpression::NotifyAnimationStateChanged(a1, 8);
      v15 = v13;
      if ( v13 < 0 )
      {
        v25 = 134;
        goto LABEL_39;
      }
    }
    else
    {
      v13 = CBaseExpression::NotifyAnimationStateChanged(a1, 16);
      v15 = v13;
      if ( v13 < 0 )
      {
        v25 = 138;
        goto LABEL_39;
      }
    }
  }
  CBaseExpression::EnsureExpressionIsUnregistered((CBaseExpression *)a1);
  if ( a3 )
  {
    v13 = CWeakReference<CVisual>::Create(a3, &v26);
    v15 = v13;
    if ( v13 >= 0 )
    {
      v8 = v26;
      goto LABEL_5;
    }
    v25 = 146;
LABEL_39:
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, v25, 0LL);
    goto LABEL_15;
  }
LABEL_5:
  v16 = (struct CWeakResourceReference **)(a1 + 176);
  ReleaseInterface<CDisplay>((__int64 *)(a1 + 176));
  if ( v8 && *((_QWORD *)v8 + 2) )
  {
    v26 = 0LL;
    *v16 = v8;
  }
  *(_BYTE *)(a1 + 208) &= ~2u;
  v17 = *v16 != 0LL;
  *(_DWORD *)(a1 + 184) = a4;
  *(_BYTE *)(a1 + 208) |= v17 ? 2 : 0;
  v13 = CBaseExpression::SetChannelHandle((CBaseExpression *)a1, a2);
  v15 = v13;
  if ( v13 < 0 )
  {
    v25 = 160;
    goto LABEL_39;
  }
  v13 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 280LL))(a1, a5);
  v15 = v13;
  if ( v13 < 0 )
  {
    v25 = 161;
    goto LABEL_39;
  }
  v18 = *(void **)(a1 + 192);
  if ( v18 )
  {
    operator delete(v18, 8uLL);
    *(_QWORD *)(a1 + 192) = 0LL;
  }
  LOBYTE(v15) = a7;
  if ( a7 )
  {
    if ( a6 == 1 )
    {
      v20 = operator new(0xCuLL);
      if ( v20 )
      {
        *(_DWORD *)v20 = 1;
        v20[4] = (unsigned __int8)v15 < 5u ? v15 : 0;
        v20[8] = a8;
      }
      *(_QWORD *)(a1 + 192) = v20;
    }
    else
    {
      if ( a6 != 2 )
      {
        v15 = -2147467259;
        MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v18, 0LL, 0, -2147467259, 0xB6u, 0LL);
        goto LABEL_15;
      }
      v21 = operator new(0x10uLL);
      v22 = v21;
      if ( v21 )
      {
        *v21 = 2;
        if ( (unsigned __int8)v15 > 0x10u || (v23 = 65631, !_bittest(&v23, v15)) )
          LOBYTE(v15) = 0;
        v24 = a8;
        *((_BYTE *)v22 + 4) = v15;
        *((_QWORD *)v22 + 1) = v24;
      }
      else
      {
        v22 = 0LL;
      }
      *(_QWORD *)(a1 + 192) = v22;
    }
  }
  v13 = CBaseExpression::TryRegisterWithExpressionManager((CBaseExpression *)a1);
  v15 = v13;
  if ( v13 < 0 )
  {
    v25 = 186;
    goto LABEL_39;
  }
  v15 = 0;
LABEL_15:
  ReleaseInterface<CDisplay>((__int64 *)&v26);
  return v15;
}
