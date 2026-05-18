/*
 * XREFs of sub_1801245DC @ 0x1801245DC
 * Callers:
 *     sub_18012088C @ 0x18012088C (sub_18012088C.c)
 *     sub_1801208FC @ 0x1801208FC (sub_1801208FC.c)
 *     sub_1801209BC @ 0x1801209BC (sub_1801209BC.c)
 *     sub_1801223B0 @ 0x1801223B0 (sub_1801223B0.c)
 *     sub_1801243FC @ 0x1801243FC (sub_1801243FC.c)
 * Callees:
 *     sub_180124568 @ 0x180124568 (sub_180124568.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1801245DC(__int64 a1)
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
  sub_180124568(v2, v4);
  return a1;
}
