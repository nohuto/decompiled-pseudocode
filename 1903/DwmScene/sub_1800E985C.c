/*
 * XREFs of sub_1800E985C @ 0x1800E985C
 * Callers:
 *     sub_1800E9980 @ 0x1800E9980 (sub_1800E9980.c)
 * Callees:
 *     sub_18000F3F4 @ 0x18000F3F4 (sub_18000F3F4.c)
 *     sub_1800E9618 @ 0x1800E9618 (sub_1800E9618.c)
 */

void __fastcall sub_1800E985C(_QWORD *a1, _DWORD *a2, __int64 a3, __int64 *a4, __int64 *a5)
{
  __int64 v5; // r14
  __int64 v7; // rbx
  __int64 v8; // rdi

  v5 = a1[1];
  if ( a1[2] == v5 )
  {
    sub_1800E9618(a1, v5, a2, a3, a4, a5);
  }
  else
  {
    v7 = *a4;
    v8 = *a5;
    *(_DWORD *)v5 = *a2;
    *(_QWORD *)(v5 + 24) = 0LL;
    *(_QWORD *)(v5 + 32) = 0LL;
    sub_18000F3F4((_QWORD *)(v5 + 8), a3);
    *(_QWORD *)(v5 + 40) = v7;
    *(_QWORD *)(v5 + 48) = v8;
    a1[1] += 56LL;
  }
}
