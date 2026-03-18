/*
 * XREFs of ?Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x1800A7760
 * Callers:
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18003E5E0 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?AddToCurrentFrameInvalidRegion@CHwFullScreenRenderTarget@@MEAAJAEBVCRegion@@@Z @ 0x1800A6420 (-AddToCurrentFrameInvalidRegion@CHwFullScreenRenderTarget@@MEAAJAEBVCRegion@@@Z.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800A6FB4 (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ??$AppendRects@UtagRECT@@@CRegion@@QEAAJPEBUtagRECT@@I@Z @ 0x1800A7240 (--$AppendRects@UtagRECT@@@CRegion@@QEAAJPEBUtagRECT@@I@Z.c)
 * Callees:
 *     ?Copy@CStripe@Internal@FastRegion@@QEAAXPEBV123@0@Z @ 0x1800673A0 (-Copy@CStripe@Internal@FastRegion@@QEAAXPEBV123@0@Z.c)
 *     ?Union@CStripe@Internal@FastRegion@@QEAAXPEBV123@0@Z @ 0x1800A7EC4 (-Union@CStripe@Internal@FastRegion@@QEAAXPEBV123@0@Z.c)
 *     ?IsEqualToPrevious@CStripe@Internal@FastRegion@@QEBA_NXZ @ 0x1800A83DC (-IsEqualToPrevious@CStripe@Internal@FastRegion@@QEBA_NXZ.c)
 *     ?Copy@CStripe@Internal@FastRegion@@QEAAXPEBV123@@Z @ 0x1800A8534 (-Copy@CStripe@Internal@FastRegion@@QEAAXPEBV123@@Z.c)
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
  __int64 v8; // r15
  const struct FastRegion::Internal::CStripe *v9; // rbp
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
  char *v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r10
  _DWORD *v31; // rdx
  __int64 v32; // rcx
  int v33; // r11d
  __int64 v34; // rcx
  __int64 v35; // rdx
  _DWORD *v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rdx
  char *j; // rsi
  int v40; // eax
  _DWORD *v41; // rcx
  __int64 v42; // r9
  __int64 v43; // r8
  int *v44; // rbp
  int v45; // ecx
  const struct FastRegion::Internal::CStripe *v46; // r9
  __int64 v47; // r9
  _DWORD *v48; // r9
  char *v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r10
  _DWORD *v52; // rdx
  __int64 v53; // rcx
  int v54; // r11d
  __int64 v55; // rax
  _DWORD *v56; // rcx
  __int64 v57; // r8
  char *i; // rdi
  int v59; // ecx
  int v60; // ecx
  int *v61; // rcx
  const struct FastRegion::Internal::CStripe *v62; // r8
  const struct FastRegion::Internal::CStripe *v63; // rdx
  int v64; // eax
  __int64 v65; // rax
  const struct FastRegion::Internal::CStripe *v66; // r10
  __int64 v67; // r9
  __int64 v68; // rdx
  _DWORD *v69; // rcx
  int *v70; // r11
  const struct FastRegion::Internal::CStripe *v71; // rdx
  FastRegion::Internal::CStripe *v72; // rcx
  int v73; // eax
  int v74; // ecx
  int *v75; // r11
  int v76; // ecx
  int *v77; // r11
  int v78; // ecx
  int *v79; // rcx
  int *v80; // rcx
  char *v84; // [rsp+88h] [rbp+20h]

  v3 = *(int *)a3;
  v4 = (int *)((char *)this + 12);
  v5 = *(int *)a2;
  v6 = (_DWORD *)((char *)a3 + 12);
  v7 = (int *)((char *)a2 + 12);
  v8 = 0LL;
  v9 = (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 12);
  v10 = (const struct FastRegion::Internal::CRgnData *)((char *)a3 + 12);
  v84 = (char *)a3 + 8 * v3 + 12;
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
      v61 = v4 + 2;
      if ( (_DWORD)v4 + 8 + v4[3] - v4[1] - (_DWORD)v12 )
LABEL_51:
        v12 = v61;
LABEL_27:
      v44 = (int *)((char *)v16 - 8);
      while ( 1 )
      {
        v45 = *(_DWORD *)v23;
        v46 = v16;
        v40 = *(_DWORD *)v16;
        if ( *(_DWORD *)v16 < *(_DWORD *)v23 )
          break;
        v23 += 8;
        if ( v40 <= v45 )
        {
          v16 = (const struct FastRegion::Internal::CStripe *)((char *)v16 + 8);
          v44 += 2;
          if ( v16 == (const struct FastRegion::Internal::CStripe *)v11 )
          {
            if ( v23 == v84 )
              goto LABEL_41;
            FastRegion::Internal::CStripe::Copy(
              (FastRegion::Internal::CStripe *)v12,
              (const struct FastRegion::Internal::CStripe *)(v23 - 8),
              v46);
            if ( v12 != v4 )
              goto LABEL_101;
            v79 = v12 + 2;
            if ( v12[3] - v12[1] == -8 )
              goto LABEL_19;
LABEL_146:
            v12 = v79;
            goto LABEL_19;
          }
          v25 = (int *)(v23 - 8);
          if ( v23 == v84 )
          {
            FastRegion::Internal::CStripe::Copy(
              (FastRegion::Internal::CStripe *)v12,
              v46,
              (const struct FastRegion::Internal::CStripe *)(v23 - 8));
            if ( v12 != v4 )
              goto LABEL_86;
            v80 = v12 + 2;
            if ( v12[3] - v12[1] != -8 )
              goto LABEL_142;
            goto LABEL_39;
          }
          goto LABEL_70;
        }
        v25 = (int *)(v23 - 8);
        if ( v23 == v84 )
        {
          v47 = v12[1];
          *v12 = *v25;
          v48 = (int *)((char *)v12 + v47);
          v49 = (char *)v44 + v44[1];
          v50 = ((__int64)v16 + *((int *)v16 + 1) - (_QWORD)v49) >> 2;
          v51 = (int)v50;
          if ( (int)v50 > 0 )
          {
            v52 = v48;
            v53 = v49 - (char *)v48;
            do
            {
              *v52 = *(_DWORD *)((char *)v52 + v53);
              ++v52;
              --v51;
            }
            while ( v51 );
          }
          v54 = (_DWORD)v48 + 4 * v50 - ((_DWORD)v12 + 8);
          v12[3] = v54;
          v55 = v12[1];
          if ( v12 == v4 )
          {
            if ( v54 - (_DWORD)v55 == -8 )
              goto LABEL_39;
          }
          else
          {
            v56 = (int *)((char *)v12 + v55);
            v57 = (int)((v55 - (*(v12 - 1) - 8LL)) >> 2);
            if ( v57 == (v54 - v55 + 8) >> 2 )
            {
              if ( v57 <= 0 )
                goto LABEL_39;
              while ( *v56 == *(_DWORD *)((char *)v56 + *(v12 - 1) - 8LL - v55) )
              {
                ++v8;
                ++v56;
                if ( v8 >= v57 )
                  goto LABEL_39;
              }
            }
          }
          v12 += 2;
          goto LABEL_39;
        }
        v62 = (const struct FastRegion::Internal::CStripe *)v44;
        v63 = (const struct FastRegion::Internal::CStripe *)(v23 - 8);
LABEL_53:
        FastRegion::Internal::CStripe::Union((FastRegion::Internal::CStripe *)v12, v63, v62);
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
      v16 = (const struct FastRegion::Internal::CStripe *)((char *)v16 + 8);
      v44 += 2;
      if ( v16 == (const struct FastRegion::Internal::CStripe *)v11 )
      {
        FastRegion::Internal::CStripe::Copy(
          (FastRegion::Internal::CStripe *)v12,
          (const struct FastRegion::Internal::CStripe *)v25,
          v46);
        goto LABEL_100;
      }
LABEL_70:
      v62 = (const struct FastRegion::Internal::CStripe *)v25;
      v63 = v46;
      goto LABEL_53;
    }
    FastRegion::Internal::CStripe::Copy(
      (FastRegion::Internal::CStripe *)v12,
      (const struct FastRegion::Internal::CRgnData *)((char *)a3 + 12));
    if ( (_DWORD)v4 + 8 + v4[3] - v4[1] - (_DWORD)v12 )
      v12 = v4 + 2;
    v73 = *(_DWORD *)v23;
    v74 = *v7;
    if ( *v7 >= *(_DWORD *)v23 )
    {
      while ( 1 )
      {
        v23 += 8;
        if ( v74 <= v73 )
          break;
        if ( v23 == v84 )
        {
          v75 = v12 + 2;
          *v12 = *((_DWORD *)v23 - 2);
          v76 = v12[1] - 8;
          v12[3] = v76;
          if ( v12 == v4 )
          {
            if ( v76 - v12[1] != -8 )
LABEL_83:
              v12 = v75;
          }
          else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious((FastRegion::Internal::CStripe *)v12) )
          {
            goto LABEL_83;
          }
          v16 = (const struct FastRegion::Internal::CStripe *)(v7 + 2);
          v71 = v9;
          v72 = (FastRegion::Internal::CStripe *)v12;
LABEL_85:
          FastRegion::Internal::CStripe::Copy(v72, v71);
          if ( v12 == v4 )
          {
            v80 = v12 + 2;
            if ( v12[3] - v12[1] != -8 )
LABEL_142:
              v12 = v80;
          }
          else
          {
LABEL_86:
            if ( !FastRegion::Internal::CStripe::IsEqualToPrevious((FastRegion::Internal::CStripe *)v12) )
              v12 += 2;
          }
LABEL_39:
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
          v40 = *((_DWORD *)i - 2);
          goto LABEL_41;
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
        v73 = *(_DWORD *)v23;
        v74 = *v7;
        if ( *v7 < *(_DWORD *)v23 )
          goto LABEL_98;
      }
      v16 = (const struct FastRegion::Internal::CStripe *)(v7 + 2);
      v72 = (FastRegion::Internal::CStripe *)v12;
      v71 = (const struct FastRegion::Internal::CStripe *)((char *)v16 - 8);
      if ( v23 == v84 )
        goto LABEL_85;
      v25 = (int *)(v23 - 8);
      v24 = (const struct FastRegion::Internal::CStripe *)(v23 - 8);
LABEL_73:
      FastRegion::Internal::CStripe::Union(v72, v71, v24);
      if ( v12 != v4 )
      {
        if ( !FastRegion::Internal::CStripe::IsEqualToPrevious((FastRegion::Internal::CStripe *)v12) )
          v12 += 2;
        goto LABEL_27;
      }
      v61 = v12 + 2;
      if ( v12[3] - v12[1] != -8 )
        goto LABEL_51;
      goto LABEL_27;
    }
LABEL_98:
    v25 = (int *)(v23 - 8);
    v16 = (const struct FastRegion::Internal::CStripe *)(v7 + 2);
    v24 = (const struct FastRegion::Internal::CStripe *)(v23 - 8);
    v71 = v9;
LABEL_72:
    v72 = (FastRegion::Internal::CStripe *)v12;
    goto LABEL_73;
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
  if ( (_DWORD)v17 + 4 * (_DWORD)v19 + -(int)v12 - v4[1] )
    v12 = v4 + 2;
  v21 = *v6;
  v22 = *(_DWORD *)v16;
  if ( *(_DWORD *)v16 >= *v6 )
  {
LABEL_8:
    v23 = (char *)(v6 + 2);
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
        v61 = v12 + 2;
        if ( v12[3] - v12[1] == -8 )
          goto LABEL_27;
        goto LABEL_51;
      }
      v41 = (int *)((char *)v12 + v12[1]);
      v42 = (int)((v12[1] - (*(v12 - 1) - 8LL)) >> 2);
      if ( v42 == (v12[3] - (__int64)v12[1] + 8) >> 2 )
      {
        if ( v42 <= 0 )
          goto LABEL_27;
        v43 = 0LL;
        while ( *v41 == *(_DWORD *)((char *)v41 + *(v12 - 1) - 8LL - v12[1]) )
        {
          ++v43;
          ++v41;
          if ( v43 >= v42 )
            goto LABEL_27;
        }
      }
      v12 += 2;
      goto LABEL_27;
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
        if ( (_DWORD)v27 + 4 * (_DWORD)v29 - (_DWORD)v12 == (_DWORD)v34 )
          goto LABEL_19;
      }
      else
      {
        v35 = (__int64)v12 + *(v12 - 1) - 8;
        v36 = (int *)((char *)v12 + v34);
        v37 = (int)(((__int64)v36 - v35) >> 2);
        if ( v37 == ((__int64)v12 + v33 - (_QWORD)v36 + 8) >> 2 )
        {
          if ( v37 <= 0 )
            goto LABEL_19;
          v38 = v35 - (_QWORD)v36;
          while ( *v36 == *(_DWORD *)((char *)v36 + v38) )
          {
            ++v8;
            ++v36;
            if ( v8 >= v37 )
              goto LABEL_19;
          }
        }
      }
      v12 += 2;
      goto LABEL_19;
    }
    v71 = (const struct FastRegion::Internal::CStripe *)(v23 - 8);
    goto LABEL_72;
  }
  while ( 1 )
  {
    v64 = *(_DWORD *)v16;
    v16 = (const struct FastRegion::Internal::CStripe *)((char *)v16 + 8);
    *v12 = v64;
    if ( v16 == (const struct FastRegion::Internal::CStripe *)v11 )
      break;
    v65 = *((int *)v16 - 1);
    v66 = (const struct FastRegion::Internal::CStripe *)((char *)v12 + v12[1]);
    v67 = (*((int *)v16 + 1) - (v65 - 8)) >> 2;
    v68 = (int)v67;
    if ( (int)v67 > 0 )
    {
      v69 = (int *)((char *)v12 + v12[1]);
      do
      {
        *v69 = *(_DWORD *)((char *)v69 + (const struct FastRegion::Internal::CStripe *)((char *)v16 + v65 - 8) - v66);
        ++v69;
        --v68;
      }
      while ( v68 );
    }
    v70 = v12 + 2;
    v12[3] = (_DWORD)v66 + 4 * v67 - ((_DWORD)v12 + 8);
    if ( v12 == v4 )
    {
      if ( (_DWORD)v66 + 4 * (_DWORD)v67 - (_DWORD)v12 == v12[1] )
        goto LABEL_63;
LABEL_62:
      v12 = v70;
      goto LABEL_63;
    }
    if ( !FastRegion::Internal::CStripe::IsEqualToPrevious((FastRegion::Internal::CStripe *)v12) )
      goto LABEL_62;
LABEL_63:
    v21 = *v6;
    v22 = *(_DWORD *)v16;
    if ( *(_DWORD *)v16 >= *v6 )
      goto LABEL_8;
  }
  v77 = v12 + 2;
  v78 = v12[1] - 8;
  v12[3] = v78;
  if ( v12 == v4 )
  {
    if ( v78 - v12[1] != -8 )
LABEL_110:
      v12 = v77;
  }
  else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious((FastRegion::Internal::CStripe *)v12) )
  {
    goto LABEL_110;
  }
  v23 = (char *)(v6 + 2);
  FastRegion::Internal::CStripe::Copy((FastRegion::Internal::CStripe *)v12, v10);
LABEL_100:
  if ( v12 == v4 )
  {
    v79 = v12 + 2;
    if ( v12[3] - v12[1] != -8 )
      goto LABEL_146;
  }
  else
  {
LABEL_101:
    if ( !FastRegion::Internal::CStripe::IsEqualToPrevious((FastRegion::Internal::CStripe *)v12) )
      v12 += 2;
  }
LABEL_19:
  for ( j = v23 + 8; j != v84; j += 8 )
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
  v40 = *((_DWORD *)j - 2);
LABEL_41:
  *v12 = v40;
  if ( v12 != v4 && (char *)v12 + v12[1] != (char *)v12 + *(v12 - 1) - 8 )
    v12 += 2;
  *(_DWORD *)this = ((char *)v12 - (char *)this - 12) >> 3;
  v59 = *((_DWORD *)a2 + 1);
  if ( v59 >= *((_DWORD *)a3 + 1) )
    v59 = *((_DWORD *)a3 + 1);
  *((_DWORD *)this + 1) = v59;
  v60 = *((_DWORD *)a2 + 2);
  if ( v60 <= *((_DWORD *)a3 + 2) )
    v60 = *((_DWORD *)a3 + 2);
  *((_DWORD *)this + 2) = v60;
}
