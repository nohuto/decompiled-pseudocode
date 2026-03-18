/*
 * XREFs of MiUnlockPageTableRange @ 0x1401671A0
 * Callers:
 *     MiLockPageTableRange @ 0x140159028 (MiLockPageTableRange.c)
 *     MmStoreFreeVirtualMemory @ 0x140727EB4 (MmStoreFreeVirtualMemory.c)
 * Callees:
 *     MiUnlockPageTableCharges @ 0x140020B28 (MiUnlockPageTableCharges.c)
 *     MiLockWorkingSetShared @ 0x14005D630 (MiLockWorkingSetShared.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLockPageTableInternal @ 0x1400CBB80 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1400CCAA0 (MiUnlockWorkingSetShared.c)
 *     MiUnlockPageTableInternal @ 0x1400FDF40 (MiUnlockPageTableInternal.c)
 */

__int64 __fastcall MiUnlockPageTableRange(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int16 *v3; // rdi
  unsigned __int64 v4; // rsi
  unsigned __int8 v5; // bp
  unsigned __int64 i; // rbx
  unsigned __int64 v7; // rax

  v3 = &KeGetCurrentThread()->ApcState.Process[1].IdealNode[6];
  v4 = ((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v5 = MiLockWorkingSetShared((__int64)v3);
  for ( i = ((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL; i <= v4; i += 8LL )
  {
    MiLockPageTableInternal((__int64)v3, i, 0LL);
    v7 = MI_READ_PTE_LOCK_FREE(i);
    MiUnlockPageTableCharges(48 * ((v7 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL, 2);
    MiUnlockPageTableInternal((__int64)v3, i);
  }
  return MiUnlockWorkingSetShared((__int64)v3, v5);
}
