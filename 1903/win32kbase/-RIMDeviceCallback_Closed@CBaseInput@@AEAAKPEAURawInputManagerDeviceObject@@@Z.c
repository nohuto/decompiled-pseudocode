/*
 * XREFs of ?RIMDeviceCallback_Closed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C0071BE0
 * Callers:
 *     <none>
 * Callees:
 *     isRootPartition @ 0x1C00329F8 (isRootPartition.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C0040490 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 *     ?ivRootPnp@CBaseInput@@AEAAJPEAUDEVICEINFO@@KAEBUCONTAINER_ID@@@Z @ 0x1C018EE80 (-ivRootPnp@CBaseInput@@AEAAJPEAUDEVICEINFO@@KAEBUCONTAINER_ID@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CBaseInput::RIMDeviceCallback_Closed(
        CBaseInput *this,
        struct RawInputManagerDeviceObject *a2,
        __int64 a3)
{
  __int64 v3; // rax
  int v7; // [rsp+40h] [rbp+8h] BYREF

  v3 = *((_QWORD *)this + 147);
  if ( !v3 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
    v3 = *((_QWORD *)this + 147);
  }
  *((_QWORD *)this + 147) = v3 - 1;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &Feature_InputVirtualization__private_propertyCache,
    0xF89686u,
    (const struct FEATURE_LOGGED_TRAITS *)&unk_1C01D9B78,
    1,
    3);
  if ( isRootPartition() && *((_DWORD *)this + 298) )
  {
    v7 = 0;
    CBaseInput::ivRootPnp(
      this,
      (struct RawInputManagerDeviceObject *)((char *)a2 + 88),
      3u,
      (const struct CONTAINER_ID *)&v7);
  }
  return (*(__int64 (__fastcall **)(CBaseInput *, char *))(*(_QWORD *)this + 96LL))(this, (char *)a2 + 88);
}
