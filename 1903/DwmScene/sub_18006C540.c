/*
 * XREFs of sub_18006C540 @ 0x18006C540
 * Callers:
 *     <none>
 * Callees:
 *     j__o_free @ 0x180125B98 (j__o_free.c)
 */

_QWORD *__fastcall sub_18006C540(_QWORD *a1, char a2)
{
  *a1 = &Spectre::Engine::IGpuQueryPool::`vftable';
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
