/*
 * XREFs of MiAllocateFileExtents @ 0x14088B6A0
 * Callers:
 *     MiAddViewsForSection @ 0x140071DF0 (MiAddViewsForSection.c)
 *     MiCreatePrototypePtes @ 0x1400BFB60 (MiCreatePrototypePtes.c)
 *     MiUpdateActiveSubsection @ 0x1402C9B68 (MiUpdateActiveSubsection.c)
 *     MiRefillPurgedExtents @ 0x1402CCC34 (MiRefillPurgedExtents.c)
 *     MiFaultGetFileExtents @ 0x1402D2368 (MiFaultGetFileExtents.c)
 *     MiInitializeImageExtents @ 0x14088C1E0 (MiInitializeImageExtents.c)
 * Callees:
 *     MiReferenceControlAreaFile @ 0x140009BF0 (MiReferenceControlAreaFile.c)
 *     MiDereferenceControlAreaFile @ 0x140009CFC (MiDereferenceControlAreaFile.c)
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     MiSetSubsectionBase @ 0x140089334 (MiSetSubsectionBase.c)
 *     MiGetControlAreaPartition @ 0x1400979D0 (MiGetControlAreaPartition.c)
 *     MiEndingOffset @ 0x1400B89BC (MiEndingOffset.c)
 *     MiStartingOffset @ 0x1400B8AD0 (MiStartingOffset.c)
 *     MiUpdateSystemProtoPtesTree @ 0x1400BFFF0 (MiUpdateSystemProtoPtesTree.c)
 *     MiMakeSubsectionPte @ 0x1400C01A8 (MiMakeSubsectionPte.c)
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1400F87B0 (MiPteHasShadow.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     FsRtlGetFileExtents @ 0x140281E90 (FsRtlGetFileExtents.c)
 *     MiChangingSubsectionProtos @ 0x1402CA7FC (MiChangingSubsectionProtos.c)
 *     MiDecrementProtoShareCounts @ 0x1402CB468 (MiDecrementProtoShareCounts.c)
 *     MiEliminateStaleExtents @ 0x1402CB648 (MiEliminateStaleExtents.c)
 *     MiSubsectionProtosCreated @ 0x1402CD058 (MiSubsectionProtosCreated.c)
 *     MiUnlinkSubsectionWaitBlock @ 0x1402CD18C (MiUnlinkSubsectionWaitBlock.c)
 *     MiReplaceSystemProtoPtesNode @ 0x1402E1794 (MiReplaceSystemProtoPtesNode.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     MiAddPhysicalMemory @ 0x14088774C (MiAddPhysicalMemory.c)
 *     MiNewPfnsSuitable @ 0x1408886B8 (MiNewPfnsSuitable.c)
 *     MiRemovePhysicalMemory @ 0x140888720 (MiRemovePhysicalMemory.c)
 *     MiConvertRunsToPages @ 0x14088BF98 (MiConvertRunsToPages.c)
 */

