/*
 * XREFs of ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_CortanaOnSpotlight@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180081B10
 * Callers:
 *     ?IsEnabled@?$Feature@U__WilFeatureTraits_Feature_CortanaOnSpotlight@@@wil@@SA_NXZ @ 0x180081A10 (-IsEnabled@-$Feature@U__WilFeatureTraits_Feature_CortanaOnSpotlight@@@wil@@SA_NXZ.c)
 * Callees:
 *     ?wil_details_SetEnabledAndHasNotificationStateCallback@@YAHPEATwil_details_FeaturePropertyCache@@PEAX@Z @ 0x180005814 (-wil_details_SetEnabledAndHasNotificationStateCallback@@YAHPEATwil_details_FeaturePropertyCache@.c)
 *     ?SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_details_FeaturePropertyCache@@W4wil_FeatureChangeTime@@@Z @ 0x18000995C (-SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwi.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_WindowsSpotlightV3@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180033ABC (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_WindowsSpotlightV3@@@wil@@CA.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBEA0 (_guard_dispatch_icall_nop.c)
 */

__int64 wil::Feature<__WilFeatureTraits_Feature_CortanaOnSpotlight>::GetCachedFeatureEnabledState()
{
  unsigned int v0; // ebx
  enum FEATURE_ENABLED_STATE (*v1)(unsigned int, enum FEATURE_CHANGE_TIME); // rax
  unsigned int v2; // eax
  int v3; // esi
  int v4; // r15d
  unsigned int v5; // edi
  unsigned int v6; // eax
  bool v7; // al
  unsigned int v8; // r14d
  void *v9; // rbx
  signed __int32 v10; // esi
  int v11; // r8d
  int v12; // r9d
  signed __int32 v14; // [rsp+68h] [rbp+48h] BYREF
  __int16 v15; // [rsp+6Ch] [rbp+4Ch]
  int v16; // [rsp+70h] [rbp+50h]
  int v17; // [rsp+78h] [rbp+58h]
  __int16 v18; // [rsp+7Ch] [rbp+5Ch]

  v0 = `wil::Feature<__WilFeatureTraits_Feature_CortanaOnSpotlight>::GetFeaturePropertyCache'::`2'::data & 3;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_CortanaOnSpotlight>::GetFeaturePropertyCache'::`2'::data & 3) != 0
    && (`wil::Feature<__WilFeatureTraits_Feature_CortanaOnSpotlight>::GetFeaturePropertyCache'::`2'::data & 0x30) != 0 )
  {
    return v0;
  }
  v1 = g_wil_details_internalGetFeatureEnabledState;
  if ( !g_wil_details_internalGetFeatureEnabledState )
  {
    v1 = g_wil_details_apiGetFeatureEnabledState;
    if ( !g_wil_details_apiGetFeatureEnabledState )
    {
      v2 = 0;
      goto LABEL_8;
    }
    v16 = 0;
  }
  v2 = ((__int64 (__fastcall *)(__int64, _QWORD))v1)(11545976LL, 0LL);
LABEL_8:
  v3 = v2 & 0x80;
  v4 = (v2 >> 6) & 1;
  v5 = 2;
  v6 = v2 & 0xFFFFFF3F;
  if ( v6 )
    v7 = v6 == 2;
  else
    v7 = 1;
  if ( v7 )
  {
    if ( (`wil::Feature<__WilFeatureTraits_Feature_WindowsSpotlightV3>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
      wil::Feature<__WilFeatureTraits_Feature_WindowsSpotlightV3>::GetCachedFeatureEnabledState();
    v14 = 4;
    v17 = 4;
    LOBYTE(v15) = 3;
    v18 = v15;
  }
  else
  {
    v5 = 1;
  }
  v8 = ((unsigned int)`wil::Feature<__WilFeatureTraits_Feature_CortanaOnSpotlight>::GetFeaturePropertyCache'::`2'::data >> 2) & 1;
  if ( v0 )
    v5 = v0;
  else
    v8 = v4;
  wil::details::EnabledStateManager::SubscribeFeaturePropertyCacheToEnabledStateChanges(
    (RTL_SRWLOCK *)&wil::details::g_enabledStateManager,
    (__int64)&`wil::Feature<__WilFeatureTraits_Feature_CortanaOnSpotlight>::GetFeaturePropertyCache'::`2'::data,
    0);
  if ( v0 )
  {
    v0 = v5;
    v11 = (v3 != 0) + 1;
    do
      v12 = `wil::Feature<__WilFeatureTraits_Feature_CortanaOnSpotlight>::GetFeaturePropertyCache'::`2'::data;
    while ( (((unsigned int)`wil::Feature<__WilFeatureTraits_Feature_CortanaOnSpotlight>::GetFeaturePropertyCache'::`2'::data >> 4) & 3) != v11
         && v12 != _InterlockedCompareExchange(
                     &`wil::Feature<__WilFeatureTraits_Feature_CortanaOnSpotlight>::GetFeaturePropertyCache'::`2'::data,
                     `wil::Feature<__WilFeatureTraits_Feature_CortanaOnSpotlight>::GetFeaturePropertyCache'::`2'::data & 0xFFFFFFCF | (16 * v11),
                     `wil::Feature<__WilFeatureTraits_Feature_CortanaOnSpotlight>::GetFeaturePropertyCache'::`2'::data) );
  }
  else
  {
    v9 = (void *)(v5 | (v8 << 16) | ((-(__int64)(v3 != 0) & 0x100) + 256));
    do
    {
      v14 = `wil::Feature<__WilFeatureTraits_Feature_CortanaOnSpotlight>::GetFeaturePropertyCache'::`2'::data;
      v10 = `wil::Feature<__WilFeatureTraits_Feature_CortanaOnSpotlight>::GetFeaturePropertyCache'::`2'::data;
    }
    while ( (unsigned int)wil_details_SetEnabledAndHasNotificationStateCallback(
                            (union wil_details_FeaturePropertyCache *)&v14,
                            v9)
         && v10 != _InterlockedCompareExchange(
                     &`wil::Feature<__WilFeatureTraits_Feature_CortanaOnSpotlight>::GetFeaturePropertyCache'::`2'::data,
                     v14,
                     v10) );
    return v5;
  }
  return v0;
}
