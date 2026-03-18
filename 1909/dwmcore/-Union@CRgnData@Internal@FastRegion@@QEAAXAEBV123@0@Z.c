/*
 * XREFs of ?Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x18006D570
 * Callers:
 *     ?AddDirtyRegion@CBitmapRealization@@UEAAJAEBVCRegion@@@Z @ 0x18006B1C0 (-AddDirtyRegion@CBitmapRealization@@UEAAJAEBVCRegion@@@Z.c)
 *     ?AddDirtyRegion@CGdiSpriteBitmap@@AEAAJAEAVCRegion@@_N@Z @ 0x18006B304 (-AddDirtyRegion@CGdiSpriteBitmap@@AEAAJAEAVCRegion@@_N@Z.c)
 *     ?ProcessPresentHistoryToken@CGdiSpriteBitmap@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x18006CF00 (-ProcessPresentHistoryToken@CGdiSpriteBitmap@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?AddToCurrentFrameInvalidRegion@CHwFullScreenRenderTarget@@MEAAJAEBVCRegion@@@Z @ 0x18006E580 (-AddToCurrentFrameInvalidRegion@CHwFullScreenRenderTarget@@MEAAJAEBVCRegion@@@Z.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800BA8B4 (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ??$AppendRects@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@CRegion@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x1800BAAD8 (--$AppendRects@V-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@CRegion.c)
 * Callees:
 *     ?Union@CStripe@Internal@FastRegion@@QEAAXPEBV123@0@Z @ 0x18006DDEC (-Union@CStripe@Internal@FastRegion@@QEAAXPEBV123@0@Z.c)
 *     ?IsEqualToPrevious@CStripe@Internal@FastRegion@@QEBA_NXZ @ 0x18006E334 (-IsEqualToPrevious@CStripe@Internal@FastRegion@@QEBA_NXZ.c)
 *     ?Copy@CStripe@Internal@FastRegion@@QEAAXPEBV123@@Z @ 0x18006E398 (-Copy@CStripe@Internal@FastRegion@@QEAAXPEBV123@@Z.c)
 *     ?Copy@CStripe@Internal@FastRegion@@QEAAXPEBV123@0@Z @ 0x1800C1624 (-Copy@CStripe@Internal@FastRegion@@QEAAXPEBV123@0@Z.c)
 */

