/*
 * XREFs of MiPfnRangeIsZero @ 0x14018618C
 * Callers:
 *     MiFreedUnusedPfnPagesWorker @ 0x140185D04 (MiFreedUnusedPfnPagesWorker.c)
 * Callees:
 *     MiGetContainingPageTable @ 0x1400236B0 (MiGetContainingPageTable.c)
 *     MiGetLeafVa @ 0x14005A9F0 (MiGetLeafVa.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14005EF80 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiReleaseNonPagedResources @ 0x1400AD49C (MiReleaseNonPagedResources.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiReplacePfnWithGapMapping @ 0x140186434 (MiReplacePfnWithGapMapping.c)
 *     MiPreparePfnDatabasePageForFree @ 0x140186598 (MiPreparePfnDatabasePageForFree.c)
 *     MiFreeLargeZeroPages @ 0x1401866E4 (MiFreeLargeZeroPages.c)
 *     MiClearSystemAccessBits @ 0x140186864 (MiClearSystemAccessBits.c)
 *     MiDemoteValidLargePageOneLevel @ 0x140186948 (MiDemoteValidLargePageOneLevel.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     MiReplicatePfnDatabaseMappings @ 0x1402BE6B0 (MiReplicatePfnDatabaseMappings.c)
 */

void __fastcall MiPfnRangeIsZero(unsigned __int64 LeafVa, unsigned __int64 a2)
{
  unsigned __int64 v4; // r13
  unsigned __int64 v5; // rbp
  int v6; // eax
  int v7; // esi
  __int64 v8; // r12
  unsigned __int64 v9; // rbx
  __int64 v10; // r15
  int v11; // edi
  __int64 v12; // rax
  _QWORD *v13; // rdx
  unsigned __int64 v14; // rcx
  __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // r8
  _QWORD v19[11]; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v20; // [rsp+80h] [rbp+8h]
  __int64 v21; // [rsp+88h] [rbp+10h] BYREF

  memset(v19, 0, 0x20uLL);
  if ( a2 > MmPfnDatabase + (MxPfnAllocation << 12) )
    a2 = MmPfnDatabase + (MxPfnAllocation << 12);
  if ( LeafVa < a2 )
  {
    v4 = 0LL;
    v5 = 0LL;
    v20 = 0LL;
    while ( 1 )
    {
      v6 = MI_IS_PHYSICAL_ADDRESS(LeafVa);
      v7 = v6;
      v8 = 1LL;
      v9 = ((LeafVa >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      LODWORD(v10) = 3;
      if ( v6 > 0 )
      {
        v17 = (unsigned int)v6;
        do
        {
          LODWORD(v10) = v10 - 1;
          v9 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          --v17;
        }
        while ( v17 );
        if ( (_DWORD)v10 != 3 )
        {
          v10 = (unsigned int)(v10 - 1);
          v8 = MiLargePageSizes[v10];
        }
      }
      if ( (((v8 << 12) - 1) & LeafVa) != 0 || a2 - LeafVa < v8 << 12 )
      {
        if ( (unsigned int)MiDemoteValidLargePageOneLevel(LeafVa) )
          goto LABEL_17;
        v14 = v9 + 8;
      }
      else
      {
        if ( (*(_BYTE *)v9 & 0x20) != 0 )
        {
          v15 = 512 - ((v9 >> 3) & 0x1FF);
          v16 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          if ( v6 > 0 )
          {
            v18 = (unsigned int)v6;
            do
            {
              v16 = ((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
              --v18;
            }
            while ( v18 );
          }
          if ( ((v9 ^ v16) & 0xFFFFFFFFF000LL) == 0 )
            v15 = (__int64)(v16 - v9) >> 3;
          MiClearSystemAccessBits(v9, v15, (unsigned int)v6);
        }
        v11 = v7;
        while ( v7 < 4 )
        {
          v12 = MI_READ_PTE_LOCK_FREE(v9);
          v21 = v12;
          if ( v7 != v11 && (v12 & 0x20) != 0 )
            MiClearSystemAccessBits(v9, 1LL, 0LL);
          MiPreparePfnDatabasePageForFree(v9, (unsigned int)v7, (unsigned int)v10);
          v4 += v8;
          v13 = (_QWORD *)(48
                         * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v21) >> 12) & 0xFFFFFFFFFLL)
                         - 0x58000000000LL);
          *v13 = v19[(unsigned int)v10];
          v19[(unsigned int)v10] = v13;
          if ( v7 == 3 )
          {
            v20 = v9;
            if ( !v5 )
              v5 = v9;
          }
          MiReplacePfnWithGapMapping(v9, (unsigned int)v7);
          if ( (*(_QWORD *)(48 * MiGetContainingPageTable(v9 & 0xFFFFFFFFFFFFF000uLL) - 0x57FFFFFFFE8LL) & 0x3FFFFFFFFFFFFFFFLL) != 1 )
          {
            v9 += 8LL;
            break;
          }
          v8 = 1LL;
          LODWORD(v10) = 3;
          v9 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          ++v7;
        }
        v14 = v9;
      }
      LeafVa = MiGetLeafVa(v14);
LABEL_17:
      if ( LeafVa >= a2 )
      {
        if ( v5 )
          MiReplicatePfnDatabaseMappings(v5, v20);
        _InterlockedExchangeAdd64(&qword_140466A58, -(__int64)v4);
        MiFreeLargeZeroPages(&MiSystemPartition, v19, 0LL);
        MiReleaseNonPagedResources((__int64)&MiSystemPartition, v4);
        return;
      }
    }
  }
}
