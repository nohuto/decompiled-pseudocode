/*
 * XREFs of sub_18012404C @ 0x18012404C
 * Callers:
 *     sub_18008FC50 @ 0x18008FC50 (sub_18008FC50.c)
 *     sub_1800988A0 @ 0x1800988A0 (sub_1800988A0.c)
 *     sub_1800E286C @ 0x1800E286C (sub_1800E286C.c)
 *     sub_1800F0F60 @ 0x1800F0F60 (sub_1800F0F60.c)
 *     sub_18010BC54 @ 0x18010BC54 (sub_18010BC54.c)
 * Callees:
 *     sub_180123E48 @ 0x180123E48 (sub_180123E48.c)
 */

_QWORD *__fastcall sub_18012404C(_QWORD *a1)
{
  _QWORD *result; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  sub_180123E48(a1);
  result = a1;
  _InterlockedExchange((volatile __int32 *)(*a1 + 16LL), 2);
  return result;
}
