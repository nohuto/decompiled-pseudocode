/*
 * XREFs of MiAllocateFileExtents @ 0x140853410
 * Callers:
 *     MiAddViewsForSection @ 0x140077160 (MiAddViewsForSection.c)
 *     MiCreatePrototypePtes @ 0x140095A70 (MiCreatePrototypePtes.c)
 *     MiUpdateActiveSubsection @ 0x1402B4908 (MiUpdateActiveSubsection.c)
 *     MiRefillPurgedExtents @ 0x1402B6E40 (MiRefillPurgedExtents.c)
 *     MiFaultGetFileExtents @ 0x1402BBFF4 (MiFaultGetFileExtents.c)
 *     MiCopyDirectMapHeader @ 0x140853E04 (MiCopyDirectMapHeader.c)
 *     MiInitializeImageExtents @ 0x140854124 (MiInitializeImageExtents.c)
 * Callees:
 *     MiDereferenceControlAreaFile @ 0x14001CA78 (MiDereferenceControlAreaFile.c)
 *     MiReferenceControlAreaFile @ 0x14001CBB0 (MiReferenceControlAreaFile.c)
 *     MiEndingOffset @ 0x140031090 (MiEndingOffset.c)
 *     MiStartingOffset @ 0x140031170 (MiStartingOffset.c)
 *     MiUpdateSystemProtoPtesTree @ 0x140095FA0 (MiUpdateSystemProtoPtesTree.c)
 *     MiSetSubsectionBase @ 0x1401390C0 (MiSetSubsectionBase.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     FsRtlGetFileExtents @ 0x14026E868 (FsRtlGetFileExtents.c)
 *     MiChangingSubsectionProtos @ 0x1402B5620 (MiChangingSubsectionProtos.c)
 *     MiDecrementProtoShareCounts @ 0x1402B5BF4 (MiDecrementProtoShareCounts.c)
 *     MiEliminateStaleExtents @ 0x1402B5DE0 (MiEliminateStaleExtents.c)
 *     MiSubsectionProtosCreated @ 0x1402B723C (MiSubsectionProtosCreated.c)
 *     MiUnlinkSubsectionWaitBlock @ 0x1402B7370 (MiUnlinkSubsectionWaitBlock.c)
 *     MiReplaceSystemProtoPtesNode @ 0x1402C79A0 (MiReplaceSystemProtoPtesNode.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     MiAddPhysicalMemory @ 0x14084DAF4 (MiAddPhysicalMemory.c)
 *     MiRemovePhysicalMemory @ 0x14084E7AC (MiRemovePhysicalMemory.c)
 *     MiConvertRunsToPages @ 0x140853CDC (MiConvertRunsToPages.c)
 */

