/*
 * XREFs of ?ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z @ 0x1800D6BC0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ @ 0x1800A4FF8 (-EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800A75F0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z @ 0x1800A7ED0 (-Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z.c)
 *     ?NotifyAnimationDisconnected@CBaseExpression@@QEAAJXZ @ 0x1800A854C (-NotifyAnimationDisconnected@CBaseExpression@@QEAAJXZ.c)
 *     ??0CExpressionValueStack@@QEAA@PEAVCExpressionManager@@@Z @ 0x1800E29EC (--0CExpressionValueStack@@QEAA@PEAVCExpressionManager@@@Z.c)
 *     ?SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z @ 0x1801E6808 (-SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z.c)
 */

__int64 __fastcall CKeyframeAnimation::ProcessSetBindingBroken(
        CKeyframeAnimation *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_BASEEXPRESSION_SETBINDINGBROKEN *a3)
{
  char v4; // al
  signed int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  signed int v10; // eax
  __int64 v11; // rcx
  signed int v12; // eax
  __int64 v13; // rcx
  _QWORD v14[2]; // [rsp+30h] [rbp-40h] BYREF
  int v15; // [rsp+40h] [rbp-30h]
  void *v16[5]; // [rsp+48h] [rbp-28h] BYREF

  *((_BYTE *)this + 540) &= ~1u;
  v4 = *((_BYTE *)this + 208);
  if ( (v4 & 2) == 0 )
    goto LABEL_5;
  v6 = CBaseExpression::NotifyAnimationDisconnected(this);
  v8 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x204u, 0LL);
    return v8;
  }
  if ( *((_BYTE *)a3 + 8) && *((_DWORD *)this + 130) == 1 )
  {
    CExpressionValueStack::CExpressionValueStack(
      (CExpressionValueStack *)v14,
      *(struct CExpressionManager **)(*((_QWORD *)this + 2) + 240LL));
    v10 = CKeyframeAnimation::Reset(this, 1, (struct CExpressionValueStack *)v14);
    v8 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x20Cu, 0LL);
    }
    else
    {
      v12 = CBaseExpression::SetOutputValue(
              this,
              (const struct CExpressionValue *)((char *)v16[0] + 80 * (unsigned int)(v15 - 1)));
      v8 = v12;
      if ( v12 >= 0 )
      {
        --v15;
        v14[0] = &CExpressionValueStack::`vftable';
        DynArrayImpl<1>::~DynArrayImpl<1>(v16);
        goto LABEL_4;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x20Fu, 0LL);
    }
    v14[0] = &CExpressionValueStack::`vftable';
    DynArrayImpl<1>::~DynArrayImpl<1>(v16);
    return v8;
  }
LABEL_4:
  CBaseExpression::EnsureExpressionIsUnregistered(this);
  v4 = *((_BYTE *)this + 208);
LABEL_5:
  *((_BYTE *)this + 208) = v4 | 8;
  return 0;
}
