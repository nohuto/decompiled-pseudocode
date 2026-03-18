/*
 * XREFs of RIMRegisterForDeviceClassNotifications @ 0x1C00599C0
 * Callers:
 *     RIMDiscoverDevicesOfInputType @ 0x1C00565AC (RIMDiscoverDevicesOfInputType.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

NTSTATUS __fastcall RIMRegisterForDeviceClassNotifications(
        __int64 a1,
        __int64 a2,
        void *a3,
        struct _DRIVER_OBJECT *a4,
        __int64 a5,
        PVOID Context,
        PVOID *NotificationEntry)
{
  if ( !a4 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  return IoRegisterPlugPlayNotification(
           EventCategoryDeviceInterfaceChange,
           1u,
           a3,
           a4,
           (PDRIVER_NOTIFICATION_CALLBACK_ROUTINE)RIMDeviceClassNotify,
           Context,
           NotificationEntry);
}