__int64 __fastcall MiAllocateFileExtents(ULONG_PTR BugCheckParameter2, unsigned int a2, ULONG_PTR a3, int a4, char a5)
{
  unsigned int v5; // edi
  unsigned __int64 v6; // rbx
  unsigned __int64 v9; // rax
  __int64 v10; // r13
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rax
  struct _FILE_OBJECT *v14; // r12
  unsigned int i; // esi
  _DWORD *PoolWithTag; // rax
  __int64 v17; // rdx
  _DWORD *v18; // rdi
  int v20; // eax
  unsigned __int64 v21; // r14
  void *v22; // rsi
  int v23; // ebx
  unsigned __int64 v24; // rbx
  int v25; // ecx
  unsigned __int64 v26; // rdx
  __int64 v27; // r8
  unsigned __int64 v28; // rbx
  __int64 v29; // rdi
  int v30; // eax
  __int64 v31; // rdx
  _QWORD *v32; // r8
  int v33; // r9d
  __int64 v34; // r10
  unsigned __int64 *v35; // rcx
  __int64 v36; // rcx
  ULONG_PTR *ControlAreaPartition; // rax
  int v38; // edx
  int v39; // [rsp+38h] [rbp-A1h]
  int v40; // [rsp+38h] [rbp-A1h]
  int v41; // [rsp+3Ch] [rbp-9Dh]
  int BugCheckParameter2a; // [rsp+40h] [rbp-99h]
  unsigned int BugCheckParameter2b; // [rsp+40h] [rbp-99h]
  ULONG_PTR BugCheckParameter2c; // [rsp+40h] [rbp-99h]
  unsigned __int64 v45; // [rsp+48h] [rbp-91h]
  unsigned __int64 v46; // [rsp+48h] [rbp-91h]
  __int64 v47; // [rsp+50h] [rbp-89h] BYREF
  unsigned __int64 v48; // [rsp+58h] [rbp-81h] BYREF
  unsigned __int64 v49; // [rsp+60h] [rbp-79h] BYREF
  __int64 v50; // [rsp+68h] [rbp-71h] BYREF
  unsigned __int64 v51; // [rsp+70h] [rbp-69h]
  _QWORD v52[2]; // [rsp+78h] [rbp-61h] BYREF
  int v53; // [rsp+88h] [rbp-51h]
  int v54; // [rsp+8Ch] [rbp-4Dh]
  unsigned __int64 v55[6]; // [rsp+90h] [rbp-49h] BYREF
  _BYTE v56[104]; // [rsp+C0h] [rbp-19h] BYREF
  int v57; // [rsp+138h] [rbp+5Fh]
  int v58; // [rsp+138h] [rbp+5Fh]

  v5 = a2;
  v6 = a3;
  memset(v56, 0, 0x28uLL);
  memset(v55, 0, sizeof(v55));
  v45 = 0LL;
  v9 = (unsigned int)(a4 << 12);
  v49 = v9;
  while ( 1 )
  {
    v10 = *(_QWORD *)BugCheckParameter2;
    v11 = v9;
    if ( (*(_DWORD *)(*(_QWORD *)BugCheckParameter2 + 56LL) & 0x20) != 0 )
    {
      v41 = 1;
      if ( *(_QWORD *)(BugCheckParameter2 + 8) )
        v12 = MiStartingOffset((__int64 *)BugCheckParameter2, v6, 0);
      else
        v12 = (unsigned __int64)v5 << 12;
      v13 = MiEndingOffset(BugCheckParameter2);
      v45 = v13;
      if ( v12 == v13 && !v12 )
        return 0LL;
      if ( v12 + v11 > v13 )
        v11 = ((unsigned int)(v13 - v12) + 511LL) & 0xFFFFFFFFFFFFFE00uLL;
    }
    else
    {
      v41 = 2;
      v12 = (v5
           + (*(unsigned int *)(BugCheckParameter2 + 36) | ((unsigned __int64)(*(_WORD *)(BugCheckParameter2 + 32) & 0xFFC0) << 26))) << 12;
    }
    v14 = (struct _FILE_OBJECT *)MiReferenceControlAreaFile(v10);
    v39 = 1;
    for ( i = ((__rdtsc() >> 4) & 7) + 8; ; i = BugCheckParameter2b )
    {
      while ( 1 )
      {
        if ( !i )
        {
LABEL_16:
          MiDereferenceControlAreaFile(v10, (unsigned __int64)v14);
          return 3221225626LL;
        }
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 16LL * (i - 1) + 24, 0x6546694Du);
        v18 = PoolWithTag;
        if ( PoolWithTag )
          break;
        if ( !v39 )
          goto LABEL_16;
        i >>= 1;
      }
      *PoolWithTag = i;
      PoolWithTag[1] = 0;
      v39 = 0;
      v57 = 0;
      if ( v41 == 1 )
      {
        if ( v12 + v11 > v45 )
          v11 = (unsigned int)(v45 - v12);
        v17 = *(_QWORD *)(BugCheckParameter2 + 8);
        if ( v17 && (*(_BYTE *)(*(_QWORD *)(v10 + 96) + 48LL) & 1) != 0 )
          v12 = (v17 - *(_QWORD *)(*(_QWORD *)v10 + 64LL)) >> 3 << 12;
      }
      v11 = (v11 + 4095) & 0xFFFFFFFFFFFFF000uLL;
      if ( v41 != 1 || (*(_DWORD *)(v10 + 56) & 2) == 0 )
      {
        v58 = MiChangingSubsectionProtos((_QWORD *)BugCheckParameter2, a5 | 8u, (__int64)v56);
        if ( v58 < 0 )
        {
          MiDereferenceControlAreaFile(v10, (unsigned __int64)v14);
          ExFreePoolWithTag(v18, 0);
          return (unsigned int)v58;
        }
        v57 = 1;
      }
      BugCheckParameter2a = FsRtlGetFileExtents(v14, v17, v12, v11, v18);
      if ( BugCheckParameter2a < 0 )
      {
        MiDereferenceControlAreaFile(v10, (unsigned __int64)v14);
        if ( v57 == 1 )
          MiUnlinkSubsectionWaitBlock((__int64 *)BugCheckParameter2, (__int64)v56, 0);
        ExFreePoolWithTag(v18, 0);
        return (unsigned int)BugCheckParameter2a;
      }
      BugCheckParameter2b = v18[1];
      if ( BugCheckParameter2b <= i )
        break;
      if ( v57 == 1 )
      {
        MiUnlinkSubsectionWaitBlock((__int64 *)BugCheckParameter2, (__int64)v56, 0);
        BugCheckParameter2b = v18[1];
      }
      v18[1] = i;
      ExFreePoolWithTag(v18, 0);
    }
    MiDereferenceControlAreaFile(v10, (unsigned __int64)v14);
    if ( !(unsigned int)MiNewPfnsSuitable((__int64)v18) )
    {
      v23 = -1073740761;
      goto LABEL_121;
    }
    if ( v18[1] )
    {
      v22 = (void *)MiConvertRunsToPages(v18, &v48, &v47);
      if ( v22 )
      {
        if ( (a5 & 0x40) == 0 || (unsigned int)v47 <= 1 )
        {
          v21 = v48;
          v20 = v41;
          goto LABEL_41;
        }
        v23 = -1073741800;
      }
      else
      {
        v23 = -1073741670;
      }
LABEL_121:
      ExFreePoolWithTag(v18, 0);
      if ( v57 == 1 )
        MiUnlinkSubsectionWaitBlock((__int64 *)BugCheckParameter2, (__int64)v56, 0);
      return (unsigned int)v23;
    }
    if ( (a5 & 0x40) != 0 || (v20 = v41, v41 == 1) )
    {
      v23 = -1073741823;
      goto LABEL_121;
    }
    v21 = 0LL;
    v22 = 0LL;
    LODWORD(v47) = -1;
    v48 = 0LL;
LABEL_41:
    if ( v20 == 1 && (*(_DWORD *)(v10 + 56) & 2) != 0 )
      goto LABEL_54;
    v23 = MiChangingSubsectionProtos((_QWORD *)BugCheckParameter2, a5 | 0x10u, (__int64)v56);
    if ( v23 >= 0 )
      break;
    ExFreePoolWithTag(v18, 0);
    if ( v22 )
      ExFreePoolWithTag(v22, 0);
    if ( v23 != -1073740748 )
      return (unsigned int)v23;
    v5 = a2;
    v9 = v49;
    v6 = a3;
  }
  if ( v22 )
  {
    v24 = a3;
    if ( (a5 & 1) == 0 )
      MiEliminateStaleExtents(a3, (__int64)v22, v21);
  }
  else
  {
LABEL_54:
    v24 = a3;
  }
  ExFreePoolWithTag(v18, 0);
  if ( v22 && (*(_BYTE *)(v10 + 56) & 0x20) == 0 && (a5 & 1) != 0 )
  {
    v55[5] = v21;
    v55[4] = v24;
    v55[3] = v55[3] & 0xFFFFFFFFFFFFFFF8uLL | 4;
    MiUpdateSystemProtoPtesTree(v55, 1);
  }
  v25 = 0;
  v26 = 0LL;
  v40 = 0;
  v27 = -1LL;
  v46 = 0LL;
  v28 = 0LL;
  BugCheckParameter2c = -1LL;
  v29 = 0LL;
  v30 = a5 & 0x40;
  while ( 2 )
  {
    if ( (unsigned int)v29 != v21 )
    {
      if ( v28 )
      {
        v26 = v46;
        if ( *((_QWORD *)v22 + v29 - 1) + 1LL != *((_QWORD *)v22 + v29) )
        {
          v30 = a5 & 0x40;
          goto LABEL_67;
        }
        ++v28;
LABEL_106:
        v29 = (unsigned int)(v29 + 1);
        v30 = a5 & 0x40;
        if ( (unsigned int)v29 > v21 )
          goto LABEL_83;
        continue;
      }
      v27 = *((_QWORD *)v22 + v29);
      BugCheckParameter2c = v27;
      v28 = 1LL;
LABEL_105:
      v26 = v46;
      goto LABEL_106;
    }
    break;
  }
  if ( !v28 )
    goto LABEL_83;
