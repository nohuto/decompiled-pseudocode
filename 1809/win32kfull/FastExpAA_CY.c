/*
 * XREFs of FastExpAA_CY @ 0x1C0139300
 * Callers:
 *     <none>
 * Callees:
 *     GetFixupScan @ 0x1C0008FDC (GetFixupScan.c)
 *     Do13 @ 0x1C0139780 (Do13.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0163300 (memmove.c)
 *     AlphaBlendBGRF @ 0x1C024A3E0 (AlphaBlendBGRF.c)
 *     Do1141 @ 0x1C024AA18 (Do1141.c)
 *     Do1319 @ 0x1C024AB34 (Do1319.c)
 *     Do3121 @ 0x1C024AC08 (Do3121.c)
 *     Do3263 @ 0x1C024AD0C (Do3263.c)
 *     Do35 @ 0x1C024AE3C (Do35.c)
 *     Do5225 @ 0x1C024AF34 (Do5225.c)
 *     Do6251 @ 0x1C024B088 (Do6251.c)
 *     MappingBGRF @ 0x1C024E8D4 (MappingBGRF.c)
 */

__int64 __fastcall FastExpAA_CY(__int64 a1)
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
  __int64 v17; // r8
  unsigned __int64 (__fastcall *v18)(__int16, unsigned __int64, __int64, unsigned __int64, __int64, int); // r13
  int v19; // r11d
  __int64 v20; // r9
  __int64 v21; // r10
  __int64 v22; // rdx
  __int64 v23; // r9
  unsigned __int16 *v24; // rsi
  unsigned int v25; // edi
  char *v26; // r15
  __int64 v27; // rdx
  unsigned int v28; // r14d
  char *v29; // rcx
  char *v30; // rax
  char *v31; // rbx
  __int64 (__fastcall *v32)(int, int, int, int, int); // rcx
  int v33; // ebx
  __int64 i; // rcx
  char *v35; // r12
  bool v36; // sf
  int v37; // ecx
  int v38; // edx
  int v39; // r13d
  char *v40; // rdi
  char *v41; // rsi
  unsigned int v42; // eax
  char *v43; // rdx
  size_t v44; // rbx
  __int64 v45; // rdx
  __int16 v46; // ax
  __int64 v47; // rcx
  char *v49; // rdx
  int v50; // r9d
  int v51; // edx
  char *v52; // rdx
  char *v53; // r8
  char *v54; // rcx
  int v55; // r9d
  int v56; // edx
  __int64 v57; // rax
  char v58; // [rsp+58h] [rbp-B0h]
  int v59; // [rsp+5Ch] [rbp-ACh]
  int v60; // [rsp+60h] [rbp-A8h]
  int v61; // [rsp+64h] [rbp-A4h]
  __int64 v62; // [rsp+68h] [rbp-A0h]
  __int64 v63; // [rsp+70h] [rbp-98h]
  __int64 v64; // [rsp+78h] [rbp-90h]
  __int64 (__fastcall *v65)(int, int, int, int, int); // [rsp+80h] [rbp-88h]
  unsigned __int16 *v66; // [rsp+88h] [rbp-80h]
  unsigned __int64 (__fastcall *v67)(__int16, unsigned __int64, __int64, unsigned __int64, __int64, int); // [rsp+90h] [rbp-78h]
  char *v69; // [rsp+A0h] [rbp-68h]
  char *v70; // [rsp+A8h] [rbp-60h]
  unsigned __int64 v71; // [rsp+B0h] [rbp-58h]
  unsigned __int64 v72; // [rsp+B8h] [rbp-50h]
  char *v73; // [rsp+C0h] [rbp-48h]
  int v74; // [rsp+D8h] [rbp-30h] BYREF
  char v75; // [rsp+E0h] [rbp-28h]
  unsigned int v76; // [rsp+118h] [rbp+10h]
  __int64 v77; // [rsp+160h] [rbp+58h]
  unsigned int v78; // [rsp+16Ch] [rbp+64h]
  int v79; // [rsp+174h] [rbp+6Ch]
  void (__fastcall *v80)(int *); // [rsp+198h] [rbp+90h]
  void (__fastcall *v81)(int *, __int64, __int64, __int64, __int64, __int64, __int64, int, __int64); // [rsp+1E8h] [rbp+E0h]
  __int64 v82; // [rsp+1F0h] [rbp+E8h]
  __int64 v83; // [rsp+208h] [rbp+100h]
  __int64 v84; // [rsp+210h] [rbp+108h]
  __int64 v85; // [rsp+258h] [rbp+150h]
  __int64 v86; // [rsp+260h] [rbp+158h]
  __int64 v87; // [rsp+270h] [rbp+168h]
  __int64 v88; // [rsp+278h] [rbp+170h]
  __int64 v89; // [rsp+280h] [rbp+178h]
  int v90; // [rsp+288h] [rbp+180h]
  int v91; // [rsp+28Ch] [rbp+184h]
  int v92; // [rsp+290h] [rbp+188h]
  __int64 v93; // [rsp+298h] [rbp+190h]
  __int64 v94; // [rsp+2A0h] [rbp+198h]
  __int64 v95; // [rsp+2A8h] [rbp+1A0h]
  int v96; // [rsp+2B0h] [rbp+1A8h]
  void *Src; // [rsp+2F0h] [rbp+1E8h]
  __int64 v98; // [rsp+2F8h] [rbp+1F0h]
  __int64 v99; // [rsp+300h] [rbp+1F8h]
  __int64 v100; // [rsp+308h] [rbp+200h]
  __int64 v101; // [rsp+310h] [rbp+208h]
  __int64 v102; // [rsp+318h] [rbp+210h]
  __int64 v103; // [rsp+320h] [rbp+218h]
  int v104; // [rsp+328h] [rbp+220h]

  v1 = 4LL;
  v3 = (_OWORD *)a1;
  v4 = &v74;
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
  if ( *(_QWORD *)(a1 + 536) )
  {
    v17 = v83;
    v18 = (unsigned __int64 (__fastcall *)(__int16, unsigned __int64, __int64, unsigned __int64, __int64, int))GraySharpenInput;
    v19 = v104;
    v20 = v102;
    v21 = v103;
    v22 = *(_QWORD *)(v83 + 96);
    v60 = v104;
    **(_WORD **)(v83 + 88) += *(unsigned __int8 *)(v83 + 82);
    *(_WORD *)(v22 - 2) += *(unsigned __int8 *)(v17 + 83);
    v64 = v20 - v19 * *(unsigned __int8 *)(v17 + 82);
    v23 = v84;
    v62 = v84;
    v24 = *(unsigned __int16 **)(v84 + 88);
    v63 = v19 * *(unsigned __int8 *)(v17 + 83) + v21;
    *(_WORD *)(*(_QWORD *)(v84 + 96) - 2LL) += *(unsigned __int8 *)(v84 + 83);
    v25 = *(unsigned __int8 *)(v23 + 80);
    v58 = v75 & 4;
    v26 = (char *)(*(_QWORD *)(v23 + 32) + (-(__int64)((v75 & 4) != 0) & 0xFFFFFFFFFFFFFFFAuLL) + 9);
    v69 = v26;
    v27 = (int)(((v75 & 4) != 0 ? 6 : 18) + v76);
    v28 = v76;
    v29 = &v26[v27 + v27];
    v70 = &v26[v27];
    v30 = &v29[v27];
    v71 = (unsigned __int64)v29;
    v31 = &v29[v27 + v27];
    v72 = (unsigned __int64)&v29[v27];
    v73 = v31;
    v32 = GrayFastExpAA_CX;
    if ( (v75 & 4) == 0 )
      v32 = (__int64 (__fastcall *)(int, int, int, int, int))FastExpAA_CX;
    v65 = v32;
    if ( (v75 & 4) == 0 )
      v18 = SharpenInput;
    v67 = v18;
    GetFixupScan((__int64)&v74, v30);
    if ( !v25 )
      v74 |= 0x20u;
    GetFixupScan((__int64)&v74, v31);
    if ( v25 < 2 )
      v74 |= 0x20u;
    Src = (char *)Src + 9;
    v33 = -3;
    while ( 1 )
    {
      for ( i = 0LL; i < 4; ++i )
        (&v69)[i] = (&v70)[i];
      v73 = v26;
      GetFixupScan((__int64)&v74, v26);
      v35 = (char *)v71;
      v18(0, v71, v71, v72, (__int64)v26, v28);
      v26 = v69;
      v36 = ++v33 < 0;
      v61 = v33;
      if ( !v36 )
      {
        v37 = *v24++;
        v59 = v37;
        v38 = v37;
        v66 = v24;
        v39 = v37;
        if ( !v33 )
        {
          v38 = *(unsigned __int8 *)(v62 + 82) + v37;
          v59 = v38;
        }
        v40 = (char *)Src;
        if ( v37 )
          break;
      }
      v42 = v78;
LABEL_35:
      v18 = v67;
      if ( !v42 )
        return *(unsigned int *)(a1 + 148);
    }
    v41 = v70;
    v42 = v78;
    while ( 1 )
    {
      --v39;
      if ( !v42 )
        return *(unsigned int *)(a1 + 148);
      switch ( v38 )
      {
        case 1:
          Do5225((_DWORD)v40, (_DWORD)v26, (_DWORD)v41, (_DWORD)v35, v28);
          break;
        case 2:
          v43 = v35;
          if ( v39 == 1 )
            v43 = v26;
          Do13(v40, v43, v41, v28);
          break;
        case 3:
          v53 = v41;
          v54 = v40;
          if ( v39 != 1 )
          {
            v52 = v35;
            if ( v39 == 2 )
              v52 = v26;
            goto LABEL_68;
          }
          Do1141((_DWORD)v40, (_DWORD)v26, (_DWORD)v41, (_DWORD)v35, v28);
          break;
        case 4:
          switch ( v39 )
          {
            case 0:
              v52 = v35;
              goto LABEL_60;
            case 1:
              v55 = (int)v26;
              v56 = (int)v35;
              goto LABEL_63;
            case 2:
              v55 = (int)v35;
              v56 = (int)v26;
LABEL_63:
              Do3121((_DWORD)v40, v56, (_DWORD)v41, v55, v28);
              goto LABEL_26;
            case 3:
              v52 = v26;
LABEL_60:
              v53 = v41;
              v54 = v40;
LABEL_68:
              Do35(v54, v52, v53, v28);
              break;
          }
          break;
        case 5:
          switch ( v39 )
          {
            case 0:
              v49 = v35;
              goto LABEL_53;
            case 1:
              v50 = (int)v26;
              v51 = (int)v35;
              goto LABEL_50;
            case 2:
              Do3263((_DWORD)v40, (_DWORD)v26, (_DWORD)v41, (_DWORD)v35, v28);
              goto LABEL_26;
            case 3:
              v50 = (int)v35;
              v51 = (int)v26;
LABEL_50:
              Do6251((_DWORD)v40, v51, (_DWORD)v41, v50, v28);
              goto LABEL_26;
            case 4:
              v49 = v26;
LABEL_53:
              Do1319(v40, v49, v41, v28);
              break;
          }
          break;
      }
LABEL_26:
      v44 = (-(__int64)(v58 != 0) & 0xFFFFFFFFFFFFFFFEuLL) + 3;
      memmove(&v40[-v44], v40, v44);
      memmove(&v40[v28], &v40[(int)v28 - v44], v44);
      v65(v83, (int)v40, v64, v63, v60);
      v46 = v74;
      if ( (v74 & 0x80u) != 0 )
      {
        v80(&v74);
        v46 = v74;
      }
      if ( (v46 & 0x800) != 0 )
      {
        AlphaBlendBGRF(&v74, v45);
        LOBYTE(v46) = v74;
      }
      if ( (v46 & 0x10) != 0 )
      {
        MappingBGRF(v98, v99, v86, v93);
        v57 = v96 + v93;
        if ( v57 == v94 )
          v57 = v95;
        v93 = v57;
      }
      v81(&v74, v100, v101, v77, v85, v87, v87 + v91, v92, v82);
      v38 = v59;
      v47 = v90 + v87;
      if ( v47 == v88 )
        v47 = v89;
      v77 += v79;
      v42 = v78 - 1;
      v87 = v47;
      --v78;
      if ( !v39 )
      {
        v33 = v61;
        v24 = v66;
        goto LABEL_35;
      }
    }
  }
  return v78;
}
