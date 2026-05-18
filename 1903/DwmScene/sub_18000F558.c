/*
 * XREFs of sub_18000F558 @ 0x18000F558
 * Callers:
 *     sub_18012D623 @ 0x18012D623 (sub_18012D623.c)
 *     sub_18012D6E9 @ 0x18012D6E9 (sub_18012D6E9.c)
 *     sub_1801342B0 @ 0x1801342B0 (sub_1801342B0.c)
 *     sub_180134376 @ 0x180134376 (sub_180134376.c)
 * Callees:
 *     <none>
 */

char *__fastcall sub_18000F558(__int64 a1, char *a2, char *a3, char *a4)
{
  signed __int64 v4; // rdx

  if ( a2 != a3 )
  {
    v4 = a2 - a4;
    do
    {
      *(_QWORD *)a4 = 0LL;
      *((_QWORD *)a4 + 1) = 0LL;
      *(_QWORD *)a4 = *(_QWORD *)&a4[v4];
      *((_QWORD *)a4 + 1) = *(_QWORD *)&a4[v4 + 8];
      *(_QWORD *)&a4[v4] = 0LL;
      *(_QWORD *)&a4[v4 + 8] = 0LL;
      a4 += 16;
    }
    while ( &a4[v4] != a3 );
  }
  return a4;
}
