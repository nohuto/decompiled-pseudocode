/*
 * XREFs of PiCreateDeviceInstanceKey @ 0x14071951C
 * Callers:
 *     PiProcessNewDeviceNode @ 0x14070502C (PiProcessNewDeviceNode.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003BBD0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003C730 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     _CmCreateDevice @ 0x1407195D0 (_CmCreateDevice.c)
 */

__int64 __fastcall PiCreateDeviceInstanceKey(__int64 a1, _QWORD *a2, _DWORD *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  int v5; // ebx
  int Device; // ebx
  char v9; // [rsp+40h] [rbp+8h] BYREF

  *a2 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v5 = (int)a2;
  *a3 = 0;
  v9 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
  Device = CmCreateDevice(PiPnpRtlCtx, *(_QWORD *)(a1 + 48), 983103, v5, (__int64)&v9, 0);
  if ( Device >= 0 )
    *a3 = 2 - (v9 != 0);
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)Device;
}
