/*
 * XREFs of sub_18000F5A8 @ 0x18000F5A8
 * Callers:
 *     sub_18012D733 @ 0x18012D733 (sub_18012D733.c)
 *     sub_18012D7F9 @ 0x18012D7F9 (sub_18012D7F9.c)
 *     sub_1801343C0 @ 0x1801343C0 (sub_1801343C0.c)
 *     sub_180134486 @ 0x180134486 (sub_180134486.c)
 * Callees:
 *     <none>
 */

char *__fastcall sub_18000F5A8(__int64 a1, char *a2, char *a3, char *a4)
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
