/*
 * XREFs of sub_1800B5CB0 @ 0x1800B5CB0
 * Callers:
 *     sub_1800B6390 @ 0x1800B6390 (sub_1800B6390.c)
 * Callees:
 *     sub_18009D1B4 @ 0x18009D1B4 (sub_18009D1B4.c)
 *     ??2@YAPEAX_K@Z @ 0x180126218 (--2@YAPEAX_K@Z.c)
 *     memset @ 0x1801272D8 (memset.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800B5CB0(_QWORD *a1)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rdi

  v2 = operator new(0xB0uLL);
  v3 = v2;
  if ( v2 )
  {
    v2[2] = 1;
    v2[3] = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj<Spectre::Engine::TextureGeneric>::`vftable';
    memset(v2 + 4, 0, 0xA0uLL);
    sub_18009D1B4((__int64)(v3 + 4));
    *((_QWORD *)v3 + 2) = &Spectre::Engine::TextureGeneric::`vftable';
  }
  else
  {
    v3 = 0LL;
  }
  *a1 = v3 + 4;
  a1[1] = v3;
  return a1;
}
