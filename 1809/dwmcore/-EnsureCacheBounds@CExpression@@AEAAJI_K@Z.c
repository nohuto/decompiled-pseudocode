/*
 * XREFs of ?EnsureCacheBounds@CExpression@@AEAAJI_K@Z @ 0x1800BF920
 * Callers:
 *     ?StoreValueToCache@CExpression@@AEAAJIPEAVCExpressionValue@@@Z @ 0x1800BF658 (-StoreValueToCache@CExpression@@AEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?ReadValueFromCache@CExpression@@AEAAJIPEAVCExpressionValue@@PEA_N@Z @ 0x1800C1B10 (-ReadValueFromCache@CExpression@@AEAAJIPEAVCExpressionValue@@PEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1800EF1C0 (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 */

__int64 __fastcall CExpression::EnsureCacheBounds(CExpression *this, unsigned int a2, unsigned __int64 a3)
{
  unsigned int v6; // ecx
  unsigned int v7; // ebx
  unsigned int v8; // ecx
  int v9; // eax
  unsigned int v10; // eax

  if ( !(unsigned int)EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_2862660923_57931444_FeatureDescriptorDetails)
    || *((_QWORD *)this + 39) )
  {
    v8 = -1;
    v9 = -1;
    if ( a3 <= 0xFFFFFFFF )
      v9 = a3;
    v7 = a3 > 0xFFFFFFFF ? 0x80070216 : 0;
    if ( a3 > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0xFFFFFFFF, 0LL, 0, v7, 0x222u);
    }
    else
    {
      v10 = a2 + v9;
      if ( v10 >= a2 )
        v8 = v10;
      v7 = v10 < a2 ? 0x80070216 : 0;
      if ( v10 < a2 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x224u);
      }
      else if ( v8 <= *((_DWORD *)this + 80) )
      {
        return 0;
      }
      else
      {
        v7 = -2147483637;
        MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2147483637, 0x229u);
      }
    }
  }
  else
  {
    v7 = -2147418113;
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2147418113, 0x21Au);
  }
  return v7;
}
