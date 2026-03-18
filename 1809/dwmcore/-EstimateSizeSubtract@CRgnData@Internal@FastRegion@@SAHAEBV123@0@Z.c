/*
 * XREFs of ?EstimateSizeSubtract@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z @ 0x1800A6D6C
 * Callers:
 *     ?Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800A0628 (-Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?OccludeRegions@CMegaRectCollection@@AEAAJXZ @ 0x1800A61E4 (-OccludeRegions@CMegaRectCollection@@AEAAJXZ.c)
 *     ?AddToCurrentFrameInvalidRegion@CHwFullScreenRenderTarget@@MEAAJAEBVCRegion@@@Z @ 0x1800A6420 (-AddToCurrentFrameInvalidRegion@CHwFullScreenRenderTarget@@MEAAJAEBVCRegion@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FastRegion::Internal::CRgnData::EstimateSizeSubtract(
        const struct FastRegion::Internal::CRgnData *a1,
        const struct FastRegion::Internal::CRgnData *a2)
{
  __int64 v2; // r8
  _DWORD *v3; // rbp
  __int64 v4; // rcx
  int v5; // r10d
  _DWORD *v6; // rsi
  char *v7; // r14
  unsigned int v8; // r8d
  char *v9; // rdx
  char *v10; // r10
  _DWORD *v11; // r9
  int v12; // eax
  int v13; // r11d
  int v14; // eax
  int v15; // ebp
  int v16; // ebx
  int v17; // edi
  _DWORD *v18; // r15
  int v20; // eax
  int v21; // eax
  _DWORD *v22; // r9
  _DWORD *v23; // rcx
  int v24; // eax
  int v25; // eax
  int i; // eax
  _DWORD *v27; // rcx
  _DWORD *v28; // rcx
  int v29; // eax
  _DWORD *v30; // r11
  int v31; // eax

  v2 = *(int *)a1;
  v3 = (_DWORD *)((char *)a1 + 12);
  v4 = *(int *)a2;
  v5 = *((_DWORD *)a2 + 3);
  v6 = &v3[2 * v2];
  v7 = (char *)a2 + 8 * v4 + 12;
  v8 = 8 * (v4 + v2) + 12;
  if ( *v3 >= v5 )
  {
    v9 = (char *)a2 + 20;
    if ( *v3 > v5 )
    {
      while ( 1 )
      {
        v20 = *(_DWORD *)v9;
        if ( *v3 < *(_DWORD *)v9 )
          break;
        v9 += 8;
        if ( *v3 <= v20 )
        {
          v11 = v3 + 2;
          if ( v9 == v7 )
          {
            v21 = v3[3] + 8 - v3[1];
            goto LABEL_16;
          }
          v13 = *((_DWORD *)v9 + 1);
          v10 = v9 - 8;
          v14 = v3[3] + v13 + -*((_DWORD *)v9 - 1) - v3[1] + 8 + 8;
          goto LABEL_5;
        }
        if ( v9 == v7 )
        {
          v11 = v3 + 2;
          v21 = v3[3] - v3[1] + 8;
          goto LABEL_16;
        }
      }
    }
    v10 = v9 - 8;
    v11 = v3 + 2;
    v12 = v3[3] - *((_DWORD *)v9 - 1) - v3[1] - (_DWORD)v3;
    goto LABEL_4;
  }
  v11 = v3 + 2;
  for ( i = v3[3] - v3[1] + 8; ; i = v30[3] - v30[1] + 8 )
  {
    v8 += i;
    if ( *v11 >= v5 )
      break;
    v30 = v11;
    v11 += 2;
    if ( v11 == v6 )
      return v8;
  }
  v9 = (char *)a2 + 20;
  v27 = v11;
  if ( *v11 <= v5 )
  {
    v11 += 2;
    if ( v11 == v6 )
      return v8;
    v10 = v9 - 8;
    v12 = v11[1] - *((_DWORD *)v9 - 1) - v27[1] - (_DWORD)v27;
LABEL_4:
    v13 = *((_DWORD *)v9 + 1);
    v14 = (_DWORD)v11 + v13 + (_DWORD)v9 + v12 - (_DWORD)v10;
LABEL_5:
    v8 += v14;
    goto LABEL_6;
  }
  v10 = v9 - 8;
  v13 = *((_DWORD *)v9 + 1);
  v8 += v13 + v11[1] - *((_DWORD *)v9 - 1) - *(v11 - 1) + 16;
LABEL_6:
  v15 = *(_DWORD *)v9;
  v16 = (int)v9;
LABEL_7:
  v17 = *v11;
  while ( 1 )
  {
    v18 = v11;
    if ( v17 < v15 )
    {
      v11 += 2;
      if ( v11 == v6 )
        return v8;
      v8 += v13 + v16 + v18[3] - *((_DWORD *)v10 + 1) - v18[1] - (_DWORD)v10 + 8;
      goto LABEL_7;
    }
    v9 += 8;
    if ( v17 <= v15 )
      break;
    v28 = v11 - 2;
    v29 = (int)v11;
    if ( v9 == v7 )
      goto LABEL_29;
    v13 = *((_DWORD *)v9 + 1);
    v10 = v9 - 8;
    v31 = v13 + -*((_DWORD *)v9 - 1) - *(v11 - 1) + 16;
LABEL_39:
    v16 = (int)v9;
    v15 = *(_DWORD *)v9;
    v8 += v11[1] + v31;
  }
  v11 += 2;
  if ( v11 == v6 )
    return v8;
  v28 = v11 - 2;
  if ( v9 != v7 )
  {
    v13 = *((_DWORD *)v9 + 1);
    v10 = v9 - 8;
    v17 = *v11;
    v31 = v13 + -*((_DWORD *)v9 - 1) - *(v11 - 1) + 16;
    goto LABEL_39;
  }
  v29 = (int)v11;
LABEL_29:
  v21 = v11[1] + v29 - v28[1] - (_DWORD)v28;
LABEL_16:
  v8 += v21;
  v22 = v11 + 2;
  if ( v22 != v6 )
  {
    v23 = v22 - 2;
    do
    {
      v24 = v23[3] - v23[1] - (_DWORD)v23;
      v23 += 2;
      v25 = (_DWORD)v22 + v24;
      v22 += 2;
      v8 += v25;
    }
    while ( v22 != v6 );
  }
  return v8;
}
