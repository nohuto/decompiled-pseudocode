/*
 * XREFs of IovUtilGetBottomDeviceObjectWithTag @ 0x140974ABC
 * Callers:
 *     IovpCallDriver1 @ 0x14096D504 (IovpCallDriver1.c)
 *     IovUtilIsWdmStack @ 0x140974D64 (IovUtilIsWdmStack.c)
 *     VfPnpVerifyIrpStackUpward @ 0x140980050 (VfPnpVerifyIrpStackUpward.c)
 *     ViPnpVerifyMinorWasProcessedProperly @ 0x14098031C (ViPnpVerifyMinorWasProcessedProperly.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14000D8E0 (ObfReferenceObjectWithTag.c)
 *     KeReleaseQueuedSpinLock @ 0x1400770D0 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x140077180 (KeAcquireQueuedSpinLock.c)
 */

PVOID __fastcall IovUtilGetBottomDeviceObjectWithTag(_QWORD *Object)
{
  KIRQL v2; // si
  PVOID v3; // rdi

  v2 = KeAcquireQueuedSpinLock(0xAuLL);
  do
  {
    v3 = Object;
    Object = *(_QWORD **)(Object[39] + 48LL);
  }
  while ( Object );
  ObfReferenceObjectWithTag(v3, 0x49667256u);
  KeReleaseQueuedSpinLock(0xAuLL, v2);
  return v3;
}
