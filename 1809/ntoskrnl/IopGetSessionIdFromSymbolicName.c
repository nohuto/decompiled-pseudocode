/*
 * XREFs of IopGetSessionIdFromSymbolicName @ 0x14070B980
 * Callers:
 *     PiUEventProcessBroadcastNotifications @ 0x14058FB9C (PiUEventProcessBroadcastNotifications.c)
 *     IoRegisterPlugPlayNotification @ 0x1407043E0 (IoRegisterPlugPlayNotification.c)
 *     PnpNotifyDeviceClassChange @ 0x14070B7F4 (PnpNotifyDeviceClassChange.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     IopGetSessionIdFromPDO @ 0x1406ECED4 (IopGetSessionIdFromPDO.c)
 *     IopDeviceObjectFromSymbolicName @ 0x14070B9DC (IopDeviceObjectFromSymbolicName.c)
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
