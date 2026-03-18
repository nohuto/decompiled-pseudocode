/*
 * XREFs of ?vSrcCopyS1D16@@YAXPEAUBLTINFO@@@Z @ 0x1C02AC760
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

void __fastcall vSrcCopyS1D16(struct BLTINFO *a1)
{
  int v1; // ebx
  struct BLTINFO *v2; // r10
  unsigned int v3; // r11d
  BOOL v4; // r14d
  __int16 *v5; // r9
  unsigned int v6; // r8d
  __int64 i; // rcx
  __int16 v8; // ax
  int v9; // edx
  int v10; // r13d
  unsigned int v11; // esi
  char v12; // al
  unsigned int v13; // r15d
  int v14; // ecx
  int v15; // r12d
  int v16; // eax
  int v17; // ecx
  int v18; // r9d
  int v19; // r8d
  int v20; // r11d
  unsigned int v21; // edi
  int v22; // ecx
  signed int v23; // eax
  __int64 v24; // rbx
  _DWORD *v25; // r9
  int v26; // eax
  __int64 v27; // rdx
  _BYTE *v28; // r8
  int v29; // ecx
  int v30; // eax
  __int64 v31; // rsi
  __int64 v32; // r14
  __int64 v33; // r13
  __int64 v34; // rdx
  __int64 v35; // rbx
  unsigned int v36; // ecx
  unsigned __int64 v37; // rax
  char v38; // r14
  __int64 v39; // rsi
  _BYTE *v40; // rbx
  unsigned __int8 v41; // al
  unsigned __int64 v42; // rdx
  int v43; // r9d
  _BYTE *v44; // r8
  _WORD *v45; // rdx
  __int64 v46; // r14
  __int64 v47; // r10
  __int64 v48; // rdi
  _WORD *v49; // rbx
  unsigned __int8 v50; // r11
  unsigned __int64 v51; // rcx
  unsigned __int64 v52; // rax
  __int64 v53; // r14
  __int64 v54; // r10
  __int64 v55; // rdi
  _WORD *v56; // rbx
  unsigned __int8 v57; // r11
  unsigned __int64 v58; // rcx
  unsigned __int64 v59; // rax
  char v60; // r10
  __int64 v61; // r14
  __int64 v62; // r15
  __int64 v63; // r13
  __int64 v64; // rdi
  unsigned __int8 v65; // r11
  unsigned __int64 v66; // rcx
  _WORD *v67; // rbx
  unsigned __int64 v68; // rax
  int v69; // r9d
  _WORD *v70; // r8
  __int64 v71; // rax
  _BYTE *v72; // rdx
  unsigned int v73; // ecx
  __int64 v74; // r14
  __int64 v75; // r15
  unsigned __int64 v76; // rdi
  __int64 v77; // rsi
  unsigned __int8 v78; // r10
  _WORD *v79; // r11
  unsigned __int64 v80; // rcx
  unsigned __int64 v81; // rax
  __int64 v82; // r14
  __int64 v83; // r15
  unsigned __int64 v84; // rdi
  __int64 v85; // rsi
  _WORD *v86; // r11
  unsigned __int64 v87; // rcx
  unsigned __int8 v88; // r10
  unsigned __int64 v89; // rax
  int v90; // [rsp+0h] [rbp-70h]
  int v91; // [rsp+4h] [rbp-6Ch]
  _WORD v92[2]; // [rsp+8h] [rbp-68h]
  int v93; // [rsp+Ch] [rbp-64h]
  int v94; // [rsp+10h] [rbp-60h]
  int v95; // [rsp+14h] [rbp-5Ch]
  unsigned int v96; // [rsp+18h] [rbp-58h]
  int v97; // [rsp+1Ch] [rbp-54h]
  unsigned int v98; // [rsp+20h] [rbp-50h]
  int v99; // [rsp+28h] [rbp-48h]
  int v100; // [rsp+2Ch] [rbp-44h]
  struct BLTINFO *v101; // [rsp+30h] [rbp-40h]
  __int64 v102; // [rsp+38h] [rbp-38h]
  _DWORD v103[4]; // [rsp+50h] [rbp-20h]

  v1 = *((_DWORD *)a1 + 14);
  v2 = a1;
  v3 = *((_DWORD *)a1 + 7);
  v4 = 1;
  v101 = a1;
  v99 = 1;
  v100 = v3 + v1;
  v5 = *(__int16 **)(*(_QWORD *)a1 + 16LL);
  v6 = (*((_DWORD *)v5 + 1) << 16) | *((_DWORD *)v5 + 1);
  v103[0] = (*(_DWORD *)v5 << 16) | *(_DWORD *)v5;
  v103[3] = v6;
  v103[1] = HIWORD(v103[0]) | (v6 << 16);
  v103[2] = (v103[0] << 16) | HIWORD(v6);
  for ( i = 0LL; i < 2; ++i )
  {
    v8 = *v5;
    v5 += 2;
    v92[i] = v8;
  }
  v9 = *((_DWORD *)v2 + 12);
  v10 = *((_DWORD *)v2 + 11);
  v11 = v9 & 7;
  v12 = *((_BYTE *)v2 + 48) & 7;
  v96 = v11;
  v93 = v10;
  v13 = v1 & 7;
  v98 = v13;
  v14 = (unsigned __int8)(v12 - v13);
  v15 = (unsigned __int8)(v14 + 8);
  v16 = 8;
  if ( v11 >= v13 )
    v15 = v14;
  v17 = *((_DWORD *)v2 + 10);
  LOBYTE(v16) = 8 - v15;
  v18 = v1 >> 3;
  v19 = v100 >> 3;
  v95 = v15;
  v97 = v16;
  v94 = v17;
  v91 = v1 >> 3;
  v90 = v100 >> 3;
  if ( v100 >> 3 != v1 >> 3 )
  {
    v20 = *((_DWORD *)v2 + 8);
    v21 = 8 - v13;
    v22 = (v1 + 7) >> 3;
    v23 = 2 * ((v1 + 7) & 0xFFFFFFF8);
    v24 = 0LL;
    v25 = (_DWORD *)(*((_QWORD *)v2 + 2) + v23);
    v26 = v9 + ((8 - (_BYTE)v13) & 7);
    LODWORD(v27) = v19 - v22;
    v28 = (_BYTE *)(*((_QWORD *)v2 + 1) + ((__int64)v26 >> 3));
    v29 = v10 - 16 * (v90 - v22);
    v30 = v94 - v27;
    if ( (_BYTE)v15 )
    {
      if ( v20 )
      {
        v38 = v97;
        v27 = (int)v27;
        v39 = v30;
        v102 = (int)v27;
        do
        {
          v40 = &v28[v27];
          --v20;
          v41 = *v28 << v15;
          if ( v28 != &v28[v27] )
          {
            do
            {
              v42 = v41 | ((unsigned __int64)(unsigned __int8)*++v28 >> v38);
              *v25 = v103[v42 >> 6];
              v25[1] = v103[(v42 >> 4) & 3];
              v25[2] = v103[(v42 >> 2) & 3];
              v25[3] = v103[v42 & 3];
              v25 += 4;
              v41 = *v28 << v15;
            }
            while ( v28 != v40 );
            v27 = v102;
          }
          v25 = (_DWORD *)((char *)v25 + v29);
          v28 += v39;
        }
        while ( v20 );
        v13 = v98;
        LOBYTE(v15) = v95;
        goto LABEL_22;
      }
    }
    else if ( v20 )
    {
      v31 = v30;
      v32 = (int)v27;
      v33 = v29;
      do
      {
        --v20;
        v34 = v32;
        v35 = 0LL;
        if ( v28 > &v28[v32] )
          v34 = 0LL;
        if ( v34 )
        {
          do
          {
            v36 = (unsigned __int8)*v28;
            ++v35;
            v37 = (unsigned __int8)*v28++;
            *v25 = v103[v37 >> 6];
            v25[1] = v103[(v36 >> 4) & 3];
            v25[2] = v103[(v36 >> 2) & 3];
            v25[3] = v103[v36 & 3];
            v25 += 4;
          }
          while ( v35 != v34 );
        }
        v25 = (_DWORD *)((char *)v25 + v33);
        v28 += v31;
      }
      while ( v20 );
LABEL_22:
      v10 = v93;
      v24 = 0LL;
      v4 = v99;
      v11 = v96;
      v2 = v101;
    }
    v17 = v94;
    v3 = v21;
    v19 = v90;
    v18 = v91;
    goto LABEL_25;
  }
  v24 = 0LL;
  v4 = (int)(v3 + v11) > 8;
LABEL_25:
  if ( v13 | (v19 == v18) )
  {
    v43 = *((_DWORD *)v2 + 8);
    v44 = (_BYTE *)(*((_QWORD *)v2 + 1) + ((__int64)*((int *)v2 + 12) >> 3));
    v45 = (_WORD *)(*((_QWORD *)v2 + 2) + 2 * *((_DWORD *)v2 + 14));
    if ( v11 <= v13 )
    {
      if ( v43 )
      {
        v60 = v96;
        v61 = (int)(2 * v3);
        v62 = v10;
        v63 = v17;
        do
        {
          v64 = 0LL;
          v65 = *v44 << v60;
          --v43;
          v66 = (unsigned __int64)(v61 + 1) >> 1;
          v67 = v45;
          if ( v45 > (_WORD *)((char *)v45 + v61) )
            v66 = 0LL;
          if ( v66 )
          {
            do
            {
              ++v64;
              v68 = (unsigned __int64)v65 >> 7;
              v65 *= 2;
              *v67++ = v92[v68];
            }
            while ( v64 != v66 );
          }
          v45 = (_WORD *)((char *)v45 + v62);
          v44 += v63;
          v24 = 0LL;
        }
        while ( v43 );
        goto LABEL_51;
      }
    }
    else if ( v4 )
    {
      if ( v43 )
      {
        v98 = (unsigned __int8)v15;
        v46 = (int)(2 * v3);
        v47 = v17;
        do
        {
          v48 = 0LL;
          --v43;
          v49 = v45;
          v50 = ((unsigned __int8)(*v44 << v15) | (unsigned __int8)(v44[1] >> v97)) << v13;
          v51 = (unsigned __int64)(v46 + 1) >> 1;
          if ( v45 > (_WORD *)((char *)v45 + v46) )
            v51 = 0LL;
          if ( v51 )
          {
            do
            {
              ++v48;
              v52 = (unsigned __int64)v50 >> 7;
              v50 *= 2;
              *v49++ = v92[v52];
            }
            while ( v48 != v51 );
          }
          v45 = (_WORD *)((char *)v45 + v10);
          v44 += v47;
          v24 = 0LL;
        }
        while ( v43 );
LABEL_35:
        LOBYTE(v15) = v95;
LABEL_51:
        v2 = v101;
      }
    }
    else if ( v43 )
    {
      v98 = (unsigned __int8)v15;
      v53 = (int)(2 * v3);
      v54 = v17;
      do
      {
        v55 = 0LL;
        --v43;
        v56 = v45;
        v57 = *v44 << v15 << v13;
        v58 = (unsigned __int64)(v53 + 1) >> 1;
        if ( v45 > (_WORD *)((char *)v45 + v53) )
          v58 = 0LL;
        if ( v58 )
        {
          do
          {
            ++v55;
            v59 = (unsigned __int64)v57 >> 7;
            v57 *= 2;
            *v56++ = v92[v59];
          }
          while ( v55 != v58 );
        }
        v45 = (_WORD *)((char *)v45 + v10);
        v44 += v54;
        v24 = 0LL;
      }
      while ( v43 );
      goto LABEL_35;
    }
    v18 = v91;
    v19 = v90;
  }
  if ( (v100 & 7) != 0 && v19 != v18 )
  {
    v69 = *((_DWORD *)v2 + 8);
    v70 = (_WORD *)(*((_QWORD *)v2 + 2) + (int)(2 * (v100 & 0xFFFFFFF8)));
    v71 = *((int *)v2 + 13);
    v72 = (_BYTE *)(*((_QWORD *)v2 + 1) + ((v71 - 1) >> 3));
    v73 = ((_BYTE)v100 - 1) & 7;
    if ( (((_BYTE)v71 - 1) & 7u) < v73 )
    {
      if ( v69 )
      {
        v82 = v93;
        v83 = v94;
        v84 = ((unsigned __int64)(2 * v73 + 2) + 1) >> 1;
        v85 = 2 * v73 + 2;
        do
        {
          --v69;
          v86 = v70;
          v87 = v84;
          v88 = (*v72 >> v97) | (*(v72 - 1) << v15);
          if ( v70 > (_WORD *)((char *)v70 + v85) )
            v87 = 0LL;
          if ( v87 )
          {
            do
            {
              ++v24;
              v89 = (unsigned __int64)v88 >> 7;
              v88 *= 2;
              *v86++ = v92[v89];
            }
            while ( v24 != v87 );
          }
          v70 = (_WORD *)((char *)v70 + v82);
          v72 += v83;
          v24 = 0LL;
        }
        while ( v69 );
      }
    }
    else if ( v69 )
    {
      v74 = v93;
      v75 = v94;
      v76 = ((unsigned __int64)(2 * v73 + 2) + 1) >> 1;
      v77 = 2 * v73 + 2;
      do
      {
        --v69;
        v78 = *v72 << v15;
        v79 = v70;
        v80 = v76;
        if ( v70 > (_WORD *)((char *)v70 + v77) )
          v80 = 0LL;
        if ( v80 )
        {
          do
          {
            ++v24;
            v81 = (unsigned __int64)v78 >> 7;
            v78 *= 2;
            *v79++ = v92[v81];
          }
          while ( v24 != v80 );
        }
        v70 = (_WORD *)((char *)v70 + v74);
        v72 += v75;
        v24 = 0LL;
      }
      while ( v69 );
    }
  }
}
