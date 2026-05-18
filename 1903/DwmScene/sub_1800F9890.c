/*
 * XREFs of sub_1800F9890 @ 0x1800F9890
 * Callers:
 *     sub_1800B5AC0 @ 0x1800B5AC0 (sub_1800B5AC0.c)
 * Callees:
 *     sub_180063DA8 @ 0x180063DA8 (sub_180063DA8.c)
 */

_QWORD *__fastcall sub_1800F9890(_QWORD *a1)
{
  sub_180063DA8((__int64)a1);
  a1[12] = 0LL;
  a1[13] = 0LL;
  *a1 = &Spectre::Engine::RenderStateGeneric::`vftable';
  return a1;
}
