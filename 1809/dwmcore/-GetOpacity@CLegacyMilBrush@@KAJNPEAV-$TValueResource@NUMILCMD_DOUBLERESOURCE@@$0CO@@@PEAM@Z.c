/*
 * XREFs of ?GetOpacity@CLegacyMilBrush@@KAJNPEAV?$TValueResource@NUMILCMD_DOUBLERESOURCE@@$0CO@@@PEAM@Z @ 0x1800BC480
 * Callers:
 *     ?GetOpacity@CImageLegacyMilBrush@@QEAAMXZ @ 0x1800799E8 (-GetOpacity@CImageLegacyMilBrush@@QEAAMXZ.c)
 *     ?GetRealizedColor@CSolidColorLegacyMilBrush@@QEBAJPEAU_D3DCOLORVALUE@@@Z @ 0x1800BC4FC (-GetRealizedColor@CSolidColorLegacyMilBrush@@QEBAJPEAU_D3DCOLORVALUE@@@Z.c)
 *     ??$GetGradientColorData@VCLinearGradientLegacyMilBrush@@@CGradientLegacyMilBrush@@KAJPEAVCLinearGradientLegacyMilBrush@@PEAVCGradientColorData@@@Z @ 0x1801C2A50 (--$GetGradientColorData@VCLinearGradientLegacyMilBrush@@@CGradientLegacyMilBrush@@KAJPEAVCLinear.c)
 * Callees:
 *     ??$GetTypeSpecificResource@V?$TValueResource@NUMILCMD_DOUBLERESOURCE@@$0CO@@@@@YAJPEAVCResource@@W4MIL_RESOURCE_TYPE@@PEAPEAV?$TValueResource@NUMILCMD_DOUBLERESOURCE@@$0CO@@@@Z @ 0x180067148 (--$GetTypeSpecificResource@V-$TValueResource@NUMILCMD_DOUBLERESOURCE@@$0CO@@@@@YAJPEAVCResource@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CLegacyMilBrush::GetOpacity(double a1, __int64 a2, float *a3)
{
  int TypeSpecific; // eax
  unsigned int v6; // ecx
  int v7; // ebx
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF

  TypeSpecific = GetTypeSpecificResource<TValueResource<double,MILCMD_DOUBLERESOURCE,46>>(a2, a2, &v9);
  v7 = TypeSpecific;
  if ( TypeSpecific < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, TypeSpecific, 0x68u);
  }
  else if ( v9 )
  {
    a1 = *(double *)(v9 + 56);
  }
  if ( v7 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v7, 0x4Eu);
  else
    *a3 = fmin(1.0, fmax(a1, 0.0));
  return (unsigned int)v7;
}
