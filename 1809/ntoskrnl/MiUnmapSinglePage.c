/*
 * XREFs of MiUnmapSinglePage @ 0x14012181C
 * Callers:
 *     MiFillCombinePage @ 0x140121764 (MiFillCombinePage.c)
 *     MiFreeForkMaps @ 0x1402C9F5C (MiFreeForkMaps.c)
 * Callees:
 *     MiReleasePtes @ 0x1400340E0 (MiReleasePtes.c)
 */

__int64 __fastcall MiUnmapSinglePage(unsigned __int64 a1)
{
  return MiReleasePtes((__int64)&qword_14043AFA0, ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 1u);
}
