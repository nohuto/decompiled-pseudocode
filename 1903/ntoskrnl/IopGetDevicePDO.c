/*
 * XREFs of IopGetDevicePDO @ 0x1400EC010
 * Callers:
 *     IoAllowExecution @ 0x1400EBFD8 (IoAllowExecution.c)
 *     IoRevokeHandlesForProcess @ 0x140299A00 (IoRevokeHandlesForProcess.c)
 *     IopParseDevice @ 0x1405FFEA0 (IopParseDevice.c)
 *     IopGetSetSecurityObject @ 0x14069E430 (IopGetSetSecurityObject.c)
 *     IoRegisterContainerNotification @ 0x1407883D0 (IoRegisterContainerNotification.c)
 *     IopGetNumaNodeInformation @ 0x140858538 (IopGetNumaNodeInformation.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14000D6B0 (ObfReferenceObjectWithTag.c)
 *     KeReleaseQueuedSpinLock @ 0x140076E60 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x140076F10 (KeAcquireQueuedSpinLock.c)
 *     IopGetDeviceAttachmentBase @ 0x1400EC070 (IopGetDeviceAttachmentBase.c)
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
