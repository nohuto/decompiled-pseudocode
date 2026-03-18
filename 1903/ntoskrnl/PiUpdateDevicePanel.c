/*
 * XREFs of PiUpdateDevicePanel @ 0x1406FF4E0
 * Callers:
 *     PipProcessStartPhase3 @ 0x1406FEE28 (PipProcessStartPhase3.c)
 *     PiProcessNewDeviceNode @ 0x14070502C (PiProcessNewDeviceNode.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003BBD0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003C730 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     _CmUpdateDevicePanel @ 0x1406FF59C (_CmUpdateDevicePanel.c)
 *     PnpDeviceObjectToDeviceInstance @ 0x140702314 (PnpDeviceObjectToDeviceInstance.c)
 */

__int64 __fastcall PiUpdateDevicePanel(__int64 a1, HANDLE a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rcx
  int updated; // edi
  HANDLE Handle; // [rsp+38h] [rbp+10h] BYREF

  Handle = 0LL;
  if ( a2 )
  {
    Handle = a2;
  }
  else
  {
    updated = PnpDeviceObjectToDeviceInstance(*(_QWORD *)(a1 + 32), &Handle, 131097LL);
    if ( updated < 0 )
      goto LABEL_4;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
  updated = CmUpdateDevicePanel(v5, *(_QWORD *)(a1 + 48), Handle);
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
LABEL_4:
  if ( Handle && Handle != a2 )
    ZwClose(Handle);
  return (unsigned int)updated;
}
