/*
 * XREFs of MiLockPageTableRange @ 0x1401596C8
 * Callers:
 *     MmStoreAllocateVirtualMemory @ 0x14071AC58 (MmStoreAllocateVirtualMemory.c)
 * Callees:
 *     MiMakeSystemAddressValid @ 0x140021A20 (MiMakeSystemAddressValid.c)
 *     MiLockWorkingSetShared @ 0x14005D6D0 (MiLockWorkingSetShared.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockWorkingSetShared @ 0x1400AC920 (MiUnlockWorkingSetShared.c)
 *     MiLockPageTablePage @ 0x1400CD620 (MiLockPageTablePage.c)
 *     MiUnlockPageTableInternal @ 0x1401000D0 (MiUnlockPageTableInternal.c)
 *     MiUnlockPageTableRange @ 0x140166BF0 (MiUnlockPageTableRange.c)
 */

__int64 __fastcall MiLockPageTableRange(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int16 *v3; // r14
  unsigned __int64 v4; // r12
  ULONG_PTR v5; // rsi
  unsigned __int64 v6; // rbp
  unsigned __int8 v7; // r15
  unsigned __int64 v8; // rax
  int v9; // ebx

  v3 = &KeGetCurrentThread()->ApcState.Process[1].IdealNode[6];
  v4 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v5 = v4;
  v6 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v7 = MiLockWorkingSetShared((__int64)v3);
  if ( v4 > v6 )
  {
LABEL_4:
    MiUnlockWorkingSetShared((__int64)v3, v7);
    return 0LL;
  }
  else
  {
    while ( 1 )
    {
      MiMakeSystemAddressValid(v5, 0LL, 0, v7, 0);
      v8 = MI_READ_PTE_LOCK_FREE(((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      v9 = MiLockPageTablePage(48 * ((v8 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL, 2);
      MiUnlockPageTableInternal((__int64)v3, ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      if ( !v9 )
        break;
      v5 = (v5 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      if ( v5 > v6 )
        goto LABEL_4;
    }
    MiUnlockWorkingSetShared((__int64)v3, v7);
    if ( v5 != v4 )
      MiUnlockPageTableRange(a1, (__int64)((v5 - 8) << 25) >> 16);
    return 3221225626LL;
  }
}
