/*
 * XREFs of ExpandDIB_CY_ExpCX @ 0x1C0236AC0
 * Callers:
 *     <none>
 * Callees:
 *     GetFixupScan @ 0x1C00D5270 (GetFixupScan.c)
 *     SharpenInput @ 0x1C01158D0 (SharpenInput.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C013D380 (memmove.c)
 *     AlphaBlendBGRF @ 0x1C0234D70 (AlphaBlendBGRF.c)
 *     ExpYDIB_ExpCX @ 0x1C0235B38 (ExpYDIB_ExpCX.c)
 *     MappingBGRF @ 0x1C0239330 (MappingBGRF.c)
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
  char v16; // r13
  __int64 v17; // rsi
  unsigned __int64 v18; // rbx
  size_t v19; // r12
  __int64 v20; // rax
  __int16 v21; // cx
  char *v22; // r14
  char *v23; // rdi
  unsigned int v24; // edi
  int v25; // eax
  int v26; // edi
  int v27; // r15d
  char *v28; // rbx
  char *v29; // r14
  int v30; // eax
  unsigned __int64 *v31; // rcx
  int v32; // eax
  unsigned __int64 v33; // rdi
  unsigned __int64 v34; // r15
  unsigned __int16 v35; // cx
  unsigned __int64 v36; // rdx
  unsigned __int64 v37; // r8
  unsigned __int64 v38; // r12
  __int64 v39; // rdx
  unsigned __int64 v40; // rsi
  _BYTE *v41; // r8
  _BYTE *v42; // r9
  unsigned __int64 v43; // r10
  int v44; // r14d
  int v45; // esi
  int v46; // r15d
  int v47; // r11d
  __int64 v48; // rdx
  int v49; // ecx
  unsigned __int64 v50; // r8
  _DWORD *v51; // r10
  unsigned __int8 *v52; // rdi
  unsigned __int8 *v53; // rsi
  unsigned __int8 *v54; // r10
  unsigned __int8 *v55; // r11
  int v56; // eax
  int v57; // r8d
  int v58; // eax
  int v59; // r8d
  __int64 v60; // rax
  _DWORD *v61; // r10
  unsigned __int8 *v62; // rdi
  unsigned __int8 *v63; // r11
  unsigned __int8 *v64; // r10
  int v65; // eax
  int v66; // r8d
  int v67; // eax
  int v68; // eax
  int *v69; // r10
  unsigned __int8 *v70; // r10
  __int64 v71; // rcx
  __int64 v72; // rcx
  int v73; // eax
  __int16 v74; // ax
  __int64 v75; // rax
  __int64 v76; // rcx
  __int64 v78; // [rsp+28h] [rbp-E0h]
  unsigned __int64 v79; // [rsp+58h] [rbp-B0h]
  unsigned __int8 *v80; // [rsp+58h] [rbp-B0h]
  _BYTE *v81; // [rsp+60h] [rbp-A8h]
  unsigned __int64 v82; // [rsp+60h] [rbp-A8h]
  int v83; // [rsp+68h] [rbp-A0h]
  unsigned int v84; // [rsp+6Ch] [rbp-9Ch]
  char *v85; // [rsp+70h] [rbp-98h]
  char *v86; // [rsp+78h] [rbp-90h]
  unsigned __int64 v87; // [rsp+80h] [rbp-88h]
  int v88; // [rsp+80h] [rbp-88h]
  char *Src; // [rsp+88h] [rbp-80h]
  unsigned __int64 v90; // [rsp+90h] [rbp-78h]
  __int64 v91; // [rsp+A0h] [rbp-68h]
  int v92; // [rsp+A0h] [rbp-68h]
  __int64 v93; // [rsp+A8h] [rbp-60h]
  unsigned __int64 *v94; // [rsp+B0h] [rbp-58h]
  unsigned __int64 v95; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v96; // [rsp+C0h] [rbp-48h]
  unsigned __int64 *v97; // [rsp+C8h] [rbp-40h]
  int v98[14]; // [rsp+D8h] [rbp-30h] BYREF
  int v99; // [rsp+110h] [rbp+8h]
  __int64 v100; // [rsp+160h] [rbp+58h]
  int v101; // [rsp+168h] [rbp+60h]
  unsigned int v102; // [rsp+16Ch] [rbp+64h]
  int v103; // [rsp+174h] [rbp+6Ch]
  void (__fastcall *v104)(int *, __int64, unsigned __int64); // [rsp+198h] [rbp+90h]
  void (__fastcall *v105)(int *, __int64, __int64, __int64, __int64, __int64, __int64, int, __int64); // [rsp+1E8h] [rbp+E0h]
  __int64 v106; // [rsp+1F0h] [rbp+E8h]
  __int64 v107; // [rsp+208h] [rbp+100h]
  __int64 v108; // [rsp+210h] [rbp+108h]
  __int64 v109; // [rsp+258h] [rbp+150h]
  __int64 v110; // [rsp+260h] [rbp+158h]
  __int64 v111; // [rsp+270h] [rbp+168h]
  __int64 v112; // [rsp+278h] [rbp+170h]
  __int64 v113; // [rsp+280h] [rbp+178h]
  int v114; // [rsp+288h] [rbp+180h]
  int v115; // [rsp+28Ch] [rbp+184h]
  int v116; // [rsp+290h] [rbp+188h]
  __int64 v117; // [rsp+298h] [rbp+190h]
  __int64 v118; // [rsp+2A0h] [rbp+198h]
  __int64 v119; // [rsp+2A8h] [rbp+1A0h]
  int v120; // [rsp+2B0h] [rbp+1A8h]
  __int64 v121; // [rsp+2F0h] [rbp+1E8h]
  __int64 v122; // [rsp+2F8h] [rbp+1F0h]
  __int64 v123; // [rsp+300h] [rbp+1F8h]
  __int64 v124; // [rsp+308h] [rbp+200h]
  __int64 v125; // [rsp+310h] [rbp+208h]
  _BYTE *v126; // [rsp+318h] [rbp+210h]
  _BYTE *v127; // [rsp+320h] [rbp+218h]
  int v128; // [rsp+328h] [rbp+220h]
  _QWORD v129[3]; // [rsp+338h] [rbp+230h]
  __int64 v130; // [rsp+350h] [rbp+248h]

  v1 = 4LL;
  v2 = v98;
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
    v17 = v108;
    v91 = v108;
    v18 = *(_QWORD *)(v108 + 32);
    v94 = *(unsigned __int64 **)(v107 + 40);
    v79 = v18;
    v96 = v18 + 1024;
    v129[0] = v18 + 4096;
    v19 = 3 * v99;
    v83 = 3 * v99;
    v93 = 3 * v101;
    v20 = v93 + v18 + 4096;
    v129[1] = v20;
    v129[2] = v93 + v20;
    v21 = *(_WORD *)(v107 + 12);
    v130 = v93 + v93 + v20;
    v22 = (char *)(v93 + 9 + v130 + v19 + 18);
    v85 = (char *)(v93 + 9 + v130);
    v23 = &v22[v19 + 18];
    v86 = v22;
    v90 = v121 + 9;
    Src = v23;
    v84 = 3 * ((*(_WORD *)(v107 + 8) & 1) + (v21 & 0xF));
    GetFixupScan((unsigned int *)v98, (__int64)v22);
    if ( (*(_BYTE *)(v17 + 8) & 1) != 0 )
      GetFixupScan((unsigned int *)v98, (__int64)v23);
    else
      memmove(v23, v22, v19);
    v24 = *(unsigned __int16 *)(v17 + 12);
    v25 = v24 & 0xF;
    v26 = v24 >> 4;
    v27 = v25 + v26;
    if ( v25 + v26 )
    {
      v28 = v22;
      v29 = v85;
      do
      {
        ++v16;
        v85 = v28;
        v28 = Src;
        Src = v29;
        --v27;
        v30 = v26--;
        v81 = (_BYTE *)v129[v16 & 3];
        if ( v30 <= 0 )
          GetFixupScan((unsigned int *)v98, (__int64)v29);
        else
          memmove(v29, v28, v19);
        v78 = (__int64)v29;
        v29 = v85;
        v90 = SharpenInput(v98[0], v90, (__int64)v85, (unsigned __int64)v28, v78, v83);
        ExpYDIB_ExpCX(v94, (unsigned __int8 *)(v84 + v90 - 3), v81, &v81[v93]);
      }
      while ( v27 );
      v17 = v91;
      v86 = v28;
      v22 = v28;
      v18 = v79;
    }
    v31 = *(unsigned __int64 **)(v17 + 40);
    v32 = *(_DWORD *)(v17 + 16);
    while ( v32 )
    {
      v33 = *v31;
      v92 = v32 - 1;
      v97 = v31 + 1;
      v95 = *v31 >> 16;
      v34 = HIDWORD(*v31);
      v87 = HIWORD(*v31);
      v35 = v95;
      v36 = HIDWORD(v33);
      v37 = HIWORD(v33);
      v38 = HIDWORD(v33);
      v82 = v33 >> 16;
      if ( (v33 & 0x8000u) != 0LL )
      {
        v39 = (__int64)v85;
        v40 = (unsigned __int64)Src;
        v86 = Src;
        v85 = v22;
        Src = (char *)GetFixupScan((unsigned int *)v98, v39);
        ++v16;
        v90 = SharpenInput(v98[0], v90, (__int64)v22, v40, (__int64)Src, v83);
        v41 = (_BYTE *)v129[v16 & 3];
        ExpYDIB_ExpCX(v94, (unsigned __int8 *)(v84 - 3LL + v90), v41, &v41[v93]);
        v35 = WORD1(v33);
        LOWORD(v36) = WORD2(v33);
        LOWORD(v33) = v33 & 0x3FFF;
        LOWORD(v38) = v34;
        LOWORD(v37) = v87;
        LOWORD(v82) = v95;
      }
      v42 = v126;
      v43 = v18;
      v44 = -(unsigned __int16)v33;
      v88 = v35;
      v45 = (unsigned __int16)v37;
      v46 = (unsigned __int16)v36;
      v47 = -v35;
      v48 = (unsigned int)-(unsigned __int16)v36;
      v49 = 4096 - (unsigned __int16)v37;
      v50 = v129[v16 & 3];
      v80 = (unsigned __int8 *)v129[(v16 - 1) & 3];
      if ( (_WORD)v33 )
      {
        v51 = (_DWORD *)(v18 + 2048);
        do
        {
          v44 += (unsigned __int16)v33;
          v47 += v88;
          LODWORD(v48) = v46 + v48;
          *(v51 - 512) = v44;
          v49 += v45;
          *(v51 - 256) = v47;
          *v51 = v48;
          v51[256] = v49;
          ++v51;
        }
        while ( (unsigned __int64)(v51 - 512) < v96 );
        v52 = v80;
        v53 = (unsigned __int8 *)(v50 + 1);
        v54 = (unsigned __int8 *)(v129[(v16 + 1) & 3] + 1LL);
        v55 = (unsigned __int8 *)(v129[(v16 - 2) & 3] + 1LL);
        do
        {
          v42[2] = (*(_DWORD *)(v18 + 4LL * v54[1])
                  + *(_DWORD *)(v18 + 4LL * ((unsigned int)v52[2] + 512))
                  + *(_DWORD *)(v18 + 4LL * ((unsigned int)v55[1] + 256))
                  + *(_DWORD *)(v18 + 4LL * ((unsigned int)v53[1] + 768))) >> 13;
          v56 = *v55;
          v55 += 3;
          v57 = *(_DWORD *)(v18 + 4LL * (unsigned int)(v56 + 256))
              + *(_DWORD *)(v18 + 4LL * ((unsigned int)v52[1] + 512));
          v58 = *v53;
          v53 += 3;
          v59 = *(_DWORD *)(v18 + 4LL * (unsigned int)(v58 + 768)) + v57;
          v60 = *v54;
          v54 += 3;
          v42[1] = (*(_DWORD *)(v18 + 4 * v60) + v59) >> 13;
          v48 = (unsigned int)*(v53 - 4) + 768;
          LODWORD(v60) = *v52;
          v52 += 3;
          v50 = (unsigned int)((*(_DWORD *)(v18 + 4LL * *(v54 - 4))
                              + *(_DWORD *)(v18 + 4LL * (unsigned int)(v60 + 512))
                              + *(_DWORD *)(v18 + 4LL * ((unsigned int)*(v55 - 4) + 256))
                              + *(_DWORD *)(v18 + 4 * v48)) >> 13);
          *v42 = v50;
          v42 += v128;
        }
        while ( v42 != v127 );
      }
      else if ( (_WORD)v82 )
      {
        v61 = (_DWORD *)(v18 + 2048);
        do
        {
          v47 += v88;
          LODWORD(v48) = v46 + v48;
          v49 += v45;
          *(v61 - 256) = v47;
          *v61 = v48;
          v61[256] = v49;
          ++v61;
        }
        while ( (unsigned __int64)(v61 - 512) < v18 + 1024 );
        v62 = v80;
        v63 = (unsigned __int8 *)(v50 + 1);
        v64 = (unsigned __int8 *)(v129[(v16 - 2) & 3] + 1LL);
        do
        {
          v42[2] = (*(_DWORD *)(v18 + 4LL * ((unsigned int)v62[2] + 512))
                  + *(_DWORD *)(v18 + 4LL * ((unsigned int)v64[1] + 256))
                  + *(_DWORD *)(v18 + 4LL * ((unsigned int)v63[1] + 768))) >> 13;
          v65 = *v64;
          v64 += 3;
          v66 = *(_DWORD *)(v18 + 4LL * (unsigned int)(v65 + 256))
              + *(_DWORD *)(v18 + 4LL * ((unsigned int)v62[1] + 512));
          v67 = *v63;
          v63 += 3;
          v42[1] = (*(_DWORD *)(v18 + 4LL * (unsigned int)(v67 + 768)) + v66) >> 13;
          v48 = (unsigned int)*(v63 - 4) + 768;
          v68 = *v62;
          v62 += 3;
          v50 = (unsigned int)((*(_DWORD *)(v18 + 4LL * (unsigned int)(v68 + 512))
                              + *(_DWORD *)(v18 + 4LL * ((unsigned int)*(v64 - 4) + 256))
                              + *(_DWORD *)(v18 + 4 * v48)) >> 13);
          *v42 = v50;
          v42 += v128;
        }
        while ( v42 != v127 );
      }
      else if ( (_WORD)v38 )
      {
        v69 = (int *)(v18 + 3072);
        do
        {
          v48 = (unsigned int)(v46 + v48);
          v49 += v45;
          *(v69 - 256) = v48;
          *v69++ = v49;
        }
        while ( (unsigned __int64)(v69 - 768) < v18 + 1024 );
        v70 = v80 + 1;
        do
        {
          v42[2] = (*(_DWORD *)(v18 + 4LL * ((unsigned int)v70[1] + 512))
                  + *(_DWORD *)(v18 + 4LL * ((unsigned int)*(unsigned __int8 *)(v50 + 2) + 768))) >> 13;
          v71 = (unsigned int)*v70 + 512;
          v70 += 3;
          v42[1] = (*(_DWORD *)(v18 + 4 * v71)
                  + *(_DWORD *)(v18 + 4LL * ((unsigned int)*(unsigned __int8 *)(v50 + 1) + 768))) >> 13;
          v72 = (unsigned int)*(unsigned __int8 *)v50 + 768;
          v50 += 3LL;
          *v42 = (*(_DWORD *)(v18 + 4 * v72) + *(_DWORD *)(v18 + 4LL * ((unsigned int)*(v70 - 4) + 512))) >> 13;
          v42 += v128;
        }
        while ( v42 != v127 );
      }
      else
      {
        do
        {
          v49 += v45;
          *(_DWORD *)(v43 + 3072) = v49;
          v43 += 4LL;
        }
        while ( v43 < v18 + 1024 );
        do
        {
          v42[2] = *(int *)(v18 + 4LL * ((unsigned int)*(unsigned __int8 *)(v50 + 2) + 768)) >> 13;
          v42[1] = *(int *)(v18 + 4LL * ((unsigned int)*(unsigned __int8 *)(v50 + 1) + 768)) >> 13;
          v73 = *(unsigned __int8 *)v50;
          v50 += 3LL;
          *v42 = *(int *)(v18 + 4LL * (unsigned int)(v73 + 768)) >> 13;
          v42 += v128;
        }
        while ( v42 != v127 );
      }
      v74 = v98[0];
      if ( SLOBYTE(v98[0]) < 0 )
      {
        v104(v98, v48, v50);
        v74 = v98[0];
      }
      if ( (v74 & 0x800) != 0 )
      {
        AlphaBlendBGRF(v98);
        LOBYTE(v74) = v98[0];
      }
      if ( (v74 & 0x10) != 0 )
      {
        MappingBGRF(v122, v123, v110, v117);
        v75 = v120 + v117;
        if ( v75 == v118 )
          v75 = v119;
        v117 = v75;
      }
      v105(v98, v124, v125, v100, v109, v111, v111 + v115, v116, v106);
      v22 = v86;
      v76 = v114 + v111;
      if ( v76 == v112 )
        v76 = v113;
      v100 += v103;
      v32 = v92;
      v111 = v76;
      v31 = v97;
    }
  }
  return v102;
}
