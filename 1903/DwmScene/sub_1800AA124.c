/*
 * XREFs of sub_1800AA124 @ 0x1800AA124
 * Callers:
 *     sub_1800AA044 @ 0x1800AA044 (sub_1800AA044.c)
 * Callees:
 *     sub_180025A40 @ 0x180025A40 (sub_180025A40.c)
 *     sub_180026420 @ 0x180026420 (sub_180026420.c)
 *     sub_180074528 @ 0x180074528 (sub_180074528.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 */

__int64 *__fastcall sub_1800AA124(_QWORD *a1, __int64 *a2, __int64 *a3)
{
  __int64 i; // rbx
  __int64 *v5; // rax
  __int64 j; // rdx
  __int64 *v7; // rbp
  __int64 *result; // rax
  __int64 *v9; // [rsp+20h] [rbp-28h] BYREF

  i = a3[2];
  v5 = a3;
  if ( *(_BYTE *)(i + 25) )
  {
    for ( i = a3[1]; !*(_BYTE *)(i + 25) && v5 == *(__int64 **)(i + 16); i = *(_QWORD *)(i + 8) )
      v5 = (__int64 *)i;
  }
  else
  {
    for ( j = *(_QWORD *)i; !*(_BYTE *)(j + 25); j = *(_QWORD *)j )
      i = j;
  }
  v7 = sub_180025A40(a1, a3);
  sub_180026420((__int64 ***)v7 + 7, &v9, *(__int64 **)v7[7], (__int64 *)v7[7]);
  j_j__o_free(v7[7]);
  sub_180074528((__int64)(v7 + 5));
  j_j__o_free(v7);
  result = a2;
  *a2 = i;
  return result;
}
