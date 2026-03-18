/*
 * XREFs of ?vSrcCopyS1D24@@YAXPEAUBLTINFO@@@Z @ 0x1C0116600
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

void __fastcall vSrcCopyS1D24(struct BLTINFO *a1)
{
  int v1; // edx
  struct BLTINFO *v2; // r11
  int v3; // ecx
  int v4; // ebx
  int v5; // r8d
  int v6; // r9d
  int v7; // r14d
  char v8; // di
  int v9; // r13d
  int v10; // r15d
  int v11; // esi
  char v12; // bp
  __int64 v13; // r10
  __int64 v14; // r8
  _BYTE *v15; // r10
  int v16; // r13d
  _BYTE *v17; // rax
  int v18; // edx
  int v19; // ecx
  __int64 v20; // r11
  _BYTE *v21; // r14
  char v22; // dl
  unsigned __int8 v23; // r9
  unsigned __int8 v24; // r9
  char *v25; // rdx
  char *v26; // rdx
  char *v27; // rdx
  char *v28; // rdx
  char *v29; // rdx
  char *v30; // rdx
  char *v31; // rdx
  int v32; // edx
  int v33; // ecx
  _BYTE *v34; // r10
  _BYTE *v35; // r9
  unsigned int v36; // eax
  int v37; // r11d
  unsigned int v38; // edx
  __int64 v39; // r14
  unsigned __int8 v40; // r8
  _BYTE *k; // rdx
  unsigned __int64 v42; // rax
  char *v43; // rcx
  __int64 v44; // r15
  _BYTE *v45; // rdx
  unsigned __int8 j; // r8
  unsigned __int64 v47; // rax
  char *v48; // rcx
  __int64 v49; // rsi
  __int64 v50; // rdx
  __int64 v51; // r15
  __int64 v52; // r14
  unsigned int v53; // r9d
  __int64 v54; // r8
  char *v55; // rdx
  char *v56; // rdx
  char *v57; // rdx
  char *v58; // rdx
  char *v59; // rdx
  char *v60; // rdx
  char *v61; // rdx
  int v62; // r12d
  _BYTE *v63; // r8
  _BYTE *v64; // r10
  __int64 v65; // r11
  _BYTE *v66; // r9
  unsigned __int8 i; // dl
  unsigned __int64 v68; // rax
  char *v69; // rcx
  __int64 v70; // r11
  __int64 v71; // rax
  _BYTE *v72; // r9
  unsigned __int8 v73; // dl
  unsigned __int64 v74; // rax
  char *v75; // rcx
  __int64 v76; // rsi
  __int64 v77; // rax
  unsigned __int8 v78; // bl
  _BYTE *v79; // rdx
  unsigned __int64 v80; // rax
  char *v81; // rcx
  int v82; // [rsp+0h] [rbp-88h]
  int v83; // [rsp+10h] [rbp-78h]
  int v84; // [rsp+14h] [rbp-74h]
  __int64 v85; // [rsp+18h] [rbp-70h]
  int v86; // [rsp+20h] [rbp-68h]
  int v87; // [rsp+24h] [rbp-64h]
  int v88; // [rsp+28h] [rbp-60h]
  BOOL v89; // [rsp+2Ch] [rbp-5Ch]
  __int64 v91; // [rsp+40h] [rbp-48h]
  __int64 v92; // [rsp+48h] [rbp-40h] BYREF

  v1 = *((_DWORD *)a1 + 14);
  v2 = a1;
  v3 = *((_DWORD *)a1 + 7);
  v4 = v1 & 7;
  v5 = *((_DWORD *)v2 + 12);
  v6 = v5 & 7;
  v89 = 1;
  v88 = v6;
  v7 = v3 + v1;
  v8 = (*((_BYTE *)v2 + 48) & 7) - v4;
  v84 = v3 + v1;
  v92 = **(_QWORD **)(*(_QWORD *)v2 + 16LL);
  if ( v6 < (unsigned int)v4 )
    v8 += 8;
  v9 = *((_DWORD *)v2 + 11);
  v10 = v1 >> 3;
  v11 = v7 >> 3;
  v12 = 8 - v8;
  v87 = v9;
  v82 = *((_DWORD *)v2 + 10);
  v83 = v1 >> 3;
  v86 = v7 >> 3;
  if ( v7 >> 3 != v1 >> 3 )
  {
    v13 = v5 + (-v4 & 7);
    LODWORD(v14) = v11 - ((v1 + 7) >> 3);
    v15 = (_BYTE *)(*((_QWORD *)v2 + 1) + (v13 >> 3));
    v16 = *((_DWORD *)v2 + 8);
    v17 = (_BYTE *)(*((_QWORD *)v2 + 2) + (int)(3 * ((v1 + 7) & 0xFFFFFFF8)));
    v18 = *((_DWORD *)v2 + 11) - 24 * v14;
    v19 = *((_DWORD *)v2 + 10) - v14;
    if ( v8 )
    {
      if ( !v16 )
      {
LABEL_13:
        v9 = v87;
        v32 = 8 - v4;
        goto LABEL_14;
      }
      v14 = (int)v14;
      v20 = v18;
      v91 = (int)v14;
      do
      {
        v21 = &v15[v14];
        --v16;
        v22 = *v15 << v8;
        if ( v15 != &v15[v14] )
        {
          do
          {
            v23 = *++v15;
            v24 = v22 | (v23 >> v12);
            v25 = (char *)&v92 + (((unsigned __int64)v24 >> 5) & 4);
            *v17 = *v25;
            v17[1] = v25[1];
            v17[2] = v25[2];
            v26 = (char *)&v92 + (((unsigned __int64)v24 >> 4) & 4);
            v17[3] = *v26;
            v17[4] = v26[1];
            v17[5] = v26[2];
            v27 = (char *)&v92 + (((unsigned __int64)v24 >> 3) & 4);
            v17[6] = *v27;
            v17[7] = v27[1];
            v17[8] = v27[2];
            v28 = (char *)&v92 + (((unsigned __int64)v24 >> 2) & 4);
            v17[9] = *v28;
            v17[10] = v28[1];
            v17[11] = v28[2];
            v29 = (char *)&v92 + (((unsigned __int64)v24 >> 1) & 4);
            v17[12] = *v29;
            v17[13] = v29[1];
            v17[14] = v29[2];
            v17[15] = *((_BYTE *)&v92 + (v24 & 4));
            v17[16] = *((_BYTE *)&v92 + (v24 & 4) + 1);
            v17[17] = *((_BYTE *)&v92 + (v24 & 4) + 2);
            v30 = (char *)&v92 + 2 * (v24 & 2u);
            v17[18] = *v30;
            v17[19] = v30[1];
            v17[20] = v30[2];
            v31 = (char *)&v92 + 4 * (v24 & 1u);
            v17[21] = *v31;
            v17[22] = v31[1];
            v17[23] = v31[2];
            v17 += 24;
            v22 = *v15 << v8;
          }
          while ( v15 != v21 );
          v14 = v91;
        }
        v17 += v20;
        v15 += v19;
      }
      while ( v16 );
      v2 = a1;
    }
    else
    {
      if ( !v16 )
        goto LABEL_13;
      v14 = (int)v14;
      v49 = v18;
      v85 = (int)v14;
      do
      {
        --v16;
        v50 = v14;
        v51 = 0LL;
        if ( v15 > &v15[v14] )
          v50 = 0LL;
        if ( v50 )
        {
          v52 = v50;
          do
          {
            v53 = (unsigned __int8)*v15;
            v54 = *v15 & 4;
            v55 = (char *)&v92 + (((unsigned __int64)(unsigned __int8)*v15 >> 5) & 4);
            *v17 = *v55;
            v17[1] = v55[1];
            v17[2] = v55[2];
            v56 = (char *)&v92 + ((v53 >> 4) & 4);
            v17[3] = *v56;
            v17[4] = v56[1];
            v17[5] = v56[2];
            v57 = (char *)&v92 + ((v53 >> 3) & 4);
            v17[6] = *v57;
            v17[7] = v57[1];
            v17[8] = v57[2];
            v58 = (char *)&v92 + ((v53 >> 2) & 4);
            v17[9] = *v58;
            v17[10] = v58[1];
            v17[11] = v58[2];
            v59 = (char *)&v92 + ((v53 >> 1) & 4);
            v17[12] = *v59;
            v17[13] = v59[1];
            v17[14] = v59[2];
            v17[15] = *((_BYTE *)&v92 + v54);
            v17[16] = *((_BYTE *)&v92 + v54 + 1);
            v17[17] = *((_BYTE *)&v92 + v54 + 2);
            v60 = (char *)&v92 + 2 * (v53 & 2);
            v17[18] = *v60;
            v17[19] = v60[1];
            v17[20] = v60[2];
            v61 = (char *)&v92 + 4 * (v53 & 1);
            ++v15;
            v17[21] = *v61;
            ++v51;
            v17[22] = v61[1];
            v17[23] = v61[2];
            v17 += 24;
          }
          while ( v51 != v52 );
          v14 = v85;
        }
        v17 += v49;
        v15 += v19;
      }
      while ( v16 );
      v11 = v86;
    }
    v6 = v88;
    v7 = v84;
    v10 = v83;
    goto LABEL_13;
  }
  v32 = v3;
  v89 = v6 + v3 > 8;
LABEL_14:
  if ( v4 | (v11 == v10) )
  {
    v62 = *((_DWORD *)v2 + 8);
    v63 = (_BYTE *)(*((_QWORD *)v2 + 1) + ((__int64)*((int *)v2 + 12) >> 3));
    v64 = (_BYTE *)(*((_QWORD *)v2 + 2) + 3 * *((_DWORD *)v2 + 14));
    if ( v6 <= v4 )
    {
      if ( !v62 )
        goto LABEL_15;
      v76 = 3 * v32;
      v77 = v9;
      do
      {
        --v62;
        v78 = *v63 << v6;
        v79 = v64;
        if ( v64 != &v64[v76] )
        {
          do
          {
            v80 = (unsigned __int64)v78 >> 5;
            v78 *= 2;
            v81 = (char *)&v92 + (v80 & 4);
            *v79 = *v81;
            v79[1] = v81[1];
            v79[2] = v81[2];
            v79 += 3;
          }
          while ( v79 != &v64[v76] );
          v77 = v9;
        }
        v64 += v77;
        v63 += v82;
      }
      while ( v62 );
    }
    else
    {
      if ( !v89 )
      {
        if ( !v62 )
          goto LABEL_15;
        v70 = 3 * v32;
        v71 = v9;
        do
        {
          --v62;
          v72 = v64;
          v73 = *v63 << v8 << v4;
          if ( v64 != &v64[v70] )
          {
            do
            {
              v74 = (unsigned __int64)v73 >> 5;
              v73 *= 2;
              v75 = (char *)&v92 + (v74 & 4);
              *v72 = *v75;
              v72[1] = v75[1];
              v72[2] = v75[2];
              v72 += 3;
            }
            while ( v72 != &v64[v70] );
            v71 = v9;
          }
          v64 += v71;
          v63 += v82;
        }
        while ( v62 );
        v10 = v83;
        v7 = v84;
        goto LABEL_49;
      }
      if ( !v62 )
        goto LABEL_15;
      v65 = 3 * v32;
      do
      {
        --v62;
        v66 = v64;
        for ( i = ((unsigned __int8)(*v63 << v8) | (unsigned __int8)(v63[1] >> v12)) << v4; v66 != &v64[v65]; v66 += 3 )
        {
          v68 = (unsigned __int64)i >> 5;
          i *= 2;
          v69 = (char *)&v92 + (v68 & 4);
          *v66 = *v69;
          v66[1] = v69[1];
          v66[2] = v69[2];
        }
        v64 += v9;
        v63 += v82;
      }
      while ( v62 );
      v10 = v83;
      v7 = v84;
    }
    v11 = v86;
LABEL_49:
    v2 = a1;
  }
LABEL_15:
  if ( (v7 & 7) != 0 && v11 != v10 )
  {
    v33 = *((_DWORD *)v2 + 13) - 1;
    v34 = (_BYTE *)(*((_QWORD *)v2 + 1) + ((__int64)v33 >> 3));
    v35 = (_BYTE *)(*((_QWORD *)v2 + 2) + (int)(3 * (v7 & 0xFFFFFFF8)));
    v36 = ((_BYTE)v7 - 1) & 7;
    v37 = *((_DWORD *)v2 + 8);
    v38 = v36 + 1;
    if ( (v33 & 7u) < v36 )
    {
      if ( v37 )
      {
        v44 = 3 * v38;
        do
        {
          --v37;
          v45 = v35;
          for ( j = (*v34 >> v12) | (*(v34 - 1) << v8); v45 != &v35[v44]; v45 += 3 )
          {
            v47 = (unsigned __int64)j >> 5;
            j *= 2;
            v48 = (char *)&v92 + (v47 & 4);
            *v45 = *v48;
            v45[1] = v48[1];
            v45[2] = v48[2];
          }
          v35 += v87;
          v34 += v82;
        }
        while ( v37 );
      }
    }
    else if ( v37 )
    {
      v39 = 3 * v38;
      do
      {
        --v37;
        v40 = *v34 << v8;
        for ( k = v35; k != &v35[v39]; k += 3 )
        {
          v42 = (unsigned __int64)v40 >> 5;
          v40 *= 2;
          v43 = (char *)&v92 + (v42 & 4);
          *k = *v43;
          k[1] = v43[1];
          k[2] = v43[2];
        }
        v35 += v87;
        v34 += v82;
      }
      while ( v37 );
    }
  }
}
