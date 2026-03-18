/*
 * XREFs of GrayExpandDIB_CY_ExpCX @ 0x1C024D4B0
 * Callers:
 *     <none>
 * Callees:
 *     GetFixupScan @ 0x1C0008FDC (GetFixupScan.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0163300 (memmove.c)
 *     AlphaBlendBGRF @ 0x1C024A3E0 (AlphaBlendBGRF.c)
 *     GrayExpYDIB_ExpCX @ 0x1C024C9C4 (GrayExpYDIB_ExpCX.c)
 *     GraySharpenInput @ 0x1C024DF40 (GraySharpenInput.c)
 *     MappingBGRF @ 0x1C024E8D4 (MappingBGRF.c)
 */

__int64 __fastcall GrayExpandDIB_CY_ExpCX(__int64 a1)
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
  int v16; // r14d
  __int64 v17; // rsi
  size_t v18; // r13
  __int16 v19; // dx
  unsigned __int64 v20; // rbx
  int v21; // eax
  char *v22; // r12
  char *v23; // rdi
  unsigned int v24; // edi
  int v25; // eax
  int v26; // edi
  int v27; // r15d
  char *v28; // rsi
  char *v29; // r14
  int v30; // ebx
  int v31; // eax
  unsigned __int64 *v32; // rcx
  int v33; // eax
  unsigned __int64 v34; // rdi
  unsigned __int64 v35; // r15
  unsigned __int16 v36; // cx
  unsigned __int64 v37; // rdx
  unsigned __int64 v38; // r8
  unsigned __int64 v39; // r13
  char *v40; // rdx
  int v41; // esi
  _BYTE *v42; // r8
  _WORD *v43; // r9
  unsigned __int64 v44; // r11
  int v45; // r15d
  int v46; // esi
  int v47; // r12d
  int v48; // r14d
  __int64 v49; // rdx
  __int64 v50; // r10
  int v51; // ecx
  unsigned __int8 *v52; // r8
  _DWORD *v53; // r11
  __int64 v54; // r10
  unsigned __int64 v55; // r11
  unsigned __int64 v56; // rdi
  int v57; // edx
  __int64 v58; // rax
  _DWORD *v59; // r11
  unsigned __int64 v60; // r11
  __int64 v61; // r10
  __int64 v62; // rcx
  int v63; // edx
  __int64 v64; // rax
  int *v65; // r11
  __int64 v66; // rax
  __int64 v67; // rcx
  __int64 v68; // rax
  __int16 v69; // ax
  __int64 v70; // rax
  __int64 v71; // rcx
  __int64 v73; // [rsp+28h] [rbp-E0h]
  int v74; // [rsp+58h] [rbp-B0h]
  int v75; // [rsp+5Ch] [rbp-ACh]
  int v76; // [rsp+60h] [rbp-A8h]
  __int64 v77; // [rsp+68h] [rbp-A0h]
  char *v78; // [rsp+70h] [rbp-98h]
  char *v79; // [rsp+78h] [rbp-90h]
  int v80; // [rsp+80h] [rbp-88h]
  char *Src; // [rsp+88h] [rbp-80h]
  __int64 v82; // [rsp+90h] [rbp-78h]
  _BYTE *v83; // [rsp+98h] [rbp-70h]
  unsigned __int64 v84; // [rsp+98h] [rbp-70h]
  unsigned __int64 v85; // [rsp+A0h] [rbp-68h]
  int v86; // [rsp+A0h] [rbp-68h]
  __int64 v87; // [rsp+A8h] [rbp-60h]
  unsigned __int64 *v88; // [rsp+B0h] [rbp-58h]
  unsigned __int64 v89; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v90; // [rsp+C0h] [rbp-48h]
  unsigned __int64 v91; // [rsp+C8h] [rbp-40h]
  unsigned __int64 *v92; // [rsp+D0h] [rbp-38h]
  int v93[14]; // [rsp+D8h] [rbp-30h] BYREF
  int v94; // [rsp+110h] [rbp+8h]
  __int64 v95; // [rsp+160h] [rbp+58h]
  int v96; // [rsp+168h] [rbp+60h]
  unsigned int v97; // [rsp+16Ch] [rbp+64h]
  int v98; // [rsp+174h] [rbp+6Ch]
  void (__fastcall *v99)(int *, __int64, unsigned __int8 *); // [rsp+198h] [rbp+90h]
  void (__fastcall *v100)(int *, __int64, __int64, __int64, __int64, __int64, __int64, int, __int64); // [rsp+1E8h] [rbp+E0h]
  __int64 v101; // [rsp+1F0h] [rbp+E8h]
  __int64 v102; // [rsp+208h] [rbp+100h]
  __int64 v103; // [rsp+210h] [rbp+108h]
  __int64 v104; // [rsp+258h] [rbp+150h]
  __int64 v105; // [rsp+260h] [rbp+158h]
  __int64 v106; // [rsp+270h] [rbp+168h]
  __int64 v107; // [rsp+278h] [rbp+170h]
  __int64 v108; // [rsp+280h] [rbp+178h]
  int v109; // [rsp+288h] [rbp+180h]
  int v110; // [rsp+28Ch] [rbp+184h]
  int v111; // [rsp+290h] [rbp+188h]
  __int64 v112; // [rsp+298h] [rbp+190h]
  __int64 v113; // [rsp+2A0h] [rbp+198h]
  __int64 v114; // [rsp+2A8h] [rbp+1A0h]
  int v115; // [rsp+2B0h] [rbp+1A8h]
  __int64 v116; // [rsp+2F0h] [rbp+1E8h]
  __int64 v117; // [rsp+2F8h] [rbp+1F0h]
  __int64 v118; // [rsp+300h] [rbp+1F8h]
  __int64 v119; // [rsp+308h] [rbp+200h]
  __int64 v120; // [rsp+310h] [rbp+208h]
  _WORD *v121; // [rsp+318h] [rbp+210h]
  _WORD *v122; // [rsp+320h] [rbp+218h]
  int v123; // [rsp+328h] [rbp+220h]
  unsigned __int64 v124; // [rsp+338h] [rbp+230h]
  __int64 v125; // [rsp+340h] [rbp+238h]
  __int64 v126; // [rsp+348h] [rbp+240h]
  __int64 v127; // [rsp+350h] [rbp+248h]

  v1 = 4LL;
  v2 = v93;
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
    v17 = v103;
    v18 = v94;
    v77 = v103;
    v19 = *(_WORD *)(v102 + 12);
    v20 = *(_QWORD *)(v103 + 32);
    v21 = *(_WORD *)(v102 + 8) & 1;
    v85 = v20;
    v75 = v94;
    v74 = -1;
    v88 = *(unsigned __int64 **)(v102 + 40);
    v91 = v20 + 1024;
    v124 = v20 + 4096;
    v76 = v21 + (v19 & 0xF);
    v87 = v96;
    v125 = v96 + v20 + 4096;
    v126 = v125 + v96;
    v127 = v126 + v96;
    v22 = (char *)(v96 + 3LL + v127 + v94 + 6LL);
    v78 = (char *)(v96 + 3LL + v127);
    v23 = &v22[v94 + 6];
    v79 = v22;
    LODWORD(v82) = v116 + 3;
    Src = v23;
    GetFixupScan((__int64)v93, v22);
    if ( (*(_BYTE *)(v17 + 8) & 1) != 0 )
      GetFixupScan((__int64)v93, v23);
    else
      memmove(v23, v22, v18);
    v24 = *(unsigned __int16 *)(v17 + 12);
    v25 = v24 & 0xF;
    v26 = v24 >> 4;
    v27 = v25 + v26;
    if ( v25 + v26 )
    {
      v28 = v22;
      v29 = v78;
      v30 = -1;
      do
      {
        ++v30;
        v78 = v28;
        v28 = Src;
        Src = v29;
        --v27;
        v31 = v26--;
        v83 = (_BYTE *)*(&v124 + (v30 & 3));
        if ( v31 <= 0 )
          GetFixupScan((__int64)v93, v29);
        else
          memmove(v29, v28, v18);
        v73 = (__int64)v29;
        v29 = v78;
        v82 = GraySharpenInput(v93[0], v82, (int)v78, (int)v28, v73, v18);
        GrayExpYDIB_ExpCX(v88, (unsigned __int8 *)(v76 - 1LL + v82), v83, &v83[v87]);
      }
      while ( v27 );
      v79 = v28;
      v22 = v28;
      v17 = v77;
      v74 = v30;
      v16 = v30;
      v20 = v85;
    }
    v32 = *(unsigned __int64 **)(v17 + 40);
    v33 = *(_DWORD *)(v17 + 16);
    while ( v33 )
    {
      v34 = *v32;
      v86 = v33 - 1;
      v92 = v32 + 1;
      v90 = *v32 >> 16;
      v35 = HIDWORD(*v32);
      v89 = HIWORD(*v32);
      v36 = v90;
      v37 = HIDWORD(v34);
      v38 = HIWORD(v34);
      v39 = v34 >> 16;
      v84 = HIDWORD(v34);
      if ( (v34 & 0x8000u) != 0LL )
      {
        v40 = v78;
        v41 = (int)Src;
        v79 = Src;
        v78 = v22;
        Src = (char *)GetFixupScan((__int64)v93, v40);
        v82 = GraySharpenInput(v93[0], v82, (int)v22, v41, (__int64)Src, v75);
        v74 = v16 + 1;
        v42 = (_BYTE *)*(&v124 + (((_BYTE)v16 + 1) & 3));
        GrayExpYDIB_ExpCX(v88, (unsigned __int8 *)(v76 - 1LL + v82), v42, &v42[v87]);
        v36 = WORD1(v34);
        LOWORD(v37) = WORD2(v34);
        LOWORD(v34) = v34 & 0x3FFF;
        LOWORD(v38) = v89;
        LOWORD(v39) = v90;
        LOWORD(v84) = v35;
      }
      v43 = v121;
      v44 = v20;
      v45 = -(unsigned __int16)v34;
      v80 = v36;
      v46 = -v36;
      v47 = (unsigned __int16)v37;
      v48 = (unsigned __int16)v38;
      v49 = (unsigned int)-(unsigned __int16)v37;
      v50 = *(&v124 + (v74 & 3));
      v51 = 256 - (unsigned __int16)v38;
      v52 = (unsigned __int8 *)*(&v124 + (((_BYTE)v74 - 1) & 3));
      if ( (_WORD)v34 )
      {
        v53 = (_DWORD *)(v20 + 2048);
        do
        {
          v45 += (unsigned __int16)v34;
          v46 += v80;
          LODWORD(v49) = v47 + v49;
          *(v53 - 512) = v45;
          v51 += v48;
          *(v53 - 256) = v46;
          *v53 = v49;
          v53[256] = v51;
          ++v53;
        }
        while ( (unsigned __int64)(v53 - 512) < v91 );
        v16 = v74;
        v54 = v50 - (_QWORD)v52;
        v55 = *(&v124 + (((_BYTE)v74 - 2) & 3)) - (_QWORD)v52;
        v56 = *(&v124 + (((_BYTE)v74 + 1) & 3)) - (_QWORD)v52;
        do
        {
          v57 = *(_DWORD *)(v20 + 4LL * v52[v56])
              + *(_DWORD *)(v20 + 4LL * v52[v55] + 1024)
              + *(_DWORD *)(v20 + 4LL * v52[v54] + 3072);
          v58 = *v52++;
          v49 = (unsigned int)((*(_DWORD *)(v20 + 4 * v58 + 2048) + v57) >> 5);
          *v43 = v49;
          v43 = (_WORD *)((char *)v43 + v123);
        }
        while ( v43 != v122 );
      }
      else if ( (_WORD)v39 )
      {
        v59 = (_DWORD *)(v20 + 2048);
        do
        {
          v46 += v80;
          LODWORD(v49) = v47 + v49;
          v51 += v48;
          *(v59 - 256) = v46;
          *v59 = v49;
          v59[256] = v51;
          ++v59;
        }
        while ( (unsigned __int64)(v59 - 512) < v20 + 1024 );
        v16 = v74;
        v60 = *(&v124 + (((_BYTE)v74 - 2) & 3)) - (_QWORD)v52;
        v61 = v50 - (_QWORD)v52;
        do
        {
          v62 = v52[v60];
          v63 = *(_DWORD *)(v20 + 4LL * v52[v61] + 3072);
          v64 = *v52++;
          v49 = (unsigned int)((*(_DWORD *)(v20 + 4 * v64 + 2048) + *(_DWORD *)(v20 + 4 * v62 + 1024) + v63) >> 5);
          *v43 = v49;
          v43 = (_WORD *)((char *)v43 + v123);
        }
        while ( v43 != v122 );
      }
      else
      {
        if ( (_WORD)v84 )
        {
          v65 = (int *)(v20 + 3072);
          do
          {
            LODWORD(v49) = v47 + v49;
            v51 += v48;
            *(v65 - 256) = v49;
            *v65++ = v51;
          }
          while ( (unsigned __int64)(v65 - 768) < v20 + 1024 );
          v52 -= v50;
          do
          {
            v66 = v52[v50];
            v67 = *(unsigned __int8 *)v50++;
            v49 = (unsigned int)((*(_DWORD *)(v20 + 4 * v67 + 3072) + *(_DWORD *)(v20 + 4 * v66 + 2048)) >> 5);
            *v43 = v49;
            v43 = (_WORD *)((char *)v43 + v123);
          }
          while ( v43 != v122 );
        }
        else
        {
          do
          {
            v51 += v48;
            *(_DWORD *)(v44 + 3072) = v51;
            v44 += 4LL;
          }
          while ( v44 < v20 + 1024 );
          do
          {
            v68 = *(unsigned __int8 *)v50++;
            *v43 = *(int *)(v20 + 4 * v68 + 3072) >> 5;
            v43 = (_WORD *)((char *)v43 + v123);
          }
          while ( v43 != v122 );
        }
        v16 = v74;
      }
      v69 = v93[0];
      if ( SLOBYTE(v93[0]) < 0 )
      {
        v99(v93, v49, v52);
        v69 = v93[0];
      }
      if ( (v69 & 0x800) != 0 )
      {
        AlphaBlendBGRF(v93);
        LOBYTE(v69) = v93[0];
      }
      if ( (v69 & 0x10) != 0 )
      {
        MappingBGRF(v117, v118, v105, v112);
        v70 = v115 + v112;
        if ( v70 == v113 )
          v70 = v114;
        v112 = v70;
      }
      v100(v93, v119, v120, v95, v104, v106, v106 + v110, v111, v101);
      v22 = v79;
      v71 = v109 + v106;
      if ( v71 == v107 )
        v71 = v108;
      v95 += v98;
      v33 = v86;
      v106 = v71;
      v32 = v92;
    }
  }
  return v97;
}
