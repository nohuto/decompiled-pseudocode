/*
 * XREFs of MiAllocatePartitionPhysicalPages @ 0x14089C1B0
 * Callers:
 *     MiReleasePartitionHugeIoSpace @ 0x140889A90 (MiReleasePartitionHugeIoSpace.c)
 *     MmManagePartitionMoveMemory @ 0x14089CFC8 (MmManagePartitionMoveMemory.c)
 * Callees:
 *     MiReleaseNonPagedResources @ 0x1400AD49C (MiReleaseNonPagedResources.c)
 *     MiAcquireNonPagedResources @ 0x1400E3D00 (MiAcquireNonPagedResources.c)
 *     MiAllocatePagesForMdl @ 0x1400EF404 (MiAllocatePagesForMdl.c)
 *     MiFreeMdlPageRun @ 0x1400F04E4 (MiFreeMdlPageRun.c)
 *     MiFreePagesFromMdl @ 0x1400F0784 (MiFreePagesFromMdl.c)
 *     MiZeroLargePage @ 0x14012910C (MiZeroLargePage.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     MiFindLargeNodePage @ 0x1402C08B8 (MiFindLargeNodePage.c)
 *     MiGetHugeRangeFromNode @ 0x1402C1DC8 (MiGetHugeRangeFromNode.c)
 *     MiHugeRangeIsZeroed @ 0x1402C256C (MiHugeRangeIsZeroed.c)
 *     MiInsertHugeRangeInList @ 0x1402C27AC (MiInsertHugeRangeInList.c)
 *     MiAddMdlToPartitionTree @ 0x1402E96E8 (MiAddMdlToPartitionTree.c)
 *     MiAddRangeToPartitionTree @ 0x1402E97D0 (MiAddRangeToPartitionTree.c)
 *     MiFreePartitionTree @ 0x1402EA728 (MiFreePartitionTree.c)
 *     MiInsertPartitionPages @ 0x1402EA938 (MiInsertPartitionPages.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     MiUpdatePartitionLargePfnBitMap @ 0x14089CD60 (MiUpdatePartitionLargePfnBitMap.c)
 */

