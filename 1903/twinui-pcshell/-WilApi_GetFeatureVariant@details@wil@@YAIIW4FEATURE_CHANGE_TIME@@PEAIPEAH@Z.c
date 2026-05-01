/*
 * XREFs of ?WilApi_GetFeatureVariant@details@wil@@YAIIW4FEATURE_CHANGE_TIME@@PEAIPEAH@Z @ 0x18011B484
 * Callers:
 *     ?GetCachedVariantState@?$Feature@U__WilFeatureTraits_Feature_SearchAndCortanaSplit@@@wil@@CA?AW4Variant_SearchAndCortanaSplit@@XZ @ 0x18003BD38 (-GetCachedVariantState@-$Feature@U__WilFeatureTraits_Feature_SearchAndCortanaSplit@@@wil@@CA-AW4.c)
 *     ?GetCachedVariantState@?$Feature@U__WilFeatureTraits_Feature_StartInSeparateUWP@@@wil@@CA?AW4Variant_StartInSeparateUWP@@XZ @ 0x18007896C (-GetCachedVariantState@-$Feature@U__WilFeatureTraits_Feature_StartInSeparateUWP@@@wil@@CA-AW4Var.c)
 *     ?GetCachedVariantState@?$Feature@U__WilFeatureTraits_Feature_UndockCortana@@@wil@@CA?AW4Variant_UndockCortana@@XZ @ 0x1801C69C0 (-GetCachedVariantState@-$Feature@U__WilFeatureTraits_Feature_UndockCortana@@@wil@@CA-AW4Variant_.c)
 *     ?GetCachedVariantState@?$Feature@U__WilFeatureTraits_Feature_TabShellAutoTabbingPreference@@@wil@@CA?AW4Variant_TabShellAutoTabbingPreference@@XZ @ 0x18024426C (-GetCachedVariantState@-$Feature@U__WilFeatureTraits_Feature_TabShellAutoTabbingPreference@@@wil.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

unsigned int (*__fastcall wil::details::WilApi_GetFeatureVariant(
        wil::details *this,
        __int64 a2,
        __int64 a3,
        unsigned int *a4))(unsigned int, enum FEATURE_CHANGE_TIME, unsigned int *, int *)
{
  unsigned int (*result)(unsigned int, enum FEATURE_CHANGE_TIME, unsigned int *, int *); // rax

  result = g_wil_details_internalGetFeatureVariant;
  if ( g_wil_details_internalGetFeatureVariant )
    return (unsigned int (*)(unsigned int, enum FEATURE_CHANGE_TIME, unsigned int *, int *))((__int64 (__fastcall *)(wil::details *, __int64, __int64, unsigned int *))result)(
                                                                                              this,
                                                                                              a2,
                                                                                              a3,
                                                                                              a4);
  result = g_wil_details_apiGetFeatureVariant;
  if ( g_wil_details_apiGetFeatureVariant )
    return (unsigned int (*)(unsigned int, enum FEATURE_CHANGE_TIME, unsigned int *, int *))((__int64 (__fastcall *)(wil::details *, __int64, __int64, unsigned int *))result)(
                                                                                              this,
                                                                                              a2,
                                                                                              a3,
                                                                                              a4);
  return result;
}
