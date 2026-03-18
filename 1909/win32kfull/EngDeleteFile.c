/*
 * XREFs of EngDeleteFile @ 0x1C027A2B0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0168440 (memset.c)
 */

BOOL __stdcall EngDeleteFile(LPWSTR pwszFileName)
{
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-48h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-38h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  RtlInitUnicodeString(&DestinationString, pwszFileName);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Attributes = 64;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  return ZwDeleteFile(&ObjectAttributes) == 0;
}
