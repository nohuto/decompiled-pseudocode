/*
 * XREFs of ?EnsureCacheBounds@CExpression@@AEAAJI_K@Z @ 0x180094010
 * Callers:
 *     ?StoreValueToCache@CExpression@@AEAAJIPEAVCExpressionValue@@@Z @ 0x180093D00 (-StoreValueToCache@CExpression@@AEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?ReadValueFromCache@CExpression@@AEAAJIPEAVCExpressionValue@@PEA_N@Z @ 0x1800C80C4 (-ReadValueFromCache@CExpression@@AEAAJIPEAVCExpressionValue@@PEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CExpression::EnsureCacheBounds(CExpression *this, unsigned int a2, unsigned __int64 a3)
{
  if ( a3 > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, 0x80070216, 0x205u, 0LL);
    return 2147942934LL;
  }
  if ( (unsigned int)a3 + a2 < a2 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, 0x80070216, 0x206u, 0LL);
    return 2147942934LL;
  }
  if ( (unsigned int)a3 + a2 <= *((_DWORD *)this + 86) )
    return 0LL;
  MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, 0x8000000B, 0x20Bu, 0LL);
  return 2147483659LL;
}
