/*
 * XREFs of ?getArgbcolor@CGlassColorizationResources@@QEAA?AU_D3DCOLORVALUE@@XZ @ 0x180024CEC
 * Callers:
 *     ?UpdateClientBlur@CTopLevelWindow@@AEAAJXZ @ 0x1800144CC (-UpdateClientBlur@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ @ 0x180018E30 (-UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_AcrylicForEveryone@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180024D50 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_AcrylicForEveryone@@@wil@@CAX_NW4Rep.c)
 */

struct _D3DCOLORVALUE *__fastcall CGlassColorizationResources::getArgbcolor(
        CGlassColorizationResources *this,
        struct _D3DCOLORVALUE *__return_ptr retstr)
{
  float v2; // xmm2_4
  D3DVALUE v4; // xmm0_4
  D3DVALUE v6; // xmm1_4
  D3DVALUE v7; // xmm2_4

  v2 = *((float *)this + 8);
  v4 = v2 * *((float *)this + 4);
  v6 = v2 * *((float *)this + 5);
  v7 = v2 * *((float *)this + 6);
  retstr->r = v4;
  retstr->g = v6;
  retstr->b = v7;
  wil::Feature<__WilFeatureTraits_Feature_AcrylicForEveryone>::ReportUsageToService();
  retstr->a = *((D3DVALUE *)this + 7);
  return retstr;
}
