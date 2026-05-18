/*
 * XREFs of sub_1800BC924 @ 0x1800BC924
 * Callers:
 *     sub_1800B9778 @ 0x1800B9778 (sub_1800B9778.c)
 *     sub_1800BF770 @ 0x1800BF770 (sub_1800BF770.c)
 * Callees:
 *     sub_1800BD120 @ 0x1800BD120 (sub_1800BD120.c)
 *     ??2@YAPEAX_K@Z @ 0x180126108 (--2@YAPEAX_K@Z.c)
 *     memset @ 0x1801271C8 (memset.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800BC924(_QWORD *a1)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rdi

  v2 = operator new(0x158uLL);
  v3 = v2;
  if ( v2 )
  {
    v2[2] = 1;
    v2[3] = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj<Spectre::Engine::ViewerEngine::ViewerSceneData>::`vftable';
    memset(v2 + 4, 0, 0x148uLL);
    sub_1800BD120(v3 + 4);
  }
  else
  {
    v3 = 0LL;
  }
  *a1 = v3 + 4;
  a1[1] = v3;
  return a1;
}
