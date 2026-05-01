/*
 * XREFs of ?GetCachedVariantState@?$Feature@U__WilFeatureTraits_Feature_AutoGameMode@@@wil@@CA?AW4Variant_AutoGameMode@@XZ @ 0x1800398D0
 * Callers:
 *     ?_LoadPropertyValues@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180038004 (-_LoadPropertyValues@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJX.c)
 *     ?__private_GetVariant@?$Feature@U__WilFeatureTraits_Feature_AutoGameMode@@@wil@@SA?AW4Variant_AutoGameMode@@W4VariantReportingKind@2@_N@Z @ 0x180039A20 (-__private_GetVariant@-$Feature@U__WilFeatureTraits_Feature_AutoGameMode@@@wil@@SA-AW4Variant_Au.c)
 * Callees:
 *     ?SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_details_FeaturePropertyCache@@W4wil_FeatureChangeTime@@@Z @ 0x180007178 (-SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwi.c)
 *     _guard_dispatch_icall_nop @ 0x1800443E0 (_guard_dispatch_icall_nop.c)
 */

char wil::Feature<__WilFeatureTraits_Feature_AutoGameMode>::GetCachedVariantState()
{
  char v0; // di
  int v1; // ebp
  unsigned int (*v2)(unsigned int, enum FEATURE_CHANGE_TIME, unsigned int *, int *); // rax
  unsigned int v3; // ecx
  unsigned int v4; // edx
  char v5; // cl
  char v6; // si
  unsigned int v7; // ebx
  unsigned int v8; // ebx
  unsigned int v10; // [rsp+60h] [rbp+8h]
  int v11; // [rsp+68h] [rbp+10h] BYREF
  int v12; // [rsp+70h] [rbp+18h] BYREF

  v0 = ((unsigned int)`wil::Feature<__WilFeatureTraits_Feature_AutoGameMode>::GetFeatureVariantPropertyCache'::`2'::data >> 7) & 0x3F;
  v1 = `wil::Feature<__WilFeatureTraits_Feature_AutoGameMode>::GetFeatureVariantPropertyCache'::`2'::data & 3;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_AutoGameMode>::GetFeatureVariantPropertyCache'::`2'::data & 3) == 0
    || (`wil::Feature<__WilFeatureTraits_Feature_AutoGameMode>::GetFeatureVariantPropertyCache'::`2'::data & 0x30) == 0 )
  {
    v11 = 0;
    v2 = g_wil_details_internalGetFeatureVariant;
    if ( g_wil_details_internalGetFeatureVariant || (v2 = g_wil_details_apiGetFeatureVariant) != 0LL )
      v3 = ((__int64 (__fastcall *)(__int64, _QWORD, int *, int *))v2)(11015710LL, 0LL, &v12, &v11);
    else
      v3 = 0;
    v4 = v3 >> 7;
    v5 = v3 & 0x7F;
    if ( !v5 )
      v12 = 0;
    v6 = v5;
    v7 = (unsigned int)`wil::Feature<__WilFeatureTraits_Feature_AutoGameMode>::GetFeatureVariantPropertyCache'::`2'::data >> 2;
    if ( v1 )
      v6 = v0;
    else
      LOBYTE(v7) = v4;
    wil::details::EnabledStateManager::SubscribeFeaturePropertyCacheToEnabledStateChanges(
      (RTL_SRWLOCK *)&wil::details::g_enabledStateManager,
      (__int64)&`wil::Feature<__WilFeatureTraits_Feature_AutoGameMode>::GetFeatureVariantPropertyCache'::`2'::data,
      0);
    v10 = `wil::Feature<__WilFeatureTraits_Feature_AutoGameMode>::GetFeatureVariantPropertyCache'::`2'::data & 0xFFFFFFCF | (v11 != 0 ? 32 : 16);
    if ( !v1 )
    {
      v8 = ((v0 != 0) + 1) | `wil::Feature<__WilFeatureTraits_Feature_AutoGameMode>::GetFeatureVariantPropertyCache'::`2'::data & 0xFFFFFFC8 | (v11 != 0 ? 32 : 16) & 0xFFFFFFF8 | (4 * (v7 & 1));
      v10 = v8;
      if ( dword_18005CD34 != v12
        || (((unsigned int)`wil::Feature<__WilFeatureTraits_Feature_AutoGameMode>::GetFeatureVariantPropertyCache'::`2'::data >> 7) & 0x3F) != v6 )
      {
        dword_18005CD34 = v12;
        v10 = v8 & 0xFFFFE03F | ((v6 & 0x3F) << 7);
      }
    }
    v0 = v6;
    if ( `wil::Feature<__WilFeatureTraits_Feature_AutoGameMode>::GetFeatureVariantPropertyCache'::`2'::data != v10 )
      _InterlockedExchange(
        &`wil::Feature<__WilFeatureTraits_Feature_AutoGameMode>::GetFeatureVariantPropertyCache'::`2'::data,
        v10);
  }
  return v0;
}
