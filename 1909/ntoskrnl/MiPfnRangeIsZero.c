/*
 * XREFs of MiPfnRangeIsZero @ 0x14018673C
 * Callers:
 *     MiFreedUnusedPfnPagesWorker @ 0x1401862B4 (MiFreedUnusedPfnPagesWorker.c)
 * Callees:
 *     MiGetContainingPageTable @ 0x140023AA0 (MiGetContainingPageTable.c)
 *     MiGetLeafVa @ 0x14005AA90 (MiGetLeafVa.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14005F020 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiReleaseNonPagedResources @ 0x14008EDAC (MiReleaseNonPagedResources.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiReplacePfnWithGapMapping @ 0x1401869E4 (MiReplacePfnWithGapMapping.c)
 *     MiPreparePfnDatabasePageForFree @ 0x140186B48 (MiPreparePfnDatabasePageForFree.c)
 *     MiFreeLargeZeroPages @ 0x140186C94 (MiFreeLargeZeroPages.c)
 *     MiClearSystemAccessBits @ 0x140186E14 (MiClearSystemAccessBits.c)
 *     MiDemoteValidLargePageOneLevel @ 0x140186EF8 (MiDemoteValidLargePageOneLevel.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     MiReplicatePfnDatabaseMappings @ 0x1402BE410 (MiReplicatePfnDatabaseMappings.c)
 */

ULONG_PTR *__fastcall MiPfnRangeIsZero(unsigned __int64 LeafVa, unsigned __int64 a2)
{
  ULONG_PTR *result; // rax
  unsigned __int64 v5; // r13
  unsigned __int64 v6; // rbp
  int v7; // eax
  int v8; // esi
  __int64 v9; // r12
  unsigned __int64 v10; // rbx
  __int64 v11; // r15
  int v12; // edi
  __int64 v13; // rax
  _QWORD *v14; // rdx
  unsigned __int64 v15; // rcx
  __int64 v16; // rdx
  unsigned __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // r8
  _QWORD v20[11]; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v21; // [rsp+80h] [rbp+8h]
  __int64 v22; // [rsp+88h] [rbp+10h] BYREF

  memset(v20, 0, 0x20uLL);
  result = (ULONG_PTR *)(MmPfnDatabase + (MxPfnAllocation << 12));
  if ( a2 > (unsigned __int64)result )
    a2 = MmPfnDatabase + (MxPfnAllocation << 12);
  if ( LeafVa < a2 )
  {
    v5 = 0LL;
    v6 = 0LL;
    v21 = 0LL;
    while ( 1 )
    {
      v7 = MI_IS_PHYSICAL_ADDRESS(LeafVa);
      v8 = v7;
      v9 = 1LL;
      v10 = ((LeafVa >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      LODWORD(v11) = 3;
      if ( v7 > 0 )
      {
        v18 = (unsigned int)v7;
        do
        {
          LODWORD(v11) = v11 - 1;
          v10 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          --v18;
        }
        while ( v18 );
        if ( (_DWORD)v11 != 3 )
        {
          v11 = (unsigned int)(v11 - 1);
          v9 = MiLargePageSizes[v11];
        }
      }
      if ( (((v9 << 12) - 1) & LeafVa) != 0 || a2 - LeafVa < v9 << 12 )
      {
        if ( (unsigned int)MiDemoteValidLargePageOneLevel(LeafVa) )
          goto LABEL_17;
        v15 = v10 + 8;
      }
      else
      {
        if ( (*(_BYTE *)v10 & 0x20) != 0 )
        {
          v16 = 512 - ((v10 >> 3) & 0x1FF);
          v17 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          if ( v7 > 0 )
          {
            v19 = (unsigned int)v7;
            do
            {
              v17 = ((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
              --v19;
            }
            while ( v19 );
          }
          if ( ((v10 ^ v17) & 0xFFFFFFFFF000LL) == 0 )
            v16 = (__int64)(v17 - v10) >> 3;
          MiClearSystemAccessBits(v10, v16, (unsigned int)v7);
        }
        v12 = v8;
        while ( v8 < 4 )
        {
          v13 = MI_READ_PTE_LOCK_FREE(v10);
          v22 = v13;
          if ( v8 != v12 && (v13 & 0x20) != 0 )
            MiClearSystemAccessBits(v10, 1LL, 0LL);
          MiPreparePfnDatabasePageForFree(v10, (unsigned int)v8, (unsigned int)v11);
          v5 += v9;
          v14 = (_QWORD *)(48
                         * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v22) >> 12) & 0xFFFFFFFFFLL)
                         - 0x58000000000LL);
          *v14 = v20[(unsigned int)v11];
          v20[(unsigned int)v11] = v14;
          if ( v8 == 3 )
          {
            v21 = v10;
            if ( !v6 )
              v6 = v10;
          }
          MiReplacePfnWithGapMapping(v10, (unsigned int)v8);
          if ( (*(_QWORD *)(48 * MiGetContainingPageTable(v10 & 0xFFFFFFFFFFFFF000uLL) - 0x57FFFFFFFE8LL) & 0x3FFFFFFFFFFFFFFFLL) != 1 )
          {
            v10 += 8LL;
            break;
          }
          v9 = 1LL;
          LODWORD(v11) = 3;
          v10 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          ++v8;
        }
        v15 = v10;
      }
      LeafVa = MiGetLeafVa(v15);
LABEL_17:
      if ( LeafVa >= a2 )
      {
        if ( v6 )
          MiReplicatePfnDatabaseMappings(v6, v21);
        _InterlockedExchangeAdd64(&qword_140466758, -(__int64)v5);
        MiFreeLargeZeroPages(&MiSystemPartition, v20, 0LL);
        return MiReleaseNonPagedResources((__int64)&MiSystemPartition, v5);
      }
    }
  }
  return result;
}
