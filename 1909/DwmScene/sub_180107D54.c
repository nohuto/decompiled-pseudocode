/*
 * XREFs of sub_180107D54 @ 0x180107D54
 * Callers:
 *     sub_1800BCBE8 @ 0x1800BCBE8 (sub_1800BCBE8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180107D54(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 8) = a2;
  *(_QWORD *)a1 = &Spectre::Engine::DistanceFromCameraSceneNodeTraversal::`vftable';
  return a1;
}
