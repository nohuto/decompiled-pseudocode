/*
 * XREFs of IovUtilGetLowerDeviceObjectWithTag @ 0x1409354F4
 * Callers:
 *     IovpCallDriver1 @ 0x14092EC8C (IovpCallDriver1.c)
 *     IovpCallDriver2 @ 0x14092F1BC (IovpCallDriver2.c)
 *     VfIoDeleteDevice @ 0x140934128 (VfIoDeleteDevice.c)
 *     VfPnpVerifyIrpStackUpward @ 0x1409407B0 (VfPnpVerifyIrpStackUpward.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x140018930 (KeReleaseQueuedSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x1400ACDD0 (ObfReferenceObjectWithTag.c)
 *     KeAcquireQueuedSpinLock @ 0x1400ACF10 (KeAcquireQueuedSpinLock.c)
 */

void *__fastcall IovUtilGetLowerDeviceObjectWithTag(__int64 a1)
{
  KIRQL v2; // di
  void *v3; // rbx

  v2 = KeAcquireQueuedSpinLock(0xAuLL);
  v3 = *(void **)(*(_QWORD *)(a1 + 312) + 48LL);
  if ( v3 )
    ObfReferenceObjectWithTag(v3, 0x49667256u);
  KeReleaseQueuedSpinLock(0xAuLL, v2);
  return v3;
}
