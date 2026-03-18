/*
 * XREFs of ?nCalcJustInArray@@YAKPEAPEAIGPEAXHI@Z @ 0x1C029DBA8
 * Callers:
 *     GreGetCharacterPlacementW @ 0x1C029DD44 (GreGetCharacterPlacementW.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C00800BC (PALLOCMEM2.c)
 */

__int64 __fastcall nCalcJustInArray(unsigned int **a1, unsigned __int16 a2, char *a3, int a4, unsigned int a5)
{
  unsigned __int64 v6; // r8
  bool v7; // zf
  unsigned __int64 v10; // r9
  char *v12; // rbp
  char *v13; // rsi
  int v14; // r15d
  unsigned int v15; // edi
  char *v16; // rdx
  unsigned int v17; // ecx
  unsigned int v18; // ecx
  unsigned int *v19; // rax
  unsigned int *v20; // r8
  char *i; // rcx
  char *j; // rdx

  v6 = a5;
  v7 = a4 == 0;
  v10 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0;
  v15 = 0;
  v16 = a3;
  if ( v7 )
  {
    v12 = &a3[2 * a5];
    if ( a3 > v12 )
      v6 = 0LL;
    if ( !v6 )
      goto LABEL_28;
    do
    {
      v7 = *(_WORD *)v16 == a2;
      v18 = v15 + 1;
      v16 += 2;
      if ( !v7 )
        v18 = v15;
      ++v10;
      v15 = v18;
    }
    while ( v10 < v6 );
  }
  else
  {
    v13 = &a3[4 * a5];
    v14 = a2;
    if ( a3 > v13 )
      v6 = 0LL;
    if ( !v6 )
      goto LABEL_28;
    do
    {
      v7 = *(_DWORD *)v16 == a2;
      v17 = v15 + 1;
      v16 += 4;
      if ( !v7 )
        v17 = v15;
      ++v10;
      v15 = v17;
    }
    while ( v10 < v6 );
  }
  if ( !v15 || (v19 = (unsigned int *)PALLOCMEM2(4 * v15, 2037147463LL, 1)) == 0LL )
  {
LABEL_28:
    *a1 = 0LL;
    return 0LL;
  }
  v20 = v19;
  if ( a4 )
  {
    for ( i = a3; i < v13; i += 4 )
    {
      if ( *(_DWORD *)i == v14 )
        *v20++ = (i - a3) >> 2;
    }
  }
  else
  {
    for ( j = a3; j < v12; j += 2 )
    {
      if ( *(_WORD *)j == a2 )
        *v20++ = (j - a3) >> 1;
    }
  }
  *a1 = v19;
  return v15;
}
