/*
 * XREFs of sub_14069C7F8 @ 0x14069C7F8
 * Callers:
 *     ExpHwidSendSynchronousIrpToDevice @ 0x140621FBC (ExpHwidSendSynchronousIrpToDevice.c)
 *     sub_1406A3BA4 @ 0x1406A3BA4 (sub_1406A3BA4.c)
 * Callees:
 *     IoGetDeviceAttachmentBaseRef @ 0x1400EBF60 (IoGetDeviceAttachmentBaseRef.c)
 */

PDEVICE_OBJECT __fastcall sub_14069C7F8(struct _DEVICE_OBJECT *a1)
{
  PDEVICE_OBJECT result; // rax

  result = IoGetDeviceAttachmentBaseRef(a1);
  if ( !result || (result->Flags & 0x1000) == 0 )
    return 0LL;
  return result;
}
