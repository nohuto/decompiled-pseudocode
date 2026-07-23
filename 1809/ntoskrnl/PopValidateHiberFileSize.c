/*
 * XREFs of PopValidateHiberFileSize @ 0x1406E10D4
 * Callers:
 *     PopResizeHiberFile @ 0x1406E0F88 (PopResizeHiberFile.c)
 *     PopSetHiberFileSize @ 0x14086CE24 (PopSetHiberFileSize.c)
 *     PopSetHiberFileType @ 0x14086CF30 (PopSetHiberFileType.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwQueryInformationFile @ 0x1401B8510 (ZwQueryInformationFile.c)
 *     ZwOpenFile @ 0x1401B8950 (ZwOpenFile.c)
 *     ZwQueryVolumeInformationFile @ 0x1401B8C10 (ZwQueryVolumeInformationFile.c)
 */

__int64 __fastcall PopValidateHiberFileSize(__int64 a1, _QWORD *a2, __int64 *a3)
{
  __int64 v6; // rdi
  NTSTATUS v7; // esi
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rcx
  HANDLE FileHandle; // [rsp+30h] [rbp-69h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+38h] [rbp-61h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-51h] BYREF
  _BYTE FsInformation[16]; // [rsp+78h] [rbp-21h] BYREF
  __int64 v16; // [rsp+88h] [rbp-11h]
  int v17; // [rsp+90h] [rbp-9h]
  int v18; // [rsp+94h] [rbp-5h]
  _QWORD FileInformation[3]; // [rsp+98h] [rbp-1h] BYREF

  v6 = 0LL;
  if ( FileObject )
  {
    v7 = ZwQueryInformationFile(PopHiberInfo, &IoStatusBlock, FileInformation, 0x18u, FileStandardInformation);
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
  v6 = v16 * (unsigned int)(v18 * v17);
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
