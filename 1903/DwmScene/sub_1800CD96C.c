/*
 * XREFs of sub_1800CD96C @ 0x1800CD96C
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E668 @ 0x18000E668 (sub_18000E668.c)
 */

_QWORD *__fastcall sub_1800CD96C(_QWORD *a1, __int64 a2)
{
  sub_18000E668((__int64)a1, a2);
  *a1 = &Spectre::Engine::EngineUnexpectedException::`vftable';
  return a1;
}
