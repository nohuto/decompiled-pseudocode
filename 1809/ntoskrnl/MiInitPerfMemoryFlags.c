/*
 * XREFs of MiInitPerfMemoryFlags @ 0x1402B9210
 * Callers:
 *     MiUnloadSystemImage @ 0x140652C64 (MiUnloadSystemImage.c)
 *     MiUseLargeDriverPage @ 0x140684420 (MiUseLargeDriverPage.c)
 *     MiLogSectionCreate @ 0x14084F998 (MiLogSectionCreate.c)
 *     MiMapUserLargePages @ 0x14085E7B8 (MiMapUserLargePages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiInitPerfMemoryFlags(int a1, char a2)
{
  return (2 * (a2 & 0xF)) | (unsigned int)(a1 != 0);
}
