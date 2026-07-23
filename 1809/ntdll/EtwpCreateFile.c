/*
 * XREFs of EtwpCreateFile @ 0x180051BEC
 * Callers:
 *     EtwpAddLogHeaderToLogFile @ 0x1800514D0 (EtwpAddLogHeaderToLogFile.c)
 * Callees:
 *     RtlFreeAnsiString @ 0x18002A5F0 (RtlFreeAnsiString.c)
 *     RtlpDosPathNameToRelativeNtPathName_U @ 0x1800349B4 (RtlpDosPathNameToRelativeNtPathName_U.c)
 *     RtlInitUnicodeString @ 0x180040650 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 *     ZwSetInformationFile @ 0x1800A07E0 (ZwSetInformationFile.c)
 *     ZwCreateFile @ 0x1800A0DA0 (ZwCreateFile.c)
 *     memset @ 0x1800A7100 (memset.c)
 */

__int64 __fastcall EtwpCreateFile(PCWSTR SourceString, __int64 a2, __int64 a3, _BYTE *a4, int a5, HANDLE *a6)
{
  ULONG CreateDisposition; // r15d
  bool v9; // di
  NTSTATUS v10; // ebx
  HANDLE FileHandle; // [rsp+60h] [rbp-79h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+68h] [rbp-71h] BYREF
  _UNICODE_STRING UnicodeString; // [rsp+78h] [rbp-61h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+88h] [rbp-51h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-41h] BYREF
  _DWORD FileInformation[10]; // [rsp+C8h] [rbp-11h] BYREF

  *a6 = 0LL;
  CreateDisposition = 3;
  if ( *a4 != 1 )
    CreateDisposition = 5;
  RtlInitUnicodeString(&DestinationString, SourceString);
  RtlInitUnicodeString(&UnicodeString, 0LL);
  v9 = 0;
  if ( DestinationString.Length > 1u )
    v9 = SourceString[((unsigned __int64)DestinationString.Length >> 1) - 1] == 92;
  v10 = RtlpDosPathNameToRelativeNtPathName_U(0, DestinationString.Buffer, &UnicodeString.Length, 0LL, 0LL);
  if ( v10 >= 0 )
  {
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 64;
    ObjectAttributes.ObjectName = &UnicodeString;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v10 = ZwCreateFile(
            &FileHandle,
            0xC0100080,
            &ObjectAttributes,
            &IoStatusBlock,
            0LL,
            0x80u,
            5u,
            CreateDisposition,
            0x68u,
            0LL,
            0);
    if ( v10 >= 0 )
    {
      if ( *a4 == 1 && IoStatusBlock.Information == 2 )
        *a4 = 0;
      if ( !v9 )
      {
        memset(FileInformation, 0, sizeof(FileInformation));
        FileInformation[8] = 0x2000;
        v10 = ZwSetInformationFile(FileHandle, &IoStatusBlock, FileInformation, 0x28u, FileBasicInformation);
      }
      *a6 = FileHandle;
    }
  }
  RtlFreeAnsiString(&UnicodeString);
  return (unsigned int)v10;
}
