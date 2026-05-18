/*
 * XREFs of sub_18000E468 @ 0x18000E468
 * Callers:
 *     sub_18000DCC0 @ 0x18000DCC0 (sub_18000DCC0.c)
 * Callees:
 *     sub_18000DFA8 @ 0x18000DFA8 (sub_18000DFA8.c)
 *     sub_1800647D8 @ 0x1800647D8 (sub_1800647D8.c)
 *     ??2@YAPEAX_K@Z @ 0x180126218 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18000E468(_QWORD *a1)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rbx

  v2 = operator new(0xB8uLL);
  v3 = v2;
  if ( v2 )
  {
    v2[2] = 1;
    v2[3] = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj<Spectre::Engine::FrameBuffer>::`vftable';
    sub_1800647D8(v2 + 4);
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
