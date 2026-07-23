/*
 * XREFs of IopGetDevicePDO @ 0x140019CF4
 * Callers:
 *     IoAllowExecution @ 0x140019D84 (IoAllowExecution.c)
 *     IoRevokeHandlesForProcess @ 0x1402848B0 (IoRevokeHandlesForProcess.c)
 *     IopParseDevice @ 0x14063DD00 (IopParseDevice.c)
 *     IopGetSetSecurityObject @ 0x14069A290 (IopGetSetSecurityObject.c)
 *     IoRegisterContainerNotification @ 0x1407611D0 (IoRegisterContainerNotification.c)
 *     IopGetNumaNodeInformation @ 0x14081F79C (IopGetNumaNodeInformation.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x140018930 (KeReleaseQueuedSpinLock.c)
 *     IopGetDeviceAttachmentBase @ 0x140019D54 (IopGetDeviceAttachmentBase.c)
 *     ObfReferenceObjectWithTag @ 0x1400ACD30 (ObfReferenceObjectWithTag.c)
 *     KeAcquireQueuedSpinLock @ 0x1400ACE70 (KeAcquireQueuedSpinLock.c)
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