__int64 __fastcall MiAllocateFileExtents(
        ULONG_PTR BugCheckParameter2,
        unsigned int a2,
        unsigned __int64 a3,
        int a4,
        char a5)
{
  unsigned int v5; // edi
  unsigned __int64 v6; // rbx
  unsigned __int64 v9; // rax
  _DWORD *v10; // r13
  unsigned __int64 v11; // r14
  __int64 v12; // rbx
  unsigned __int64 v13; // rax
  struct _FILE_OBJECT *v14; // r15
  unsigned int v15; // esi
  _DWORD *PoolWithTag; // rax
  _DWORD *v17; // rdi
  __int64 v19; // rdx
  __int64 v20; // rcx
  int FileExtents; // r13d
  unsigned int v22; // r13d
  __int64 v23; // r13
  unsigned int v24; // edx
  int v25; // ecx
  unsigned __int64 v26; // r8
  unsigned __int64 v27; // r9
  char v28; // r14
  unsigned int v29; // eax
  unsigned __int64 v30; // r15
  void *v31; // rbx
  int v32; // esi
  unsigned int v33; // ebx
  unsigned __int64 v34; // rsi
  int v35; // ecx
  unsigned __int64 v36; // rdx
  __int64 v37; // r8
  unsigned __int64 v38; // rdi
  __int64 v39; // rsi
  int v40; // eax
  __int64 v41; // r13
  unsigned __int64 *v42; // rcx
  int v43; // edx
  __int64 v44; // [rsp+30h] [rbp-E8h] BYREF
  int v45; // [rsp+38h] [rbp-E0h]
  unsigned __int64 v46; // [rsp+40h] [rbp-D8h] BYREF
  unsigned __int64 v47; // [rsp+48h] [rbp-D0h]
  unsigned int v48; // [rsp+50h] [rbp-C8h] BYREF
  _DWORD *v49; // [rsp+58h] [rbp-C0h]
  unsigned __int64 v50; // [rsp+60h] [rbp-B8h] BYREF
  unsigned __int64 v51; // [rsp+68h] [rbp-B0h]
  unsigned __int64 v52[6]; // [rsp+70h] [rbp-A8h] BYREF
  _QWORD v53[2]; // [rsp+A0h] [rbp-78h] BYREF
  int v54; // [rsp+B0h] [rbp-68h]
  _BYTE v55[96]; // [rsp+B8h] [rbp-60h] BYREF
  unsigned int v56; // [rsp+120h] [rbp+8h]

  v47 = 0LL;
  v5 = a2;
  v6 = a3;
  memset(v52, 0, sizeof(v52));
  v9 = (unsigned int)(a4 << 12);
  v50 = v9;
  while ( 1 )
  {
    v10 = *(_DWORD **)BugCheckParameter2;
    v11 = v9;
    v49 = v10;
    if ( (v10[14] & 0x20) != 0 )
    {
      v56 = 1;
      if ( *(_QWORD *)(BugCheckParameter2 + 8) )
        v12 = MiStartingOffset((__int64 *)BugCheckParameter2, v6, 0);
      else
        v12 = 0LL;
      v13 = MiEndingOffset(BugCheckParameter2);
      v47 = v13;
      if ( v12 == v13 && !v12 )
        return 0LL;
      if ( v12 + v11 > v13 )
        v11 = ((unsigned int)(v13 - v12) + 511LL) & 0xFFFFFFFFFFFFFE00uLL;
    }
    else
    {
      v56 = 2;
      v12 = (v5
           + (*(unsigned int *)(BugCheckParameter2 + 36) | ((unsigned __int64)(*(_WORD *)(BugCheckParameter2 + 32) & 0xFFC0) << 26))) << 12;
    }
    v14 = (struct _FILE_OBJECT *)MiReferenceControlAreaFile((__int64)v10);
    v45 = 1;
    v15 = ((__rdtsc() >> 4) & 7) + 8;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( !v15 )
        {
LABEL_16:
          MiDereferenceControlAreaFile((__int64)v10, (unsigned __int64)v14);
          return 3221225626LL;
        }
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 16LL * (v15 - 1) + 24, 0x6546694Du);
        v17 = PoolWithTag;
        if ( PoolWithTag )
          break;
        if ( !v45 )
          goto LABEL_16;
        v15 >>= 1;
      }
      v19 = v56;
      *PoolWithTag = v15;
      PoolWithTag[1] = 0;
      v45 = 0;
      LODWORD(v44) = 0;
      if ( v56 == 1 )
      {
        if ( v12 + v11 > v47 )
          v11 = (unsigned int)(v47 - v12);
        v20 = *(_QWORD *)(BugCheckParameter2 + 8);
        if ( v20 )
          v12 = (v20 - *(_QWORD *)(*(_QWORD *)v10 + 64LL)) >> 3;
        v12 <<= 12;
      }
      v11 = (v11 + 4095) & 0xFFFFFFFFFFFFF000uLL;
      if ( v56 != 1 || (v10[14] & 2) == 0 )
      {
        FileExtents = MiChangingSubsectionProtos((_QWORD *)BugCheckParameter2, a5 | 8u, (__int64)v55);
        if ( FileExtents < 0 )
        {
          MiDereferenceControlAreaFile((__int64)v49, (unsigned __int64)v14);
LABEL_111:
          ExFreePoolWithTag(v17, 0);
          return (unsigned int)FileExtents;
        }
        LODWORD(v44) = 1;
      }
      FileExtents = FsRtlGetFileExtents(v14, v19, v12, v11, v17);
      if ( FileExtents < 0 )
      {
        MiDereferenceControlAreaFile((__int64)v49, (unsigned __int64)v14);
        if ( (_DWORD)v44 == 1 )
          MiUnlinkSubsectionWaitBlock((__int64 *)BugCheckParameter2, (__int64)v55, 0);
        goto LABEL_111;
      }
      v22 = v17[1];
      if ( v22 <= v15 )
        break;
      if ( (_DWORD)v44 == 1 )
      {
        MiUnlinkSubsectionWaitBlock((__int64 *)BugCheckParameter2, (__int64)v55, 0);
        v22 = v17[1];
      }
      v17[1] = v15;
      ExFreePoolWithTag(v17, 0);
      v15 = v22;
      v10 = v49;
    }
    v23 = (__int64)v49;
    MiDereferenceControlAreaFile((__int64)v49, (unsigned __int64)v14);
    v24 = v17[1];
    v25 = 0;
    if ( v24 )
    {
      while ( 1 )
      {
        v26 = *(_QWORD *)&v17[4 * v25 + 2];
        v27 = v26 + *(_QWORD *)&v17[4 * v25 + 4];
        if ( v27 >= qword_14043BB20 && v26 < qword_14043BB20 + 2048 )
          break;
        if ( v27 >= 0xFFFFFFFFALL )
          break;
        if ( ++v25 >= v24 )
        {
          v31 = (void *)MiConvertRunsToPages(v17, &v46, &v48);
          if ( v31 )
          {
            v28 = a5;
            if ( (a5 & 0x40) == 0 || v48 <= 1 )
            {
              v29 = v56;
              v30 = v46;
              goto LABEL_45;
            }
            v33 = -1073741800;
          }
          else
          {
            v33 = -1073741670;
          }
LABEL_105:
          ExFreePoolWithTag(v17, 0);
          if ( (_DWORD)v44 == 1 )
            MiUnlinkSubsectionWaitBlock((__int64 *)BugCheckParameter2, (__int64)v55, 0);
          return v33;
        }
      }
      v33 = -1073740761;
      goto LABEL_105;
    }
    v28 = a5;
    if ( (a5 & 0x40) != 0 || (v29 = v56, v56 == 1) )
    {
      v33 = -1073741823;
      goto LABEL_105;
    }
    v30 = 0LL;
    v31 = 0LL;
    v48 = -1;
    v46 = 0LL;
