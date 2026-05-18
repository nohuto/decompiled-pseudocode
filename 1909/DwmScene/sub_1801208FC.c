/*
 * XREFs of sub_1801208FC @ 0x1801208FC
 * Callers:
 *     sub_180121BBC @ 0x180121BBC (sub_180121BBC.c)
 * Callees:
 *     sub_18012301C @ 0x18012301C (sub_18012301C.c)
 *     sub_1801245DC @ 0x1801245DC (sub_1801245DC.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1801208FC(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 result; // rax
  __int64 v9; // [rsp+58h] [rbp+20h]

  v4 = sub_18012301C(a1);
  v5 = v4;
  v9 = v4;
  *(_WORD *)(v4 + 24) = 0;
  v6 = *a3;
  *(_QWORD *)(v4 + 48) = 0LL;
  *(_QWORD *)(v4 + 56) = 0LL;
  *(_OWORD *)(v4 + 32) = *(_OWORD *)v6;
  *(_OWORD *)(v4 + 48) = *(_OWORD *)(v6 + 16);
  *(_QWORD *)(v6 + 16) = 0LL;
  *(_QWORD *)(v6 + 24) = 7LL;
  *(_WORD *)v6 = 0;
  try
  {
    sub_1801245DC(v4 + 64);
    result = v5;
  }
  catch ( ... )
  {
    sub_18012327C(a1, v9);
    throw;
  }
  return result;
}
