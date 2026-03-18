/*
 * XREFs of GrayExpandDIB_CY_ExpCX @ 0x1C0266FF0
 * Callers:
 *     <none>
 * Callees:
 *     GetFixupScan @ 0x1C003CB9C (GetFixupScan.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0166500 (memmove.c)
 *     AlphaBlendBGRF @ 0x1C02631F0 (AlphaBlendBGRF.c)
 *     GrayExpYDIB_ExpCX @ 0x1C02664F4 (GrayExpYDIB_ExpCX.c)
 *     GraySharpenInput @ 0x1C0267A30 (GraySharpenInput.c)
 *     MappingBGRF @ 0x1C02683C4 (MappingBGRF.c)
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
  int v16; // r12d
  __int64 v17; // r14
  size_t v18; // r13
  __int16 v19; // dx
  unsigned __int64 v20; // rdi
  int v21; // eax
  char *v22; // rbx
  char *v23; // rsi
  unsigned int v24; // ebx
  int v25; // eax
  int v26; // ebx
  int v27; // r15d
  char *v28; // r14
  char *v29; // rsi
  int v30; // edi
  int v31; // eax
  __int64 *v32; // rcx
  int v33; // eax
  unsigned __int16 v34; // si
  int v35; // r14d
  char *v36; // rdx
  int v37; // ebx
  _BYTE *v38; // r8
  unsigned __int64 v39; // r11
  _WORD *v40; // r9
  int v41; // ebx
  __int64 v42; // rdx
  int v43; // r14d
  __int64 v44; // r10
  int v45; // ecx
  unsigned __int8 *v46; // r8
  _DWORD *v47; // r11
  __int64 v48; // r10
  unsigned __int64 v49; // r11
  unsigned __int64 v50; // rbx
  int v51; // edx
  __int64 v52; // rax
  _DWORD *v53; // r11
  unsigned __int64 v54; // r11
  __int64 v55; // r10
  __int64 v56; // rcx
  int v57; // edx
  __int64 v58; // rax
  int *v59; // r11
  __int64 v60; // rax
  __int64 v61; // rcx
  __int64 v62; // rax
  __int16 v63; // ax
  __int64 v64; // rax
  __int64 v65; // rcx
  __int64 v67; // [rsp+28h] [rbp-E0h]
  int v68; // [rsp+58h] [rbp-B0h]
  unsigned __int64 v69; // [rsp+60h] [rbp-A8h]
  __int64 v70; // [rsp+60h] [rbp-A8h]
  char *v71; // [rsp+68h] [rbp-A0h]
  char *v72; // [rsp+68h] [rbp-A0h]
  int v73; // [rsp+70h] [rbp-98h]
  int v74; // [rsp+74h] [rbp-94h]
  char *v75; // [rsp+80h] [rbp-88h]
  char *Src; // [rsp+88h] [rbp-80h]
  __int64 v77; // [rsp+90h] [rbp-78h]
  __int64 v78; // [rsp+A0h] [rbp-68h]
  int v79; // [rsp+A0h] [rbp-68h]
  __int64 v80; // [rsp+A8h] [rbp-60h]
  unsigned __int64 *v81; // [rsp+B0h] [rbp-58h]
  unsigned __int64 v82; // [rsp+B8h] [rbp-50h]
  __int64 *v83; // [rsp+C0h] [rbp-48h]
  int v84[14]; // [rsp+C8h] [rbp-40h] BYREF
  int v85; // [rsp+100h] [rbp-8h]
  __int64 v86; // [rsp+150h] [rbp+48h]
  int v87; // [rsp+158h] [rbp+50h]
  unsigned int v88; // [rsp+15Ch] [rbp+54h]
  int v89; // [rsp+164h] [rbp+5Ch]
  void (__fastcall *v90)(int *, __int64, unsigned __int8 *); // [rsp+188h] [rbp+80h]
  void (__fastcall *v91)(int *, __int64, __int64, __int64, __int64, __int64, __int64, int, __int64); // [rsp+1D8h] [rbp+D0h]
  __int64 v92; // [rsp+1E0h] [rbp+D8h]
  __int64 v93; // [rsp+1F8h] [rbp+F0h]
  __int64 v94; // [rsp+200h] [rbp+F8h]
  __int64 v95; // [rsp+248h] [rbp+140h]
  __int64 v96; // [rsp+250h] [rbp+148h]
  __int64 v97; // [rsp+260h] [rbp+158h]
  __int64 v98; // [rsp+268h] [rbp+160h]
  __int64 v99; // [rsp+270h] [rbp+168h]
  int v100; // [rsp+278h] [rbp+170h]
  int v101; // [rsp+27Ch] [rbp+174h]
  int v102; // [rsp+280h] [rbp+178h]
  __int64 v103; // [rsp+288h] [rbp+180h]
  __int64 v104; // [rsp+290h] [rbp+188h]
  __int64 v105; // [rsp+298h] [rbp+190h]
  int v106; // [rsp+2A0h] [rbp+198h]
  __int64 v107; // [rsp+2E0h] [rbp+1D8h]
  __int64 v108; // [rsp+2E8h] [rbp+1E0h]
  __int64 v109; // [rsp+2F0h] [rbp+1E8h]
  __int64 v110; // [rsp+2F8h] [rbp+1F0h]
  __int64 v111; // [rsp+300h] [rbp+1F8h]
  _WORD *v112; // [rsp+308h] [rbp+200h]
  _WORD *v113; // [rsp+310h] [rbp+208h]
  int v114; // [rsp+318h] [rbp+210h]
  unsigned __int64 v115; // [rsp+328h] [rbp+220h]
  __int64 v116; // [rsp+330h] [rbp+228h]
  __int64 v117; // [rsp+338h] [rbp+230h]
  __int64 v118; // [rsp+340h] [rbp+238h]

  v1 = 4LL;
  v2 = v84;
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
    v17 = v94;
    v18 = v85;
    v78 = v94;
    v19 = *(_WORD *)(v93 + 12);
    v20 = *(_QWORD *)(v94 + 32);
    v21 = *(_WORD *)(v93 + 8) & 1;
    v69 = v20;
    v73 = v85;
    v68 = -1;
    v81 = *(unsigned __int64 **)(v93 + 40);
    v82 = v20 + 1024;
    v115 = v20 + 4096;
    v74 = v21 + (v19 & 0xF);
    v80 = v87;
    v116 = v87 + v20 + 4096;
    v117 = v116 + v87;
    v118 = v117 + v87;
    v22 = (char *)(v87 + 3LL + v118 + v85 + 6LL);
    v75 = (char *)(v87 + 3LL + v118);
    v23 = &v22[v85 + 6];
    v71 = v22;
    LODWORD(v77) = v107 + 3;
    Src = v23;
    GetFixupScan((__int64)v84, v22);
    if ( (*(_BYTE *)(v17 + 8) & 1) != 0 )
      GetFixupScan((__int64)v84, v23);
    else
      memmove(v23, v22, v18);
    v24 = *(unsigned __int16 *)(v17 + 12);
    v25 = v24 & 0xF;
    v26 = v24 >> 4;
    v27 = v25 + v26;
    if ( v25 + v26 )
    {
      v28 = v71;
      v29 = v75;
      v30 = -1;
      do
      {
        ++v30;
        v75 = v28;
        v28 = Src;
        Src = v29;
        --v27;
        v31 = v26--;
        v72 = (char *)*(&v115 + (v30 & 3));
        if ( v31 <= 0 )
          GetFixupScan((__int64)v84, v29);
        else
          memmove(v29, v28, v18);
        v67 = (__int64)v29;
        v29 = v75;
        v77 = GraySharpenInput(v84[0], v77, (int)v75, (int)v28, v67, v18);
        GrayExpYDIB_ExpCX(v81, (unsigned __int8 *)(v74 - 1LL + v77), v72, &v72[v80]);
      }
      while ( v27 );
      v68 = v30;
      v16 = v30;
      v20 = v69;
      v71 = v28;
      v17 = v78;
    }
    v32 = *(__int64 **)(v17 + 40);
    v33 = *(_DWORD *)(v17 + 16);
    while ( v33 )
    {
      v79 = v33 - 1;
      v34 = *v32;
      v70 = *v32;
      v83 = v32 + 1;
      if ( (v34 & 0x8000u) != 0 )
      {
        v35 = (int)v71;
        v36 = v75;
        v37 = (int)Src;
        v75 = v71;
        v71 = Src;
        Src = (char *)GetFixupScan((__int64)v84, v36);
        v77 = GraySharpenInput(v84[0], v77, v35, v37, (__int64)Src, v73);
        v68 = v16 + 1;
        v38 = (_BYTE *)*(&v115 + (((_BYTE)v16 + 1) & 3));
        GrayExpYDIB_ExpCX(v81, (unsigned __int8 *)(v74 - 1LL + v77), v38, &v38[v80]);
        v34 &= 0x3FFFu;
      }
      v39 = v20;
      v40 = v112;
      v41 = -WORD1(v70);
      v42 = (unsigned int)-WORD2(v70);
      v43 = -v34;
      v44 = *(&v115 + (v68 & 3));
      v45 = 256 - HIWORD(v70);
      v46 = (unsigned __int8 *)*(&v115 + (((_BYTE)v68 - 1) & 3));
      if ( v34 )
      {
        v47 = (_DWORD *)(v20 + 2048);
        do
        {
          v43 += v34;
          v41 += WORD1(v70);
          LODWORD(v42) = WORD2(v70) + (_DWORD)v42;
          *(v47 - 512) = v43;
          v45 += HIWORD(v70);
          *(v47 - 256) = v41;
          *v47 = v42;
          v47[256] = v45;
          ++v47;
        }
        while ( (unsigned __int64)(v47 - 512) < v82 );
        v16 = v68;
        v48 = v44 - (_QWORD)v46;
        v49 = *(&v115 + (((_BYTE)v68 - 2) & 3)) - (_QWORD)v46;
        v50 = *(&v115 + (((_BYTE)v68 + 1) & 3)) - (_QWORD)v46;
        do
        {
          v51 = *(_DWORD *)(v20 + 4LL * v46[v50])
              + *(_DWORD *)(v20 + 4LL * v46[v49] + 1024)
              + *(_DWORD *)(v20 + 4LL * v46[v48] + 3072);
          v52 = *v46++;
          v42 = (unsigned int)((*(_DWORD *)(v20 + 4 * v52 + 2048) + v51) >> 5);
          *v40 = v42;
          v40 = (_WORD *)((char *)v40 + v114);
        }
        while ( v40 != v113 );
      }
      else if ( WORD1(v70) )
      {
        v53 = (_DWORD *)(v20 + 2048);
        do
        {
          v41 += WORD1(v70);
          LODWORD(v42) = WORD2(v70) + (_DWORD)v42;
          v45 += HIWORD(v70);
          *(v53 - 256) = v41;
          *v53 = v42;
          v53[256] = v45;
          ++v53;
        }
        while ( (unsigned __int64)(v53 - 512) < v20 + 1024 );
        v16 = v68;
        v54 = *(&v115 + (((_BYTE)v68 - 2) & 3)) - (_QWORD)v46;
        v55 = v44 - (_QWORD)v46;
        do
        {
          v56 = v46[v54];
          v57 = *(_DWORD *)(v20 + 4LL * v46[v55] + 3072);
          v58 = *v46++;
          v42 = (unsigned int)((*(_DWORD *)(v20 + 4 * v58 + 2048) + *(_DWORD *)(v20 + 4 * v56 + 1024) + v57) >> 5);
          *v40 = v42;
          v40 = (_WORD *)((char *)v40 + v114);
        }
        while ( v40 != v113 );
      }
      else
      {
        if ( WORD2(v70) )
        {
          v59 = (int *)(v20 + 3072);
          do
          {
            LODWORD(v42) = WORD2(v70) + (_DWORD)v42;
            v45 += HIWORD(v70);
            *(v59 - 256) = v42;
            *v59++ = v45;
          }
          while ( (unsigned __int64)(v59 - 768) < v20 + 1024 );
          v46 -= v44;
          do
          {
            v60 = v46[v44];
            v61 = *(unsigned __int8 *)v44++;
            v42 = (unsigned int)((*(_DWORD *)(v20 + 4 * v61 + 3072) + *(_DWORD *)(v20 + 4 * v60 + 2048)) >> 5);
            *v40 = v42;
            v40 = (_WORD *)((char *)v40 + v114);
          }
          while ( v40 != v113 );
        }
        else
        {
          do
          {
            v45 += HIWORD(v70);
            *(_DWORD *)(v39 + 3072) = v45;
            v39 += 4LL;
          }
          while ( v39 < v20 + 1024 );
          do
          {
            v62 = *(unsigned __int8 *)v44++;
            *v40 = *(int *)(v20 + 4 * v62 + 3072) >> 5;
            v40 = (_WORD *)((char *)v40 + v114);
          }
          while ( v40 != v113 );
        }
        v16 = v68;
      }
      v63 = v84[0];
      if ( SLOBYTE(v84[0]) < 0 )
      {
        v90(v84, v42, v46);
        v63 = v84[0];
      }
      if ( (v63 & 0x800) != 0 )
      {
        AlphaBlendBGRF(v84);
        LOBYTE(v63) = v84[0];
      }
      if ( (v63 & 0x10) != 0 )
      {
        MappingBGRF(v108, v109, v96, v103);
        v64 = v106 + v103;
        if ( v64 == v104 )
          v64 = v105;
        v103 = v64;
      }
      v91(v84, v110, v111, v86, v95, v97, v97 + v101, v102, v92);
      v65 = v100 + v97;
      if ( v65 == v98 )
        v65 = v99;
      v86 += v89;
      v33 = v79;
      v97 = v65;
      v32 = v83;
    }
  }
  return v88;
}
