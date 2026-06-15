/*
 * XREFs of ?GetCurrentVariantState@?$Feature@U__WilFeatureTraits_Feature_HangDetectionThresholdTweaking@@@wil@@CA?AW4Variant_HangDetectionThresholdTweaking@@PEAIPEAH1@Z @ 0x18005E248
 * Callers:
 *     ?GetCachedVariantState@?$Feature@U__WilFeatureTraits_Feature_HangDetectionThresholdTweaking@@@wil@@CA?AW4Variant_HangDetectionThresholdTweaking@@XZ @ 0x18005E138 (-GetCachedVariantState@-$Feature@U__WilFeatureTraits_Feature_HangDetectionThresholdTweaking@@@wi.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 */

char __fastcall wil::Feature<__WilFeatureTraits_Feature_HangDetectionThresholdTweaking>::GetCurrentVariantState(
        _DWORD *a1,
        __int64 a2,
        int *a3)
{
  unsigned int (*v3)(unsigned int, enum FEATURE_CHANGE_TIME, unsigned int *, int *); // rax
  unsigned int v6; // ecx
  char v7; // cl

  v3 = g_wil_details_internalGetFeatureVariant;
  if ( g_wil_details_internalGetFeatureVariant || (v3 = g_wil_details_apiGetFeatureVariant) != 0LL )
    v6 = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *, __int64))v3)(16046125LL, 1LL, a1, a2);
  else
    v6 = 0;
  *a3 = (v6 >> 7) & 1;
  v7 = v6 & 0x7F;
  if ( !v7 )
    *a1 = 5;
  return v7;
}
