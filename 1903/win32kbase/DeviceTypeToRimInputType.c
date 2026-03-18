/*
 * XREFs of DeviceTypeToRimInputType @ 0x1C006C2A0
 * Callers:
 *     RIMDiscoverDevicesOfInputType @ 0x1C006A50C (RIMDiscoverDevicesOfInputType.c)
 *     RIMDeviceClassNotify @ 0x1C006AB90 (RIMDeviceClassNotify.c)
 *     rimCompleteReads @ 0x1C006C048 (rimCompleteReads.c)
 *     rimIssueReads @ 0x1C006C104 (rimIssueReads.c)
 *     RIMUnRegisterForInputDeviceTypeClassNotifications @ 0x1C006C1B8 (RIMUnRegisterForInputDeviceTypeClassNotifications.c)
 *     RIMAddInjectionDeviceOfType @ 0x1C01372D0 (RIMAddInjectionDeviceOfType.c)
 *     RIMAddNonPnpDeviceOfType @ 0x1C0137910 (RIMAddNonPnpDeviceOfType.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1C0137C70 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 *     RIMDeviceNotify @ 0x1C0150950 (RIMDeviceNotify.c)
 *     RIMVirtDeviceClassNotify @ 0x1C0150F54 (RIMVirtDeviceClassNotify.c)
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
