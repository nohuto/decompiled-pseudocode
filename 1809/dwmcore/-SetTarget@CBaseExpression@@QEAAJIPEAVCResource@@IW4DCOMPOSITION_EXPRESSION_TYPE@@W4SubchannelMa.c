/*
 * XREFs of ?SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMaskType@@E_K@Z @ 0x1800BD464
 * Callers:
 *     ?ProcessSetTarget@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_SETTARGET@@@Z @ 0x1800BD3B4 (-ProcessSetTarget@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_SETTARGET@.c)
 *     ?Initialize@CKeyframeAnimation@@QEAAJPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4Enum@CompositionColorSpace@@W4SubchannelMaskType@@E_KW44KeyframeAnimationDelayBehavior@@MW44KeyframeAnimationDirection@@MW44KeyframeAnimationStopBehavior@@IPEAUKeyframeData@@@Z @ 0x1801A3998 (-Initialize@CKeyframeAnimation@@QEAAJPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4Enum@Comp.c)
 *     ?Initialize@CScrollAnimation@@IEAAJPEAVCInteractionTracker@@W4ScrollAxis@@@Z @ 0x1801D61A4 (-Initialize@CScrollAnimation@@IEAAJPEAVCInteractionTracker@@W4ScrollAxis@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18002FAC8 (--2@YAPEAX_K@Z.c)
 *     ?NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z @ 0x180051474 (-NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z.c)
 *     ?Create@?$CWeakReference@VCVisual@@@@SAJPEAVCVisual@@PEAPEAV1@@Z @ 0x1800A0000 (-Create@-$CWeakReference@VCVisual@@@@SAJPEAVCVisual@@PEAPEAV1@@Z.c)
 *     ?UnregisterExpression@CExpressionManager@@QEAAXPEAVCBaseExpression@@@Z @ 0x1800BD280 (-UnregisterExpression@CExpressionManager@@QEAAXPEAVCBaseExpression@@@Z.c)
 *     ?TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ @ 0x1800BD640 (-TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ.c)
 *     ?SetChannelHandle@CBaseExpression@@IEAAJI@Z @ 0x1800BD6C0 (-SetChannelHandle@CBaseExpression@@IEAAJI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800EBE98 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
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
  __int64 v16; // rcx
  int v17; // eax
  unsigned int v18; // ecx
  void *v19; // rcx
  _BYTE *v21; // rax
  int v22; // eax
  unsigned int v23; // ecx
  int v24; // eax
  unsigned int v25; // ecx
  _BYTE *v26; // rax
  _BYTE *v27; // rdx
  int v28; // eax
  __int64 v29; // rax
  unsigned int v30; // [rsp+20h] [rbp-28h]
  struct CWeakResourceReference *v31; // [rsp+60h] [rbp+18h] BYREF

  v8 = 0LL;
  v31 = 0LL;
  if ( !a3 )
  {
    if ( (*(_BYTE *)(a1 + 208) & 2) != 0 )
    {
      v22 = CBaseExpression::NotifyAnimationStateChanged(a1, 8);
      v15 = v22;
      if ( v22 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0x8Bu);
        return v15;
      }
    }
    else
    {
      v24 = CBaseExpression::NotifyAnimationStateChanged(a1, 16);
      v15 = v24;
      if ( v24 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v24, 0x8Fu);
        return v15;
      }
    }
  }
  if ( (*(_BYTE *)(a1 + 208) & 4) != 0 )
  {
    CExpressionManager::UnregisterExpression(
      *(CExpressionManager **)(*(_QWORD *)(a1 + 16) + 224LL),
      (struct CBaseExpression *)a1);
    *(_BYTE *)(a1 + 208) &= ~4u;
  }
  if ( a3 )
  {
    v13 = CWeakReference<CVisual>::Create(a3, &v31);
    v15 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x97u);
      v8 = v31;
      goto LABEL_19;
    }
    v8 = v31;
  }
  v16 = *(_QWORD *)(a1 + 176);
  if ( v16 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
    *(_QWORD *)(a1 + 176) = 0LL;
    v16 = 0LL;
  }
  if ( v8 && *((_QWORD *)v8 + 2) )
  {
    *(_QWORD *)(a1 + 176) = v8;
    v8 = 0LL;
    v16 = *(_QWORD *)(a1 + 176);
  }
  *(_BYTE *)(a1 + 208) &= ~2u;
  *(_DWORD *)(a1 + 184) = a4;
  *(_BYTE *)(a1 + 208) |= v16 != 0 ? 2 : 0;
  v17 = CBaseExpression::SetChannelHandle((CBaseExpression *)a1, a2);
  v15 = v17;
  if ( v17 < 0 )
  {
    v30 = 165;
  }
  else
  {
    v17 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 248LL))(a1, a5);
    v15 = v17;
    if ( v17 < 0 )
    {
      v30 = 166;
    }
    else
    {
      v19 = *(void **)(a1 + 192);
      if ( v19 )
      {
        operator delete(v19, 8uLL);
        *(_QWORD *)(a1 + 192) = 0LL;
      }
      LOBYTE(v15) = a7;
      if ( a7 )
      {
        if ( a6 == 1 )
        {
          v21 = operator new(0xCuLL);
          if ( v21 )
          {
            *(_DWORD *)v21 = 1;
            v21[4] = (unsigned __int8)v15 < 5u ? v15 : 0;
            v21[8] = a8;
          }
          *(_QWORD *)(a1 + 192) = v21;
        }
        else
        {
          if ( a6 != 2 )
          {
            v15 = -2147467259;
            MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v19, 0LL, 0, -2147467259, 0xBBu);
            goto LABEL_19;
          }
          v26 = operator new(0x10uLL);
          v27 = v26;
          if ( v26 )
          {
            v26[4] = 0;
            *(_DWORD *)v26 = 2;
            if ( (unsigned __int8)v15 > 0x10u || (v28 = 65631, !_bittest(&v28, v15)) )
              LOBYTE(v15) = 0;
            v29 = a8;
            v27[4] = v15;
            *((_QWORD *)v27 + 1) = v29;
          }
          else
          {
            v27 = 0LL;
          }
          *(_QWORD *)(a1 + 192) = v27;
        }
      }
      v17 = CBaseExpression::TryRegisterWithExpressionManager((CBaseExpression *)a1);
      v15 = v17;
      if ( v17 >= 0 )
      {
        v15 = 0;
        goto LABEL_19;
      }
      v30 = 191;
    }
  }
  MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, v30);
LABEL_19:
  if ( v8 )
    (*(void (__fastcall **)(struct CWeakResourceReference *))(*(_QWORD *)v8 + 8LL))(v8);
  return v15;
}
