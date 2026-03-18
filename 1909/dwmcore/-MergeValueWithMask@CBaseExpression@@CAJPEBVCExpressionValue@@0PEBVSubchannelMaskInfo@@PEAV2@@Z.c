/*
 * XREFs of ?MergeValueWithMask@CBaseExpression@@CAJPEBVCExpressionValue@@0PEBVSubchannelMaskInfo@@PEAV2@@Z @ 0x1800C3B00
 * Callers:
 *     ?SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z @ 0x1800760D0 (-SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z.c)
 *     ?NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z @ 0x1800A5654 (-NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z @ 0x1800A7080 (-CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z.c)
 *     ?GetExpressionTypeChannelCount@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1800C3D74 (-GetExpressionTypeChannelCount@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 */

__int64 __fastcall CBaseExpression::MergeValueWithMask(
        __int64 a1,
        const struct CExpressionValue *a2,
        const struct SubchannelMaskInfo *a3,
        struct CExpressionValue *a4)
{
  int v4; // r10d
  unsigned int *v8; // rdi
  int v9; // r8d
  unsigned __int64 v10; // r10
  unsigned int ExpressionTypeChannelCount; // eax
  __int64 v12; // rdx
  __int64 v13; // r8
  unsigned int v14; // ebx
  unsigned int v16; // r9d
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
    v17 = 1817;
    goto LABEL_17;
  }
  if ( v9 != 1 )
  {
    v16 = -2147467259;
    v17 = 1836;
LABEL_18:
    v14 = v16;
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, v16, v17, 0LL);
    return v14;
  }
  if ( v4 != 104 && v4 != 265 )
  {
    v17 = 1826;
LABEL_17:
    v16 = -2147024809;
    goto LABEL_18;
  }
LABEL_4:
  CExpressionValue::CopyFrom(a4, (const struct CExpressionValue *)v8);
  if ( *((_BYTE *)a3 + 4) )
  {
    while ( 1 )
    {
      ExpressionTypeChannelCount = GetExpressionTypeChannelCount(v8[18]);
      if ( (unsigned int)v12 >= ExpressionTypeChannelCount || (unsigned int)v12 >= 0x10 )
        break;
      *((_DWORD *)a4 + v12) = *((_DWORD *)a2 + v13);
      if ( (int)v13 + 1 >= (unsigned int)*((unsigned __int8 *)a3 + 4) )
        return 0;
    }
    v16 = -2147467259;
    v17 = 1875;
    goto LABEL_18;
  }
  return 0;
}
