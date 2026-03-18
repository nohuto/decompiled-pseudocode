/*
 * XREFs of RegisterCDROMNotify @ 0x1C011BAB0
 * Callers:
 *     xxxRegisterForDeviceClassNotifications @ 0x1C000A68C (xxxRegisterForDeviceClassNotifications.c)
 *     xxxRemoteReconnect @ 0x1C015FF30 (xxxRemoteReconnect.c)
 * Callees:
 *     <none>
 */

NTSTATUS RegisterCDROMNotify()
{
  NTSTATUS result; // eax

  result = gpWin32kDriverObject;
  if ( gpWin32kDriverObject )
  {
    if ( !gCDROMClassRegistrationEntry )
      return IoRegisterPlugPlayNotification(
               EventCategoryDeviceInterfaceChange,
               1u,
               &GUID_DEVINTERFACE_CDROM,
               gpWin32kDriverObject,
               DeviceClassCDROMNotify,
               0LL,
               &gCDROMClassRegistrationEntry);
  }
  return result;
}
