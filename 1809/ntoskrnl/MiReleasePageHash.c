/*
 * XREFs of MiReleasePageHash @ 0x1402CC3BC
 * Callers:
 *     MiDeletePagefile @ 0x140853110 (MiDeletePagefile.c)
 * Callees:
 *     MiReleasePtes @ 0x1400340E0 (MiReleasePtes.c)
 */

__int64 __fastcall MiReleasePageHash(unsigned __int64 a1, unsigned int a2)
{
  return MiReleasePtes(
           (__int64)&qword_14043AFA0,
           ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
           (unsigned int)((4 * (unsigned __int64)a2) >> 12) + (((4LL * a2) & 0xFFF) != 0));
}
