/*
 * XREFs of MiSynchronizeSystemVa @ 0x1400E9FE8
 * Callers:
 *     MiLockStealSystemVm @ 0x1400E99F8 (MiLockStealSystemVm.c)
 *     MiTranslatePageForCopy @ 0x1400E9CB0 (MiTranslatePageForCopy.c)
 *     MiTrimSharedPageFromViews @ 0x1400EB48C (MiTrimSharedPageFromViews.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x140028884 (MiGetAnyMultiplexedVm.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiFastLockLeafPageTable @ 0x140045BC0 (MiFastLockLeafPageTable.c)
 *     MiGetSharedVm @ 0x140064D20 (MiGetSharedVm.c)
 *     MiLockLowestValidPageTable @ 0x14006C590 (MiLockLowestValidPageTable.c)
 *     MiLockWorkingSetShared @ 0x140076040 (MiLockWorkingSetShared.c)
 *     MiFillPteHierarchy @ 0x140099020 (MiFillPteHierarchy.c)
 *     MiGetSystemCacheReverseMap @ 0x1400ADE90 (MiGetSystemCacheReverseMap.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     MiUnlockSystemVa @ 0x1400ECE44 (MiUnlockSystemVa.c)
 *     MiPageTableStillExists @ 0x140134B94 (MiPageTableStillExists.c)
 */

__int64 __fastcall MiSynchronizeSystemVa(__int64 a1, unsigned __int64 a2, int a3, int a4, __int64 a5)
{
  int v5; // edi
  __int64 v9; // rsi
  char v10; // al
  char v11; // al
  unsigned __int64 v12; // r12
  unsigned __int64 v13; // rbp
  __int64 v14; // r10
  unsigned __int64 v15; // rbx
  __int64 v17; // r9
  __int64 v18; // r10
  __int64 SystemCacheReverseMap; // rax
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rcx
  char *AnyMultiplexedVm; // rax
  unsigned __int64 valid; // rax
  LONG *SharedVm; // rbx
  unsigned __int64 v25; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v26[5]; // [rsp+28h] [rbp-50h] BYREF
  int v27; // [rsp+90h] [rbp+18h] BYREF

  v5 = 0;
  if ( !a3 )
    return 0LL;
  v9 = a5;
  *(_DWORD *)(a5 + 16) = 0;
  v10 = *(_BYTE *)(v9 + 37);
  *(_QWORD *)(v9 + 24) = a1;
  if ( a4 )
  {
    *(_BYTE *)(v9 + 37) = v10 | 1;
    SharedVm = MiGetSharedVm(a1);
    v11 = ExAcquireSpinLockExclusive(SharedVm);
    SharedVm[1] = 0;
  }
  else
  {
    *(_BYTE *)(v9 + 37) = v10 & 0xFE;
    v11 = MiLockWorkingSetShared(a1);
  }
  *(_BYTE *)(v9 + 36) = v11;
  if ( a4 )
  {
    MiFillPteHierarchy(a2, v26);
    if ( (unsigned int)MiPageTableStillExists(v26, &v27) )
    {
      if ( v27 )
      {
        if ( (*(_DWORD *)(v9 + 4) & 4) == 0 )
          goto LABEL_23;
        *(_DWORD *)(v9 + 16) = v27;
      }
LABEL_10:
      if ( (*(_BYTE *)(a1 + 184) & 7) != 2 )
        return 1LL;
      if ( *(_DWORD *)(v9 + 48) == 3 )
      {
        AnyMultiplexedVm = MiGetAnyMultiplexedVm(0);
LABEL_22:
        *(_QWORD *)(v9 + 24) = AnyMultiplexedVm;
        return 1LL;
      }
      SystemCacheReverseMap = MiGetSystemCacheReverseMap(a2);
      if ( SystemCacheReverseMap && *(_QWORD *)(SystemCacheReverseMap + 16) )
      {
        v20 = *(_QWORD *)(MiGetSystemCacheReverseMap(a2) + 24);
        v21 = v20 & 0xFFFFFFFFFFFFFFFEuLL;
        if ( (v20 & 1) == 0 )
          v21 = v20;
        AnyMultiplexedVm = (char *)(*(_QWORD *)(qword_14043B808 + 8LL * (*(_WORD *)(*(_QWORD *)v21 + 60LL) & 0x3FF))
                                  + 7424LL);
        goto LABEL_22;
      }
    }
  }
  else
  {
    v25 = 0LL;
    v12 = 0LL;
    v13 = 0LL;
    if ( (unsigned int)MiFastLockLeafPageTable(a1, a2, 0) )
    {
      MiFillPteHierarchy(a2, v26);
      v12 = v26[v14];
      v13 = v26[(int)v14 - 1];
      v25 = v13;
    }
    v15 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    if ( !v12 )
    {
      valid = MiLockLowestValidPageTable(
                a1,
                ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
                &v25,
                0xFFFFF68000000000uLL);
      v13 = v25;
      v12 = valid;
    }
    *(_QWORD *)(v9 + 40) = v12;
    if ( v13 == v15 )
      goto LABEL_10;
    if ( (*(_DWORD *)(v9 + 4) & 4) != 0 && (MI_READ_PTE_LOCK_FREE(v13) & 0x81) == 0x81 )
    {
      do
      {
        v15 = v17 + (v18 & (v15 >> 9));
        ++v5;
      }
      while ( v15 != v13 );
      *(_DWORD *)(v9 + 16) = v5;
      return 1LL;
    }
  }
LABEL_23:
  MiUnlockSystemVa(v9);
  return 0LL;
}
