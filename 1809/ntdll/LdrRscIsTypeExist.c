/*
 * XREFs of LdrRscIsTypeExist @ 0x18003E220
 * Callers:
 *     LdrIsResItemExist @ 0x18003E044 (LdrIsResItemExist.c)
 * Callees:
 *     _wcsicmp @ 0x1800918F0 (_wcsicmp.c)
 */

__int64 __fastcall LdrRscIsTypeExist(unsigned int *a1, const wchar_t *a2, __int64 a3, _DWORD *a4)
{
  char v7; // r15
  int v8; // ecx
  _DWORD *v9; // rdx
  int v11; // ecx
  _DWORD *v12; // rdx
  __int64 v14; // rcx
  int v15; // ecx
  const wchar_t *v16; // rdi
  int v17; // r14d
  int v18; // r12d
  __int64 v19; // rax
  const wchar_t *v20; // r14
  char v21; // al
  __int64 v22; // rcx
  int v23; // ecx

  if ( !a1 || !a4 )
    return 3221225485LL;
  v7 = 1;
  if ( (unsigned __int64)a2 >= 0x10000 )
  {
    v18 = a1[22] >> 1;
    v19 = a1[21];
    v20 = (const wchar_t *)((char *)a1 + v19);
    if ( (unsigned int)(v19 + (_DWORD)a1) > 0x10000 )
    {
      while ( v18 > 0 )
      {
        if ( !*v20 )
          goto LABEL_39;
        if ( !wcsicmp(a2, v20) )
          break;
        v22 = -1LL;
        do
          ++v22;
        while ( v20[v22] );
        v23 = v22 + 1;
        v20 += v23;
        v18 -= v23;
      }
    }
    if ( !*v20 || (v21 = 1, v18 <= 0) )
LABEL_39:
      v21 = 0;
    if ( !v21 )
      *a4 |= 0x40000u;
    v17 = a1[26] >> 1;
    v16 = (const wchar_t *)((char *)a1 + a1[25]);
    if ( (unsigned int)v16 > 0x10000 )
    {
      while ( v17 > 0 )
      {
        if ( !*v16 )
          goto LABEL_33;
        if ( !wcsicmp(a2, v16) )
          break;
        v14 = -1LL;
        do
          ++v14;
        while ( v16[v14] );
        v15 = v14 + 1;
        v16 += v15;
        v17 -= v15;
      }
    }
    if ( !*v16 || v17 <= 0 )
LABEL_33:
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
