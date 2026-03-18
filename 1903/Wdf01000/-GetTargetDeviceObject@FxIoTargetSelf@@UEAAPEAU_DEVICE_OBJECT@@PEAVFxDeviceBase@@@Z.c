/*
 * XREFs of ?GetTargetDeviceObject@FxIoTargetSelf@@UEAAPEAU_DEVICE_OBJECT@@PEAVFxDeviceBase@@@Z @ 0x1C000C4C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_DEVICE_OBJECT *__fastcall FxIoTargetSelf::GetTargetDeviceObject(FxIoTargetSelf *this, FxDeviceBase *Device)
{
  return Device->m_DeviceObject.m_DeviceObject;
}
