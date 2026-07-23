/*
 * XREFs of sub_1800E00A8 @ 0x1800E00A8
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x180017900 (LdrLoadAlternateResourceModuleEx.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x180016AA0 (RtlInitUnicodeString.c)
 *     RtlReleaseRelativeName @ 0x180025F30 (RtlReleaseRelativeName.c)
 *     sub_180025F70 @ 0x180025F70 (sub_180025F70.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwOpenFile @ 0x18009CD40 (ZwOpenFile.c)
 *     ZwQueryDirectoryFile @ 0x18009CD80 (ZwQueryDirectoryFile.c)
 *     memmove @ 0x1800A32C0 (memmove.c)
 */

__int64 __fastcall sub_1800E00A8(PCWSTR SourceString, PCWSTR a2, _QWORD *a3)
{
  PWCH Buffer; // rdi
  NTSTATUS v6; // ebx
  _DWORD *Heap; // rdi
  unsigned int v8; // eax
  _WORD *v9; // rax
  _WORD *v10; // rsi
  _UNICODE_STRING DestinationString; // [rsp+68h] [rbp-39h] BYREF
  _UNICODE_STRING FileName; // [rsp+78h] [rbp-29h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+88h] [rbp-19h] BYREF
  _RTL_RELATIVE_NAME_U RelativeName; // [rsp+98h] [rbp-9h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+B8h] [rbp+17h] BYREF
  HANDLE FileHandle; // [rsp+108h] [rbp+67h] BYREF

  FileHandle = 0LL;
  Buffer = 0LL;
  if ( !SourceString || !a2 || !a3 )
    return 3221225485LL;
  if ( *SourceString == 92 )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
LABEL_10:
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v6 = ZwOpenFile(&FileHandle, 0x100001u, &ObjectAttributes, &IoStatusBlock, 7u, 0x4021u);
    if ( Buffer )
    {
      RtlReleaseRelativeName(&RelativeName);
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Buffer);
    }
    if ( v6 >= 0 )
    {
      Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x410uLL);
      if ( Heap )
      {
        RtlInitUnicodeString(&FileName, a2);
        v6 = ZwQueryDirectoryFile(
               FileHandle,
               0LL,
               0LL,
               0LL,
               &IoStatusBlock,
               Heap,
               0x410u,
               FileBothDirectoryInformation,
               1u,
               &FileName,
               0);
        if ( v6 >= 0 )
        {
          v8 = Heap[15];
          if ( v8 <= 0x104 )
          {
            v9 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v8 + 4);
            v10 = v9;
            if ( v9 )
            {
              memmove(v9, (char *)Heap + 94, (unsigned int)Heap[15]);
              v10[(unsigned __int64)(unsigned int)Heap[15] >> 1] = 0;
              *a3 = v10;
            }
            else
            {
              v6 = -1073741801;
            }
          }
        }
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
      }
      else
      {
        v6 = -1073741801;
      }
    }
    goto LABEL_21;
  }
  v6 = sub_180025F70(2, SourceString, (int)&DestinationString, 0LL, (__int64)&RelativeName);
  if ( v6 >= 0 )
  {
    Buffer = DestinationString.Buffer;
    if ( RelativeName.RelativeName.Length )
      DestinationString = RelativeName.RelativeName;
    else
      RelativeName.ContainingDirectory = 0LL;
    goto LABEL_10;
  }
LABEL_21:
  if ( FileHandle )
    ZwClose(FileHandle);
  return (unsigned int)v6;
}
