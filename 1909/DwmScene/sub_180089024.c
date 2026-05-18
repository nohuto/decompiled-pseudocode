/*
 * XREFs of sub_180089024 @ 0x180089024
 * Callers:
 *     sub_18008A168 @ 0x18008A168 (sub_18008A168.c)
 * Callees:
 *     sub_18001115C @ 0x18001115C (sub_18001115C.c)
 *     sub_180089324 @ 0x180089324 (sub_180089324.c)
 *     ??2@YAPEAX_K@Z @ 0x180126218 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180089024(_QWORD *a1, __int64 a2, __int64 a3)
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
    sub_18001115C(v9, a2);
    sub_180089324(v7 + 4, v9, a3);
  }
  else
  {
    v7 = 0LL;
  }
  *a1 = v7 + 4;
  a1[1] = v7;
  return a1;
}
