/*
 * XREFs of ?GetCachedVariantState@?$Feature@U__WilFeatureTraits_Feature_DwmHintingPpm@@@wil@@CA?AW4Variant_DwmHintingPpm@@XZ @ 0x18014A348
 * Callers:
 *     ?__private_IsVariantEqual@?$Feature@U__WilFeatureTraits_Feature_DwmHintingPpm@@@wil@@SA_NW4Variant_DwmHintingPpm@@W4VariantReportingKind@2@_N@Z @ 0x1800580F0 (-__private_IsVariantEqual@-$Feature@U__WilFeatureTraits_Feature_DwmHintingPpm@@@wil@@SA_NW4Varia.c)
 * Callees:
 *     ?SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_details_FeaturePropertyCache@@W4wil_FeatureChangeTime@@@Z @ 0x18008674C (-SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwi.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

char wil::Feature<__WilFeatureTraits_Feature_DwmHintingPpm>::GetCachedVariantState()
{
  char v0; // bl
  int v1; // esi
  unsigned int (*v2)(unsigned int, enum FEATURE_CHANGE_TIME, unsigned int *, int *); // rax
  unsigned int v3; // ecx
  char v4; // al
  bool v5; // cf
  char v6; // di
  char v7; // al
  unsigned int v8; // ebx
  int v9; // ebp
  unsigned int v10; // ebx
  unsigned int v12; // [rsp+60h] [rbp+8h]
  int v13; // [rsp+68h] [rbp+10h] BYREF
  int v14; // [rsp+70h] [rbp+18h] BYREF

  v0 = ((unsigned int)`wil::Feature<__WilFeatureTraits_Feature_DwmHintingPpm>::GetFeatureVariantPropertyCache'::`2'::data >> 7) & 0x3F;
  v1 = `wil::Feature<__WilFeatureTraits_Feature_DwmHintingPpm>::GetFeatureVariantPropertyCache'::`2'::data & 3;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_DwmHintingPpm>::GetFeatureVariantPropertyCache'::`2'::data & 3) == 0
    || (`wil::Feature<__WilFeatureTraits_Feature_DwmHintingPpm>::GetFeatureVariantPropertyCache'::`2'::data & 0x30) == 0 )
  {
    v13 = 0;
    v2 = g_wil_details_internalGetFeatureVariant;
    if ( g_wil_details_internalGetFeatureVariant || (v2 = g_wil_details_apiGetFeatureVariant) != 0LL )
      LODWORD(v2) = ((__int64 (__fastcall *)(__int64, _QWORD, int *, int *))v2)(12805652LL, 0LL, &v14, &v13);
    v3 = ((unsigned int)v2 >> 7) & 1;
    v4 = (unsigned __int8)v2 & 0x7F;
    if ( !v4 )
      v14 = 0;
    v5 = v0 != 0;
    v6 = v4;
    v7 = v0;
    v8 = (unsigned int)`wil::Feature<__WilFeatureTraits_Feature_DwmHintingPpm>::GetFeatureVariantPropertyCache'::`2'::data >> 2;
    v9 = v5 + 1;
    if ( v1 )
    {
      v9 = v1;
      v6 = v7;
    }
    else
    {
      LOBYTE(v8) = v3;
    }
    wil::details::EnabledStateManager::SubscribeFeaturePropertyCacheToEnabledStateChanges(
      (RTL_SRWLOCK *)&wil::details::g_enabledStateManager,
      (__int64)&`wil::Feature<__WilFeatureTraits_Feature_DwmHintingPpm>::GetFeatureVariantPropertyCache'::`2'::data,
      0);
    v12 = (v13 != 0 ? 32 : 16) | `wil::Feature<__WilFeatureTraits_Feature_DwmHintingPpm>::GetFeatureVariantPropertyCache'::`2'::data & 0xFFFFFFCF;
    if ( !v1 )
    {
      v10 = v9 | (v13 != 0 ? 32 : 16) & 0xFFFFFFF8 | `wil::Feature<__WilFeatureTraits_Feature_DwmHintingPpm>::GetFeatureVariantPropertyCache'::`2'::data & 0xFFFFFFC8 | (4 * (v8 & 1));
      v12 = v10;
      if ( dword_18030C034 != v14
        || (((unsigned int)`wil::Feature<__WilFeatureTraits_Feature_DwmHintingPpm>::GetFeatureVariantPropertyCache'::`2'::data >> 7) & 0x3F) != v6 )
      {
        dword_18030C034 = v14;
        v12 = v10 & 0xFFFFE03F | ((v6 & 0x3F) << 7);
      }
    }
    v0 = v6;
    if ( `wil::Feature<__WilFeatureTraits_Feature_DwmHintingPpm>::GetFeatureVariantPropertyCache'::`2'::data != v12 )
      _InterlockedExchange(
        &`wil::Feature<__WilFeatureTraits_Feature_DwmHintingPpm>::GetFeatureVariantPropertyCache'::`2'::data,
        v12);
  }
  return v0;
}
