/*
 * XREFs of sub_180062F30 @ 0x180062F30
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E668 @ 0x18000E668 (sub_18000E668.c)
 */

_QWORD *__fastcall sub_180062F30(_QWORD *a1, __int64 a2)
{
  sub_18000E668((__int64)a1, a2);
  *a1 = &Spectre::Engine::EngineAccessDeniedException::`vftable';
  return a1;
}
