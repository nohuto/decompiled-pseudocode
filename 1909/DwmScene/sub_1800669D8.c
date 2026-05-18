/*
 * XREFs of sub_1800669D8 @ 0x1800669D8
 * Callers:
 *     sub_180066AE4 @ 0x180066AE4 (sub_180066AE4.c)
 * Callees:
 *     sub_1800DB22C @ 0x1800DB22C (sub_1800DB22C.c)
 *     ??2@YAPEAX_K@Z @ 0x180126218 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800669D8(_QWORD *a1)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rbx

  v2 = operator new(0x1F8uLL);
  v3 = v2;
  if ( v2 )
  {
    v2[2] = 1;
    v2[3] = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj<Spectre::Engine::ImageProcessingManager>::`vftable';
    sub_1800DB22C(v2 + 4);
  }
  else
  {
    v3 = 0LL;
  }
  *a1 = v3 + 4;
  a1[1] = v3;
  return a1;
}
