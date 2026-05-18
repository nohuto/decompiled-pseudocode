/*
 * XREFs of sub_1801208AC @ 0x1801208AC
 * Callers:
 *     sub_1801219EC @ 0x1801219EC (sub_1801219EC.c)
 * Callees:
 *     sub_18001110C @ 0x18001110C (sub_18001110C.c)
 *     sub_180122F0C @ 0x180122F0C (sub_180122F0C.c)
 *     sub_1801244CC @ 0x1801244CC (sub_1801244CC.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1801208AC(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx

  v4 = sub_180122F0C(a1);
  *(_WORD *)(v4 + 24) = 0;
  v5 = *a3;
  *(_QWORD *)(v4 + 48) = 0LL;
  *(_QWORD *)(v4 + 56) = 0LL;
  try
  {
    sub_18001110C((_QWORD *)(v4 + 32), v5);
    v6 = v4 + 64;
  }
  catch ( ... )
  {
    sub_18012316C(a1, v4);
    throw;
  }
  sub_1801244CC(v6);
  return v4;
}
