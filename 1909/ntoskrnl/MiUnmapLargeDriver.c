/*
 * XREFs of MiUnmapLargeDriver @ 0x14089A04C
 * Callers:
 *     MiUnloadSystemImage @ 0x1406A5BC8 (MiUnloadSystemImage.c)
 *     MiMapSystemImageWithLargePage @ 0x14089993C (MiMapSystemImageWithLargePage.c)
 * Callees:
 *     MiGetPdeAddress @ 0x14001F7E4 (MiGetPdeAddress.c)
 *     MiGetPteAddress @ 0x140057738 (MiGetPteAddress.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiFreeContiguousPages @ 0x1400F4FD4 (MiFreeContiguousPages.c)
 *     MiUnmapLargePages @ 0x140171A50 (MiUnmapLargePages.c)
 *     MiReleasePrivilegedPtes @ 0x140749928 (MiReleasePrivilegedPtes.c)
 */

unsigned __int64 __fastcall MiUnmapLargeDriver(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 PdeAddress; // rax
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rdi

  PdeAddress = MiGetPdeAddress(a1);
  v5 = MI_READ_PTE_LOCK_FREE(PdeAddress);
  v6 = ((unsigned int)dword_14046454C + 511LL + a2) & 0xFFFFFFFFFFFFFE00uLL;
  MiGetPteAddress(a1);
  MiReleasePrivilegedPtes();
  MiUnmapLargePages(a1, v6 << 12, 12);
  return MiFreeContiguousPages((v5 >> 12) & 0xFFFFFFFFFLL, v6);
}
