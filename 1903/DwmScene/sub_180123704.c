/*
 * XREFs of sub_180123704 @ 0x180123704
 * Callers:
 *     sub_180121BF8 @ 0x180121BF8 (sub_180121BF8.c)
 * Callees:
 *     unknown_libname_116 @ 0x18001141C (unknown_libname_116.c)
 *     sub_1801232FC @ 0x1801232FC (sub_1801232FC.c)
 *     sub_180124524 @ 0x180124524 (sub_180124524.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 */

__int64 **__fastcall sub_180123704(__int64 **a1, __int64 **a2, __int64 *a3, __int64 *a4)
{
  __int64 *v5; // rdi
  __int64 *v8; // rbp

  v5 = a3;
  if ( a3 == (__int64 *)**a1 && a4 == *a1 )
  {
    sub_1801232FC((__int64)a1);
    *a2 = *a1;
  }
  else
  {
    if ( a3 != a4 )
    {
      do
      {
        v8 = (__int64 *)*v5;
        *(_QWORD *)v5[1] = *v5;
        *(_QWORD *)(*v5 + 8) = v5[1];
        a1[1] = (__int64 *)((char *)a1[1] - 1);
        sub_180124524(v5 + 6);
        unknown_libname_116(v5 + 2);
        j_j__o_free(v5);
        v5 = v8;
      }
      while ( v8 != a4 );
    }
    *a2 = a4;
  }
  return a2;
}
