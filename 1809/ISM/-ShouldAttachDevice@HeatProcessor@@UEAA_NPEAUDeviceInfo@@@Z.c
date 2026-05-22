/*
 * XREFs of ?ShouldAttachDevice@HeatProcessor@@UEAA_NPEAUDeviceInfo@@@Z @ 0x1800ECD40
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18002F774 (-ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_.c)
 *     ?OnDeviceArrival@HeatProcessor@@QEAAJPEAUDeviceInfo@@@Z @ 0x1800ECDD4 (-OnDeviceArrival@HeatProcessor@@QEAAJPEAUDeviceInfo@@@Z.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_Input_HeatMultiDevice@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800ED1D0 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_Input_HeatMultiDevice@@@wil@.c)
 */

bool __fastcall HeatProcessor::ShouldAttachDevice(HeatProcessor *this, struct DeviceInfo *a2)
{
  __int16 v5; // [rsp+4Ch] [rbp+14h]
  int v6; // [rsp+50h] [rbp+18h] BYREF
  __int16 v7; // [rsp+54h] [rbp+1Ch]

  if ( *((_DWORD *)a2 + 1) != 2048 )
    return 0;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_Input_HeatMultiDevice>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_Input_HeatMultiDevice>::GetCachedFeatureEnabledState();
  LOBYTE(v5) = 3;
  v6 = 0;
  v7 = v5;
  wil::details::ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_Input_HeatMultiDevice>::GetFeaturePropertyCache'::`2'::data,
    0xAD7BBAu,
    (const struct FEATURE_LOGGED_TRAITS *)&v6,
    1,
    3);
  return (int)HeatProcessor::OnDeviceArrival((HeatProcessor *)((char *)this - 8), a2) >= 0;
}
