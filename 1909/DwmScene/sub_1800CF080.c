/*
 * XREFs of sub_1800CF080 @ 0x1800CF080
 * Callers:
 *     sub_18009500C @ 0x18009500C (sub_18009500C.c)
 * Callees:
 *     sub_1800D2330 @ 0x1800D2330 (sub_1800D2330.c)
 */

_QWORD *__fastcall sub_1800CF080(_QWORD *a1)
{
  sub_1800D2330(a1, 8LL, 6LL);
  *a1 = &Spectre::Engine::IndexBuffer::`vftable';
  return a1;
}
