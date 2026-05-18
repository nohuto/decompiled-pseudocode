/*
 * XREFs of sub_1800A2250 @ 0x1800A2250
 * Callers:
 *     sub_18009FD34 @ 0x18009FD34 (sub_18009FD34.c)
 * Callees:
 *     sub_18000DF58 @ 0x18000DF58 (sub_18000DF58.c)
 *     sub_1800CDA78 @ 0x1800CDA78 (sub_1800CDA78.c)
 *     ??2@YAPEAX_K@Z @ 0x180126108 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800A2250(_QWORD *a1)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rdi

  v2 = operator new(0xB0uLL);
  v3 = v2;
  if ( v2 )
  {
    v2[2] = 1;
    v2[3] = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj<Spectre::Engine::GeometryShader>::`vftable';
    sub_1800CDA78(v2 + 4, 4LL);
    *((_QWORD *)v3 + 2) = &Spectre::Engine::GeometryShader::`vftable';
  }
  else
  {
    v3 = 0LL;
  }
  *a1 = v3 + 4;
  a1[1] = v3;
  sub_18000DF58((__int64)a1, (__int64)(v3 + 4));
  return a1;
}
