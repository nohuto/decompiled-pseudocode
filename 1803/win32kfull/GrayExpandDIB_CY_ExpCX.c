/*
 * XREFs of GrayExpandDIB_CY_ExpCX @ 0x1C0237F20
 * Callers:
 *     <none>
 * Callees:
 *     GetFixupScan @ 0x1C00D5270 (GetFixupScan.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C013D380 (memmove.c)
 *     AlphaBlendBGRF @ 0x1C0234D70 (AlphaBlendBGRF.c)
 *     GrayExpYDIB_ExpCX @ 0x1C0237410 (GrayExpYDIB_ExpCX.c)
 *     GraySharpenInput @ 0x1C02389C0 (GraySharpenInput.c)
 *     MappingBGRF @ 0x1C0239330 (MappingBGRF.c)
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
  size_t v18; // r12
  unsigned __int64 v19; // rbx
  char *v20; // r13
  char *v21; // rdi
  unsigned int v22; // edi
  int v23; // eax
  int v24; // edi
  int v25; // r15d
  int v26; // esi
  char *v27; // r14
  const void *v28; // rcx
  _BYTE *v29; // r13
  int v30; // eax
  unsigned __int64 *v31; // rcx
  int v32; // eax
  unsigned __int64 v33; // rdi
  unsigned __int64 v34; // r15
  unsigned __int64 v35; // r12
  unsigned __int16 v36; // cx
  unsigned __int64 v37; // rdx
  unsigned __int64 v38; // r9
  unsigned __int64 v39; // r13
  __int64 v40; // rdx
  int v41; // esi
  _BYTE *v42; // r8
  _WORD *v43; // r10
  unsigned __int64 v44; // r8
  int v45; // r14d
  int v46; // esi
  int v47; // r12d
  int v48; // r15d
  __int64 v49; // rdx
  __int64 v50; // r11
  int v51; // ecx
  unsigned __int8 *v52; // r9
  _DWORD *v53; // r8
  __int64 v54; // r11
  unsigned __int64 v55; // rdi
  unsigned __int64 v56; // rsi
  int v57; // r8d
  int v58; // eax
  _DWORD *v59; // r8
  unsigned __int64 v60; // rdi
  __int64 v61; // r11
  int v62; // r8d
  int v63; // eax
  __int64 v64; // rax
  __int64 v65; // rcx
  int v66; // eax
  __int16 v67; // ax
  __int64 v68; // rax
  __int64 v69; // rcx
  __int64 v71; // [rsp+28h] [rbp-E0h]
  int v72; // [rsp+58h] [rbp-B0h]
  int v73; // [rsp+5Ch] [rbp-ACh]
  unsigned int v74; // [rsp+60h] [rbp-A8h]
  __int64 v75; // [rsp+68h] [rbp-A0h]
  char *v76; // [rsp+70h] [rbp-98h]
  char *v77; // [rsp+78h] [rbp-90h]
  unsigned __int64 v78; // [rsp+80h] [rbp-88h]
  int v79; // [rsp+80h] [rbp-88h]
  char *Src; // [rsp+88h] [rbp-80h]
  __int64 v81; // [rsp+90h] [rbp-78h]
  unsigned __int64 v82; // [rsp+98h] [rbp-70h]
  int v83; // [rsp+A0h] [rbp-68h]
  __int64 v84; // [rsp+A8h] [rbp-60h]
  unsigned __int64 *v85; // [rsp+B0h] [rbp-58h]
  unsigned __int64 v86; // [rsp+B8h] [rbp-50h]
  unsigned __int64 *v87; // [rsp+C8h] [rbp-40h]
  int v88[14]; // [rsp+D8h] [rbp-30h] BYREF
  int v89; // [rsp+110h] [rbp+8h]
  __int64 v90; // [rsp+160h] [rbp+58h]
  int v91; // [rsp+168h] [rbp+60h]
  unsigned int v92; // [rsp+16Ch] [rbp+64h]
  int v93; // [rsp+174h] [rbp+6Ch]
  void (__fastcall *v94)(int *, __int64, unsigned __int64, unsigned __int8 *); // [rsp+198h] [rbp+90h]
  void (__fastcall *v95)(int *, __int64, __int64, __int64, __int64, __int64, __int64, int, __int64); // [rsp+1E8h] [rbp+E0h]
  __int64 v96; // [rsp+1F0h] [rbp+E8h]
  __int64 v97; // [rsp+208h] [rbp+100h]
  __int64 v98; // [rsp+210h] [rbp+108h]
  __int64 v99; // [rsp+258h] [rbp+150h]
  __int64 v100; // [rsp+260h] [rbp+158h]
  __int64 v101; // [rsp+270h] [rbp+168h]
  __int64 v102; // [rsp+278h] [rbp+170h]
  __int64 v103; // [rsp+280h] [rbp+178h]
  int v104; // [rsp+288h] [rbp+180h]
  int v105; // [rsp+28Ch] [rbp+184h]
  int v106; // [rsp+290h] [rbp+188h]
  __int64 v107; // [rsp+298h] [rbp+190h]
  __int64 v108; // [rsp+2A0h] [rbp+198h]
  __int64 v109; // [rsp+2A8h] [rbp+1A0h]
  int v110; // [rsp+2B0h] [rbp+1A8h]
  __int64 v111; // [rsp+2F0h] [rbp+1E8h]
  __int64 v112; // [rsp+2F8h] [rbp+1F0h]
  __int64 v113; // [rsp+300h] [rbp+1F8h]
  __int64 v114; // [rsp+308h] [rbp+200h]
  __int64 v115; // [rsp+310h] [rbp+208h]
  _WORD *v116; // [rsp+318h] [rbp+210h]
  _WORD *v117; // [rsp+320h] [rbp+218h]
  int v118; // [rsp+328h] [rbp+220h]
  unsigned __int64 v119; // [rsp+338h] [rbp+230h]
  __int64 v120; // [rsp+340h] [rbp+238h]
  __int64 v121; // [rsp+348h] [rbp+240h]
  __int64 v122; // [rsp+350h] [rbp+248h]

  v1 = 4LL;
  v2 = v88;
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
    v17 = v98;
    v18 = v89;
    v75 = v98;
    v19 = *(_QWORD *)(v98 + 32);
    v73 = v89;
    v72 = -1;
    v74 = (*(_WORD *)(v97 + 12) & 0xF) + (*(_WORD *)(v97 + 8) & 1);
    v85 = *(unsigned __int64 **)(v97 + 40);
    v119 = v19 + 4096;
    v120 = v91 + v19 + 4096;
    v84 = v91;
    v121 = v120 + v91;
    v122 = v121 + v91;
    v20 = (char *)(v91 + 3LL + v122 + v89 + 6LL);
    v76 = (char *)(v91 + 3LL + v122);
    v21 = &v20[v89 + 6];
    v77 = v20;
    LODWORD(v81) = v111 + 3;
    Src = v21;
    GetFixupScan((unsigned int *)v88, (__int64)v20);
    if ( (*(_BYTE *)(v17 + 8) & 1) != 0 )
      GetFixupScan((unsigned int *)v88, (__int64)v21);
    else
      memmove(v21, v20, v18);
    v22 = *(unsigned __int16 *)(v17 + 12);
    v23 = v22 & 0xF;
    v24 = v22 >> 4;
    v25 = v23 + v24;
    if ( v23 + v24 )
    {
      v26 = -1;
      v27 = v76;
      while ( 1 )
      {
        v28 = Src;
        ++v26;
        v76 = v20;
        v77 = Src;
        --v25;
        Src = v27;
        v29 = (_BYTE *)*(&v119 + (v26 & 3));
        v30 = v24--;
        if ( v30 <= 0 )
          GetFixupScan((unsigned int *)v88, (__int64)v27);
        else
          memmove(v27, v28, v18);
        v71 = (__int64)v27;
        v27 = v76;
        v81 = GraySharpenInput(v88[0], v81, (int)v76, (int)v77, v71, v18);
        GrayExpYDIB_ExpCX(v85, (unsigned __int8 *)(v81 + v74 - 1LL), v29, &v29[v84]);
        if ( !v25 )
          break;
        v20 = v77;
      }
      v72 = v26;
      v16 = v26;
      v17 = v75;
    }
    v31 = *(unsigned __int64 **)(v17 + 40);
    v32 = *(_DWORD *)(v17 + 16);
    while ( v32 )
    {
      v33 = *v31;
      v83 = v32 - 1;
      v87 = v31 + 1;
      v86 = HIWORD(*v31);
      v34 = HIDWORD(v33);
      v78 = HIDWORD(*v31);
      v35 = *v31 >> 16;
      v36 = v35;
      v37 = HIDWORD(v33);
      v38 = HIWORD(v33);
      v39 = v33 >> 16;
      v82 = HIDWORD(v33);
      if ( (v33 & 0x8000u) != 0LL )
      {
        LODWORD(v39) = (_DWORD)v77;
        v40 = (__int64)v76;
        v41 = (int)Src;
        v76 = v77;
        v77 = Src;
        Src = (char *)GetFixupScan((unsigned int *)v88, v40);
        v81 = GraySharpenInput(v88[0], v81, v39, v41, (__int64)Src, v73);
        v72 = v16 + 1;
        v42 = (_BYTE *)*(&v119 + (((_BYTE)v16 + 1) & 3));
        GrayExpYDIB_ExpCX(v85, (unsigned __int8 *)(v74 - 1LL + v81), v42, &v42[v84]);
        v36 = v35;
        LOWORD(v37) = v78;
        LOWORD(v33) = v33 & 0x3FFF;
        LOWORD(v38) = v86;
        LOWORD(v39) = v35;
        LOWORD(v82) = v34;
      }
      v43 = v116;
      v44 = v19;
      v45 = -(unsigned __int16)v33;
      v79 = v36;
      v46 = -v36;
      v47 = (unsigned __int16)v37;
      v48 = (unsigned __int16)v38;
      v49 = (unsigned int)-(unsigned __int16)v37;
      v50 = *(&v119 + (v72 & 3));
      v51 = 256 - (unsigned __int16)v38;
      v52 = (unsigned __int8 *)*(&v119 + (((_BYTE)v72 - 1) & 3));
      if ( (_WORD)v33 )
      {
        v53 = (_DWORD *)(v19 + 2048);
        do
        {
          v45 += (unsigned __int16)v33;
          v46 += v79;
          LODWORD(v49) = v47 + v49;
          *(v53 - 512) = v45;
          v51 += v48;
          *(v53 - 256) = v46;
          *v53 = v49;
          v53[256] = v51;
          ++v53;
        }
        while ( (unsigned __int64)(v53 - 512) < v19 + 1024 );
        v16 = v72;
        v54 = v50 - (_QWORD)v52;
        v55 = *(&v119 + (((_BYTE)v72 - 2) & 3)) - (_QWORD)v52;
        v56 = *(&v119 + (((_BYTE)v72 + 1) & 3)) - (_QWORD)v52;
        do
        {
          v49 = (unsigned int)v52[v54] + 768;
          v57 = *(_DWORD *)(v19 + 4LL * v52[v56])
              + *(_DWORD *)(v19 + 4LL * ((unsigned int)v52[v55] + 256))
              + *(_DWORD *)(v19 + 4 * v49);
          v58 = *v52++;
          v44 = (unsigned int)((*(_DWORD *)(v19 + 4LL * (unsigned int)(v58 + 512)) + v57) >> 5);
          *v43 = v44;
          v43 = (_WORD *)((char *)v43 + v118);
        }
        while ( v43 != v117 );
      }
      else if ( (_WORD)v39 )
      {
        v59 = (_DWORD *)(v19 + 2048);
        do
        {
          v46 += v79;
          LODWORD(v49) = v47 + v49;
          v51 += v48;
          *(v59 - 256) = v46;
          *v59 = v49;
          v59[256] = v51;
          ++v59;
        }
        while ( (unsigned __int64)(v59 - 512) < v19 + 1024 );
        v16 = v72;
        v60 = *(&v119 + (((_BYTE)v72 - 2) & 3)) - (_QWORD)v52;
        v61 = v50 - (_QWORD)v52;
        do
        {
          v49 = (unsigned int)v52[v61] + 768;
          v62 = *(_DWORD *)(v19 + 4LL * ((unsigned int)v52[v60] + 256)) + *(_DWORD *)(v19 + 4 * v49);
          v63 = *v52++;
          v44 = (unsigned int)((*(_DWORD *)(v19 + 4LL * (unsigned int)(v63 + 512)) + v62) >> 5);
          *v43 = v44;
          v43 = (_WORD *)((char *)v43 + v118);
        }
        while ( v43 != v117 );
      }
      else
      {
        if ( (_WORD)v82 )
        {
          v44 = v19 + 3072;
          do
          {
            v49 = (unsigned int)(v47 + v49);
            v51 += v48;
            *(_DWORD *)(v44 - 1024) = v49;
            *(_DWORD *)v44 = v51;
            v44 += 4LL;
          }
          while ( v44 - 3072 < v19 + 1024 );
          v52 -= v50;
          do
          {
            v64 = (unsigned int)v52[v50] + 512;
            v65 = (unsigned int)*(unsigned __int8 *)v50++ + 768;
            *v43 = (*(_DWORD *)(v19 + 4 * v65) + *(_DWORD *)(v19 + 4 * v64)) >> 5;
            v43 = (_WORD *)((char *)v43 + v118);
          }
          while ( v43 != v117 );
        }
        else
        {
          do
          {
            v51 += v48;
            *(_DWORD *)(v44 + 3072) = v51;
            v44 += 4LL;
          }
          while ( v44 < v19 + 1024 );
          do
          {
            v66 = *(unsigned __int8 *)v50++;
            *v43 = *(int *)(v19 + 4LL * (unsigned int)(v66 + 768)) >> 5;
            v43 = (_WORD *)((char *)v43 + v118);
          }
          while ( v43 != v117 );
        }
        v16 = v72;
      }
      v67 = v88[0];
      if ( SLOBYTE(v88[0]) < 0 )
      {
        v94(v88, v49, v44, v52);
        v67 = v88[0];
      }
      if ( (v67 & 0x800) != 0 )
      {
        AlphaBlendBGRF(v88);
        LOBYTE(v67) = v88[0];
      }
      if ( (v67 & 0x10) != 0 )
      {
        MappingBGRF(v112, v113, v100, v107);
        v68 = v110 + v107;
        if ( v68 == v108 )
          v68 = v109;
        v107 = v68;
      }
      v95(v88, v114, v115, v90, v99, v101, v101 + v105, v106, v96);
      v69 = v104 + v101;
      if ( v69 == v102 )
        v69 = v103;
      v90 += v93;
      v32 = v83;
      v101 = v69;
      v31 = v87;
    }
  }
  return v92;
}
