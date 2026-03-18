/*
 * XREFs of ?CopyIntoFloatArray@CExpressionValue@@QEBAJIPEAM@Z @ 0x1800C3D28
 * Callers:
 *     ?Swizzle@CExpressionValueStack@@QEAAJPEAUExpressionNode@@@Z @ 0x1800C3BD4 (-Swizzle@CExpressionValueStack@@QEAAJPEAUExpressionNode@@@Z.c)
 *     ?ApplyMaskToValue@CExpressionValue@@QEAAJPEAVSubchannelMaskInfo@@@Z @ 0x1801C0328 (-ApplyMaskToValue@CExpressionValue@@QEAAJPEAVSubchannelMaskInfo@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetExpressionTypeChannelCount@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1800C3D74 (-GetExpressionTypeChannelCount@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     memcpy_0 @ 0x1800F020B (memcpy_0.c)
 */

__int64 __fastcall CExpressionValue::CopyIntoFloatArray(CExpressionValue *this, __int64 a2, float *a3)
{
  unsigned int ExpressionTypeChannelCount; // eax
  const void *v4; // rdx
  __int64 v5; // rcx
  void *v6; // r9
  unsigned int v7; // ebx

  *a3 = 0.0;
  if ( *((_BYTE *)this + 76) )
  {
    ExpressionTypeChannelCount = GetExpressionTypeChannelCount(*((unsigned int *)this + 18));
    if ( ExpressionTypeChannelCount > 0x10 )
    {
      v7 = -2147467259;
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, 0x80004005, 0x212u, 0LL);
    }
    else
    {
      memcpy_0(v6, v4, 4LL * ExpressionTypeChannelCount);
      return 0;
    }
  }
  else
  {
    v7 = -2147023728;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, 0x80070490, 0x209u, 0LL);
  }
  return v7;
}
