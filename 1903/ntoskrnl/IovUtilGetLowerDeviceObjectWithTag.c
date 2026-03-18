/*
 * XREFs of IovUtilGetLowerDeviceObjectWithTag @ 0x140974B20
 * Callers:
 *     IovpCallDriver1 @ 0x14096D504 (IovpCallDriver1.c)
 *     IovpCallDriver2 @ 0x14096DA34 (IovpCallDriver2.c)
 *     VfIoDeleteDevice @ 0x140973760 (VfIoDeleteDevice.c)
 *     VfPnpVerifyIrpStackUpward @ 0x140980050 (VfPnpVerifyIrpStackUpward.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14000D6B0 (ObfReferenceObjectWithTag.c)
 *     KeReleaseQueuedSpinLock @ 0x140076E60 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x140076F10 (KeAcquireQueuedSpinLock.c)
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
