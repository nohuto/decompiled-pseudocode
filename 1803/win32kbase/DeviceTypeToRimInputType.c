/*
 * XREFs of DeviceTypeToRimInputType @ 0x1C00DF1B0
 * Callers:
 *     RIMAddInjectionDeviceOfType @ 0x1C00DFD50 (RIMAddInjectionDeviceOfType.c)
 *     RIMAddNonPnpDeviceOfType @ 0x1C00E0300 (RIMAddNonPnpDeviceOfType.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1C00E0610 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 *     RIMDiscoverDevicesOfInputType @ 0x1C00F9D88 (RIMDiscoverDevicesOfInputType.c)
 *     RIMDeviceClassNotify @ 0x1C00FA2A0 (RIMDeviceClassNotify.c)
 *     RIMDeviceNotify @ 0x1C00FAB00 (RIMDeviceNotify.c)
 *     RIMUnRegisterForInputDeviceTypeClassNotifications @ 0x1C00FB4D4 (RIMUnRegisterForInputDeviceTypeClassNotifications.c)
 *     rimCompleteReads @ 0x1C00FDEF4 (rimCompleteReads.c)
 *     rimIssueReads @ 0x1C00FE140 (rimIssueReads.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DeviceTypeToRimInputType(int a1)
{
  unsigned int v1; // edx

  v1 = 0;
  if ( !a1 )
    return 1LL;
  if ( a1 == 1 )
    return 2LL;
  if ( (unsigned int)(a1 - 2) <= 1 )
    return 60;
  return v1;
}
