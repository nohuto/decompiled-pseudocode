/*
 * XREFs of MiEvictPageTableLock @ 0x1400983A0
 * Callers:
 *     MiDecommitPages @ 0x140068950 (MiDecommitPages.c)
 *     MiDeleteVa @ 0x140069700 (MiDeleteVa.c)
 *     MiTerminateWsle @ 0x14007ACA0 (MiTerminateWsle.c)
 *     MiDeleteNonPagedPoolPte @ 0x140111590 (MiDeleteNonPagedPoolPte.c)
 *     MiDeleteSystemPageTable @ 0x14011F030 (MiDeleteSystemPageTable.c)
 *     MiDeleteAwePageTable @ 0x1402B0134 (MiDeleteAwePageTable.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLockPageTableInternal @ 0x14006CA20 (MiLockPageTableInternal.c)
 *     MiGetLeafVa @ 0x140076410 (MiGetLeafVa.c)
 *     MiUnlockNestedPageTableWritePte @ 0x1400984D4 (MiUnlockNestedPageTableWritePte.c)
 *     MiGetUsedPtesHandle @ 0x140098700 (MiGetUsedPtesHandle.c)
 *     MiUnlockPageTableInternal @ 0x140104A70 (MiUnlockPageTableInternal.c)
 *     RtlCompareMemoryUlong @ 0x1401C5C30 (RtlCompareMemoryUlong.c)
 */

__int64 __fastcall MiEvictPageTableLock(__int64 a1, unsigned __int64 a2, __int64 a3, char a4)
{
  __int64 v8; // rdx
  __int64 v9; // r8

  MiLockPageTableInternal(a1, a2, 0);
  if ( MiGetLeafVa(a2) > 0x7FFFFFFEFFFFLL )
  {
    if ( (unsigned __int16)*(_DWORD *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(a2) >> 12) & 0xFFFFFFFFFLL)
                                     - 0x57FFFFFFFE8LL) == 1
      && ((a4 & 1) == 0 || RtlCompareMemoryUlong((PVOID)((__int64)(a2 << 25) >> 16), 0x1000uLL, 0) == 4096) )
    {
      goto LABEL_3;
    }
  }
  else if ( (*(_DWORD *)(MiGetUsedPtesHandle((__int64)(a2 << 25) >> 16 << 25 >> 16, v8, v9) + 16) & 0x3FF0000) == 0 )
  {
LABEL_3:
    MiUnlockNestedPageTableWritePte(a1, a2, a3);
    return 1LL;
  }
  MiUnlockPageTableInternal(a1, a2);
  return 0LL;
}
