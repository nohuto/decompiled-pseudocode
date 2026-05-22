/*
 * XREFs of ?ShouldAttachDevice@HeatProcessor@@UEAA_NPEAUDeviceInfo@@@Z @ 0x1801269F0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnDeviceArrival@HeatProcessor@@QEAAJPEAUDeviceInfo@@@Z @ 0x1801265DC (-OnDeviceArrival@HeatProcessor@@QEAAJPEAUDeviceInfo@@@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_Input_HeatMultiDevice@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180126984 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_Input_HeatMultiDevice@@@wil@@CAX_NW4.c)
 */

bool __fastcall HeatProcessor::ShouldAttachDevice(HeatProcessor *this, struct DeviceInfo *a2, __int64 a3)
{
  __int64 v6; // r8
  const char *v7; // r9

  if ( *((_DWORD *)a2 + 1) != 2048 )
    return 0;
  wil::Feature<__WilFeatureTraits_Feature_Input_HeatMultiDevice>::ReportUsageToService((__int64)this, (__int64)a2, a3);
  return (int)HeatProcessor::OnDeviceArrival((HeatProcessor *)((char *)this - 8), a2, v6, v7) >= 0;
}