LABEL_67:
  if ( v27 != 0x8000000000000000uLL )
  {
    if ( (v27 & 0x4000000000000000LL) != 0 )
    {
      if ( v25 < 0 && (unsigned __int64)v22 + 8 * v29 <= v26 )
      {
        if ( (unsigned int)v29 == v21 )
          goto LABEL_82;
        v28 = 0LL;
        LODWORD(v29) = v29 - 1;
        goto LABEL_106;
      }
      goto LABEL_103;
    }
    if ( v25 >= 0 )
    {
      v54 = 0;
      v52[0] = BugCheckParameter2;
      v51 = (unsigned int)v29 - v28;
      v53 = 2 - (v30 != 0);
      v49 = v28 << 12;
      v36 = *(_QWORD *)BugCheckParameter2;
      v52[1] = a3 + 8 * v51;
      v50 = v27 << 12;
      ControlAreaPartition = (ULONG_PTR *)MiGetControlAreaPartition(v36);
      v40 = MiAddPhysicalMemory(ControlAreaPartition, &v50, &v49, 2, (__int64)v52);
      v25 = v40;
      if ( v40 < 0 )
      {
        v28 = 0LL;
        v27 = BugCheckParameter2c;
        LODWORD(v29) = -1;
        v26 = (unsigned __int64)v22 + 8 * v51;
        v46 = v26;
        goto LABEL_106;
      }
      goto LABEL_102;
    }
    if ( (unsigned __int64)v22 + 8 * v29 <= v26 )
    {
      if ( (a5 & 0x40) != 0 )
        MiDecrementProtoShareCounts(v27, v28);
      MiRemovePhysicalMemory(BugCheckParameter2c, v28, 0x12u);
      goto LABEL_101;
    }
LABEL_103:
    if ( (unsigned int)v29 == v21 )
      goto LABEL_82;
    v28 = 0LL;
    LODWORD(v29) = v29 - 1;
    goto LABEL_105;
  }
  if ( v25 < 0 )
    goto LABEL_103;
  MiMakeSubsectionPte(BugCheckParameter2);
  if ( MiPteInShadowRange(a3 + 8 * ((unsigned int)v29 - v28)) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v33 = 1;
      if ( !HIBYTE(word_1404658EC) && (v31 & 1) != 0 )
        v31 |= v34;
    }
    else
    {
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
        && (v31 & 1) != 0 )
      {
        v31 |= v34;
      }
      v21 = v48;
    }
  }
  *v32 = v31;
  if ( v33 )
    MiWritePteShadow((__int64)v32);
  if ( (a5 & 2) == 0 )
  {
LABEL_101:
    v25 = v40;
LABEL_102:
    v27 = BugCheckParameter2c;
    goto LABEL_103;
  }
  v25 = -1073740023;
  v40 = -1073740023;
