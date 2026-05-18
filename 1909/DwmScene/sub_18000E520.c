/*
 * XREFs of sub_18000E520 @ 0x18000E520
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E6B8 @ 0x18000E6B8 (sub_18000E6B8.c)
 */

_QWORD *__fastcall sub_18000E520(_QWORD *a1)
{
  sub_18000E6B8();
  *a1 = &Spectre::Engine::EngineException::`vftable';
  return a1;
}
