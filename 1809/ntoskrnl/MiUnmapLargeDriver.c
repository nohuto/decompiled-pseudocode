/*
 * XREFs of MiUnmapLargeDriver @ 0x14085EBDC
 * Callers:
 *     MiUnloadSystemImage @ 0x140652C64 (MiUnloadSystemImage.c)
 *     MiUseLargeDriverPage @ 0x140684420 (MiUseLargeDriverPage.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPdeAddress @ 0x1400EDBE4 (MiGetPdeAddress.c)
 *     MiFreeContiguousPages @ 0x1401231C4 (MiFreeContiguousPages.c)
 *     MiUnmapLargePages @ 0x1402C5D94 (MiUnmapLargePages.c)
 */

unsigned __int64 __fastcall MiUnmapLargeDriver(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 PdeAddress; // rax
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // r10

  PdeAddress = MiGetPdeAddress(a1);
  v4 = MI_READ_PTE_LOCK_FREE(PdeAddress);
  v5 = ((unsigned int)dword_140439EF4 + 511LL + a2) & 0xFFFFFFFFFFFFFE00uLL;
  MiUnmapLargePages(v6, v5 << 12, 12);
  return MiFreeContiguousPages((__int64)&MiSystemPartition, (v4 >> 12) & 0xFFFFFFFFFLL, v5);
}
