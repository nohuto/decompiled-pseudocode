/*
 * XREFs of PnpGetDeviceInstanceRegistryValue @ 0x14094446C
 * Callers:
 *     sub_140918E00 @ 0x140918E00 (sub_140918E00.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003BBD0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003C350 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     _CmOpenDeviceRegKey @ 0x1405C2B40 (_CmOpenDeviceRegKey.c)
 *     IopGetRegistryValue @ 0x14069A450 (IopGetRegistryValue.c)
 */

__int64 __fastcall PnpGetDeviceInstanceRegistryValue(__int64 a1, __int64 a2, void *a3, __int64 a4, _QWORD *a5)
{
  struct _KTHREAD *CurrentThread; // rax
  int RegistryValue; // ebx
  HANDLE Handle; // [rsp+60h] [rbp+18h] BYREF

  Handle = a3;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
  RegistryValue = CmOpenDeviceRegKey(*(__int64 *)&PiPnpRtlCtx, a1, 17, 0, 131097, 0, (__int64)&Handle, 0LL);
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( RegistryValue >= 0 )
  {
    RegistryValue = IopGetRegistryValue(Handle, L"DeviceAddressCache", 26, a5);
    ZwClose(Handle);
  }
  return (unsigned int)RegistryValue;
}
