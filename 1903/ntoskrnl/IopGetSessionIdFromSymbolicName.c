/*
 * XREFs of IopGetSessionIdFromSymbolicName @ 0x140735AA4
 * Callers:
 *     PiUEventProcessBroadcastNotifications @ 0x14066A7A0 (PiUEventProcessBroadcastNotifications.c)
 *     IoRegisterPlugPlayNotification @ 0x1407208B0 (IoRegisterPlugPlayNotification.c)
 *     PnpNotifyDeviceClassChange @ 0x140735878 (PnpNotifyDeviceClassChange.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     IopGetSessionIdFromPDO @ 0x140718220 (IopGetSessionIdFromPDO.c)
 *     IopDeviceObjectFromSymbolicName @ 0x140735B00 (IopDeviceObjectFromSymbolicName.c)
 */

__int64 IopGetSessionIdFromSymbolicName()
{
  unsigned int SessionIdFromPDO; // edi
  struct _DEVICE_OBJECT *v1; // rax
  struct _DEVICE_OBJECT *v2; // rbx
  _DWORD *DeviceNode; // rcx

  SessionIdFromPDO = -1;
  v1 = (struct _DEVICE_OBJECT *)IopDeviceObjectFromSymbolicName();
  v2 = v1;
  if ( v1 )
  {
    DeviceNode = v1->DeviceObjectExtension->DeviceNode;
    if ( DeviceNode )
    {
      if ( (DeviceNode[99] & 0x20000) == 0 )
      {
        SessionIdFromPDO = IopGetSessionIdFromPDO(v1);
        ObfDereferenceObject(v2);
      }
    }
  }
  return SessionIdFromPDO;
}