void __fastcall FastRegion::Internal::CRgnData::Union(
        FastRegion::Internal::CRgnData *this,
        const struct FastRegion::Internal::CRgnData *a2,
        const struct FastRegion::Internal::CRgnData *a3)
{
  __int64 v3; // r9
  int *v4; // r13
  __int64 v5; // r10
  _DWORD *v6; // rsi
  int *v7; // rdi
  __int64 v8; // rbp
  const struct FastRegion::Internal::CStripe *v9; // r15
  const struct FastRegion::Internal::CStripe *v10; // r14
  char *v11; // r12
  int *v12; // rbx
  int v13; // ecx
  int v14; // eax
  __int64 v15; // rdx
  const struct FastRegion::Internal::CStripe *v16; // rdi
  char *v17; // rdx
  __int64 v18; // rax
  __int64 v19; // r10
  __int64 v20; // rcx
  int v21; // eax
  int v22; // ecx
  char *v23; // rsi
  const struct FastRegion::Internal::CStripe *v24; // r8
  int *v25; // r14
  __int64 v26; // r9
  _DWORD *v27; // r9
  char *v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r10
  _DWORD *v31; // r8
  __int64 v32; // rdx
  int v33; // r11d
  __int64 v34; // rax
  _DWORD *v35; // rcx
  __int64 v36; // r8
  char *j; // rsi
  int v38; // eax
  char *i; // rdi
  int v40; // ecx
  int v41; // ecx
  _DWORD *v42; // rcx
  __int64 v43; // r9
  __int64 v44; // r8
  int *v45; // r15
  int v46; // ecx
  const struct FastRegion::Internal::CStripe *v47; // r9
  __int64 v48; // r9
  _DWORD *v49; // r9
  char *v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r10
  _DWORD *v53; // r8
  __int64 v54; // rdx
  int v55; // r11d
  __int64 v56; // rax
  _DWORD *v57; // rdx
  __int64 v58; // r8
  _DWORD *v59; // rcx
  __int64 v60; // r9
  __int64 v61; // rdx
  int *v62; // rcx
  int v63; // eax
  __int64 v64; // rax
  const struct FastRegion::Internal::CStripe *v65; // r10
  __int64 v66; // r9
  __int64 v67; // rdx
  _DWORD *v68; // rcx
  int v69; // r9d
  __int64 v70; // rax
  _DWORD *v71; // rcx
  __int64 v72; // r10
  __int64 v73; // r9
  const struct FastRegion::Internal::CStripe *v74; // rdx
  FastRegion::Internal::CStripe *v75; // rcx
  int v76; // eax
  int v77; // ecx
  int *v78; // r11
  int v79; // ecx
  int *v80; // r11
  int v81; // ecx
  int *v82; // rcx
  char *v83; // [rsp+20h] [rbp-58h]

  v3 = *(int *)a3;
  v4 = (int *)((char *)this + 12);
  v5 = *(int *)a2;
  v6 = (_DWORD *)((char *)a3 + 12);
  v7 = (int *)((char *)a2 + 12);
  v8 = 0LL;
  v9 = (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 12);
  v10 = (const struct FastRegion::Internal::CRgnData *)((char *)a3 + 12);
  v83 = (char *)a3 + 8 * v3 + 12;
  v11 = (char *)a2 + 8 * v5 + 12;
  v12 = (int *)((char *)this + 12);
  *((_DWORD *)this + 4) = 8 * (v3 + v5);
  v13 = *((_DWORD *)a3 + 3);
  v14 = *((_DWORD *)a2 + 3);
  if ( v14 >= v13 )
  {
    v23 = (char *)a3 + 20;
    if ( v14 <= v13 )
    {
      v25 = (int *)((char *)a3 + 12);
      v16 = (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 20);
      FastRegion::Internal::CStripe::Union(
        (FastRegion::Internal::CStripe *)v12,
        (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 12),
        (const struct FastRegion::Internal::CRgnData *)((char *)a3 + 12));
      v62 = v4 + 2;
      if ( (_DWORD)v4 + 8 + v4[3] - (_DWORD)v12 - v4[1] )
LABEL_57:
        v12 = v62;
LABEL_36:
      v45 = (int *)((char *)v16 - 8);
LABEL_37:
      while ( 1 )
      {
        v46 = *(_DWORD *)v23;
        v47 = v16;
        v38 = *(_DWORD *)v16;
        if ( *(_DWORD *)v16 < *(_DWORD *)v23 )
          break;
        v23 += 8;
        if ( v38 <= v46 )
        {
          v16 = (const struct FastRegion::Internal::CStripe *)((char *)v16 + 8);
          v45 += 2;
          if ( v16 == (const struct FastRegion::Internal::CStripe *)v11 )
          {
            if ( v23 == v83 )
              goto LABEL_22;
            FastRegion::Internal::CStripe::Copy(
              (FastRegion::Internal::CStripe *)v12,
              (const struct FastRegion::Internal::CStripe *)(v23 - 8),
              v47);
            if ( v12 == v4 )
            {
              if ( v12[3] - v12[1] != -8 )
                v12 += 2;
              goto LABEL_18;
            }
            if ( FastRegion::Internal::CStripe::IsEqualToPrevious((FastRegion::Internal::CStripe *)v12) )
              goto LABEL_18;
LABEL_112:
            v12 += 2;
            goto LABEL_18;
          }
          v25 = (int *)(v23 - 8);
          if ( v23 == v83 )
          {
            FastRegion::Internal::CStripe::Copy(
              (FastRegion::Internal::CStripe *)v12,
              v47,
              (const struct FastRegion::Internal::CStripe *)(v23 - 8));
            if ( v12 != v4 )
              goto LABEL_97;
            v82 = v12 + 2;
            if ( v12[3] - v12[1] != -8 )
              goto LABEL_157;
            goto LABEL_20;
          }
LABEL_80:
          FastRegion::Internal::CStripe::Union(
            (FastRegion::Internal::CStripe *)v12,
            v47,
            (const struct FastRegion::Internal::CStripe *)v25);
          if ( v12 == v4 )
          {
            if ( v12[3] - v12[1] != -8 )
              v12 += 2;
          }
          else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious((FastRegion::Internal::CStripe *)v12) )
          {
            v12 += 2;
          }
        }
        else
        {
          v25 = (int *)(v23 - 8);
          if ( v23 == v83 )
          {
            v48 = v12[1];
            *v12 = *v25;
            v49 = (int *)((char *)v12 + v48);
            v50 = (char *)v45 + v45[1];
            v51 = ((__int64)v16 + *((int *)v16 + 1) - (_QWORD)v50) >> 2;
            v52 = (int)v51;
            if ( (int)v51 > 0 )
            {
              v53 = v49;
              v54 = v50 - (char *)v49;
              do
              {
                *v53 = *(_DWORD *)((char *)v53 + v54);
                ++v53;
                --v52;
              }
              while ( v52 );
            }
            v55 = (_DWORD)v49 + 4 * v51 - ((_DWORD)v12 + 8);
            v12[3] = v55;
            v56 = v12[1];
            if ( v12 == v4 )
            {
              if ( v55 - (_DWORD)v56 == -8 )
                goto LABEL_20;
            }
            else
            {
              v57 = (int *)((char *)v12 + *(v12 - 1) - 8);
              v58 = (int)((v56 - (*(v12 - 1) - 8LL)) >> 2);
              if ( v58 == (v55 - v56 + 8) >> 2 )
              {
                if ( v58 <= 0 )
                  goto LABEL_20;
                while ( *(_DWORD *)((char *)v57 + v56 - (*(v12 - 1) - 8LL)) == *v57 )
                {
                  ++v8;
                  ++v57;
                  if ( v8 >= v58 )
                    goto LABEL_20;
                }
              }
            }
            v12 += 2;
            goto LABEL_20;
          }
          FastRegion::Internal::CStripe::Union(
            (FastRegion::Internal::CStripe *)v12,
            (const struct FastRegion::Internal::CStripe *)(v23 - 8),
            (const struct FastRegion::Internal::CStripe *)v45);
          if ( v12 == v4 )
          {
            if ( v12[3] - v12[1] != -8 )
              v12 += 2;
          }
          else
          {
            v59 = (int *)((char *)v12 + v12[1]);
            v60 = (int)((v12[1] - (*(v12 - 1) - 8LL)) >> 2);
            if ( v60 != (v12[3] - (__int64)v12[1] + 8) >> 2 )
              goto LABEL_127;
            v61 = 0LL;
            if ( v60 > 0 )
            {
              while ( *v59 == *(_DWORD *)((char *)v59 + *(v12 - 1) - 8LL - v12[1]) )
              {
                ++v61;
                ++v59;
                if ( v61 >= v60 )
                  goto LABEL_37;
              }
LABEL_127:
              v12 += 2;
            }
          }
        }
      }
      v16 = (const struct FastRegion::Internal::CStripe *)((char *)v16 + 8);
      v45 += 2;
      if ( v16 == (const struct FastRegion::Internal::CStripe *)v11 )
      {
        FastRegion::Internal::CStripe::Copy(
          (FastRegion::Internal::CStripe *)v12,
          (const struct FastRegion::Internal::CStripe *)v25,
          v47);
        goto LABEL_110;
      }
      goto LABEL_80;
    }
    FastRegion::Internal::CStripe::Copy(
      (FastRegion::Internal::CStripe *)v12,
      (const struct FastRegion::Internal::CRgnData *)((char *)a3 + 12));
    if ( v12 == v4 )
    {
      if ( (_DWORD)v4 + 8 + v4[3] - (_DWORD)v12 - v4[1] )
        v12 = v4 + 2;
    }
    else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious((FastRegion::Internal::CStripe *)v12) )
    {
      v12 += 2;
    }
    v76 = *(_DWORD *)v23;
    v77 = *v7;
    if ( *v7 >= *(_DWORD *)v23 )
    {
      while ( 1 )
      {
        v23 += 8;
        if ( v77 <= v76 )
          break;
        if ( v23 == v83 )
        {
          v78 = v12 + 2;
          *v12 = *((_DWORD *)v23 - 2);
          v79 = v12[1] - 8;
          v12[3] = v79;
          if ( v12 == v4 )
          {
            if ( v79 - v12[1] != -8 )
LABEL_94:
              v12 = v78;
          }
          else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious((FastRegion::Internal::CStripe *)v12) )
          {
            goto LABEL_94;
          }
          v16 = (const struct FastRegion::Internal::CStripe *)(v7 + 2);
          v74 = v9;
          v75 = (FastRegion::Internal::CStripe *)v12;
LABEL_96:
          FastRegion::Internal::CStripe::Copy(v75, v74);
          if ( v12 == v4 )
          {
            v82 = v12 + 2;
            if ( v12[3] - v12[1] != -8 )
LABEL_157:
              v12 = v82;
          }
          else
          {
LABEL_97:
            if ( !FastRegion::Internal::CStripe::IsEqualToPrevious((FastRegion::Internal::CStripe *)v12) )
              v12 += 2;
          }
LABEL_20:
          for ( i = (char *)v16 + 8; i != v11; i += 8 )
          {
            FastRegion::Internal::CStripe::Copy(
              (FastRegion::Internal::CStripe *)v12,
              (const struct FastRegion::Internal::CStripe *)(i - 8));
            if ( v12 == v4 )
            {
              if ( v12[3] - v12[1] != -8 )
                v12 += 2;
            }
            else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious((FastRegion::Internal::CStripe *)v12) )
            {
              v12 += 2;
            }
          }
          v38 = *((_DWORD *)i - 2);
          goto LABEL_22;
        }
        FastRegion::Internal::CStripe::Copy(
          (FastRegion::Internal::CStripe *)v12,
          (const struct FastRegion::Internal::CStripe *)(v23 - 8));
        if ( v12 == v4 )
        {
          if ( v12[3] - v12[1] != -8 )
            v12 += 2;
        }
        else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious((FastRegion::Internal::CStripe *)v12) )
        {
          v12 += 2;
        }
        v76 = *(_DWORD *)v23;
        v77 = *v7;
        if ( *v7 < *(_DWORD *)v23 )
          goto LABEL_108;
      }
      v16 = (const struct FastRegion::Internal::CStripe *)(v7 + 2);
      v75 = (FastRegion::Internal::CStripe *)v12;
      v74 = (const struct FastRegion::Internal::CStripe *)((char *)v16 - 8);
      if ( v23 == v83 )
        goto LABEL_96;
      v25 = (int *)(v23 - 8);
      v24 = (const struct FastRegion::Internal::CStripe *)(v23 - 8);
