/*
 * XREFs of ?ReadCurrentFile@CDriverStoreCopy@@QEAAJPEAX_KK@Z @ 0x1C023C68C
 * Callers:
 *     ?VmBusReadDriverStoreFile@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0222880 (-VmBusReadDriverStoreFile@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     memset @ 0x1C0025440 (memset.c)
 */

__int64 __fastcall CDriverStoreCopy::ReadCurrentFile(const WCHAR *this, void *a2, union _LARGE_INTEGER a3, ULONG a4)
{
  NTSTATUS v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rbx
  __int64 v13; // rax
  NTSTATUS v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rax
  union _LARGE_INTEGER ByteOffset; // [rsp+50h] [rbp-19h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-11h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp-1h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp+Fh] BYREF
  void *FileHandle; // [rsp+D0h] [rbp+67h] BYREF

  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  FileHandle = 0LL;
  RtlInitUnicodeString(&DestinationString, this + 532);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v8 = ZwOpenFile(&FileHandle, 1u, &ObjectAttributes, &IoStatusBlock, 1u, 0x20u);
  v12 = v8;
  if ( v8 >= 0 )
  {
    ByteOffset = a3;
    v14 = ZwReadFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, a2, a4, &ByteOffset, 0LL);
    v12 = v14;
    if ( v14 < 0 )
    {
      v18 = WdLogNewEntry5_WdWarning(v16, v15, v17);
      *(_QWORD *)(v18 + 24) = v12;
      *(_QWORD *)(v18 + 32) = 694LL;
      WdLogEvent5_WdWarning(v18);
    }
    ZwClose(FileHandle);
  }
  else
  {
    v13 = WdLogNewEntry5_WdWarning(v10, v9, v11);
    *(_QWORD *)(v13 + 24) = v12;
    WdLogEvent5_WdWarning(v13);
  }
  return (unsigned int)v12;
}
