/*
 * XREFs of sub_1801231E4 @ 0x1801231E4
 * Callers:
 *     sub_180120DB0 @ 0x180120DB0 (sub_180120DB0.c)
 *     sub_1801346C3 @ 0x1801346C3 (sub_1801346C3.c)
 *     sub_18013470B @ 0x18013470B (sub_18013470B.c)
 * Callees:
 *     unknown_libname_116 @ 0x18001146C (unknown_libname_116.c)
 *     sub_180124634 @ 0x180124634 (sub_180124634.c)
 */

__int64 __fastcall sub_1801231E4(__int64 a1, __int64 a2)
{
  sub_180124634(a2 + 64);
  unknown_libname_116((__int64 *)(a2 + 32));
  return j_j__o_free(a2);
}
