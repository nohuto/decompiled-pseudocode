/*
 * XREFs of sub_180073308 @ 0x180073308
 * Callers:
 *     sub_180078454 @ 0x180078454 (sub_180078454.c)
 * Callees:
 *     sub_18000FDFC @ 0x18000FDFC (sub_18000FDFC.c)
 *     sub_1800EC1B8 @ 0x1800EC1B8 (sub_1800EC1B8.c)
 *     ??2@YAPEAX_K@Z @ 0x180126218 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180073308(_QWORD *a1)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rbx

  v2 = operator new(0x80uLL);
  v3 = v2;
  if ( v2 )
  {
    v2[2] = 1;
    v2[3] = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj<Spectre::Engine::FontShaderExtension>::`vftable';
    sub_1800EC1B8(v2 + 4);
  }
  else
  {
    v3 = 0LL;
  }
  *a1 = v3 + 4;
  a1[1] = v3;
  sub_18000FDFC((__int64)a1, (__int64)(v3 + 4));
  return a1;
}
