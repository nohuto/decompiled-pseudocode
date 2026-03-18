/*
 * XREFs of IopWriteAllocatedResourcesToRegistry @ 0x140751E7C
 * Callers:
 *     IopLegacyResourceAllocation @ 0x140750B1C (IopLegacyResourceAllocation.c)
 *     IoReportDetectedDevice @ 0x140750EB0 (IoReportDetectedDevice.c)
 *     PnpReleaseResourcesInternal @ 0x140751B90 (PnpReleaseResourcesInternal.c)
 *     PnpBuildCmResourceLists @ 0x140751D7C (PnpBuildCmResourceLists.c)
 *     PnpRestoreResourcesInternal @ 0x140876660 (PnpRestoreResourcesInternal.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003BBD0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003C730 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwSetValueKey @ 0x1401C0CD0 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x1401C1B10 (ZwDeleteValueKey.c)
 *     _CmOpenDeviceRegKey @ 0x1405C2B40 (_CmOpenDeviceRegKey.c)
 */

__int64 __fastcall IopWriteAllocatedResourcesToRegistry(__int64 a1, void *a2, ULONG a3)
{
  struct _KTHREAD *CurrentThread; // rax
  int v7; // ebx
  NTSTATUS v8; // eax
  UNICODE_STRING ValueName; // [rsp+40h] [rbp-18h] BYREF
  HANDLE KeyHandle; // [rsp+60h] [rbp+8h] BYREF

  *(_QWORD *)&ValueName.Length = 0LL;
  ValueName.Buffer = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
  v7 = CmOpenDeviceRegKey(*(__int64 *)&PiPnpRtlCtx, *(_QWORD *)(a1 + 48), 19, 0, 983103, 1, (__int64)&KeyHandle, 0LL);
  if ( v7 >= 0 )
  {
    ValueName.Buffer = L"AllocConfig";
    *(_DWORD *)&ValueName.Length = 1572886;
    if ( a2 )
      v8 = ZwSetValueKey(KeyHandle, &ValueName, 0, 8u, a2, a3);
    else
      v8 = ZwDeleteValueKey(KeyHandle, &ValueName);
    v7 = v8;
    ZwClose(KeyHandle);
  }
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)v7;
}
