/*
 * XREFs of sub_18007EF04 @ 0x18007EF04
 * Callers:
 *     sub_18007EE60 @ 0x18007EE60 (sub_18007EE60.c)
 * Callees:
 *     sub_180025B50 @ 0x180025B50 (sub_180025B50.c)
 *     sub_180074770 @ 0x180074770 (sub_180074770.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

__int64 *__fastcall sub_18007EF04(_QWORD *a1, __int64 *a2, __int64 *a3)
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
  sub_180074770(v7 + 4);
  j_j__o_free(v7);
  *a2 = i;
  return a2;
}
