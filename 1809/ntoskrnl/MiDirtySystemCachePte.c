/*
 * XREFs of MiDirtySystemCachePte @ 0x140128FD4
 * Callers:
 *     MmCopyToCachedPage @ 0x140033050 (MmCopyToCachedPage.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockWorkingSetShared @ 0x140046970 (MiUnlockWorkingSetShared.c)
 *     MiWriteValidPteNewProtection @ 0x140087960 (MiWriteValidPteNewProtection.c)
 *     MiLockWorkingSetOptimal @ 0x140088334 (MiLockWorkingSetOptimal.c)
 *     MiUnlockPageTableInternal @ 0x140104B10 (MiUnlockPageTableInternal.c)
 */

void __fastcall MiDirtySystemCachePte(__int64 a1, unsigned __int64 a2, __int16 a3)
{
  unsigned __int64 v5; // rsi
  __int64 v6; // rax
  unsigned __int8 v7; // [rsp+40h] [rbp+18h] BYREF

  if ( (a3 & 0x42) == 0 && (a3 & 0x800) != 0 )
  {
    v5 = MiLockWorkingSetOptimal(a1, a2, &v7);
    v6 = MI_READ_PTE_LOCK_FREE(a2);
    if ( (v6 & 1) != 0 && (v6 & 0x42) == 0 && (v6 & 0x800) != 0 )
      MiWriteValidPteNewProtection(a2, v6 | 0x62);
    MiUnlockPageTableInternal(a1, v5);
    MiUnlockWorkingSetShared(a1, v7);
  }
}
