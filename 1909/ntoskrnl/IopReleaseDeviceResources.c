/*
 * XREFs of IopReleaseDeviceResources @ 0x140732A70
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x140173204 (PnpRemoveLockedDeviceNode.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x140732734 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PnpDriverLoadingFailed @ 0x14078B434 (PnpDriverLoadingFailed.c)
 *     PnpDisableDevice @ 0x140861764 (PnpDisableDevice.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003B910 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003C470 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     PnpRequestDeviceAction @ 0x14015D824 (PnpRequestDeviceAction.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ZwSetValueKey @ 0x1401C1850 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x1401C2690 (ZwDeleteValueKey.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     _CmOpenDeviceRegKey @ 0x1405C3010 (_CmOpenDeviceRegKey.c)
 *     PipSetDevNodeFlags @ 0x140707F6C (PipSetDevNodeFlags.c)
 *     IopQueryDeviceResources @ 0x140724000 (IopQueryDeviceResources.c)
 *     IopLegacyResourceAllocation @ 0x1407515AC (IopLegacyResourceAllocation.c)
 */

__int64 __fastcall IopReleaseDeviceResources(__int64 a1, int a2)
{
  __int64 result; // rax
  PVOID v5; // rbx
  __int64 v6; // rdx
  struct _KTHREAD *CurrentThread; // rax
  void (__fastcall *v8)(__int64, __int64, PVOID); // rax
  __int64 v9; // rdx
  UNICODE_STRING ValueName; // [rsp+40h] [rbp-10h] BYREF
  ULONG DataSize; // [rsp+90h] [rbp+40h] BYREF
  PVOID Data; // [rsp+A0h] [rbp+50h] BYREF
  HANDLE KeyHandle; // [rsp+A8h] [rbp+58h] BYREF

  *(_QWORD *)&ValueName.Length = 0LL;
  ValueName.Buffer = 0LL;
  if ( !*(_QWORD *)(a1 + 416) && (*(_DWORD *)(a1 + 396) & 0x80u) == 0 )
    return 0LL;
  DataSize = 0;
  v5 = 0LL;
  Data = 0LL;
  if ( a2 && (*(_DWORD *)(a1 + 396) & 1) == 0 )
  {
    if ( (int)IopQueryDeviceResources(*(struct _DEVICE_OBJECT **)(a1 + 32), 0, (ULONG_PTR *)&Data, &DataSize) >= 0 )
    {
      v5 = Data;
    }
    else
    {
      Data = 0LL;
      DataSize = 0;
    }
  }
  result = IopLegacyResourceAllocation(-1, (_DWORD)PnpDriverObject, *(_QWORD *)(a1 + 32), 0, 0LL);
  if ( (int)result >= 0 )
  {
    PnpRequestDeviceAction(0LL, 0, 0, 0LL, 0LL, 0LL, 0LL);
    if ( a2 && (*(_DWORD *)(a1 + 396) & 1) == 0 )
    {
      v6 = *(_QWORD *)(a1 + 48);
      KeyHandle = 0LL;
      if ( (int)CmOpenDeviceRegKey(*(__int64 *)&PiPnpRtlCtx, v6, 20, 0, 983103, v5 != 0LL, (__int64)&KeyHandle, 0LL) >= 0 )
      {
        *(_DWORD *)&ValueName.Length = 1441812;
        ValueName.Buffer = (wchar_t *)L"BootConfig";
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
        if ( Data )
          ZwSetValueKey(KeyHandle, &ValueName, 0, 8u, Data, DataSize);
        else
          ZwDeleteValueKey(KeyHandle, &ValueName);
        ExReleaseResourceLite(&PnpRegistryDeviceResource);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        ZwClose(KeyHandle);
        v5 = Data;
      }
      if ( v5 )
      {
        PipSetDevNodeFlags(a1, 64);
        v8 = (void (__fastcall *)(__int64, __int64, PVOID))IopAllocateBootResourcesRoutine;
        v9 = *(_QWORD *)(a1 + 32);
        *(_QWORD *)(a1 + 544) = v5;
        v8(4LL, v9, v5);
      }
    }
    return 0LL;
  }
  return result;
}
