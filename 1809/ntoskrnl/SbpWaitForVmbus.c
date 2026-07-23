/*
 * XREFs of SbpWaitForVmbus @ 0x1409FB64C
 * Callers:
 *     IopInitializeBootDrivers @ 0x1409CC0BC (IopInitializeBootDrivers.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     IoUnregisterPlugPlayNotification @ 0x140700360 (IoUnregisterPlugPlayNotification.c)
 *     IoRegisterPlugPlayNotification @ 0x1407043E0 (IoRegisterPlugPlayNotification.c)
 */

__int64 SbpWaitForVmbus()
{
  NTSTATUS v0; // ebx
  LARGE_INTEGER Timeout; // [rsp+50h] [rbp+8h] BYREF
  PVOID NotificationEntry; // [rsp+58h] [rbp+10h] BYREF

  SbiVmbusArrivalEvent.Header.SignalState = 0;
  SbiVmbusArrivalEvent.Header.WaitListHead.Blink = &SbiVmbusArrivalEvent.Header.WaitListHead;
  SbiVmbusArrivalEvent.Header.WaitListHead.Flink = &SbiVmbusArrivalEvent.Header.WaitListHead;
  LOWORD(SbiVmbusArrivalEvent.Header.Lock) = 1;
  SbiVmbusArrivalEvent.Header.Size = 6;
  v0 = IoRegisterPlugPlayNotification(
         EventCategoryDeviceInterfaceChange,
         1u,
         &VSMB_INTERFACE_GUID,
         PnpDriverObject,
         (PDRIVER_NOTIFICATION_CALLBACK_ROUTINE)SbpVmbusNotificationHandler,
         0LL,
         &NotificationEntry);
  if ( v0 >= 0 )
  {
    Timeout.QuadPart = -100000000LL;
    v0 = KeWaitForSingleObject(&SbiVmbusArrivalEvent, Executive, 0, 0, &Timeout);
    IoUnregisterPlugPlayNotification(NotificationEntry);
  }
  return (unsigned int)v0;
}
