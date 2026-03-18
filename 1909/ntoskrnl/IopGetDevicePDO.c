/*
 * XREFs of IopGetDevicePDO @ 0x140088A70
 * Callers:
 *     IoAllowExecution @ 0x140088A38 (IoAllowExecution.c)
 *     IoRevokeHandlesForProcess @ 0x140299760 (IoRevokeHandlesForProcess.c)
 *     IopParseDevice @ 0x1406018D0 (IopParseDevice.c)
 *     IopGetSetSecurityObject @ 0x140623F40 (IopGetSetSecurityObject.c)
 *     IoRegisterContainerNotification @ 0x14078A830 (IoRegisterContainerNotification.c)
 *     IopGetNumaNodeInformation @ 0x140857C38 (IopGetNumaNodeInformation.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14000D8E0 (ObfReferenceObjectWithTag.c)
 *     KeReleaseQueuedSpinLock @ 0x1400770D0 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x140077180 (KeAcquireQueuedSpinLock.c)
 *     IopGetDeviceAttachmentBase @ 0x140088AD0 (IopGetDeviceAttachmentBase.c)
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
