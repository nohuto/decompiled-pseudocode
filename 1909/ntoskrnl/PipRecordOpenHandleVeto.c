/*
 * XREFs of PipRecordOpenHandleVeto @ 0x14087B7C8
 * Callers:
 *     PipSendQueryRemoveIrpAndCheckOpenHandles @ 0x14087B850 (PipSendQueryRemoveIrpAndCheckOpenHandles.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     RtlCopyUnicodeString @ 0x140043EC0 (RtlCopyUnicodeString.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x1400889C0 (IoGetDeviceAttachmentBaseRef.c)
 *     PnpCollectOpenHandles @ 0x14086CEDC (PnpCollectOpenHandles.c)
 */

void __fastcall PipRecordOpenHandleVeto(
        unsigned int a1,
        _QWORD **a2,
        struct _DEVICE_OBJECT *a3,
        __int64 a4,
        __int64 a5)
{
  char *DeviceNode; // rdi
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // rax
  PDEVICE_OBJECT v8; // rbx

  *(_DWORD *)a5 = 5;
  PnpCollectOpenHandles(a2, a1, a4);
  DeviceNode = 0LL;
  if ( a3 )
  {
    DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(a3);
    v8 = DeviceAttachmentBaseRef;
    if ( DeviceAttachmentBaseRef )
      DeviceNode = (char *)DeviceAttachmentBaseRef->DeviceObjectExtension->DeviceNode;
    RtlCopyUnicodeString((PUNICODE_STRING)(a5 + 8), (PCUNICODE_STRING)(DeviceNode + 40));
    ObfDereferenceObject(v8);
  }
  else
  {
    RtlInitUnicodeString((PUNICODE_STRING)(a5 + 8), 0LL);
  }
}
