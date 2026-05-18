/*
 * XREFs of sub_1800CAEF8 @ 0x1800CAEF8
 * Callers:
 *     sub_1801302F6 @ 0x1801302F6 (sub_1801302F6.c)
 * Callees:
 *     unknown_libname_116 @ 0x18001141C (unknown_libname_116.c)
 */

__int64 __fastcall sub_1800CAEF8(__int64 a1, __int64 a2)
{
  **(_QWORD **)(a2 + 8) = *(_QWORD *)a2;
  *(_QWORD *)(*(_QWORD *)a2 + 8LL) = *(_QWORD *)(a2 + 8);
  --*(_QWORD *)(a1 + 16);
  unknown_libname_116((__int64 *)(a2 + 16));
  return j_j__o_free(a2);
}
