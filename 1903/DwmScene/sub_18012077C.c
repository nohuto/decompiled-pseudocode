/*
 * XREFs of sub_18012077C @ 0x18012077C
 * Callers:
 *     sub_180120C28 @ 0x180120C28 (sub_180120C28.c)
 * Callees:
 *     sub_180122EC0 @ 0x180122EC0 (sub_180122EC0.c)
 *     sub_1801244CC @ 0x1801244CC (sub_1801244CC.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18012077C(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 *a5, __int64 a6)
{
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 result; // rax

  v6 = sub_180122EC0(a1, a2, a3);
  v7 = *a5;
  *(_QWORD *)(v6 + 32) = 0LL;
  *(_QWORD *)(v6 + 40) = 0LL;
  *(_OWORD *)(v6 + 16) = *(_OWORD *)v7;
  *(_OWORD *)(v6 + 32) = *(_OWORD *)(v7 + 16);
  *(_QWORD *)(v7 + 16) = 0LL;
  *(_QWORD *)(v7 + 24) = 7LL;
  *(_WORD *)v7 = 0;
  try
  {
    sub_1801244CC(v6 + 48);
    result = v6;
  }
  catch ( ... )
  {
    sub_180123370(a1, v6, 1LL);
    throw;
  }
  return result;
}
