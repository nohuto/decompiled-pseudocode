/*
 * XREFs of ?GetDWORDCore@CortanaFeatureConfiguration@@YAJPEBGW4FeatureFlightDataType@1@KPEAK@Z @ 0x180040EB0
 * Callers:
 *     ?GetDefaultCortanaWidthWithoutGutter@@YAHPEBUtagRECT@@H@Z @ 0x180040DC8 (-GetDefaultCortanaWidthWithoutGutter@@YAHPEBUtagRECT@@H@Z.c)
 *     ?GetDWORD@CortanaFeatureConfiguration@@YAJW4FeatureId@1@PEAK@Z @ 0x180197C00 (-GetDWORD@CortanaFeatureConfiguration@@YAJW4FeatureId@1@PEAK@Z.c)
 * Callees:
 *     ?GetFlightedValue@CortanaFeatureConfiguration@@YAJPEBGAEAUFeatureValue@1@AEAE@Z @ 0x180041218 (-GetFlightedValue@CortanaFeatureConfiguration@@YAJPEBGAEAUFeatureValue@1@AEAE@Z.c)
 *     ?GetOverrideValue@CortanaFeatureConfiguration@@YAJPEBGAEAUFeatureValue@1@AEAE@Z @ 0x1800412D8 (-GetOverrideValue@CortanaFeatureConfiguration@@YAJPEBGAEAUFeatureValue@1@AEAE@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CortanaFeatureConfiguration::GetDWORDCore(WCHAR *a1, int a2, int a3, unsigned __int8 *a4)
{
  int OverrideValue; // eax
  unsigned __int8 *v8; // r9
  unsigned int v9; // ebx
  __int64 v11; // rdx
  unsigned __int16 v12[4]; // [rsp+20h] [rbp-10h] BYREF
  __int64 v13; // [rsp+28h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  char v15; // [rsp+58h] [rbp+28h] BYREF

  *(_DWORD *)a4 = 0;
  if ( a2 != 1 )
  {
    v9 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1B5,
      (unsigned int)"internal\\onecoreuapshell\\inc\\cortanafeatureconfiguration.h",
      (const char *)0x80070057LL,
      *(int *)v12);
    return v9;
  }
  *(_DWORD *)&v12[2] = 0;
  *(_DWORD *)v12 = 1;
  v13 = 0LL;
  v15 = 0;
  OverrideValue = CortanaFeatureConfiguration::GetOverrideValue(
                    a1,
                    v12,
                    (struct CortanaFeatureConfiguration::FeatureValue *)&v15,
                    a4);
  v9 = OverrideValue;
  if ( OverrideValue < 0 )
  {
    v11 = 369LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (unsigned int)"internal\\onecoreuapshell\\inc\\cortanafeatureconfiguration.h",
      (const char *)(unsigned int)OverrideValue,
      *(int *)v12);
    goto LABEL_7;
  }
  if ( v15 )
  {
    v9 = 0;
    goto LABEL_8;
  }
  v15 = 0;
  OverrideValue = CortanaFeatureConfiguration::GetFlightedValue(
                    (CortanaFeatureConfiguration *)a1,
                    v12,
                    (struct CortanaFeatureConfiguration::FeatureValue *)&v15,
                    v8);
  v9 = OverrideValue;
  if ( OverrideValue < 0 )
  {
    v11 = 377LL;
    goto LABEL_14;
  }
  v9 = 0;
  if ( v15 )
  {
LABEL_8:
    *(_DWORD *)a4 = *(_DWORD *)&v12[2];
    return v9;
  }
  *(_DWORD *)&v12[2] = a3;
LABEL_7:
  if ( (v9 & 0x80000000) == 0 )
    goto LABEL_8;
  return v9;
}
