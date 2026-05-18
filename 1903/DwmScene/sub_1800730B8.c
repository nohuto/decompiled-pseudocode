/*
 * XREFs of sub_1800730B8 @ 0x1800730B8
 * Callers:
 *     sub_18006E930 @ 0x18006E930 (sub_18006E930.c)
 * Callees:
 *     sub_18000FDAC @ 0x18000FDAC (sub_18000FDAC.c)
 *     sub_1800ABA10 @ 0x1800ABA10 (sub_1800ABA10.c)
 *     ??2@YAPEAX_K@Z @ 0x180126108 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800730B8(_QWORD *a1, _QWORD *a2)
{
  _DWORD *v4; // rax
  _DWORD *v5; // rbx
  _QWORD v7[4]; // [rsp+28h] [rbp-20h] BYREF

  v4 = operator new(0x6F8uLL);
  v5 = v4;
  if ( v4 )
  {
    v4[2] = 1;
    v4[3] = 1;
    *(_QWORD *)v4 = &std::_Ref_count_obj<Spectre::Engine::Camera>::`vftable';
    v7[0] = *a2;
    v7[1] = a2[1];
    *a2 = 0LL;
    a2[1] = 0LL;
    sub_1800ABA10(v4 + 4, v7);
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
