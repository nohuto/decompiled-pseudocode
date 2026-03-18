/*
 * XREFs of MiCreateDataFileMap @ 0x14068A2EC
 * Callers:
 *     MiCreateNewSection @ 0x140689A04 (MiCreateNewSection.c)
 * Callees:
 *     MiInsertSubsectionNode @ 0x1400E094C (MiInsertSubsectionNode.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     FsRtlGetFileSize @ 0x14068A6A0 (FsRtlGetFileSize.c)
 *     FsRtlSetFileSize @ 0x14069CFA0 (FsRtlSetFileSize.c)
 *     MiComputeIdealFirstSubsection @ 0x14088C6C0 (MiComputeIdealFirstSubsection.c)
 */

NTSTATUS __fastcall MiCreateDataFileMap(
        PFILE_OBJECT FileObject,
        _WORD *a2,
        _QWORD *a3,
        LARGE_INTEGER a4,
        char a5,
        int a6,
        int a7,
        int a8)
{
  bool v10; // zf
  LARGE_INTEGER v12; // rbp
  unsigned __int64 v13; // r12
  _QWORD *PoolWithTag; // rdi
  PVOID v15; // rax
  __int64 v16; // rsi
  __int64 v17; // rax
  int v18; // ebx
  __int64 v19; // r13
  unsigned int v20; // ecx
  unsigned __int64 v21; // rdx
  LARGE_INTEGER v22; // r14
  unsigned int v23; // r15d
  __int16 v24; // cx
  int v25; // ecx
  __int16 v26; // r14
  unsigned __int64 v27; // rdx
  char v28; // cl
  __int64 v29; // rbx
  __int16 v30; // ax
  __int16 v31; // r14
  unsigned __int64 *v32; // rdi
  int v33; // r8d
  __int16 v34; // ax
  __int16 v35; // cx
  int v36; // eax
  NTSTATUS result; // eax
  PVOID v38; // rax
  void *v39; // rcx
  _QWORD *v40; // rcx
  _QWORD *v41; // rbx
  LARGE_INTEGER FileSize; // [rsp+20h] [rbp-48h] BYREF
  __int64 v43; // [rsp+28h] [rbp-40h]
  int v46; // [rsp+A8h] [rbp+40h]

  v10 = (a8 & 1) == 0;
  v46 = a8 & 1;
  if ( !v10 )
  {
    v12 = a4;
    goto LABEL_3;
  }
  result = FsRtlGetFileSize(FileObject, &FileSize);
  if ( result == -1073741638 )
    return -1073741792;
  if ( result >= 0 )
  {
    v12 = FileSize;
    if ( !FileSize.QuadPart && !a4.QuadPart )
      return -1073741538;
    if ( a4.QuadPart > (unsigned __int64)FileSize.QuadPart )
    {
      if ( (a5 & 0x44) == 0 )
        return -1073741760;
      FileSize = a4;
      v12 = a4;
      result = FsRtlSetFileSize(FileObject);
      if ( result < 0 )
        return result;
    }
LABEL_3:
    if ( v12.QuadPart <= 0x3FFFFFFFFFF000uLL )
    {
      v13 = (unsigned __int64)(v12.QuadPart + 4095) >> 12;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x6D536D4Du);
      if ( !PoolWithTag )
        return -1073741670;
      v15 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x128uLL, 0x61436D4Du);
      v16 = (__int64)v15;
      if ( !v15 )
      {
        v39 = PoolWithTag;
        goto LABEL_54;
      }
      memset(v15, 0, 0x128uLL);
      v17 = 0LL;
      v18 = a8 & 0x10000;
      if ( v18 && v13 > 0x200 )
        v17 = 8 * MiComputeIdealFirstSubsection(FileObject);
      v19 = (-(__int64)(v18 != 0) & 0x100000) + 0x100000;
      v20 = v19;
      if ( v17 )
        v20 = v17;
      v21 = 8 * v13;
      v22.QuadPart = 0LL;
      v43 = 8 * v13;
      FileSize.QuadPart = 0LL;
      while ( 1 )
      {
        v23 = v21;
        if ( v21 >= v20 )
          v23 = v20;
        if ( v22.QuadPart )
        {
          v38 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x90uLL, 0x63536D4Du);
          v22.QuadPart = (LONGLONG)v38;
          if ( !v38 )
          {
            ExFreePoolWithTag(PoolWithTag, 0);
            v40 = *(_QWORD **)(v16 + 144);
            if ( v40 )
            {
              do
              {
                v41 = (_QWORD *)v40[2];
                ExFreePoolWithTag(v40, 0);
                v40 = v41;
              }
              while ( v41 );
            }
            v39 = (void *)v16;
LABEL_54:
            ExFreePoolWithTag(v39, 0);
            return -1073741670;
          }
          memset(v38, 0, 0x90uLL);
          v21 = v43;
          *(LARGE_INTEGER *)(FileSize.QuadPart + 16) = v22;
        }
        else
        {
          v22.QuadPart = v16 + 128;
        }
        v21 -= v23;
        *(_DWORD *)(v22.QuadPart + 44) = v23 >> 3;
        v43 = v21;
        FileSize = v22;
        if ( !v21 )
        {
          *a3 = PoolWithTag;
          memset(PoolWithTag, 0, 0x30uLL);
          *(_QWORD *)v16 = PoolWithTag;
          *(_QWORD *)(v16 + 16) = v16 + 8;
          *(_QWORD *)(v16 + 8) = v16 + 8;
          *(_QWORD *)(v16 + 112) = 1LL;
          *(_QWORD *)(v16 + 24) = 1LL;
          v24 = (*(_WORD *)(v16 + 60) ^ *a2) & 0x3FF;
          *(_QWORD *)(v16 + 104) = 0LL;
          *(_WORD *)(v16 + 60) ^= v24;
          v25 = *(_DWORD *)(v16 + 56);
          if ( v46 )
            v25 |= 0x8000u;
          else
            *(_QWORD *)(v16 + 48) = 1LL;
          v26 = 6;
          *(_DWORD *)(v16 + 56) = v25 ^ (v25 ^ (a7 << 20)) & 0x3F00000 | 0x82;
          if ( v18 )
          {
            *(_DWORD *)(v16 + 56) = v25 ^ (v25 ^ (a7 << 20)) & 0x3F00000 | 0x40000082;
          }
          else if ( (a6 & 0x10000000) != 0 )
          {
            *((_WORD *)PoolWithTag + 6) |= 0x8000u;
            v26 = 14;
          }
          else if ( (a6 & 0x40000000) != 0 )
          {
            v26 = 30;
            *((_WORD *)PoolWithTag + 6) |= 0x4000u;
          }
          v27 = v16 + 128;
          v28 = *((_BYTE *)PoolWithTag + 14) & 0xC1;
          *PoolWithTag = v16;
          PoolWithTag[3] = v12.QuadPart;
          v29 = 0LL;
          v30 = (*((_WORD *)PoolWithTag + 6) ^ WORD2(v13)) & 0x3FF;
          *((_DWORD *)PoolWithTag + 2) = v13;
          *((_WORD *)PoolWithTag + 6) ^= v30;
          *((_BYTE *)PoolWithTag + 14) = (2 * v26) | v28;
          v31 = 2 * v26;
          do
          {
            v32 = (unsigned __int64 *)(v27 + 16);
            v33 = *(_DWORD *)(v27 + 44);
            v34 = *(_WORD *)(v27 + 32) & 1;
            *(_QWORD *)v27 = v16;
            *(_DWORD *)(v27 + 36) = v29;
            *(_WORD *)(v27 + 32) = v31 | v34 & 0xFFC1 | (WORD2(v29) << 6);
            if ( *(_QWORD *)(v27 + 16) )
            {
              v36 = v33;
            }
            else
            {
              v35 = *(_WORD *)(v27 + 34);
              *(_DWORD *)(v27 + 52) ^= (*(_DWORD *)(v27 + 52) ^ (v29 + v33 - v13)) & 0x3FFFFFFF;
              *(_WORD *)(v27 + 34) = (16 * LOWORD(v12.LowPart)) | v35 & 0xF;
              v36 = ((unsigned __int64)v12.QuadPart >> 12) - v29;
            }
            *(_DWORD *)(v27 + 40) = v36;
            v29 += *(unsigned int *)(v27 + 44);
            *(_QWORD *)(v27 + 88) = v27 + 80;
            *(_QWORD *)(v27 + 80) = v27 + 80;
            MiInsertSubsectionNode(v16, v27, 0);
            v27 = *v32;
          }
          while ( *v32 );
          return 0;
        }
        v20 = v19;
        if ( v23 >= (unsigned int)v19 )
          v20 = v23;
      }
    }
    return -1073741760;
  }
  return result;
}
