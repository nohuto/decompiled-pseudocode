/*
 * XREFs of sub_180123194 @ 0x180123194
 * Callers:
 *     sub_18013463D @ 0x18013463D (sub_18013463D.c)
 * Callees:
 *     unknown_libname_116 @ 0x18001146C (unknown_libname_116.c)
 *     sub_180124634 @ 0x180124634 (sub_180124634.c)
 */

__int64 __fastcall sub_180123194(__int64 a1, __int64 a2)
{
  **(_QWORD **)(a2 + 8) = *(_QWORD *)a2;
  *(_QWORD *)(*(_QWORD *)a2 + 8LL) = *(_QWORD *)(a2 + 8);
  --*(_QWORD *)(a1 + 16);
  sub_180124634(a2 + 48);
  unknown_libname_116((__int64 *)(a2 + 16));
  return j_j__o_free(a2);
}
