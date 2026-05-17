/*
 * XREFs of RtlpMUIEnumerateFolder @ 0x1800ED14C
 * Callers:
 *     RtlGetFileMUIPath @ 0x180059E30 (RtlGetFileMUIPath.c)
 * Callees:
 *     RtlCultureNameToLCID @ 0x1800168B0 (RtlCultureNameToLCID.c)
 *     RtlReleaseRelativeName @ 0x180025F30 (RtlReleaseRelativeName.c)
 *     RtlDosPathNameToRelativeNtPathName_U @ 0x180029320 (RtlDosPathNameToRelativeNtPathName_U.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     RtlReAllocateHeap @ 0x1800431F0 (RtlReAllocateHeap.c)
 *     NtClose @ 0x18009D070 (NtClose.c)
 *     NtOpenFile @ 0x18009D4F0 (NtOpenFile.c)
 *     NtQueryDirectoryFile @ 0x18009D530 (NtQueryDirectoryFile.c)
 *     memmove @ 0x1800A3A80 (memmove.c)
 *     memset @ 0x1800A3DC0 (memset.c)
 */

char __fastcall RtlpMUIEnumerateFolder(__int64 a1, _QWORD *a2, __int64 *a3)
{
  char v4; // r15
  unsigned int v5; // r13d
  unsigned int *Heap; // rdi
  unsigned __int64 v7; // rax
  __int64 v8; // rsi
  void *v9; // rax
  NTSTATUS v10; // r14d
  __int64 v11; // r12
  unsigned int *i; // rsi
  bool v13; // zf
  __int64 v14; // r14
  __int64 v15; // rax
  unsigned int v16; // eax
  unsigned int v17; // edx
  __int64 v18; // rax
  int DirectoryFile; // eax
  HANDLE FileHandle; // [rsp+60h] [rbp-69h] BYREF
  __int128 v22; // [rsp+68h] [rbp-61h] BYREF
  unsigned __int16 v23; // [rsp+78h] [rbp-51h] BYREF
  unsigned __int16 v24; // [rsp+7Ah] [rbp-4Fh]
  unsigned int *v25; // [rsp+80h] [rbp-49h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+88h] [rbp-41h] BYREF
  __int128 v27; // [rsp+98h] [rbp-31h] BYREF
  void *v28; // [rsp+A8h] [rbp-21h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+B8h] [rbp-11h] BYREF
  unsigned int v30; // [rsp+130h] [rbp+67h]
  int v32; // [rsp+148h] [rbp+7Fh] BYREF

  v30 = 0;
  FileHandle = 0LL;
  v4 = 0;
  v5 = 0;
  Heap = 0LL;
  if ( !a1 )
    goto LABEL_45;
  if ( !a3 )
    return v4;
  if ( !a2 )
    goto LABEL_45;
  v7 = -1LL;
  do
    ++v7;
  while ( *(_WORD *)(a1 + 2 * v7) );
  if ( v7 >= 0x104 )
    goto LABEL_45;
  *a3 = 0LL;
  if ( RtlDosPathNameToRelativeNtPathName_U(a1, (int)&v22, 0LL, (__int64)&v27) )
  {
    v8 = *((_QWORD *)&v22 + 1);
    if ( (_WORD)v27 )
    {
      v9 = v28;
      v22 = v27;
    }
    else
    {
      v9 = 0LL;
      v28 = 0LL;
    }
    ObjectAttributes.RootDirectory = v9;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v22;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v10 = NtOpenFile(&FileHandle, 0x100001u, &ObjectAttributes, &IoStatusBlock, 5u, 0x21u);
    RtlReleaseRelativeName((__int64)&v27);
    if ( v8 )
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v8);
    if ( v10 >= 0 )
    {
      if ( FileHandle )
      {
        Heap = (unsigned int *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 4096LL);
        if ( !Heap )
          goto LABEL_40;
        v11 = 0LL;
LABEL_36:
        DirectoryFile = NtQueryDirectoryFile();
        if ( DirectoryFile >= 0 )
        {
          if ( Heap[15] || *Heap )
          {
            for ( i = Heap; ; i = (unsigned int *)((char *)i + *i) )
            {
              v13 = (i[14] & 0x10) == 0;
              v24 = *((_WORD *)i + 30);
              v23 = v24;
              v25 = i + 16;
              if ( !v13 && RtlCultureNameToLCID(&v23, &v32) )
              {
                v14 = *a3;
                ++v11;
                if ( *a3 )
                {
                  v16 = v30;
                }
                else
                {
                  v15 = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 520LL);
                  *a3 = v15;
                  v14 = v15;
                  if ( !v15 )
                    goto LABEL_40;
                  v16 = 0;
                  v5 = 520;
                  v30 = 0;
                }
                v17 = i[15];
                if ( (unsigned __int64)(v17 + v16) + 2 > v5 )
                {
                  if ( v17 > 0x208 )
                    v5 += v17 + 2;
                  else
                    v5 += 520;
                  v18 = RtlReAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, v14, v5);
                  *a3 = v18;
                  if ( !v18 )
                  {
                    *a3 = v14;
                    goto LABEL_40;
                  }
                  v17 = i[15];
                  v14 = v18;
                }
                memmove((void *)(v14 + v30), i + 16, v17);
                v30 += i[15] + 2;
              }
              if ( !*i )
              {
                memset(Heap, 0, 0x1000uLL);
                goto LABEL_36;
              }
            }
          }
        }
        else if ( DirectoryFile != -2147483642 )
        {
          goto LABEL_40;
        }
        v4 = 1;
        *a2 = v11;
        goto LABEL_40;
      }
      goto LABEL_45;
    }
  }
LABEL_40:
  if ( FileHandle )
    NtClose(FileHandle);
  if ( Heap )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)Heap);
  if ( !v4 )
  {
LABEL_45:
    if ( a3 && *a3 )
    {
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, *a3);
      *a3 = 0LL;
    }
  }
  return v4;
}
