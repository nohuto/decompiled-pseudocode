/*
 * XREFs of MmLockPreChargedPagedPool @ 0x140729B60
 * Callers:
 *     PopAllocateHiberContext @ 0x140726928 (PopAllocateHiberContext.c)
 * Callees:
 *     MiGetPteAddress @ 0x140057698 (MiGetPteAddress.c)
 *     MiLockCode @ 0x1400F5930 (MiLockCode.c)
 */

__int64 __fastcall MmLockPreChargedPagedPool(unsigned __int64 a1)
{
  unsigned __int64 PteAddress; // rax
  __int64 v2; // rdx
  __int16 v3; // r8

  PteAddress = MiGetPteAddress(a1);
  return MiLockCode(0LL, PteAddress, PteAddress + 8 * ((((unsigned __int64)(v3 & 0xFFF) + v2 + 4095) >> 12) - 1), 1);
}
