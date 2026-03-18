/*
 * XREFs of ?Subtract@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x1800A683C
 * Callers:
 *     ?Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800A0628 (-Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?OccludeRegions@CMegaRectCollection@@AEAAJXZ @ 0x1800A61E4 (-OccludeRegions@CMegaRectCollection@@AEAAJXZ.c)
 *     ?AddToCurrentFrameInvalidRegion@CHwFullScreenRenderTarget@@MEAAJAEBVCRegion@@@Z @ 0x1800A6420 (-AddToCurrentFrameInvalidRegion@CHwFullScreenRenderTarget@@MEAAJAEBVCRegion@@@Z.c)
 * Callees:
 *     ?Copy@CStripe@Internal@FastRegion@@QEAAXPEBV123@0@Z @ 0x1800673A0 (-Copy@CStripe@Internal@FastRegion@@QEAAXPEBV123@0@Z.c)
 *     ?Subtract@CStripe@Internal@FastRegion@@QEAAXPEBV123@00@Z @ 0x1800A6C08 (-Subtract@CStripe@Internal@FastRegion@@QEAAXPEBV123@00@Z.c)
 *     ?IsEqualToPrevious@CStripe@Internal@FastRegion@@QEBA_NXZ @ 0x1800A83DC (-IsEqualToPrevious@CStripe@Internal@FastRegion@@QEBA_NXZ.c)
 *     ?Copy@CStripe@Internal@FastRegion@@QEAAXPEBV123@@Z @ 0x1800A8534 (-Copy@CStripe@Internal@FastRegion@@QEAAXPEBV123@@Z.c)
 */

