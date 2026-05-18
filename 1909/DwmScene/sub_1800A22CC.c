/*
 * XREFs of sub_1800A22CC @ 0x1800A22CC
 * Callers:
 *     sub_18009FD24 @ 0x18009FD24 (sub_18009FD24.c)
 * Callees:
 *     sub_18000DFA8 @ 0x18000DFA8 (sub_18000DFA8.c)
 *     sub_1800CDB88 @ 0x1800CDB88 (sub_1800CDB88.c)
 *     ??2@YAPEAX_K@Z @ 0x180126218 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800A22CC(_QWORD *a1)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rdi

  v2 = operator new(0xB0uLL);
  v3 = v2;
  if ( v2 )
  {
    v2[2] = 1;
    v2[3] = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj<Spectre::Engine::DomainShader>::`vftable';
    sub_1800CDB88(v2 + 4, 3LL);
    *((_QWORD *)v3 + 2) = &Spectre::Engine::DomainShader::`vftable';
  }
  else
  {
    v3 = 0LL;
  }
  *a1 = v3 + 4;
  a1[1] = v3;
  sub_18000DFA8((__int64)a1, (__int64)(v3 + 4));
  return a1;
}