LABEL_76:
      FastRegion::Internal::CStripe::Union(v75, v74, v24);
      if ( v12 != v4 )
      {
        if ( !FastRegion::Internal::CStripe::IsEqualToPrevious((FastRegion::Internal::CStripe *)v12) )
          v12 += 2;
        goto LABEL_36;
      }
      v62 = v12 + 2;
      if ( v12[3] - v12[1] != -8 )
        goto LABEL_57;
      goto LABEL_36;
    }
LABEL_108:
    v25 = (int *)(v23 - 8);
    v16 = (const struct FastRegion::Internal::CStripe *)(v7 + 2);
    v24 = (const struct FastRegion::Internal::CStripe *)(v23 - 8);
    v74 = v9;
LABEL_75:
    v75 = (FastRegion::Internal::CStripe *)v12;
    goto LABEL_76;
  }
  v15 = v4[1];
  v16 = (const struct FastRegion::Internal::CStripe *)(v7 + 2);
  *v4 = v14;
  v17 = (char *)v12 + v15;
  v18 = *((int *)v16 - 1);
  v19 = (*((int *)v16 + 1) - (v18 - 8)) >> 2;
  if ( (int)v19 > 0 )
  {
    v20 = 0LL;
    do
    {
      *(_DWORD *)&v17[4 * v20] = *(_DWORD *)((char *)v16 + 4 * v20 + v18 - 8);
      ++v20;
    }
    while ( v20 < (int)v19 );
  }
  v4[3] = (_DWORD)v17 + 4 * v19 - ((_DWORD)v4 + 8);
  if ( (_DWORD)v17 + 4 * (_DWORD)v19 - (_DWORD)v12 != v4[1] )
    v12 = v4 + 2;
  v21 = *v6;
  v22 = *(_DWORD *)v16;
  if ( *(_DWORD *)v16 >= *v6 )
  {
LABEL_8:
    v23 = (char *)a3 + 20;
    v24 = v16;
    v25 = (int *)(v23 - 8);
    if ( v22 > v21 )
    {
      FastRegion::Internal::CStripe::Union(
        (FastRegion::Internal::CStripe *)v12,
        (const struct FastRegion::Internal::CStripe *)(v23 - 8),
        (const struct FastRegion::Internal::CStripe *)((char *)v16 - 8));
      if ( v12 == v4 )
      {
        v62 = v12 + 2;
        if ( v12[3] - v12[1] == -8 )
          goto LABEL_36;
        goto LABEL_57;
      }
      v42 = (int *)((char *)v12 + v12[1]);
      v43 = (int)((v12[1] - (*(v12 - 1) - 8LL)) >> 2);
      if ( v43 == (v12[3] - (__int64)v12[1] + 8) >> 2 )
      {
        if ( v43 <= 0 )
          goto LABEL_36;
        v44 = 0LL;
        while ( *v42 == *(_DWORD *)((char *)v42 + *(v12 - 1) - 8LL - v12[1]) )
        {
          ++v44;
          ++v42;
          if ( v44 >= v43 )
            goto LABEL_36;
        }
      }
      v12 += 2;
      goto LABEL_36;
    }
    v16 = (const struct FastRegion::Internal::CStripe *)((char *)v16 + 8);
    if ( v16 == (const struct FastRegion::Internal::CStripe *)v11 )
    {
      v26 = v12[1];
      *v12 = *v25;
      v27 = (int *)((char *)v12 + v26);
      v28 = (char *)v25 + v25[1];
      v29 = (__int64)&v23[*((int *)v23 + 1) - (_QWORD)v28] >> 2;
      v30 = (int)v29;
      if ( (int)v29 > 0 )
      {
        v31 = v27;
        v32 = v28 - (char *)v27;
        do
        {
          *v31 = *(_DWORD *)((char *)v31 + v32);
          ++v31;
          --v30;
        }
        while ( v30 );
      }
      v33 = (_DWORD)v27 + 4 * v29 - ((_DWORD)v12 + 8);
      v12[3] = v33;
      v34 = v12[1];
      if ( v12 == v4 )
      {
        if ( v33 - (_DWORD)v34 == -8 )
          goto LABEL_18;
      }
      else
      {
        v35 = (int *)((char *)v12 + v34);
        v36 = (int)((v34 - (*(v12 - 1) - 8LL)) >> 2);
        if ( v36 == (v33 - v34 + 8) >> 2 )
        {
          if ( v36 <= 0 )
            goto LABEL_18;
          while ( *v35 == *(_DWORD *)((char *)v35 + *(v12 - 1) - 8LL - v34) )
          {
            ++v8;
            ++v35;
            if ( v8 >= v36 )
              goto LABEL_18;
          }
        }
      }
      v12 += 2;
      goto LABEL_18;
    }
    v74 = (const struct FastRegion::Internal::CStripe *)(v23 - 8);
    goto LABEL_75;
  }
  while ( 1 )
  {
    v63 = *(_DWORD *)v16;
    v16 = (const struct FastRegion::Internal::CStripe *)((char *)v16 + 8);
    *v12 = v63;
    if ( v16 == (const struct FastRegion::Internal::CStripe *)v11 )
      break;
    v64 = *((int *)v16 - 1);
    v65 = (const struct FastRegion::Internal::CStripe *)((char *)v12 + v12[1]);
    v66 = (*((int *)v16 + 1) - (v64 - 8)) >> 2;
    v67 = (int)v66;
    if ( (int)v66 > 0 )
    {
      v68 = (int *)((char *)v12 + v12[1]);
      do
      {
        *v68 = *(_DWORD *)((char *)v68 + (const struct FastRegion::Internal::CStripe *)((char *)v16 + v64 - 8) - v65);
        ++v68;
        --v67;
      }
      while ( v67 );
    }
    v69 = (_DWORD)v65 + 4 * v66 - ((_DWORD)v12 + 8);
    v12[3] = v69;
    v70 = v12[1];
    if ( v12 == v4 )
    {
      if ( v69 - (_DWORD)v70 == -8 )
        goto LABEL_67;
      goto LABEL_66;
    }
    v71 = (int *)((char *)v12 + v70);
    v72 = (int)((v70 - (*(v12 - 1) - 8LL)) >> 2);
    if ( v72 != (v69 - v70 + 8) >> 2 )
      goto LABEL_66;
    v73 = 0LL;
    if ( v72 > 0 )
    {
      while ( *v71 == *(_DWORD *)((char *)v71 + *(v12 - 1) - 8LL - v70) )
      {
        ++v73;
        ++v71;
        if ( v73 >= v72 )
          goto LABEL_67;
      }
LABEL_66:
      v12 += 2;
    }
LABEL_67:
    v21 = *v6;
    v22 = *(_DWORD *)v16;
    if ( *(_DWORD *)v16 >= *v6 )
      goto LABEL_8;
  }
  v80 = v12 + 2;
  v81 = v12[1] - 8;
  v12[3] = v81;
  if ( v12 == v4 )
  {
    if ( v81 - v12[1] != -8 )
LABEL_120:
      v12 = v80;
  }
  else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious((FastRegion::Internal::CStripe *)v12) )
  {
    goto LABEL_120;
  }
  v23 = (char *)(v6 + 2);
  FastRegion::Internal::CStripe::Copy((FastRegion::Internal::CStripe *)v12, v10);
