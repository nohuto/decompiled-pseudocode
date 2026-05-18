/*
 * XREFs of sub_18000E4D0 @ 0x18000E4D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E668 @ 0x18000E668 (sub_18000E668.c)
 */

_QWORD *__fastcall sub_18000E4D0(_QWORD *a1)
{
  sub_18000E668();
  *a1 = &Spectre::Engine::EngineException::`vftable';
  return a1;
}
