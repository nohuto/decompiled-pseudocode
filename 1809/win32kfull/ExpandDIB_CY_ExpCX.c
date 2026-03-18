/*
 * XREFs of ExpandDIB_CY_ExpCX @ 0x1C024C0F0
 * Callers:
 *     <none>
 * Callees:
 *     GetFixupScan @ 0x1C0008FDC (GetFixupScan.c)
 *     SharpenInput @ 0x1C0139130 (SharpenInput.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0163300 (memmove.c)
 *     AlphaBlendBGRF @ 0x1C024A3E0 (AlphaBlendBGRF.c)
 *     ExpYDIB_ExpCX @ 0x1C024B19C (ExpYDIB_ExpCX.c)
 *     MappingBGRF @ 0x1C024E8D4 (MappingBGRF.c)
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
  int v16; // esi
  __int64 v17; // r14
  unsigned __int64 v18; // rbx
  size_t v19; // r13
  __int64 v20; // rax
  __int16 v21; // cx
  char *v22; // rdi
  char *v23; // r15
  int v24; // r12d
  unsigned int v25; // edi
  int v26; // eax
  int v27; // edi
  int v28; // r15d
  char *v29; // r14
  char *v30; // rsi
  __int64 v31; // r12
  int v32; // ebx
  int v33; // eax
  unsigned __int64 *v34; // rcx
  int v35; // eax
  unsigned __int64 v36; // rdi
  unsigned __int64 v37; // r14
  unsigned __int64 v38; // r12
  unsigned __int16 v39; // cx
  unsigned __int64 v40; // rdx
  unsigned __int64 v41; // r8
  unsigned __int64 v42; // r13
  char *v43; // rdx
  _BYTE *v44; // r8
  unsigned __int64 v45; // r10
  int v46; // r15d
  int v47; // r12d
  int v48; // r14d
  _BYTE *v49; // r8
  int v50; // r11d
  __int64 v51; // rdx
  int v52; // ecx
  unsigned __int8 *v53; // r9
  unsigned __int8 *v54; // rsi
  _DWORD *v55; // r10
  unsigned __int8 *v56; // r10
  unsigned __int8 *v57; // r11
  __int64 v58; // rcx
  __int64 v59; // rax
  int v60; // edx
  __int64 v61; // rax
  __int64 v62; // rax
  _DWORD *v63; // r10
  unsigned __int8 *v64; // r10
  __int64 v65; // rcx
  __int64 v66; // rax
  __int64 v67; // rax
  _DWORD *v68; // r10
  unsigned __int8 *v69; // r10
  __int64 v70; // rcx
  __int64 v71; // rcx
  __int64 v72; // rax
  __int16 v73; // ax
  __int64 v74; // rax
  __int64 v75; // rcx
  __int64 v77; // [rsp+28h] [rbp-E0h]
  int v78; // [rsp+58h] [rbp-B0h]
  char *v79; // [rsp+60h] [rbp-A8h]
  int v80; // [rsp+68h] [rbp-A0h]
  __int64 v81; // [rsp+70h] [rbp-98h]
  unsigned __int64 v82; // [rsp+70h] [rbp-98h]
  int v83; // [rsp+78h] [rbp-90h]
  char *v84; // [rsp+80h] [rbp-88h]
  char *Src; // [rsp+88h] [rbp-80h]
  unsigned __int64 v86; // [rsp+90h] [rbp-78h]
  _BYTE *v87; // [rsp+98h] [rbp-70h]
  unsigned __int64 v88; // [rsp+98h] [rbp-70h]
  int v89; // [rsp+A0h] [rbp-68h]
  unsigned __int64 v90; // [rsp+A8h] [rbp-60h]
  int v91; // [rsp+A8h] [rbp-60h]
  __int64 v92; // [rsp+B0h] [rbp-58h]
  unsigned __int64 *v93; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v94; // [rsp+C0h] [rbp-48h]
  unsigned __int64 *v95; // [rsp+C8h] [rbp-40h]
  int v96[14]; // [rsp+D8h] [rbp-30h] BYREF
  int v97; // [rsp+110h] [rbp+8h]
  __int64 v98; // [rsp+160h] [rbp+58h]
  int v99; // [rsp+168h] [rbp+60h]
  unsigned int v100; // [rsp+16Ch] [rbp+64h]
  int v101; // [rsp+174h] [rbp+6Ch]
  void (__fastcall *v102)(int *, __int64, _BYTE *, unsigned __int8 *); // [rsp+198h] [rbp+90h]
  void (__fastcall *v103)(int *, __int64, __int64, __int64, __int64, __int64, __int64, int, __int64); // [rsp+1E8h] [rbp+E0h]
  __int64 v104; // [rsp+1F0h] [rbp+E8h]
  __int64 v105; // [rsp+208h] [rbp+100h]
  __int64 v106; // [rsp+210h] [rbp+108h]
  __int64 v107; // [rsp+258h] [rbp+150h]
  __int64 v108; // [rsp+260h] [rbp+158h]
  __int64 v109; // [rsp+270h] [rbp+168h]
  __int64 v110; // [rsp+278h] [rbp+170h]
  __int64 v111; // [rsp+280h] [rbp+178h]
  int v112; // [rsp+288h] [rbp+180h]
  int v113; // [rsp+28Ch] [rbp+184h]
  int v114; // [rsp+290h] [rbp+188h]
  __int64 v115; // [rsp+298h] [rbp+190h]
  __int64 v116; // [rsp+2A0h] [rbp+198h]
  __int64 v117; // [rsp+2A8h] [rbp+1A0h]
  int v118; // [rsp+2B0h] [rbp+1A8h]
  __int64 v119; // [rsp+2F0h] [rbp+1E8h]
  __int64 v120; // [rsp+2F8h] [rbp+1F0h]
  __int64 v121; // [rsp+300h] [rbp+1F8h]
  __int64 v122; // [rsp+308h] [rbp+200h]
  __int64 v123; // [rsp+310h] [rbp+208h]
  _BYTE *v124; // [rsp+318h] [rbp+210h]
  _BYTE *v125; // [rsp+320h] [rbp+218h]
  int v126; // [rsp+328h] [rbp+220h]
  _QWORD v127[3]; // [rsp+338h] [rbp+230h]
  __int64 v128; // [rsp+350h] [rbp+248h]

  v1 = 4LL;
  v2 = v96;
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
    v17 = v106;
    v81 = v106;
    v78 = -1;
    v18 = *(_QWORD *)(v106 + 32);
    v93 = *(unsigned __int64 **)(v105 + 40);
    v90 = v18;
    v94 = v18 + 1024;
    v127[0] = v18 + 4096;
    v19 = 3 * v97;
    v80 = 3 * v97;
    v92 = 3 * v99;
    v20 = v92 + v18 + 4096;
    v127[1] = v20;
    v127[2] = v92 + v20;
    v21 = *(_WORD *)(v105 + 12);
    v128 = v92 + v92 + v20;
    v22 = (char *)(v92 + 9 + v128 + v19 + 18);
    v79 = (char *)(v92 + 9 + v128);
    v23 = &v22[v19 + 18];
    v84 = v22;
    v86 = v119 + 9;
    Src = v23;
    v24 = 3 * ((*(_WORD *)(v105 + 8) & 1) + (v21 & 0xF));
    v89 = v24;
    GetFixupScan((__int64)v96, v22);
    if ( (*(_BYTE *)(v17 + 8) & 1) != 0 )
      GetFixupScan((__int64)v96, v23);
    else
      memmove(v23, v22, v19);
    v25 = *(unsigned __int16 *)(v17 + 12);
    v26 = v25 & 0xF;
    v27 = v25 >> 4;
    v28 = v26 + v27;
    if ( v26 + v27 )
    {
      v29 = v84;
      v30 = v79;
      v31 = v24 - 3LL;
      v32 = -1;
      do
      {
        ++v32;
        v79 = v29;
        v29 = Src;
        Src = v30;
        --v28;
        v33 = v27--;
        v87 = (_BYTE *)v127[v32 & 3];
        if ( v33 <= 0 )
          GetFixupScan((__int64)v96, v30);
        else
          memmove(v30, v29, v19);
        v77 = (__int64)v30;
        v30 = v79;
        v86 = SharpenInput(v96[0], v86, (__int64)v79, (unsigned __int64)v29, v77, v80);
        ExpYDIB_ExpCX(v93, (unsigned __int8 *)(v31 + v86), v87, &v87[v92]);
      }
      while ( v28 );
      v78 = v32;
      v16 = v32;
      v18 = v90;
      v84 = v29;
      v17 = v81;
    }
    v34 = *(unsigned __int64 **)(v17 + 40);
    v35 = *(_DWORD *)(v17 + 16);
    while ( v35 )
    {
      v36 = *v34;
      v91 = v35 - 1;
      v95 = v34 + 1;
      v37 = HIDWORD(*v34);
      v82 = *v34 >> 16;
      v38 = HIWORD(*v34);
      v39 = v82;
      v40 = HIDWORD(v36);
      v41 = HIWORD(v36);
      v42 = HIDWORD(v36);
      v88 = v36 >> 16;
      if ( (v36 & 0x8000u) != 0LL )
      {
        v43 = v79;
        v42 = (unsigned __int64)Src;
        v79 = v84;
        v84 = Src;
        Src = (char *)GetFixupScan((__int64)v96, v43);
        ++v16;
        v86 = SharpenInput(v96[0], v86, (__int64)v79, v42, (__int64)Src, v80);
        v78 = v16;
        v44 = (_BYTE *)v127[v16 & 3];
        ExpYDIB_ExpCX(v93, (unsigned __int8 *)(v89 - 3LL + v86), v44, &v44[v92]);
        v39 = v82;
        LOWORD(v40) = WORD2(v36);
        LOWORD(v36) = v36 & 0x3FFF;
        LOWORD(v41) = v38;
        LOWORD(v88) = v82;
        LOWORD(v42) = v37;
      }
      v45 = v18;
      v46 = -(unsigned __int16)v36;
      v83 = v39;
      v47 = (unsigned __int16)v40;
      v48 = (unsigned __int16)v41;
      v49 = v124;
      v50 = -v39;
      v51 = (unsigned int)-(unsigned __int16)v40;
      v52 = 4096 - v48;
      v53 = (unsigned __int8 *)v127[v16 & 3];
      v54 = (unsigned __int8 *)v127[((_BYTE)v16 - 1) & 3];
      if ( (_WORD)v36 )
      {
        v55 = (_DWORD *)(v18 + 2048);
        do
        {
          v46 += (unsigned __int16)v36;
          v50 += v83;
          LODWORD(v51) = v47 + v51;
          *(v55 - 512) = v46;
          v52 += v48;
          *(v55 - 256) = v50;
          *v55 = v51;
          v55[256] = v52;
          ++v55;
        }
        while ( (unsigned __int64)(v55 - 512) < v94 );
        v56 = (unsigned __int8 *)(v127[((_BYTE)v78 + 1) & 3] + 1LL);
        v57 = (unsigned __int8 *)(v127[((_BYTE)v78 - 2) & 3] + 1LL);
        ++v53;
        do
        {
          v49[2] = (*(_DWORD *)(v18 + 4LL * v56[1])
                  + *(_DWORD *)(v18 + 4LL * v54[2] + 2048)
                  + *(_DWORD *)(v18 + 4LL * v57[1] + 1024)
                  + *(_DWORD *)(v18 + 4LL * v53[1] + 3072)) >> 13;
          v58 = *v53;
          v53 += 3;
          v59 = *v57;
          v57 += 3;
          v60 = *(_DWORD *)(v18 + 4 * v59 + 1024)
              + *(_DWORD *)(v18 + 4 * v58 + 3072)
              + *(_DWORD *)(v18 + 4LL * v54[1] + 2048);
          v61 = *v56;
          v56 += 3;
          v49[1] = (*(_DWORD *)(v18 + 4 * v61) + v60) >> 13;
          v62 = *v54;
          v54 += 3;
          v51 = (unsigned int)((*(_DWORD *)(v18 + 4 * v62 + 2048)
                              + *(_DWORD *)(v18 + 4LL * *(v56 - 4))
                              + *(_DWORD *)(v18 + 4LL * *(v57 - 4) + 1024)
                              + *(_DWORD *)(v18 + 4LL * *(v53 - 4) + 3072)) >> 13);
          *v49 = v51;
          v49 += v126;
        }
        while ( v49 != v125 );
      }
      else if ( (_WORD)v88 )
      {
        v63 = (_DWORD *)(v18 + 2048);
        do
        {
          v50 += v83;
          LODWORD(v51) = v47 + v51;
          v52 += v48;
          *(v63 - 256) = v50;
          *v63 = v51;
          v63[256] = v52;
          ++v63;
        }
        while ( (unsigned __int64)(v63 - 512) < v18 + 1024 );
        v64 = (unsigned __int8 *)(v127[((_BYTE)v78 - 2) & 3] + 1LL);
        ++v53;
        do
        {
          v49[2] = (*(_DWORD *)(v18 + 4LL * v54[2] + 2048)
                  + *(_DWORD *)(v18 + 4LL * v64[1] + 1024)
                  + *(_DWORD *)(v18 + 4LL * v53[1] + 3072)) >> 13;
          v65 = *v64;
          v64 += 3;
          v66 = *v53;
          v53 += 3;
          v49[1] = (*(_DWORD *)(v18 + 4 * v66 + 3072)
                  + *(_DWORD *)(v18 + 4 * v65 + 1024)
                  + *(_DWORD *)(v18 + 4LL * v54[1] + 2048)) >> 13;
          v67 = *v54;
          v54 += 3;
          v51 = (unsigned int)((*(_DWORD *)(v18 + 4 * v67 + 2048)
                              + *(_DWORD *)(v18 + 4LL * *(v64 - 4) + 1024)
                              + *(_DWORD *)(v18 + 4LL * *(v53 - 4) + 3072)) >> 13);
          *v49 = v51;
          v49 += v126;
        }
        while ( v49 != v125 );
      }
      else if ( (_WORD)v42 )
      {
        v68 = (_DWORD *)(v18 + 3072);
        do
        {
          LODWORD(v51) = v47 + v51;
          v52 += v48;
          *(v68 - 256) = v51;
          *v68++ = v52;
        }
        while ( (unsigned __int64)(v68 - 768) < v18 + 1024 );
        v69 = v54 + 1;
        do
        {
          v49[2] = (*(_DWORD *)(v18 + 4LL * v53[2] + 3072) + *(_DWORD *)(v18 + 4LL * v69[1] + 2048)) >> 13;
          v70 = *v69;
          v69 += 3;
          v49[1] = (*(_DWORD *)(v18 + 4 * v70 + 2048) + *(_DWORD *)(v18 + 4LL * v53[1] + 3072)) >> 13;
          v71 = *v53;
          v53 += 3;
          v51 = (unsigned int)((*(_DWORD *)(v18 + 4 * v71 + 3072) + *(_DWORD *)(v18 + 4LL * *(v69 - 4) + 2048)) >> 13);
          *v49 = v51;
          v49 += v126;
        }
        while ( v49 != v125 );
      }
      else
      {
        do
        {
          v52 += v48;
          *(_DWORD *)(v45 + 3072) = v52;
          v45 += 4LL;
        }
        while ( v45 < v18 + 1024 );
        do
        {
          v49[2] = *(int *)(v18 + 4LL * v53[2] + 3072) >> 13;
          v49[1] = *(int *)(v18 + 4LL * v53[1] + 3072) >> 13;
          v72 = *v53;
          v53 += 3;
          *v49 = *(int *)(v18 + 4 * v72 + 3072) >> 13;
          v49 += v126;
        }
        while ( v49 != v125 );
      }
      v73 = v96[0];
      if ( SLOBYTE(v96[0]) < 0 )
      {
        v102(v96, v51, v49, v53);
        v73 = v96[0];
      }
      if ( (v73 & 0x800) != 0 )
      {
        AlphaBlendBGRF(v96);
        LOBYTE(v73) = v96[0];
      }
      if ( (v73 & 0x10) != 0 )
      {
        MappingBGRF(v120, v121, v108, v115);
        v74 = v118 + v115;
        if ( v74 == v116 )
          v74 = v117;
        v115 = v74;
      }
      v103(v96, v122, v123, v98, v107, v109, v109 + v113, v114, v104);
      v16 = v78;
      v75 = v112 + v109;
      if ( v75 == v110 )
        v75 = v111;
      v98 += v101;
      v35 = v91;
      v109 = v75;
      v34 = v95;
    }
  }
  return v100;
}
