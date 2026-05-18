/*
 * XREFs of sub_180032564 @ 0x180032564
 * Callers:
 *     sub_180032B64 @ 0x180032B64 (sub_180032B64.c)
 *     sub_18003ED60 @ 0x18003ED60 (sub_18003ED60.c)
 *     sub_180072C04 @ 0x180072C04 (sub_180072C04.c)
 *     sub_180094F68 @ 0x180094F68 (sub_180094F68.c)
 *     sub_18009CFCC @ 0x18009CFCC (sub_18009CFCC.c)
 *     sub_18009EF2C @ 0x18009EF2C (sub_18009EF2C.c)
 *     sub_1800AB8C4 @ 0x1800AB8C4 (sub_1800AB8C4.c)
 *     sub_1800BC774 @ 0x1800BC774 (sub_1800BC774.c)
 *     sub_1800CBE88 @ 0x1800CBE88 (sub_1800CBE88.c)
 *     sub_1800CD724 @ 0x1800CD724 (sub_1800CD724.c)
 *     sub_1800CEF44 @ 0x1800CEF44 (sub_1800CEF44.c)
 *     sub_1800CFA44 @ 0x1800CFA44 (sub_1800CFA44.c)
 *     sub_1800D13C0 @ 0x1800D13C0 (sub_1800D13C0.c)
 *     sub_1800F4678 @ 0x1800F4678 (sub_1800F4678.c)
 *     sub_1800F6C1C @ 0x1800F6C1C (sub_1800F6C1C.c)
 * Callees:
 *     sub_180038D74 @ 0x180038D74 (sub_180038D74.c)
 */

__int64 __fastcall sub_180032564(__int64 a1, __int64 a2, _DWORD **a3)
{
  __int64 result; // rax

  result = sub_180038D74(a1);
  *(_WORD *)(result + 24) = 0;
  *(_DWORD *)(result + 32) = **a3;
  *(_QWORD *)(result + 40) = 0LL;
  *(_QWORD *)(result + 48) = 0LL;
  return result;
}