void __fastcall FastRegion::Internal::CRgnData::Subtract(
        FastRegion::Internal::CRgnData *this,
        const struct FastRegion::Internal::CRgnData *a2,
        const struct FastRegion::Internal::CRgnData *a3)
{
  __int64 v3; // r10
  _DWORD *v4; // rdi
  __int64 v5; // r9
  const struct FastRegion::Internal::CStripe *v8; // r13
  FastRegion::Internal::CStripe *v9; // r14
  FastRegion::Internal::CStripe *v10; // rbx
  char *v11; // rcx
  int v12; // eax
  char *v13; // rsi
  const struct FastRegion::Internal::CStripe *v14; // rbp
  const struct FastRegion::Internal::CStripe *v15; // rdi
  const struct FastRegion::Internal::CStripe *v16; // r15
  int v17; // eax
  const struct FastRegion::Internal::CStripe *v18; // rdx
  int v19; // ecx
  __int64 v20; // rax
  FastRegion::Internal::CStripe *v21; // rbx
  _DWORD *v22; // rax
  _DWORD *v23; // rdx
  int v24; // ecx
  int v25; // eax
  const struct FastRegion::Internal::CStripe *v26; // r9
  FastRegion::Internal::CStripe *v27; // rcx
  char *v28; // rcx
  int v29; // eax
  int v30; // eax
  int v31; // ecx
  const struct FastRegion::Internal::CStripe *v32; // rdx
  bool v33; // zf
  const struct FastRegion::Internal::CStripe *v34; // rdx
  char *v35; // rcx
  int v36; // eax
  const struct FastRegion::Internal::CStripe *v37; // r9
  const struct FastRegion::Internal::CStripe *v38; // r8
  const struct FastRegion::Internal::CStripe *v39; // rsi
  char *v40; // [rsp+50h] [rbp+8h]

  v3 = *(int *)a2;
  v4 = (_DWORD *)((char *)a2 + 12);
  v5 = *(int *)a3;
  v8 = (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 8 * v3 + 12);
  v9 = (FastRegion::Internal::CRgnData *)((char *)this + 12);
  v10 = (FastRegion::Internal::CRgnData *)((char *)this + 12);
  v11 = (char *)a3 + 8 * v5 + 12;
  v40 = v11;
  *((_DWORD *)this + 4) = 8 * (v5 + v3);
  v12 = *((_DWORD *)a3 + 3);
  if ( *((_DWORD *)a2 + 3) < v12 )
  {
    v15 = (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 20);
    FastRegion::Internal::CStripe::Copy(v10, (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 12));
    v30 = *(_DWORD *)v15;
    if ( (_DWORD)v9 + 8 + *((_DWORD *)v9 + 3) - (_DWORD)v10 - *((_DWORD *)v9 + 1) )
      v10 = (FastRegion::Internal::CStripe *)((char *)v9 + 8);
    v31 = *((_DWORD *)a3 + 3);
    if ( v30 < v31 )
    {
      v39 = (const struct FastRegion::Internal::CStripe *)((char *)v15 - 8);
      do
      {
        v15 = (const struct FastRegion::Internal::CStripe *)((char *)v15 + 8);
        v39 = (const struct FastRegion::Internal::CStripe *)((char *)v39 + 8);
        if ( v15 == v8 )
        {
          v17 = *(_DWORD *)v39;
          goto LABEL_9;
        }
        FastRegion::Internal::CStripe::Copy(v10, v39);
        if ( v10 == v9 )
        {
          if ( *((_DWORD *)v10 + 3) - *((_DWORD *)v10 + 1) != -8 )
            v10 = (FastRegion::Internal::CStripe *)((char *)v10 + 8);
        }
        else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious(v10) )
        {
          v10 = (FastRegion::Internal::CStripe *)((char *)v10 + 8);
        }
        v30 = *(_DWORD *)v15;
        v31 = *((_DWORD *)a3 + 3);
      }
      while ( *(_DWORD *)v15 < v31 );
    }
    v13 = (char *)a3 + 20;
    if ( v30 > v31 )
    {
      v32 = (const struct FastRegion::Internal::CStripe *)((char *)v15 - 8);
    }
    else
    {
      v15 = (const struct FastRegion::Internal::CStripe *)((char *)v15 + 8);
      v32 = (const struct FastRegion::Internal::CStripe *)((char *)v15 - 8);
      if ( v15 == v8 )
      {
        v17 = *(_DWORD *)v32;
        goto LABEL_9;
      }
    }
    v14 = (const struct FastRegion::Internal::CRgnData *)((char *)a3 + 12);
    FastRegion::Internal::CStripe::Subtract(
      v10,
      v32,
      (const struct FastRegion::Internal::CRgnData *)((char *)a3 + 12),
      (const struct FastRegion::Internal::CRgnData *)((char *)a3 + 12));
    if ( v10 != v9 )
    {
      if ( !FastRegion::Internal::CStripe::IsEqualToPrevious(v10) )
        v10 = (FastRegion::Internal::CStripe *)((char *)v10 + 8);
      goto LABEL_5;
    }
    v28 = (char *)v10 + 8;
    v29 = *((_DWORD *)v10 + 3) - *((_DWORD *)v10 + 1);
    goto LABEL_24;
  }
  v13 = (char *)a3 + 20;
  if ( *v4 > v12 )
  {
    while ( 1 )
    {
      v25 = *(_DWORD *)v13;
      if ( *v4 < *(_DWORD *)v13 )
      {
        v15 = (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 20);
        v26 = (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 12);
        v27 = v10;
        goto LABEL_23;
      }
      v13 += 8;
      if ( *v4 <= v25 )
        break;
      if ( v13 == v11 )
      {
        v15 = (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 20);
        v34 = (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 12);
        v27 = v10;
        goto LABEL_35;
      }
    }
    v15 = (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 20);
    v33 = v13 == v11;
    v27 = v10;
    v26 = (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 12);
    if ( v33 )
    {
      v34 = (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 12);
LABEL_35:
      FastRegion::Internal::CStripe::Copy(v27, v34);
      v35 = (char *)v9 + 8;
      v36 = *((_DWORD *)v9 + 3) - *((_DWORD *)v9 + 1);
      goto LABEL_36;
    }
LABEL_23:
    v14 = (const struct FastRegion::Internal::CStripe *)(v13 - 8);
    FastRegion::Internal::CStripe::Subtract(
      v27,
      (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 12),
      (const struct FastRegion::Internal::CStripe *)(v13 - 8),
      v26);
    v28 = (char *)v9 + 8;
    v29 = *((_DWORD *)v9 + 3) - *((_DWORD *)v9 + 1);
LABEL_24:
    if ( (_DWORD)v28 + v29 - (_DWORD)v10 )
      v10 = (FastRegion::Internal::CStripe *)v28;
    goto LABEL_5;
  }
  v14 = (const struct FastRegion::Internal::CRgnData *)((char *)a3 + 12);
  v15 = (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 20);
  FastRegion::Internal::CStripe::Subtract(
    v10,
    (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 12),
    (const struct FastRegion::Internal::CRgnData *)((char *)a3 + 12),
    (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 12));
  if ( (_DWORD)v9 + 8 + *((_DWORD *)v9 + 3) - (_DWORD)v10 - *((_DWORD *)v9 + 1) )
    v10 = (FastRegion::Internal::CStripe *)((char *)v9 + 8);
