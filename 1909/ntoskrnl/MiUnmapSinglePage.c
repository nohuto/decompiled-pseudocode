/*
 * XREFs of MiUnmapSinglePage @ 0x1401429B4
 * Callers:
 *     MiFillCombinePage @ 0x1401428FC (MiFillCombinePage.c)
 *     MiFreeForkMaps @ 0x1402E40FC (MiFreeForkMaps.c)
 * Callees:
 *     MiReleasePtes @ 0x14006B160 (MiReleasePtes.c)
 */

__int64 __fastcall MiUnmapSinglePage(unsigned __int64 a1)
{
  return MiReleasePtes((__int64)&qword_1404666C0, ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 1u);
}
