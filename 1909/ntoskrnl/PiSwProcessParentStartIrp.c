/*
 * XREFs of PiSwProcessParentStartIrp @ 0x140700720
 * Callers:
 *     PnpDeviceCompletionProcessCompletedRequest @ 0x140704260 (PnpDeviceCompletionProcessCompletedRequest.c)
 *     PnpStartDeviceNode @ 0x140719E1C (PnpStartDeviceNode.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003B910 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003C090 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     IoInvalidateDeviceRelations @ 0x14015D770 (IoInvalidateDeviceRelations.c)
 *     PiSwFindChildren @ 0x1407007A0 (PiSwFindChildren.c)
 */

void __fastcall PiSwProcessParentStartIrp(PDEVICE_OBJECT DeviceObject)
{
  char *DeviceNode; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 Children; // rbx

  if ( DeviceObject )
    DeviceNode = (char *)DeviceObject->DeviceObjectExtension->DeviceNode;
  else
    DeviceNode = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
  Children = PiSwFindChildren(DeviceNode + 40);
  ExReleaseResourceLite(&PiSwLockObj);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( Children )
    IoInvalidateDeviceRelations(DeviceObject, SingleBusRelations);
}
