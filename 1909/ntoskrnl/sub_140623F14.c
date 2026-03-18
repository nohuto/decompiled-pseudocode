/*
 * XREFs of sub_140623F14 @ 0x140623F14
 * Callers:
 *     sub_140623A38 @ 0x140623A38 (sub_140623A38.c)
 *     ExpHwidSendSynchronousIrpToDevice @ 0x140625E64 (ExpHwidSendSynchronousIrpToDevice.c)
 * Callees:
 *     IoGetDeviceAttachmentBaseRef @ 0x1400889C0 (IoGetDeviceAttachmentBaseRef.c)
 */

PDEVICE_OBJECT __fastcall sub_140623F14(struct _DEVICE_OBJECT *a1)
{
  PDEVICE_OBJECT result; // rax

  result = IoGetDeviceAttachmentBaseRef(a1);
  if ( !result || (result->Flags & 0x1000) == 0 )
    return 0LL;
  return result;
}
