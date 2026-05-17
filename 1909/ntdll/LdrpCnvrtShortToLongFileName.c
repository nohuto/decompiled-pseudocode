/*
 * XREFs of LdrpCnvrtShortToLongFileName @ 0x1800E0198
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x180017900 (LdrLoadAlternateResourceModuleEx.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x180016AA0 (RtlInitUnicodeString.c)
 *     RtlReleaseRelativeName @ 0x180025F30 (RtlReleaseRelativeName.c)
 *     RtlpDosPathNameToRelativeNtPathName_U @ 0x180025F70 (RtlpDosPathNameToRelativeNtPathName_U.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     NtClose @ 0x18009D070 (NtClose.c)
 *     NtOpenFile @ 0x18009D4F0 (NtOpenFile.c)
 *     NtQueryDirectoryFile @ 0x18009D530 (NtQueryDirectoryFile.c)
 *     memmove @ 0x1800A3A80 (memmove.c)
 */

__int64 __fastcall LdrpCnvrtShortToLongFileName(PCWSTR SourceString, PCWSTR a2, _QWORD *a3)
{
  wchar_t *Buffer; // rdi
  int DirectoryFile; // ebx
  __int64 Heap; // rdi
  unsigned int v8; // eax
  _WORD *v9; // rax
  _WORD *v10; // rsi
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-39h] BYREF
  UNICODE_STRING v13; // [rsp+78h] [rbp-29h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+88h] [rbp-19h] BYREF
  UNICODE_STRING v15; // [rsp+98h] [rbp-9h] BYREF
  __int64 v16; // [rsp+A8h] [rbp+7h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+B8h] [rbp+17h] BYREF
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
    DirectoryFile = NtOpenFile(&FileHandle, 0x100001u, &ObjectAttributes, &IoStatusBlock, 7u, 0x4021u);
    if ( Buffer )
    {
      RtlReleaseRelativeName((__int64)&v15);
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)Buffer);
    }
    if ( DirectoryFile >= 0 )
    {
      Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 1040LL);
      if ( Heap )
      {
        RtlInitUnicodeString(&v13, a2);
        DirectoryFile = NtQueryDirectoryFile();
        if ( DirectoryFile >= 0 )
        {
          v8 = *(_DWORD *)(Heap + 60);
          if ( v8 <= 0x104 )
          {
            v9 = (_WORD *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, v8 + 4);
            v10 = v9;
            if ( v9 )
            {
              memmove(v9, (const void *)(Heap + 94), *(unsigned int *)(Heap + 60));
              v10[(unsigned __int64)*(unsigned int *)(Heap + 60) >> 1] = 0;
              *a3 = v10;
            }
            else
            {
              DirectoryFile = -1073741801;
            }
          }
        }
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap);
      }
      else
      {
        DirectoryFile = -1073741801;
      }
    }
    goto LABEL_21;
  }
  DirectoryFile = RtlpDosPathNameToRelativeNtPathName_U(
                    2,
                    (__int64)SourceString,
                    (int)&DestinationString,
                    0LL,
                    (__int64)&v15);
  if ( DirectoryFile >= 0 )
  {
    Buffer = DestinationString.Buffer;
    if ( v15.Length )
      DestinationString = v15;
    else
      v16 = 0LL;
    goto LABEL_10;
  }
LABEL_21:
  if ( FileHandle )
    NtClose(FileHandle);
  return (unsigned int)DirectoryFile;
}
