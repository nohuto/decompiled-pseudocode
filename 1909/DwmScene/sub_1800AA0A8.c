/*
 * XREFs of sub_1800AA0A8 @ 0x1800AA0A8
 * Callers:
 *     sub_18012F9E2 @ 0x18012F9E2 (sub_18012F9E2.c)
 * Callees:
 *     sub_1800AA2EC @ 0x1800AA2EC (sub_1800AA2EC.c)
 */

__int64 __fastcall sub_1800AA0A8(_QWORD **a1)
{
  char v2; // [rsp+30h] [rbp+8h] BYREF

  return sub_1800AA2EC(a1, &v2, **a1, *a1);
}