LABEL_5:
  v16 = (const struct FastRegion::Internal::CStripe *)((char *)v15 - 8);
  while ( 1 )
  {
    v17 = *(_DWORD *)v15;
    v18 = v15;
    v19 = *(_DWORD *)v13;
    if ( *(_DWORD *)v15 < *(_DWORD *)v13 )
    {
      v15 = (const struct FastRegion::Internal::CStripe *)((char *)v15 + 8);
      v16 = (const struct FastRegion::Internal::CStripe *)((char *)v16 + 8);
      if ( v15 == v8 )
        goto LABEL_9;
      goto LABEL_41;
    }
    v13 += 8;
    if ( v17 <= v19 )
      break;
    v14 = (const struct FastRegion::Internal::CStripe *)(v13 - 8);
    v18 = v16;
    v38 = (const struct FastRegion::Internal::CStripe *)(v13 - 8);
    if ( v13 == v40 )
      goto LABEL_50;
    v37 = (const struct FastRegion::Internal::CStripe *)(v13 - 8);
LABEL_42:
    FastRegion::Internal::CStripe::Subtract(v10, v18, v38, v37);
    if ( v10 == v9 )
    {
      if ( *((_DWORD *)v10 + 3) - *((_DWORD *)v10 + 1) != -8 )
        v10 = (FastRegion::Internal::CStripe *)((char *)v10 + 8);
    }
    else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious(v10) )
    {
      v10 = (FastRegion::Internal::CStripe *)((char *)v10 + 8);
    }
  }
  v15 = (const struct FastRegion::Internal::CStripe *)((char *)v15 + 8);
  v16 = (const struct FastRegion::Internal::CStripe *)((char *)v16 + 8);
  if ( v15 == v8 )
    goto LABEL_9;
  v14 = (const struct FastRegion::Internal::CStripe *)(v13 - 8);
  if ( v13 != v40 )
  {
LABEL_41:
    v37 = v18;
    v38 = v14;
    goto LABEL_42;
  }
  v38 = (const struct FastRegion::Internal::CStripe *)(v13 - 8);
LABEL_50:
  FastRegion::Internal::CStripe::Copy(v10, v18, v38);
  while ( 1 )
  {
    if ( v10 == v9 )
    {
      v35 = (char *)v10 + 8;
      v36 = *((_DWORD *)v10 + 3) - *((_DWORD *)v10 + 1);
LABEL_36:
      if ( (_DWORD)v35 + v36 - (_DWORD)v10 )
        v10 = (FastRegion::Internal::CStripe *)v35;
    }
    else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious(v10) )
    {
      v10 = (FastRegion::Internal::CStripe *)((char *)v10 + 8);
    }
    v15 = (const struct FastRegion::Internal::CStripe *)((char *)v15 + 8);
    if ( v15 == v8 )
      break;
    FastRegion::Internal::CStripe::Copy(v10, (const struct FastRegion::Internal::CStripe *)((char *)v15 - 8));
  }
  v17 = *((_DWORD *)v15 - 2);
LABEL_9:
  *(_DWORD *)v10 = v17;
  if ( v10 != v9 && (char *)v10 + *((int *)v10 + 1) != (char *)v10 + *((int *)v10 - 1) - 8 )
    v10 = (FastRegion::Internal::CStripe *)((char *)v10 + 8);
  v20 = (v10 - this - 12) >> 3;
  *(_DWORD *)this = v20;
  if ( (_DWORD)v20 )
  {
    v21 = (FastRegion::Internal::CStripe *)((char *)v10 - 8);
    *((_DWORD *)this + 1) = 0x7FFFFFFF;
    *((_DWORD *)this + 2) = 0x80000000;
    v22 = (_DWORD *)((char *)v21 + *((int *)v21 + 1));
    while ( 1 )
    {
      v21 = (FastRegion::Internal::CStripe *)((char *)v21 - 8);
      if ( v21 < v9 )
        break;
      v23 = v22;
      v22 = (_DWORD *)((char *)v21 + *((int *)v21 + 1));
      if ( v22 != v23 )
      {
        if ( *((_DWORD *)this + 1) > *v22 )
          *((_DWORD *)this + 1) = *v22;
        v24 = *(v23 - 1);
        if ( *((_DWORD *)this + 2) < v24 )
          *((_DWORD *)this + 2) = v24;
      }
    }
  }
}
