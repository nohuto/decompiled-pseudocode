/*
 * XREFs of ?vSrcCopyS1D24@@YAXPEAUBLTINFO@@@Z @ 0x1C01389F0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

void __fastcall vSrcCopyS1D24(struct BLTINFO *a1)
{
  struct BLTINFO *v1; // r11
  int v2; // ecx
  unsigned int v3; // esi
  int v4; // r8d
  unsigned int v5; // r9d
  _DWORD *v6; // rdx
  int v7; // r15d
  int v8; // eax
  unsigned int v9; // edx
  char v10; // bl
  int v11; // r13d
  int v12; // r14d
  int v13; // edi
  char v14; // bp
  unsigned int v15; // r12d
  int v16; // edx
  unsigned int v17; // eax
  int v18; // ecx
  __int64 v19; // r8
  _BYTE *v20; // r10
  int v21; // r13d
  _BYTE *v22; // rax
  __int64 v23; // rdx
  int v24; // ecx
  __int64 v25; // rdi
  _BYTE *v26; // r15
  char v27; // dl
  unsigned __int8 v28; // r9
  unsigned __int8 v29; // r9
  char *v30; // rdx
  char *v31; // rdx
  char *v32; // rdx
  char *v33; // rdx
  char *v34; // rdx
  char *v35; // rdx
  _BYTE *v36; // rdx
  unsigned int v37; // ecx
  __int64 v38; // rax
  _BYTE *v39; // r10
  _BYTE *v40; // r9
  int v41; // r11d
  __int64 v42; // r14
  unsigned __int8 v43; // r8
  _BYTE *k; // rdx
  unsigned __int64 v45; // rax
  char *v46; // rcx
  __int64 v47; // r15
  _BYTE *v48; // rdx
  unsigned __int8 j; // r8
  unsigned __int64 v50; // rax
  char *v51; // rcx
  __int64 v52; // r12
  __int64 v53; // r15
  unsigned int v54; // r9d
  __int64 v55; // r8
  char *v56; // rdx
  char *v57; // rdx
  char *v58; // rdx
  char *v59; // rdx
  char *v60; // rdx
  char *v61; // rdx
  _BYTE *v62; // rdx
  int v63; // r10d
  _BYTE *v64; // r9
  _BYTE *v65; // r8
  __int64 v66; // r11
  _BYTE *v67; // r12
  unsigned __int8 i; // dl
  unsigned __int64 v69; // rax
  char *v70; // rcx
  __int64 v71; // r11
  __int64 v72; // rax
  _BYTE *v73; // r12
  unsigned __int8 v74; // dl
  unsigned __int64 v75; // rax
  char *v76; // rcx
  __int64 v77; // rdi
  __int64 v78; // rax
  unsigned __int8 v79; // r12
  _BYTE *v80; // rsi
  unsigned __int64 v81; // rax
  char *v82; // rcx
  int v83; // [rsp+0h] [rbp-88h]
  int v84; // [rsp+4h] [rbp-84h]
  __int64 v85; // [rsp+8h] [rbp-80h]
  __int64 v86; // [rsp+10h] [rbp-78h]
  int v87; // [rsp+18h] [rbp-70h]
  int v88; // [rsp+1Ch] [rbp-6Ch]
  int v89; // [rsp+20h] [rbp-68h]
  BOOL v90; // [rsp+28h] [rbp-60h]
  unsigned int v92; // [rsp+38h] [rbp-50h]
  __int64 v93; // [rsp+40h] [rbp-48h]
  _DWORD v94[2]; // [rsp+48h] [rbp-40h] BYREF

  v1 = a1;
  v2 = *((_DWORD *)a1 + 14);
  v90 = 1;
  v3 = v2 & 7;
  v4 = *((_DWORD *)v1 + 12);
  v5 = *((_DWORD *)v1 + 7);
  v6 = *(_DWORD **)(*(_QWORD *)v1 + 16LL);
  v7 = v5 + v2;
  v84 = v5 + v2;
  v94[0] = *v6;
  v8 = v6[1];
  v9 = v4 & 7;
  v94[1] = v8;
  v92 = v9;
  v10 = v9 - v3;
  if ( v9 < v3 )
    v10 += 8;
  v11 = *((_DWORD *)v1 + 11);
  v89 = v11;
  v12 = v2 >> 3;
  v13 = v7 >> 3;
  v14 = 8 - v10;
  v83 = *((_DWORD *)v1 + 10);
  v87 = v2 >> 3;
  v88 = v7 >> 3;
  if ( v7 >> 3 != v2 >> 3 )
  {
    v15 = 8 - v3;
    v16 = (v2 + 7) >> 3;
    v17 = (v2 + 7) & 0xFFFFFFF8;
    v18 = v4 + ((8 - (_BYTE)v3) & 7);
    LODWORD(v19) = v13 - v16;
    v20 = (_BYTE *)(*((_QWORD *)v1 + 1) + ((__int64)v18 >> 3));
    v21 = *((_DWORD *)v1 + 8);
    v22 = (_BYTE *)(*((_QWORD *)v1 + 2) + (int)(3 * v17));
    LODWORD(v23) = *((_DWORD *)v1 + 11) - 24 * (v13 - v16);
    v24 = v83 - v19;
    if ( v10 )
    {
      if ( !v21 )
      {
LABEL_13:
        v9 = v92;
        v11 = v89;
        goto LABEL_14;
      }
      v19 = (int)v19;
      v25 = (int)v23;
      v93 = (int)v19;
      do
      {
        v26 = &v20[v19];
        --v21;
        v27 = *v20 << v10;
        if ( v20 != &v20[v19] )
        {
          do
          {
            v28 = *++v20;
            v29 = v27 | (v28 >> v14);
            v30 = (char *)v94 + (((unsigned __int64)v29 >> 5) & 4);
            *v22 = *v30;
            v22[1] = v30[1];
            v22[2] = v30[2];
            v31 = (char *)v94 + (((unsigned __int64)v29 >> 4) & 4);
            v22[3] = *v31;
            v22[4] = v31[1];
            v22[5] = v31[2];
            v32 = (char *)v94 + (((unsigned __int64)v29 >> 3) & 4);
            v22[6] = *v32;
            v22[7] = v32[1];
            v22[8] = v32[2];
            v33 = (char *)v94 + (((unsigned __int64)v29 >> 2) & 4);
            v22[9] = *v33;
            v22[10] = v33[1];
            v22[11] = v33[2];
            v34 = (char *)v94 + (((unsigned __int64)v29 >> 1) & 4);
            v22[12] = *v34;
            v22[13] = v34[1];
            v22[14] = v34[2];
            v22[15] = *((_BYTE *)v94 + (v29 & 4));
            v22[16] = *((_BYTE *)v94 + (v29 & 4) + 1);
            v22[17] = *((_BYTE *)v94 + (v29 & 4) + 2);
            v35 = (char *)v94 + 2 * (v29 & 2u);
            v22[18] = *v35;
            v22[19] = v35[1];
            v22[20] = v35[2];
            v36 = &v94[v29 & 1];
            v22[21] = *v36;
            v22[22] = v36[1];
            v22[23] = v36[2];
            v22 += 24;
            v27 = *v20 << v10;
          }
          while ( v20 != v26 );
          v19 = v93;
        }
        v22 += v25;
        v20 += v24;
      }
      while ( v21 );
      v1 = a1;
      v13 = v88;
    }
    else
    {
      if ( !v21 )
        goto LABEL_13;
      v19 = (int)v19;
      v23 = (int)v23;
      v85 = (int)v19;
      v86 = (int)v23;
      do
      {
        --v21;
        v52 = v19;
        v53 = 0LL;
        if ( v20 > &v20[v19] )
          v52 = 0LL;
        if ( v52 )
        {
          do
          {
            v54 = (unsigned __int8)*v20;
            v55 = *v20 & 4;
            v56 = (char *)v94 + (((unsigned __int64)(unsigned __int8)*v20 >> 5) & 4);
            *v22 = *v56;
            v22[1] = v56[1];
            v22[2] = v56[2];
            v57 = (char *)v94 + ((v54 >> 4) & 4);
            v22[3] = *v57;
            v22[4] = v57[1];
            v22[5] = v57[2];
            v58 = (char *)v94 + ((v54 >> 3) & 4);
            v22[6] = *v58;
            v22[7] = v58[1];
            v22[8] = v58[2];
            v59 = (char *)v94 + ((v54 >> 2) & 4);
            v22[9] = *v59;
            v22[10] = v59[1];
            v22[11] = v59[2];
            v60 = (char *)v94 + ((v54 >> 1) & 4);
            v22[12] = *v60;
            v22[13] = v60[1];
            v22[14] = v60[2];
            v22[15] = *((_BYTE *)v94 + v55);
            v22[16] = *((_BYTE *)v94 + v55 + 1);
            v22[17] = *((_BYTE *)v94 + v55 + 2);
            v61 = (char *)v94 + 2 * (v54 & 2);
            v22[18] = *v61;
            v22[19] = v61[1];
            v22[20] = v61[2];
            v62 = &v94[v54 & 1];
            ++v20;
            v22[21] = *v62;
            ++v53;
            v22[22] = v62[1];
            v22[23] = v62[2];
            v22 += 24;
          }
          while ( v53 != v52 );
          v19 = v85;
          v23 = v86;
        }
        v22 += v23;
        v20 += v24;
      }
      while ( v21 );
      v12 = v87;
    }
    v15 = 8 - v3;
    v7 = v84;
    goto LABEL_13;
  }
  v15 = v5;
  v90 = (int)(v5 + v9) > 8;
LABEL_14:
  if ( v3 | (v13 == v12) )
  {
    v63 = *((_DWORD *)v1 + 8);
    v64 = (_BYTE *)(*((_QWORD *)v1 + 1) + ((__int64)*((int *)v1 + 12) >> 3));
    v65 = (_BYTE *)(*((_QWORD *)v1 + 2) + 3 * *((_DWORD *)v1 + 14));
    if ( v9 <= v3 )
    {
      if ( !v63 )
        goto LABEL_15;
      v77 = (int)(3 * v15);
      v78 = v11;
      do
      {
        --v63;
        v79 = *v64 << v9;
        v80 = v65;
        if ( v65 != &v65[v77] )
        {
          do
          {
            v81 = (unsigned __int64)v79 >> 5;
            v79 *= 2;
            v82 = (char *)v94 + (v81 & 4);
            *v80 = *v82;
            v80[1] = v82[1];
            v80[2] = v82[2];
            v80 += 3;
          }
          while ( v80 != &v65[v77] );
          v78 = v11;
        }
        v65 += v78;
        v64 += v83;
      }
      while ( v63 );
    }
    else
    {
      if ( !v90 )
      {
        if ( !v63 )
          goto LABEL_15;
        v71 = (int)(3 * v15);
        v72 = v11;
        do
        {
          --v63;
          v73 = v65;
          v74 = *v64 << v10 << v3;
          if ( v65 != &v65[v71] )
          {
            do
            {
              v75 = (unsigned __int64)v74 >> 5;
              v74 *= 2;
              v76 = (char *)v94 + (v75 & 4);
              *v73 = *v76;
              v73[1] = v76[1];
              v73[2] = v76[2];
              v73 += 3;
            }
            while ( v73 != &v65[v71] );
            v72 = v11;
          }
          v65 += v72;
          v64 += v83;
        }
        while ( v63 );
        v12 = v87;
        v7 = v84;
        goto LABEL_48;
      }
      if ( !v63 )
        goto LABEL_15;
      v66 = (int)(3 * v15);
      do
      {
        --v63;
        v67 = v65;
        for ( i = ((unsigned __int8)(*v64 << v10) | (unsigned __int8)(v64[1] >> v14)) << v3; v67 != &v65[v66]; v67 += 3 )
        {
          v69 = (unsigned __int64)i >> 5;
          i *= 2;
          v70 = (char *)v94 + (v69 & 4);
          *v67 = *v70;
          v67[1] = v70[1];
          v67[2] = v70[2];
        }
        v65 += v11;
        v64 += v83;
      }
      while ( v63 );
      v12 = v87;
      v7 = v84;
    }
    v13 = v88;
LABEL_48:
    v1 = a1;
  }
LABEL_15:
  if ( (v7 & 7) != 0 && v13 != v12 )
  {
    v37 = ((_BYTE)v7 - 1) & 7;
    v38 = *((int *)v1 + 13);
    v39 = (_BYTE *)(*((_QWORD *)v1 + 2) + (int)(3 * (v7 & 0xFFFFFFF8)));
    v40 = (_BYTE *)(*((_QWORD *)v1 + 1) + ((v38 - 1) >> 3));
    v41 = *((_DWORD *)v1 + 8);
    if ( (((_BYTE)v38 - 1) & 7u) < v37 )
    {
      if ( v41 )
      {
        v47 = 3 * (v37 + 1);
        do
        {
          --v41;
          v48 = v39;
          for ( j = (*v40 >> v14) | (*(v40 - 1) << v10); v48 != &v39[v47]; v48 += 3 )
          {
            v50 = (unsigned __int64)j >> 5;
            j *= 2;
            v51 = (char *)v94 + (v50 & 4);
            *v48 = *v51;
            v48[1] = v51[1];
            v48[2] = v51[2];
          }
          v39 += v89;
          v40 += v83;
        }
        while ( v41 );
      }
    }
    else if ( v41 )
    {
      v42 = 3 * (v37 + 1);
      do
      {
        --v41;
        v43 = *v40 << v10;
        for ( k = v39; k != &v39[v42]; k += 3 )
        {
          v45 = (unsigned __int64)v43 >> 5;
          v43 *= 2;
          v46 = (char *)v94 + (v45 & 4);
          *k = *v46;
          k[1] = v46[1];
          k[2] = v46[2];
        }
        v39 += v89;
        v40 += v83;
      }
      while ( v41 );
    }
  }
}
