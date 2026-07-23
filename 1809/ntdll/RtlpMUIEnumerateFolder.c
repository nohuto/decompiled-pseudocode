/*
 * XREFs of RtlpMUIEnumerateFolder @ 0x18008A194
 * Callers:
 *     RtlGetFileMUIPath @ 0x180034DB0 (RtlGetFileMUIPath.c)
 * Callees:
 *     RtlReAllocateHeap @ 0x18000C320 (RtlReAllocateHeap.c)
 *     RtlAllocateHeap @ 0x18000F2A0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     RtlReleaseRelativeName @ 0x1800347B0 (RtlReleaseRelativeName.c)
 *     RtlDosPathNameToRelativeNtPathName_U @ 0x180034930 (RtlDosPathNameToRelativeNtPathName_U.c)
 *     RtlCultureNameToLCID @ 0x180040460 (RtlCultureNameToLCID.c)
 *     NtClose @ 0x1800A04E0 (NtClose.c)
 *     NtOpenFile @ 0x1800A0960 (NtOpenFile.c)
 *     NtQueryDirectoryFile @ 0x1800A09A0 (NtQueryDirectoryFile.c)
 *     memmove @ 0x1800A6DC0 (memmove.c)
 *     memset @ 0x1800A7100 (memset.c)
 */

char __fastcall RtlpMUIEnumerateFolder(const WCHAR *a1, _QWORD *a2, PVOID *a3)
{
  char v4; // r15
  unsigned int v5; // r13d
  _DWORD *Heap; // rdi
  unsigned __int64 v7; // rax
  wchar_t *Buffer; // rsi
  HANDLE ContainingDirectory; // rax
  NTSTATUS v10; // r14d
  __int64 v11; // r12
  NTSTATUS v12; // eax
  unsigned int *i; // rsi
  bool v14; // zf
  char *v15; // r14
  char *v16; // rax
  int v17; // eax
  unsigned int v18; // edx
  char *v20; // rax
  HANDLE FileHandle; // [rsp+60h] [rbp-69h] BYREF
  _UNICODE_STRING NtFileName; // [rsp+68h] [rbp-61h] BYREF
  _UNICODE_STRING String; // [rsp+78h] [rbp-51h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+88h] [rbp-41h] BYREF
  _RTL_RELATIVE_NAME_U RelativeName; // [rsp+98h] [rbp-31h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+B8h] [rbp-11h] BYREF
  int v27; // [rsp+130h] [rbp+67h]
  DWORD Lcid; // [rsp+148h] [rbp+7Fh] BYREF

  v27 = 0;
  FileHandle = 0LL;
  v4 = 0;
  v5 = 0;
  Heap = 0LL;
  if ( !a1 )
    goto LABEL_48;
  if ( !a3 )
    return v4;
  if ( !a2 )
    goto LABEL_48;
  v7 = -1LL;
  do
    ++v7;
  while ( a1[v7] );
  if ( v7 >= 0x104 )
    goto LABEL_48;
  *a3 = 0LL;
  if ( RtlDosPathNameToRelativeNtPathName_U(a1, &NtFileName, 0LL, &RelativeName) )
  {
    Buffer = NtFileName.Buffer;
    if ( RelativeName.RelativeName.Length )
    {
      ContainingDirectory = RelativeName.ContainingDirectory;
      NtFileName = RelativeName.RelativeName;
    }
    else
    {
      ContainingDirectory = 0LL;
      RelativeName.ContainingDirectory = 0LL;
    }
    ObjectAttributes.RootDirectory = ContainingDirectory;
    ObjectAttributes.ObjectName = &NtFileName;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v10 = NtOpenFile(&FileHandle, 0x100001u, &ObjectAttributes, &IoStatusBlock, 5u, 0x21u);
    RtlReleaseRelativeName(&RelativeName);
    if ( Buffer )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Buffer);
    if ( v10 >= 0 )
    {
      if ( FileHandle )
      {
        Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x1000uLL);
        if ( !Heap )
          goto LABEL_31;
        v11 = 0LL;
        v12 = NtQueryDirectoryFile(
                FileHandle,
                0LL,
                0LL,
                0LL,
                &IoStatusBlock,
                Heap,
                0x1000u,
                FileDirectoryInformation,
                0,
                0LL,
                1u);
LABEL_16:
        if ( v12 < 0 )
        {
          if ( v12 != -2147483642 )
            goto LABEL_31;
        }
        else if ( Heap[15] || *Heap )
        {
          for ( i = Heap; ; i = (unsigned int *)((char *)i + *i) )
          {
            v14 = (i[14] & 0x10) == 0;
            String.MaximumLength = *((_WORD *)i + 30);
            String.Length = String.MaximumLength;
            String.Buffer = (wchar_t *)(i + 16);
            if ( !v14 && RtlCultureNameToLCID(&String, &Lcid) )
            {
              v15 = (char *)*a3;
              ++v11;
              if ( *a3 )
              {
                v17 = v27;
              }
              else
              {
                v16 = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x208uLL);
                *a3 = v16;
                v15 = v16;
                if ( !v16 )
                  goto LABEL_31;
                v17 = 0;
                v5 = 520;
                v27 = 0;
              }
              v18 = i[15];
              if ( (unsigned __int64)(v18 + v17) + 2 > v5 )
              {
                if ( v18 > 0x208 )
                  v5 += v18 + 2;
                else
                  v5 += 520;
                v20 = (char *)RtlReAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v15, v5);
                *a3 = v20;
                if ( !v20 )
                {
                  *a3 = v15;
                  goto LABEL_31;
                }
                v18 = i[15];
                v15 = v20;
              }
              memmove(&v15[v27], i + 16, v18);
              v27 += i[15] + 2;
            }
            if ( !*i )
            {
              memset(Heap, 0, 0x1000uLL);
              v12 = NtQueryDirectoryFile(
                      FileHandle,
                      0LL,
                      0LL,
                      0LL,
                      &IoStatusBlock,
                      Heap,
                      0x1000u,
                      FileDirectoryInformation,
                      0,
                      0LL,
                      0);
              goto LABEL_16;
            }
          }
        }
        v4 = 1;
        *a2 = v11;
        goto LABEL_31;
      }
      goto LABEL_48;
    }
  }
LABEL_31:
  if ( FileHandle )
    NtClose(FileHandle);
  if ( Heap )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  if ( !v4 )
  {
LABEL_48:
    if ( a3 && *a3 )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, *a3);
      *a3 = 0LL;
    }
  }
  return v4;
}
