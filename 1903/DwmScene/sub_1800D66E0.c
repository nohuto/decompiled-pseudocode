/*
 * XREFs of sub_1800D66E0 @ 0x1800D66E0
 * Callers:
 *     <none>
 * Callees:
 *     j__o_free @ 0x180125B98 (j__o_free.c)
 */

_QWORD *__fastcall sub_1800D66E0(_QWORD *a1, char a2)
{
  *a1 = &Spectre::Engine::IGpuProfilingGrapher::`vftable';
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
