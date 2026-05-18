/*
 * XREFs of sub_1800CEA58 @ 0x1800CEA58
 * Callers:
 *     sub_1800CF054 @ 0x1800CF054 (sub_1800CF054.c)
 *     sub_1800CF4F8 @ 0x1800CF4F8 (sub_1800CF4F8.c)
 * Callees:
 *     sub_180063E94 @ 0x180063E94 (sub_180063E94.c)
 */

_QWORD *__fastcall sub_1800CEA58(_QWORD *a1, __int64 a2, __int64 a3)
{
  _QWORD *result; // rax

  sub_180063E94(a1, a2, a3);
  *a1 = &Spectre::Engine::DeviceArrayBuffer::`vftable';
  result = a1;
  a1[12] = 0LL;
  return result;
}
