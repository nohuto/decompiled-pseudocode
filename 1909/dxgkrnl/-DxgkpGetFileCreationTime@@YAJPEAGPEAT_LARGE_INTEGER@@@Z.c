/*
 * XREFs of ?DxgkpGetFileCreationTime@@YAJPEAGPEAT_LARGE_INTEGER@@@Z @ 0x1C023B77C
 * Callers:
 *     ?DxgkpCreateHardLink@@YAJPEAG0W4DXGKP_HARDLINKOVERWRITETYPE@@@Z @ 0x1C023B480 (-DxgkpCreateHardLink@@YAJPEAG0W4DXGKP_HARDLINKOVERWRITETYPE@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     memset @ 0x1C0025440 (memset.c)
 */

__int64 __fastcall DxgkpGetFileCreationTime(PCWSTR SourceString, union _LARGE_INTEGER *a2)
{
  NTSTATUS v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rbx
  __int64 v9; // rax
  NTSTATUS v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rax
  void *FileHandle; // [rsp+30h] [rbp-39h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-31h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+48h] [rbp-21h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-11h] BYREF
  _QWORD FileInformation[5]; // [rsp+88h] [rbp+1Fh] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.RootDirectory = 0LL;
  FileHandle = (void *)-1LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.Attributes = 64;
  v4 = ZwOpenFile(&FileHandle, 1u, &ObjectAttributes, &IoStatusBlock, 1u, 0x20u);
  v8 = v4;
  if ( v4 >= 0 )
  {
    memset(FileInformation, 0, sizeof(FileInformation));
    v10 = ZwQueryInformationFile(FileHandle, &IoStatusBlock, FileInformation, 0x28u, FileBasicInformation);
    v8 = v10;
    if ( v10 >= 0 )
    {
      *a2 = (union _LARGE_INTEGER)FileInformation[3];
    }
    else
    {
      v14 = WdLogNewEntry5_WdWarning(v12, v11, v13);
      *(_QWORD *)(v14 + 24) = v8;
      *(_QWORD *)(v14 + 32) = 146LL;
      WdLogEvent5_WdWarning(v14);
    }
    ZwClose(FileHandle);
  }
  else
  {
    v9 = WdLogNewEntry5_WdWarning(v6, v5, v7);
    *(_QWORD *)(v9 + 24) = v8;
    WdLogEvent5_WdWarning(v9);
  }
  return (unsigned int)v8;
}
