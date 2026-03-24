/*
 * XREFs of MiInitPerfMemoryFlags @ 0x1402B9020
 * Callers:
 *     MiUnloadSystemImage @ 0x140651AA4 (MiUnloadSystemImage.c)
 *     MiUseLargeDriverPage @ 0x140683260 (MiUseLargeDriverPage.c)
 *     MiLogSectionCreate @ 0x14084E738 (MiLogSectionCreate.c)
 *     MiMapUserLargePages @ 0x14085D558 (MiMapUserLargePages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiInitPerfMemoryFlags(int a1, char a2)
{
  return (2 * (a2 & 0xF)) | (unsigned int)(a1 != 0);
}
