/*
 * XREFs of ?CopyIntoFloatArray@CExpressionValue@@QEBAJIPEAM@Z @ 0x180055518
 * Callers:
 *     ?Swizzle@CExpressionValueStack@@QEAAJPEAUExpressionNode@@@Z @ 0x180055240 (-Swizzle@CExpressionValueStack@@QEAAJPEAUExpressionNode@@@Z.c)
 *     ?ApplyMaskToValue@CExpressionValue@@QEAAJPEAVSubchannelMaskInfo@@@Z @ 0x1801BD7C8 (-ApplyMaskToValue@CExpressionValue@@QEAAJPEAVSubchannelMaskInfo@@@Z.c)
 * Callees:
 *     ?GetExpressionTypeChannelCount@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180055560 (-GetExpressionTypeChannelCount@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memcpy_0 @ 0x1800F007B (memcpy_0.c)
 */

__int64 __fastcall CExpressionValue::CopyIntoFloatArray(CExpressionValue *this, __int64 a2, float *a3)
{
  unsigned int v3; // ebx
  unsigned int ExpressionTypeChannelCount; // eax
  const void *v5; // rdx
  unsigned int v6; // ecx
  void *v7; // r9

  v3 = 0;
  *a3 = 0.0;
  if ( *((_BYTE *)this + 76) )
  {
    ExpressionTypeChannelCount = GetExpressionTypeChannelCount(*((unsigned int *)this + 18));
    if ( ExpressionTypeChannelCount > 0x10 )
    {
      v3 = -2147467259;
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2147467259, 0x212u);
    }
    else
    {
      memcpy_0(v7, v5, 4LL * ExpressionTypeChannelCount);
    }
  }
  else
  {
    v3 = -2147023728;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2147023728, 0x209u);
  }
  return v3;
}
