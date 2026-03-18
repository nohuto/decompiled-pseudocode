/*
 * XREFs of DeviceTypeToRimInputType @ 0x1C0058340
 * Callers:
 *     RIMDiscoverDevicesOfInputType @ 0x1C00565AC (RIMDiscoverDevicesOfInputType.c)
 *     RIMDeviceClassNotify @ 0x1C0056C30 (RIMDeviceClassNotify.c)
 *     rimCompleteReads @ 0x1C00580E8 (rimCompleteReads.c)
 *     rimIssueReads @ 0x1C00581A4 (rimIssueReads.c)
 *     RIMUnRegisterForInputDeviceTypeClassNotifications @ 0x1C0058258 (RIMUnRegisterForInputDeviceTypeClassNotifications.c)
 *     RIMAddInjectionDeviceOfType @ 0x1C0134C60 (RIMAddInjectionDeviceOfType.c)
 *     RIMAddNonPnpDeviceOfType @ 0x1C01352A0 (RIMAddNonPnpDeviceOfType.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1C0135600 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 *     RIMDeviceNotify @ 0x1C014E2E0 (RIMDeviceNotify.c)
 *     RIMVirtDeviceClassNotify @ 0x1C014E8E4 (RIMVirtDeviceClassNotify.c)
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