LABEL_110:
  if ( v12 == v4 )
  {
    if ( v12[3] - v12[1] != -8 )
      v12 += 2;
  }
  else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious((FastRegion::Internal::CStripe *)v12) )
  {
    goto LABEL_112;
  }
LABEL_18:
  for ( j = v23 + 8; j != v83; j += 8 )
  {
    FastRegion::Internal::CStripe::Copy(
      (FastRegion::Internal::CStripe *)v12,
      (const struct FastRegion::Internal::CStripe *)(j - 8));
    if ( v12 == v4 )
    {
      if ( v12[3] - v12[1] != -8 )
        v12 += 2;
    }
    else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious((FastRegion::Internal::CStripe *)v12) )
    {
      v12 += 2;
    }
  }
  v38 = *((_DWORD *)j - 2);
LABEL_22:
  *v12 = v38;
  if ( v12 != v4 && (char *)v12 + v12[1] != (char *)v12 + *(v12 - 1) - 8 )
    v12 += 2;
  *(_DWORD *)this = ((char *)v12 - (char *)this - 12) >> 3;
  v40 = *((_DWORD *)a2 + 1);
  if ( v40 >= *((_DWORD *)a3 + 1) )
    v40 = *((_DWORD *)a3 + 1);
  *((_DWORD *)this + 1) = v40;
  v41 = *((_DWORD *)a2 + 2);
  if ( v41 <= *((_DWORD *)a3 + 2) )
    v41 = *((_DWORD *)a3 + 2);
  *((_DWORD *)this + 2) = v41;
}
