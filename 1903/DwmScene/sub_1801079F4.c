/*
 * XREFs of sub_1801079F4 @ 0x1801079F4
 * Callers:
 *     sub_180107D10 @ 0x180107D10 (sub_180107D10.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180126108 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall sub_1801079F4(_QWORD *a1, int *a2)
{
  _DWORD *v4; // rax
  _DWORD *v5; // r8
  int v6; // ecx

  v4 = operator new(0x20uLL);
  v5 = v4;
  if ( v4 )
  {
    v4[2] = 1;
    v4[3] = 1;
    *(_QWORD *)v4 = &std::_Ref_count_obj<Spectre::Engine::DistanceFromCameraSceneNodeTraversal>::`vftable';
    v6 = *a2;
    *((_QWORD *)v4 + 2) = &Spectre::Engine::DistanceFromCameraSceneNodeTraversal::`vftable';
    v4[6] = v6;
  }
  else
  {
    v5 = 0LL;
  }
  a1[1] = v5;
  *a1 = v5 + 4;
  return a1;
}
