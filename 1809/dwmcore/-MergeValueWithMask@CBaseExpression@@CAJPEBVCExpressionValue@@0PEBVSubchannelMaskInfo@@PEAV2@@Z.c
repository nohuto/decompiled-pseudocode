/*
 * XREFs of ?MergeValueWithMask@CBaseExpression@@CAJPEBVCExpressionValue@@0PEBVSubchannelMaskInfo@@PEAV2@@Z @ 0x180055160
 * Callers:
 *     ?SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z @ 0x1800506D0 (-SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z.c)
 *     ?NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z @ 0x180051474 (-NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z.c)
 * Callees:
 *     ?CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z @ 0x180052EB4 (-CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z.c)
 *     ?GetExpressionTypeChannelCount@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180055560 (-GetExpressionTypeChannelCount@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CBaseExpression::MergeValueWithMask(
        __int64 a1,
        const struct CExpressionValue *a2,
        const struct SubchannelMaskInfo *a3,
        struct CExpressionValue *a4)
{
  int v4; // r10d
  unsigned int *v8; // rsi
  int v9; // r8d
  unsigned __int64 v10; // r10
  unsigned int v11; // ebx
  unsigned int ExpressionTypeChannelCount; // eax
  __int64 v13; // rdx
  unsigned int v14; // r8d
  int v16; // r9d
  unsigned int v17; // [rsp+20h] [rbp-18h]

  v4 = *(_DWORD *)(a1 + 72);
  v8 = (unsigned int *)a1;
  v9 = *(_DWORD *)a3 - 1;
  if ( !v9 )
  {
    v10 = (unsigned int)(v4 - 18);
    if ( (unsigned int)v10 <= 0x33 )
    {
      a1 = 0x8000400020001LL;
      if ( _bittest64(&a1, v10) )
        goto LABEL_4;
    }
    v17 = 1772;
    goto LABEL_16;
  }
  if ( v9 != 1 )
  {
    v16 = -2147467259;
    v17 = 1791;
LABEL_17:
    v11 = v16;
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, v16, v17);
    return v11;
  }
  if ( v4 != 104 && v4 != 265 )
  {
    v17 = 1781;
LABEL_16:
    v16 = -2147024809;
    goto LABEL_17;
  }
LABEL_4:
  CExpressionValue::CopyFrom(a4, (const struct CExpressionValue *)v8);
  v11 = 0;
  if ( *((_BYTE *)a3 + 4) )
  {
    while ( 1 )
    {
      ExpressionTypeChannelCount = GetExpressionTypeChannelCount(v8[18]);
      if ( (unsigned int)v13 >= ExpressionTypeChannelCount || (unsigned int)v13 >= 0x10 )
        break;
      *((_DWORD *)a4 + v13) = *((_DWORD *)a2 + v14);
      if ( v14 + 1 >= *((unsigned __int8 *)a3 + 4) )
        return v11;
    }
    v16 = -2147467259;
    v17 = 1830;
    goto LABEL_17;
  }
  return v11;
}
