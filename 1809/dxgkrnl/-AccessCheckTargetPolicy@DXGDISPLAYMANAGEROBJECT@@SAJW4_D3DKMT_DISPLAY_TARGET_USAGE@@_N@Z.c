/*
 * XREFs of ?AccessCheckTargetPolicy@DXGDISPLAYMANAGEROBJECT@@SAJW4_D3DKMT_DISPLAY_TARGET_USAGE@@_N@Z @ 0x1C02562F8
 * Callers:
 *     ?ExchangeTargetOwnershipDmm@DXGDISPLAYMANAGEROBJECT@@CAJPEBVDXGTARGETENTRY@@PEAV1@1_NW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C02567EC (-ExchangeTargetOwnershipDmm@DXGDISPLAYMANAGEROBJECT@@CAJPEBVDXGTARGETENTRY@@PEAV1@1_NW4_D3DKMT_D.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000FAAC (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?IsCurrentThreadAppContainer@DXGPROCESS@@SA_NXZ @ 0x1C0229EEC (-IsCurrentThreadAppContainer@DXGPROCESS@@SA_NXZ.c)
 */

__int64 __fastcall DXGDISPLAYMANAGEROBJECT::AccessCheckTargetPolicy(int a1, char a2)
{
  struct DXGPROCESS *Current; // rax
  __int64 v5; // rcx
  struct DXGPROCESS *v6; // rbx
  __int64 v7; // rcx
  int v9; // [rsp+20h] [rbp-28h]
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  char v11; // [rsp+60h] [rbp+18h] BYREF

  Current = DXGPROCESS::GetCurrent();
  v6 = Current;
  if ( Current && *((_BYTE *)Current + 322) || *((_BYTE *)DXGGLOBAL::GetGlobal(v5) + 20316) )
    return 0LL;
  if ( (*(unsigned int (**)(void))(*((_QWORD *)v6 + 13) + 208LL))() )
  {
    if ( (unsigned __int8)RtlIsMultiSessionSku(v7) )
    {
      wil_details_FeaturePropertyCache_ReportUsageToService(
        (__int64)&Feature_DirectDisplayApi__private_propertyCache,
        8185225LL,
        (const struct FEATURE_LOGGED_TRAITS *)&unk_1C0070098,
        1,
        v9);
      if ( a1 == 2 || a1 == 1 && !DXGPROCESS::IsCurrentThreadAppContainer() && (!a2 || g_OSTestSigningEnabled) )
        return 0LL;
    }
    else
    {
      if ( !DXGPROCESS::IsCurrentThreadAppContainer() )
        return 0LL;
      wil_details_FeaturePropertyCache_ReportUsageToService(
        (__int64)&Feature_BrokeredDisplays_EnforceWcosCapability__private_propertyCache,
        15007298LL,
        (const struct FEATURE_LOGGED_TRAITS *)&unk_1C00700A0,
        1,
        v9);
      RtlInitUnicodeString(&DestinationString, L"shellDisplayManagement");
      v11 = 0;
      if ( (int)RtlCapabilityCheck(0LL, &DestinationString, &v11) >= 0 )
      {
        if ( v11 )
          return 0LL;
      }
    }
  }
  return 3221225506LL;
}
