/*
 * XREFs of sub_1800F9FA0 @ 0x1800F9FA0
 * Callers:
 *     sub_1800F9EB8 @ 0x1800F9EB8 (sub_1800F9EB8.c)
 * Callees:
 *     sub_18011206C @ 0x18011206C (sub_18011206C.c)
 *     ??2@YAPEAX_K@Z @ 0x180126108 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800F9FA0(_QWORD *a1)
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
    sub_18011206C(v2 + 4);
  }
  else
  {
    v3 = 0LL;
  }
  *a1 = v3 + 4;
  a1[1] = v3;
  return a1;
}
