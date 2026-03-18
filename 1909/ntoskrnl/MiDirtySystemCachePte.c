/*
 * XREFs of MiDirtySystemCachePte @ 0x14012AB8C
 * Callers:
 *     MmCopyToCachedPage @ 0x14006EAA0 (MmCopyToCachedPage.c)
 * Callees:
 *     MiLockWorkingSetOptimal @ 0x14005D668 (MiLockWorkingSetOptimal.c)
 *     MiWriteValidPteNewProtection @ 0x14005E890 (MiWriteValidPteNewProtection.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockWorkingSetShared @ 0x1400AC920 (MiUnlockWorkingSetShared.c)
 *     MiUnlockPageTableInternal @ 0x1401000D0 (MiUnlockPageTableInternal.c)
 */

void __fastcall MiDirtySystemCachePte(__int64 a1, unsigned __int64 a2, __int16 a3)
{
  __int16 v5; // ax
  unsigned __int64 v6; // r11
  unsigned __int8 v7; // [rsp+40h] [rbp+18h] BYREF

  if ( (a3 & 0x42) == 0 && (a3 & 0x800) != 0 )
  {
    MiLockWorkingSetOptimal(a1, a2, &v7);
    v5 = MI_READ_PTE_LOCK_FREE(a2);
    if ( (v5 & 1) != 0 && (v5 & 0x42) == 0 && (v5 & 0x800) != 0 )
      MiWriteValidPteNewProtection(a2);
    MiUnlockPageTableInternal(a1, v6);
    MiUnlockWorkingSetShared(a1, v7);
  }
}
