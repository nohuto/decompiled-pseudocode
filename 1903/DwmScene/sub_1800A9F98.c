/*
 * XREFs of sub_1800A9F98 @ 0x1800A9F98
 * Callers:
 *     sub_18012F8D2 @ 0x18012F8D2 (sub_18012F8D2.c)
 * Callees:
 *     sub_1800AA1DC @ 0x1800AA1DC (sub_1800AA1DC.c)
 */

__int64 __fastcall sub_1800A9F98(_QWORD **a1)
{
  char v2; // [rsp+30h] [rbp+8h] BYREF

  return sub_1800AA1DC(a1, &v2, **a1, *a1);
}
