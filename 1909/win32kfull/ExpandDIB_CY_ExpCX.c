/*
 * XREFs of ExpandDIB_CY_ExpCX @ 0x1C02648A0
 * Callers:
 *     <none>
 * Callees:
 *     GetFixupScan @ 0x1C0080D9C (GetFixupScan.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01680F0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0168100 (memmove.c)
 *     AlphaBlendBGRF @ 0x1C0262AC0 (AlphaBlendBGRF.c)
 *     ExpYDIB_ExpCX @ 0x1C0263940 (ExpYDIB_ExpCX.c)
 *     MappingBGRF @ 0x1C0267C94 (MappingBGRF.c)
 *     SharpenInput @ 0x1C0267D50 (SharpenInput.c)
 */

__int64 __fastcall ExpandDIB_CY_ExpCX(__int64 a1)
{
  __int64 v1; // r8
  int *v2; // rdx
  _OWORD *v3; // rax
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int64 v15; // rax
  char v16; // r12
  __int64 v17; // r14
  unsigned __int64 v18; // rbx
  size_t v19; // r13
  __int64 v20; // rax
  __int16 v21; // cx
  char *v22; // rsi
  char *v23; // rdi
  unsigned int v24; // edi
  int v25; // eax
  int v26; // edi
  int v27; // r15d
  char *v28; // r14
  char *v29; // rsi
  char v30; // bl
  int v31; // eax
  __int64 *v32; // rcx
  int v33; // eax
  unsigned __int16 v34; // di
  char *v35; // rdx
  int v36; // r14d
  int v37; // esi
  _BYTE *v38; // r8
  _BYTE *v39; // r8
  __int64 v40; // rdx
  int v41; // ecx
  int v42; // esi
  int v43; // r11d
  unsigned __int64 v44; // r10
  unsigned __int8 *v45; // r9
  unsigned __int8 *v46; // r13
  _DWORD *v47; // r10
  unsigned __int8 *v48; // r10
  unsigned __int8 *v49; // r11
  __int64 v50; // rcx
  __int64 v51; // rax
  int v52; // edx
  __int64 v53; // rax
  __int64 v54; // rax
  _DWORD *v55; // r10
  unsigned __int8 *v56; // r10
  __int64 v57; // rcx
  __int64 v58; // rax
  __int64 v59; // rax
  int *v60; // r10
  unsigned __int8 *v61; // r10
  __int64 v62; // rcx
  __int64 v63; // rcx
  __int64 v64; // rax
  __int16 v65; // ax
  __int64 v66; // rax
  __int64 v67; // rcx
  __int64 v69; // [rsp+28h] [rbp-E0h]
  __int64 v70; // [rsp+60h] [rbp-A8h]
  __int64 v71; // [rsp+60h] [rbp-A8h]
  char *v72; // [rsp+68h] [rbp-A0h]
  char *v73; // [rsp+68h] [rbp-A0h]
  int v74; // [rsp+70h] [rbp-98h]
  int v75; // [rsp+74h] [rbp-94h]
  char *v76; // [rsp+78h] [rbp-90h]
  char *Src; // [rsp+80h] [rbp-88h]
  __int64 v78; // [rsp+88h] [rbp-80h]
  int v79; // [rsp+94h] [rbp-74h]
  __int64 v80; // [rsp+98h] [rbp-70h]
  unsigned __int64 *v81; // [rsp+A0h] [rbp-68h]
  unsigned __int64 v82; // [rsp+A8h] [rbp-60h]
  unsigned __int64 v83; // [rsp+B0h] [rbp-58h]
  __int64 *v84; // [rsp+B8h] [rbp-50h]
  int v85[14]; // [rsp+C8h] [rbp-40h] BYREF
  int v86; // [rsp+100h] [rbp-8h]
  __int64 v87; // [rsp+150h] [rbp+48h]
  int v88; // [rsp+158h] [rbp+50h]
  unsigned int v89; // [rsp+15Ch] [rbp+54h]
  int v90; // [rsp+164h] [rbp+5Ch]
  void (__fastcall *v91)(int *, __int64, _BYTE *, unsigned __int8 *); // [rsp+188h] [rbp+80h]
  void (__fastcall *v92)(int *, __int64, __int64, __int64, __int64, __int64, __int64, int, __int64); // [rsp+1D8h] [rbp+D0h]
  __int64 v93; // [rsp+1E0h] [rbp+D8h]
  __int64 v94; // [rsp+1F8h] [rbp+F0h]
  __int64 v95; // [rsp+200h] [rbp+F8h]
  __int64 v96; // [rsp+248h] [rbp+140h]
  __int64 v97; // [rsp+250h] [rbp+148h]
  __int64 v98; // [rsp+260h] [rbp+158h]
  __int64 v99; // [rsp+268h] [rbp+160h]
  __int64 v100; // [rsp+270h] [rbp+168h]
  int v101; // [rsp+278h] [rbp+170h]
  int v102; // [rsp+27Ch] [rbp+174h]
  int v103; // [rsp+280h] [rbp+178h]
  __int64 v104; // [rsp+288h] [rbp+180h]
  __int64 v105; // [rsp+290h] [rbp+188h]
  __int64 v106; // [rsp+298h] [rbp+190h]
  int v107; // [rsp+2A0h] [rbp+198h]
  __int64 v108; // [rsp+2E0h] [rbp+1D8h]
  __int64 v109; // [rsp+2E8h] [rbp+1E0h]
  __int64 v110; // [rsp+2F0h] [rbp+1E8h]
  __int64 v111; // [rsp+2F8h] [rbp+1F0h]
  __int64 v112; // [rsp+300h] [rbp+1F8h]
  _BYTE *v113; // [rsp+308h] [rbp+200h]
  _BYTE *v114; // [rsp+310h] [rbp+208h]
  int v115; // [rsp+318h] [rbp+210h]
  _QWORD v116[3]; // [rsp+328h] [rbp+220h]
  __int64 v117; // [rsp+340h] [rbp+238h]

  v1 = 4LL;
  v2 = v85;
  v3 = (_OWORD *)a1;
  do
  {
    v4 = v3[1];
    *(_OWORD *)v2 = *v3;
    v5 = v3[2];
    *((_OWORD *)v2 + 1) = v4;
    v6 = v3[3];
    *((_OWORD *)v2 + 2) = v5;
    v7 = v3[4];
    *((_OWORD *)v2 + 3) = v6;
    v8 = v3[5];
    *((_OWORD *)v2 + 4) = v7;
    v9 = v3[6];
    *((_OWORD *)v2 + 5) = v8;
    v10 = v3[7];
    v3 += 8;
    *((_OWORD *)v2 + 6) = v9;
    v2 += 32;
    *((_OWORD *)v2 - 1) = v10;
    --v1;
  }
  while ( v1 );
  v11 = v3[1];
  *(_OWORD *)v2 = *v3;
  v12 = v3[2];
  *((_OWORD *)v2 + 1) = v11;
  v13 = v3[3];
  *((_OWORD *)v2 + 2) = v12;
  v14 = v3[4];
  v15 = *((_QWORD *)v3 + 10);
  *((_OWORD *)v2 + 3) = v13;
  *((_OWORD *)v2 + 4) = v14;
  *((_QWORD *)v2 + 10) = v15;
  if ( *(_QWORD *)(a1 + 536) )
  {
    v16 = -1;
    v17 = v95;
    v70 = v95;
    v18 = *(_QWORD *)(v95 + 32);
    v81 = *(unsigned __int64 **)(v94 + 40);
    v82 = v18;
    v83 = v18 + 1024;
    v116[0] = v18 + 4096;
    v19 = 3 * v86;
    v74 = 3 * v86;
    v80 = 3 * v88;
    v20 = v80 + v18 + 4096;
    v116[1] = v20;
    v116[2] = v80 + v20;
    v21 = *(_WORD *)(v94 + 12);
    v117 = v80 + v80 + v20;
    v22 = (char *)(v80 + 9 + v117 + v19 + 18);
    v76 = (char *)(v80 + 9 + v117);
    v23 = &v22[v19 + 18];
    v72 = v22;
    LODWORD(v78) = v108 + 9;
    Src = v23;
    v75 = 3 * ((*(_WORD *)(v94 + 8) & 1) + (v21 & 0xF));
    GetFixupScan((__int64)v85, v22);
    if ( (*(_BYTE *)(v17 + 8) & 1) != 0 )
      GetFixupScan((__int64)v85, v23);
    else
      memmove(v23, v22, v19);
    v24 = *(unsigned __int16 *)(v17 + 12);
    v25 = v24 & 0xF;
    v26 = v24 >> 4;
    v27 = v25 + v26;
    if ( v25 + v26 )
    {
      v28 = v22;
      v29 = v76;
      v30 = -1;
      do
      {
        ++v30;
        v76 = v28;
        v28 = Src;
        Src = v29;
        --v27;
        v31 = v26--;
        v73 = (char *)v116[v30 & 3];
        if ( v31 <= 0 )
          GetFixupScan((__int64)v85, v29);
        else
          memmove(v29, v28, v19);
        v69 = (__int64)v29;
        v29 = v76;
        v78 = SharpenInput(v85[0], v78, (_DWORD)v76, (_DWORD)v28, v69, v74);
        ExpYDIB_ExpCX(v81, (unsigned __int8 *)(v75 - 3LL + v78), v73, &v73[v80]);
      }
      while ( v27 );
      v72 = v28;
      v22 = v28;
      v17 = v70;
      v16 = v30;
      v18 = v82;
    }
    v32 = *(__int64 **)(v17 + 40);
    v33 = *(_DWORD *)(v17 + 16);
    while ( v33 )
    {
      v79 = v33 - 1;
      v34 = *v32;
      v71 = *v32;
      v84 = v32 + 1;
      if ( (v34 & 0x8000u) != 0 )
      {
        v35 = v76;
        v76 = v22;
        v36 = (int)v22;
        v37 = (int)Src;
        v72 = Src;
        Src = (char *)GetFixupScan((__int64)v85, v35);
        ++v16;
        v78 = SharpenInput(v85[0], v78, v36, v37, (__int64)Src, v74);
        v38 = (_BYTE *)v116[v16 & 3];
        ExpYDIB_ExpCX(v81, (unsigned __int8 *)(v75 - 3LL + v78), v38, &v38[v80]);
        v34 &= 0x3FFFu;
      }
      v39 = v113;
      v40 = (unsigned int)-WORD2(v71);
      v41 = 4096 - HIWORD(v71);
      v42 = -v34;
      v43 = -WORD1(v71);
      v44 = v18;
      v45 = (unsigned __int8 *)v116[v16 & 3];
      v46 = (unsigned __int8 *)v116[(v16 - 1) & 3];
      if ( v34 )
      {
        v47 = (_DWORD *)(v18 + 2048);
        do
        {
          v42 += v34;
          v43 += WORD1(v71);
          LODWORD(v40) = WORD2(v71) + (_DWORD)v40;
          *(v47 - 512) = v42;
          v41 += HIWORD(v71);
          *(v47 - 256) = v43;
          *v47 = v40;
          v47[256] = v41;
          ++v47;
        }
        while ( (unsigned __int64)(v47 - 512) < v83 );
        v18 = v82;
        v48 = (unsigned __int8 *)(v116[(v16 + 1) & 3] + 1LL);
        v49 = (unsigned __int8 *)(v116[(v16 - 2) & 3] + 1LL);
        ++v45;
        do
        {
          v39[2] = (*(_DWORD *)(v82 + 4LL * v48[1])
                  + *(_DWORD *)(v82 + 4LL * v46[2] + 2048)
                  + *(_DWORD *)(v82 + 4LL * v49[1] + 1024)
                  + *(_DWORD *)(v82 + 4LL * v45[1] + 3072)) >> 13;
          v50 = *v49;
          v49 += 3;
          v51 = *v45;
          v45 += 3;
          v52 = *(_DWORD *)(v82 + 4 * v51 + 3072)
              + *(_DWORD *)(v82 + 4 * v50 + 1024)
              + *(_DWORD *)(v82 + 4LL * v46[1] + 2048);
          v53 = *v48;
          v48 += 3;
          v39[1] = (*(_DWORD *)(v82 + 4 * v53) + v52) >> 13;
          v54 = *v46;
          v46 += 3;
          v40 = (unsigned int)((*(_DWORD *)(v82 + 4 * v54 + 2048)
                              + *(_DWORD *)(v82 + 4LL * *(v48 - 4))
                              + *(_DWORD *)(v82 + 4LL * *(v49 - 4) + 1024)
                              + *(_DWORD *)(v82 + 4LL * *(v45 - 4) + 3072)) >> 13);
          *v39 = v40;
          v39 += v115;
        }
        while ( v39 != v114 );
      }
      else if ( WORD1(v71) )
      {
        v55 = (_DWORD *)(v18 + 2048);
        do
        {
          v43 += WORD1(v71);
          LODWORD(v40) = WORD2(v71) + (_DWORD)v40;
          v41 += HIWORD(v71);
          *(v55 - 256) = v43;
          *v55 = v40;
          v55[256] = v41;
          ++v55;
        }
        while ( (unsigned __int64)(v55 - 512) < v18 + 1024 );
        v56 = (unsigned __int8 *)(v116[(v16 - 2) & 3] + 1LL);
        ++v45;
        do
        {
          v39[2] = (*(_DWORD *)(v18 + 4LL * v46[2] + 2048)
                  + *(_DWORD *)(v18 + 4LL * v56[1] + 1024)
                  + *(_DWORD *)(v18 + 4LL * v45[1] + 3072)) >> 13;
          v57 = *v45;
          v45 += 3;
          v58 = *v56;
          v56 += 3;
          v39[1] = (*(_DWORD *)(v18 + 4 * v58 + 1024)
                  + *(_DWORD *)(v18 + 4 * v57 + 3072)
                  + *(_DWORD *)(v18 + 4LL * v46[1] + 2048)) >> 13;
          v59 = *v46;
          v46 += 3;
          v40 = (unsigned int)((*(_DWORD *)(v18 + 4 * v59 + 2048)
                              + *(_DWORD *)(v18 + 4LL * *(v56 - 4) + 1024)
                              + *(_DWORD *)(v18 + 4LL * *(v45 - 4) + 3072)) >> 13);
          *v39 = v40;
          v39 += v115;
        }
        while ( v39 != v114 );
      }
      else if ( WORD2(v71) )
      {
        v60 = (int *)(v18 + 3072);
        do
        {
          LODWORD(v40) = WORD2(v71) + (_DWORD)v40;
          v41 += HIWORD(v71);
          *(v60 - 256) = v40;
          *v60++ = v41;
        }
        while ( (unsigned __int64)(v60 - 768) < v18 + 1024 );
        v61 = v46 + 1;
        do
        {
          v39[2] = (*(_DWORD *)(v18 + 4LL * v61[1] + 2048) + *(_DWORD *)(v18 + 4LL * v45[2] + 3072)) >> 13;
          v62 = *v61;
          v61 += 3;
          v39[1] = (*(_DWORD *)(v18 + 4 * v62 + 2048) + *(_DWORD *)(v18 + 4LL * v45[1] + 3072)) >> 13;
          v63 = *v45;
          v45 += 3;
          v40 = (unsigned int)((*(_DWORD *)(v18 + 4 * v63 + 3072) + *(_DWORD *)(v18 + 4LL * *(v61 - 4) + 2048)) >> 13);
          *v39 = v40;
          v39 += v115;
        }
        while ( v39 != v114 );
      }
      else
      {
        do
        {
          v41 += HIWORD(v71);
          *(_DWORD *)(v44 + 3072) = v41;
          v44 += 4LL;
        }
        while ( v44 < v18 + 1024 );
        do
        {
          v39[2] = *(int *)(v18 + 4LL * v45[2] + 3072) >> 13;
          v39[1] = *(int *)(v18 + 4LL * v45[1] + 3072) >> 13;
          v64 = *v45;
          v45 += 3;
          *v39 = *(int *)(v18 + 4 * v64 + 3072) >> 13;
          v39 += v115;
        }
        while ( v39 != v114 );
      }
      v65 = v85[0];
      if ( SLOBYTE(v85[0]) < 0 )
      {
        v91(v85, v40, v39, v45);
        v65 = v85[0];
      }
      if ( (v65 & 0x800) != 0 )
      {
        AlphaBlendBGRF(v85);
        LOBYTE(v65) = v85[0];
      }
      if ( (v65 & 0x10) != 0 )
      {
        MappingBGRF(v109, v110, v97, v104);
        v66 = v107 + v104;
        if ( v66 == v105 )
          v66 = v106;
        v104 = v66;
      }
      v92(v85, v111, v112, v87, v96, v98, v98 + v102, v103, v93);
      v22 = v72;
      v67 = v101 + v98;
      if ( v67 == v99 )
        v67 = v100;
      v87 += v90;
      v33 = v79;
      v98 = v67;
      v32 = v84;
    }
  }
  return v89;
}
