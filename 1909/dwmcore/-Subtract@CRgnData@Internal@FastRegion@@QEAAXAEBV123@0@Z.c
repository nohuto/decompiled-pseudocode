/*
 * XREFs of ?Subtract@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x18006E8AC
 * Callers:
 *     ?AddToCurrentFrameInvalidRegion@CHwFullScreenRenderTarget@@MEAAJAEBVCRegion@@@Z @ 0x18006E580 (-AddToCurrentFrameInvalidRegion@CHwFullScreenRenderTarget@@MEAAJAEBVCRegion@@@Z.c)
 *     ?Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800BAD5C (-Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 * Callees:
 *     ?IsEqualToPrevious@CStripe@Internal@FastRegion@@QEBA_NXZ @ 0x18006E334 (-IsEqualToPrevious@CStripe@Internal@FastRegion@@QEBA_NXZ.c)
 *     ?Copy@CStripe@Internal@FastRegion@@QEAAXPEBV123@@Z @ 0x18006E398 (-Copy@CStripe@Internal@FastRegion@@QEAAXPEBV123@@Z.c)
 *     ?Subtract@CStripe@Internal@FastRegion@@QEAAXPEBV123@00@Z @ 0x18006EC78 (-Subtract@CStripe@Internal@FastRegion@@QEAAXPEBV123@00@Z.c)
 *     ?Copy@CStripe@Internal@FastRegion@@QEAAXPEBV123@0@Z @ 0x1800C1624 (-Copy@CStripe@Internal@FastRegion@@QEAAXPEBV123@0@Z.c)
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
  FastRegion::Internal::CStripe *v9; // rbp
  FastRegion::Internal::CStripe *v10; // rbx
  char *v11; // rcx
  int v12; // eax
  char *v13; // rsi
  const struct FastRegion::Internal::CStripe *v14; // r14
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
  const struct FastRegion::Internal::CStripe *v25; // r9
  const struct FastRegion::Internal::CStripe *v26; // r8
  int v27; // eax
  int v28; // ecx
  const struct FastRegion::Internal::CStripe *v29; // rdx
  int v30; // eax
  const struct FastRegion::Internal::CStripe *v31; // r9
  FastRegion::Internal::CStripe *v32; // rcx
  char *v33; // rcx
  int v34; // eax
  char *v35; // rcx
  int v36; // eax
  const struct FastRegion::Internal::CStripe *v37; // rsi
  const struct FastRegion::Internal::CStripe *v38; // rdx
  bool v39; // zf
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
    if ( v10 == v9 )
    {
      if ( (_DWORD)v9 + 8 + *((_DWORD *)v9 + 3) - (_DWORD)v10 - *((_DWORD *)v9 + 1) )
        v10 = (FastRegion::Internal::CStripe *)((char *)v9 + 8);
    }
    else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious(v10) )
    {
      v10 = (FastRegion::Internal::CStripe *)((char *)v10 + 8);
    }
    v27 = *(_DWORD *)v15;
    v28 = *((_DWORD *)a3 + 3);
    if ( *(_DWORD *)v15 < v28 )
    {
      v37 = (const struct FastRegion::Internal::CStripe *)((char *)v15 - 8);
      do
      {
        v15 = (const struct FastRegion::Internal::CStripe *)((char *)v15 + 8);
        v37 = (const struct FastRegion::Internal::CStripe *)((char *)v37 + 8);
        if ( v15 == v8 )
        {
          v17 = *(_DWORD *)v37;
          goto LABEL_9;
        }
        FastRegion::Internal::CStripe::Copy(v10, v37);
        if ( v10 == v9 )
        {
          if ( *((_DWORD *)v10 + 3) - *((_DWORD *)v10 + 1) != -8 )
            v10 = (FastRegion::Internal::CStripe *)((char *)v10 + 8);
        }
        else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious(v10) )
        {
          v10 = (FastRegion::Internal::CStripe *)((char *)v10 + 8);
        }
        v27 = *(_DWORD *)v15;
        v28 = *((_DWORD *)a3 + 3);
      }
      while ( *(_DWORD *)v15 < v28 );
    }
    v13 = (char *)a3 + 20;
    if ( v27 <= v28 )
    {
      v15 = (const struct FastRegion::Internal::CStripe *)((char *)v15 + 8);
      v29 = (const struct FastRegion::Internal::CStripe *)((char *)v15 - 8);
      if ( v15 == v8 )
      {
        v17 = *(_DWORD *)v29;
        goto LABEL_9;
      }
    }
    else
    {
      v29 = (const struct FastRegion::Internal::CStripe *)((char *)v15 - 8);
    }
    v14 = (const struct FastRegion::Internal::CRgnData *)((char *)a3 + 12);
    FastRegion::Internal::CStripe::Subtract(
      v10,
      v29,
      (const struct FastRegion::Internal::CStripe *)(v13 - 8),
      (const struct FastRegion::Internal::CStripe *)(v13 - 8));
    if ( v10 != v9 )
    {
      if ( !FastRegion::Internal::CStripe::IsEqualToPrevious(v10) )
        v10 = (FastRegion::Internal::CStripe *)((char *)v10 + 8);
      goto LABEL_5;
    }
    v33 = (char *)v10 + 8;
    v34 = *((_DWORD *)v10 + 3) - *((_DWORD *)v10 + 1) - (_DWORD)v10;
    goto LABEL_38;
  }
  v13 = (char *)a3 + 20;
  if ( *((_DWORD *)a2 + 3) > v12 )
  {
    while ( 1 )
    {
      v30 = *(_DWORD *)v13;
      if ( *v4 < *(_DWORD *)v13 )
      {
        v15 = (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 20);
        v31 = (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 12);
        v32 = v10;
        goto LABEL_37;
      }
      v13 += 8;
      if ( *v4 <= v30 )
        break;
      if ( v13 == v11 )
      {
        v15 = (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 20);
        v38 = (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 12);
        v32 = v10;
LABEL_59:
        FastRegion::Internal::CStripe::Copy(v32, v38);
        v35 = (char *)v9 + 8;
        v36 = *((_DWORD *)v9 + 3) - (_DWORD)v10 - *((_DWORD *)v9 + 1);
        goto LABEL_51;
      }
    }
    v15 = (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 20);
    v39 = v13 == v11;
    v32 = v10;
    v31 = (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 12);
    if ( v39 )
    {
      v38 = (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 12);
      goto LABEL_59;
    }
LABEL_37:
    v14 = (const struct FastRegion::Internal::CStripe *)(v13 - 8);
    FastRegion::Internal::CStripe::Subtract(
      v32,
      (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 12),
      (const struct FastRegion::Internal::CStripe *)(v13 - 8),
      v31);
    v33 = (char *)v9 + 8;
    v34 = *((_DWORD *)v9 + 3) - (_DWORD)v10 - *((_DWORD *)v9 + 1);
LABEL_38:
    if ( (_DWORD)v33 + v34 )
      v10 = (FastRegion::Internal::CStripe *)v33;
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
      goto LABEL_22;
    }
    v13 += 8;
    if ( v17 <= v19 )
      break;
    v14 = (const struct FastRegion::Internal::CStripe *)(v13 - 8);
    v18 = v16;
    v26 = (const struct FastRegion::Internal::CStripe *)(v13 - 8);
    if ( v13 == v40 )
      goto LABEL_41;
    v25 = (const struct FastRegion::Internal::CStripe *)(v13 - 8);
LABEL_23:
    FastRegion::Internal::CStripe::Subtract(v10, v18, v26, v25);
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
LABEL_22:
    v25 = v18;
    v26 = v14;
    goto LABEL_23;
  }
  v26 = (const struct FastRegion::Internal::CStripe *)(v13 - 8);
LABEL_41:
  FastRegion::Internal::CStripe::Copy(v10, v18, v26);
  while ( 1 )
  {
    if ( v10 == v9 )
    {
      v35 = (char *)v10 + 8;
      v36 = *((_DWORD *)v10 + 3) - *((_DWORD *)v10 + 1) - (_DWORD)v10;
LABEL_51:
      if ( (_DWORD)v35 + v36 )
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
