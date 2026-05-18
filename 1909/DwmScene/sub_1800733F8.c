/*
 * XREFs of sub_1800733F8 @ 0x1800733F8
 * Callers:
 *     sub_180075AC0 @ 0x180075AC0 (sub_180075AC0.c)
 * Callees:
 *     sub_18000FDFC @ 0x18000FDFC (sub_18000FDFC.c)
 *     sub_180121EA0 @ 0x180121EA0 (sub_180121EA0.c)
 *     ??2@YAPEAX_K@Z @ 0x180126218 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800733F8(_QWORD *a1, unsigned int *a2, _QWORD *a3)
{
  _DWORD *v6; // rax
  _DWORD *v7; // rbx
  __int64 v8; // rdx
  __int128 v10; // [rsp+28h] [rbp-30h] BYREF

  v6 = operator new(0x118uLL);
  v7 = v6;
  if ( v6 )
  {
    v6[2] = 1;
    v6[3] = 1;
    *(_QWORD *)v6 = &std::_Ref_count_obj<Spectre::Utils::JsonConfigurationManager>::`vftable';
    v10 = 0LL;
    v8 = a3[1];
    if ( v8 )
    {
      _InterlockedAdd((volatile signed __int32 *)(v8 + 8), 1u);
      v8 = a3[1];
    }
    *(_QWORD *)&v10 = *a3;
    *((_QWORD *)&v10 + 1) = v8;
    sub_180121EA0(v6 + 4, *a2, &v10);
  }
  else
  {
    v7 = 0LL;
  }
  *a1 = v7 + 4;
  a1[1] = v7;
  sub_18000FDFC((__int64)a1, (__int64)(v7 + 4));
  return a1;
}
