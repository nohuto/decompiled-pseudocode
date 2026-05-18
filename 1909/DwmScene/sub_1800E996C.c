/*
 * XREFs of sub_1800E996C @ 0x1800E996C
 * Callers:
 *     sub_1800E9A90 @ 0x1800E9A90 (sub_1800E9A90.c)
 * Callees:
 *     sub_18000F444 @ 0x18000F444 (sub_18000F444.c)
 *     sub_1800E9728 @ 0x1800E9728 (sub_1800E9728.c)
 */

void __fastcall sub_1800E996C(_QWORD *a1, _DWORD *a2, __int64 a3, __int64 *a4, __int64 *a5)
{
  __int64 v5; // r14
  __int64 v7; // rbx
  __int64 v8; // rdi

  v5 = a1[1];
  if ( a1[2] == v5 )
  {
    sub_1800E9728(a1, v5, a2, a3, a4, a5);
  }
  else
  {
    v7 = *a4;
    v8 = *a5;
    *(_DWORD *)v5 = *a2;
    *(_QWORD *)(v5 + 24) = 0LL;
    *(_QWORD *)(v5 + 32) = 0LL;
    sub_18000F444((_QWORD *)(v5 + 8), a3);
    *(_QWORD *)(v5 + 40) = v7;
    *(_QWORD *)(v5 + 48) = v8;
    a1[1] += 56LL;
  }
}
