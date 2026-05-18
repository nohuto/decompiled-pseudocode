/*
 * XREFs of sub_180123084 @ 0x180123084
 * Callers:
 *     sub_18013452D @ 0x18013452D (sub_18013452D.c)
 * Callees:
 *     unknown_libname_116 @ 0x18001141C (unknown_libname_116.c)
 *     sub_180124524 @ 0x180124524 (sub_180124524.c)
 */

__int64 __fastcall sub_180123084(__int64 a1, __int64 a2)
{
  **(_QWORD **)(a2 + 8) = *(_QWORD *)a2;
  *(_QWORD *)(*(_QWORD *)a2 + 8LL) = *(_QWORD *)(a2 + 8);
  --*(_QWORD *)(a1 + 16);
  sub_180124524(a2 + 48);
  unknown_libname_116((__int64 *)(a2 + 16));
  return j_j__o_free(a2);
}
