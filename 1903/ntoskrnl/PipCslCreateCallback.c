/*
 * XREFs of PipCslCreateCallback @ 0x1409ED290
 * Callers:
 *     PiCslInitialize @ 0x140A3B87C (PiCslInitialize.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     ExCreateCallback @ 0x1406E9C40 (ExCreateCallback.c)
 */

NTSTATUS PipCslCreateCallback()
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Callback\\IoExternalDmaUnblock");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 80;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  return ExCreateCallback((PCALLBACK_OBJECT *)&PipCslCallbackObject, &ObjectAttributes, 1u, 1u);
}
