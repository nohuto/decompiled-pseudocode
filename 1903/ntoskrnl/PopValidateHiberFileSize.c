/*
 * XREFs of PopValidateHiberFileSize @ 0x14072703C
 * Callers:
 *     PopResizeHiberFile @ 0x140726EE8 (PopResizeHiberFile.c)
 *     PopSetHiberFileSize @ 0x1408A849C (PopSetHiberFileSize.c)
 *     PopSetHiberFileType @ 0x1408A85B0 (PopSetHiberFileType.c)
 * Callees:
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwQueryInformationFile @ 0x1401C02F0 (ZwQueryInformationFile.c)
 *     ZwOpenFile @ 0x1401C0730 (ZwOpenFile.c)
 *     ZwQueryVolumeInformationFile @ 0x1401C09F0 (ZwQueryVolumeInformationFile.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

__int64 __fastcall PopValidateHiberFileSize(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v6; // rdi
  NTSTATUS v7; // esi
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rcx
  HANDLE FileHandle; // [rsp+30h] [rbp-69h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+38h] [rbp-61h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-51h] BYREF
  _QWORD FileInformation[3]; // [rsp+78h] [rbp-21h] BYREF
  _QWORD FsInformation[4]; // [rsp+90h] [rbp-9h] BYREF

  memset(FsInformation, 0, sizeof(FsInformation));
  v6 = 0LL;
  memset(FileInformation, 0, sizeof(FileInformation));
  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  if ( FileObject )
  {
    v7 = ZwQueryInformationFile(
           *(HANDLE *)&PopHiberInfo,
           &IoStatusBlock,
           FileInformation,
           0x18u,
           FileStandardInformation);
    if ( v7 < 0 )
    {
LABEL_15:
      v10 = 0LL;
      goto LABEL_10;
    }
    v8 = FileInformation[0];
  }
  else
  {
    v8 = 0LL;
  }
  ObjectAttributes.ObjectName = &IoArcBootDeviceName;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v7 = ZwOpenFile(&FileHandle, 0xC0000000, &ObjectAttributes, &IoStatusBlock, 3u, 0x20u);
  if ( v7 < 0 )
    goto LABEL_15;
  v7 = ZwQueryVolumeInformationFile(FileHandle, &IoStatusBlock, FsInformation, 0x20u, FileFsFullSizeInformation);
  ZwClose(FileHandle);
  if ( v7 < 0 )
    goto LABEL_15;
  v7 = -1073741823;
  v6 = FsInformation[2] * (unsigned int)(HIDWORD(FsInformation[3]) * LODWORD(FsInformation[3]));
  v9 = v6 - 0x10000000;
  if ( v6 - 0x10000000 <= 0 )
    v9 = 0LL;
  v10 = v8 + v9;
  if ( v6 - 0x10000000 >= a1 - v8 )
    v7 = 0;
LABEL_10:
  if ( a2 )
    *a2 = v10;
  if ( a3 )
    *a3 = v6;
  return (unsigned int)v7;
}
