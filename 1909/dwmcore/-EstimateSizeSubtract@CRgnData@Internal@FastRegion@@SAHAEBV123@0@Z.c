/*
 * XREFs of ?EstimateSizeSubtract@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z @ 0x18006EDD0
 * Callers:
 *     ?AddToCurrentFrameInvalidRegion@CHwFullScreenRenderTarget@@MEAAJAEBVCRegion@@@Z @ 0x18006E580 (-AddToCurrentFrameInvalidRegion@CHwFullScreenRenderTarget@@MEAAJAEBVCRegion@@@Z.c)
 *     ?Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800BAD5C (-Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
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
  int i; // eax
  _DWORD *v21; // rcx
  int v22; // eax
  int v23; // eax
  int v24; // eax
  _DWORD *v25; // r9
  _DWORD *v26; // rcx
  int v27; // eax
  int v28; // eax
  _DWORD *v29; // r11
  int v30; // eax

  v2 = *(int *)a1;
  v3 = (_DWORD *)((char *)a1 + 12);
  v4 = *(int *)a2;
  v5 = *((_DWORD *)a2 + 3);
  v6 = &v3[2 * v2];
  v7 = (char *)a2 + 8 * v4 + 12;
  v8 = 8 * (v4 + v2) + 12;
  if ( *v3 < v5 )
  {
    v11 = v3 + 2;
    for ( i = v3[3] - v3[1] + 8; ; i = v29[3] - v29[1] + 8 )
    {
      v8 += i;
      if ( *v11 >= v5 )
        break;
      v29 = v11;
      v11 += 2;
      if ( v11 == v6 )
        return v8;
    }
    v9 = (char *)a2 + 20;
    v21 = v11;
    if ( *v11 > v5 )
    {
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
        if ( v17 > v15 )
        {
          if ( v9 == v7 )
          {
            v23 = v11[1] - *(v11 - 1) - ((_DWORD)v11 - 8);
            goto LABEL_24;
          }
          v13 = *((_DWORD *)v9 + 1);
          v10 = v9 - 8;
          v30 = v11[1] + v13 + -*((_DWORD *)v9 - 1) - *(v11 - 1) + 16;
        }
        else
        {
          v11 += 2;
          if ( v11 == v6 )
            return v8;
          if ( v9 == v7 )
          {
            v24 = v11[1] + 8 - *(v11 - 1);
            goto LABEL_25;
          }
          v13 = *((_DWORD *)v9 + 1);
          v10 = v9 - 8;
          v17 = *v11;
          v30 = v11[1] + v13 + -*((_DWORD *)v9 - 1) - *(v11 - 1) + 16;
        }
        v15 = *(_DWORD *)v9;
        v8 += v30;
        v16 = (int)v9;
      }
    }
    v11 += 2;
    if ( v11 == v6 )
      return v8;
    v10 = v9 - 8;
    v12 = v11[1] - *((_DWORD *)v9 - 1) - v21[1] - (_DWORD)v21;
    goto LABEL_4;
  }
  v9 = (char *)a2 + 20;
  if ( *v3 <= v5 )
  {
LABEL_3:
    v10 = v9 - 8;
    v11 = v3 + 2;
    v12 = v3[3] - *((_DWORD *)v9 - 1) - v3[1] - (_DWORD)v3;
LABEL_4:
    v13 = *((_DWORD *)v9 + 1);
    v14 = (_DWORD)v11 + v13 + (_DWORD)v9 + v12 - (_DWORD)v10;
LABEL_5:
    v8 += v14;
    goto LABEL_6;
  }
  do
  {
    v22 = *(_DWORD *)v9;
    if ( *v3 < *(_DWORD *)v9 )
      goto LABEL_3;
    v9 += 8;
    if ( *v3 <= v22 )
    {
      v11 = v3 + 2;
      if ( v9 == v7 )
      {
        v24 = v3[3] + 8 - v3[1];
        goto LABEL_25;
      }
      v13 = *((_DWORD *)v9 + 1);
      v10 = v9 - 8;
      v14 = v3[3] + v13 + -*((_DWORD *)v9 - 1) - v3[1] + 8 + 8;
      goto LABEL_5;
    }
  }
  while ( v9 != v7 );
  v11 = v3 + 2;
  v23 = v3[3] - v3[1] - (_DWORD)v3;
LABEL_24:
  v24 = (_DWORD)v11 + v23;
LABEL_25:
  v8 += v24;
  v25 = v11 + 2;
  if ( v25 != v6 )
  {
    v26 = v25 - 2;
    do
    {
      v27 = v26[3] - v26[1] - (_DWORD)v26;
      v26 += 2;
      v28 = (_DWORD)v25 + v27;
      v25 += 2;
      v8 += v28;
    }
    while ( v25 != v6 );
  }
  return v8;
}
