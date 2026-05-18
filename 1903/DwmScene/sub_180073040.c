/*
 * XREFs of sub_180073040 @ 0x180073040
 * Callers:
 *     sub_180078344 @ 0x180078344 (sub_180078344.c)
 * Callees:
 *     sub_18000FDAC @ 0x18000FDAC (sub_18000FDAC.c)
 *     sub_1800E9FC0 @ 0x1800E9FC0 (sub_1800E9FC0.c)
 *     ??2@YAPEAX_K@Z @ 0x180126108 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180073040(_QWORD *a1)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rbx

  v2 = operator new(0xC8uLL);
  v3 = v2;
  if ( v2 )
  {
    v2[2] = 1;
    v2[3] = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj<Spectre::Engine::BackgroundUnlitShaderExtension>::`vftable';
    sub_1800E9FC0(v2 + 4);
  }
  else
  {
    v3 = 0LL;
  }
  *a1 = v3 + 4;
  a1[1] = v3;
  sub_18000FDAC((__int64)a1, (__int64)(v3 + 4));
  return a1;
}
