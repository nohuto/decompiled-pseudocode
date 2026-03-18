/*
 * XREFs of MiUnmapLargeDriver @ 0x14089A82C
 * Callers:
 *     MiUnloadSystemImage @ 0x1406A6338 (MiUnloadSystemImage.c)
 *     MiMapSystemImageWithLargePage @ 0x14089A11C (MiMapSystemImageWithLargePage.c)
 * Callees:
 *     MiGetPdeAddress @ 0x14001F3F4 (MiGetPdeAddress.c)
 *     MiGetPteAddress @ 0x140057698 (MiGetPteAddress.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiFreeContiguousPages @ 0x140116EB4 (MiFreeContiguousPages.c)
 *     MiUnmapLargePages @ 0x140171360 (MiUnmapLargePages.c)
 *     MiReleasePrivilegedPtes @ 0x140747A28 (MiReleasePrivilegedPtes.c)
 */

unsigned __int64 __fastcall MiUnmapLargeDriver(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 PdeAddress; // rax
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rdi

  PdeAddress = MiGetPdeAddress(a1);
  v5 = MI_READ_PTE_LOCK_FREE(PdeAddress);
  v6 = ((unsigned int)dword_14046484C + 511LL + a2) & 0xFFFFFFFFFFFFFE00uLL;
  MiGetPteAddress(a1);
  MiReleasePrivilegedPtes();
  MiUnmapLargePages(a1, v6 << 12, 12);
  return MiFreeContiguousPages((v5 >> 12) & 0xFFFFFFFFFLL, v6);
}
