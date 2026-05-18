/*
 * XREFs of sub_1800E2C20 @ 0x1800E2C20
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180126108 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall sub_1800E2C20(__int64 a1, _QWORD *a2)
{
  _DWORD *v3; // rax
  _DWORD *v4; // rcx

  v3 = operator new(0x18uLL);
  v4 = v3;
  if ( v3 )
  {
    v3[2] = 1;
    v3[3] = 1;
    *(_QWORD *)v3 = &std::_Ref_count_obj<Spectre::Engine::DefaultSceneNodeTraversal>::`vftable';
    *((_QWORD *)v3 + 2) = &Spectre::Engine::DefaultSceneNodeTraversal::`vftable';
  }
  else
  {
    v4 = 0LL;
  }
  a2[1] = v4;
  *a2 = v4 + 4;
  return a2;
}
