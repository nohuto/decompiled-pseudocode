/*
 * XREFs of sub_180063040 @ 0x180063040
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E6B8 @ 0x18000E6B8 (sub_18000E6B8.c)
 */

_QWORD *__fastcall sub_180063040(_QWORD *a1, __int64 a2)
{
  sub_18000E6B8((__int64)a1, a2);
  *a1 = &Spectre::Engine::EngineAccessDeniedException::`vftable';
  return a1;
}
