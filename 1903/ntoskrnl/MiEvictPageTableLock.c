/*
 * XREFs of MiEvictPageTableLock @ 0x14005E164
 * Callers:
 *     MiTerminateWsle @ 0x14004B140 (MiTerminateWsle.c)
 *     MiDeleteVa @ 0x14004B480 (MiDeleteVa.c)
 *     MiDeleteNonPagedPoolPte @ 0x140115100 (MiDeleteNonPagedPoolPte.c)
 *     MiDeleteSystemPageTable @ 0x140122490 (MiDeleteSystemPageTable.c)
 *     MiDeleteAwePageTable @ 0x1402D5948 (MiDeleteAwePageTable.c)
 * Callees:
 *     MiGetUsedPtesHandle @ 0x14002DAB0 (MiGetUsedPtesHandle.c)
 *     MiGetLeafVa @ 0x14005A9F0 (MiGetLeafVa.c)
 *     MiUnlockNestedPageTableWritePte @ 0x14005E2E0 (MiUnlockNestedPageTableWritePte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLockPageTableInternal @ 0x1400CBB80 (MiLockPageTableInternal.c)
 *     MiUnlockPageTableInternal @ 0x1400FDF40 (MiUnlockPageTableInternal.c)
 *     MiIsPoolPteInUse @ 0x14012308C (MiIsPoolPteInUse.c)
 *     RtlCompareMemoryUlong @ 0x1401CC270 (RtlCompareMemoryUlong.c)
 */

__int64 __fastcall MiEvictPageTableLock(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  char v5; // r14
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rax

  v5 = a4;
  MiLockPageTableInternal(a1, a2, 0LL, a4);
  if ( MiGetLeafVa(a2) > 0x7FFFFFFEFFFFLL )
  {
    if ( (unsigned __int16)*(_DWORD *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(a2) >> 12) & 0xFFFFFFFFFLL)
                                     - 0x57FFFFFFFE8LL) == 1 )
    {
      v9 = a2 << 25;
      if ( (v5 & 1) == 0 || RtlCompareMemoryUlong((PVOID)(v9 >> 16), 0x1000uLL, 0) == 4096 )
      {
        if ( (v5 & 2) == 0 )
          goto LABEL_3;
        v10 = v9 >> 16;
        while ( 1 )
        {
          v11 = MI_READ_PTE_LOCK_FREE(v10);
          if ( (unsigned int)MiIsPoolPteInUse(v11) )
            break;
          v10 += 8LL;
          if ( (v10 & 0xFFF) == 0 )
            goto LABEL_3;
        }
      }
    }
  }
  else if ( (*(_DWORD *)(MiGetUsedPtesHandle((__int64)(a2 << 25) >> 16 << 25 >> 16) + 16) & 0x3FF0000) == 0 )
  {
LABEL_3:
    MiUnlockNestedPageTableWritePte(a1, a2, a3, 0LL);
    return 1LL;
  }
  MiUnlockPageTableInternal(a1);
  return 0LL;
}
