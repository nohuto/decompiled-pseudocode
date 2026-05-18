/*
 * XREFs of sub_18009EC2C @ 0x18009EC2C
 * Callers:
 *     sub_180021C80 @ 0x180021C80 (sub_180021C80.c)
 *     sub_180022370 @ 0x180022370 (sub_180022370.c)
 *     sub_180024DD0 @ 0x180024DD0 (sub_180024DD0.c)
 *     sub_18006D8EC @ 0x18006D8EC (sub_18006D8EC.c)
 *     sub_1800B225C @ 0x1800B225C (sub_1800B225C.c)
 *     sub_1800DD144 @ 0x1800DD144 (sub_1800DD144.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_18009EC2C(__int64 a1, _QWORD *a2)
{
  _QWORD *result; // rax

  result = a2;
  *a2 = *(_QWORD *)(a1 + 144);
  return result;
}
