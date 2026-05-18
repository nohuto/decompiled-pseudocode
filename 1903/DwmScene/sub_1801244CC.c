/*
 * XREFs of sub_1801244CC @ 0x1801244CC
 * Callers:
 *     sub_18012077C @ 0x18012077C (sub_18012077C.c)
 *     sub_1801207EC @ 0x1801207EC (sub_1801207EC.c)
 *     sub_1801208AC @ 0x1801208AC (sub_1801208AC.c)
 *     sub_1801222A0 @ 0x1801222A0 (sub_1801222A0.c)
 *     sub_1801242EC @ 0x1801242EC (sub_1801242EC.c)
 * Callees:
 *     sub_180124458 @ 0x180124458 (sub_180124458.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1801244CC(__int64 a1)
{
  _QWORD *v2; // rcx
  _DWORD v4[2]; // [rsp+28h] [rbp-20h] BYREF
  __int64 v5; // [rsp+30h] [rbp-18h]
  __int64 v6; // [rsp+38h] [rbp-10h]

  v5 = -2LL;
  v6 = a1;
  *(_DWORD *)a1 = 5;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 7LL;
  *(_WORD *)(a1 + 8) = 0;
  v2 = (_QWORD *)(a1 + 64);
  v4[1] = HIDWORD(v2);
  v4[0] = 0;
  sub_180124458(v2, v4);
  return a1;
}
