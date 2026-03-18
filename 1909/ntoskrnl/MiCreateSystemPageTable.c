/*
 * XREFs of MiCreateSystemPageTable @ 0x1400961C0
 * Callers:
 *     <none>
 * Callees:
 *     MiUnmapPageInHyperSpaceWorker @ 0x140026E50 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14002E160 (MiMapPageInHyperSpaceWorker.c)
 *     MiFlushTbList @ 0x140050080 (MiFlushTbList.c)
 *     MiInitializeSystemPageTable @ 0x14009641C (MiInitializeSystemPageTable.c)
 *     MiGetPageTablePages @ 0x140096860 (MiGetPageTablePages.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeSystemLeavesNonZero @ 0x140174FEC (MiMakeSystemLeavesNonZero.c)
 *     MiReplicatePteChange @ 0x14017E930 (MiReplicatePteChange.c)
 *     KeCopyPage @ 0x1401C8630 (KeCopyPage.c)
 *     MiMakeLargePageTable @ 0x1402CA4A8 (MiMakeLargePageTable.c)
 *     MiArePageContentsZero @ 0x1402D8DBC (MiArePageContentsZero.c)
 *     MxCopyPage @ 0x1409FC24C (MxCopyPage.c)
 */

__int64 __fastcall MiCreateSystemPageTable(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rsi
  __int64 v5; // rbp
  __int64 v7; // rax
  __int64 v8; // r9
  __int64 v9; // r12
  unsigned __int64 v10; // rax
  __int64 v11; // r11
  int PageTablePages; // eax
  __int64 v14; // rbx
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // edx
  __int64 v18; // rdx
  unsigned __int64 v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // [rsp+70h] [rbp+8h] BYREF
  __int64 v23; // [rsp+88h] [rbp+20h] BYREF

  v3 = *(_QWORD *)(a1 + 160);
  v5 = a3;
  v7 = MI_READ_PTE_LOCK_FREE(a2);
  v22 = v7;
  v8 = v7;
  v9 = v7 & 1;
  if ( (v7 & 1) != 0 )
  {
    if ( (v7 & 0x80) != 0 )
      return 0LL;
    if ( (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v22) >> 12) & 0xFFFFFFFFFLL) != MiState[v5 + 1149] )
    {
      v10 = MI_READ_PTE_LOCK_FREE(&v22);
      if ( ((v10 >> 12) & 0xFFFFFFFFFLL) != *(_QWORD *)(v11 + 8 * v5 + 9160) && ((v8 & 0x800) != 0 || (v8 & 0x42) != 0) )
        return 0LL;
    }
  }
  if ( (*(_DWORD *)(v3 + 64) & 0x80) != 0 && (unsigned int)MiMakeLargePageTable(a1, a2, (unsigned int)v5, v8) )
    return 0LL;
  PageTablePages = MiGetPageTablePages(v3, 1LL, &v23, v8);
  if ( PageTablePages < 0 )
  {
    if ( PageTablePages == -1073741801
      && (*(_BYTE *)a1 & 2) != 0
      && *(_BYTE *)(a1 + 6) <= 1u
      && KeGetCurrentThread()->Priority < 16 )
    {
      return 2LL;
    }
    else
    {
      *(_DWORD *)(v3 + 264) = PageTablePages;
      return 4LL;
    }
  }
  else
  {
    ++*(_QWORD *)(v3 + 48);
    v14 = (v23 + 0x58000000000LL) / 48;
    if ( (MiFlags & 0x80) != 0 && (++dword_14046600C & MmPageValidationFrequency) == 0 )
      MiArePageContentsZero((v23 + 0x58000000000LL) / 48);
    if ( v9 )
    {
      if ( KeGetCurrentPrcb()->HyperPte )
      {
        v19 = MiMapPageInHyperSpaceWorker(v14, 0LL, 0x80000000);
        KeCopyPage(v19, a2 << 25 >> 16);
        LOBYTE(v20) = 17;
        MiUnmapPageInHyperSpaceWorker(v19, v20, 0x80000000LL);
      }
      else
      {
        MxCopyPage(v14);
      }
    }
    MiInitializeSystemPageTable(v3, v5, a2, v23, v3 + 80);
    v17 = 3;
    if ( (_DWORD)v5 == 3 && *(_DWORD *)(v3 + 56) != 2 )
    {
      v21 = a2;
      do
      {
        v21 = v21 << 25 >> 16;
        --v17;
      }
      while ( v17 );
      MiReplicatePteChange(v21, v21);
    }
    v18 = (*(unsigned __int8 *)(a1 + 2) >> 2) & 7;
    if ( (int)v5 <= (int)v18 )
    {
      if ( (int)v5 > 1 )
        MiMakeSystemLeavesNonZero(a1, a2, (unsigned int)v5);
      return 0LL;
    }
    if ( v9 )
      MiFlushTbList((int *)(v3 + 80), v18, v15, v16);
    return 1LL;
  }
}
