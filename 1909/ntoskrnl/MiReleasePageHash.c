/*
 * XREFs of MiReleasePageHash @ 0x1402E6724
 * Callers:
 *     MiDeletePagefile @ 0x14088C600 (MiDeletePagefile.c)
 * Callees:
 *     MiReleasePtes @ 0x14006B160 (MiReleasePtes.c)
 */

__int64 __fastcall MiReleasePageHash(unsigned __int64 a1, unsigned int a2)
{
  return MiReleasePtes(
           (__int64)&qword_1404666C0,
           ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
           (unsigned int)((4 * (unsigned __int64)a2) >> 12) + (((4LL * a2) & 0xFFF) != 0));
}
