/*
 * XREFs of BiDoesHiveExist @ 0x14073F584
 * Callers:
 *     BiLoadHive @ 0x14073F16C (BiLoadHive.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwQueryAttributesFile @ 0x1401C0870 (ZwQueryAttributesFile.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

bool __fastcall BiDoesHiveExist(__int64 a1)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-19h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-9h] BYREF
  struct _FILE_BASIC_INFORMATION FileInformation; // [rsp+60h] [rbp+27h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  memset(&FileInformation, 0, sizeof(FileInformation));
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  RtlInitUnicodeString(&DestinationString, (PCWSTR)(a1 + 12));
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  return ZwQueryAttributesFile(&ObjectAttributes, &FileInformation) >= 0 && (FileInformation.FileAttributes & 0x10) == 0;
}
