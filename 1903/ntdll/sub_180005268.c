/*
 * XREFs of sub_180005268 @ 0x180005268
 * Callers:
 *     sub_180004BA8 @ 0x180004BA8 (sub_180004BA8.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x180016AA0 (RtlInitUnicodeString.c)
 *     sub_180025F70 @ 0x180025F70 (sub_180025F70.c)
 *     RtlFreeUnicodeString @ 0x180029BA0 (RtlFreeUnicodeString.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwSetInformationFile @ 0x18009CBC0 (ZwSetInformationFile.c)
 *     ZwCreateFile @ 0x18009D180 (ZwCreateFile.c)
 *     memset @ 0x1800A3600 (memset.c)
 */

__int64 __fastcall sub_180005268(PCWSTR SourceString, __int64 a2, __int64 a3, _BYTE *a4, int a5, _QWORD *a6)
{
  ULONG CreateDisposition; // r15d
  bool v9; // di
  NTSTATUS v10; // ebx
  _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-69h] BYREF
  _UNICODE_STRING UnicodeString; // [rsp+70h] [rbp-59h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+80h] [rbp-49h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp-39h] BYREF
  _DWORD FileInformation[10]; // [rsp+C0h] [rbp-9h] BYREF

  *a6 = 0LL;
  CreateDisposition = 3;
  if ( *a4 != 1 )
    CreateDisposition = 5;
  RtlInitUnicodeString(&DestinationString, SourceString);
  *(_QWORD *)&UnicodeString.Length = 0LL;
  v9 = 0;
  UnicodeString.Buffer = 0LL;
  if ( DestinationString.Length > 1u )
    v9 = SourceString[((unsigned __int64)DestinationString.Length >> 1) - 1] == 92;
  v10 = sub_180025F70(0, DestinationString.Buffer, (unsigned int)&UnicodeString, 0, 0LL);
  if ( v10 >= 0 )
  {
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 64;
    ObjectAttributes.ObjectName = &UnicodeString;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v10 = ZwCreateFile(
            (PHANDLE)&DestinationString,
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
        v10 = ZwSetInformationFile(
                *(HANDLE *)&DestinationString.Length,
                &IoStatusBlock,
                FileInformation,
                0x28u,
                FileBasicInformation);
      }
      *a6 = *(_QWORD *)&DestinationString.Length;
    }
  }
  RtlFreeUnicodeString(&UnicodeString);
  return (unsigned int)v10;
}
