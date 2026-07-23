/*
 * XREFs of MiAllocatePartitionPhysicalPages @ 0x1408610C4
 * Callers:
 *     MmManagePartitionMoveMemory @ 0x140861CE4 (MmManagePartitionMoveMemory.c)
 * Callees:
 *     MiAllocatePagesForMdl @ 0x140011048 (MiAllocatePagesForMdl.c)
 *     MiFreeMdlPageRun @ 0x140029DE0 (MiFreeMdlPageRun.c)
 *     MiFreePagesFromMdl @ 0x14002A000 (MiFreePagesFromMdl.c)
 *     MiReleaseNonPagedResources @ 0x1400E1968 (MiReleaseNonPagedResources.c)
 *     MiAcquireNonPagedResources @ 0x14013DB2C (MiAcquireNonPagedResources.c)
 *     MiFindLargeNodePage @ 0x1402A91F4 (MiFindLargeNodePage.c)
 *     MiAddMdlToPartitionTree @ 0x1402D0928 (MiAddMdlToPartitionTree.c)
 *     MiAddRangeToPartitionTree @ 0x1402D09F8 (MiAddRangeToPartitionTree.c)
 *     MiFreePartitionTree @ 0x1402D1B84 (MiFreePartitionTree.c)
 *     MiInsertPartitionPages @ 0x1402D1D94 (MiInsertPartitionPages.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     MiUpdatePartitionLargePfnBitMap @ 0x140861A88 (MiUpdatePartitionLargePfnBitMap.c)
 */

__int64 __fastcall MiAllocatePartitionPhysicalPages(
        ULONG_PTR *a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned int a4,
        char a5)
{
  ULONG_PTR *v5; // rsi
  unsigned __int64 v7; // rdi
  int v8; // r12d
  unsigned __int64 v10; // rbx
  _BOOL8 v11; // r13
  unsigned __int64 v12; // r14
  unsigned __int64 LargeNodePage; // r8
  ULONG_PTR v14; // r12
  BOOL v15; // r13d
  unsigned int v16; // r13d
  unsigned __int64 v17; // r14
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rcx
  unsigned int *PagesForMdl; // rax
  unsigned int *v21; // rbx
  __int64 v22; // r14
  int updated; // ebx
  int v24; // eax
  int v25; // [rsp+40h] [rbp-30h]
  unsigned __int64 v26; // [rsp+48h] [rbp-28h] BYREF
  unsigned __int64 *v27; // [rsp+50h] [rbp-20h] BYREF
  __int128 v28; // [rsp+58h] [rbp-18h]
  int v29; // [rsp+68h] [rbp-8h]
  unsigned __int64 v30; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v31; // [rsp+B8h] [rbp+48h]
  unsigned int v32; // [rsp+C8h] [rbp+58h]

  v32 = a4;
  v31 = a2;
  v26 = 0LL;
  v5 = &MiSystemPartition;
  if ( a1 )
    v5 = a1;
  v25 = a5 & 4;
  v7 = 0LL;
  v8 = v25 != 0 ? 1081345 : 1048577;
  if ( !(unsigned int)MiAcquireNonPagedResources(v5, a3) )
    return 3221225626LL;
  while ( 1 )
  {
    v10 = a3 - v7;
    if ( a3 - v7 < 0x200 )
      break;
    v11 = v10 < 0x40000;
    LODWORD(v30) = v10 < 0x40000;
    v12 = MiLargePageSizes[v11];
    LargeNodePage = MiFindLargeNodePage((__int64)v5, v32, (int *)&v30, 1, v8, 1);
    if ( !LargeNodePage )
      break;
    v14 = (__int64)(LargeNodePage + 0x58000000000LL) / 48;
    if ( (_DWORD)v30 != v11 )
      v12 = MiLargePageSizes[(unsigned int)v30];
    v15 = (*(_DWORD *)(LargeNodePage + 16) & 0x3E0LL) == 0;
    if ( !MiAddRangeToPartitionTree(&v26, v14, v12, v15) )
    {
      MiFreeMdlPageRun(v14, v12, v15);
      break;
    }
    if ( v5 == &MiSystemPartition )
      _InterlockedExchangeAdd64(&qword_14043C0D8, v12);
    v7 += v12;
    if ( v7 == a3 )
      goto LABEL_17;
    v8 = v25 != 0 ? 1081345 : 1048577;
  }
  if ( v7 != a3 )
  {
    MiReleaseNonPagedResources((__int64)v5, a3 - v7);
    if ( (a5 & 2) != 0 )
    {
LABEL_29:
      updated = -1073741670;
LABEL_30:
      MiFreePartitionTree((unsigned __int16 *)v5, &v26, 1, 1);
      return (unsigned int)updated;
    }
  }
LABEL_17:
  v16 = ((a5 & 0x10) != 0 ? 80 : 16) | (2 * ((a5 & 1) == 0) + 1);
  v17 = (-(__int64)((a5 & 0x10) != 0) & 0xFFFFFFFFFFF40002uLL) + 1048574;
  v18 = (a5 & 0x10) != 0 ? 0x200000 : 0;
  v30 = v18;
  while ( v7 != a3 )
  {
    v19 = v17;
    if ( a3 - v7 <= v17 )
      v19 = a3 - v7;
    PagesForMdl = MiAllocatePagesForMdl(
                    (unsigned __int64)v5,
                    -(__int64)(v25 != 0) & 0x100000000LL,
                    0xFFFFFFFFFFFFFFFFuLL,
                    v18,
                    v19 << 12,
                    1u,
                    v32,
                    v16);
    v21 = PagesForMdl;
    if ( !PagesForMdl )
      goto LABEL_29;
    if ( !(unsigned int)MiAddMdlToPartitionTree((__int64)&v26, (__int64)PagesForMdl) )
    {
      MiFreePagesFromMdl((ULONG_PTR)v21, 0);
      ExFreePoolWithTag(v21, 0);
      goto LABEL_29;
    }
    v7 += (unsigned __int64)v21[10] >> 12;
    ExFreePoolWithTag(v21, 0);
    v18 = v30;
  }
  v22 = v31;
  updated = MiUpdatePartitionLargePfnBitMap(v31, &v26);
  if ( updated < 0 )
    goto LABEL_30;
  v27 = &v26;
  v24 = 3;
  v28 = 0LL;
  if ( (a5 & 8) != 0 )
    v24 = 7;
  v29 = v24;
  return (unsigned int)MiInsertPartitionPages((__int64)v5, v22, (__int64)&v27, v7);
}
