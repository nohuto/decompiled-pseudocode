/*
 * XREFs of RegisterCDROMNotify @ 0x1C0112FD0
 * Callers:
 *     xxxRegisterForDeviceClassNotifications @ 0x1C0007948 (xxxRegisterForDeviceClassNotifications.c)
 *     xxxRemoteReconnect @ 0x1C0137320 (xxxRemoteReconnect.c)
 * Callees:
 *     <none>
 */

NTSTATUS RegisterCDROMNotify()
{
  NTSTATUS result; // eax

  result = gpWin32kDriverObject;
  if ( gpWin32kDriverObject )
  {
    if ( !WPP_MAIN_CB.Queue.Wcb.DeviceRoutine )
      return IoRegisterPlugPlayNotification(
               EventCategoryDeviceInterfaceChange,
               1u,
               &GUID_DEVINTERFACE_CDROM,
               gpWin32kDriverObject,
               DeviceClassCDROMNotify,
               0LL,
               (PVOID *)&WPP_MAIN_CB.Queue.Wcb.DeviceRoutine);
  }
  return result;
}
