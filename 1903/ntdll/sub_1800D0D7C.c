/*
 * XREFs of sub_1800D0D7C @ 0x1800D0D7C
 * Callers:
 *     sub_1800D2538 @ 0x1800D2538 (sub_1800D2538.c)
 * Callees:
 *     RtlFreeUnicodeString @ 0x180029BA0 (RtlFreeUnicodeString.c)
 *     sub_180029BCC @ 0x180029BCC (sub_180029BCC.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwOpenFile @ 0x18009CD40 (ZwOpenFile.c)
 *     ZwQueryVolumeInformationFile @ 0x18009D000 (ZwQueryVolumeInformationFile.c)
 */

void __fastcall sub_1800D0D7C(_UNICODE_STRING *a1, __int64 a2)
{
  int v2; // eax
  HANDLE FileHandle; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE FsInformation[4]; // [rsp+48h] [rbp-B8h] BYREF
  int v5; // [rsp+4Ch] [rbp-B4h]
  _UNICODE_STRING *v6; // [rsp+50h] [rbp-B0h] BYREF
  _UNICODE_STRING v7; // [rsp+58h] [rbp-A8h] BYREF
  _UNICODE_STRING UnicodeString; // [rsp+68h] [rbp-98h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+78h] [rbp-88h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-78h] BYREF
  char v11; // [rsp+C0h] [rbp-40h] BYREF

  *(_DWORD *)&v7.Length = 0x1000000;
  v5 = 0;
  v7.Buffer = (PWCH)&v11;
  UnicodeString.Buffer = 0LL;
  FileHandle = 0LL;
  if ( (int)sub_180029BCC(0, a2, a1, &v7, &UnicodeString, &v6) >= 0 )
  {
    ObjectAttributes.ObjectName = v6;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    ObjectAttributes.Attributes = 64;
    if ( ZwOpenFile(&FileHandle, 0x100001u, &ObjectAttributes, &IoStatusBlock, 5u, 0x60u) >= 0
      && ZwQueryVolumeInformationFile(FileHandle, &IoStatusBlock, FsInformation, 8u, FileFsDeviceInformation) >= 0 )
    {
      v2 = dword_1801664DC;
      if ( (dword_1801664DC & v5) != 0 )
        v2 = 0;
      dword_1801664DC = v2;
    }
  }
  if ( FileHandle )
    ZwClose(FileHandle);
  if ( UnicodeString.Buffer )
    RtlFreeUnicodeString(&UnicodeString);
}
