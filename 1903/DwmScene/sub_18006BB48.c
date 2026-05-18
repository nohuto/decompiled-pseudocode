/*
 * XREFs of sub_18006BB48 @ 0x18006BB48
 * Callers:
 *     sub_1800BE5E0 @ 0x1800BE5E0 (sub_1800BE5E0.c)
 *     sub_1800FF368 @ 0x1800FF368 (sub_1800FF368.c)
 *     sub_18010AD88 @ 0x18010AD88 (sub_18010AD88.c)
 * Callees:
 *     sub_1800E2B90 @ 0x1800E2B90 (sub_1800E2B90.c)
 *     ??2@YAPEAX_K@Z @ 0x180126108 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18006BB48(_QWORD *a1)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rbx

  v2 = operator new(0x18uLL);
  v3 = v2;
  if ( v2 )
  {
    v2[2] = 1;
    v2[3] = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj<Spectre::Engine::DefaultSceneNodeTraversal>::`vftable';
    sub_1800E2B90(v2 + 4);
  }
  else
  {
    v3 = 0LL;
  }
  *a1 = v3 + 4;
  a1[1] = v3;
  return a1;
}