__int64 __fastcall MiAllocatePartitionPhysicalPages(
        ULONG_PTR *a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned int a4,
        __int16 a5)
{
  unsigned __int64 v5; // r15
  int v8; // ebx
  ULONG_PTR *v10; // r12
  int v11; // ecx
  int v12; // edx
  unsigned __int64 v13; // r14
  int v14; // esi
  unsigned __int64 v16; // r13
  unsigned __int64 v17; // rax
  BOOL v18; // ecx
  int v19; // r15d
  int HugeRangeFromNode; // eax
  __int64 v21; // rsi
  unsigned __int64 LargeNodePage; // rax
  int v23; // esi
  int v24; // esi
  unsigned __int64 v25; // rbx
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // rcx
  unsigned int *PagesForMdl; // rax
  unsigned int *v29; // r15
  int v30; // edi
  __int64 v31; // rsi
  int updated; // ebx
  int v33; // eax
  int v34; // [rsp+40h] [rbp-31h]
  int v35; // [rsp+44h] [rbp-2Dh]
  unsigned __int64 v36; // [rsp+48h] [rbp-29h] BYREF
  unsigned __int64 v37; // [rsp+50h] [rbp-21h]
  unsigned __int64 v38; // [rsp+58h] [rbp-19h]
  _QWORD v39[12]; // [rsp+60h] [rbp-11h] BYREF
  unsigned __int64 v40; // [rsp+D0h] [rbp+5Fh] BYREF
  __int64 v41; // [rsp+D8h] [rbp+67h]
  unsigned __int64 v42; // [rsp+E0h] [rbp+6Fh]
  int v43; // [rsp+E8h] [rbp+77h]

  v42 = a3;
  v41 = a2;
  v5 = a3;
  v8 = 0;
  memset(v39, 0, 0x20uLL);
  v36 = 0LL;
  v10 = &MiSystemPartition;
  if ( a1 )
    v10 = a1;
  v35 = a5 & 4;
  v11 = ((*(_DWORD *)(a2 + 4) & 0x40) == 0) | 0x108000;
  if ( (a5 & 4) == 0 )
    v11 = ((*(_DWORD *)(a2 + 4) & 0x40) == 0) | 0x100000;
  v12 = v11 | 0x4000;
  if ( (a5 & 0x12) != 0 )
    v12 = v11;
  v13 = 0LL;
  v14 = a5 & 0x200;
  v34 = v12;
  v43 = v14;
  if ( (a5 & 0x200) == 0 )
  {
    if ( !(unsigned int)MiAcquireNonPagedResources(v10, v5) )
      return 3221225626LL;
    v12 = v34;
  }
  v16 = 0x40000LL;
  while ( 1 )
  {
    v17 = v5 - v13;
    v38 = v5 - v13;
    if ( v5 - v13 < 0x200 )
      break;
    v18 = 1;
    if ( (a5 & 0x60) == 0 )
      v18 = v17 < 0x40000;
    v19 = 0;
    LODWORD(v40) = v18;
    v8 &= 0xFFFC0000;
    if ( v14 )
    {
      HugeRangeFromNode = MiGetHugeRangeFromNode(v10, a4, (v12 & 1) == 0);
      v8 = HugeRangeFromNode;
      if ( (HugeRangeFromNode & 0x3FFFF) == 0 )
        goto LABEL_32;
      LODWORD(v40) = 0;
      v21 = (unsigned __int64)(HugeRangeFromNode & 0x3FFFF) << 18;
      LOBYTE(v19) = MiHugeRangeIsZeroed(HugeRangeFromNode);
    }
    else
    {
      LargeNodePage = MiFindLargeNodePage((__int64)v10, a4, &v40, 1, v12, 1);
      if ( !LargeNodePage )
        goto LABEL_33;
      v21 = (__int64)(LargeNodePage + 0x58000000000LL) / 48;
      if ( (*(_DWORD *)(LargeNodePage + 16) & 0x3E0LL) != 0 )
      {
        if ( (v34 & 1) != 0 )
          goto LABEL_23;
        MiZeroLargePage(LargeNodePage, v40, 1);
      }
      v19 = 1;
    }
LABEL_23:
    v37 = MiLargePageSizes[(unsigned int)v40];
    if ( !MiAddRangeToPartitionTree(&v36, v21, v37, v19) )
    {
      if ( v43 )
        MiInsertHugeRangeInList(v8, v19, 0LL);
      else
        MiFreeMdlPageRun(v21, v37);
LABEL_32:
      v14 = v43;
LABEL_33:
      v5 = v42;
      v17 = v38;
      break;
    }
    v14 = v43;
    if ( v10 == &MiSystemPartition && !v43 )
      _InterlockedExchangeAdd64(&qword_140466A38, v37);
    v5 = v42;
    v13 += v37;
    if ( v13 == v42 )
      goto LABEL_37;
    v12 = v34;
  }
  if ( v13 != v5 )
  {
    if ( v14 || (MiReleaseNonPagedResources((__int64)v10, v17), (a5 & 0xA2) != 0) )
    {
LABEL_56:
      updated = -1073741670;
LABEL_54:
      MiFreePartitionTree((__int16 *)v10, &v36, 1, 1);
      return (unsigned int)updated;
    }
  }
LABEL_37:
  v23 = v34 & 1 | 2;
  if ( (a5 & 1) != 0 )
    v23 = v34 & 1;
  v24 = v23 | 0x10;
  v25 = 0LL;
  v26 = -(__int64)(v35 != 0) & 0x100000000LL;
  v40 = v26;
  if ( (a5 & 0x10) != 0 )
  {
    v24 |= 0x40u;
    v25 = 0x200000LL;
  }
  else if ( (a5 & 0x40) != 0 )
  {
    v24 |= 0x40u;
    v25 = 0x200000LL;
    v16 = 512LL;
  }
  else if ( (a5 & 0x100) != 0 )
  {
    v24 |= 0x40u;
    v25 = 0x40000000LL;
  }
  else
  {
    v16 = 1048574LL;
  }
  while ( v13 != v5 )
  {
    v27 = v16;
    if ( v5 - v13 <= v16 )
      v27 = v5 - v13;
    PagesForMdl = MiAllocatePagesForMdl((__int64)v10, v26, 0xFFFFFFFFFFFFFFFFuLL, v25, v27 << 12, 1, a4, v24);
    v29 = PagesForMdl;
    if ( !PagesForMdl )
      goto LABEL_56;
    if ( !(unsigned int)MiAddMdlToPartitionTree((__int64)&v36, (__int64)PagesForMdl, v24) )
    {
      MiFreePagesFromMdl((ULONG_PTR)v29, 0);
      ExFreePoolWithTag(v29, 0);
      goto LABEL_56;
    }
    v13 += (unsigned __int64)v29[10] >> 12;
    ExFreePoolWithTag(v29, 0);
    v26 = v40;
    v5 = v42;
  }
  v30 = v43;
  v31 = v41;
  if ( !v43 )
  {
    updated = MiUpdatePartitionLargePfnBitMap(v41, &v36);
    if ( updated < 0 )
      goto LABEL_54;
  }
  v39[0] = &v36;
  v33 = 3;
  *(_OWORD *)&v39[1] = 0LL;
  if ( (a5 & 8) != 0 )
    v33 = 7;
  LODWORD(v39[3]) = v33;
  if ( v30 )
    LODWORD(v39[3]) = v33 | 0x10;
  return (unsigned int)MiInsertPartitionPages((__int64)v10, v31, (__int64)v39, v13);
}
