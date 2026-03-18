/*
 * XREFs of IopGetDevicePDO @ 0x140019CF4
 * Callers:
 *     IoAllowExecution @ 0x140019D84 (IoAllowExecution.c)
 *     IoRevokeHandlesForProcess @ 0x1402845C0 (IoRevokeHandlesForProcess.c)
 *     IopParseDevice @ 0x14063CD00 (IopParseDevice.c)
 *     IopGetSetSecurityObject @ 0x1406990F0 (IopGetSetSecurityObject.c)
 *     IoRegisterContainerNotification @ 0x140760000 (IoRegisterContainerNotification.c)
 *     IopGetNumaNodeInformation @ 0x14081E5BC (IopGetNumaNodeInformation.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x140018930 (KeReleaseQueuedSpinLock.c)
 *     IopGetDeviceAttachmentBase @ 0x140019D54 (IopGetDeviceAttachmentBase.c)
 *     ObfReferenceObjectWithTag @ 0x1400ACDD0 (ObfReferenceObjectWithTag.c)
 *     KeAcquireQueuedSpinLock @ 0x1400ACF10 (KeAcquireQueuedSpinLock.c)
 */

_DWORD *__fastcall IopGetDevicePDO(__int64 a1)
{
  KIRQL v2; // di
  _DWORD *DeviceAttachmentBase; // rax
  _DWORD *v4; // rbx

  v2 = KeAcquireQueuedSpinLock(0xAuLL);
  DeviceAttachmentBase = (_DWORD *)IopGetDeviceAttachmentBase(a1);
  v4 = DeviceAttachmentBase;
  if ( (DeviceAttachmentBase[12] & 0x1000) != 0 )
    ObfReferenceObjectWithTag(DeviceAttachmentBase, 0x746C6644u);
  else
    v4 = 0LL;
  KeReleaseQueuedSpinLock(0xAuLL, v2);
  return v4;
}
