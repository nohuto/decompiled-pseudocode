/*
 * XREFs of sub_1801070F0 @ 0x1801070F0
 * Callers:
 *     sub_1801068B8 @ 0x1801068B8 (sub_1801068B8.c)
 * Callees:
 *     memmove @ 0x180125A9C (memmove.c)
 */

void *__fastcall sub_1801070F0(float *Src, __int128 *a2, __int128 *a3, char *a4)
{
  char *v4; // rbx
  __int128 *v7; // r8
  __int128 v8; // xmm0
  __int128 v9; // xmm0
  __int128 *v10; // rax
  float *v11; // r8
  float *v12; // rdx
  __int128 *v13; // rcx
  __int128 v14; // xmm0
  __int128 *v15; // rcx
  void *result; // rax
  __int128 *v17; // rcx

  v4 = a4;
  if ( a2 != a3 )
  {
    v7 = a2;
    do
    {
      v8 = *v7++;
      *(_OWORD *)a4 = v8;
      a4 += 16;
    }
    while ( v7 != a3 );
  }
  v9 = *(a2 - 1);
  v10 = a3 - 1;
  v11 = (float *)(a4 - 16);
  v12 = (float *)(a2 - 2);
  *v10 = v9;
  while ( 1 )
  {
    while ( 1 )
    {
      v13 = --v10;
      if ( *v12 > *v11 )
        break;
      v14 = *(_OWORD *)v11;
      v11 -= 4;
      *v13 = v14;
      if ( v4 == (char *)v11 )
      {
        v15 = v13 - 1;
        *v15 = *(_OWORD *)v12;
        result = memmove((char *)v15 - ((char *)v12 - (char *)Src), Src, (char *)v12 - (char *)Src);
        *(_OWORD *)Src = *(_OWORD *)v4;
        return result;
      }
    }
    *v13 = *(_OWORD *)v12;
    if ( Src == v12 )
      break;
    v12 -= 4;
  }
  v17 = v13 - 1;
  *v17 = *(_OWORD *)v11;
  return memmove((char *)v17 - ((char *)v11 - v4), v4, (char *)v11 - v4);
}
