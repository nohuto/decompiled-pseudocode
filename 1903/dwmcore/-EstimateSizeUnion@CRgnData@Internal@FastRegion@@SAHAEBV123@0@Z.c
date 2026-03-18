/*
 * XREFs of ?EstimateSizeUnion@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z @ 0x180090540
 * Callers:
 *     ?AddDirtyRegion@CBitmapRealization@@UEAAJAEBVCRegion@@@Z @ 0x18008D750 (-AddDirtyRegion@CBitmapRealization@@UEAAJAEBVCRegion@@@Z.c)
 *     ?AddDirtyRegion@CGdiSpriteBitmap@@AEAAJAEAVCRegion@@_N@Z @ 0x18008D894 (-AddDirtyRegion@CGdiSpriteBitmap@@AEAAJAEAVCRegion@@_N@Z.c)
 *     ?ProcessPresentHistoryToken@CGdiSpriteBitmap@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x18008F490 (-ProcessPresentHistoryToken@CGdiSpriteBitmap@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?AddToCurrentFrameInvalidRegion@CHwFullScreenRenderTarget@@MEAAJAEBVCRegion@@@Z @ 0x180090B10 (-AddToCurrentFrameInvalidRegion@CHwFullScreenRenderTarget@@MEAAJAEBVCRegion@@@Z.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800B7904 (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ??$AppendRects@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@CRegion@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x1800B7B28 (--$AppendRects@V-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@CRegion.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FastRegion::Internal::CRgnData::EstimateSizeUnion(
        const struct FastRegion::Internal::CRgnData *a1,
        const struct FastRegion::Internal::CRgnData *a2)
{
  __int64 v2; // r8
  _DWORD *v3; // r9
  __int64 v4; // rdx
  char *v5; // rsi
  int v6; // r10d
  char *v7; // rax
  int v8; // ebx
  _DWORD *v9; // rdi
  char *v10; // rbp
  unsigned int v11; // r8d
  int *v12; // r14
  char *v13; // rax
  unsigned int v14; // r8d
  int v15; // ecx
  int *v16; // r9
  char *v17; // rdx
  bool v18; // cc
  int v19; // r10d
  int *v20; // rbx
  int v21; // edi
  int *v22; // r9
  int *v23; // rcx
  int v24; // eax
  int v25; // eax
  int v26; // r11d
  int v27; // esi
  char *v28; // r15
  char *v29; // rdx
  int v30; // ecx
  int v31; // ecx
  char *v32; // rax
  int v34; // ecx
  char *v35; // r11
  int v36; // ecx
  int v37; // ecx
  char *v38; // rdx
  int v39; // ecx
  int v40; // ecx
  int v41; // eax
  int v42; // ecx

  v2 = *(int *)a1;
  v3 = (_DWORD *)((char *)a2 + 12);
  v4 = *(int *)a2;
  v5 = (char *)a1 + 12;
  v6 = *v3;
  v7 = (char *)a1 + 12;
  v8 = *((_DWORD *)a1 + 3);
  v9 = v3;
  v10 = (char *)a1 + 8 * v2 + 12;
  v11 = 8 * (v4 + v2) + 12;
  v12 = &v3[2 * v4];
  if ( v8 < *v3 )
  {
    v13 = (char *)a1 + 20;
    v14 = *((_DWORD *)a1 + 6) - *((_DWORD *)a1 + 4) - 12 + 20 + v11;
    v15 = *(_DWORD *)v13;
    if ( *(_DWORD *)v13 < v6 )
    {
      while ( 1 )
      {
        v35 = v13;
        v13 += 8;
        if ( v13 == v10 )
          break;
        v14 += *((_DWORD *)v35 + 3) - *((_DWORD *)v35 + 1) + 8;
        v15 = *(_DWORD *)v13;
        if ( *(_DWORD *)v13 >= v6 )
          goto LABEL_3;
      }
      v41 = v3[3];
      v16 = v3 + 2;
      v11 = (_DWORD)v16 + v41 - v9[1] - (_DWORD)v9 + v14;
      goto LABEL_6;
    }
LABEL_3:
    v16 = v3 + 2;
    v17 = v13;
    v18 = v15 <= v6;
    v19 = v16[1];
    v20 = v16 - 2;
    if ( v18 )
    {
      v13 += 8;
      v21 = (int)v16;
      if ( v13 == v10 )
      {
        v11 = v19 - *(v16 - 1) + 8 + v14;
LABEL_6:
        v22 = v16 + 2;
        if ( v22 != v12 )
        {
          v23 = v22 - 2;
          do
          {
            v24 = v23[3] - v23[1] - (_DWORD)v23;
            v23 += 2;
            v25 = (_DWORD)v22 + v24;
            v22 += 2;
            v11 += v25;
          }
          while ( v22 != v12 );
        }
        return v11;
      }
      v11 = v19 + (_DWORD)v13 + *((_DWORD *)v13 + 1) - *(v16 - 1) - *((_DWORD *)v17 + 1) - (_DWORD)v17 + 8 + v14;
LABEL_12:
      v26 = *v16;
LABEL_13:
      v27 = *(_DWORD *)v13;
      while ( 1 )
      {
        v28 = v13;
        if ( v27 < v26 )
        {
          v13 += 8;
          if ( v13 != v10 )
          {
            v11 += v19 + v21 + *((_DWORD *)v28 + 3) - v20[1] - *((_DWORD *)v28 + 1) - (_DWORD)v20 + 8;
            goto LABEL_13;
          }
          v11 += (_DWORD)v16 + v16[1] - v20[1] - (_DWORD)v20;
          goto LABEL_6;
        }
        v16 += 2;
        if ( v27 <= v26 )
          break;
        v29 = v13 - 8;
        if ( v16 == v12 )
          goto LABEL_17;
        v19 = v16[1];
        v20 = v16 - 2;
        v26 = *v16;
        v21 = (int)v16;
        v11 += v19 + *((_DWORD *)v13 + 1) + -*(v16 - 1) - *((_DWORD *)v13 - 1) + 16;
      }
      v13 += 8;
      if ( v13 != v10 )
      {
        v29 = v13 - 8;
        if ( v16 == v12 )
        {
LABEL_17:
          v30 = *((_DWORD *)v13 + 1) - *((_DWORD *)v29 + 1) - (_DWORD)v29;
          goto LABEL_18;
        }
        v19 = v16[1];
        v20 = v16 - 2;
        v11 += v19 + *((_DWORD *)v13 + 1) + -*(v16 - 1) - *((_DWORD *)v13 - 1) + 16;
        goto LABEL_11;
      }
      if ( v16 == v12 )
        return v11;
      v11 += v16[1] - *(v16 - 1) + 8;
      goto LABEL_6;
    }
    v11 = v19 + *((_DWORD *)v13 + 1) - *(v16 - 1) - *((_DWORD *)v13 - 1) + 16 + v14;
LABEL_11:
    v21 = (int)v16;
    goto LABEL_12;
  }
  v16 = v3 + 2;
  if ( v8 <= v6 || (v36 = *v16, v11 += v16[1] - *(v16 - 1) + 8, v8 < *v16) )
  {
LABEL_22:
    v20 = v16 - 2;
    v34 = *((_DWORD *)v7 + 3) - *(v16 - 1);
    v13 = v7 + 8;
    v19 = v16[1];
    v11 += v19 + (_DWORD)v13 + v34 - *((_DWORD *)v5 + 1) - (_DWORD)v5 + 8;
    goto LABEL_11;
  }
  while ( 1 )
  {
    v16 += 2;
    if ( v8 <= v36 )
      break;
    if ( v16 == v12 )
    {
      v37 = *((_DWORD *)v7 + 3);
      v13 = v7 + 8;
      v30 = v37 - *((_DWORD *)v5 + 1) - (_DWORD)v5;
      goto LABEL_18;
    }
    v36 = *v16;
    v11 += v16[1] - *(v16 - 1) + 8;
    if ( v8 < *v16 )
      goto LABEL_22;
  }
  v42 = *((_DWORD *)v5 + 3);
  v13 = v7 + 8;
  if ( v16 != v12 )
  {
    v20 = v16 - 2;
    v19 = v16[1];
    v11 += (_DWORD)v13 + v19 + v42 - *(v16 - 1) - *((_DWORD *)v5 + 1) - (_DWORD)v5 + 8;
    goto LABEL_11;
  }
  v30 = v42 - *((_DWORD *)v5 + 1) - (_DWORD)v5;
LABEL_18:
  v31 = (_DWORD)v13 + v30;
  v32 = v13 + 8;
  v11 += v31;
  if ( v32 != v10 )
  {
    v38 = v32 - 8;
    do
    {
      v39 = *((_DWORD *)v38 + 3) - *((_DWORD *)v38 + 1) - (_DWORD)v38;
      v38 += 8;
      v40 = (_DWORD)v32 + v39;
      v32 += 8;
      v11 += v40;
    }
    while ( v32 != v10 );
  }
  return v11;
}
