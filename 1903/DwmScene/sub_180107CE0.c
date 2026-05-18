/*
 * XREFs of sub_180107CE0 @ 0x180107CE0
 * Callers:
 *     <none>
 * Callees:
 *     j__o_free @ 0x180125B98 (j__o_free.c)
 */

_QWORD *__fastcall sub_180107CE0(_QWORD *a1, char a2)
{
  *a1 = &Spectre::Engine::DistanceFromCameraSceneNodeTraversal::`vftable';
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
