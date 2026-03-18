/*
 * XREFs of ?vSrcCopyS1D4@@YAXPEAUBLTINFO@@@Z @ 0x1C010B5E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vSrcCopyS1D4(struct BLTINFO *a1)
{
  struct BLTINFO *v1; // rdi
  int v2; // r10d
  int v3; // r15d
  unsigned int v4; // esi
  char *v5; // rdx
  int v6; // r12d
  char v7; // r8
  char v8; // r9
  char v9; // al
  int v10; // r8d
  __int64 v11; // r13
  char v12; // r14
  int v13; // eax
  char v14; // cl
  char v15; // r9
  int v16; // r11d
  __int64 v17; // rdx
  _BYTE *v18; // r9
  __int64 v19; // rcx
  _BYTE *v20; // r8
  int v21; // eax
  unsigned __int8 v22; // bl
  __int64 v23; // rsi
  __int64 v24; // r12
  __int64 v25; // rdx
  __int64 v26; // rbx
  unsigned int v27; // ecx
  unsigned __int64 v28; // rax
  int v29; // r11d
  int v30; // ebx
  int *v31; // r8
  _BYTE *v32; // r9
  unsigned __int8 v33; // al
  int v34; // ecx
  char v35; // si
  __int64 v36; // r14
  _BYTE *v37; // rbx
  unsigned __int8 v38; // al
  unsigned __int64 v39; // rdx
  int v40; // r11d
  int v41; // ebx
  int *v42; // r8
  char *v43; // r9
  char v44; // di
  char v45; // al
  unsigned __int64 v46; // rdx
  unsigned __int64 v47; // rdx
  int v48; // ecx
  unsigned __int8 v49; // al
  int v50; // ecx
  char v51; // r13
  unsigned __int64 v52; // rdx
  int v53; // ecx
  __int64 v54; // rdx
  unsigned __int64 v55; // rax
  int v56; // ecx
  unsigned __int64 v57; // rdx
  char v58; // [rsp+0h] [rbp-48h]
  int v59; // [rsp+4h] [rbp-44h]
  int v60; // [rsp+8h] [rbp-40h]
  char v61; // [rsp+Ch] [rbp-3Ch]
  int v62; // [rsp+18h] [rbp-30h]
  int v63; // [rsp+1Ch] [rbp-2Ch]
  __int64 v64; // [rsp+20h] [rbp-28h]
  __int64 v65; // [rsp+30h] [rbp-18h]
  char v67; // [rsp+98h] [rbp+50h]
  char v68; // [rsp+A0h] [rbp+58h]
  char v69; // [rsp+A1h] [rbp+59h]
  char v70; // [rsp+A2h] [rbp+5Ah]
  char v71; // [rsp+A3h] [rbp+5Bh]
  unsigned int v72; // [rsp+A8h] [rbp+60h]

  v1 = a1;
  v63 = *((_DWORD *)a1 + 13);
  v2 = *((_DWORD *)a1 + 12);
  v3 = *((_DWORD *)a1 + 11);
  v4 = v2 & 7;
  v5 = *(char **)(*(_QWORD *)a1 + 16LL);
  v6 = *((_DWORD *)a1 + 10);
  v72 = v4;
  v7 = *v5;
  v8 = v5[4];
  LOBYTE(v5) = 16 * *v5;
  v60 = v6;
  v68 = v7 | (unsigned __int8)v5;
  v69 = v8 | (unsigned __int8)v5;
  v9 = v7 | (16 * v8);
  v10 = *((_DWORD *)a1 + 14);
  v70 = v9;
  v11 = v10 & 7;
  v71 = v8 | (16 * v8);
  v12 = (v2 & 7) - v11 + 8;
  v13 = *((_DWORD *)a1 + 7);
  if ( v4 >= (unsigned int)v11 )
    v12 = v4 - v11;
  v62 = *((_DWORD *)a1 + 7);
  v14 = 8 - v12;
  v61 = v12;
  v58 = 8 - v12;
  v15 = v10 + v13;
  v59 = v10 + v13;
  if ( (v10 + v13) >> 3 == v10 >> 3 )
  {
    v22 = 0;
    v67 = 0;
  }
  else
  {
    v16 = *((_DWORD *)v1 + 8);
    LODWORD(v17) = ((v10 + v13) >> 3) - ((v10 + 7) >> 3);
    v18 = (_BYTE *)(*((_QWORD *)v1 + 2) + (((__int64)(v10 + 7) >> 1) & 0xFFFFFFFFFFFFFFFCuLL));
    LODWORD(v19) = v3 - 4 * v17;
    v20 = (_BYTE *)(*((_QWORD *)v1 + 1) + ((__int64)(v2 + (-(int)v11 & 7)) >> 3));
    v21 = v6 - v17;
    v22 = 1;
    v67 = 1;
    if ( v16 )
    {
      v19 = (int)v19;
      if ( v12 )
      {
        v17 = (int)v17;
        v35 = v12;
        v36 = v21;
        v65 = (int)v17;
        do
        {
          v37 = &v20[v17];
          --v16;
          v38 = *v20 << v35;
          if ( v20 != &v20[v17] )
          {
            do
            {
              v39 = v38 | ((unsigned __int64)(unsigned __int8)*++v20 >> v58);
              *v18 = *(&v68 + (v39 >> 6));
              v18[1] = *(&v68 + ((v39 >> 4) & 3));
              v18[2] = *(&v68 + ((v39 >> 2) & 3));
              v18[3] = *(&v68 + (v39 & 3));
              v18 += 4;
              v38 = *v20 << v35;
            }
            while ( v20 != v37 );
            v17 = v65;
          }
          v18 += (int)v19;
          v20 += v36;
        }
        while ( v16 );
        v1 = a1;
        v12 = v61;
      }
      else
      {
        v23 = (int)v17;
        v24 = v21;
        v64 = (int)v19;
        do
        {
          --v16;
          v25 = v23;
          v26 = 0LL;
          if ( v20 > &v20[v23] )
            v25 = 0LL;
          if ( v25 )
          {
            do
            {
              v27 = (unsigned __int8)*v20;
              ++v26;
              v28 = (unsigned __int8)*v20++;
              *v18 = *(&v68 + (v28 >> 6));
              v18[1] = *(&v68 + ((v27 >> 4) & 3));
              v18[2] = *(&v68 + ((v27 >> 2) & 3));
              v18[3] = *(&v68 + (v27 & 3));
              v18 += 4;
            }
            while ( v26 != v25 );
            v19 = v64;
          }
          v18 += v19;
          v20 += v24;
        }
        while ( v16 );
      }
      v6 = v60;
      v22 = 1;
      v4 = v72;
    }
    v14 = v58;
    v15 = v59;
  }
  if ( (unsigned int)v11 | v22 ^ 1 )
  {
    v40 = dword_1C02F1B98[v11];
    if ( !v22 )
      v40 &= dword_1C02E4378[v15 & 7];
    v41 = *((_DWORD *)v1 + 8);
    v42 = (int *)(*((_QWORD *)v1 + 2) + (((__int64)*((int *)v1 + 14) >> 1) & 0xFFFFFFFFFFFFFFFCuLL));
    v43 = (char *)(*((_QWORD *)v1 + 1) + ((__int64)*((int *)v1 + 12) >> 3));
    if ( !v41 )
      goto LABEL_43;
    if ( v4 < (unsigned int)v11 )
    {
      v51 = v14;
      do
      {
        v52 = (unsigned __int64)(unsigned __int8)*v43 >> v51;
        v43 += v6;
        v53 = *v42 & ~v40;
        LOBYTE(v72) = *(&v68 + (v52 >> 6));
        BYTE1(v72) = *(&v68 + ((v52 >> 4) & 3));
        BYTE2(v72) = *(&v68 + ((v52 >> 2) & 3));
        HIBYTE(v72) = *(&v68 + (v52 & 3));
        v72 &= v40;
        *v42 = v72 | v53;
        v42 = (int *)((char *)v42 + v3);
        --v41;
      }
      while ( v41 );
    }
    else
    {
      if ( (int)(v4 + v62) <= 8 )
      {
        do
        {
          v49 = *v43 << v12;
          v43 += v6;
          LOBYTE(v72) = *(&v68 + ((unsigned __int64)v49 >> 6));
          BYTE1(v72) = *(&v68 + (((unsigned __int64)v49 >> 4) & 3));
          BYTE2(v72) = *(&v68 + (((unsigned __int64)v49 >> 2) & 3));
          v50 = *v42 & ~v40;
          HIBYTE(v72) = *(&v68 + (v49 & 3));
          v72 &= v40;
          *v42 = v72 | v50;
          v42 = (int *)((char *)v42 + v3);
          --v41;
        }
        while ( v41 );
        goto LABEL_42;
      }
      v44 = v14;
      do
      {
        v45 = *v43;
        v46 = (unsigned __int8)v43[1];
        v43 += v6;
        v47 = (unsigned __int8)(v45 << v12) | (v46 >> v44);
        v48 = *v42 & ~v40;
        LOBYTE(v72) = *(&v68 + (v47 >> 6));
        BYTE1(v72) = *(&v68 + ((v47 >> 4) & 3));
        BYTE2(v72) = *(&v68 + ((v47 >> 2) & 3));
        HIBYTE(v72) = *(&v68 + (v47 & 3));
        v72 &= v40;
        *v42 = v72 | v48;
        v42 = (int *)((char *)v42 + v3);
        --v41;
      }
      while ( v41 );
      v6 = v60;
    }
    v12 = v61;
LABEL_42:
    v1 = a1;
LABEL_43:
    v22 = v67;
  }
  if ( (v59 & 7) != 0 )
  {
    if ( v22 )
    {
      v29 = *((_DWORD *)v1 + 8);
      v30 = dword_1C02E4378[v59 & 7];
      v31 = (int *)(*((_QWORD *)v1 + 2) + (((__int64)v59 >> 1) & 0xFFFFFFFFFFFFFFFCuLL));
      v32 = (_BYTE *)(*((_QWORD *)v1 + 1) + ((*((int *)v1 + 13) - 1LL) >> 3));
      if ( v29 )
      {
        if ( (((_BYTE)v63 - 1) & 7u) < (((_BYTE)v59 - 1) & 7u) )
        {
          do
          {
            v54 = (unsigned __int8)(*(v32 - 1) << v12);
            v55 = (unsigned __int8)*v32;
            v32 += v6;
            v56 = *v31 & ~v30;
            v57 = (v55 >> v58) | v54;
            LOBYTE(v72) = *(&v68 + (v57 >> 6));
            BYTE1(v72) = *(&v68 + ((v57 >> 4) & 3));
            BYTE2(v72) = *(&v68 + ((v57 >> 2) & 3));
            HIBYTE(v72) = *(&v68 + (v57 & 3));
            v72 &= v30;
            *v31 = v72 | v56;
            v31 = (int *)((char *)v31 + v3);
            --v29;
          }
          while ( v29 );
        }
        else
        {
          do
          {
            v33 = *v32 << v12;
            v32 += v6;
            LOBYTE(v72) = *(&v68 + ((unsigned __int64)v33 >> 6));
            BYTE1(v72) = *(&v68 + (((unsigned __int64)v33 >> 4) & 3));
            BYTE2(v72) = *(&v68 + (((unsigned __int64)v33 >> 2) & 3));
            v34 = *v31 & ~v30;
            HIBYTE(v72) = *(&v68 + (v33 & 3));
            v72 &= v30;
            *v31 = v72 | v34;
            v31 = (int *)((char *)v31 + v3);
            --v29;
          }
          while ( v29 );
        }
      }
    }
  }
}
