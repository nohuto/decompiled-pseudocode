/*
 * XREFs of ?EstimateSizeUnion@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z @ 0x1800A8078
 * Callers:
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18003E5E0 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?AddToCurrentFrameInvalidRegion@CHwFullScreenRenderTarget@@MEAAJAEBVCRegion@@@Z @ 0x1800A6420 (-AddToCurrentFrameInvalidRegion@CHwFullScreenRenderTarget@@MEAAJAEBVCRegion@@@Z.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800A6FB4 (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ??$AppendRects@UtagRECT@@@CRegion@@QEAAJPEBUtagRECT@@I@Z @ 0x1800A7240 (--$AppendRects@UtagRECT@@@CRegion@@QEAAJPEBUtagRECT@@I@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FastRegion::Internal::CRgnData::EstimateSizeUnion(
        const struct FastRegion::Internal::CRgnData *a1,
        const struct FastRegion::Internal::CRgnData *a2)
{
  __int64 v2; // r8
  _DWORD *v3; // r14
  __int64 v4; // rcx
  char *v5; // r9
  char *v6; // rbx
  _DWORD *v7; // rbp
  int v8; // eax
  int v9; // r8d
  char *v10; // rdi
  unsigned int v11; // edx
  _DWORD *v12; // r10
  int i; // eax
  int v14; // ebx
  char *v15; // r9
  _DWORD *v16; // rcx
  char *v17; // r11
  int v18; // r8d
  char *v19; // r9
  char *v20; // rax
  int v21; // ecx
  int v22; // ecx
  int v23; // r14d
  int v24; // esi
  _DWORD *v25; // r15
  int v26; // eax
  int v27; // eax
  int v28; // eax
  _DWORD *v29; // r10
  _DWORD *v31; // r11
  int v32; // eax
  int v33; // eax
  int v34; // eax
  _DWORD *v35; // rcx
  int v36; // eax
  int v37; // eax
  int v38; // eax
  int v39; // eax

  v2 = *(int *)a1;
  v3 = (_DWORD *)((char *)a1 + 12);
  v4 = *(int *)a2;
  v5 = (char *)a2 + 12;
  v6 = (char *)a2 + 12;
  v7 = &v3[2 * v2];
  v8 = v4 + v2;
  v9 = *((_DWORD *)a2 + 3);
  v10 = (char *)a2 + 8 * v4 + 12;
  v11 = 8 * v8 + 12;
  if ( *v3 >= v9 )
  {
    v15 = v5 + 8;
    if ( *v3 > v9 )
    {
      while ( 1 )
      {
        v34 = *(_DWORD *)v15;
        v11 += *((_DWORD *)v15 + 1) - *((_DWORD *)v15 - 1) + 8;
        if ( *v3 < *(_DWORD *)v15 )
          goto LABEL_25;
        v15 += 8;
        if ( *v3 <= v34 )
          break;
        if ( v15 == v10 )
        {
          v12 = v3 + 2;
          v27 = v3[3] - v3[1] - (_DWORD)v3;
LABEL_19:
          v28 = (_DWORD)v12 + v27;
LABEL_20:
          v11 += v28;
          v29 = v12 + 2;
          if ( v29 != v7 )
          {
            v35 = v29 - 2;
            do
            {
              v36 = v35[3] - v35[1] - (_DWORD)v35;
              v35 += 2;
              v37 = (_DWORD)v29 + v36;
              v29 += 2;
              v11 += v37;
            }
            while ( v29 != v7 );
          }
          return v11;
        }
      }
      v12 = v3 + 2;
      if ( v15 != v10 )
      {
        v14 = *((_DWORD *)v15 + 1);
        v17 = v15 - 8;
        v32 = v3[3] + v14 + -*((_DWORD *)v15 - 1) - v3[1] + 8 + 8;
        goto LABEL_26;
      }
      v28 = v3[3] + 8 - v3[1];
      goto LABEL_20;
    }
LABEL_25:
    v17 = v15 - 8;
    v12 = v3 + 2;
    v14 = *((_DWORD *)v15 + 1);
    v32 = v14 + v3[3] - *((_DWORD *)v15 - 1) - v3[1] + 16;
LABEL_26:
    v11 += v32;
LABEL_12:
    v18 = (int)v15;
  }
  else
  {
    v12 = v3 + 2;
    for ( i = v3[3] - v3[1] + 8; ; i = v31[3] - v31[1] + 8 )
    {
      v11 += i;
      if ( *v12 >= v9 )
        break;
      v31 = v12;
      v12 += 2;
      if ( v12 == v7 )
      {
        v39 = *((_DWORD *)v5 + 3);
        v15 = v5 + 8;
        v38 = v39 - *((_DWORD *)v6 + 1) - (_DWORD)v6;
        goto LABEL_43;
      }
    }
    v14 = *((_DWORD *)v5 + 3);
    v15 = v5 + 8;
    v16 = v12;
    v17 = v15 - 8;
    if ( *v12 > v9 )
    {
      v11 += v14 + v12[1] - *((_DWORD *)v15 - 1) - *(v12 - 1) + 16;
      goto LABEL_12;
    }
    v12 += 2;
    v18 = (int)v15;
    if ( v12 == v7 )
    {
      v11 += v14 + 8 - *((_DWORD *)v15 - 1);
      goto LABEL_7;
    }
    v11 += v14 + (_DWORD)v12 + v12[1] - *((_DWORD *)v15 - 1) - v16[1] - (_DWORD)v16 + 8;
  }
  v23 = *(_DWORD *)v15;
  while ( 2 )
  {
    v24 = *v12;
    while ( 1 )
    {
      v25 = v12;
      if ( v24 < v23 )
        break;
      v15 += 8;
      if ( v24 <= v23 )
      {
        v12 += 2;
        if ( v12 == v7 )
        {
          if ( v15 == v10 )
            return v11;
          v11 += *((_DWORD *)v15 + 1) - *((_DWORD *)v15 - 1) + 8;
          goto LABEL_7;
        }
        if ( v15 == v10 )
        {
          v28 = v12[1] + 8 - *(v12 - 1);
          goto LABEL_20;
        }
        v14 = *((_DWORD *)v15 + 1);
        v17 = v15 - 8;
        v24 = *v12;
        v33 = v12[1] + v14 + -*((_DWORD *)v15 - 1) - *(v12 - 1) + 16;
      }
      else
      {
        v26 = v12[1];
        if ( v15 == v10 )
        {
          v27 = v26 - *(v12 - 1) - ((_DWORD)v12 - 8);
          goto LABEL_19;
        }
        v14 = *((_DWORD *)v15 + 1);
        v17 = v15 - 8;
        v33 = v14 + v26 - *((_DWORD *)v15 - 1) - *(v12 - 1) + 16;
      }
      v23 = *(_DWORD *)v15;
      v11 += v33;
      v18 = (int)v15;
    }
    v12 += 2;
    if ( v12 != v7 )
    {
      v11 += v14 + v18 + v25[3] - *((_DWORD *)v17 + 1) - v25[1] - (_DWORD)v17 + 8;
      continue;
    }
    break;
  }
  v38 = *((_DWORD *)v15 + 1) - *((_DWORD *)v17 + 1) - (_DWORD)v17;
LABEL_43:
  v11 += (_DWORD)v15 + v38;
LABEL_7:
  v19 = v15 + 8;
  if ( v19 != v10 )
  {
    v20 = v19 - 8;
    do
    {
      v21 = *((_DWORD *)v20 + 3) - *((_DWORD *)v20 + 1) - (_DWORD)v20;
      v20 += 8;
      v22 = (_DWORD)v19 + v21;
      v19 += 8;
      v11 += v22;
    }
    while ( v19 != v10 );
  }
  return v11;
}
