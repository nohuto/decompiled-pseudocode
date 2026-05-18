/*
 * XREFs of sub_1800BCA34 @ 0x1800BCA34
 * Callers:
 *     sub_1800B9888 @ 0x1800B9888 (sub_1800B9888.c)
 *     sub_1800BF880 @ 0x1800BF880 (sub_1800BF880.c)
 * Callees:
 *     sub_1800BD230 @ 0x1800BD230 (sub_1800BD230.c)
 *     ??2@YAPEAX_K@Z @ 0x180126218 (--2@YAPEAX_K@Z.c)
 *     memset @ 0x1801272D8 (memset.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800BCA34(_QWORD *a1)
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
    sub_1800BD230(v3 + 4);
  }
  else
  {
    v3 = 0LL;
  }
  *a1 = v3 + 4;
  a1[1] = v3;
  return a1;
}
