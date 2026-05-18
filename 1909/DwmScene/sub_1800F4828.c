/*
 * XREFs of sub_1800F4828 @ 0x1800F4828
 * Callers:
 *     sub_1800F3DE4 @ 0x1800F3DE4 (sub_1800F3DE4.c)
 * Callees:
 *     sub_18000DFA8 @ 0x18000DFA8 (sub_18000DFA8.c)
 *     sub_1800D2FEC @ 0x1800D2FEC (sub_1800D2FEC.c)
 *     ??2@YAPEAX_K@Z @ 0x180126218 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800F4828(_QWORD *a1)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rbx

  v2 = operator new(0x90uLL);
  v3 = v2;
  if ( v2 )
  {
    v2[2] = 1;
    v2[3] = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj<Spectre::Engine::ConstantBuffer>::`vftable';
    sub_1800D2FEC((_QWORD *)v2 + 2);
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
