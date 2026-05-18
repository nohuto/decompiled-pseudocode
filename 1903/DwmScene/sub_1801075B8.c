/*
 * XREFs of sub_1801075B8 @ 0x1801075B8
 * Callers:
 *     sub_180106BA8 @ 0x180106BA8 (sub_180106BA8.c)
 * Callees:
 *     <none>
 */

char *__fastcall sub_1801075B8(__int128 *a1, __int128 *a2, __int128 *a3)
{
  __int128 *v4; // rax
  __int128 *i; // r9
  __int128 v6; // xmm1
  __int128 *v7; // rax
  __int128 *j; // rcx
  __int128 v9; // xmm1
  __int128 *v10; // rax
  __int128 *k; // rcx
  __int128 v12; // xmm1

  v4 = a2;
  for ( i = a1; i != v4; *v4 = v6 )
  {
    if ( i == --v4 )
      break;
    v6 = *i;
    *i++ = *v4;
  }
  v7 = a3;
  for ( j = a2; j != v7; *v7 = v9 )
  {
    if ( j == --v7 )
      break;
    v9 = *j;
    *j++ = *v7;
  }
  v10 = a3;
  for ( k = a1; k != v10; *v10 = v12 )
  {
    if ( k == --v10 )
      break;
    v12 = *k;
    *k++ = *v10;
  }
  return (char *)a1 + (((char *)a3 - (char *)a2) & 0xFFFFFFFFFFFFFFF0uLL);
}
