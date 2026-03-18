/*
 * XREFs of ?bMergeScanline@RGNMEMOBJ@@QEAAHAEAVSTACKOBJ@@@Z @ 0x1C0123864
 * Callers:
 *     NtGdiExtFloodFill @ 0x1C0122B80 (NtGdiExtFloodFill.c)
 * Callees:
 *     ?bExpandScanline@STACKOBJ@@QEAAHKK@Z @ 0x1C0123738 (-bExpandScanline@STACKOBJ@@QEAAHKK@Z.c)
 *     ?vMergeSpans@@YAXPEAU_SPAN@@0000@Z @ 0x1C0123CB8 (-vMergeSpans@@YAXPEAU_SPAN@@0000@Z.c)
 */

__int64 __fastcall RGNMEMOBJ::bMergeScanline(RGNMEMOBJ *this, struct STACKOBJ *a2)
{
  __int64 v2; // rbp
  signed int *v3; // rdi
  struct STACKOBJ *v4; // r9
  int v6; // r8d
  signed int v7; // edx
  unsigned int v8; // ecx
  int v9; // r10d
  unsigned int v10; // r13d
  signed int v11; // r8d
  unsigned int *v12; // rbx
  unsigned int *v13; // r14
  unsigned int v14; // ecx
  unsigned int v15; // r8d
  signed int v16; // eax
  unsigned int *v17; // rdi
  __int64 v18; // rcx
  unsigned int v19; // eax
  _DWORD *v20; // rdx
  signed int v21; // eax
  signed int v22; // eax
  unsigned int v24; // ebx
  unsigned int v25; // r14d
  unsigned int *v26; // r9
  unsigned int v27; // edx
  _DWORD *v28; // r8
  unsigned int *v29; // r8
  unsigned int v30; // eax
  __int64 v31; // rcx
  unsigned int *v32; // r8
  int v33; // ecx
  __int64 v34; // r12
  int v35; // edx
  unsigned int v36; // edx
  int v37; // [rsp+60h] [rbp+8h]

  v2 = 0LL;
  v3 = (signed int *)*((_QWORD *)a2 + 1);
  v4 = a2;
  v6 = *(_DWORD *)(*(_QWORD *)this + 80LL);
  v7 = v3[1];
  v8 = *(_DWORD *)(*(_QWORD *)this + 24LL);
  if ( v6 == 120 )
  {
    v24 = 2 * v7;
    v25 = 8 * v7 + 152;
    if ( v25 <= v8 || RGNOBJ::bExpand(this, 8 * v7 + 5088) )
    {
      v26 = (unsigned int *)(v3 + 6);
      v27 = 0;
      *(_DWORD *)(*(_QWORD *)this + 80LL) = v25;
      *(_DWORD *)(*(_QWORD *)this + 84LL) = 3;
      v28 = (_DWORD *)(*(_QWORD *)this + 104LL);
      v28[2] = *v3;
      v29 = (_DWORD *)((char *)v28 + (unsigned int)(4 * *v28 + 16));
      *v29 = v24;
      v29[1] = *v3;
      for ( v29[2] = *v3 + 1; v27 < v24; v29[v31 + 3] = *(v26 - 1) )
      {
        v30 = *v26;
        v26 += 2;
        v29[v27 + 3] = v30;
        v31 = v27 + 1;
        v27 += 2;
      }
      v29[v27 + 3] = v24;
      *(_DWORD *)(*(_QWORD *)this + 92LL) = *v3;
      *(_DWORD *)(*(_QWORD *)this + 100LL) = *v3 + 1;
      *(_DWORD *)(*(_QWORD *)this + 88LL) = v29[3];
      *(_DWORD *)(*(_QWORD *)this + 96LL) = v29[v24 + 2];
      v32 = &v29[*v29 + 4];
      *v32 = 0;
      v33 = *v3 + 1;
      *((_QWORD *)v32 + 1) = 0x7FFFFFFFLL;
      v32[1] = v33;
      *(_QWORD *)(*(_QWORD *)this + 40LL) = v32 + 4;
      return 1LL;
    }
  }
  else
  {
    v9 = 8 * v7;
    v37 = 8 * v7;
    v10 = 8 * v7 + 16;
    if ( v10 > v8 - v6 )
    {
      if ( !RGNOBJ::bExpand(this, v10 + v8 + 4936) )
        return 0LL;
      v4 = a2;
      v9 = v37;
    }
    v11 = *v3;
    v12 = (unsigned int *)(*(_QWORD *)this + 104LL);
    v13 = *(unsigned int **)(*(_QWORD *)this + 40LL);
    if ( *v3 > *(_DWORD *)(*(_QWORD *)this + 108LL) )
    {
      do
        v12 += *v12 + 4;
      while ( v11 > (int)v12[1] );
    }
    v14 = v12[1];
    if ( v11 != v14 )
    {
      v12[-*(v12 - 1) - 2] = v11;
      ++*(_DWORD *)(*(_QWORD *)this + 84LL);
      if ( *v3 < *(_DWORD *)(*(_QWORD *)this + 92LL) )
        *(_DWORD *)(*(_QWORD *)this + 92LL) = *v3;
      goto LABEL_8;
    }
    if ( v14 + 1 != v12[2] )
    {
      ++*(_DWORD *)(*(_QWORD *)this + 84LL);
      *(_DWORD *)(*(_QWORD *)this + 100LL) = *v3 + 1;
      v12[1] = *v3 + 1;
      goto LABEL_8;
    }
    v34 = *((_QWORD *)v4 + 2);
    v10 = v9;
    *(_DWORD *)v34 = v14;
    v35 = v3[1] + (*v12 >> 1);
    *(_DWORD *)(v34 + 4) = v35;
    v36 = 8 * v35 + 24;
    if ( v36 <= *(_DWORD *)(v34 + 8) )
    {
LABEL_30:
      vMergeSpans(
        (struct _SPAN *)(v12 + 3),
        (struct _SPAN *)&v12[*v12 + 3],
        (struct _SPAN *)(v3 + 6),
        (struct _SPAN *)&v3[2 * v3[1] + 6],
        (struct _SPAN *)(v34 + 24));
      v3 = (signed int *)v34;
LABEL_8:
      *(_QWORD *)(*(_QWORD *)this + 40LL) = (char *)v13 + v10;
      while ( v13 > v12 )
      {
        --v13;
        *(unsigned int *)((char *)v13 + v10) = *v13;
      }
      v15 = 2 * v3[1];
      *v12 = v15;
      v12[1] = *v3;
      v16 = *v3;
      v17 = (unsigned int *)(v3 + 6);
      v12[2] = v16 + 1;
      if ( v15 )
      {
        do
        {
          v18 = (unsigned int)(v2 + 1);
          v12[v2 + 3] = *v17;
          v2 = (unsigned int)(v2 + 2);
          v19 = v17[1];
          v17 += 2;
          v12[v18 + 3] = v19;
        }
        while ( (unsigned int)v2 < v15 );
      }
      v12[v2 + 3] = v15;
      v20 = *(_DWORD **)this;
      v21 = v12[3];
      if ( *(_DWORD *)(*(_QWORD *)this + 88LL) > v21 )
      {
        v20[22] = v21;
        v20 = *(_DWORD **)this;
      }
      v22 = v12[v15 + 2];
      if ( v20[24] < v22 )
      {
        v20[24] = v22;
        v20 = *(_DWORD **)this;
      }
      v20[20] += v10;
      return 1LL;
    }
    if ( (unsigned int)STACKOBJ::bExpandScanline(v4, v36, 0) )
    {
      v34 = *((_QWORD *)a2 + 2);
      goto LABEL_30;
    }
  }
  return 0LL;
}
