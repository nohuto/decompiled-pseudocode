/*
 * XREFs of CmpInitBackupHive @ 0x14082D274
 * Callers:
 *     CmpLoadHiveThread @ 0x14075BB10 (CmpLoadHiveThread.c)
 *     CmpFlushBackupHive @ 0x14082CE80 (CmpFlushBackupHive.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwCreateFile @ 0x1401C16F0 (ZwCreateFile.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     RtlAppendStringToString @ 0x14071D430 (RtlAppendStringToString.c)
 */

NTSTATUS __fastcall CmpInitBackupHive(__int64 a1, const WCHAR *a2)
{
  STRING Destination; // [rsp+60h] [rbp-A0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-90h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+80h] [rbp-80h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp-70h] BYREF
  char v9; // [rsp+C0h] [rbp-40h] BYREF

  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  *(_QWORD *)&Destination.Length = 0x800000LL;
  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  Destination.Buffer = &v9;
  RtlInitUnicodeString(&DestinationString, L"\\SystemRoot\\System32\\Config\\RegBack\\");
  RtlAppendStringToString(&Destination, (const STRING *)&DestinationString);
  RtlInitUnicodeString(&DestinationString, a2);
  RtlAppendStringToString(&Destination, (const STRING *)&DestinationString);
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&Destination;
  ObjectAttributes.SecurityDescriptor = CmpAdminSystemFileSecurityDescriptor;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  return ZwCreateFile(
           (PHANDLE)(a1 + 1560),
           0x10003u,
           &ObjectAttributes,
           &IoStatusBlock,
           0LL,
           0x80u,
           0,
           3u,
           0xC808u,
           0LL,
           0);
}
