/*
 * XREFs of sub_1405882BC @ 0x1405882BC
 * Callers:
 *     sub_1405865D0 @ 0x1405865D0 (sub_1405865D0.c)
 *     ExpHwidSendSynchronousIrpToDevice @ 0x140588074 (ExpHwidSendSynchronousIrpToDevice.c)
 * Callees:
 *     IoGetDeviceAttachmentBaseRef @ 0x140002E10 (IoGetDeviceAttachmentBaseRef.c)
 */

PDEVICE_OBJECT __fastcall sub_1405882BC(struct _DEVICE_OBJECT *a1)
{
  PDEVICE_OBJECT result; // rax

  result = IoGetDeviceAttachmentBaseRef(a1);
  if ( !result || (result->Flags & 0x1000) == 0 )
    return 0LL;
  return result;
}
