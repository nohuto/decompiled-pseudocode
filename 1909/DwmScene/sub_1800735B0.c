/*
 * XREFs of sub_1800735B0 @ 0x1800735B0
 * Callers:
 *     sub_180078454 @ 0x180078454 (sub_180078454.c)
 * Callees:
 *     sub_18000FDFC @ 0x18000FDFC (sub_18000FDFC.c)
 *     sub_1800F03BC @ 0x1800F03BC (sub_1800F03BC.c)
 *     ??2@YAPEAX_K@Z @ 0x180126218 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800735B0(_QWORD *a1)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rbx

  v2 = operator new(0x88uLL);
  v3 = v2;
  if ( v2 )
  {
    v2[2] = 1;
    v2[3] = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj<Spectre::Engine::SymbolShaderExtension>::`vftable';
    sub_1800F03BC(v2 + 4);
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
