/*
 * XREFs of ?vSrcCopyS1D4@@YAXPEAUBLTINFO@@@Z @ 0x1C012D400
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vSrcCopyS1D4(struct BLTINFO *a1)
{
  struct BLTINFO *v1; // r10
  char *v2; // rdx
  char v3; // r8
  char v4; // r9
  char v5; // al
  int v6; // r8d
  int v7; // ecx
  int v8; // r14d
  int v9; // edi
  char v10; // r9
  int v11; // ebx
  int v12; // r13d
  int v13; // edx
  int v14; // r12d
  char v15; // r11
  int v16; // r15d
  int v17; // ebx
  int v18; // ecx
  _BYTE *v19; // r11
  __int64 v20; // rdx
  _BYTE *v21; // r8
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // r10
  __int64 v25; // r14
  __int64 v26; // rdx
  __int64 v27; // rsi
  unsigned int v28; // ecx
  unsigned __int64 v29; // rax
  __int64 v30; // r13
  char v31; // r12
  unsigned __int8 v32; // al
  _BYTE *v33; // r12
  unsigned __int64 v34; // rdx
  int v35; // esi
  int v36; // eax
  int v37; // r11d
  int *v38; // r8
  char *v39; // rbx
  __int64 v40; // r10
  char v41; // al
  unsigned __int64 v42; // rdx
  unsigned __int64 v43; // rdx
  int v44; // ecx
  unsigned __int8 v45; // al
  int v46; // ecx
  __int64 v47; // r15
  unsigned __int64 v48; // rdx
  int v49; // ecx
  int *v50; // r8
  int v51; // ebx
  _BYTE *v52; // r11
  int v53; // r10d
  unsigned __int8 v54; // al
  int v55; // ecx
  __int64 v56; // rdx
  unsigned __int64 v57; // rax
  int v58; // ecx
  unsigned __int64 v59; // rdx
  int v60; // [rsp+0h] [rbp-58h]
  int v61; // [rsp+4h] [rbp-54h]
  int v62; // [rsp+8h] [rbp-50h]
  int v63; // [rsp+Ch] [rbp-4Ch]
  char v64; // [rsp+10h] [rbp-48h]
  int v65; // [rsp+14h] [rbp-44h]
  __int64 v66; // [rsp+18h] [rbp-40h]
  int v67; // [rsp+20h] [rbp-38h]
  int v68; // [rsp+28h] [rbp-30h]
  __int64 v69; // [rsp+40h] [rbp-18h]
  char v71; // [rsp+B0h] [rbp+58h]
  char v72; // [rsp+B1h] [rbp+59h]
  char v73; // [rsp+B2h] [rbp+5Ah]
  char v74; // [rsp+B3h] [rbp+5Bh]
  int v75; // [rsp+B8h] [rbp+60h]

  v1 = a1;
  v68 = *((_DWORD *)a1 + 13);
  v2 = *(char **)(*(_QWORD *)a1 + 16LL);
  v3 = *v2;
  v4 = v2[4];
  LOBYTE(v2) = 16 * *v2;
  v71 = v3 | (unsigned __int8)v2;
  v72 = v4 | (unsigned __int8)v2;
  v5 = v3 | (16 * v4);
  v74 = v4 | (16 * v4);
  v6 = *((_DWORD *)a1 + 12);
  v7 = *((_DWORD *)a1 + 14);
  v8 = v6 & 7;
  v73 = v5;
  v9 = v7 & 7;
  v65 = v8;
  v10 = v8 - v9;
  if ( v8 < (unsigned int)v9 )
    v10 += 8;
  v11 = *((_DWORD *)v1 + 7);
  v12 = *((_DWORD *)v1 + 11);
  v13 = *((_DWORD *)v1 + 10);
  v14 = v7 >> 3;
  v15 = v7 + v11;
  v64 = 8 - v10;
  v16 = (v7 + v11) >> 3;
  v75 = v11;
  v62 = v7 + v11;
  v67 = v12;
  v60 = v13;
  v61 = v7 >> 3;
  v63 = v16;
  if ( v16 != v7 >> 3 )
  {
    v17 = *((_DWORD *)v1 + 8);
    v18 = v7 + 7;
    v19 = (_BYTE *)(*((_QWORD *)v1 + 2) + (((__int64)v18 >> 1) & 0xFFFFFFFFFFFFFFFCuLL));
    LODWORD(v20) = v16 - (v18 >> 3);
    v21 = (_BYTE *)(*((_QWORD *)v1 + 1) + ((__int64)(v6 + (-v9 & 7)) >> 3));
    LODWORD(v22) = v12 - 4 * v20;
    v23 = v60 - v20;
    if ( v10 )
    {
      if ( !v17 )
        goto LABEL_14;
      v20 = (int)v20;
      v69 = (int)v20;
      v30 = v23;
      v31 = v10;
      do
      {
        v32 = *v21 << v31;
        --v17;
        if ( v21 != &v21[v20] )
        {
          v33 = &v21[v20];
          do
          {
            v34 = v32 | ((unsigned __int64)(unsigned __int8)*++v21 >> (8 - v10));
            *v19 = *(&v71 + (v34 >> 6));
            v19[1] = *(&v71 + ((v34 >> 4) & 3));
            v19[2] = *(&v71 + ((v34 >> 2) & 3));
            v19[3] = *(&v71 + (v34 & 3));
            v19 += 4;
            v32 = *v21 << v10;
          }
          while ( v21 != v33 );
          v20 = v69;
          v31 = v10;
        }
        v19 += (int)v22;
        v21 += v30;
      }
      while ( v17 );
      v12 = v67;
    }
    else
    {
      if ( !v17 )
      {
LABEL_14:
        v11 = v75;
        v15 = v62;
        v13 = v60;
        goto LABEL_15;
      }
      v22 = (int)v22;
      v66 = (int)v22;
      v24 = v23;
      v25 = (int)v20;
      do
      {
        --v17;
        v26 = v25;
        v27 = 0LL;
        if ( v21 > &v21[v25] )
          v26 = 0LL;
        if ( v26 )
        {
          do
          {
            v28 = (unsigned __int8)*v21;
            ++v27;
            v29 = (unsigned __int8)*v21++;
            *v19 = *(&v71 + (v29 >> 6));
            v19[1] = *(&v71 + ((v28 >> 4) & 3));
            v19[2] = *(&v71 + ((v28 >> 2) & 3));
            v19[3] = *(&v71 + (v28 & 3));
            v19 += 4;
          }
          while ( v27 != v26 );
          v22 = v66;
        }
        v19 += v22;
        v21 += v24;
      }
      while ( v17 );
    }
    v14 = v61;
    v8 = v65;
    v1 = a1;
    goto LABEL_14;
  }
LABEL_15:
  if ( v9 | (v16 == v14) )
  {
    v35 = dword_1C02EC428[v9];
    if ( v16 == v14 )
      v35 &= dword_1C02EC3B8[v15 & 7];
    v36 = v11 + v8;
    v37 = *((_DWORD *)v1 + 8);
    v38 = (int *)(*((_QWORD *)v1 + 2) + (((__int64)*((int *)v1 + 14) >> 1) & 0xFFFFFFFFFFFFFFFCuLL));
    v39 = (char *)(*((_QWORD *)v1 + 1) + ((__int64)*((int *)v1 + 12) >> 3));
    if ( v8 < v9 )
    {
      if ( !v37 )
        goto LABEL_16;
      v47 = v13;
      do
      {
        v48 = (unsigned __int64)(unsigned __int8)*v39 >> v64;
        v39 += v47;
        v49 = *v38 & ~v35;
        LOBYTE(v75) = *(&v71 + (v48 >> 6));
        BYTE1(v75) = *(&v71 + ((v48 >> 4) & 3));
        BYTE2(v75) = *(&v71 + ((v48 >> 2) & 3));
        HIBYTE(v75) = *(&v71 + (v48 & 3));
        v75 &= v35;
        *v38 = v75 | v49;
        v38 = (int *)((char *)v38 + v12);
        --v37;
      }
      while ( v37 );
    }
    else
    {
      if ( v36 <= 8 )
      {
        if ( !v37 )
          goto LABEL_16;
        do
        {
          v45 = *v39 << v10;
          v39 += v60;
          LOBYTE(v75) = *(&v71 + ((unsigned __int64)v45 >> 6));
          BYTE1(v75) = *(&v71 + (((unsigned __int64)v45 >> 4) & 3));
          BYTE2(v75) = *(&v71 + (((unsigned __int64)v45 >> 2) & 3));
          v46 = *v38 & ~v35;
          HIBYTE(v75) = *(&v71 + (v45 & 3));
          v75 &= v35;
          *v38 = v75 | v46;
          v38 = (int *)((char *)v38 + v12);
          --v37;
        }
        while ( v37 );
        v1 = a1;
LABEL_41:
        v14 = v61;
        goto LABEL_16;
      }
      if ( !v37 )
        goto LABEL_16;
      v40 = v13;
      do
      {
        v41 = *v39;
        v42 = (unsigned __int8)v39[1];
        v39 += v40;
        v43 = (unsigned __int8)(v41 << v10) | (v42 >> v64);
        v44 = *v38 & ~v35;
        LOBYTE(v75) = *(&v71 + (v43 >> 6));
        BYTE1(v75) = *(&v71 + ((v43 >> 4) & 3));
        BYTE2(v75) = *(&v71 + ((v43 >> 2) & 3));
        HIBYTE(v75) = *(&v71 + (v43 & 3));
        v75 &= v35;
        *v38 = v75 | v44;
        v38 = (int *)((char *)v38 + v12);
        --v37;
      }
      while ( v37 );
      v1 = a1;
    }
    v16 = v63;
    goto LABEL_41;
  }
LABEL_16:
  if ( (v62 & 7) != 0 && v16 != v14 )
  {
    v50 = (int *)(*((_QWORD *)v1 + 2) + (((__int64)v62 >> 1) & 0xFFFFFFFFFFFFFFFCuLL));
    v51 = dword_1C02EC3B8[v62 & 7];
    v52 = (_BYTE *)(*((_QWORD *)v1 + 1) + ((__int64)(*((_DWORD *)v1 + 13) - 1) >> 3));
    v53 = *((_DWORD *)v1 + 8);
    if ( (unsigned __int8)((v68 - 1) & 7) < (unsigned __int8)((v62 - 1) & 7) )
    {
      for ( ; v53; --v53 )
      {
        v56 = (unsigned __int8)(*(v52 - 1) << v10);
        v57 = (unsigned __int8)*v52;
        v52 += v60;
        v58 = *v50 & ~v51;
        v59 = (v57 >> v64) | v56;
        LOBYTE(v75) = *(&v71 + (v59 >> 6));
        BYTE1(v75) = *(&v71 + ((v59 >> 4) & 3));
        BYTE2(v75) = *(&v71 + ((v59 >> 2) & 3));
        HIBYTE(v75) = *(&v71 + (v59 & 3));
        v75 &= v51;
        *v50 = v75 | v58;
        v50 = (int *)((char *)v50 + v12);
      }
    }
    else
    {
      for ( ; v53; --v53 )
      {
        v54 = *v52 << v10;
        v52 += v60;
        LOBYTE(v75) = *(&v71 + ((unsigned __int64)v54 >> 6));
        BYTE1(v75) = *(&v71 + (((unsigned __int64)v54 >> 4) & 3));
        BYTE2(v75) = *(&v71 + (((unsigned __int64)v54 >> 2) & 3));
        v55 = *v50 & ~v51;
        HIBYTE(v75) = *(&v71 + (v54 & 3));
        v75 &= v51;
        *v50 = v75 | v55;
        v50 = (int *)((char *)v50 + v12);
      }
    }
  }
}
