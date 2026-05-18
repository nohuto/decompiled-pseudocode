/*
 * XREFs of sub_180080F50 @ 0x180080F50
 * Callers:
 *     sub_180080378 @ 0x180080378 (sub_180080378.c)
 * Callees:
 *     <none>
 */

char *__fastcall sub_180080F50(__int64 *a1, __int64 *a2, __int64 *a3)
{
  __int64 *v5; // r9
  __int64 *i; // r10
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 *v9; // rdx
  __int64 *j; // r9
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 *v13; // rdx
  __int64 *k; // r9
  __int64 v15; // rcx
  __int64 v16; // rcx

  v5 = a2;
  for ( i = a1; i != v5; v5[1] = v8 )
  {
    v5 -= 2;
    if ( i == v5 )
      break;
    v7 = *i;
    *i = *v5;
    *v5 = v7;
    v8 = i[1];
    i[1] = v5[1];
    i += 2;
  }
  v9 = a3;
  for ( j = a2; j != v9; v9[1] = v12 )
  {
    v9 -= 2;
    if ( j == v9 )
      break;
    v11 = *j;
    *j = *v9;
    *v9 = v11;
    v12 = j[1];
    j[1] = v9[1];
    j += 2;
  }
  v13 = a3;
  for ( k = a1; k != v13; v13[1] = v16 )
  {
    v13 -= 2;
    if ( k == v13 )
      break;
    v15 = *k;
    *k = *v13;
    *v13 = v15;
    v16 = k[1];
    k[1] = v13[1];
    k += 2;
  }
  return (char *)a1 + (((char *)a3 - (char *)a2) & 0xFFFFFFFFFFFFFFF0uLL);
}
