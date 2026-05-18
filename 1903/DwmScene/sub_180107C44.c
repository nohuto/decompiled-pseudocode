/*
 * XREFs of sub_180107C44 @ 0x180107C44
 * Callers:
 *     sub_1800BCAD8 @ 0x1800BCAD8 (sub_1800BCAD8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180107C44(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 8) = a2;
  *(_QWORD *)a1 = &Spectre::Engine::DistanceFromCameraSceneNodeTraversal::`vftable';
  return a1;
}
