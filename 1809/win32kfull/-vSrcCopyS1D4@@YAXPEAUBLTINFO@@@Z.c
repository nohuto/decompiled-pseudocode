/*
 * XREFs of ?vSrcCopyS1D4@@YAXPEAUBLTINFO@@@Z @ 0x1C0119E50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vSrcCopyS1D4(struct BLTINFO *a1)
{
  struct BLTINFO *v1; // rbx
  int v2; // r10d
  int v3; // r13d
  char *v4; // rdx
  int v5; // r12d
  char v6; // r8
  char v7; // r9
  int v8; // edx
  char v9; // al
  int v10; // r8d
  unsigned int v11; // r15d
  char v12; // r9
  unsigned int v13; // r14d
  char v14; // si
  char v15; // cl
  int v16; // edi
  int v17; // r10d
  _BYTE *v18; // r9
  __int64 v19; // rdx
  _BYTE *v20; // r8
  int v21; // ecx
  int v22; // eax
  __int64 v23; // r12
  __int64 v24; // rdi
  __int64 v25; // r15
  __int64 v26; // rdx
  __int64 v27; // r11
  unsigned int v28; // ecx
  unsigned __int64 v29; // rax
  int v30; // edx
  char v31; // r13
  __int64 v32; // r12
  _BYTE *v33; // r11
  unsigned __int8 v34; // al
  unsigned __int64 v35; // rdx
  int v36; // r11d
  int v37; // eax
  int v38; // r9d
  int *v39; // r8
  char *v40; // r10
  char v41; // r15
  char v42; // al
  unsigned __int64 v43; // rdx
  unsigned __int64 v44; // rdx
  int v45; // ecx
  unsigned __int8 v46; // al
  int v47; // ecx
  char v48; // r14
  unsigned __int64 v49; // rdx
  int v50; // ecx
  int v51; // r10d
  _BYTE *v52; // r9
  int *v53; // r8
  int v54; // r11d
  unsigned __int8 v55; // al
  int v56; // ecx
  char v57; // di
  char v58; // si
  __int64 v59; // rdx
  unsigned __int64 v60; // rax
  int v61; // ecx
  unsigned __int64 v62; // rdx
  int v63; // [rsp+0h] [rbp-48h]
  int v64; // [rsp+4h] [rbp-44h]
  int v65; // [rsp+8h] [rbp-40h]
  int v66; // [rsp+Ch] [rbp-3Ch]
  int v67; // [rsp+10h] [rbp-38h]
  unsigned int v68; // [rsp+14h] [rbp-34h]
  int v69; // [rsp+20h] [rbp-28h]
  __int64 v70; // [rsp+38h] [rbp-10h]
  char v72; // [rsp+98h] [rbp+50h]
  char v73; // [rsp+99h] [rbp+51h]
  char v74; // [rsp+9Ah] [rbp+52h]
  char v75; // [rsp+9Bh] [rbp+53h]
  int v76; // [rsp+A0h] [rbp+58h]
  int v77; // [rsp+A8h] [rbp+60h]

  v1 = a1;
  v69 = *((_DWORD *)a1 + 13);
  v2 = *((_DWORD *)a1 + 7);
  v3 = *((_DWORD *)a1 + 11);
  v4 = *(char **)(*(_QWORD *)a1 + 16LL);
  v5 = *((_DWORD *)a1 + 10);
  v76 = v2;
  v67 = v3;
  v6 = *v4;
  v7 = v4[4];
  LOBYTE(v4) = 16 * *v4;
  v65 = v5;
  v72 = v6 | (unsigned __int8)v4;
  v73 = v7 | (unsigned __int8)v4;
  v8 = *((_DWORD *)a1 + 14);
  v9 = v6 | (16 * v7);
  v10 = *((_DWORD *)a1 + 12);
  v74 = v9;
  v11 = v10 & 7;
  v75 = v7 | (16 * v7);
  v68 = v11;
  v12 = v8 + v2;
  v13 = v8 & 7;
  v64 = v8 + v2;
  v14 = (v10 & 7) - v13 + 8;
  if ( v11 >= v13 )
    v14 = (v10 & 7) - v13;
  v15 = 8 - v14;
  v16 = (v8 + v2) >> 3;
  v77 = (unsigned __int8)(8 - v14);
  v66 = v8 >> 3;
  v63 = v16;
  if ( v16 != v8 >> 3 )
  {
    v17 = *((_DWORD *)v1 + 8);
    v18 = (_BYTE *)(*((_QWORD *)v1 + 2) + (((__int64)(v8 + 7) >> 1) & 0xFFFFFFFFFFFFFFFCuLL));
    LODWORD(v19) = v16 - ((v8 + 7) >> 3);
    v20 = (_BYTE *)(*((_QWORD *)v1 + 1) + ((__int64)(int)(v10 + (-v13 & 7)) >> 3));
    v21 = v3 - 4 * v19;
    v22 = v5 - v19;
    if ( v14 )
    {
      if ( !v17 )
        goto LABEL_13;
      v31 = v77;
      v19 = (int)v19;
      v70 = (int)v19;
      v32 = v22;
      do
      {
        v33 = &v20[v19];
        --v17;
        v34 = *v20 << v14;
        if ( v20 != &v20[v19] )
        {
          do
          {
            v35 = v34 | ((unsigned __int64)(unsigned __int8)*++v20 >> v31);
            *v18 = *(&v72 + (v35 >> 6));
            v18[1] = *(&v72 + ((v35 >> 4) & 3));
            v18[2] = *(&v72 + ((v35 >> 2) & 3));
            v18[3] = *(&v72 + (v35 & 3));
            v18 += 4;
            v34 = *v20 << v14;
          }
          while ( v20 != v33 );
          v19 = v70;
        }
        v18 += v21;
        v20 += v32;
      }
      while ( v17 );
      v1 = a1;
    }
    else
    {
      if ( !v17 )
      {
LABEL_13:
        v2 = v76;
        v12 = v64;
        v15 = v77;
        goto LABEL_14;
      }
      v23 = v22;
      v24 = (int)v19;
      v25 = v21;
      do
      {
        --v17;
        v26 = v24;
        v27 = 0LL;
        if ( v20 > &v20[v24] )
          v26 = 0LL;
        if ( v26 )
        {
          do
          {
            v28 = (unsigned __int8)*v20;
            ++v27;
            v29 = (unsigned __int8)*v20++;
            *v18 = *(&v72 + (v29 >> 6));
            v18[1] = *(&v72 + ((v28 >> 4) & 3));
            v18[2] = *(&v72 + ((v28 >> 2) & 3));
            v18[3] = *(&v72 + (v28 & 3));
            v18 += 4;
          }
          while ( v27 != v26 );
        }
        v18 += v25;
        v20 += v23;
      }
      while ( v17 );
    }
    v11 = v68;
    v16 = v63;
    v5 = v65;
    v3 = v67;
    goto LABEL_13;
  }
LABEL_14:
  v30 = v66;
  if ( v13 | (v16 == v66) )
  {
    v36 = dword_1C02DED38[v13];
    if ( v16 == v66 )
      v36 &= dword_1C02DECC8[v12 & 7];
    v37 = v2 + v11;
    v38 = *((_DWORD *)v1 + 8);
    v39 = (int *)(*((_QWORD *)v1 + 2) + (((__int64)*((int *)v1 + 14) >> 1) & 0xFFFFFFFFFFFFFFFCuLL));
    v40 = (char *)(*((_QWORD *)v1 + 1) + ((__int64)*((int *)v1 + 12) >> 3));
    if ( v11 < v13 )
    {
      if ( !v38 )
        goto LABEL_15;
      v48 = v15;
      do
      {
        v49 = (unsigned __int64)(unsigned __int8)*v40 >> v48;
        v40 += v5;
        v50 = *v39 & ~v36;
        LOBYTE(v76) = *(&v72 + (v49 >> 6));
        BYTE1(v76) = *(&v72 + ((v49 >> 4) & 3));
        BYTE2(v76) = *(&v72 + ((v49 >> 2) & 3));
        HIBYTE(v76) = *(&v72 + (v49 & 3));
        v76 &= v36;
        *v39 = v76 | v50;
        v39 = (int *)((char *)v39 + v3);
        --v38;
      }
      while ( v38 );
    }
    else
    {
      if ( v37 <= 8 )
      {
        if ( !v38 )
          goto LABEL_15;
        do
        {
          v46 = *v40 << v14;
          v40 += v5;
          LOBYTE(v76) = *(&v72 + ((unsigned __int64)v46 >> 6));
          BYTE1(v76) = *(&v72 + (((unsigned __int64)v46 >> 4) & 3));
          BYTE2(v76) = *(&v72 + (((unsigned __int64)v46 >> 2) & 3));
          v47 = *v39 & ~v36;
          HIBYTE(v76) = *(&v72 + (v46 & 3));
          v76 &= v36;
          *v39 = v76 | v47;
          v39 = (int *)((char *)v39 + v3);
          --v38;
        }
        while ( v38 );
LABEL_39:
        v16 = v63;
        v30 = v66;
        goto LABEL_15;
      }
      if ( !v38 )
        goto LABEL_15;
      v41 = v15;
      do
      {
        v42 = *v40;
        v43 = (unsigned __int8)v40[1];
        v40 += v5;
        v44 = (unsigned __int8)(v42 << v14) | (v43 >> v41);
        v45 = *v39 & ~v36;
        LOBYTE(v76) = *(&v72 + (v44 >> 6));
        BYTE1(v76) = *(&v72 + ((v44 >> 4) & 3));
        BYTE2(v76) = *(&v72 + ((v44 >> 2) & 3));
        HIBYTE(v76) = *(&v72 + (v44 & 3));
        v76 &= v36;
        *v39 = v76 | v45;
        v39 = (int *)((char *)v39 + v3);
        --v38;
      }
      while ( v38 );
      v1 = a1;
    }
    v5 = v65;
    goto LABEL_39;
  }
LABEL_15:
  if ( (v64 & 7) != 0 && v16 != v30 )
  {
    v51 = *((_DWORD *)v1 + 8);
    v52 = (_BYTE *)(*((_QWORD *)v1 + 1) + ((*((int *)v1 + 13) - 1LL) >> 3));
    v53 = (int *)(*((_QWORD *)v1 + 2) + (((__int64)v64 >> 1) & 0xFFFFFFFFFFFFFFFCuLL));
    v54 = dword_1C02DECC8[v64 & 7];
    if ( (unsigned __int8)((v69 - 1) & 7) < (unsigned __int8)((v64 - 1) & 7) )
    {
      if ( v51 )
      {
        v57 = v14;
        v58 = v77;
        do
        {
          v59 = (unsigned __int8)(*(v52 - 1) << v57);
          v60 = (unsigned __int8)*v52;
          v52 += v5;
          v61 = *v53 & ~v54;
          v62 = (v60 >> v58) | v59;
          LOBYTE(v76) = *(&v72 + (v62 >> 6));
          BYTE1(v76) = *(&v72 + ((v62 >> 4) & 3));
          BYTE2(v76) = *(&v72 + ((v62 >> 2) & 3));
          HIBYTE(v76) = *(&v72 + (v62 & 3));
          v76 &= v54;
          *v53 = v76 | v61;
          v53 = (int *)((char *)v53 + v3);
          --v51;
        }
        while ( v51 );
      }
    }
    else
    {
      for ( ; v51; --v51 )
      {
        v55 = *v52 << v14;
        v52 += v5;
        LOBYTE(v76) = *(&v72 + ((unsigned __int64)v55 >> 6));
        BYTE1(v76) = *(&v72 + (((unsigned __int64)v55 >> 4) & 3));
        BYTE2(v76) = *(&v72 + (((unsigned __int64)v55 >> 2) & 3));
        v56 = *v53 & ~v54;
        HIBYTE(v76) = *(&v72 + (v55 & 3));
        v76 &= v54;
        *v53 = v76 | v56;
        v53 = (int *)((char *)v53 + v3);
      }
    }
  }
}
