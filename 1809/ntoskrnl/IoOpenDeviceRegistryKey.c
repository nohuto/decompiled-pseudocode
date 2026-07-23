/*
 * XREFs of IoOpenDeviceRegistryKey @ 0x1406B4ED0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400505F0 (ExAcquireResourceExclusiveLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     _CmOpenDeviceRegKey @ 0x1405C7EF0 (_CmOpenDeviceRegKey.c)
 */

NTSTATUS __stdcall IoOpenDeviceRegistryKey(
        PDEVICE_OBJECT DeviceObject,
        ULONG DevInstKeyType,
        ACCESS_MASK DesiredAccess,
        PHANDLE DeviceRegKey)
{
  char v6; // bl
  _DWORD *DeviceNode; // rdx
  int v9; // esi
  struct _KTHREAD *CurrentThread; // rax
  int v11; // r8d
  NTSTATUS v12; // ebx

  v6 = DevInstKeyType;
  if ( !DeviceObject )
    return -1073741811;
  DeviceNode = DeviceObject->DeviceObjectExtension->DeviceNode;
  if ( !DeviceNode || (DeviceNode[99] & 0x20000) != 0 )
    return -1073741811;
  if ( (v6 & 1) != 0 )
  {
    v9 = 17;
    goto LABEL_7;
  }
  if ( (v6 & 2) == 0 )
    return -1073741811;
  v9 = 18;
LABEL_7:
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
  v11 = v9 | 0x200;
  if ( (v6 & 4) == 0 )
    v11 = v9;
  v12 = CmOpenDeviceRegKey(
          *(__int64 *)&PiPnpRtlCtx,
          *((_QWORD *)DeviceObject->DeviceObjectExtension->DeviceNode + 6),
          v11,
          0,
          DesiredAccess,
          1,
          (__int64)DeviceRegKey,
          0LL);
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v12;
}
