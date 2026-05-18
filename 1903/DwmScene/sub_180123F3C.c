/*
 * XREFs of sub_180123F3C @ 0x180123F3C
 * Callers:
 *     sub_18008FB40 @ 0x18008FB40 (sub_18008FB40.c)
 *     sub_180098790 @ 0x180098790 (sub_180098790.c)
 *     sub_1800E275C @ 0x1800E275C (sub_1800E275C.c)
 *     sub_1800F0E50 @ 0x1800F0E50 (sub_1800F0E50.c)
 *     sub_18010BB44 @ 0x18010BB44 (sub_18010BB44.c)
 * Callees:
 *     sub_180123D38 @ 0x180123D38 (sub_180123D38.c)
 */

_QWORD *__fastcall sub_180123F3C(_QWORD *a1)
{
  _QWORD *result; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  sub_180123D38(a1);
  result = a1;
  _InterlockedExchange((volatile __int32 *)(*a1 + 16LL), 2);
  return result;
}
