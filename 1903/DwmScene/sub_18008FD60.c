/*
 * XREFs of sub_18008FD60 @ 0x18008FD60
 * Callers:
 *     <none>
 * Callees:
 *     j__o_free @ 0x180125B98 (j__o_free.c)
 */

_QWORD *__fastcall sub_18008FD60(_QWORD *a1, char a2)
{
  *a1 = &Spectre::Engine::ResourceLoadedFnc::`vftable';
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
