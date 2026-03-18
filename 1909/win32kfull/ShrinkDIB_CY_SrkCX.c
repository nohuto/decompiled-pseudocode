/*
 * XREFs of ShrinkDIB_CY_SrkCX @ 0x1C0001010
 * Callers:
 *     <none>
 * Callees:
 *     SrkYDIB_SrkCX @ 0x1C00019C0 (SrkYDIB_SrkCX.c)
 *     GetFixupScan @ 0x1C0080D9C (GetFixupScan.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01680F0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0168100 (memmove.c)
 *     memset @ 0x1C0168440 (memset.c)
 *     AlphaBlendBGRF @ 0x1C0262AC0 (AlphaBlendBGRF.c)
 *     MappingBGRF @ 0x1C0267C94 (MappingBGRF.c)
 */

__int64 __fastcall ShrinkDIB_CY_SrkCX(__int128 *a1)
{
  _QWORD *v2; // rcx
  __int64 v3; // rax
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int64 v12; // rax
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int64 v17; // r8
  _DWORD *v18; // rsi
  int v19; // edi
  unsigned __int64 v20; // r13
  char *v21; // rbx
  int v22; // r10d
  __int64 v23; // rcx
  int v24; // r10d
  char *v25; // rax
  char *v26; // r15
  __int64 v27; // r14
  __int64 FixupScan; // rax
  int *v29; // rax
  int v30; // ecx
  __int64 v31; // r8
  char *v32; // rdx
  __int64 v33; // rax
  int v34; // r12d
  _WORD *v35; // rdi
  __int64 v36; // r13
  unsigned int v37; // r14d
  unsigned __int64 v38; // rdi
  __int64 v39; // r15
  __int64 v40; // rax
  unsigned int v41; // ecx
  int v42; // r14d
  int *v43; // rdx
  int v44; // r8d
  int v45; // r9d
  int v46; // eax
  __int64 v47; // r8
  char *v48; // r10
  signed __int64 v49; // rbx
  _DWORD *v50; // rdx
  __int64 v51; // rax
  unsigned int v52; // r14d
  __int64 v53; // rax
  unsigned __int64 v54; // r12
  char *v55; // rdi
  __int16 *v56; // r15
  __int64 v57; // rax
  unsigned int v58; // ecx
  int v59; // r14d
  int *v60; // rdx
  int v61; // r8d
  int v62; // r9d
  int v63; // eax
  _DWORD *v64; // rdx
  int v65; // eax
  _BYTE *v66; // r10
  unsigned __int16 v67; // ax
  __int64 v68; // r9
  unsigned __int64 v69; // rdx
  unsigned __int16 v70; // ax
  __int64 v71; // r9
  unsigned __int8 v72; // r11
  unsigned __int8 v73; // r14
  unsigned int v74; // r8d
  int v75; // ecx
  int v76; // eax
  __int64 v77; // r9
  __int64 v78; // r8
  __int16 v79; // ax
  __int64 v81; // r8
  __int64 v82; // r9
  _DWORD *v83; // rdx
  __int64 v84; // rax
  int v85; // eax
  __int64 v86; // r8
  __int64 v87; // r9
  _DWORD *v88; // rdx
  __int64 v89; // rax
  char *v90; // rcx
  int v91; // eax
  int v92; // eax
  _BYTE *v93; // rdx
  _DWORD *v94; // r8
  char *v95; // rcx
  signed __int64 v96; // r9
  int v97; // eax
  int v98; // eax
  int v99; // eax
  __int16 v100; // ax
  __int64 v101; // rax
  __int64 v102; // rax
  int v103; // [rsp+54h] [rbp-ACh]
  unsigned int v104; // [rsp+58h] [rbp-A8h]
  char *v105; // [rsp+60h] [rbp-A0h]
  _DWORD *Src; // [rsp+68h] [rbp-98h]
  unsigned int v107; // [rsp+70h] [rbp-90h]
  __int64 v108; // [rsp+78h] [rbp-88h]
  _WORD *v109; // [rsp+80h] [rbp-80h]
  _WORD *v110; // [rsp+80h] [rbp-80h]
  char *v111; // [rsp+90h] [rbp-70h]
  _QWORD v112[76]; // [rsp+A0h] [rbp-60h] BYREF

  memset(v112, 0, 0x258uLL);
  if ( *(_WORD *)(*((_QWORD *)a1 + 39) + 14LL) && !*((_QWORD *)a1 + 67) )
    return 0LL;
  v2 = v112;
  v3 = 4LL;
  do
  {
    v2 += 16;
    v4 = *a1;
    v5 = a1[1];
    a1 += 8;
    *((_OWORD *)v2 - 8) = v4;
    v6 = *(a1 - 6);
    *((_OWORD *)v2 - 7) = v5;
    v7 = *(a1 - 5);
    *((_OWORD *)v2 - 6) = v6;
    v8 = *(a1 - 4);
    *((_OWORD *)v2 - 5) = v7;
    v9 = *(a1 - 3);
    *((_OWORD *)v2 - 4) = v8;
    v10 = *(a1 - 2);
    *((_OWORD *)v2 - 3) = v9;
    v11 = *(a1 - 1);
    *((_OWORD *)v2 - 2) = v10;
    *((_OWORD *)v2 - 1) = v11;
    --v3;
  }
  while ( v3 );
  v12 = *((_QWORD *)a1 + 10);
  v13 = a1[1];
  *(_OWORD *)v2 = *a1;
  v14 = a1[2];
  *((_OWORD *)v2 + 1) = v13;
  v15 = a1[3];
  *((_OWORD *)v2 + 2) = v14;
  v16 = a1[4];
  *((_OWORD *)v2 + 3) = v15;
  *((_OWORD *)v2 + 4) = v16;
  v2[10] = v12;
  v17 = v112[39];
  v18 = *(_DWORD **)(v112[39] + 32LL);
  v19 = *(unsigned __int16 *)(v112[39] + 14LL);
  v108 = *(_QWORD *)(v112[39] + 24LL);
  v20 = (unsigned __int64)(v18 + 256);
  v21 = (char *)(v18 + 515);
  v22 = 12 * (*(_DWORD *)(v112[38] + 20LL) + 2);
  v23 = v22;
  v24 = v22 - 24;
  v25 = (char *)v18 + v23 + 2048;
  v103 = v24;
  v26 = &v25[v23 + 12];
  Src = v25 + 12;
  v105 = v26;
  v107 = *(unsigned __int16 *)(v112[38] + 12LL) - 1;
  if ( *(_WORD *)(v112[39] + 14LL) )
  {
    v27 = v112[67];
    FixupScan = GetFixupScan(v112, v112[67]);
    SrkYDIB_SrkCX(v112[38], FixupScan, v27);
    v29 = v18;
    v30 = -v19;
    do
    {
      v30 += v19;
      *v29++ = v30;
    }
    while ( (unsigned __int64)v29 < v20 );
    v24 = v103;
    v31 = v27 + 1;
    v32 = v26;
    do
    {
      v33 = *(unsigned __int8 *)(v31 + 1);
      v31 += 3LL;
      *(_DWORD *)v32 = v18[v33];
      *((_DWORD *)v32 + 1) = v18[*(unsigned __int8 *)(v31 - 3)];
      *((_DWORD *)v32 + 2) = v18[*(unsigned __int8 *)(v31 - 4)];
      v32 += 12;
    }
    while ( v32 < &v26[v103] );
    v17 = v112[39];
    if ( !*(_WORD *)(v112[39] + 10LL) )
      LODWORD(v112[0]) |= 0x20u;
  }
  v34 = *(unsigned __int16 *)(v17 + 12);
  v35 = *(_WORD **)(v17 + 40);
  v104 = 0;
  if ( *(_WORD *)(v17 + 12) )
  {
    v36 = v24;
    do
    {
      v37 = (unsigned __int16)*v35;
      v109 = v35 + 1;
      v38 = (unsigned __int64)&v26[v36];
      v39 = v112[67];
      v40 = GetFixupScan(v112, v112[67]);
      SrkYDIB_SrkCX(v112[38], v40, v39);
      if ( (v37 & 0x4000) != 0 )
      {
        v41 = v37;
        v42 = v37 & 0x3FFF;
        v43 = v18;
        v44 = -v42;
        v45 = (v41 >> 15) + *(_DWORD *)(v108 + 4) - v42;
        v46 = -v45;
        do
        {
          v44 += v42;
          v46 += v45;
          *v43 = v44;
          v43[256] = v46;
          ++v43;
        }
        while ( v43 < v18 + 256 );
        v47 = v39 + 1;
        v48 = v21;
        v49 = v21 - v105;
        v50 = v105 + 4;
        do
        {
          v51 = *(unsigned __int8 *)(v47 + 1);
          v50 += 3;
          v47 += 3LL;
          *(v50 - 4) += v18[v51];
          *(v50 - 3) += v18[*(unsigned __int8 *)(v47 - 3)];
          *(v50 - 2) += v18[*(unsigned __int8 *)(v47 - 4)];
          *(_DWORD *)((char *)v50 + v49 - 16) = v18[*(unsigned __int8 *)(v47 - 2) + 256];
          *(_DWORD *)((char *)v50 + v49 - 12) = v18[*(unsigned __int8 *)(v47 - 3) + 256];
          *(_DWORD *)((char *)v50 + v49 - 8) = v18[*(unsigned __int8 *)(v47 - 4) + 256];
        }
        while ( (unsigned __int64)(v50 - 1) < v38 );
        v21 = (char *)Src;
        v26 = v48;
        Src = v105;
        --v34;
        v105 = v48;
      }
      else
      {
        v86 = v39 + 1;
        v87 = v108 + ((v37 >> 5) & 0x400);
        v88 = v105 + 8;
        do
        {
          v89 = *(unsigned __int8 *)(v86 + 1);
          v88 += 3;
          v86 += 3LL;
          *(v88 - 5) += *(_DWORD *)(v87 + 4 * v89);
          *(v88 - 4) += *(_DWORD *)(v87 + 4LL * *(unsigned __int8 *)(v86 - 3));
          *(v88 - 3) += *(_DWORD *)(v87 + 4LL * *(unsigned __int8 *)(v86 - 4));
        }
        while ( (unsigned __int64)(v88 - 2) < v38 );
        v26 = v105;
      }
      v35 = v109;
    }
    while ( v34 );
    v17 = v112[39];
    v20 = (unsigned __int64)(v18 + 256);
  }
  if ( *(_WORD *)(v17 + 12) == 1 )
    memmove(v21, Src, v103);
  v52 = (unsigned __int16)*v35;
  if ( *v35 )
  {
    v53 = v103;
    do
    {
      v54 = (unsigned __int64)&v26[v53];
      v110 = v35 + 1;
      v55 = v26;
      v56 = (__int16 *)v112[67];
      v57 = GetFixupScan(v112, v112[67]);
      SrkYDIB_SrkCX(v112[38], v57, v56);
      if ( (v52 & 0x4000) != 0 )
      {
        v58 = v52;
        v59 = v52 & 0x3FFF;
        v60 = v18;
        v61 = -v59;
        v62 = (v58 >> 15) + *(_DWORD *)(v108 + 4) - v59;
        v63 = -v62;
        do
        {
          v61 += v59;
          v63 += v62;
          *v60 = v61;
          v60[256] = v63;
          ++v60;
        }
        while ( (unsigned __int64)v60 < v20 );
        v64 = Src;
        v111 = v21;
        v65 = *(_DWORD *)((char *)Src + v103 - 4);
        *(_QWORD *)((char *)Src + v103) = *(_QWORD *)((char *)Src + v103 - 12);
        *(_DWORD *)((char *)Src + v103 + 8) = v65;
        v66 = (_BYTE *)v112[72];
        if ( v107 )
        {
          v67 = *v56;
          v68 = *((unsigned __int8 *)v56 + 2);
          v56 = (__int16 *)((char *)v56 + 3);
          *(_DWORD *)v105 += v18[v68];
          v55 = v105 + 12;
          *((_DWORD *)v105 + 1) += v18[HIBYTE(v67)];
          *((_DWORD *)v105 + 2) += v18[(unsigned __int8)v67];
          *(_DWORD *)v21 = v18[v68 + 256];
          *((_DWORD *)v21 + 1) = v18[HIBYTE(v67) + 256];
          v64 = Src + 3;
          *((_DWORD *)v21 + 2) = v18[(unsigned __int8)v67 + 256];
          v21 += 12;
        }
        else
        {
          v85 = Src[2];
          *(_QWORD *)(Src - 3) = *(_QWORD *)Src;
          *(Src - 1) = v85;
        }
        v69 = (unsigned __int64)(v64 + 5);
        do
        {
          v70 = *v56;
          v71 = *((unsigned __int8 *)v56 + 2);
          v56 = (__int16 *)((char *)v56 + 3);
          v72 = HIBYTE(v70);
          v73 = v70;
          *(_DWORD *)v55 += v18[v71];
          *((_DWORD *)v55 + 1) += v18[HIBYTE(v70)];
          *((_DWORD *)v55 + 2) += v18[(unsigned __int8)v70];
          v74 = (12 * *(_DWORD *)(v69 - 12)
               - *(_DWORD *)(v69 - 24)
               - *((_DWORD *)v55 + 2)
               - *(_DWORD *)v69
               - *((_DWORD *)v21 + 2)) >> 16;
          if ( (v74 & 0xFF00) != 0 )
            v74 = ~HIBYTE(v74);
          *v66 = v74;
          v75 = (12 * *(_DWORD *)(v69 - 16)
               - *(_DWORD *)(v69 - 28)
               - *(_DWORD *)(v69 - 4)
               - *((_DWORD *)v21 + 1)
               - *((_DWORD *)v55 + 1)) >> 16;
          if ( (v75 & 0xFF00) != 0 )
            LOBYTE(v75) = ~HIBYTE(v75);
          v66[1] = v75;
          v76 = (12 * *(_DWORD *)(v69 - 20)
               - *(_DWORD *)(v69 - 32)
               - *(_DWORD *)(v69 - 8)
               - *(_DWORD *)v55
               - *(_DWORD *)v21) >> 16;
          if ( (v76 & 0xFF00) != 0 )
            LOBYTE(v76) = ~HIBYTE(v76);
          v66[2] = v76;
          v69 += 12LL;
          v55 += 12;
          *(_DWORD *)v21 = v18[(unsigned __int8)v71 + 256];
          *((_DWORD *)v21 + 1) = v18[v72 + 256];
          *((_DWORD *)v21 + 2) = v18[v73 + 256];
          v21 += 12;
          v66 += SLODWORD(v112[74]);
        }
        while ( v66 != (_BYTE *)v112[73] );
        if ( (unsigned __int64)v55 < v54 )
        {
          v77 = *((unsigned __int8 *)v56 + 2);
          v69 = (unsigned __int8)*v56;
          v78 = (unsigned __int8)HIBYTE(*v56);
          *(_DWORD *)v55 += v18[v77];
          *((_DWORD *)v55 + 1) += v18[v78];
          *((_DWORD *)v55 + 2) += v18[v69];
          *(_DWORD *)v21 = v18[v77 + 256];
          *((_DWORD *)v21 + 1) = v18[v78 + 256];
          *((_DWORD *)v21 + 2) = v18[v69 + 256];
        }
        v26 = v111;
        v79 = v112[0];
        v21 = (char *)Src;
        Src = v105;
        v105 = v111;
        if ( SLOBYTE(v112[0]) < 0 )
        {
          ((void (__fastcall *)(_QWORD *, unsigned __int64))v112[24])(v112, v69);
          v79 = v112[0];
        }
        if ( (v79 & 0x800) != 0 )
        {
          AlphaBlendBGRF(v112, v69);
          LOBYTE(v79) = v112[0];
        }
        if ( (v79 & 0x10) != 0 )
        {
          MappingBGRF(v112[68], v112[69], v112[49], v112[56]);
          v101 = SLODWORD(v112[59]) + v112[56];
          if ( v101 == v112[57] )
            v101 = v112[58];
          v112[56] = v101;
        }
        ((void (__fastcall *)(_QWORD *, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))v112[34])(
          v112,
          v112[70],
          v112[71],
          v112[17],
          v112[48],
          v112[51],
          v112[51] + SHIDWORD(v112[54]),
          v112[55],
          v112[35]);
        v112[51] += SLODWORD(v112[54]);
        if ( v112[51] == v112[52] )
          v112[51] = v112[53];
        v112[17] += SHIDWORD(v112[19]);
        ++v104;
      }
      else
      {
        v81 = (__int64)v56 + 1;
        v82 = v108 + ((v52 >> 5) & 0x400);
        v83 = v105 + 8;
        do
        {
          v84 = *(unsigned __int8 *)(v81 + 1);
          v83 += 3;
          v81 += 3LL;
          *(v83 - 5) += *(_DWORD *)(v82 + 4 * v84);
          *(v83 - 4) += *(_DWORD *)(v82 + 4LL * *(unsigned __int8 *)(v81 - 3));
          *(v83 - 3) += *(_DWORD *)(v82 + 4LL * *(unsigned __int8 *)(v81 - 4));
        }
        while ( (unsigned __int64)(v83 - 2) < v54 );
        v26 = v105;
      }
      v35 = v110;
      v53 = v103;
      v52 = (unsigned __int16)*v110;
    }
    while ( *v110 );
  }
  if ( v112[17] == v112[40] )
    return v104;
  v90 = (char *)Src + v103;
  v91 = *((_DWORD *)v90 - 1);
  *(_QWORD *)v90 = *(_QWORD *)(v90 - 12);
  *((_DWORD *)v90 + 2) = v91;
  v92 = Src[2];
  v93 = (_BYTE *)v112[72];
  *(_QWORD *)(Src - 3) = *(_QWORD *)Src;
  *(Src - 1) = v92;
  v94 = &Src[3 * v107];
  v95 = &v21[12 * v107 + 4];
  v96 = (char *)Src - v21;
  do
  {
    v97 = (11 * *(_DWORD *)&v95[v96 + 4] - *(_DWORD *)&v95[v96 - 8] - *(_DWORD *)&v95[v96 + 16] - *((_DWORD *)v95 + 1)) >> 16;
    if ( (v97 & 0xFF00) != 0 )
      LOBYTE(v97) = ~HIBYTE(v97);
    *v93 = v97;
    v98 = (11 * *(_DWORD *)&v95[v96] - *(_DWORD *)&v95[v96 - 12] - *(_DWORD *)&v95[v96 + 12] - *(_DWORD *)v95) >> 16;
    if ( (v98 & 0xFF00) != 0 )
      LOBYTE(v98) = ~HIBYTE(v98);
    v93[1] = v98;
    v99 = (11 * *v94 - *(_DWORD *)&v95[v96 + 8] - *(_DWORD *)&v95[v96 - 16] - *((_DWORD *)v95 - 1)) >> 16;
    if ( (v99 & 0xFF00) != 0 )
      LOBYTE(v99) = ~HIBYTE(v99);
    v93[2] = v99;
    v94 += 3;
    v95 += 12;
    v93 += SLODWORD(v112[74]);
  }
  while ( v93 != (_BYTE *)v112[73] );
  v100 = v112[0];
  if ( SLOBYTE(v112[0]) < 0 )
  {
    ((void (__fastcall *)(_QWORD *, _BYTE *, _DWORD *))v112[24])(v112, v93, v94);
    v100 = v112[0];
  }
  if ( (v100 & 0x800) != 0 )
  {
    AlphaBlendBGRF(v112, v93);
    LOBYTE(v100) = v112[0];
  }
  if ( (v100 & 0x10) != 0 )
  {
    MappingBGRF(v112[68], v112[69], v112[49], v112[56]);
    v102 = SLODWORD(v112[59]) + v112[56];
    if ( v102 == v112[57] )
      v102 = v112[58];
    v112[56] = v102;
  }
  ((void (__fastcall *)(_QWORD *, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))v112[34])(
    v112,
    v112[70],
    v112[71],
    v112[17],
    v112[48],
    v112[51],
    v112[51] + SHIDWORD(v112[54]),
    v112[55],
    v112[35]);
  return v104 + 1;
}
