/*
 * XREFs of sub_1800FA0B0 @ 0x1800FA0B0
 * Callers:
 *     sub_1800F9FC8 @ 0x1800F9FC8 (sub_1800F9FC8.c)
 * Callees:
 *     sub_18011217C @ 0x18011217C (sub_18011217C.c)
 *     ??2@YAPEAX_K@Z @ 0x180126218 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800FA0B0(_QWORD *a1)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rbx

  v2 = operator new(0x190uLL);
  v3 = v2;
  if ( v2 )
  {
    v2[2] = 1;
    v2[3] = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj<Spectre::Engine::ImageProcessingEffectBlur>::`vftable';
    sub_18011217C(v2 + 4);
  }
  else
  {
    v3 = 0LL;
  }
  *a1 = v3 + 4;
  a1[1] = v3;
  return a1;
}
