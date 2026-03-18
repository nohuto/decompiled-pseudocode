/*
 * XREFs of ?GetOpacity@CLegacyMilBrush@@KAJMPEAV?$TValueResource@MUtagMILCMD_FLOATRESOURCE@@$0DJ@@@PEAM@Z @ 0x180036320
 * Callers:
 *     ?GetOpacity@CImageLegacyMilBrush@@QEAAMXZ @ 0x180034860 (-GetOpacity@CImageLegacyMilBrush@@QEAAMXZ.c)
 *     ?GetRealizedColor@CSolidColorLegacyMilBrush@@QEBAJPEAU_D3DCOLORVALUE@@@Z @ 0x1800362BC (-GetRealizedColor@CSolidColorLegacyMilBrush@@QEBAJPEAU_D3DCOLORVALUE@@@Z.c)
 *     ??$GetGradientColorData@VCLinearGradientLegacyMilBrush@@@CGradientLegacyMilBrush@@KAJPEAVCLinearGradientLegacyMilBrush@@PEAVCGradientColorData@@@Z @ 0x180211A70 (--$GetGradientColorData@VCLinearGradientLegacyMilBrush@@@CGradientLegacyMilBrush@@KAJPEAVCLinear.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$GetTypeSpecificResource@V?$TValueResource@MUtagMILCMD_FLOATRESOURCE@@$0DJ@@@@@YAJPEAVCResource@@W4MIL_RESOURCE_TYPE@@PEAPEAV?$TValueResource@MUtagMILCMD_FLOATRESOURCE@@$0DJ@@@@Z @ 0x1800CAF28 (--$GetTypeSpecificResource@V-$TValueResource@MUtagMILCMD_FLOATRESOURCE@@$0DJ@@@@@YAJPEAVCResourc.c)
 */

__int64 __fastcall CLegacyMilBrush::GetOpacity(float a1, __int64 a2, float *a3)
{
  int TypeSpecific; // eax
  unsigned int v6; // ecx
  int v7; // ebx
  __int64 v9; // [rsp+68h] [rbp+20h] BYREF

  TypeSpecific = GetTypeSpecificResource<TValueResource<float,tagMILCMD_FLOATRESOURCE,57>>(a2, a2, &v9);
  v7 = TypeSpecific;
  if ( TypeSpecific < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, TypeSpecific, 0x68u, 0LL);
  }
  else if ( v9 )
  {
    a1 = *(float *)(v9 + 56);
  }
  if ( v7 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v7, 0x41u, 0LL);
  else
    *a3 = fminf(1.0, fmaxf(a1, 0.0));
  return (unsigned int)v7;
}
