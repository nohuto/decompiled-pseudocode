/*
 * XREFs of sub_1800CE948 @ 0x1800CE948
 * Callers:
 *     sub_1800CEF44 @ 0x1800CEF44 (sub_1800CEF44.c)
 *     sub_1800CF3E8 @ 0x1800CF3E8 (sub_1800CF3E8.c)
 * Callees:
 *     sub_180063D84 @ 0x180063D84 (sub_180063D84.c)
 */

_QWORD *__fastcall sub_1800CE948(_QWORD *a1, __int64 a2, __int64 a3)
{
  _QWORD *result; // rax

  sub_180063D84(a1, a2, a3);
  *a1 = &Spectre::Engine::DeviceArrayBuffer::`vftable';
  result = a1;
  a1[12] = 0LL;
  return result;
}
