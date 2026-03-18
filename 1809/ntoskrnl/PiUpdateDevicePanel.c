/*
 * XREFs of PiUpdateDevicePanel @ 0x1406E9A3C
 * Callers:
 *     PiProcessNewDeviceNode @ 0x1406E3F34 (PiProcessNewDeviceNode.c)
 *     PipProcessStartPhase3 @ 0x1406EAB38 (PipProcessStartPhase3.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140050860 (ExAcquireResourceSharedLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B7990 (KiLeaveCriticalRegionUnsafe.c)
 *     ZwClose @ 0x1401B8350 (ZwClose.c)
 *     _CmUpdateDevicePanel @ 0x1406E85F8 (_CmUpdateDevicePanel.c)
 *     PnpDeviceObjectToDeviceInstance @ 0x1406EB4C0 (PnpDeviceObjectToDeviceInstance.c)
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
  updated = CmUpdateDevicePanel(v5, *(const WCHAR **)(a1 + 48), (__int64)Handle);
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
LABEL_4:
  if ( Handle && Handle != a2 )
    ZwClose(Handle);
  return (unsigned int)updated;
}
