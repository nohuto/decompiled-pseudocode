/*
 * XREFs of sub_180106F90 @ 0x180106F90
 * Callers:
 *     sub_1801068B8 @ 0x1801068B8 (sub_1801068B8.c)
 * Callees:
 *     memmove @ 0x180125A9C (memmove.c)
 */

void *__fastcall sub_180106F90(__int128 *a1, __int128 *a2, float *a3, float *a4)
{
  float *v5; // r8
  __int128 *v6; // rax
  __int128 v7; // xmm0
  float *v8; // rsi
  _OWORD *v9; // rcx
  float *v10; // rdx
  _OWORD *v11; // rbx
  __int128 v12; // xmm0
  void *result; // rax
  __int128 v14; // xmm0
  size_t v15; // rdi

  v5 = a4;
  if ( a1 != a2 )
  {
    v6 = a1;
    do
    {
      v7 = *v6++;
      *(_OWORD *)v5 = v7;
      v5 += 4;
    }
    while ( v6 != a2 );
  }
  v8 = v5 - 4;
  *a1 = *a2;
  v9 = a1 + 1;
  v10 = (float *)(a2 + 1);
  while ( 1 )
  {
    v11 = v9 + 1;
    if ( *a4 <= *v10 )
      break;
    v12 = *(_OWORD *)v10;
    v10 += 4;
    *v9 = v12;
    if ( v10 == a3 )
      return memmove(v9 + 1, a4, (char *)v5 - (char *)a4);
LABEL_9:
    ++v9;
  }
  v14 = *(_OWORD *)a4;
  a4 += 4;
  *v9 = v14;
  if ( a4 != v8 )
    goto LABEL_9;
  v15 = (char *)a3 - (char *)v10;
  result = memmove(v9 + 1, v10, v15);
  *(_OWORD *)((char *)v11 + v15) = *(_OWORD *)v8;
  return result;
}
