/*
 * XREFs of sub_180077A9C @ 0x180077A9C
 * Callers:
 *     sub_180018730 @ 0x180018730 (sub_180018730.c)
 *     sub_1800199B8 @ 0x1800199B8 (sub_1800199B8.c)
 *     sub_18007632C @ 0x18007632C (sub_18007632C.c)
 *     sub_1800772A0 @ 0x1800772A0 (sub_1800772A0.c)
 *     sub_180077D74 @ 0x180077D74 (sub_180077D74.c)
 *     sub_180079100 @ 0x180079100 (sub_180079100.c)
 *     sub_180079B84 @ 0x180079B84 (sub_180079B84.c)
 *     sub_18007B724 @ 0x18007B724 (sub_18007B724.c)
 *     sub_1800C9428 @ 0x1800C9428 (sub_1800C9428.c)
 * Callees:
 *     sub_180063358 @ 0x180063358 (sub_180063358.c)
 *     sub_180063670 @ 0x180063670 (sub_180063670.c)
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_2 @ 0x18006E06C (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_2.c)
 *     sub_180077B7C @ 0x180077B7C (sub_180077B7C.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall sub_180077A9C(__int64 a1, _QWORD *a2, unsigned int a3)
{
  unsigned __int64 v3; // rsi
  _QWORD *v6; // rdx
  __int64 v7; // rcx
  __int64 v9; // [rsp+28h] [rbp-30h] BYREF
  __int64 v10; // [rsp+30h] [rbp-28h]

  v3 = a3;
  v9 = 0LL;
  v10 = 0LL;
  sub_180063358(a1 + 112, &v9);
  if ( (unsigned int)v3 >= (unsigned int)sub_180077B7C(a1) )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
    if ( (_BYTE)v10 )
      sub_180063670(v9);
  }
  else
  {
    if ( (__int64)(*(_QWORD *)(a1 + 96) - *(_QWORD *)(a1 + 88)) >> 4 <= v3 )
      std::vector<void *>::_Xlen();
    v6 = (_QWORD *)(*(_QWORD *)(a1 + 88) + 16LL * (unsigned int)v3);
    *a2 = 0LL;
    a2[1] = 0LL;
    v7 = v6[1];
    if ( v7 )
      _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
    *a2 = *v6;
    a2[1] = v6[1];
    if ( (_BYTE)v10 )
      sub_180063670(v9);
  }
  return a2;
}
