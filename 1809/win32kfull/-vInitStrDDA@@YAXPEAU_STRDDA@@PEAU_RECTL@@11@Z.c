/*
 * XREFs of ?vInitStrDDA@@YAXPEAU_STRDDA@@PEAU_RECTL@@11@Z @ 0x1C00F313C
 * Callers:
 *     ?EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C0051258 (-EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_.c)
 *     ?EngStretchBltOld@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54KPEAH@Z @ 0x1C0272870 (-EngStretchBltOld@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_.c)
 * Callees:
 *     STR_DIV @ 0x1C00F33CC (STR_DIV.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

void __fastcall vInitStrDDA(struct _STRDDA *a1, struct _RECTL *a2, struct _RECTL *a3, struct _RECTL *a4)
{
  LONG left; // edx
  struct _RECTL *v6; // r14
  struct _RECTL *v7; // rbx
  LONG v9; // r12d
  int v10; // r9d
  int v11; // r10d
  int *v12; // r11
  int v13; // r13d
  int v14; // r8d
  int v15; // edx
  int v16; // r15d
  int v17; // esi
  int v18; // r14d
  _DWORD *v19; // r12
  int v20; // ecx
  int v21; // eax
  int v22; // edx
  LONG bottom; // esi
  LONG v24; // r12d
  __int64 v25; // r10
  __int64 v26; // r11
  int v27; // r15d
  int v28; // r13d
  int v29; // r8d
  LONG v30; // edx
  int v31; // ebx
  unsigned int v32; // r9d
  int v33; // ecx
  LONG v34; // ecx
  int v35; // eax
  LONG v36; // edx
  LONG top; // ecx
  int v38; // eax
  __int64 v39; // r13
  int v40; // eax
  int v41; // ecx
  __int64 v42; // r15
  LONG v43; // eax
  int v44; // ecx
  int v45; // [rsp+20h] [rbp-40h] BYREF
  int v46; // [rsp+24h] [rbp-3Ch]
  struct _RECTL *v47; // [rsp+30h] [rbp-30h]
  int v48; // [rsp+38h] [rbp-28h]
  int v49; // [rsp+3Ch] [rbp-24h]
  int v50; // [rsp+40h] [rbp-20h]
  _BYTE v51[12]; // [rsp+44h] [rbp-1Ch] BYREF
  int v52; // [rsp+50h] [rbp-10h]
  int v53; // [rsp+54h] [rbp-Ch]

  v47 = a4;
  left = a3->left;
  v6 = a4;
  v7 = a3;
  if ( *(_QWORD *)&a3->left )
  {
    top = a3->top;
    v7 = (struct _RECTL *)&v51[4];
    v38 = a2->left - left;
    *(_QWORD *)&v51[4] = 0LL;
    v48 = v38;
    v49 = a2->top - top;
    v50 = a2->right - left;
    *(_QWORD *)v51 = (unsigned int)(a2->bottom - top);
    v52 = a3->right - left;
    v53 = a3->bottom - top;
  }
  *((_QWORD *)a1 + 3) = (char *)a1 + 4 * v7->right + 32;
  v9 = a4->left;
  STR_DIV(&v45, (unsigned int)(a4->right - a4->left), (unsigned int)v7->right);
  v13 = v45;
  v14 = v45;
  v15 = v46 + ((v10 - 1) >> 1);
  if ( v15 >= v10 )
  {
    v14 = v45 + 1;
    v15 -= v10;
  }
  v16 = v11;
  v17 = v11;
  if ( *v12 > 0 )
  {
    v17 = *v12;
    v39 = (unsigned int)*v12;
    do
    {
      v40 = v15 + v46;
      v16 = v14;
      v41 = v14 + v45;
      v15 = v15 + v46 - v10;
      v14 += v45 + 1;
      if ( v40 < v10 )
      {
        v15 = v40;
        v14 = v41;
      }
      --v39;
    }
    while ( v39 );
    v6 = v47;
    v13 = v45;
  }
  *(_DWORD *)a1 = v9 + v16;
  if ( v17 < v12[2] )
  {
    v18 = v46;
    v19 = (_DWORD *)((char *)a1 + 32);
    do
    {
      ++v17;
      *v19 = v14 - v16;
      v21 = v14 + v13;
      v16 = v14;
      v14 += v13 + 1;
      v22 = v15 + v18;
      v20 = v22;
      if ( v22 < v10 )
        v14 = v21;
      ++v19;
      v15 = v22 - v10;
      if ( v20 < v10 )
        v15 = v20;
    }
    while ( v17 < v12[2] );
    v6 = v47;
  }
  *((_DWORD *)a1 + 2) = v16 + v6->left;
  bottom = v7->bottom;
  v24 = v6->top;
  STR_DIV(&v45, (unsigned int)(v6->bottom - v24), (unsigned int)bottom);
  v27 = v46;
  v28 = v45;
  v29 = v45;
  v30 = v46 + ((bottom - 1) >> 1);
  if ( v30 >= bottom )
  {
    v29 = v45 + 1;
    v30 -= bottom;
  }
  v31 = v25;
  v32 = v25;
  if ( *(int *)(v26 + 4) > 0 )
  {
    v32 = *(_DWORD *)(v26 + 4);
    v42 = v32;
    do
    {
      v43 = v30 + v46;
      v31 = v29;
      v44 = v29 + v45;
      v30 = v30 + v46 - bottom;
      v29 += v45 + 1;
      if ( v43 < bottom )
      {
        v30 = v43;
        v29 = v44;
      }
      --v42;
    }
    while ( v42 );
    v6 = v47;
    v27 = v46;
  }
  *((_DWORD *)a1 + 1) = v24 + v31;
  while ( (signed int)v32 < *(_DWORD *)(v26 + 12) )
  {
    v33 = v29 - v31;
    ++v32;
    v31 = v29;
    *(_DWORD *)(v25 + *((_QWORD *)a1 + 3)) = v33;
    v35 = v29 + v28;
    v29 += v28 + 1;
    v36 = v30 + v27;
    v34 = v36;
    if ( v36 < bottom )
      v29 = v35;
    v25 += 4LL;
    v30 = v36 - bottom;
    if ( v34 < bottom )
      v30 = v34;
  }
  *((_DWORD *)a1 + 3) = v31 + v6->top;
}
