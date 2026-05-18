/*
 * XREFs of sub_180077BAC @ 0x180077BAC
 * Callers:
 *     sub_1800187A0 @ 0x1800187A0 (sub_1800187A0.c)
 *     sub_180019AC8 @ 0x180019AC8 (sub_180019AC8.c)
 *     sub_18007643C @ 0x18007643C (sub_18007643C.c)
 *     sub_1800773B0 @ 0x1800773B0 (sub_1800773B0.c)
 *     sub_180077E84 @ 0x180077E84 (sub_180077E84.c)
 *     sub_180079210 @ 0x180079210 (sub_180079210.c)
 *     sub_180079C94 @ 0x180079C94 (sub_180079C94.c)
 *     sub_18007B834 @ 0x18007B834 (sub_18007B834.c)
 *     sub_1800C9538 @ 0x1800C9538 (sub_1800C9538.c)
 * Callees:
 *     sub_180063468 @ 0x180063468 (sub_180063468.c)
 *     sub_180063780 @ 0x180063780 (sub_180063780.c)
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_2 @ 0x18006E17C (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_2.c)
 *     sub_180077C8C @ 0x180077C8C (sub_180077C8C.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall sub_180077BAC(__int64 a1, _QWORD *a2, unsigned int a3)
{
  unsigned __int64 v3; // rsi
  _QWORD *v6; // rdx
  __int64 v7; // rcx
  __int64 v9; // [rsp+28h] [rbp-30h] BYREF
  __int64 v10; // [rsp+30h] [rbp-28h]

  v3 = a3;
  v9 = 0LL;
  v10 = 0LL;
  sub_180063468(a1 + 112, &v9);
  if ( (unsigned int)v3 >= (unsigned int)sub_180077C8C(a1) )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
    if ( (_BYTE)v10 )
      sub_180063780(v9);
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
      sub_180063780(v9);
  }
  return a2;
}
