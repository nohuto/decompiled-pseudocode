/*
 * XREFs of PiUpdateDevicePanel @ 0x1407012C0
 * Callers:
 *     PipProcessStartPhase3 @ 0x140700C08 (PipProcessStartPhase3.c)
 *     PiProcessNewDeviceNode @ 0x140706E0C (PiProcessNewDeviceNode.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003B910 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003C470 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     _CmUpdateDevicePanel @ 0x14070137C (_CmUpdateDevicePanel.c)
 *     PnpDeviceObjectToDeviceInstance @ 0x1407040F4 (PnpDeviceObjectToDeviceInstance.c)
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
