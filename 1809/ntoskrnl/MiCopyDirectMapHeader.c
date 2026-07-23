/*
 * XREFs of MiCopyDirectMapHeader @ 0x140853E04
 * Callers:
 *     MiCreateImageFileMap @ 0x14061DEB8 (MiCreateImageFileMap.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiDeleteSegmentPages @ 0x140094D78 (MiDeleteSegmentPages.c)
 *     MiUpdateSystemProtoPtesTree @ 0x140095FA0 (MiUpdateSystemProtoPtesTree.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     MiGetPteFromCopyList @ 0x14012D8D8 (MiGetPteFromCopyList.c)
 *     MiCreatePteCopyList @ 0x14012ECB0 (MiCreatePteCopyList.c)
 *     MiPartitionIdToPointer @ 0x140134DB8 (MiPartitionIdToPointer.c)
 *     KeCopyPage @ 0x1401C0B30 (KeCopyPage.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     MiReturnPteMappingPair @ 0x1402CE3F8 (MiReturnPteMappingPair.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     MiInitializePrototypePtes @ 0x140620030 (MiInitializePrototypePtes.c)
 *     MiAllocateFileExtents @ 0x140853410 (MiAllocateFileExtents.c)
 */

__int64 __fastcall MiCopyDirectMapHeader(__int64 a1, __int64 a2)
{
  char *PoolWithTag; // rax
  char *v6; // rdi
  int FileExtents; // ebx
  __int64 v8; // rax
  unsigned __int64 v9; // r8
  _WORD *v10; // rax
  __int16 v11; // r9
  __int64 v12; // r8
  unsigned __int64 PteFromCopyList; // rsi
  __int64 v14; // rdx
  int v15; // r8d
  __int64 v16; // r11
  __int64 v17; // rdx
  __int64 *v18; // r8
  int v19; // r9d
  __int64 v20; // r11
  unsigned int v21[6]; // [rsp+38h] [rbp-D0h] BYREF
  unsigned __int64 v22[7]; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v23[30]; // [rsp+88h] [rbp-80h] BYREF
  _BYTE v24[80]; // [rsp+178h] [rbp+70h] BYREF

  memset(v22, 0, 0x30uLL);
  memset(v24, 0, 0x48uLL);
  memset(v23, 0, sizeof(v23));
  MiCreatePteCopyList(2uLL, 2uLL, (__int64)v21);
  if ( !v21[1] )
    return 3221225626LL;
  PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)-2147483647, 8uLL, 0x74536D4Du);
  v6 = PoolWithTag;
  if ( PoolWithTag )
  {
    LODWORD(v23[7]) |= 0x400000A2u;
    v23[21] = 0x100000008LL;
    v23[26] = v23[26] & 0xFFFFFFFFFFFFFFF8uLL | 2;
    v23[8] = a1;
    LOWORD(v23[20]) = v23[20] & 0xFFC1 | 0xC;
    v23[16] = v23;
    v23[0] = v24;
    MiInitializePrototypePtes(PoolWithTag, 1LL, (unsigned __int16 *)&v23[16], 0);
    v22[5] = 1LL;
    v22[4] = (unsigned __int64)v6;
    v22[3] = v22[3] & 0xFFFFFFFFFFFFFFF8uLL | 4;
    MiUpdateSystemProtoPtesTree(v22, 1);
    FileExtents = MiAllocateFileExtents((ULONG_PTR)&v23[16], 0, (unsigned __int64)v6, 1, 1);
    if ( FileExtents < 0 )
    {
LABEL_29:
      MiUpdateSystemProtoPtesTree(v22, 0);
      ExFreePoolWithTag(v6, 0);
      goto LABEL_30;
    }
    v8 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v6);
    v9 = v8;
    if ( qword_14043B180 )
    {
      if ( (v8 & 0x10) != 0 )
        v9 = v8 & 0xFFFFFFFFFFFFFFEFuLL;
      else
        v9 = ~qword_14043B180 & v8;
    }
    v10 = (_WORD *)MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(48 * ((v9 >> 12) & 0xFFFFFFFFFLL)
                                                                           - 0x57FFFFFFFD8LL)) >> 8) & 0x3FF);
    WORD2(v23[7]) ^= v11 & (WORD2(v23[7]) ^ *v10);
    PteFromCopyList = (unsigned __int64)MiGetPteFromCopyList(v21, a2, v12);
    KeCopyPage((__int64)(PteFromCopyList << 25) >> 16, ((__int64)(PteFromCopyList << 25) >> 16) + 4096);
    if ( MiPteInShadowRange(PteFromCopyList) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v15 = 1;
        if ( HIBYTE(word_14043B26C) )
          goto LABEL_17;
      }
      else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0 )
      {
        goto LABEL_17;
      }
      if ( (v14 & 1) != 0 )
        v14 |= v16;
    }
LABEL_17:
    *(_QWORD *)PteFromCopyList = v14;
    if ( v15 )
      MiWritePteShadow(PteFromCopyList, v14);
    if ( !MiPteInShadowRange(PteFromCopyList + 8) )
      goto LABEL_26;
    if ( (unsigned int)MiPteHasShadow() )
    {
      v19 = 1;
      if ( !HIBYTE(word_14043B26C) )
      {
LABEL_24:
        if ( (v17 & 1) != 0 )
          v17 |= v20;
      }
    }
    else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
    {
      goto LABEL_24;
    }
LABEL_26:
    *v18 = v17;
    if ( v19 )
      MiWritePteShadow((__int64)v18, v17);
    MiDeleteSegmentPages((__int64)v23);
    goto LABEL_29;
  }
  FileExtents = -1073741670;
LABEL_30:
  MiReturnPteMappingPair((__int64)v21);
  return (unsigned int)FileExtents;
}
