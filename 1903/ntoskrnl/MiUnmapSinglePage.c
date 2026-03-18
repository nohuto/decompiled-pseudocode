/*
 * XREFs of MiUnmapSinglePage @ 0x140142474
 * Callers:
 *     MiFillCombinePage @ 0x1401423BC (MiFillCombinePage.c)
 *     MiFreeForkMaps @ 0x1402E439C (MiFreeForkMaps.c)
 * Callees:
 *     MiReleasePtes @ 0x14006AEF0 (MiReleasePtes.c)
 */

__int64 __fastcall MiUnmapSinglePage(unsigned __int64 a1)
{
  return MiReleasePtes((__int64)&qword_1404669C0, ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 1u);
}
