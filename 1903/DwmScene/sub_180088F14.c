/*
 * XREFs of sub_180088F14 @ 0x180088F14
 * Callers:
 *     sub_18008A058 @ 0x18008A058 (sub_18008A058.c)
 * Callees:
 *     sub_18001110C @ 0x18001110C (sub_18001110C.c)
 *     sub_180089214 @ 0x180089214 (sub_180089214.c)
 *     ??2@YAPEAX_K@Z @ 0x180126108 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180088F14(_QWORD *a1, __int64 a2, __int64 a3)
{
  _DWORD *v6; // rax
  _DWORD *v7; // rdi
  _QWORD v9[5]; // [rsp+28h] [rbp-40h] BYREF

  v6 = operator new(0x78uLL);
  v7 = v6;
  if ( v6 )
  {
    v6[2] = 1;
    v6[3] = 1;
    *(_QWORD *)v6 = &std::_Ref_count_obj<Spectre::Engine::SceneLayer>::`vftable';
    v9[2] = 0LL;
    v9[3] = 0LL;
    sub_18001110C(v9, a2);
    sub_180089214(v7 + 4, v9, a3);
  }
  else
  {
    v7 = 0LL;
  }
  *a1 = v7 + 4;
  a1[1] = v7;
  return a1;
}
