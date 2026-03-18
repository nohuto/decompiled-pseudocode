/*
 * XREFs of ShrinkDIB_CY_SrkCX @ 0x1C0001010
 * Callers:
 *     <none>
 * Callees:
 *     SrkYDIB_SrkCX @ 0x1C00019D0 (SrkYDIB_SrkCX.c)
 *     GetFixupScan @ 0x1C0008FDC (GetFixupScan.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0163300 (memmove.c)
 *     AlphaBlendBGRF @ 0x1C024A3E0 (AlphaBlendBGRF.c)
 *     MappingBGRF @ 0x1C024E8D4 (MappingBGRF.c)
 */

__int64 __fastcall ShrinkDIB_CY_SrkCX(__int128 *a1)
{
  char *v1; // rdx
  __int64 v2; // rax
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int64 v11; // rax
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int64 v16; // r8
  _DWORD *v17; // rsi
  int v18; // edi
  unsigned __int64 v19; // r13
  char *v20; // rbx
  int v21; // r10d
  __int64 v22; // rcx
  int v23; // r10d
  char *v24; // rax
  char *v25; // r15
  __int16 *v26; // r14
  __int64 FixupScan; // rax
  int *v28; // rax
  int v29; // ecx
  __int64 v30; // r8
  char *v31; // rdx
  __int64 v32; // rax
  int v33; // r12d
  _WORD *v34; // rdi
  __int64 v35; // r13
  unsigned int v36; // r14d
  unsigned __int64 v37; // rdi
  __int16 *v38; // r15
  __int64 v39; // rax
  unsigned int v40; // ecx
  int v41; // r14d
  int *v42; // rdx
  int v43; // r8d
  int v44; // r9d
  int v45; // eax
  __int64 v46; // r8
  char *v47; // r10
  signed __int64 v48; // rbx
  _DWORD *v49; // rdx
  __int64 v50; // rax
  unsigned int v51; // r14d
  __int64 v52; // rax
  unsigned __int64 v53; // r12
  char *v54; // rdi
  __int16 *v55; // r15
  __int64 v56; // rax
  unsigned int v57; // ecx
  int v58; // r14d
  int *v59; // rdx
  int v60; // r8d
  int v61; // r9d
  int v62; // eax
  _DWORD *v63; // rdx
  int v64; // eax
  _BYTE *v65; // r10
  unsigned __int16 v66; // ax
  __int64 v67; // r9
  unsigned __int64 v68; // rdx
  unsigned __int16 v69; // ax
  __int64 v70; // r9
  unsigned __int8 v71; // r11
  unsigned __int8 v72; // r14
  unsigned int v73; // r8d
  int v74; // ecx
  int v75; // eax
  __int64 v76; // r9
  __int64 v77; // r8
  __int16 v78; // ax
  __int64 v80; // r8
  __int64 v81; // r9
  _DWORD *v82; // rdx
  __int64 v83; // rax
  int v84; // eax
  __int64 v85; // r8
  __int64 v86; // r9
  _DWORD *v87; // rdx
  __int64 v88; // rax
  char *v89; // rcx
  int v90; // eax
  int v91; // eax
  _BYTE *v92; // rdx
  _DWORD *v93; // r8
  char *v94; // rcx
  signed __int64 v95; // r9
  int v96; // eax
  int v97; // eax
  int v98; // eax
  __int16 v99; // ax
  __int64 v100; // rax
  __int64 v101; // rax
  int v102; // [rsp+54h] [rbp-ACh]
  unsigned int v103; // [rsp+58h] [rbp-A8h]
  char *v104; // [rsp+60h] [rbp-A0h]
  _DWORD *Src; // [rsp+68h] [rbp-98h]
  unsigned int v106; // [rsp+70h] [rbp-90h]
  __int64 v107; // [rsp+78h] [rbp-88h]
  _WORD *v108; // [rsp+80h] [rbp-80h]
  _WORD *v109; // [rsp+80h] [rbp-80h]
  char *v110; // [rsp+90h] [rbp-70h]
  char v111[136]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v112; // [rsp+128h] [rbp+28h]
  int v113; // [rsp+13Ch] [rbp+3Ch]
  void (__fastcall *v114)(char *, unsigned __int64); // [rsp+160h] [rbp+60h]
  void (__fastcall *v115)(char *, __int64, __int64, __int64, __int64, __int64, __int64, int, __int64); // [rsp+1B0h] [rbp+B0h]
  __int64 v116; // [rsp+1B8h] [rbp+B8h]
  __int64 v117; // [rsp+1D0h] [rbp+D0h]
  __int64 v118; // [rsp+1D8h] [rbp+D8h]
  __int64 v119; // [rsp+1E0h] [rbp+E0h]
  __int64 v120; // [rsp+220h] [rbp+120h]
  __int64 v121; // [rsp+228h] [rbp+128h]
  __int64 v122; // [rsp+238h] [rbp+138h]
  __int64 v123; // [rsp+240h] [rbp+140h]
  __int64 v124; // [rsp+248h] [rbp+148h]
  int v125; // [rsp+250h] [rbp+150h]
  int v126; // [rsp+254h] [rbp+154h]
  int v127; // [rsp+258h] [rbp+158h]
  __int64 v128; // [rsp+260h] [rbp+160h]
  __int64 v129; // [rsp+268h] [rbp+168h]
  __int64 v130; // [rsp+270h] [rbp+170h]
  int v131; // [rsp+278h] [rbp+178h]
  __int16 *v132; // [rsp+2B8h] [rbp+1B8h]
  __int64 v133; // [rsp+2C0h] [rbp+1C0h]
  __int64 v134; // [rsp+2C8h] [rbp+1C8h]
  __int64 v135; // [rsp+2D0h] [rbp+1D0h]
  __int64 v136; // [rsp+2D8h] [rbp+1D8h]
  _BYTE *v137; // [rsp+2E0h] [rbp+1E0h]
  _BYTE *v138; // [rsp+2E8h] [rbp+1E8h]
  int v139; // [rsp+2F0h] [rbp+1F0h]

  if ( *(_WORD *)(*((_QWORD *)a1 + 39) + 14LL) && !*((_QWORD *)a1 + 67) )
    return 0LL;
  v1 = v111;
  v2 = 4LL;
  do
  {
    v1 += 128;
    v3 = *a1;
    v4 = a1[1];
    a1 += 8;
    *((_OWORD *)v1 - 8) = v3;
    v5 = *(a1 - 6);
    *((_OWORD *)v1 - 7) = v4;
    v6 = *(a1 - 5);
    *((_OWORD *)v1 - 6) = v5;
    v7 = *(a1 - 4);
    *((_OWORD *)v1 - 5) = v6;
    v8 = *(a1 - 3);
    *((_OWORD *)v1 - 4) = v7;
    v9 = *(a1 - 2);
    *((_OWORD *)v1 - 3) = v8;
    v10 = *(a1 - 1);
    *((_OWORD *)v1 - 2) = v9;
    *((_OWORD *)v1 - 1) = v10;
    --v2;
  }
  while ( v2 );
  v11 = *((_QWORD *)a1 + 10);
  v12 = a1[1];
  *(_OWORD *)v1 = *a1;
  v13 = a1[2];
  *((_OWORD *)v1 + 1) = v12;
  v14 = a1[3];
  *((_OWORD *)v1 + 2) = v13;
  v15 = a1[4];
  *((_OWORD *)v1 + 3) = v14;
  *((_OWORD *)v1 + 4) = v15;
  *((_QWORD *)v1 + 10) = v11;
  v16 = v118;
  v17 = *(_DWORD **)(v118 + 32);
  v18 = *(unsigned __int16 *)(v118 + 14);
  v107 = *(_QWORD *)(v118 + 24);
  v19 = (unsigned __int64)(v17 + 256);
  v20 = (char *)(v17 + 515);
  v21 = 12 * (*(_DWORD *)(v117 + 20) + 2);
  v22 = v21;
  v23 = v21 - 24;
  v24 = (char *)v17 + v22 + 2048;
  v102 = v23;
  v25 = &v24[v22 + 12];
  Src = v24 + 12;
  v104 = v25;
  v106 = *(unsigned __int16 *)(v117 + 12) - 1;
  if ( *(_WORD *)(v118 + 14) )
  {
    v26 = v132;
    FixupScan = GetFixupScan(v111, v132);
    SrkYDIB_SrkCX(v117, FixupScan, v26);
    v28 = v17;
    v29 = -v18;
    do
    {
      v29 += v18;
      *v28++ = v29;
    }
    while ( (unsigned __int64)v28 < v19 );
    v23 = v102;
    v30 = (__int64)v26 + 1;
    v31 = v25;
    do
    {
      v32 = *(unsigned __int8 *)(v30 + 1);
      v30 += 3LL;
      *(_DWORD *)v31 = v17[v32];
      *((_DWORD *)v31 + 1) = v17[*(unsigned __int8 *)(v30 - 3)];
      *((_DWORD *)v31 + 2) = v17[*(unsigned __int8 *)(v30 - 4)];
      v31 += 12;
    }
    while ( v31 < &v25[v102] );
    v16 = v118;
    if ( !*(_WORD *)(v118 + 10) )
      *(_DWORD *)v111 |= 0x20u;
  }
  v33 = *(unsigned __int16 *)(v16 + 12);
  v34 = *(_WORD **)(v16 + 40);
  v103 = 0;
  if ( *(_WORD *)(v16 + 12) )
  {
    v35 = v23;
    do
    {
      v36 = (unsigned __int16)*v34;
      v108 = v34 + 1;
      v37 = (unsigned __int64)&v25[v35];
      v38 = v132;
      v39 = GetFixupScan(v111, v132);
      SrkYDIB_SrkCX(v117, v39, v38);
      if ( (v36 & 0x4000) != 0 )
      {
        v40 = v36;
        v41 = v36 & 0x3FFF;
        v42 = v17;
        v43 = -v41;
        v44 = (v40 >> 15) + *(_DWORD *)(v107 + 4) - v41;
        v45 = -v44;
        do
        {
          v43 += v41;
          v45 += v44;
          *v42 = v43;
          v42[256] = v45;
          ++v42;
        }
        while ( v42 < v17 + 256 );
        v46 = (__int64)v38 + 1;
        v47 = v20;
        v48 = v20 - v104;
        v49 = v104 + 4;
        do
        {
          v50 = *(unsigned __int8 *)(v46 + 1);
          v49 += 3;
          v46 += 3LL;
          *(v49 - 4) += v17[v50];
          *(v49 - 3) += v17[*(unsigned __int8 *)(v46 - 3)];
          *(v49 - 2) += v17[*(unsigned __int8 *)(v46 - 4)];
          *(_DWORD *)((char *)v49 + v48 - 16) = v17[*(unsigned __int8 *)(v46 - 2) + 256];
          *(_DWORD *)((char *)v49 + v48 - 12) = v17[*(unsigned __int8 *)(v46 - 3) + 256];
          *(_DWORD *)((char *)v49 + v48 - 8) = v17[*(unsigned __int8 *)(v46 - 4) + 256];
        }
        while ( (unsigned __int64)(v49 - 1) < v37 );
        v20 = (char *)Src;
        v25 = v47;
        Src = v104;
        --v33;
        v104 = v47;
      }
      else
      {
        v85 = (__int64)v38 + 1;
        v86 = v107 + ((v36 >> 5) & 0x400);
        v87 = v104 + 8;
        do
        {
          v88 = *(unsigned __int8 *)(v85 + 1);
          v87 += 3;
          v85 += 3LL;
          *(v87 - 5) += *(_DWORD *)(v86 + 4 * v88);
          *(v87 - 4) += *(_DWORD *)(v86 + 4LL * *(unsigned __int8 *)(v85 - 3));
          *(v87 - 3) += *(_DWORD *)(v86 + 4LL * *(unsigned __int8 *)(v85 - 4));
        }
        while ( (unsigned __int64)(v87 - 2) < v37 );
        v25 = v104;
      }
      v34 = v108;
    }
    while ( v33 );
    v16 = v118;
    v19 = (unsigned __int64)(v17 + 256);
  }
  if ( *(_WORD *)(v16 + 12) == 1 )
    memmove(v20, Src, v102);
  v51 = (unsigned __int16)*v34;
  if ( *v34 )
  {
    v52 = v102;
    do
    {
      v53 = (unsigned __int64)&v25[v52];
      v109 = v34 + 1;
      v54 = v25;
      v55 = v132;
      v56 = GetFixupScan(v111, v132);
      SrkYDIB_SrkCX(v117, v56, v55);
      if ( (v51 & 0x4000) != 0 )
      {
        v57 = v51;
        v58 = v51 & 0x3FFF;
        v59 = v17;
        v60 = -v58;
        v61 = (v57 >> 15) + *(_DWORD *)(v107 + 4) - v58;
        v62 = -v61;
        do
        {
          v60 += v58;
          v62 += v61;
          *v59 = v60;
          v59[256] = v62;
          ++v59;
        }
        while ( (unsigned __int64)v59 < v19 );
        v63 = Src;
        v110 = v20;
        v64 = *(_DWORD *)((char *)Src + v102 - 4);
        *(_QWORD *)((char *)Src + v102) = *(_QWORD *)((char *)Src + v102 - 12);
        *(_DWORD *)((char *)Src + v102 + 8) = v64;
        v65 = v137;
        if ( v106 )
        {
          v66 = *v55;
          v67 = *((unsigned __int8 *)v55 + 2);
          v55 = (__int16 *)((char *)v55 + 3);
          *(_DWORD *)v104 += v17[v67];
          v54 = v104 + 12;
          *((_DWORD *)v104 + 1) += v17[HIBYTE(v66)];
          *((_DWORD *)v104 + 2) += v17[(unsigned __int8)v66];
          *(_DWORD *)v20 = v17[v67 + 256];
          *((_DWORD *)v20 + 1) = v17[HIBYTE(v66) + 256];
          v63 = Src + 3;
          *((_DWORD *)v20 + 2) = v17[(unsigned __int8)v66 + 256];
          v20 += 12;
        }
        else
        {
          v84 = Src[2];
          *(_QWORD *)(Src - 3) = *(_QWORD *)Src;
          *(Src - 1) = v84;
        }
        v68 = (unsigned __int64)(v63 + 5);
        do
        {
          v69 = *v55;
          v70 = *((unsigned __int8 *)v55 + 2);
          v55 = (__int16 *)((char *)v55 + 3);
          v71 = HIBYTE(v69);
          v72 = v69;
          *(_DWORD *)v54 += v17[v70];
          *((_DWORD *)v54 + 1) += v17[HIBYTE(v69)];
          *((_DWORD *)v54 + 2) += v17[(unsigned __int8)v69];
          v73 = (12 * *(_DWORD *)(v68 - 12)
               - *(_DWORD *)(v68 - 24)
               - *((_DWORD *)v54 + 2)
               - *(_DWORD *)v68
               - *((_DWORD *)v20 + 2)) >> 16;
          if ( (v73 & 0xFF00) != 0 )
            v73 = ~HIBYTE(v73);
          *v65 = v73;
          v74 = (12 * *(_DWORD *)(v68 - 16)
               - *(_DWORD *)(v68 - 28)
               - *(_DWORD *)(v68 - 4)
               - *((_DWORD *)v20 + 1)
               - *((_DWORD *)v54 + 1)) >> 16;
          if ( (v74 & 0xFF00) != 0 )
            LOBYTE(v74) = ~HIBYTE(v74);
          v65[1] = v74;
          v75 = (12 * *(_DWORD *)(v68 - 20)
               - *(_DWORD *)(v68 - 32)
               - *(_DWORD *)(v68 - 8)
               - *(_DWORD *)v54
               - *(_DWORD *)v20) >> 16;
          if ( (v75 & 0xFF00) != 0 )
            LOBYTE(v75) = ~HIBYTE(v75);
          v65[2] = v75;
          v68 += 12LL;
          v54 += 12;
          *(_DWORD *)v20 = v17[(unsigned __int8)v70 + 256];
          *((_DWORD *)v20 + 1) = v17[v71 + 256];
          *((_DWORD *)v20 + 2) = v17[v72 + 256];
          v20 += 12;
          v65 += v139;
        }
        while ( v65 != v138 );
        if ( (unsigned __int64)v54 < v53 )
        {
          v76 = *((unsigned __int8 *)v55 + 2);
          v68 = (unsigned __int8)*v55;
          v77 = (unsigned __int8)HIBYTE(*v55);
          *(_DWORD *)v54 += v17[v76];
          *((_DWORD *)v54 + 1) += v17[v77];
          *((_DWORD *)v54 + 2) += v17[v68];
          *(_DWORD *)v20 = v17[v76 + 256];
          *((_DWORD *)v20 + 1) = v17[v77 + 256];
          *((_DWORD *)v20 + 2) = v17[v68 + 256];
        }
        v25 = v110;
        v78 = *(_WORD *)v111;
        v20 = (char *)Src;
        Src = v104;
        v104 = v110;
        if ( v111[0] < 0 )
        {
          v114(v111, v68);
          v78 = *(_WORD *)v111;
        }
        if ( (v78 & 0x800) != 0 )
        {
          AlphaBlendBGRF(v111, v68);
          LOBYTE(v78) = v111[0];
        }
        if ( (v78 & 0x10) != 0 )
        {
          MappingBGRF(v133, v134, v121, v128);
          v100 = v131 + v128;
          if ( v100 == v129 )
            v100 = v130;
          v128 = v100;
        }
        v115(v111, v135, v136, v112, v120, v122, v122 + v126, v127, v116);
        v122 += v125;
        if ( v122 == v123 )
          v122 = v124;
        v112 += v113;
        ++v103;
      }
      else
      {
        v80 = (__int64)v55 + 1;
        v81 = v107 + ((v51 >> 5) & 0x400);
        v82 = v104 + 8;
        do
        {
          v83 = *(unsigned __int8 *)(v80 + 1);
          v82 += 3;
          v80 += 3LL;
          *(v82 - 5) += *(_DWORD *)(v81 + 4 * v83);
          *(v82 - 4) += *(_DWORD *)(v81 + 4LL * *(unsigned __int8 *)(v80 - 3));
          *(v82 - 3) += *(_DWORD *)(v81 + 4LL * *(unsigned __int8 *)(v80 - 4));
        }
        while ( (unsigned __int64)(v82 - 2) < v53 );
        v25 = v104;
      }
      v34 = v109;
      v52 = v102;
      v51 = (unsigned __int16)*v109;
    }
    while ( *v109 );
  }
  if ( v112 == v119 )
    return v103;
  v89 = (char *)Src + v102;
  v90 = *((_DWORD *)v89 - 1);
  *(_QWORD *)v89 = *(_QWORD *)(v89 - 12);
  *((_DWORD *)v89 + 2) = v90;
  v91 = Src[2];
  v92 = v137;
  *(_QWORD *)(Src - 3) = *(_QWORD *)Src;
  *(Src - 1) = v91;
  v93 = &Src[3 * v106];
  v94 = &v20[12 * v106 + 4];
  v95 = (char *)Src - v20;
  do
  {
    v96 = (11 * *(_DWORD *)&v94[v95 + 4] - *(_DWORD *)&v94[v95 - 8] - *(_DWORD *)&v94[v95 + 16] - *((_DWORD *)v94 + 1)) >> 16;
    if ( (v96 & 0xFF00) != 0 )
      LOBYTE(v96) = ~HIBYTE(v96);
    *v92 = v96;
    v97 = (11 * *(_DWORD *)&v94[v95] - *(_DWORD *)&v94[v95 - 12] - *(_DWORD *)&v94[v95 + 12] - *(_DWORD *)v94) >> 16;
    if ( (v97 & 0xFF00) != 0 )
      LOBYTE(v97) = ~HIBYTE(v97);
    v92[1] = v97;
    v98 = (11 * *v93 - *(_DWORD *)&v94[v95 + 8] - *(_DWORD *)&v94[v95 - 16] - *((_DWORD *)v94 - 1)) >> 16;
    if ( (v98 & 0xFF00) != 0 )
      LOBYTE(v98) = ~HIBYTE(v98);
    v92[2] = v98;
    v93 += 3;
    v94 += 12;
    v92 += v139;
  }
  while ( v92 != v138 );
  v99 = *(_WORD *)v111;
  if ( v111[0] < 0 )
  {
    ((void (__fastcall *)(char *, _BYTE *, _DWORD *))v114)(v111, v92, v93);
    v99 = *(_WORD *)v111;
  }
  if ( (v99 & 0x800) != 0 )
  {
    AlphaBlendBGRF(v111, v92);
    LOBYTE(v99) = v111[0];
  }
  if ( (v99 & 0x10) != 0 )
  {
    MappingBGRF(v133, v134, v121, v128);
    v101 = v131 + v128;
    if ( v101 == v129 )
      v101 = v130;
    v128 = v101;
  }
  v115(v111, v135, v136, v112, v120, v122, v122 + v126, v127, v116);
  return v103 + 1;
}
