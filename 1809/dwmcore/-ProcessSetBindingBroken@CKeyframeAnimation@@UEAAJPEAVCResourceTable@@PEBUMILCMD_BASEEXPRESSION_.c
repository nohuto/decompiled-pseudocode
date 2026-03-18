/*
 * XREFs of ?ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z @ 0x1800548B0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z @ 0x18001BD68 (-SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z.c)
 *     ??0CExpressionValue@@QEAA@XZ @ 0x180051898 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x180053818 (--1CExpressionValue@@QEAA@XZ.c)
 *     ?NotifyAnimationDisconnected@CBaseExpression@@QEAAJXZ @ 0x180053830 (-NotifyAnimationDisconnected@CBaseExpression@@QEAAJXZ.c)
 *     ?EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ @ 0x180053984 (-EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ.c)
 *     ?Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z @ 0x18005427C (-Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x180055584 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     ??0CExpressionValueStack@@QEAA@PEAVCExpressionManager@@@Z @ 0x180062E4C (--0CExpressionValueStack@@QEAA@PEAVCExpressionManager@@@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009BE74 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CKeyframeAnimation::ProcessSetBindingBroken(
        CKeyframeAnimation *this,
        struct CResourceTable *a2,
        const struct MILCMD_BASEEXPRESSION_SETBINDINGBROKEN *a3)
{
  char v4; // al
  int v6; // eax
  unsigned int v7; // ecx
  unsigned int v8; // ebx
  int v9; // eax
  unsigned int v10; // ecx
  __int64 v11; // r8
  __int64 v12; // rax
  CExpressionValue *v13; // rax
  const struct CExpressionValue *v14; // rbx
  int v15; // eax
  unsigned int v16; // ecx
  _QWORD v18[2]; // [rsp+38h] [rbp-39h] BYREF
  int v19; // [rsp+48h] [rbp-29h]
  _QWORD v20[3]; // [rsp+50h] [rbp-21h] BYREF
  unsigned int v21; // [rsp+68h] [rbp-9h]
  _BYTE v22[80]; // [rsp+78h] [rbp+7h] BYREF

  *((_BYTE *)this + 524) &= ~1u;
  v4 = *((_BYTE *)this + 208);
  if ( (v4 & 2) == 0 )
    goto LABEL_12;
  v6 = CBaseExpression::NotifyAnimationDisconnected(this);
  v8 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x207u);
    return v8;
  }
  if ( *((_DWORD *)a3 + 2) && *((_DWORD *)this + 126) == 1 )
  {
    CExpressionValueStack::CExpressionValueStack(
      (CExpressionValueStack *)v18,
      *(struct CExpressionManager **)(*((_QWORD *)this + 2) + 224LL));
    v9 = CKeyframeAnimation::Reset(this, 1, (struct CExpressionValueStack *)v18);
    v8 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x20Fu);
    }
    else
    {
      v12 = (unsigned int)(v19 - 1);
      if ( (unsigned int)v12 < v21 )
      {
        v14 = (const struct CExpressionValue *)(v20[0] + 80 * v12);
      }
      else
      {
        v13 = CExpressionValue::CExpressionValue((CExpressionValue *)v22);
        v14 = (const struct CExpressionValue *)&CExpressionValueStack::s_emptyValue;
        CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v13);
        CExpressionValue::~CExpressionValue((CExpressionValue *)v22);
      }
      v15 = CBaseExpression::SetOutputValue(this, v14, v11);
      v8 = v15;
      if ( v15 >= 0 )
      {
        --v19;
        v18[0] = &CExpressionValueStack::`vftable';
        DynArrayImpl<1>::~DynArrayImpl<1>(v20);
        goto LABEL_11;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x212u);
    }
    v18[0] = &CExpressionValueStack::`vftable';
    DynArrayImpl<1>::~DynArrayImpl<1>(v20);
    return v8;
  }
LABEL_11:
  CBaseExpression::EnsureExpressionIsUnregistered(this);
  v4 = *((_BYTE *)this + 208);
LABEL_12:
  *((_BYTE *)this + 208) = v4 | 8;
  return 0;
}
