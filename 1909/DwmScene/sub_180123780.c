/*
 * XREFs of sub_180123780 @ 0x180123780
 * Callers:
 *     sub_1801236DC @ 0x1801236DC (sub_1801236DC.c)
 * Callees:
 *     unknown_libname_116 @ 0x18001146C (unknown_libname_116.c)
 *     sub_180025B50 @ 0x180025B50 (sub_180025B50.c)
 *     sub_180124634 @ 0x180124634 (sub_180124634.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

__int64 *__fastcall sub_180123780(_QWORD *a1, __int64 *a2, __int64 *a3)
{
  __int64 i; // rbx
  __int64 *v5; // rax
  __int64 j; // rdx
  __int64 *v7; // rsi

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
  sub_180124634(v7 + 8);
  unknown_libname_116(v7 + 4);
  j_j__o_free(v7);
  *a2 = i;
  return a2;
}
