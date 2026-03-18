/*
 * XREFs of ?DxgkpCreateHardLink@@YAJPEAG0W4DXGKP_HARDLINKOVERWRITETYPE@@@Z @ 0x1C023B480
 * Callers:
 *     ?CopyDriverStore@DXGADAPTER@@QEAAJXZ @ 0x1C023ACE8 (-CopyDriverStore@DXGADAPTER@@QEAAJXZ.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C000C530 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C5A0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memmove @ 0x1C0025100 (memmove.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?DxgkpDeleteFile@@YAJPEAG@Z @ 0x1C023B6FC (-DxgkpDeleteFile@@YAJPEAG@Z.c)
 *     ?DxgkpGetFileCreationTime@@YAJPEAGPEAT_LARGE_INTEGER@@@Z @ 0x1C023B77C (-DxgkpGetFileCreationTime@@YAJPEAGPEAT_LARGE_INTEGER@@@Z.c)
 */

__int64 __fastcall DxgkpCreateHardLink(const WCHAR *a1, _WORD *a2, int a3)
{
  __int64 v6; // rbx
  NTSTATUS v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdi
  __int64 v12; // rax
  unsigned int v14; // ebx
  ULONG v15; // r14d
  _DWORD *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  _DWORD *v21; // rdi
  __int64 v22; // rax
  NTSTATUS FileCreationTime; // ebx
  NTSTATUS v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rax
  union _LARGE_INTEGER v29; // [rsp+38h] [rbp-29h] BYREF
  union _LARGE_INTEGER v30; // [rsp+40h] [rbp-21h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+48h] [rbp-19h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-9h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp+7h] BYREF
  void *FileHandle; // [rsp+E0h] [rbp+7Fh] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v6 = -1LL;
  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  FileHandle = (void *)-1LL;
  RtlInitUnicodeString(&DestinationString, a1);
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v7 = ZwOpenFile(&FileHandle, 0x100100u, &ObjectAttributes, &IoStatusBlock, 7u, 0x204020u);
  v11 = v7;
  if ( v7 < 0 )
  {
    v12 = WdLogNewEntry5_WdError(v9, v8, v10);
    *(_QWORD *)(v12 + 24) = v11;
    *(_QWORD *)(v12 + 32) = 207LL;
    WdLogEvent5_WdError(v12);
    return (unsigned int)v11;
  }
  do
    ++v6;
  while ( a2[v6] );
  v14 = 2 * v6;
  v15 = v14 + 24;
  v16 = operator new[](v14 + 24, 0x4B677844u, PagedPool);
  v21 = v16;
  if ( v16 )
  {
    memset(v16, 0, v14 + 24);
    v21[4] = v14;
    memmove(v21 + 5, a2, v14);
    v24 = ZwSetInformationFile(FileHandle, &IoStatusBlock, v21, v15, FileLinkInformation);
    FileCreationTime = v24;
    if ( v24 < 0 )
    {
      if ( v24 == -1073741771 )
      {
        if ( a3 != 1 )
          goto LABEL_12;
        v30.QuadPart = 0LL;
        v29.QuadPart = 0LL;
        FileCreationTime = DxgkpGetFileCreationTime(a1, &v30);
        if ( FileCreationTime < 0 )
          goto LABEL_15;
        FileCreationTime = DxgkpGetFileCreationTime(a2, &v29);
        if ( FileCreationTime < 0 )
          goto LABEL_15;
        if ( v30.QuadPart > v29.QuadPart )
        {
LABEL_12:
          FileCreationTime = DxgkpDeleteFile(a2);
          if ( FileCreationTime < 0 )
          {
LABEL_15:
            v28 = WdLogNewEntry5_WdWarning(v26, v25, v27);
            *(_QWORD *)(v28 + 24) = FileCreationTime;
            *(_QWORD *)(v28 + 32) = 279LL;
            WdLogEvent5_WdWarning(v28);
            goto LABEL_16;
          }
          FileCreationTime = ZwSetInformationFile(FileHandle, &IoStatusBlock, v21, v15, FileLinkInformation);
        }
      }
      if ( FileCreationTime < 0 )
        goto LABEL_15;
    }
LABEL_16:
    operator delete[](v21);
    goto LABEL_17;
  }
  v22 = WdLogNewEntry5_WdLowResource(v18, v17, v19, v20);
  *(_QWORD *)(v22 + 24) = 216LL;
  WdLogEvent5_WdLowResource(v22);
  FileCreationTime = -1073741801;
LABEL_17:
  ZwClose(FileHandle);
  return (unsigned int)FileCreationTime;
}
