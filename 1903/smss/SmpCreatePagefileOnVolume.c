/*
 * XREFs of SmpCreatePagefileOnVolume @ 0x14000A394
 * Callers:
 *     SmpCreatePagefileFromDescriptor @ 0x14000AB28 (SmpCreatePagefileFromDescriptor.c)
 * Callees:
 *     SmpCreatePagingFile @ 0x14000A20C (SmpCreatePagingFile.c)
 *     SmpCheckHybridPriority @ 0x14000A918 (SmpCheckHybridPriority.c)
 *     SmpTrimPagingFileExtents @ 0x14000A9B8 (SmpTrimPagingFileExtents.c)
 *     SmpGetPagingFileSize @ 0x14000AAB8 (SmpGetPagingFileSize.c)
 *     SmpDeletePagingFile @ 0x140010484 (SmpDeletePagingFile.c)
 */

__int64 __fastcall SmpCreatePagefileOnVolume(__int64 a1, __int64 a2, int a3)
{
  bool v3; // r12
  int v4; // r13d
  UNICODE_STRING *v7; // r14
  NTSTATUS v8; // ecx
  int PagingFileSize; // eax
  __int64 v10; // r15
  unsigned __int64 v11; // r15
  unsigned __int64 v12; // rdx
  bool v13; // zf
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // r11
  unsigned __int64 v16; // rax
  int v17; // eax
  int PagingFile; // ecx
  int v19; // eax
  __int64 v21; // rax
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // r9
  unsigned __int64 v24; // r10
  unsigned __int64 v25; // r13
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rcx
  __int64 v28; // rax
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rdx
  __int64 v33; // rcx
  unsigned __int64 v34; // rdx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-48h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-38h] BYREF
  int v37; // [rsp+C0h] [rbp+48h] BYREF
  void *FileHandle; // [rsp+C8h] [rbp+50h] BYREF
  int v39; // [rsp+D0h] [rbp+58h]
  __int64 v40; // [rsp+D8h] [rbp+60h] BYREF

  v39 = a3;
  v40 = 0LL;
  v3 = 0;
  v4 = a3;
  if ( (*(_BYTE *)(a1 + 92) & 4) != 0 )
    *(_WORD *)(*(_QWORD *)(a1 + 24) + 8LL) = *(_WORD *)(a2 + 28);
  ObjectAttributes.RootDirectory = 0LL;
  v7 = (UNICODE_STRING *)(a1 + 16);
  ObjectAttributes.ObjectName = (PUNICODE_STRING)(a1 + 16);
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v8 = NtOpenFile(&FileHandle, 0xC0100000, &ObjectAttributes, &IoStatusBlock, 3u, 0x28u);
  if ( v8 < 0 )
  {
    v10 = v40;
    v21 = 2LL * (_InterlockedIncrement(&SmpPagefileLogIndex) % 32);
    *((_DWORD *)&SmpPagefileLog + 2 * v21) = 2194;
    *((_DWORD *)&SmpPagefileLog + 2 * v21 + 1) = v8;
    *((_QWORD *)&SmpPagefileLog + v21 + 1) = v7;
  }
  else
  {
    PagingFileSize = SmpGetPagingFileSize(FileHandle, v7, &v40);
    v10 = v40;
    if ( PagingFileSize >= 0 )
      v3 = v40 != 0;
    SmpTrimPagingFileExtents(FileHandle, v7);
    NtClose(FileHandle);
  }
  v11 = *(_QWORD *)(a2 + 32) + v10;
  v12 = v11;
  if ( v11 > *(_QWORD *)(a2 + 40) )
  {
    v11 = *(_QWORD *)(a2 + 40);
    v12 = v11;
  }
  v13 = (*(_BYTE *)(a1 + 92) & 2) == 0;
  v14 = *(_QWORD *)(a1 + 56);
  v15 = *(_QWORD *)(a1 + 64);
  *(_QWORD *)(a1 + 72) = v14;
  *(_QWORD *)(a1 + 80) = v15;
  if ( v13 )
  {
    if ( v14 > v12 )
    {
      if ( !v4 )
        return 3221225599LL;
      *(_QWORD *)(a1 + 72) = v11;
    }
    v16 = v15;
    if ( v15 > *(_QWORD *)(a2 + 40) )
      v16 = *(_QWORD *)(a2 + 40);
    *(_QWORD *)(a1 + 80) = v16;
  }
  else
  {
    v22 = v12 >> 2;
    v23 = *(_QWORD *)(a2 + 40) >> 3;
    v24 = v14;
    v25 = v23;
    if ( SmpMemorySize >= v12 >> 2 )
      v22 = SmpMemorySize;
    v26 = v12 >> 1;
    if ( v22 <= v12 >> 1 )
      v26 = v22;
    if ( v26 <= v23 )
      v25 = v26;
    v27 = v25;
    if ( v14 > v25 )
    {
      if ( !v39 )
        return 3221225599LL;
      if ( (*(_BYTE *)(a1 + 92) & 8) != 0 )
      {
        v28 = v12 >> 5;
        if ( v12 >> 5 > 0x40000000 )
          v28 = 0x40000000LL;
        v29 = v12 - v28;
        if ( v14 <= v29 || v14 == *(_QWORD *)(a1 + 48) )
        {
          v27 = v29;
          if ( v23 < v29 )
            v23 = v29;
        }
      }
      v24 = v14;
      if ( v14 > v27 )
      {
        v30 = *(_QWORD *)(a1 + 48);
        if ( v14 > v30 )
        {
          *(_QWORD *)(a1 + 72) = v30;
          v24 = v30;
        }
      }
    }
    v31 = *(_QWORD *)(a1 + 72);
    v4 = v39;
    if ( v24 > v27 )
      v31 = v27;
    *(_QWORD *)(a1 + 72) = v31;
    if ( v15 > v23 )
      *(_QWORD *)(a1 + 80) = v23;
  }
  *(_DWORD *)(a1 + 88) = 0;
  v17 = *(_DWORD *)(a2 + 16);
  if ( (v17 & 4) != 0 )
  {
    *(_DWORD *)(a1 + 88) = 0x40000000;
    v17 = *(_DWORD *)(a2 + 16);
  }
  if ( (v17 & 8) != 0
    && (int)SmpCheckHybridPriority(*(unsigned int *)(a2 + 20), &v37, 0LL) >= 0
    && (v37 & 0xFFFFFFF0) == 0 )
  {
    *(_DWORD *)(a1 + 88) |= (v37 | 0x10) << 26;
  }
  if ( (*(_BYTE *)(a2 + 16) & 0x40) != 0 )
    *(_DWORD *)(a1 + 88) |= 0x1000000u;
  while ( 1 )
  {
    PagingFile = SmpCreatePagingFile(
                   v7,
                   *(union _LARGE_INTEGER *)(a1 + 72),
                   *(union _LARGE_INTEGER *)(a1 + 80),
                   *(_DWORD *)(a1 + 88));
    if ( PagingFile >= 0 )
      break;
    if ( !v4 )
      goto LABEL_26;
    v32 = *(_QWORD *)(a1 + 72);
    if ( v32 <= 0x1000000 )
      goto LABEL_26;
    v33 = 0x1000000LL;
    if ( v32 >> 4 > 0x1000000 )
      v33 = v32 >> 4;
    v34 = v32 - v33;
    *(_QWORD *)(a1 + 72) = v34;
    if ( v34 < 0x1000000 )
      *(_QWORD *)(a1 + 72) = 0x1000000LL;
  }
  *(_DWORD *)(a1 + 92) |= 1u;
  v19 = *(_DWORD *)(a2 + 16) | 0x10;
  *(_DWORD *)(a2 + 16) = v19;
  if ( (*(_DWORD *)(a1 + 88) & 0x40000000) != 0 )
    *(_DWORD *)(a2 + 16) = v19 | 0x20;
  if ( (*(_BYTE *)(a1 + 92) & 2) != 0 )
    ++SmpNumberOfManagedPagefilesCreated;
  ++SmpNumberOfPagefilesCreated;
LABEL_26:
  if ( (*(_BYTE *)(a1 + 92) & 1) != 0 )
    return (unsigned int)PagingFile;
  if ( v3 && (int)SmpDeletePagingFile(v7) >= 0 )
    *(_QWORD *)(a2 + 32) = v11;
  return 3221225599LL;
}
