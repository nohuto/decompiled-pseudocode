/*
 * XREFs of UsbhSetPdo_FailIo @ 0x1C0049DD0
 * Callers:
 *     UsbhDeregisterPdo @ 0x1C0048838 (UsbhDeregisterPdo.c)
 *     Usbh_BusRemove_PdoEvent @ 0x1C004A97C (Usbh_BusRemove_PdoEvent.c)
 *     Usbh_PdoRemove_PdoEvent @ 0x1C004AE88 (Usbh_PdoRemove_PdoEvent.c)
 *     UsbhResetNotifyDownstreamHub @ 0x1C00520BC (UsbhResetNotifyDownstreamHub.c)
 *     UsbhPdoPnp_RemoveDevice @ 0x1C005B9C0 (UsbhPdoPnp_RemoveDevice.c)
 *     UsbhPdoPnp_SurpriseRemoveDevice @ 0x1C005BCC0 (UsbhPdoPnp_SurpriseRemoveDevice.c)
 * Callees:
 *     PdoExt @ 0x1C0011270 (PdoExt.c)
 */

void __fastcall UsbhSetPdo_FailIo(__int64 a1)
{
  KSPIN_LOCK *v1; // rbx
  KIRQL v2; // al

  v1 = (KSPIN_LOCK *)PdoExt(a1);
  v2 = KeAcquireSpinLockRaiseToDpc(v1 + 152);
  *((_DWORD *)v1 + 196) = 2;
  KeReleaseSpinLock(v1 + 152, v2);
}
