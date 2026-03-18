/*
 * XREFs of PiSwProcessParentStartIrp @ 0x1406EB9FC
 * Callers:
 *     PnpDeviceCompletionProcessCompletedRequest @ 0x1406E7E44 (PnpDeviceCompletionProcessCompletedRequest.c)
 *     PnpStartDeviceNode @ 0x1406EBA7C (PnpStartDeviceNode.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400505F0 (ExAcquireResourceExclusiveLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B7990 (KiLeaveCriticalRegionUnsafe.c)
 *     IoInvalidateDeviceRelations @ 0x14015EF30 (IoInvalidateDeviceRelations.c)
 *     PiSwFindChildren @ 0x1406E813C (PiSwFindChildren.c)
 */

void __fastcall PiSwProcessParentStartIrp(PDEVICE_OBJECT DeviceObject)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 Children; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
  Children = PiSwFindChildren();
  ExReleaseResourceLite(&PiSwLockObj);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( Children )
    IoInvalidateDeviceRelations(DeviceObject, SingleBusRelations);
}
