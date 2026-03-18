/*
 * XREFs of IopFileUtilWalkDirectoryTreeHelper @ 0x1406981A4
 * Callers:
 *     IopFileUtilWalkDirectoryTreeBottomUp @ 0x140698EAC (IopFileUtilWalkDirectoryTreeBottomUp.c)
 *     IopFileUtilWalkDirectoryTreeTopDown @ 0x140A3B9AC (IopFileUtilWalkDirectoryTreeTopDown.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x140002BC0 (RtlAppendUnicodeToString.c)
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     RtlCopyUnicodeString @ 0x140043E20 (RtlCopyUnicodeString.c)
 *     RtlAppendUnicodeStringToString @ 0x1400E7910 (RtlAppendUnicodeStringToString.c)
 *     _wcsicmp @ 0x1401A0100 (_wcsicmp.c)
 *     ZwWaitForSingleObject @ 0x1401C0150 (ZwWaitForSingleObject.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwOpenFile @ 0x1401C0730 (ZwOpenFile.c)
 *     ZwQueryDirectoryFile @ 0x1401C0770 (ZwQueryDirectoryFile.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopFileUtilWalkDirectoryTreeHelper(
        UNICODE_STRING *a1,
        int a2,
        __int64 (__fastcall *a3)(UNICODE_STRING *, UNICODE_STRING *, __int64, __int64),
        __int64 a4,
        unsigned int *FileInformation,
        int a6,
        __int64 a7)
{
  char v7; // r13
  UNICODE_STRING *v8; // rsi
  NTSTATUS Status; // ebx
  unsigned int *v11; // rdi
  unsigned int *v12; // r14
  unsigned __int64 v13; // rax
  __int16 v14; // cx
  const WCHAR *i; // r15
  __int64 v16; // rax
  unsigned __int64 v17; // rax
  unsigned __int16 v18; // si
  UNICODE_STRING *PoolWithTag; // rdi
  __int64 v20; // r8
  bool v21; // si
  UNICODE_STRING **v22; // rax
  HANDLE FileHandle; // [rsp+68h] [rbp-61h] BYREF
  unsigned int *v24; // [rsp+70h] [rbp-59h]
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-51h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+88h] [rbp-41h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-31h] BYREF
  __int16 v29; // [rsp+120h] [rbp+57h]

  ObjectAttributes.ObjectName = a1;
  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  v7 = a2;
  DestinationString.Buffer = 0LL;
  v8 = a1;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  Status = ZwOpenFile(&FileHandle, 0x100001u, &ObjectAttributes, &IoStatusBlock, 1u, ~(a2 << 17) & 0x200000 | 0x4001);
  if ( Status < 0 )
    return (unsigned int)Status;
  v11 = FileInformation;
  Status = ZwQueryDirectoryFile(
             FileHandle,
             0LL,
             0LL,
             0LL,
             &IoStatusBlock,
             FileInformation,
             0x3FEu,
             FileBothDirectoryInformation,
             0,
             0LL,
             1u);
  if ( Status < 0 )
    goto LABEL_28;
  while ( 2 )
  {
    if ( Status == 259 )
    {
      ZwWaitForSingleObject(FileHandle, 1u, 0LL);
      Status = IoStatusBlock.Status;
      if ( IoStatusBlock.Status < 0 )
        break;
    }
    v12 = v11;
    v24 = v11 + 15;
    v13 = (unsigned __int64)v11[15] >> 1;
    v14 = *((_WORD *)v11 + v13 + 47);
    *((_WORD *)v11 + v13 + 47) = 0;
    for ( i = (const WCHAR *)v11 + 47; ; i = (const WCHAR *)v12 + 47 )
    {
      v29 = v14;
      RtlInitUnicodeString(&DestinationString, i);
      v18 = DestinationString.Length + v8->Length + 2;
      PoolWithTag = (UNICODE_STRING *)ExAllocatePoolWithTag(PagedPool, v18 + 38LL, 0x75466F49u);
      if ( !PoolWithTag )
        break;
      PoolWithTag[1].MaximumLength = v18;
      v8 = a1;
      PoolWithTag[1].Buffer = &PoolWithTag[2].Length;
      PoolWithTag[1].Length = 0;
      RtlCopyUnicodeString(PoolWithTag + 1, a1);
      RtlAppendUnicodeToString(PoolWithTag + 1, L"\\");
      RtlAppendUnicodeStringToString(PoolWithTag + 1, &DestinationString);
      v20 = v12[14];
      if ( (v20 & 0x10) != 0 )
      {
        v21 = !wcsicmp(i, L".") || !wcsicmp(i, L"..");
        if ( (v7 & 2) != 0 )
        {
          if ( (v7 & 4) == 0 || !v21 )
          {
            Status = a3(PoolWithTag + 1, &DestinationString, v12[14], a4);
            goto LABEL_21;
          }
LABEL_22:
          ExFreePoolWithTag(PoolWithTag, 0);
        }
        else
        {
LABEL_21:
          if ( v21 || (v7 & 8) == 0 )
            goto LABEL_22;
          v22 = *(UNICODE_STRING ***)(a7 + 8);
          if ( *v22 != (UNICODE_STRING *)a7 )
            __fastfail(3u);
          *(_QWORD *)&PoolWithTag->Length = a7;
          PoolWithTag->Buffer = (wchar_t *)v22;
          *v22 = PoolWithTag;
          *(_QWORD *)(a7 + 8) = PoolWithTag;
        }
        v8 = a1;
        goto LABEL_7;
      }
      if ( (v7 & 1) != 0 )
        Status = a3(PoolWithTag + 1, &DestinationString, v20, a4);
      ExFreePoolWithTag(PoolWithTag, 0);
LABEL_7:
      if ( Status < 0 )
        goto LABEL_28;
      *((_WORD *)v12 + ((unsigned __int64)*v24 >> 1) + 47) = v29;
      v16 = *v12;
      if ( !(_DWORD)v16 )
        goto LABEL_24;
      v12 = (unsigned int *)((char *)v12 + v16);
      v24 = v12 + 15;
      v17 = (unsigned __int64)v12[15] >> 1;
      v14 = *((_WORD *)v12 + v17 + 47);
      *((_WORD *)v12 + v17 + 47) = 0;
    }
    Status = -1073741670;
LABEL_24:
    if ( Status >= 0 )
    {
      v11 = FileInformation;
      Status = ZwQueryDirectoryFile(
                 FileHandle,
                 0LL,
                 0LL,
                 0LL,
                 &IoStatusBlock,
                 FileInformation,
                 0x3FEu,
                 FileBothDirectoryInformation,
                 0,
                 0LL,
                 0);
      if ( Status >= 0 )
      {
        v8 = a1;
        continue;
      }
    }
    break;
  }
LABEL_28:
  ZwClose(FileHandle);
  if ( Status == -2147483642 )
    return 0;
  return (unsigned int)Status;
}
