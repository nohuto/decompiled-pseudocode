/*
 * XREFs of LdrpCheckAppDirType @ 0x1800D266C
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D3FB4 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlDosPathNameToRelativeNtPathName @ 0x18002A538 (RtlDosPathNameToRelativeNtPathName.c)
 *     RtlFreeAnsiString @ 0x18002A5F0 (RtlFreeAnsiString.c)
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 *     NtClose @ 0x1800A04C0 (NtClose.c)
 *     NtOpenFile @ 0x1800A0940 (NtOpenFile.c)
 *     ZwQueryVolumeInformationFile @ 0x1800A0C00 (ZwQueryVolumeInformationFile.c)
 */

void __fastcall LdrpCheckAppDirType(__int128 *a1, __int64 a2)
{
  int v2; // eax
  HANDLE FileHandle; // [rsp+40h] [rbp-C0h] BYREF
  int v4; // [rsp+4Ch] [rbp-B4h]
  UNICODE_STRING *v5; // [rsp+50h] [rbp-B0h] BYREF
  int v6; // [rsp+58h] [rbp-A8h] BYREF
  char *v7; // [rsp+60h] [rbp-A0h]
  UNICODE_STRING UnicodeString; // [rsp+68h] [rbp-98h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+78h] [rbp-88h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-78h] BYREF
  char v11; // [rsp+C0h] [rbp-40h] BYREF

  v6 = 0x1000000;
  v4 = 0;
  v7 = &v11;
  UnicodeString.Buffer = 0LL;
  FileHandle = 0LL;
  if ( (int)RtlDosPathNameToRelativeNtPathName(0, a2, a1, (unsigned __int16 *)&v6, &UnicodeString.Length, &v5) >= 0 )
  {
    ObjectAttributes.ObjectName = v5;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    ObjectAttributes.Attributes = 64;
    if ( NtOpenFile(&FileHandle, 0x100001u, &ObjectAttributes, &IoStatusBlock, 5u, 0x60u) >= 0
      && (int)ZwQueryVolumeInformationFile() >= 0 )
    {
      v2 = LdrpIllegalCWDDevices;
      if ( (LdrpIllegalCWDDevices & v4) != 0 )
        v2 = 0;
      LdrpIllegalCWDDevices = v2;
    }
  }
  if ( FileHandle )
    NtClose(FileHandle);
  if ( UnicodeString.Buffer )
    RtlFreeAnsiString(&UnicodeString);
}
