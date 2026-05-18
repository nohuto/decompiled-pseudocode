/*
 * XREFs of sub_180095084 @ 0x180095084
 * Callers:
 *     sub_180094A70 @ 0x180094A70 (sub_180094A70.c)
 * Callees:
 *     sub_18000DFA8 @ 0x18000DFA8 (sub_18000DFA8.c)
 *     sub_1800CF524 @ 0x1800CF524 (sub_1800CF524.c)
 *     ??2@YAPEAX_K@Z @ 0x180126218 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180095084(_QWORD *a1, unsigned int *a2)
{
  _DWORD *v4; // rax
  _DWORD *v5; // rbx

  v4 = operator new(0xA8uLL);
  v5 = v4;
  if ( v4 )
  {
    v4[2] = 1;
    v4[3] = 1;
    *(_QWORD *)v4 = &std::_Ref_count_obj<Spectre::Engine::VertexBuffer>::`vftable';
    sub_1800CF524(v4 + 4, *a2);
  }
  else
  {
    v5 = 0LL;
  }
  *a1 = v5 + 4;
  a1[1] = v5;
  sub_18000DFA8((__int64)a1, (__int64)(v5 + 4));
  return a1;
}
