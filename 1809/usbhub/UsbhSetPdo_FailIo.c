/*
 * XREFs of UsbhSetPdo_FailIo @ 0x1C004846C
 * Callers:
 *     UsbhDeregisterPdo @ 0x1C0046F90 (UsbhDeregisterPdo.c)
 *     Usbh_BusRemove_PdoEvent @ 0x1C0048FC4 (Usbh_BusRemove_PdoEvent.c)
 *     Usbh_PdoRemove_PdoEvent @ 0x1C00494D0 (Usbh_PdoRemove_PdoEvent.c)
 *     UsbhResetNotifyDownstreamHub @ 0x1C005034C (UsbhResetNotifyDownstreamHub.c)
 *     UsbhPdoPnp_RemoveDevice @ 0x1C00595F0 (UsbhPdoPnp_RemoveDevice.c)
 *     UsbhPdoPnp_SurpriseRemoveDevice @ 0x1C00598F0 (UsbhPdoPnp_SurpriseRemoveDevice.c)
 * Callees:
 *     PdoExt @ 0x1C0010C40 (PdoExt.c)
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
