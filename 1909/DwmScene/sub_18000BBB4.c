/*
 * XREFs of sub_18000BBB4 @ 0x18000BBB4
 * Callers:
 *     sub_18000B10C @ 0x18000B10C (sub_18000B10C.c)
 * Callees:
 *     sub_18000CCE4 @ 0x18000CCE4 (sub_18000CCE4.c)
 */

char *sub_18000BBB4(char *a1, char *a2, _QWORD a3, ...)
{
  char *v4; // rdi
  __int64 v5; // rax

  v4 = a1;
  sub_18000CCE4(a1);
  if ( a2 != v4 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( *(_WORD *)&v4[2 * v5] );
    v4 += 2 * v5;
  }
  return v4;
}
