/*
 * XREFs of sub_180088590 @ 0x180088590
 * Callers:
 *     sub_1800887E4 @ 0x1800887E4 (sub_1800887E4.c)
 * Callees:
 *     sub_18008D2B4 @ 0x18008D2B4 (sub_18008D2B4.c)
 */

_QWORD *__fastcall sub_180088590(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  _QWORD *result; // rax

  result = (_QWORD *)sub_18008D2B4(a1);
  result[2] = *a4;
  result[3] = 0LL;
  result[4] = 0LL;
  result[3] = a4[1];
  result[4] = a4[2];
  a4[1] = 0LL;
  a4[2] = 0LL;
  return result;
}
