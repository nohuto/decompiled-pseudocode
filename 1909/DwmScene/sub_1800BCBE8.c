/*
 * XREFs of sub_1800BCBE8 @ 0x1800BCBE8
 * Callers:
 *     sub_1800BE6F0 @ 0x1800BE6F0 (sub_1800BE6F0.c)
 * Callees:
 *     sub_180107D54 @ 0x180107D54 (sub_180107D54.c)
 *     ??2@YAPEAX_K@Z @ 0x180126218 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800BCBE8(_QWORD *a1)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rbx

  v2 = operator new(0x20uLL);
  v3 = v2;
  if ( v2 )
  {
    v2[2] = 1;
    v2[3] = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj<Spectre::Engine::DistanceFromCameraSceneNodeTraversal>::`vftable';
    sub_180107D54(v2 + 4);
  }
  else
  {
    v3 = 0LL;
  }
  *a1 = v3 + 4;
  a1[1] = v3;
  return a1;
}
