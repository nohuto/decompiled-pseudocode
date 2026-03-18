/*
 * XREFs of ?vInitStrDDA@@YAXPEAU_STRDDA@@PEAU_RECTL@@11@Z @ 0x1C00D9F14
 * Callers:
 *     ?EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C00A3068 (-EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_.c)
 *     ?EngStretchBltOld@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54KPEAH@Z @ 0x1C025ED3C (-EngStretchBltOld@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_.c)
 * Callees:
 *     STR_DIV @ 0x1C00DA15C (STR_DIV.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

void __fastcall vInitStrDDA(struct _STRDDA *a1, struct _RECTL *a2, struct _RECTL *a3, struct _RECTL *a4)
{
  LONG left; // edx
  __int64 v6; // rbx
  struct _RECTL *v7; // r12
  struct _RECTL *v8; // r11
  LONG right; // esi
  LONG v11; // r13d
  int *v12; // r10
  __int64 v13; // r11
  int v14; // r15d
  int v15; // r9d
  int v16; // edx
  int v17; // r8d
  int v18; // r13d
  _DWORD *v19; // r14
  int v20; // r12d
  int v21; // ecx
  LONG v22; // eax
  signed int v23; // esi
  LONG v24; // r13d
  __int64 v25; // r10
  int v26; // r15d
  int v27; // r14d
  int v28; // r11d
  unsigned int v29; // r9d
  int v30; // r8d
  int v31; // edx
  int v32; // ecx
  int v33; // eax
  int v34; // ecx
  __int64 v35; // r14
  LONG v36; // ecx
  int v37; // eax
  LONG v38; // edx
  LONG top; // ecx
  int v40; // eax
  __int64 v41; // r14
  int v42; // ecx
  int v43; // eax
  int v44; // edx
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
  v6 = 0LL;
  v7 = a4;
  v8 = a3;
  if ( *(_QWORD *)&a3->left )
  {
    top = a3->top;
    v8 = (struct _RECTL *)&v51[4];
    v40 = a2->left - left;
    *(_QWORD *)&v51[4] = 0LL;
    v48 = v40;
    v49 = a2->top - top;
    v50 = a2->right - left;
    *(_QWORD *)v51 = (unsigned int)(a2->bottom - top);
    v52 = a3->right - left;
    v53 = a3->bottom - top;
  }
  *((_QWORD *)a1 + 3) = (char *)a1 + 4 * v8->right + 32;
  right = v8->right;
  v11 = a4->left;
  STR_DIV(&v45, (unsigned int)(a4->right - a4->left), (unsigned int)right);
  v14 = 0;
  v15 = 0;
  v16 = ((right - 1) >> 1) + v46 - right;
  v17 = v45 + 1;
  if ( ((right - 1) >> 1) + v46 < right )
  {
    v16 = ((right - 1) >> 1) + v46;
    v17 = v45;
  }
  if ( *v12 > 0 )
  {
    v15 = *v12;
    v35 = (unsigned int)*v12;
    do
    {
      v14 = v17;
      v37 = v17 + v45;
      v17 += v45 + 1;
      v38 = v16 + v46;
      v36 = v38;
      if ( v38 < right )
        v17 = v37;
      v16 = v38 - right;
      if ( v36 < right )
        v16 = v36;
      --v35;
    }
    while ( v35 );
    v7 = v47;
    v6 = 0LL;
  }
  *(_DWORD *)a1 = v14 + v11;
  if ( v15 < v12[2] )
  {
    v18 = v45;
    v19 = (_DWORD *)((char *)a1 + 32);
    v20 = v46;
    do
    {
      v21 = v17 + v18;
      ++v15;
      *v19 = v17 - v14;
      v14 = v17;
      v22 = v16 + v20;
      v17 += v18 + 1;
      v16 = v16 + v20 - right;
      ++v19;
      if ( v22 < right )
      {
        v16 = v22;
        v17 = v21;
      }
    }
    while ( v15 < v12[2] );
    v7 = v47;
  }
  *((_DWORD *)a1 + 2) = v14 + v7->left;
  v23 = *(_DWORD *)(v13 + 12);
  v24 = v7->top;
  STR_DIV(&v45, (unsigned int)(v7->bottom - v24), (unsigned int)v23);
  v26 = v45;
  v27 = v46;
  v28 = 0;
  v29 = 0;
  v30 = v45 + 1;
  v31 = v46 + ((v23 - 1) >> 1) - v23;
  if ( v46 + ((v23 - 1) >> 1) < v23 )
  {
    v31 = v46 + ((v23 - 1) >> 1);
    v30 = v45;
  }
  if ( *(int *)(v25 + 4) > 0 )
  {
    v29 = *(_DWORD *)(v25 + 4);
    v41 = v29;
    do
    {
      v28 = v30;
      v43 = v30 + v45;
      v30 += v45 + 1;
      v44 = v31 + v46;
      v42 = v44;
      if ( v44 < v23 )
        v30 = v43;
      v31 = v44 - v23;
      if ( v42 < v23 )
        v31 = v42;
      --v41;
    }
    while ( v41 );
    v7 = v47;
    v27 = v46;
  }
  *((_DWORD *)a1 + 1) = v28 + v24;
  while ( (signed int)v29 < *(_DWORD *)(v25 + 12) )
  {
    v32 = v30 - v28;
    ++v29;
    v28 = v30;
    *(_DWORD *)(v6 + *((_QWORD *)a1 + 3)) = v32;
    v33 = v31 + v27;
    v34 = v30 + v26;
    v31 = v31 + v27 - v23;
    v30 += v26 + 1;
    v6 += 4LL;
    if ( v33 < v23 )
    {
      v31 = v33;
      v30 = v34;
    }
  }
  *((_DWORD *)a1 + 3) = v28 + v7->top;
}
