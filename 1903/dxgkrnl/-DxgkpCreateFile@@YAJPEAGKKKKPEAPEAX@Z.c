/*
 * XREFs of ?DxgkpCreateFile@@YAJPEAGKKKKPEAPEAX@Z @ 0x1C023ACA8
 * Callers:
 *     ?CopyDriverStore@DXGADAPTER@@QEAAJXZ @ 0x1C023A678 (-CopyDriverStore@DXGADAPTER@@QEAAJXZ.c)
 * Callees:
 *     ?RtlStringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0017C3C (-RtlStringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     memset @ 0x1C0025300 (memset.c)
 */

__int64 __fastcall DxgkpCreateFile(
        size_t *a1,
        ACCESS_MASK DesiredAccess,
        ULONG FileAttributes,
        ULONG CreateOptions,
        ULONG CreateDisposition,
        void **a6)
{
  __int64 v10; // rdi
  __int64 result; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  NTSTATUS v14; // ebx
  __int64 v15; // r8
  __int64 v16; // rax
  void *FileHandle; // [rsp+60h] [rbp-A0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+68h] [rbp-98h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+78h] [rbp-88h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-78h] BYREF
  WCHAR SourceString[264]; // [rsp+C0h] [rbp-40h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v10 = -1LL;
  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  *a6 = (void *)-1LL;
  result = RtlStringCbCopyW(SourceString, 0x208uLL, a1);
  if ( (int)result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    FileHandle = (void *)-1LL;
    v14 = ZwCreateFile(
            &FileHandle,
            DesiredAccess,
            &ObjectAttributes,
            &IoStatusBlock,
            0LL,
            FileAttributes,
            1u,
            CreateDisposition,
            CreateOptions,
            0LL,
            0);
    if ( v14 >= 0 )
    {
      v10 = (__int64)FileHandle;
    }
    else
    {
      v16 = WdLogNewEntry5_WdWarning(v13, v12, v15);
      *(_QWORD *)(v16 + 24) = 78LL;
      WdLogEvent5_WdWarning(v16);
    }
    *a6 = (void *)v10;
    return (unsigned int)v14;
  }
  return result;
}
