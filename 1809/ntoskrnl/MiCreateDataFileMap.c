/*
 * XREFs of MiCreateDataFileMap @ 0x14061CFCC
 * Callers:
 *     MiCreateNewSection @ 0x14061C7E0 (MiCreateNewSection.c)
 * Callees:
 *     MiInsertSubsectionNode @ 0x14009284C (MiInsertSubsectionNode.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     FsRtlGetFileSize @ 0x14061C4A0 (FsRtlGetFileSize.c)
 *     FsRtlSetFileSize @ 0x1406CBD00 (FsRtlSetFileSize.c)
 *     MiComputeIdealFirstSubsection @ 0x140853C24 (MiComputeIdealFirstSubsection.c)
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
  LARGE_INTEGER v11; // rbp
  unsigned __int64 v12; // r13
  _QWORD *PoolWithTag; // rdi
  PVOID v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rcx
  int v17; // ebx
  unsigned __int64 v18; // r12
  LARGE_INTEGER v19; // r14
  unsigned int v20; // r15d
  __int16 v21; // cx
  int v22; // ecx
  __int16 v23; // r14
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rbx
  int v26; // r9d
  __int16 v27; // r14
  unsigned __int64 v28; // rcx
  unsigned __int64 *v29; // rdi
  int v30; // r8d
  __int16 v31; // ax
  __int16 v32; // cx
  int v33; // eax
  NTSTATUS result; // eax
  PVOID v35; // rax
  void *v36; // rcx
  _QWORD *v37; // rcx
  _QWORD *v38; // rbx
  LARGE_INTEGER FileSize; // [rsp+20h] [rbp-48h] BYREF
  int v42; // [rsp+A8h] [rbp+40h]

  v42 = a8 & 1;
  if ( v42 )
  {
    v11 = a4;
    goto LABEL_3;
  }
  result = FsRtlGetFileSize(FileObject, &FileSize);
  if ( result == -1073741638 )
    return -1073741792;
  if ( result >= 0 )
  {
    v11 = FileSize;
    if ( !FileSize.QuadPart && !a4.QuadPart )
      return -1073741538;
    if ( a4.QuadPart > (unsigned __int64)FileSize.QuadPart )
    {
      if ( (a5 & 0x44) == 0 )
        return -1073741760;
      FileSize = a4;
      v11 = a4;
      result = FsRtlSetFileSize(FileObject);
      if ( result < 0 )
        return result;
    }
LABEL_3:
    if ( v11.QuadPart <= 0x3FFFFFFFFFF000uLL )
    {
      v12 = (unsigned __int64)(v11.QuadPart + 4095) >> 12;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x6D536D4Du);
      if ( !PoolWithTag )
        return -1073741670;
      v14 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x128uLL, 0x61436D4Du);
      v15 = (__int64)v14;
      if ( !v14 )
      {
        v36 = PoolWithTag;
        goto LABEL_53;
      }
      memset(v14, 0, 0x128uLL);
      v16 = 0LL;
      v17 = a8 & 0x10000;
      if ( v17 && v12 > 0x200 )
        v16 = 8 * MiComputeIdealFirstSubsection(FileObject);
      if ( !v16 )
        LODWORD(v16) = v17 != 0 ? 0x200000 : 0x100000;
      FileSize.QuadPart = 0LL;
      v18 = 8 * v12;
      v19.QuadPart = 0LL;
      while ( 1 )
      {
        v20 = v18;
        if ( v18 >= (unsigned int)v16 )
          v20 = v16;
        if ( v19.QuadPart )
        {
          v35 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x90uLL, 0x63536D4Du);
          v19.QuadPart = (LONGLONG)v35;
          if ( !v35 )
          {
            ExFreePoolWithTag(PoolWithTag, 0);
            v37 = *(_QWORD **)(v15 + 144);
            if ( v37 )
            {
              do
              {
                v38 = (_QWORD *)v37[2];
                ExFreePoolWithTag(v37, 0);
                v37 = v38;
              }
              while ( v38 );
            }
            v36 = (void *)v15;
LABEL_53:
            ExFreePoolWithTag(v36, 0);
            return -1073741670;
          }
          memset(v35, 0, 0x90uLL);
          *(LARGE_INTEGER *)(FileSize.QuadPart + 16) = v19;
        }
        else
        {
          v19.QuadPart = v15 + 128;
        }
        v18 -= v20;
        *(_DWORD *)(v19.QuadPart + 44) = v20 >> 3;
        FileSize = v19;
        LODWORD(v16) = v17 != 0 ? 0x200000 : 0x100000;
        if ( !v18 )
        {
          *a3 = PoolWithTag;
          memset(PoolWithTag, 0, 0x30uLL);
          PoolWithTag[5] = 0LL;
          *(_QWORD *)v15 = PoolWithTag;
          *(_QWORD *)(v15 + 16) = v15 + 8;
          *(_QWORD *)(v15 + 8) = v15 + 8;
          *(_QWORD *)(v15 + 112) = 1LL;
          *(_QWORD *)(v15 + 24) = 1LL;
          v21 = (*(_WORD *)(v15 + 60) ^ *a2) & 0x3FF;
          *(_QWORD *)(v15 + 104) = 0LL;
          *(_WORD *)(v15 + 60) ^= v21;
          v22 = *(_DWORD *)(v15 + 56);
          if ( v42 )
          {
            v22 |= 0x8000u;
            *(_DWORD *)(v15 + 56) = v22;
          }
          else
          {
            *(_QWORD *)(v15 + 48) = 1LL;
          }
          v23 = 6;
          *(_DWORD *)(v15 + 56) = v22 ^ (v22 ^ (a7 << 20)) & 0x3F00000 | 0x82;
          if ( !v17 )
          {
            if ( (a6 & 0x10000000) != 0 )
            {
              *((_WORD *)PoolWithTag + 6) |= 0x8000u;
              v23 = 14;
            }
            else if ( (a6 & 0x40000000) != 0 )
            {
              v23 = 30;
              *((_WORD *)PoolWithTag + 6) |= 0x4000u;
            }
          }
          *PoolWithTag = v15;
          PoolWithTag[3] = v11.QuadPart;
          *((_DWORD *)PoolWithTag + 2) = v12;
          v24 = v15 + 128;
          v25 = 0LL;
          v26 = 0;
          *((_WORD *)PoolWithTag + 6) ^= (*((_WORD *)PoolWithTag + 6) ^ WORD2(v12)) & 0x3FF;
          *((_BYTE *)PoolWithTag + 14) = *((_BYTE *)PoolWithTag + 14) & 0xC1 | (2 * v23);
          v27 = 2 * v23;
          LOWORD(v28) = 0;
          do
          {
            v29 = (unsigned __int64 *)(v24 + 16);
            v30 = *(_DWORD *)(v24 + 44);
            v31 = ((_WORD)v28 << 6) | *(_WORD *)(v24 + 32) & 1;
            *(_QWORD *)v24 = v15;
            *(_DWORD *)(v24 + 36) = v25;
            *(_WORD *)(v24 + 32) = v27 | v31 & 0xFFC1;
            if ( *(_QWORD *)(v24 + 16) )
            {
              v33 = v30;
            }
            else
            {
              v32 = *(_WORD *)(v24 + 34);
              *(_DWORD *)(v24 + 52) ^= (*(_DWORD *)(v24 + 52) ^ (v26 + v30 - v12)) & 0x3FFFFFFF;
              *(_WORD *)(v24 + 34) = (16 * LOWORD(v11.LowPart)) | v32 & 0xF;
              v33 = ((unsigned __int64)v11.QuadPart >> 12) - v26;
            }
            *(_DWORD *)(v24 + 40) = v33;
            v25 += *(unsigned int *)(v24 + 44);
            *(_QWORD *)(v24 + 88) = v24 + 80;
            *(_QWORD *)(v24 + 80) = v24 + 80;
            MiInsertSubsectionNode(v15, v24, 0);
            v24 = *v29;
            v28 = HIDWORD(v25);
            v26 = v25;
          }
          while ( *v29 );
          return 0;
        }
        if ( v20 >= (unsigned int)v16 )
          LODWORD(v16) = v20;
      }
    }
    return -1073741760;
  }
  return result;
}
