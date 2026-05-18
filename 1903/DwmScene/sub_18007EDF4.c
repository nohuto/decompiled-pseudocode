/*
 * XREFs of sub_18007EDF4 @ 0x18007EDF4
 * Callers:
 *     sub_18007ED50 @ 0x18007ED50 (sub_18007ED50.c)
 * Callees:
 *     sub_180025A40 @ 0x180025A40 (sub_180025A40.c)
 *     sub_180074660 @ 0x180074660 (sub_180074660.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 */

__int64 *__fastcall sub_18007EDF4(_QWORD *a1, __int64 *a2, __int64 *a3)
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
  v7 = sub_180025A40(a1, a3);
  sub_180074660(v7 + 4);
  j_j__o_free(v7);
  *a2 = i;
  return a2;
}
