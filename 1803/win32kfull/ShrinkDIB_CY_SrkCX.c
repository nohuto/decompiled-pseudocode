/*
 * XREFs of ShrinkDIB_CY_SrkCX @ 0x1C0001010
 * Callers:
 *     <none>
 * Callees:
 *     SrkYDIB_SrkCX @ 0x1C00019E0 (SrkYDIB_SrkCX.c)
 *     GetFixupScan @ 0x1C00D5270 (GetFixupScan.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C013D380 (memmove.c)
 *     AlphaBlendBGRF @ 0x1C0234D70 (AlphaBlendBGRF.c)
 *     MappingBGRF @ 0x1C0239330 (MappingBGRF.c)
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
  int v21; // r11d
  __int64 v22; // rcx
  int v23; // r11d
  char *v24; // rax
  char *v25; // r10
  __int16 *v26; // r14
  __int64 FixupScan; // rax
  int *v28; // rax
  int v29; // ecx
  __int64 v30; // r8
  _DWORD *v31; // rdx
  __int64 v32; // rax
  int v33; // r12d
  _WORD *v34; // r15
  __int64 v35; // r13
  unsigned int v36; // edi
  unsigned __int64 v37; // r14
  __int16 *v38; // r15
  __int64 v39; // rax
  unsigned int v40; // ecx
  int v41; // edi
  int *v42; // rdx
  int v43; // r8d
  int v44; // r9d
  int v45; // eax
  __int64 v46; // r8
  signed __int64 v47; // rbx
  _DWORD *v48; // rdx
  __int64 v49; // rax
  unsigned int v50; // r14d
  char *v51; // r12
  __int64 v52; // rax
  char *v53; // rdi
  __int16 *v54; // r15
  unsigned __int64 v55; // r12
  __int64 v56; // rax
  unsigned int v57; // ecx
  int v58; // r14d
  int *v59; // rdx
  int v60; // r8d
  int v61; // r9d
  int v62; // eax
  _DWORD *v63; // rcx
  int v64; // eax
  _BYTE *v65; // r10
  unsigned __int16 v66; // ax
  __int64 v67; // r9
  _DWORD *v68; // rax
  unsigned __int16 v69; // cx
  __int64 v70; // r9
  unsigned __int8 v71; // r11
  unsigned __int8 v72; // r14
  int v73; // ecx
  int v74; // ecx
  int v75; // ecx
  __int64 v76; // r9
  __int64 v77; // rdx
  __int64 v78; // r8
  __int16 v79; // ax
  int v81; // eax
  __int64 v82; // r8
  __int64 v83; // r9
  _DWORD *v84; // rdx
  __int64 v85; // rax
  __int64 v86; // r8
  __int64 v87; // r9
  _DWORD *v88; // rdx
  __int64 v89; // rax
  char *v90; // rcx
  int v91; // eax
  int v92; // eax
  _BYTE *v93; // rdx
  _DWORD *v94; // r9
  char *v95; // rcx
  signed __int64 v96; // r10
  int v97; // r8d
  int v98; // r8d
  __int64 v99; // r8
  __int16 v100; // ax
  __int64 v101; // rax
  __int64 v102; // rax
  _DWORD *v103; // [rsp+58h] [rbp-A8h]
  int v104; // [rsp+60h] [rbp-A0h]
  unsigned int v105; // [rsp+64h] [rbp-9Ch]
  _DWORD *Src; // [rsp+68h] [rbp-98h]
  unsigned int v107; // [rsp+70h] [rbp-90h]
  __int64 v108; // [rsp+78h] [rbp-88h]
  _WORD *v109; // [rsp+80h] [rbp-80h]
  _WORD *v110; // [rsp+80h] [rbp-80h]
  char *v111; // [rsp+90h] [rbp-70h]
  char v112[136]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v113; // [rsp+128h] [rbp+28h]
  int v114; // [rsp+13Ch] [rbp+3Ch]
  void (__fastcall *v115)(char *); // [rsp+160h] [rbp+60h]
  void (__fastcall *v116)(char *, __int64, __int64, __int64, __int64, __int64, __int64, int, __int64); // [rsp+1B0h] [rbp+B0h]
  __int64 v117; // [rsp+1B8h] [rbp+B8h]
  __int64 v118; // [rsp+1D0h] [rbp+D0h]
  __int64 v119; // [rsp+1D8h] [rbp+D8h]
  __int64 v120; // [rsp+1E0h] [rbp+E0h]
  __int64 v121; // [rsp+220h] [rbp+120h]
  __int64 v122; // [rsp+228h] [rbp+128h]
  __int64 v123; // [rsp+238h] [rbp+138h]
  __int64 v124; // [rsp+240h] [rbp+140h]
  __int64 v125; // [rsp+248h] [rbp+148h]
  int v126; // [rsp+250h] [rbp+150h]
  int v127; // [rsp+254h] [rbp+154h]
  int v128; // [rsp+258h] [rbp+158h]
  __int64 v129; // [rsp+260h] [rbp+160h]
  __int64 v130; // [rsp+268h] [rbp+168h]
  __int64 v131; // [rsp+270h] [rbp+170h]
  int v132; // [rsp+278h] [rbp+178h]
  __int16 *v133; // [rsp+2B8h] [rbp+1B8h]
  __int64 v134; // [rsp+2C0h] [rbp+1C0h]
  __int64 v135; // [rsp+2C8h] [rbp+1C8h]
  __int64 v136; // [rsp+2D0h] [rbp+1D0h]
  __int64 v137; // [rsp+2D8h] [rbp+1D8h]
  _BYTE *v138; // [rsp+2E0h] [rbp+1E0h]
  _BYTE *v139; // [rsp+2E8h] [rbp+1E8h]
  int v140; // [rsp+2F0h] [rbp+1F0h]

  if ( *(_WORD *)(*((_QWORD *)a1 + 39) + 14LL) && !*((_QWORD *)a1 + 67) )
    return 0LL;
  v1 = v112;
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
  v16 = v119;
  v17 = *(_DWORD **)(v119 + 32);
  v18 = *(unsigned __int16 *)(v119 + 14);
  v108 = *(_QWORD *)(v119 + 24);
  v19 = (unsigned __int64)(v17 + 256);
  v20 = (char *)(v17 + 515);
  v21 = 12 * (*(_DWORD *)(v118 + 20) + 2);
  v22 = v21;
  v23 = v21 - 24;
  v24 = (char *)v17 + v22 + 2048;
  v104 = v23;
  v25 = &v24[v22 + 12];
  Src = v24 + 12;
  v103 = v25;
  v107 = *(unsigned __int16 *)(v118 + 12) - 1;
  if ( *(_WORD *)(v119 + 14) )
  {
    v26 = v133;
    FixupScan = GetFixupScan(v112, v133);
    SrkYDIB_SrkCX(v118, FixupScan, v26);
    v28 = v17;
    v29 = -v18;
    do
    {
      v29 += v18;
      *v28++ = v29;
    }
    while ( (unsigned __int64)v28 < v19 );
    v25 = (char *)v103;
    v30 = (__int64)v26 + 1;
    v23 = v104;
    v31 = v103;
    do
    {
      v32 = *(unsigned __int8 *)(v30 + 1);
      v30 += 3LL;
      *v31 = v17[v32];
      v31[1] = v17[*(unsigned __int8 *)(v30 - 3)];
      v31[2] = v17[*(unsigned __int8 *)(v30 - 4)];
      v31 += 3;
    }
    while ( v31 < (_DWORD *)((char *)v103 + v104) );
    v16 = v119;
    if ( !*(_WORD *)(v119 + 10) )
      *(_DWORD *)v112 |= 0x20u;
  }
  v33 = *(unsigned __int16 *)(v16 + 12);
  v34 = *(_WORD **)(v16 + 40);
  v105 = 0;
  if ( *(_WORD *)(v16 + 12) )
  {
    v35 = v23;
    do
    {
      v36 = (unsigned __int16)*v34;
      v37 = (unsigned __int64)&v25[v35];
      v109 = v34 + 1;
      v38 = v133;
      v39 = GetFixupScan(v112, v133);
      SrkYDIB_SrkCX(v118, v39, v38);
      if ( (v36 & 0x4000) != 0 )
      {
        v40 = v36;
        v41 = v36 & 0x3FFF;
        v42 = v17;
        v43 = -v41;
        v44 = (v40 >> 15) + *(_DWORD *)(v108 + 4) - v41;
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
        v25 = v20;
        v47 = v20 - (char *)v103;
        v48 = v103 + 1;
        do
        {
          v49 = *(unsigned __int8 *)(v46 + 1);
          v48 += 3;
          v46 += 3LL;
          *(v48 - 4) += v17[v49];
          *(v48 - 3) += v17[*(unsigned __int8 *)(v46 - 3)];
          *(v48 - 2) += v17[*(unsigned __int8 *)(v46 - 4)];
          *(_DWORD *)((char *)v48 + v47 - 16) = v17[*(unsigned __int8 *)(v46 - 2) + 256];
          *(_DWORD *)((char *)v48 + v47 - 12) = v17[*(unsigned __int8 *)(v46 - 3) + 256];
          *(_DWORD *)((char *)v48 + v47 - 8) = v17[*(unsigned __int8 *)(v46 - 4) + 256];
        }
        while ( (unsigned __int64)(v48 - 1) < v37 );
        v20 = (char *)Src;
        --v33;
        Src = v103;
        v103 = v25;
      }
      else
      {
        v25 = (char *)v103;
        v86 = (__int64)v38 + 1;
        v87 = v108 + ((v36 >> 5) & 0x400);
        v88 = v103 + 2;
        do
        {
          v89 = *(unsigned __int8 *)(v86 + 1);
          v88 += 3;
          v86 += 3LL;
          *(v88 - 5) += *(_DWORD *)(v87 + 4 * v89);
          *(v88 - 4) += *(_DWORD *)(v87 + 4LL * *(unsigned __int8 *)(v86 - 3));
          *(v88 - 3) += *(_DWORD *)(v87 + 4LL * *(unsigned __int8 *)(v86 - 4));
        }
        while ( (unsigned __int64)(v88 - 2) < v37 );
      }
      v34 = v109;
    }
    while ( v33 );
    v16 = v119;
    v19 = (unsigned __int64)(v17 + 256);
  }
  if ( *(_WORD *)(v16 + 12) == 1 )
    memmove(v20, Src, v104);
  v50 = (unsigned __int16)*v34;
  if ( *v34 )
  {
    v51 = (char *)v103;
    v52 = v104;
    do
    {
      v110 = v34 + 1;
      v53 = v51;
      v54 = v133;
      v55 = (unsigned __int64)&v51[v52];
      v56 = GetFixupScan(v112, v133);
      SrkYDIB_SrkCX(v118, v56, v54);
      if ( (v50 & 0x4000) != 0 )
      {
        v57 = v50;
        v58 = v50 & 0x3FFF;
        v59 = v17;
        v60 = -v58;
        v61 = (v57 >> 15) + *(_DWORD *)(v108 + 4) - v58;
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
        v111 = v20;
        v64 = *(_DWORD *)((char *)Src + v104 - 4);
        *(_QWORD *)((char *)Src + v104) = *(_QWORD *)((char *)Src + v104 - 12);
        *(_DWORD *)((char *)Src + v104 + 8) = v64;
        v65 = v138;
        if ( v107 )
        {
          v66 = *v54;
          v67 = *((unsigned __int8 *)v54 + 2);
          v54 = (__int16 *)((char *)v54 + 3);
          *v103 += v17[v67];
          v53 = (char *)(v103 + 3);
          v103[1] += v17[HIBYTE(v66)];
          v103[2] += v17[(unsigned __int8)v66];
          *(_DWORD *)v20 = v17[(unsigned int)(v67 + 256)];
          *((_DWORD *)v20 + 1) = v17[HIBYTE(v66) + 256];
          *((_DWORD *)v20 + 2) = v17[(unsigned __int8)v66 + 256];
          v20 += 12;
          v63 = Src + 3;
        }
        else
        {
          v81 = Src[2];
          *(_QWORD *)(Src - 3) = *(_QWORD *)Src;
          *(Src - 1) = v81;
        }
        v68 = v63 + 5;
        do
        {
          v69 = *v54;
          v70 = *((unsigned __int8 *)v54 + 2);
          v54 = (__int16 *)((char *)v54 + 3);
          v71 = HIBYTE(v69);
          v72 = v69;
          *(_DWORD *)v53 += v17[v70];
          *((_DWORD *)v53 + 1) += v17[HIBYTE(v69)];
          *((_DWORD *)v53 + 2) += v17[(unsigned __int8)v69];
          v73 = (12 * *(v68 - 3) - *(v68 - 6) - *((_DWORD *)v20 + 2) - *((_DWORD *)v53 + 2) - *v68) >> 16;
          if ( ((12 * *(v68 - 3) - *(v68 - 6) - *((_DWORD *)v20 + 2) - *((_DWORD *)v53 + 2) - *v68) & 0xFF000000) != 0 )
            LOBYTE(v73) = ~HIBYTE(v73);
          *v65 = v73;
          v74 = (12 * *(v68 - 4) - *(v68 - 7) - *(v68 - 1) - *((_DWORD *)v53 + 1) - *((_DWORD *)v20 + 1)) >> 16;
          if ( ((12 * *(v68 - 4) - *(v68 - 7) - *(v68 - 1) - *((_DWORD *)v53 + 1) - *((_DWORD *)v20 + 1)) & 0xFF000000) != 0 )
            LOBYTE(v74) = ~HIBYTE(v74);
          v65[1] = v74;
          v75 = (12 * *(v68 - 5) - *(v68 - 8) - *(v68 - 2) - *(_DWORD *)v53 - *(_DWORD *)v20) >> 16;
          if ( ((12 * *(v68 - 5) - *(v68 - 8) - *(v68 - 2) - *(_DWORD *)v53 - *(_DWORD *)v20) & 0xFF000000) != 0 )
            LOBYTE(v75) = ~HIBYTE(v75);
          v65[2] = v75;
          v68 += 3;
          v53 += 12;
          *(_DWORD *)v20 = v17[(unsigned __int8)v70 + 256];
          *((_DWORD *)v20 + 1) = v17[v71 + 256];
          *((_DWORD *)v20 + 2) = v17[v72 + 256];
          v20 += 12;
          v65 += v140;
        }
        while ( v65 != v139 );
        if ( (unsigned __int64)v53 < v55 )
        {
          v76 = *((unsigned __int8 *)v54 + 2);
          v77 = (unsigned __int8)HIBYTE(*v54);
          v78 = (unsigned __int8)*v54;
          *(_DWORD *)v53 += v17[v76];
          *((_DWORD *)v53 + 1) += v17[v77];
          *((_DWORD *)v53 + 2) += v17[v78];
          *(_DWORD *)v20 = v17[(unsigned int)(v76 + 256)];
          *((_DWORD *)v20 + 1) = v17[(unsigned int)(v77 + 256)];
          *((_DWORD *)v20 + 2) = v17[(unsigned int)(v78 + 256)];
        }
        v51 = v111;
        v79 = *(_WORD *)v112;
        v20 = (char *)Src;
        Src = v103;
        v103 = v111;
        if ( v112[0] < 0 )
        {
          v115(v112);
          v79 = *(_WORD *)v112;
        }
        if ( (v79 & 0x800) != 0 )
        {
          AlphaBlendBGRF(v112);
          LOBYTE(v79) = v112[0];
        }
        if ( (v79 & 0x10) != 0 )
        {
          MappingBGRF(v134, v135, v122, v129);
          v101 = v132 + v129;
          if ( v101 == v130 )
            v101 = v131;
          v129 = v101;
        }
        v116(v112, v136, v137, v113, v121, v123, v123 + v127, v128, v117);
        v123 += v126;
        if ( v123 == v124 )
          v123 = v125;
        v113 += v114;
        ++v105;
      }
      else
      {
        v82 = (__int64)v54 + 1;
        v83 = v108 + ((v50 >> 5) & 0x400);
        v84 = v103 + 2;
        do
        {
          v85 = *(unsigned __int8 *)(v82 + 1);
          v84 += 3;
          v82 += 3LL;
          *(v84 - 5) += *(_DWORD *)(v83 + 4 * v85);
          *(v84 - 4) += *(_DWORD *)(v83 + 4LL * *(unsigned __int8 *)(v82 - 3));
          *(v84 - 3) += *(_DWORD *)(v83 + 4LL * *(unsigned __int8 *)(v82 - 4));
        }
        while ( (unsigned __int64)(v84 - 2) < v55 );
        v51 = (char *)v103;
      }
      v34 = v110;
      v52 = v104;
      v50 = (unsigned __int16)*v110;
    }
    while ( *v110 );
  }
  if ( v113 == v120 )
    return v105;
  v90 = (char *)Src + v104;
  v91 = *((_DWORD *)v90 - 1);
  *(_QWORD *)v90 = *(_QWORD *)(v90 - 12);
  *((_DWORD *)v90 + 2) = v91;
  v92 = Src[2];
  v93 = v138;
  *(_QWORD *)(Src - 3) = *(_QWORD *)Src;
  *(Src - 1) = v92;
  v94 = &Src[3 * v107];
  v95 = &v20[12 * v107 + 4];
  v96 = (char *)Src - v20;
  do
  {
    v97 = (11 * *(_DWORD *)&v95[v96 + 4] - *(_DWORD *)&v95[v96 - 8] - *(_DWORD *)&v95[v96 + 16] - *((_DWORD *)v95 + 1)) >> 16;
    if ( ((11 * *(_DWORD *)&v95[v96 + 4] - *(_DWORD *)&v95[v96 - 8] - *(_DWORD *)&v95[v96 + 16] - *((_DWORD *)v95 + 1)) & 0xFF000000) != 0 )
      LOBYTE(v97) = ~HIBYTE(v97);
    *v93 = v97;
    v98 = (11 * *(_DWORD *)&v95[v96] - *(_DWORD *)&v95[v96 - 12] - *(_DWORD *)&v95[v96 + 12] - *(_DWORD *)v95) >> 16;
    if ( ((11 * *(_DWORD *)&v95[v96] - *(_DWORD *)&v95[v96 - 12] - *(_DWORD *)&v95[v96 + 12] - *(_DWORD *)v95) & 0xFF000000) != 0 )
      LOBYTE(v98) = ~HIBYTE(v98);
    v93[1] = v98;
    v99 = (unsigned int)((11 * *v94 - *(_DWORD *)&v95[v96 + 8] - *(_DWORD *)&v95[v96 - 16] - *((_DWORD *)v95 - 1)) >> 16);
    if ( ((11 * *v94 - *(_DWORD *)&v95[v96 + 8] - *(_DWORD *)&v95[v96 - 16] - *((_DWORD *)v95 - 1)) & 0xFF000000) != 0 )
      v99 = ~BYTE3(v99);
    v93[2] = v99;
    v94 += 3;
    v95 += 12;
    v93 += v140;
  }
  while ( v93 != v139 );
  v100 = *(_WORD *)v112;
  if ( v112[0] < 0 )
  {
    ((void (__fastcall *)(char *, _BYTE *, __int64, _DWORD *))v115)(v112, v93, v99, v94);
    v100 = *(_WORD *)v112;
  }
  if ( (v100 & 0x800) != 0 )
  {
    AlphaBlendBGRF(v112);
    LOBYTE(v100) = v112[0];
  }
  if ( (v100 & 0x10) != 0 )
  {
    MappingBGRF(v134, v135, v122, v129);
    v102 = v132 + v129;
    if ( v102 == v130 )
      v102 = v131;
    v129 = v102;
  }
  v116(v112, v136, v137, v113, v121, v123, v123 + v127, v128, v117);
  return v105 + 1;
}
