/*
 * XREFs of sub_1800732E8 @ 0x1800732E8
 * Callers:
 *     sub_1800759B0 @ 0x1800759B0 (sub_1800759B0.c)
 * Callees:
 *     sub_18000FDAC @ 0x18000FDAC (sub_18000FDAC.c)
 *     sub_180121D90 @ 0x180121D90 (sub_180121D90.c)
 *     ??2@YAPEAX_K@Z @ 0x180126108 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800732E8(_QWORD *a1, unsigned int *a2, _QWORD *a3)
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
    sub_180121D90(v6 + 4, *a2, &v10);
  }
  else
  {
    v7 = 0LL;
  }
  *a1 = v7 + 4;
  a1[1] = v7;
  sub_18000FDAC((__int64)a1, (__int64)(v7 + 4));
  return a1;
}
