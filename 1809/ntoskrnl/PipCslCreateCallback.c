/*
 * XREFs of PipCslCreateCallback @ 0x1409AADB0
 * Callers:
 *     PiCslInitialize @ 0x1409F626C (PiCslInitialize.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B9A70 (RtlInitUnicodeString.c)
 *     ExCreateCallback @ 0x1406CA3A0 (ExCreateCallback.c)
 */

NTSTATUS PipCslCreateCallback()
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-48h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-38h] BYREF

  RtlInitUnicodeString(&DestinationString, L"\\Callback\\IoExternalDmaUnblock");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 80;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  return ExCreateCallback((PCALLBACK_OBJECT *)&PipCslCallbackObject, &ObjectAttributes, 1u, 1u);
}
