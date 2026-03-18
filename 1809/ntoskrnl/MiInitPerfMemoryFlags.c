/*
 * XREFs of MiInitPerfMemoryFlags @ 0x1402B8F20
 * Callers:
 *     MiUnloadSystemImage @ 0x140651AC4 (MiUnloadSystemImage.c)
 *     MiUseLargeDriverPage @ 0x140683280 (MiUseLargeDriverPage.c)
 *     MiLogSectionCreate @ 0x14084E758 (MiLogSectionCreate.c)
 *     MiMapUserLargePages @ 0x14085D578 (MiMapUserLargePages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiInitPerfMemoryFlags(int a1, char a2)
{
  return (2 * (a2 & 0xF)) | (unsigned int)(a1 != 0);
}