LABEL_82:
  v30 = a5 & 0x40;
LABEL_83:
  if ( v25 < 0 )
  {
    if ( !v55[4] )
      goto LABEL_113;
    v38 = 0;
    v35 = v55;
    goto LABEL_112;
  }
  if ( (a5 & 1) != 0 )
  {
    if ( v30 )
      *(_DWORD *)(BugCheckParameter2 + 108) = 2;
    MiSetSubsectionBase((__int64 *)BugCheckParameter2, a3, v47);
    v35 = (unsigned __int64 *)(BugCheckParameter2 + 112);
    if ( v55[4] )
    {
      MiReplaceSystemProtoPtesNode(v55, (_QWORD *)(BugCheckParameter2 + 112));
      goto LABEL_113;
    }
    if ( (*(_DWORD *)(v10 + 56) & 0x20) != 0 )
      goto LABEL_113;
    v38 = 1;
LABEL_112:
    MiUpdateSystemProtoPtesTree(v35, v38);
  }
LABEL_113:
  if ( v41 != 1 || (*(_DWORD *)(v10 + 56) & 2) == 0 )
    MiSubsectionProtosCreated(BugCheckParameter2, (__int64)v56, a4, 0);
  if ( v22 )
    ExFreePoolWithTag(v22, 0);
  return (unsigned int)v40;
}
