/*
 * XREFs of MiUnmapSinglePage @ 0x14012190C
 * Callers:
 *     MiFillCombinePage @ 0x140121854 (MiFillCombinePage.c)
 *     MiFreeForkMaps @ 0x1402CA24C (MiFreeForkMaps.c)
 * Callees:
 *     MiReleasePtes @ 0x1400340E0 (MiReleasePtes.c)
 */

__int64 __fastcall MiUnmapSinglePage(unsigned __int64 a1)
{
  return MiReleasePtes((__int64)&qword_14043C060, ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 1u);
}
