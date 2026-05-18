/*
 * XREFs of sub_1800A73C8 @ 0x1800A73C8
 * Callers:
 *     sub_1800A7654 @ 0x1800A7654 (sub_1800A7654.c)
 * Callees:
 *     unknown_libname_113 @ 0x18000F6D4 (unknown_libname_113.c)
 *     sub_18000FDAC @ 0x18000FDAC (sub_18000FDAC.c)
 *     sub_1800A7570 @ 0x1800A7570 (sub_1800A7570.c)
 *     ??2@YAPEAX_K@Z @ 0x180126108 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800A73C8(_QWORD *a1, _BYTE *a2)
{
  _DWORD *v4; // rax
  _DWORD *v5; // rdi
  __int64 v7[8]; // [rsp+28h] [rbp-40h] BYREF

  v4 = operator new(0x80uLL);
  v5 = v4;
  if ( v4 )
  {
    v4[2] = 1;
    v4[3] = 1;
    *(_QWORD *)v4 = &std::_Ref_count_obj<Spectre::Engine::IShaderExtension>::`vftable';
    v7[2] = 0LL;
    v7[3] = 15LL;
    LOBYTE(v7[0]) = 0;
    unknown_libname_113(v7, a2);
    sub_1800A7570(v5 + 4, v7);
  }
  else
  {
    v5 = 0LL;
  }
  *a1 = v5 + 4;
  a1[1] = v5;
  sub_18000FDAC((__int64)a1, (__int64)(v5 + 4));
  return a1;
}
