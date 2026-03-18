/*
 * XREFs of ?RIMDeviceCallback_Opened@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C006F590
 * Callers:
 *     <none>
 * Callees:
 *     isRootPartition @ 0x1C00329F8 (isRootPartition.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C0040490 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 *     ?ivRootPnp@CBaseInput@@AEAAJPEAUDEVICEINFO@@KAEBUCONTAINER_ID@@@Z @ 0x1C018EE80 (-ivRootPnp@CBaseInput@@AEAAJPEAUDEVICEINFO@@KAEBUCONTAINER_ID@@@Z.c)
 */

__int64 __fastcall CBaseInput::RIMDeviceCallback_Opened(CBaseInput *this, struct RawInputManagerDeviceObject *a2)
{
  struct DEVICEINFO *v2; // rdi
  int v5; // [rsp+40h] [rbp+8h] BYREF

  ++*((_QWORD *)this + 147);
  v2 = (struct RawInputManagerDeviceObject *)((char *)a2 + 88);
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &Feature_InputVirtualization__private_propertyCache,
    0xF89686u,
    (const struct FEATURE_LOGGED_TRAITS *)&unk_1C01D9B78,
    1,
    3);
  if ( isRootPartition() && *((_DWORD *)this + 298) )
  {
    v5 = 0;
    CBaseInput::ivRootPnp(this, v2, 2u, (const struct CONTAINER_ID *)&v5);
  }
  return (*(__int64 (__fastcall **)(CBaseInput *, struct DEVICEINFO *))(*(_QWORD *)this + 88LL))(this, v2);
}
