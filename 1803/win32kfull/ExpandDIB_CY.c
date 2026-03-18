/*
 * XREFs of ExpandDIB_CY @ 0x1C0236110
 * Callers:
 *     <none>
 * Callees:
 *     GetFixupScan @ 0x1C00D5270 (GetFixupScan.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C013D380 (memmove.c)
 *     AlphaBlendBGRF @ 0x1C0234D70 (AlphaBlendBGRF.c)
 *     MappingBGRF @ 0x1C0239330 (MappingBGRF.c)
 */

__int64 __fastcall ExpandDIB_CY(_OWORD *a1)
{
  __int64 v1; // rax
  int *v2; // rdx
  __int128 v3; // xmm1
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int64 v10; // rax
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  unsigned __int64 v15; // r14
  unsigned __int8 *v16; // rdi
  int v17; // ecx
  __int64 v18; // r13
  __int64 v19; // rsi
  char *v20; // r12
  unsigned __int8 *v21; // r15
  __int64 FixupScan; // rax
  __int64 v23; // rax
  __int64 v24; // rcx
  unsigned int v25; // r15d
  int v26; // eax
  unsigned int v27; // r15d
  unsigned int v28; // r12d
  int v29; // eax
  __int128 v30; // xmm1
  unsigned __int8 *v31; // r13
  unsigned __int8 *v32; // rbx
  __int64 v33; // rax
  unsigned __int8 *v34; // rdx
  char *v35; // rbx
  int v36; // eax
  int v37; // eax
  int v38; // eax
  __int64 *v39; // rdx
  int v40; // eax
  __int64 v41; // rbx
  __int128 v42; // xmm1
  unsigned __int8 *v43; // r15
  __int64 v44; // rax
  __int64 v45; // r9
  unsigned __int8 *v46; // r8
  int v47; // eax
  int v48; // eax
  int v49; // edx
  int v50; // eax
  unsigned __int64 v51; // rax
  _BYTE *v52; // r9
  int v53; // r8d
  int v54; // edx
  int v55; // ecx
  int v56; // r11d
  int *v57; // r10
  unsigned __int8 *v58; // r15
  __int64 v59; // r10
  unsigned __int8 *v60; // r11
  __int64 v61; // rbx
  int v62; // r8d
  int v63; // eax
  int *v64; // r10
  unsigned __int8 *v65; // r10
  __int64 v66; // r11
  __int64 v67; // rbx
  int v68; // r8d
  int v69; // eax
  int *v70; // r8
  unsigned __int8 *v71; // r8
  __int64 v72; // r10
  __int64 v73; // rax
  __int64 v74; // rcx
  unsigned __int8 *v75; // rdx
  int v76; // eax
  __int16 v77; // ax
  __int64 v78; // rax
  __int64 v79; // rcx
  _BYTE v81[40]; // [rsp+60h] [rbp-A8h]
  unsigned __int8 *v82; // [rsp+88h] [rbp-80h]
  size_t Size; // [rsp+90h] [rbp-78h]
  __int64 v84; // [rsp+98h] [rbp-70h]
  int v85; // [rsp+A8h] [rbp-60h]
  unsigned __int64 v86; // [rsp+B0h] [rbp-58h]
  unsigned __int64 v87; // [rsp+B8h] [rbp-50h]
  __int64 *v88; // [rsp+C0h] [rbp-48h]
  int v89[34]; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v90; // [rsp+150h] [rbp+48h]
  int v91; // [rsp+158h] [rbp+50h]
  unsigned int v92; // [rsp+15Ch] [rbp+54h]
  int v93; // [rsp+164h] [rbp+5Ch]
  void (__fastcall *v94)(int *); // [rsp+188h] [rbp+80h]
  void (__fastcall *v95)(int *, __int64, __int64, __int64, __int64, __int64, __int64, int, __int64); // [rsp+1D8h] [rbp+D0h]
  __int64 v96; // [rsp+1E0h] [rbp+D8h]
  void (__fastcall *v97)(__int64, __int64, char *, char *, int); // [rsp+1E8h] [rbp+E0h]
  __int64 v98; // [rsp+1F8h] [rbp+F0h]
  __int64 v99; // [rsp+200h] [rbp+F8h]
  __int64 v100; // [rsp+248h] [rbp+140h]
  __int64 v101; // [rsp+250h] [rbp+148h]
  __int64 v102; // [rsp+260h] [rbp+158h]
  __int64 v103; // [rsp+268h] [rbp+160h]
  __int64 v104; // [rsp+270h] [rbp+168h]
  int v105; // [rsp+278h] [rbp+170h]
  int v106; // [rsp+27Ch] [rbp+174h]
  int v107; // [rsp+280h] [rbp+178h]
  __int64 v108; // [rsp+288h] [rbp+180h]
  __int64 v109; // [rsp+290h] [rbp+188h]
  __int64 v110; // [rsp+298h] [rbp+190h]
  int v111; // [rsp+2A0h] [rbp+198h]
  __int64 v112; // [rsp+2E0h] [rbp+1D8h]
  __int64 v113; // [rsp+2E8h] [rbp+1E0h]
  __int64 v114; // [rsp+2F0h] [rbp+1E8h]
  __int64 v115; // [rsp+2F8h] [rbp+1F0h]
  __int64 v116; // [rsp+300h] [rbp+1F8h]
  _BYTE *v117; // [rsp+308h] [rbp+200h]
  _BYTE *v118; // [rsp+310h] [rbp+208h]
  int v119; // [rsp+318h] [rbp+210h]

  v1 = 4LL;
  v2 = v89;
  do
  {
    v3 = a1[1];
    *(_OWORD *)v2 = *a1;
    v4 = a1[2];
    *((_OWORD *)v2 + 1) = v3;
    v5 = a1[3];
    *((_OWORD *)v2 + 2) = v4;
    v6 = a1[4];
    *((_OWORD *)v2 + 3) = v5;
    v7 = a1[5];
    *((_OWORD *)v2 + 4) = v6;
    v8 = a1[6];
    *((_OWORD *)v2 + 5) = v7;
    v9 = a1[7];
    a1 += 8;
    *((_OWORD *)v2 + 6) = v8;
    v2 += 32;
    *((_OWORD *)v2 - 1) = v9;
    --v1;
  }
  while ( v1 );
  v10 = *((_QWORD *)a1 + 10);
  v11 = a1[1];
  *(_OWORD *)v2 = *a1;
  v12 = a1[2];
  *((_OWORD *)v2 + 1) = v11;
  v13 = a1[3];
  *((_OWORD *)v2 + 2) = v12;
  v14 = a1[4];
  *((_OWORD *)v2 + 3) = v13;
  *((_OWORD *)v2 + 4) = v14;
  *((_QWORD *)v2 + 10) = v10;
  v15 = *(_QWORD *)(v99 + 32);
  v86 = v15;
  v87 = v15 + 1024;
  v16 = (unsigned __int8 *)(v15 + 4105);
  v17 = 3 * (v91 + 6);
  v18 = v17 + v17 + v15 + 4105;
  *(_QWORD *)&v81[8] = v17 + v15 + 4105;
  v19 = v17 + v18;
  v20 = (char *)(v17 + v19);
  *(_QWORD *)&v81[16] = v18;
  v21 = (unsigned __int8 *)&v20[v17];
  *(_QWORD *)&v81[24] = v19;
  *(_QWORD *)&v81[32] = v20;
  v82 = v21;
  Size = v17 - 18;
  FixupScan = GetFixupScan((unsigned int *)v89, v112);
  v97(v98, FixupScan, v20, &v20[Size], 3);
  if ( (*(_BYTE *)(v99 + 8) & 1) != 0 )
  {
    v23 = GetFixupScan((unsigned int *)v89, v112);
    v97(v98, v23, (char *)v21, (char *)&v21[Size], 3);
  }
  else
  {
    memmove(v21, v20, Size);
  }
  v24 = v99;
  v25 = *(unsigned __int16 *)(v99 + 12);
  v26 = v25 & 0xF;
  v27 = v25 >> 4;
  v28 = v26 + v27;
  if ( v26 + v27 )
  {
    do
    {
      v29 = v27;
      --v28;
      v30 = *(_OWORD *)&v81[24];
      --v27;
      v31 = &v16[Size];
      *(_OWORD *)v81 = *(_OWORD *)&v81[8];
      *(_QWORD *)&v81[32] = v82;
      v32 = v82;
      v82 = v16;
      *(_OWORD *)&v81[16] = v30;
      if ( v29 <= 0 )
      {
        v33 = GetFixupScan((unsigned int *)v89, v112);
        v97(v98, v33, (char *)v16, (char *)&v16[Size], 3);
      }
      else
      {
        memmove(v16, v32, Size);
      }
      v19 = *((_QWORD *)&v30 + 1);
      if ( (v89[0] & 0x200) != 0 )
      {
        memmove(*((void **)&v30 + 1), v32, Size);
      }
      else
      {
        v34 = (unsigned __int8 *)(*((_QWORD *)&v30 + 1) + 1LL);
        v35 = (char *)&v32[-*((_QWORD *)&v30 + 1)];
        do
        {
          v36 = (6 * v34[(_QWORD)v35 - 1] - *(v34 - 1) - *v16) >> 2;
          if ( ((6 * v34[(_QWORD)v35 - 1] - *(v34 - 1) - *v16) & 0x3FC00) != 0 )
            LOBYTE(v36) = ~HIBYTE(v36);
          *(v34 - 1) = v36;
          v37 = (6 * v34[(_QWORD)v35] - v16[1] - *v34) >> 2;
          if ( ((6 * v34[(_QWORD)v35] - v16[1] - *v34) & 0x3FC00) != 0 )
            LOBYTE(v37) = ~HIBYTE(v37);
          *v34 = v37;
          v38 = (6 * v34[(_QWORD)v35 + 1] - v16[2] - v34[1]) >> 2;
          if ( ((6 * v34[(_QWORD)v35 + 1] - v16[2] - v34[1]) & 0x3FC00) != 0 )
            LOBYTE(v38) = ~HIBYTE(v38);
          v34[1] = v38;
          v16 += 3;
          v34 += 3;
        }
        while ( v16 < v31 );
      }
      v16 = *(unsigned __int8 **)v81;
    }
    while ( v28 );
    v24 = v99;
    v18 = v30;
  }
  v39 = *(__int64 **)(v24 + 40);
  v40 = *(_DWORD *)(v24 + 16);
  while ( v40 )
  {
    v41 = *v39;
    v85 = v40 - 1;
    v84 = *v39;
    v88 = v39 + 1;
    if ( (*v39 & 0x8000u) != 0LL )
    {
      v42 = *(_OWORD *)&v81[24];
      *(_OWORD *)v81 = *(_OWORD *)&v81[8];
      v43 = &v16[Size];
      *(_QWORD *)&v81[32] = v82;
      *(_OWORD *)&v81[16] = v42;
      v82 = v16;
      v44 = GetFixupScan((unsigned int *)v89, v112);
      v97(v98, v44, (char *)v16, (char *)&v16[Size], 3);
      if ( (v89[0] & 0x200) != 0 )
      {
        v19 = *((_QWORD *)&v42 + 1);
        memmove(*((void **)&v42 + 1), *(const void **)&v81[32], Size);
      }
      else
      {
        v19 = *((_QWORD *)&v42 + 1);
        v45 = *(_QWORD *)&v81[32] - *((_QWORD *)&v42 + 1);
        v46 = (unsigned __int8 *)(*((_QWORD *)&v42 + 1) + 1LL);
        do
        {
          v47 = (6 * v46[v45 - 1] - *v16 - *(v46 - 1)) >> 2;
          if ( ((6 * v46[v45 - 1] - *v16 - *(v46 - 1)) & 0x3FC00) != 0 )
            LOBYTE(v47) = ~HIBYTE(v47);
          *(v46 - 1) = v47;
          v48 = (6 * v46[v45] - v16[1] - *v46) >> 2;
          if ( ((6 * v46[v45] - v16[1] - *v46) & 0x3FC00) != 0 )
            LOBYTE(v48) = ~HIBYTE(v48);
          *v46 = v48;
          v49 = 6 * v46[v45 + 1] - v16[2] - v46[1];
          v50 = v49 >> 2;
          if ( (v49 & 0x3FC00) != 0 )
            LOBYTE(v50) = ~HIBYTE(v50);
          v46[1] = v50;
          v16 += 3;
          v46 += 3;
        }
        while ( v16 < v43 );
      }
      v18 = v42;
      v16 = *(unsigned __int8 **)v81;
      LOWORD(v41) = v41 & 0x3FFF;
    }
    v51 = v15;
    v52 = v117;
    v53 = -WORD1(v84);
    v54 = -WORD2(v84);
    v55 = 4096 - HIWORD(v84);
    v56 = -(unsigned __int16)v41;
    if ( (_WORD)v41 )
    {
      v57 = (int *)(v15 + 2048);
      do
      {
        v56 += (unsigned __int16)v41;
        v53 += WORD1(v84);
        v54 += WORD2(v84);
        *(v57 - 512) = v56;
        v55 += HIWORD(v84);
        *(v57 - 256) = v53;
        *v57 = v54;
        v57[256] = v55;
        ++v57;
      }
      while ( (unsigned __int64)(v57 - 512) < v87 );
      v58 = (unsigned __int8 *)(v19 + 2);
      v15 = v86;
      v59 = v18 - v19;
      v60 = &v16[-v19];
      v61 = *(_QWORD *)&v81[8] - v19;
      do
      {
        v62 = *(_DWORD *)(v86 + 4LL * v58[(_QWORD)v60])
            + *(_DWORD *)(v86 + 4LL * ((unsigned int)v58[v59] + 512))
            + *(_DWORD *)(v86 + 4LL * ((unsigned int)v58[v61] + 256));
        v63 = *v58;
        v58 += 3;
        v52[2] = (*(_DWORD *)(v86 + 4LL * (unsigned int)(v63 + 768)) + v62) >> 13;
        v52[1] = (*(_DWORD *)(v86 + 4LL * ((unsigned int)*(v58 - 4) + 768))
                + *(_DWORD *)(v86 + 4LL * v58[(_QWORD)v60 - 4])
                + *(_DWORD *)(v86 + 4LL * ((unsigned int)v58[v59 - 4] + 512))
                + *(_DWORD *)(v86 + 4LL * ((unsigned int)v58[v61 - 4] + 256))) >> 13;
        *v52 = (*(_DWORD *)(v86 + 4LL * ((unsigned int)*(v58 - 5) + 768))
              + *(_DWORD *)(v86 + 4LL * v58[(_QWORD)v60 - 5])
              + *(_DWORD *)(v86 + 4LL * ((unsigned int)v58[v59 - 5] + 512))
              + *(_DWORD *)(v86 + 4LL * ((unsigned int)v58[v61 - 5] + 256))) >> 13;
        v52 += v119;
      }
      while ( v52 != v118 );
    }
    else if ( WORD1(v84) )
    {
      v64 = (int *)(v15 + 2048);
      do
      {
        v53 += WORD1(v84);
        v54 += WORD2(v84);
        v55 += HIWORD(v84);
        *(v64 - 256) = v53;
        *v64 = v54;
        v64[256] = v55;
        ++v64;
      }
      while ( (unsigned __int64)(v64 - 512) < v15 + 1024 );
      v65 = (unsigned __int8 *)(v19 + 2);
      v66 = *(_QWORD *)&v81[8] - v19;
      v67 = v18 - v19;
      do
      {
        v52[2] = (*(_DWORD *)(v15 + 4LL * ((unsigned int)*v65 + 768))
                + *(_DWORD *)(v15 + 4LL * ((unsigned int)v65[v67] + 512))
                + *(_DWORD *)(v15 + 4LL * ((unsigned int)v65[v66] + 256))) >> 13;
        v52[1] = (*(_DWORD *)(v15 + 4LL * ((unsigned int)*(v65 - 1) + 768))
                + *(_DWORD *)(v15 + 4LL * ((unsigned int)v65[v67 - 1] + 512))
                + *(_DWORD *)(v15 + 4LL * ((unsigned int)v65[v66 - 1] + 256))) >> 13;
        v68 = *(_DWORD *)(v15 + 4LL * ((unsigned int)v65[v67 - 2] + 512))
            + *(_DWORD *)(v15 + 4LL * ((unsigned int)v65[v66 - 2] + 256));
        v69 = *(v65 - 2);
        v65 += 3;
        *v52 = (*(_DWORD *)(v15 + 4LL * (unsigned int)(v69 + 768)) + v68) >> 13;
        v52 += v119;
      }
      while ( v52 != v118 );
    }
    else if ( WORD2(v84) )
    {
      v70 = (int *)(v15 + 3072);
      do
      {
        v54 += WORD2(v84);
        v55 += HIWORD(v84);
        *(v70 - 256) = v54;
        *v70++ = v55;
      }
      while ( (unsigned __int64)(v70 - 768) < v15 + 1024 );
      v71 = (unsigned __int8 *)(v18 + 1);
      v72 = v19 - v18;
      do
      {
        v52[2] = (*(_DWORD *)(v15 + 4LL * ((unsigned int)v71[1] + 512))
                + *(_DWORD *)(v15 + 4LL * ((unsigned int)v71[v72 + 1] + 768))) >> 13;
        v73 = (unsigned int)v71[v72] + 768;
        v74 = (unsigned int)*v71 + 512;
        v71 += 3;
        v52[1] = (*(_DWORD *)(v15 + 4 * v74) + *(_DWORD *)(v15 + 4 * v73)) >> 13;
        *v52 = (*(_DWORD *)(v15 + 4LL * ((unsigned int)*(v71 - 4) + 512))
              + *(_DWORD *)(v15 + 4LL * ((unsigned int)v71[v72 - 4] + 768))) >> 13;
        v52 += v119;
      }
      while ( v52 != v118 );
    }
    else
    {
      do
      {
        v55 += HIWORD(v84);
        *(_DWORD *)(v51 + 3072) = v55;
        v51 += 4LL;
      }
      while ( v51 < v15 + 1024 );
      v75 = (unsigned __int8 *)(v19 + 1);
      do
      {
        v52[2] = *(int *)(v15 + 4LL * ((unsigned int)v75[1] + 768)) >> 13;
        v76 = *v75;
        v75 += 3;
        v52[1] = *(int *)(v15 + 4LL * (unsigned int)(v76 + 768)) >> 13;
        *v52 = *(int *)(v15 + 4LL * ((unsigned int)*(v75 - 4) + 768)) >> 13;
        v52 += v119;
      }
      while ( v52 != v118 );
    }
    v77 = v89[0];
    if ( SLOBYTE(v89[0]) < 0 )
    {
      v94(v89);
      v77 = v89[0];
    }
    if ( (v77 & 0x800) != 0 )
    {
      AlphaBlendBGRF(v89);
      LOBYTE(v77) = v89[0];
    }
    if ( (v77 & 0x10) != 0 )
    {
      MappingBGRF(v113, v114, v101, v108);
      v78 = v111 + v108;
      if ( v78 == v109 )
        v78 = v110;
      v108 = v78;
    }
    v95(v89, v115, v116, v90, v100, v102, v102 + v106, v107, v96);
    v39 = v88;
    v79 = v105 + v102;
    if ( v79 == v103 )
      v79 = v104;
    v90 += v93;
    v40 = v85;
    v102 = v79;
  }
  return v92;
}