LABEL_45:
    if ( v29 == 1 && (*(_DWORD *)(v23 + 56) & 2) != 0 )
      goto LABEL_60;
    v32 = MiChangingSubsectionProtos((_QWORD *)BugCheckParameter2, v28 | 0x10u, (__int64)v55);
    if ( v32 >= 0 )
      break;
    ExFreePoolWithTag(v17, 0);
    if ( v31 )
      ExFreePoolWithTag(v31, 0);
    if ( v32 != -1073740748 )
      return (unsigned int)v32;
    v9 = v50;
    v5 = a2;
    v6 = a3;
  }
  if ( v31 )
  {
    v34 = a3;
    if ( (v28 & 1) == 0 )
      MiEliminateStaleExtents(a3, (__int64)v31, v30);
  }
  else
  {
LABEL_60:
    v34 = a3;
  }
  ExFreePoolWithTag(v17, 0);
  if ( v31 && (*(_BYTE *)(v23 + 56) & 0x20) == 0 && (v28 & 1) != 0 )
  {
    v52[5] = v30;
    v52[4] = v34;
    v52[3] = v52[3] & 0xFFFFFFFFFFFFFFF8uLL | 4;
    MiUpdateSystemProtoPtesTree(v52, 1);
  }
  v35 = 0;
  v36 = 0LL;
  v37 = -1LL;
  LODWORD(v44) = 0;
  v38 = 0LL;
  v46 = 0LL;
  v39 = 0LL;
  v47 = -1LL;
  v45 = v28 & 0x40;
  while ( 2 )
  {
    if ( (unsigned int)v39 == v30 )
    {
      if ( !v38 )
        break;
LABEL_67:
      if ( v37 >= 0 )
      {
        if ( v35 < 0 )
        {
          if ( (unsigned __int64)v31 + 8 * v39 <= v36 )
          {
            if ( (v28 & 0x40) != 0 )
              MiDecrementProtoShareCounts(v37, v38);
            MiRemovePhysicalMemory(v47, v38, 18);
            v35 = v44;
            v37 = v47;
          }
        }
        else
        {
          v53[0] = BugCheckParameter2;
          v51 = (unsigned int)v39 - v38;
          v54 = 2 - ((v28 & 0x40) != 0);
          v50 = v38 << 12;
          v53[1] = a3 + 8 * v51;
          v44 = v37 << 12;
          v40 = MiAddPhysicalMemory(&MiSystemPartition, &v44, &v50, 2, (__int64)v53);
          v37 = v47;
          v35 = v40;
          LODWORD(v44) = v40;
          if ( v40 < 0 )
          {
            v38 = 0LL;
            LODWORD(v39) = -1;
            v36 = (unsigned __int64)v31 + 8 * v51;
            v46 = v36;
            goto LABEL_86;
          }
        }
      }
      else if ( v35 < 0 && (unsigned __int64)v31 + 8 * v39 <= v36 )
      {
        if ( (unsigned int)v39 == v30 )
          break;
        v38 = 0LL;
        LODWORD(v39) = v39 - 1;
        goto LABEL_86;
      }
      if ( (unsigned int)v39 == v30 )
        break;
      v38 = 0LL;
      LODWORD(v39) = v39 - 1;
LABEL_85:
      v36 = v46;
      goto LABEL_86;
    }
    if ( !v38 )
    {
      v37 = *((_QWORD *)v31 + v39);
      v47 = v37;
      v38 = 1LL;
      goto LABEL_85;
    }
    v36 = v46;
    if ( *((_QWORD *)v31 + v39 - 1) + 1LL != *((_QWORD *)v31 + v39) )
      goto LABEL_67;
    ++v38;
LABEL_86:
    v39 = (unsigned int)(v39 + 1);
    if ( (unsigned int)v39 <= v30 )
      continue;
    break;
  }
  v41 = (__int64)v49;
  if ( v35 < 0 )
  {
    if ( !v52[4] )
      goto LABEL_98;
    v43 = 0;
    v42 = v52;
    goto LABEL_97;
  }
  if ( (a5 & 1) != 0 )
  {
    if ( v45 )
      *(_DWORD *)(BugCheckParameter2 + 108) = 2;
    MiSetSubsectionBase((__int64 *)BugCheckParameter2, a3, v48);
    v42 = (unsigned __int64 *)(BugCheckParameter2 + 112);
    if ( v52[4] )
    {
      MiReplaceSystemProtoPtesNode(v52, (_QWORD *)(BugCheckParameter2 + 112));
      goto LABEL_98;
    }
    if ( (*(_DWORD *)(v41 + 56) & 0x20) != 0 )
      goto LABEL_98;
    v43 = 1;
LABEL_97:
    MiUpdateSystemProtoPtesTree(v42, v43);
  }
LABEL_98:
  if ( v56 != 1 || (*(_DWORD *)(v41 + 56) & 2) == 0 )
    MiSubsectionProtosCreated(BugCheckParameter2, (__int64)v55, a4, 0);
  if ( v31 )
    ExFreePoolWithTag(v31, 0);
  return (unsigned int)v44;
}
