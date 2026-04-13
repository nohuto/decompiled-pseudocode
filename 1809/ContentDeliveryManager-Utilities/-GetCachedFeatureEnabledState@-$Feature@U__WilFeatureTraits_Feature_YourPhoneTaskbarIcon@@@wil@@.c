/*
 * XREFs of ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18001407C
 * Callers:
 *     ?CreateYourPhoneTaskbarIconIfNeeded@Pinning@Mobility@@YAXKKK@Z @ 0x18000B110 (-CreateYourPhoneTaskbarIconIfNeeded@Pinning@Mobility@@YAXKKK@Z.c)
 *     _lambda_437d9aff03d6676e5c9009da627b8fcc_::operator() @ 0x18000B238 (_lambda_437d9aff03d6676e5c9009da627b8fcc_--operator().c)
 * Callees:
 *     ?wil_details_SetEnabledAndHasNotificationStateCallback@@YAHPEATwil_details_FeaturePropertyCache@@PEAX@Z @ 0x180005824 (-wil_details_SetEnabledAndHasNotificationStateCallback@@YAHPEATwil_details_FeaturePropertyCache@.c)
 *     ?SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_details_FeaturePropertyCache@@W4wil_FeatureChangeTime@@@Z @ 0x1800096EC (-SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwi.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

__int64 wil::Feature<__WilFeatureTraits_Feature_YourPhoneTaskbarIcon>::GetCachedFeatureEnabledState()
{
  unsigned int v0; // ebx
  enum FEATURE_ENABLED_STATE (*v1)(unsigned int, enum FEATURE_CHANGE_TIME); // rax
  int v2; // edi
  unsigned int v3; // ecx
  unsigned int v4; // eax
  BOOL v5; // r14d
  unsigned int v6; // r14d
  unsigned int v7; // esi
  void *v8; // rbx
  signed __int32 v9; // edi
  int v10; // r8d
  int v11; // r9d
  signed __int32 v13; // [rsp+58h] [rbp+38h] BYREF
  int v14; // [rsp+60h] [rbp+40h]

  v0 = `wil::Feature<__WilFeatureTraits_Feature_YourPhoneTaskbarIcon>::GetFeaturePropertyCache'::`2'::data & 3;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_YourPhoneTaskbarIcon>::GetFeaturePropertyCache'::`2'::data & 3) != 0
    && (`wil::Feature<__WilFeatureTraits_Feature_YourPhoneTaskbarIcon>::GetFeaturePropertyCache'::`2'::data & 0x30) != 0 )
  {
    return v0;
  }
  v1 = g_wil_details_internalGetFeatureEnabledState;
  if ( !g_wil_details_internalGetFeatureEnabledState )
  {
    v1 = g_wil_details_apiGetFeatureEnabledState;
    if ( !g_wil_details_apiGetFeatureEnabledState )
      goto LABEL_5;
    v14 = 0;
  }
  LODWORD(v1) = ((__int64 (__fastcall *)(__int64, _QWORD))v1)(16257538LL, 0LL);
LABEL_5:
  v2 = (unsigned __int8)v1 & 0x80;
  v3 = ((unsigned int)v1 >> 6) & 1;
  v4 = (unsigned int)v1 & 0xFFFFFF3F;
  if ( v4 )
    v5 = v4 == 2;
  else
    v5 = 1;
  v6 = v5 + 1;
  v7 = ((unsigned int)`wil::Feature<__WilFeatureTraits_Feature_YourPhoneTaskbarIcon>::GetFeaturePropertyCache'::`2'::data >> 2) & 1;
  if ( v0 )
    v6 = v0;
  else
    v7 = v3;
  wil::details::EnabledStateManager::SubscribeFeaturePropertyCacheToEnabledStateChanges(
    (RTL_SRWLOCK *)&wil::details::g_enabledStateManager,
    (__int64)&`wil::Feature<__WilFeatureTraits_Feature_YourPhoneTaskbarIcon>::GetFeaturePropertyCache'::`2'::data,
    0);
  if ( v0 )
  {
    v0 = v6;
    v10 = (v2 != 0) + 1;
    do
      v11 = `wil::Feature<__WilFeatureTraits_Feature_YourPhoneTaskbarIcon>::GetFeaturePropertyCache'::`2'::data;
    while ( (((unsigned int)`wil::Feature<__WilFeatureTraits_Feature_YourPhoneTaskbarIcon>::GetFeaturePropertyCache'::`2'::data >> 4) & 3) != v10
         && v11 != _InterlockedCompareExchange(
                     &`wil::Feature<__WilFeatureTraits_Feature_YourPhoneTaskbarIcon>::GetFeaturePropertyCache'::`2'::data,
                     `wil::Feature<__WilFeatureTraits_Feature_YourPhoneTaskbarIcon>::GetFeaturePropertyCache'::`2'::data & 0xFFFFFFCF | (16 * v10),
                     `wil::Feature<__WilFeatureTraits_Feature_YourPhoneTaskbarIcon>::GetFeaturePropertyCache'::`2'::data) );
  }
  else
  {
    v8 = (void *)(v6 | (v7 << 16) | ((-(__int64)(v2 != 0) & 0x100) + 256));
    do
    {
      v13 = `wil::Feature<__WilFeatureTraits_Feature_YourPhoneTaskbarIcon>::GetFeaturePropertyCache'::`2'::data;
      v9 = `wil::Feature<__WilFeatureTraits_Feature_YourPhoneTaskbarIcon>::GetFeaturePropertyCache'::`2'::data;
    }
    while ( (unsigned int)wil_details_SetEnabledAndHasNotificationStateCallback(
                            (union wil_details_FeaturePropertyCache *)&v13,
                            v8)
         && v9 != _InterlockedCompareExchange(
                    &`wil::Feature<__WilFeatureTraits_Feature_YourPhoneTaskbarIcon>::GetFeaturePropertyCache'::`2'::data,
                    v13,
                    v9) );
    return v6;
  }
  return v0;
}
