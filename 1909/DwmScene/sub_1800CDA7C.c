/*
 * XREFs of sub_1800CDA7C @ 0x1800CDA7C
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E6B8 @ 0x18000E6B8 (sub_18000E6B8.c)
 */

_QWORD *__fastcall sub_1800CDA7C(_QWORD *a1, __int64 a2)
{
  sub_18000E6B8((__int64)a1, a2);
  *a1 = &Spectre::Engine::EngineUnexpectedException::`vftable';
  return a1;
}
