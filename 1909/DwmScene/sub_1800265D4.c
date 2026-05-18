/*
 * XREFs of sub_1800265D4 @ 0x1800265D4
 * Callers:
 *     sub_180026530 @ 0x180026530 (sub_180026530.c)
 *     sub_180040320 @ 0x180040320 (sub_180040320.c)
 * Callees:
 *     sub_180021828 @ 0x180021828 (sub_180021828.c)
 *     sub_180025B50 @ 0x180025B50 (sub_180025B50.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

__int64 *__fastcall sub_1800265D4(_QWORD *a1, __int64 *a2, __int64 *a3)
{
  __int64 i; // rbx
  __int64 *v5; // rax
  __int64 j; // rdx
  __int64 *v7; // rdi

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
  v7 = sub_180025B50(a1, a3);
  sub_180021828((__int64)(v7 + 4), 0);
  j_j__o_free(v7);
  *a2 = i;
  return a2;
}
