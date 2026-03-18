/*
 * XREFs of ShrinkDIB_CY @ 0x1C02681F0
 * Callers:
 *     <none>
 * Callees:
 *     GetFixupScan @ 0x1C0080D9C (GetFixupScan.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01680F0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0168100 (memmove.c)
 *     AlphaBlendBGRF @ 0x1C0262AC0 (AlphaBlendBGRF.c)
 *     MappingBGRF @ 0x1C0267C94 (MappingBGRF.c)
 */

__int64 __fastcall ShrinkDIB_CY(__int64 a1)
{
  __int64 v1; // rdx
  _OWORD *v3; // rax
  int *v4; // rcx
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int64 v16; // rax
  __int64 v17; // rdx
  int *v18; // rsi
  _DWORD *v19; // r14
  size_t v20; // r12
  int v21; // ecx
  char *v22; // rbx
  char *v23; // rdi
  char *v24; // r15
  __int64 v25; // rax
  int v26; // r8d
  int *v27; // rcx
  int v28; // eax
  char *FixupScan; // rax
  char *v30; // rdx
  unsigned __int8 *v31; // r8
  __int64 v32; // rax
  unsigned int v33; // r15d
  int v34; // r13d
  int v35; // eax
  unsigned __int8 *v36; // r11
  __int16 v37; // ax
  int v38; // r9d
  int v39; // r8d
  int *v40; // rdx
  int v41; // ecx
  int v42; // eax
  int v43; // eax
  unsigned __int8 *v44; // r9
  _DWORD *v45; // rdx
  signed __int64 v46; // r10
  __int64 v47; // rax
  _DWORD *v48; // rdx
  _BYTE *v49; // r10
  __int64 v50; // r9
  signed __int64 v51; // rdi
  __int16 v52; // ax
  __int64 v53; // rbx
  int v54; // r8d
  int v55; // ecx
  int v56; // ecx
  __int16 v57; // ax
  unsigned __int8 *v58; // rax
  __int64 v59; // rcx
  __int64 i; // rcx
  _DWORD *v61; // r8
  unsigned __int8 *v62; // r9
  __int64 v63; // rdx
  __int64 v64; // rax
  unsigned __int64 v65; // r10
  _DWORD *v66; // r8
  char *v67; // rbx
  _BYTE *v68; // r9
  int v69; // ecx
  int v70; // ecx
  int v71; // ecx
  __int16 v72; // ax
  unsigned __int8 *v73; // rax
  int v75; // [rsp+5Ch] [rbp-ACh]
  int v76; // [rsp+60h] [rbp-A8h]
  char *v77; // [rsp+68h] [rbp-A0h]
  __int16 *v78; // [rsp+70h] [rbp-98h]
  unsigned __int64 v79; // [rsp+78h] [rbp-90h]
  __int64 v80; // [rsp+80h] [rbp-88h]
  _DWORD *v81; // [rsp+88h] [rbp-80h]
  char *v82; // [rsp+90h] [rbp-78h]
  char *v83; // [rsp+98h] [rbp-70h]
  size_t v84; // [rsp+A0h] [rbp-68h]
  int v85[34]; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v86; // [rsp+130h] [rbp+28h]
  int v87; // [rsp+144h] [rbp+3Ch]
  void (__fastcall *v88)(int *); // [rsp+168h] [rbp+60h]
  void (__fastcall *v89)(int *, __int64, __int64, __int64, __int64, __int64, __int64, int, __int64); // [rsp+1B8h] [rbp+B0h]
  __int64 v90; // [rsp+1C0h] [rbp+B8h]
  void (__fastcall *v91)(__int64, char *, __int64, __int64, int); // [rsp+1C8h] [rbp+C0h]
  __int64 v92; // [rsp+1D8h] [rbp+D0h]
  __int64 v93; // [rsp+1E0h] [rbp+D8h]
  __int64 v94; // [rsp+1E8h] [rbp+E0h]
  __int64 v95; // [rsp+228h] [rbp+120h]
  __int64 v96; // [rsp+230h] [rbp+128h]
  __int64 v97; // [rsp+240h] [rbp+138h]
  __int64 v98; // [rsp+248h] [rbp+140h]
  __int64 v99; // [rsp+250h] [rbp+148h]
  int v100; // [rsp+258h] [rbp+150h]
  int v101; // [rsp+25Ch] [rbp+154h]
  int v102; // [rsp+260h] [rbp+158h]
  unsigned __int8 *v103; // [rsp+268h] [rbp+160h]
  unsigned __int8 *v104; // [rsp+270h] [rbp+168h]
  unsigned __int8 *v105; // [rsp+278h] [rbp+170h]
  int v106; // [rsp+280h] [rbp+178h]
  void *v107; // [rsp+2C0h] [rbp+1B8h]
  unsigned __int8 *v108; // [rsp+2C8h] [rbp+1C0h]
  unsigned __int64 v109; // [rsp+2D0h] [rbp+1C8h]
  __int64 v110; // [rsp+2D8h] [rbp+1D0h]
  __int64 v111; // [rsp+2E0h] [rbp+1D8h]
  __int64 v112; // [rsp+2E8h] [rbp+1E0h]
  __int64 v113; // [rsp+2F0h] [rbp+1E8h]
  int v114; // [rsp+2F8h] [rbp+1F0h]

  v1 = 4LL;
  v3 = (_OWORD *)a1;
  v4 = v85;
  do
  {
    v5 = v3[1];
    *(_OWORD *)v4 = *v3;
    v6 = v3[2];
    *((_OWORD *)v4 + 1) = v5;
    v7 = v3[3];
    *((_OWORD *)v4 + 2) = v6;
    v8 = v3[4];
    *((_OWORD *)v4 + 3) = v7;
    v9 = v3[5];
    *((_OWORD *)v4 + 4) = v8;
    v10 = v3[6];
    *((_OWORD *)v4 + 5) = v9;
    v11 = v3[7];
    v3 += 8;
    *((_OWORD *)v4 + 6) = v10;
    v4 += 32;
    *((_OWORD *)v4 - 1) = v11;
    --v1;
  }
  while ( v1 );
  v12 = v3[1];
  *(_OWORD *)v4 = *v3;
  v13 = v3[2];
  *((_OWORD *)v4 + 1) = v12;
  v14 = v3[3];
  *((_OWORD *)v4 + 2) = v13;
  v15 = v3[4];
  v16 = *((_QWORD *)v3 + 10);
  *((_OWORD *)v4 + 3) = v14;
  *((_OWORD *)v4 + 4) = v15;
  *((_QWORD *)v4 + 10) = v16;
  v17 = v93;
  v18 = *(int **)(v93 + 32);
  v80 = *(_QWORD *)(v93 + 24);
  v19 = v18 + 512;
  v81 = v18 + 512;
  v20 = 12 * v85[14];
  v21 = 0;
  v84 = v20;
  v22 = (char *)v18 + v20 + 2048;
  v23 = &v22[v20];
  v82 = v22;
  v24 = &v22[v20 + v20];
  v83 = &v22[v20];
  v77 = v24 + 9;
  v25 = *(_QWORD *)(a1 + 312);
  if ( (*(_DWORD *)(v25 + 16) || *(_WORD *)(v25 + 14)) && (!*(_QWORD *)(v25 + 32) || !*(_QWORD *)(a1 + 536)) )
    return *(unsigned int *)(a1 + 148);
  v26 = *(unsigned __int16 *)(v93 + 14);
  if ( *(_WORD *)(v93 + 14) )
  {
    v27 = v18;
    v28 = -v26;
    do
    {
      v28 += v26;
      *v27++ = v28;
    }
    while ( v27 < v18 + 256 );
    FixupScan = (char *)GetFixupScan((__int64)v85, v107);
    v30 = &v22[v20];
    v31 = (unsigned __int8 *)(FixupScan + 1);
    do
    {
      *(_DWORD *)v30 = v18[v31[1]];
      v32 = *v31;
      v31 += 3;
      *((_DWORD *)v30 + 1) = v18[v32];
      *((_DWORD *)v30 + 2) = v18[*(v31 - 4)];
      v30 += 12;
    }
    while ( v30 < v24 );
    v17 = v93;
    v21 = 0;
    if ( !*(_WORD *)(v93 + 10) )
      v85[0] |= 0x20u;
  }
  v33 = 0;
  v34 = *(unsigned __int16 *)(v17 + 12);
  v78 = *(__int16 **)(v17 + 40);
  v35 = *(_DWORD *)(v17 + 16);
  if ( v35 )
  {
    LOBYTE(v21) = v34 == 1;
    v75 = v21;
    do
    {
      v76 = v35 - 1;
      v36 = (unsigned __int8 *)GetFixupScan((__int64)v85, v107);
      v79 = (unsigned __int64)&v23[v20];
      v37 = *v78++;
      if ( (v37 & 0x4000) != 0 )
      {
        v38 = v37 & 0x3FFF;
        v39 = -v38;
        v40 = v18;
        v41 = *(_DWORD *)(v80 + 4) + ((v37 >> 15) & 1) - v38;
        v42 = v38 - (*(_DWORD *)(v80 + 4) + ((v37 >> 15) & 1));
        do
        {
          v39 += v38;
          v42 += v41;
          *v40 = v39;
          v40[256] = v42;
          ++v40;
        }
        while ( v40 < v18 + 256 );
        v43 = v34--;
        if ( v43 <= 0 )
        {
          v48 = v22 + 4;
          v49 = v77 + 2;
          v50 = (char *)v19 - v22;
          v51 = v23 - v22;
          do
          {
            v52 = *(_WORD *)v36;
            v53 = v36[2];
            v36 += 3;
            *(_DWORD *)((char *)v48 + v51 - 4) += v18[v53];
            *(_DWORD *)((char *)v48 + v51) += v18[HIBYTE(v52)];
            *(_DWORD *)((char *)v48 + v51 + 4) += v18[(unsigned __int8)v52];
            v54 = (6 * v48[1] - *(_DWORD *)((char *)v48 + v50 + 4) - *(_DWORD *)((char *)v48 + v51 + 4)) >> 15;
            if ( (v54 & 0xFF00) != 0 )
              LOBYTE(v54) = ~HIBYTE(v54);
            *(v49 - 2) = v54;
            v55 = (6 * *v48 - *(_DWORD *)((char *)v48 + v50) - *(_DWORD *)((char *)v48 + v51)) >> 15;
            if ( (v55 & 0xFF00) != 0 )
              LOBYTE(v55) = ~HIBYTE(v55);
            *(v49 - 1) = v55;
            v56 = (6 * *(v48 - 1) - *(_DWORD *)((char *)v48 + v50 - 4) - *(_DWORD *)((char *)v48 + v51 - 4)) >> 15;
            if ( (v56 & 0xFF00) != 0 )
              LOBYTE(v56) = ~HIBYTE(v56);
            *v49 = v56;
            v49 += 3;
            *(_DWORD *)((char *)v48 + v50 - 4) = v18[(unsigned __int8)v53 + 256];
            *(_DWORD *)((char *)v48 + v50) = v18[HIBYTE(v52) + 256];
            *(_DWORD *)((char *)v48 + v50 + 4) = v18[(unsigned __int8)v52 + 256];
            v48 += 3;
          }
          while ( (unsigned __int64)v48 + v51 - 4 < v79 );
          v91(v92, v77, v112, v113, v114);
          v57 = v85[0];
          v20 = v84;
          if ( SLOBYTE(v85[0]) < 0 )
          {
            v88(v85);
            v57 = v85[0];
          }
          if ( (v57 & 0x800) != 0 )
          {
            AlphaBlendBGRF(v85);
            LOBYTE(v57) = v85[0];
          }
          if ( (v57 & 0x10) != 0 )
          {
            MappingBGRF(v108, v109, v96, v103);
            v58 = &v103[v106];
            if ( v58 == v104 )
              v58 = v105;
            v103 = v58;
          }
          v89(v85, v110, v111, v86, v95, v97, v97 + v101, v102, v90);
          v59 = v100 + v97;
          if ( v59 == v98 )
            v59 = v99;
          v86 += v87;
          ++v33;
          v97 = v59;
        }
        else
        {
          v44 = v36 + 1;
          v45 = v23 + 4;
          v46 = (char *)v19 - v23;
          do
          {
            *(v45 - 1) += v18[v44[1]];
            *v45 += v18[*v44];
            v45[1] += v18[*(v44 - 1)];
            *(_DWORD *)((char *)v45 + v46 - 4) = v18[v44[1] + 256];
            v47 = *v44;
            v44 += 3;
            *(_DWORD *)((char *)v45 + v46) = v18[v47 + 256];
            v45 += 3;
            *(_DWORD *)((char *)v45 + v46 - 8) = v18[*(v44 - 4) + 256];
          }
          while ( (unsigned __int64)(v45 - 1) < v79 );
          if ( v75 )
          {
            memmove(v22, v23, v20);
            v75 = 0;
          }
        }
        v23 = (char *)v19;
        for ( i = 0LL; i < 2; ++i )
          (&v81)[i] = (&v82)[i];
        v22 = v82;
        v83 = (char *)v19;
        v19 = v81;
      }
      else
      {
        v61 = v23 + 8;
        v62 = v36 + 1;
        v63 = v80 + (((unsigned __int64)(unsigned __int16)v37 >> 5) & 0x400);
        do
        {
          *(v61 - 2) += *(_DWORD *)(v63 + 4LL * v62[1]);
          v64 = *v62;
          v62 += 3;
          *(v61 - 1) += *(_DWORD *)(v63 + 4 * v64);
          *v61 += *(_DWORD *)(v63 + 4LL * *(v62 - 4));
          v61 += 3;
        }
        while ( v61 - 2 < (_DWORD *)&v23[v20] );
      }
      v35 = v76;
    }
    while ( v76 );
  }
  if ( v86 != v94 )
  {
    v65 = (unsigned __int64)&v22[v20];
    v66 = v19 + 1;
    v67 = (char *)(v22 - (char *)v19);
    v68 = v77 + 2;
    do
    {
      v69 = (5 * *(_DWORD *)((char *)v66 + (_QWORD)v67 + 4) - v66[1]) >> 15;
      if ( (v69 & 0xFF00) != 0 )
        LOBYTE(v69) = ~HIBYTE(v69);
      *(v68 - 2) = v69;
      v70 = (5 * *(_DWORD *)((char *)v66 + (_QWORD)v67) - *v66) >> 15;
      if ( (v70 & 0xFF00) != 0 )
        LOBYTE(v70) = ~HIBYTE(v70);
      *(v68 - 1) = v70;
      v71 = (5 * *(_DWORD *)((char *)v66 + (_QWORD)v67 - 4) - *(v66 - 1)) >> 15;
      if ( (v71 & 0xFF00) != 0 )
        LOBYTE(v71) = ~HIBYTE(v71);
      v66 += 3;
      *v68 = v71;
      v68 += 3;
    }
    while ( (_DWORD *)((char *)v66 + (_QWORD)v67 - 4) < (_DWORD *)v65 );
    v91(v92, v77, v112, v113, v114);
    v72 = v85[0];
    if ( SLOBYTE(v85[0]) < 0 )
    {
      v88(v85);
      v72 = v85[0];
    }
    if ( (v72 & 0x800) != 0 )
    {
      AlphaBlendBGRF(v85);
      LOBYTE(v72) = v85[0];
    }
    if ( (v72 & 0x10) != 0 )
    {
      MappingBGRF(v108, v109, v96, v103);
      v73 = &v103[v106];
      if ( v73 == v104 )
        v73 = v105;
      v103 = v73;
    }
    v89(v85, v110, v111, v86, v95, v97, v97 + v101, v102, v90);
    ++v33;
  }
  return v33;
}
