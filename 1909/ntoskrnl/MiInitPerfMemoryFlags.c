/*
 * XREFs of MiInitPerfMemoryFlags @ 0x1402CF11C
 * Callers:
 *     MiUnloadSystemImage @ 0x1406A5BC8 (MiUnloadSystemImage.c)
 *     MiLogSectionCreate @ 0x14088A030 (MiLogSectionCreate.c)
 *     MiMapSystemImageWithLargePage @ 0x14089993C (MiMapSystemImageWithLargePage.c)
 *     MiMapUserLargePages @ 0x140899CBC (MiMapUserLargePages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiInitPerfMemoryFlags(int a1, char a2)
{
  return (2 * (a2 & 0xF)) | (unsigned int)(a1 != 0);
}
