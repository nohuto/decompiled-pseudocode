/*
 * XREFs of PiOpenDirectoryWithRoot @ 0x14085F394
 * Callers:
 *     PiBuildAndOpenDeviceDirectoryPath @ 0x14085EA0C (PiBuildAndOpenDeviceDirectoryPath.c)
 *     PiGetDriverMutableStateDirectory @ 0x14085F228 (PiGetDriverMutableStateDirectory.c)
 * Callees:
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ZwOpenFile @ 0x1401C12B0 (ZwOpenFile.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     RtlPrefixUnicodeString @ 0x140666440 (RtlPrefixUnicodeString.c)
 *     PiCreateDirectoryPath @ 0x14085EB40 (PiCreateDirectoryPath.c)
 *     PiAuGetStateDirectorySecurityObject @ 0x140864270 (PiAuGetStateDirectorySecurityObject.c)
 */

__int64 __fastcall PiOpenDirectoryWithRoot(UNICODE_STRING *SourceString, UNICODE_STRING *a2, char a3, _QWORD *a4)
{
  void *v8; // rdi
  HANDLE v9; // rsi
  int v10; // ebx
  NTSTATUS v11; // eax
  int StateDirectorySecurityObject; // eax
  HANDLE v13; // rax
  HANDLE Handle; // [rsp+30h] [rbp-50h] BYREF
  void *v16; // [rsp+38h] [rbp-48h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  HANDLE FileHandle; // [rsp+B0h] [rbp+30h] BYREF

  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  FileHandle = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v16 = 0LL;
  Handle = 0LL;
  if ( !SourceString || !a2 || !a4 )
  {
    v10 = -1073741811;
LABEL_16:
    if ( v9 )
      ZwClose(v9);
    goto LABEL_18;
  }
  if ( !RtlPrefixUnicodeString(SourceString, a2, 1u) )
    return (unsigned int)-1073741811;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = a2;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v11 = ZwOpenFile(&FileHandle, 0x100001u, &ObjectAttributes, &IoStatusBlock, 3u, 0x21u);
  v10 = v11;
  if ( v11 == -1073741766 )
  {
    if ( a3 )
    {
      StateDirectorySecurityObject = PiAuGetStateDirectorySecurityObject(&v16);
      v8 = v16;
      v10 = StateDirectorySecurityObject;
      if ( StateDirectorySecurityObject >= 0 )
      {
        v10 = PiCreateDirectoryPath(SourceString, v16, &Handle);
        if ( v10 < 0 || (v10 = PiCreateDirectoryPath(a2, v8, &FileHandle), v10 < 0) )
        {
          v9 = Handle;
          goto LABEL_16;
        }
        v9 = Handle;
        goto LABEL_14;
      }
    }
  }
  else if ( v11 >= 0 )
  {
LABEL_14:
    v13 = FileHandle;
    FileHandle = 0LL;
    *a4 = v13;
    goto LABEL_16;
  }
LABEL_18:
  if ( FileHandle )
    ZwClose(FileHandle);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  return (unsigned int)v10;
}
