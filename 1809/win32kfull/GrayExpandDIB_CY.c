/*
 * XREFs of GrayExpandDIB_CY @ 0x1C024CD20
 * Callers:
 *     <none>
 * Callees:
 *     GetFixupScan @ 0x1C0008FDC (GetFixupScan.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0163300 (memmove.c)
 *     AlphaBlendBGRF @ 0x1C024A3E0 (AlphaBlendBGRF.c)
 *     MappingBGRF @ 0x1C024E8D4 (MappingBGRF.c)
 */

__int64 __fastcall GrayExpandDIB_CY(_OWORD *a1)
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
  __int64 v17; // rax
  __int64 v18; // r15
  unsigned __int8 *v19; // rsi
  char *v20; // r13
  char *v21; // r12
  char *v22; // rbx
  void *FixupScan; // rax
  void *v24; // rax
  __int64 v25; // rcx
  unsigned int v26; // ebx
  int v27; // eax
  unsigned int v28; // ebx
  unsigned int v29; // r13d
  __int128 v30; // xmm0
  unsigned __int8 *v31; // xmm1_8
  int v32; // eax
  unsigned __int8 *v33; // r12
  const void *v34; // r15
  unsigned __int8 *v35; // r14
  void *v36; // rax
  signed __int64 v37; // r15
  int v38; // ecx
  __int64 *v39; // rdx
  int v40; // eax
  __int64 v41; // rbx
  __int64 v42; // xmm0_8
  unsigned __int8 *v43; // r12
  unsigned __int8 *v44; // xmm1_8
  unsigned __int8 *v45; // r15
  void *v46; // rax
  int v47; // ecx
  unsigned __int64 v48; // rax
  _WORD *v49; // r8
  int v50; // edx
  unsigned __int8 *v51; // r9
  int v52; // r11d
  int v53; // r10d
  int v54; // ecx
  int *v55; // r9
  int v56; // edx
  __int64 v57; // rax
  unsigned __int64 v58; // rdx
  int *v59; // r9
  __int64 v60; // rcx
  int v61; // edx
  __int64 v62; // rax
  int *v63; // r10
  __int64 v64; // rax
  __int64 v65; // rcx
  __int64 v66; // rax
  __int16 v67; // ax
  __int64 v68; // rax
  __int64 v69; // rcx
  __int64 v71; // [rsp+58h] [rbp-B0h]
  size_t Size; // [rsp+68h] [rbp-A0h]
  __m256i v73; // [rsp+78h] [rbp-90h]
  __int64 v74; // [rsp+98h] [rbp-70h]
  int v75; // [rsp+A8h] [rbp-60h]
  unsigned __int64 v76; // [rsp+B0h] [rbp-58h]
  unsigned __int64 v77; // [rsp+B8h] [rbp-50h]
  __int64 *v78; // [rsp+C0h] [rbp-48h]
  int v79[34]; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v80; // [rsp+150h] [rbp+48h]
  int v81; // [rsp+158h] [rbp+50h]
  unsigned int v82; // [rsp+15Ch] [rbp+54h]
  int v83; // [rsp+164h] [rbp+5Ch]
  void (__fastcall *v84)(int *, unsigned __int64, _WORD *, unsigned __int8 *); // [rsp+188h] [rbp+80h]
  void (__fastcall *v85)(int *, __int64, __int64, __int64, __int64, __int64, __int64, int, __int64); // [rsp+1D8h] [rbp+D0h]
  __int64 v86; // [rsp+1E0h] [rbp+D8h]
  void (__fastcall *v87)(__int64, void *, char *, char *, int); // [rsp+1E8h] [rbp+E0h]
  __int64 v88; // [rsp+1F8h] [rbp+F0h]
  __int64 v89; // [rsp+200h] [rbp+F8h]
  __int64 v90; // [rsp+248h] [rbp+140h]
  __int64 v91; // [rsp+250h] [rbp+148h]
  __int64 v92; // [rsp+260h] [rbp+158h]
  __int64 v93; // [rsp+268h] [rbp+160h]
  __int64 v94; // [rsp+270h] [rbp+168h]
  int v95; // [rsp+278h] [rbp+170h]
  int v96; // [rsp+27Ch] [rbp+174h]
  int v97; // [rsp+280h] [rbp+178h]
  __int64 v98; // [rsp+288h] [rbp+180h]
  __int64 v99; // [rsp+290h] [rbp+188h]
  __int64 v100; // [rsp+298h] [rbp+190h]
  int v101; // [rsp+2A0h] [rbp+198h]
  void *v102; // [rsp+2E0h] [rbp+1D8h]
  __int64 v103; // [rsp+2E8h] [rbp+1E0h]
  __int64 v104; // [rsp+2F0h] [rbp+1E8h]
  __int64 v105; // [rsp+2F8h] [rbp+1F0h]
  __int64 v106; // [rsp+300h] [rbp+1F8h]
  _WORD *v107; // [rsp+308h] [rbp+200h]
  _WORD *v108; // [rsp+310h] [rbp+208h]
  int v109; // [rsp+318h] [rbp+210h]

  v1 = 4LL;
  v2 = v79;
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
  v15 = *(_QWORD *)(v89 + 32);
  v76 = v15;
  v77 = v15 + 1024;
  v16 = (unsigned __int8 *)(v15 + 4099);
  v17 = v81 + 6;
  v18 = v17 + v15 + 4099 + v17;
  v73.m256i_i64[0] = v17 + v15 + 4099;
  v19 = (unsigned __int8 *)(v18 + v17);
  v20 = (char *)(v18 + v17 + v17);
  v73.m256i_i64[1] = v18;
  v21 = &v20[v17];
  v73.m256i_i64[2] = v18 + v17;
  v73.m256i_i64[3] = (__int64)v20;
  v74 = (__int64)&v20[v17];
  Size = v81;
  v22 = &v20[v81];
  FixupScan = GetFixupScan((__int64)v79, v102);
  v87(v88, FixupScan, v20, v22, 1);
  if ( (*(_BYTE *)(v89 + 8) & 1) != 0 )
  {
    v24 = GetFixupScan((__int64)v79, v102);
    v87(v88, v24, v21, &v21[Size], 1);
  }
  else
  {
    memmove(v21, v20, Size);
  }
  v25 = v89;
  v26 = *(unsigned __int16 *)(v89 + 12);
  v27 = v26 & 0xF;
  v28 = v26 >> 4;
  v29 = v27 + v28;
  if ( v27 + v28 )
  {
    do
    {
      --v29;
      v30 = *(_OWORD *)v73.m256i_i8;
      v73.m256i_i64[1] = v73.m256i_i64[2];
      v31 = (unsigned __int8 *)_mm_srli_si128(*(__m128i *)&v73.m256i_u64[2], 8).m128i_u64[0];
      v19 = v31;
      v32 = v28;
      v73.m256i_i64[2] = (__int64)v31;
      v73.m256i_i64[0] = *((_QWORD *)&v30 + 1);
      --v28;
      v33 = v31;
      v73.m256i_i64[3] = v74;
      v34 = (const void *)v74;
      v74 = (__int64)v16;
      if ( v32 <= 0 )
      {
        v36 = GetFixupScan((__int64)v79, v102);
        v35 = &v16[Size];
        v87(v88, v36, (char *)v16, (char *)&v16[Size], 1);
      }
      else
      {
        memmove(v16, v34, Size);
        v35 = &v16[Size];
      }
      if ( (v79[0] & 0x200) != 0 )
      {
        memmove(v31, v34, Size);
      }
      else
      {
        v37 = (_BYTE *)v34 - v31;
        do
        {
          v38 = (6 * v33[v37] - *v33 - *v16) >> 2;
          if ( (v38 & 0xFF00) != 0 )
            LOBYTE(v38) = ~HIBYTE(v38);
          *v33 = v38;
          ++v16;
          ++v33;
        }
        while ( v16 < v35 );
      }
      v16 = (unsigned __int8 *)v30;
    }
    while ( v29 );
    v25 = v89;
    v18 = v73.m256i_i64[1];
    v15 = v76;
  }
  v39 = *(__int64 **)(v25 + 40);
  v40 = *(_DWORD *)(v25 + 16);
  while ( v40 )
  {
    v41 = *v39;
    v75 = v40 - 1;
    v71 = *v39;
    v78 = v39 + 1;
    if ( (*v39 & 0x8000u) != 0LL )
    {
      v42 = v73.m256i_i64[0];
      v43 = &v16[Size];
      v44 = (unsigned __int8 *)_mm_srli_si128(*(__m128i *)&v73.m256i_u64[2], 8).m128i_u64[0];
      v19 = v44;
      *(_OWORD *)v73.m256i_i8 = *(_OWORD *)&v73.m256i_u64[1];
      v45 = v44;
      v73.m256i_i64[2] = (__int64)v44;
      v73.m256i_i64[3] = v74;
      v74 = (__int64)v16;
      v46 = GetFixupScan((__int64)v79, v102);
      v87(v88, v46, (char *)v16, (char *)&v16[Size], 1);
      if ( (v79[0] & 0x200) != 0 )
      {
        memmove(v44, (const void *)v73.m256i_i64[3], Size);
      }
      else
      {
        do
        {
          v47 = (6 * v45[v73.m256i_i64[3] - (_QWORD)v44] - *v45 - *v16) >> 2;
          if ( (v47 & 0xFF00) != 0 )
            LOBYTE(v47) = ~HIBYTE(v47);
          *v45 = v47;
          ++v16;
          ++v45;
        }
        while ( v16 < v43 );
      }
      v18 = v73.m256i_i64[1];
      v16 = (unsigned __int8 *)v42;
      LOWORD(v41) = v41 & 0x3FFF;
    }
    v48 = v15;
    v49 = v107;
    v50 = -WORD2(v71);
    v51 = v19;
    v52 = -(unsigned __int16)v41;
    v53 = -WORD1(v71);
    v54 = 256 - HIWORD(v71);
    if ( (_WORD)v41 )
    {
      v55 = (int *)(v15 + 2048);
      do
      {
        v52 += (unsigned __int16)v41;
        v53 += WORD1(v71);
        v50 += WORD2(v71);
        *(v55 - 512) = v52;
        v54 += HIWORD(v71);
        *(v55 - 256) = v53;
        *v55 = v50;
        v55[256] = v54;
        ++v55;
      }
      while ( (unsigned __int64)(v55 - 512) < v77 );
      v15 = v76;
      v51 = (unsigned __int8 *)v18;
      do
      {
        v56 = *(_DWORD *)(v76 + 4LL * v16[(_QWORD)v51 - v18])
            + *(_DWORD *)(v76 + 4LL * v51[v73.m256i_i64[0] - v18] + 1024)
            + *(_DWORD *)(v76 + 4LL * v19[(_QWORD)v51 - v18] + 3072);
        v57 = *v51++;
        v58 = (unsigned int)((*(_DWORD *)(v76 + 4 * v57 + 2048) + v56) >> 5);
        *v49 = v58;
        v49 = (_WORD *)((char *)v49 + v109);
      }
      while ( v49 != v108 );
    }
    else if ( WORD1(v71) )
    {
      v59 = (int *)(v15 + 2048);
      do
      {
        v53 += WORD1(v71);
        v50 += WORD2(v71);
        v54 += HIWORD(v71);
        *(v59 - 256) = v53;
        *v59 = v50;
        v59[256] = v54;
        ++v59;
      }
      while ( (unsigned __int64)(v59 - 512) < v15 + 1024 );
      v51 = (unsigned __int8 *)v73.m256i_i64[0];
      do
      {
        v60 = v51[v18 - v73.m256i_i64[0]];
        v61 = *(_DWORD *)(v15 + 4LL * v19[(_QWORD)v51 - v73.m256i_i64[0]] + 3072);
        v62 = *v51++;
        v58 = (unsigned int)((*(_DWORD *)(v15 + 4 * v62 + 1024) + *(_DWORD *)(v15 + 4 * v60 + 2048) + v61) >> 5);
        *v49 = v58;
        v49 = (_WORD *)((char *)v49 + v109);
      }
      while ( v49 != v108 );
    }
    else if ( WORD2(v71) )
    {
      v63 = (int *)(v15 + 3072);
      do
      {
        v50 += WORD2(v71);
        v54 += HIWORD(v71);
        *(v63 - 256) = v50;
        *v63++ = v54;
      }
      while ( (unsigned __int64)(v63 - 768) < v15 + 1024 );
      do
      {
        v64 = v51[v18 - (_QWORD)v19];
        v65 = *v51++;
        v58 = (unsigned int)((*(_DWORD *)(v15 + 4 * v65 + 3072) + *(_DWORD *)(v15 + 4 * v64 + 2048)) >> 5);
        *v49 = v58;
        v49 = (_WORD *)((char *)v49 + v109);
      }
      while ( v49 != v108 );
    }
    else
    {
      v58 = v15 + 1024;
      do
      {
        v54 += HIWORD(v71);
        *(_DWORD *)(v48 + 3072) = v54;
        v48 += 4LL;
      }
      while ( v48 < v58 );
      do
      {
        v66 = *v51++;
        *v49 = *(int *)(v15 + 4 * v66 + 3072) >> 5;
        v49 = (_WORD *)((char *)v49 + v109);
      }
      while ( v49 != v108 );
    }
    v67 = v79[0];
    if ( SLOBYTE(v79[0]) < 0 )
    {
      v84(v79, v58, v49, v51);
      v67 = v79[0];
    }
    if ( (v67 & 0x800) != 0 )
    {
      AlphaBlendBGRF(v79);
      LOBYTE(v67) = v79[0];
    }
    if ( (v67 & 0x10) != 0 )
    {
      MappingBGRF(v103, v104, v91, v98);
      v68 = v101 + v98;
      if ( v68 == v99 )
        v68 = v100;
      v98 = v68;
    }
    v85(v79, v105, v106, v80, v90, v92, v92 + v96, v97, v86);
    v39 = v78;
    v69 = v95 + v92;
    if ( v69 == v93 )
      v69 = v94;
    v80 += v83;
    v40 = v75;
    v92 = v69;
  }
  return v82;
}
