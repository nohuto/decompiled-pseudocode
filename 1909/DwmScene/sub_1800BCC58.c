/*
 * XREFs of sub_1800BCC58 @ 0x1800BCC58
 * Callers:
 *     sub_1800BE208 @ 0x1800BE208 (sub_1800BE208.c)
 * Callees:
 *     sub_1800FA120 @ 0x1800FA120 (sub_1800FA120.c)
 *     ??2@YAPEAX_K@Z @ 0x180126218 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800BCC58(_QWORD *a1)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rbx

  v2 = operator new(0x130uLL);
  v3 = v2;
  if ( v2 )
  {
    v2[2] = 1;
    v2[3] = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj<Spectre::Engine::ImageProcessingEffectBloom>::`vftable';
    sub_1800FA120(v2 + 4);
  }
  else
  {
    v3 = 0LL;
  }
  *a1 = v3 + 4;
  a1[1] = v3;
  return a1;
}
