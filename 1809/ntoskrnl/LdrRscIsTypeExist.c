/*
 * XREFs of LdrRscIsTypeExist @ 0x1400F3DB8
 * Callers:
 *     LdrIsResItemExist @ 0x1400F3D38 (LdrIsResItemExist.c)
 * Callees:
 *     _wcsicmp @ 0x140195A70 (_wcsicmp.c)
 */

__int64 __fastcall LdrRscIsTypeExist(unsigned int *a1, const wchar_t *a2, __int64 a3, _DWORD *a4)
{
  char v7; // r15
  int v8; // ecx
  _DWORD *v9; // rdx
  int v11; // ecx
  _DWORD *v12; // rdx
  int v14; // r12d
  __int64 v15; // rax
  const wchar_t *v16; // r14
  __int64 v17; // rcx
  int v18; // ecx
  char v19; // al
  int v20; // r14d
  const wchar_t *v21; // rdi
  __int64 v22; // rcx
  int v23; // ecx

  if ( !a1 || !a4 )
    return 3221225485LL;
  v7 = 1;
  if ( (unsigned __int64)a2 >= 0x10000 )
  {
    v14 = a1[22] >> 1;
    v15 = a1[21];
    v16 = (const wchar_t *)((char *)a1 + v15);
    if ( (unsigned int)(v15 + (_DWORD)a1) > 0x10000 )
    {
      while ( v14 > 0 )
      {
        if ( !*v16 )
          goto LABEL_25;
        if ( !wcsicmp(a2, v16) )
          break;
        v17 = -1LL;
        do
          ++v17;
        while ( v16[v17] );
        v18 = v17 + 1;
        v16 += v18;
        v14 -= v18;
      }
    }
    if ( !*v16 || (v19 = 1, v14 <= 0) )
LABEL_25:
      v19 = 0;
    if ( !v19 )
      *a4 |= 0x40000u;
    v20 = a1[26] >> 1;
    v21 = (const wchar_t *)((char *)a1 + a1[25]);
    if ( (unsigned int)v21 > 0x10000 )
    {
      while ( v20 > 0 )
      {
        if ( !*v21 )
          goto LABEL_37;
        if ( !wcsicmp(a2, v21) )
          break;
        v22 = -1LL;
        do
          ++v22;
        while ( v21[v22] );
        v23 = v22 + 1;
        v21 += v23;
        v20 -= v23;
      }
    }
    if ( !*v21 || v20 <= 0 )
LABEL_37:
      v7 = 0;
    if ( !v7 )
      *a4 |= 0x20000u;
  }
  else
  {
    v8 = a1[24] >> 2;
    v9 = (unsigned int *)((char *)a1 + a1[23]);
    do
    {
      if ( --v8 < 0 )
        break;
    }
    while ( (_DWORD)a2 - *v9++ );
    if ( v8 < 0 )
      *a4 |= 0x40000u;
    v11 = a1[28] >> 2;
    v12 = (unsigned int *)((char *)a1 + a1[27]);
    do
    {
      if ( --v11 < 0 )
        break;
    }
    while ( (_DWORD)a2 - *v12++ );
    if ( v11 < 0 )
      *a4 |= 0x20000u;
  }
  return 0LL;
}
