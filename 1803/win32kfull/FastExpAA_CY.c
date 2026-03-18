/*
 * XREFs of FastExpAA_CY @ 0x1C0115180
 * Callers:
 *     <none>
 * Callees:
 *     GetFixupScan @ 0x1C00D5270 (GetFixupScan.c)
 *     Do13 @ 0x1C0115820 (Do13.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C013D380 (memmove.c)
 *     AlphaBlendBGRF @ 0x1C0234D70 (AlphaBlendBGRF.c)
 *     Do1141 @ 0x1C02353B4 (Do1141.c)
 *     Do1319 @ 0x1C02354D0 (Do1319.c)
 *     Do3121 @ 0x1C02355A4 (Do3121.c)
 *     Do3263 @ 0x1C02356A8 (Do3263.c)
 *     Do35 @ 0x1C02357D8 (Do35.c)
 *     Do5225 @ 0x1C02358D0 (Do5225.c)
 *     Do6251 @ 0x1C0235A24 (Do6251.c)
 *     MappingBGRF @ 0x1C0239330 (MappingBGRF.c)
 */

__int64 __fastcall FastExpAA_CY(__int64 a1)
{
  __int64 v1; // rdx
  _OWORD *v3; // rax
  unsigned int *v4; // rcx
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
  __int64 (__fastcall *v18)(int, int, int, int, __int64, int); // r13
  int v19; // r11d
  __int64 v20; // r9
  __int64 v21; // r10
  __int64 v22; // rdx
  __int64 v23; // r9
  int v24; // eax
  __int64 v25; // r11
  unsigned __int16 *v26; // rsi
  int v27; // ebx
  __int64 v28; // r15
  __int64 v29; // r8
  unsigned int v30; // r14d
  __int64 v31; // rdx
  __int64 v32; // rdi
  __int64 (__fastcall *v33)(int, int, int, int, int); // rax
  int v34; // ebx
  int v35; // ebx
  __int64 i; // rcx
  __int64 v37; // r12
  int v38; // ecx
  int v39; // edx
  int v40; // r13d
  char *v41; // rdi
  __int64 v42; // rsi
  unsigned int v43; // eax
  __int64 v44; // rdx
  __int16 v45; // ax
  __int64 v46; // rcx
  __int64 v48; // rdx
  int v49; // r9d
  int v50; // edx
  __int64 v51; // rdx
  __int64 v52; // r8
  char *v53; // rcx
  int v54; // r9d
  int v55; // edx
  __int64 v56; // rax
  int v57; // [rsp+58h] [rbp-B0h]
  unsigned int Size; // [rsp+5Ch] [rbp-ACh]
  int Size_4; // [rsp+60h] [rbp-A8h]
  __int64 v60; // [rsp+68h] [rbp-A0h]
  __int64 v61; // [rsp+70h] [rbp-98h]
  __int64 v62; // [rsp+78h] [rbp-90h]
  __int64 (__fastcall *v63)(int, int, int, int, int); // [rsp+80h] [rbp-88h]
  unsigned __int16 *v64; // [rsp+88h] [rbp-80h]
  __int64 (__fastcall *v65)(int, int, int, int, __int64, int); // [rsp+90h] [rbp-78h]
  __int64 v67; // [rsp+A0h] [rbp-68h]
  __int64 v68; // [rsp+A8h] [rbp-60h]
  __int64 v69; // [rsp+B0h] [rbp-58h]
  __int64 v70; // [rsp+B8h] [rbp-50h]
  __int64 v71; // [rsp+C0h] [rbp-48h]
  unsigned int v72; // [rsp+D8h] [rbp-30h] BYREF
  char v73; // [rsp+E0h] [rbp-28h]
  unsigned int v74; // [rsp+118h] [rbp+10h]
  __int64 v75; // [rsp+160h] [rbp+58h]
  unsigned int v76; // [rsp+16Ch] [rbp+64h]
  int v77; // [rsp+174h] [rbp+6Ch]
  void (__fastcall *v78)(unsigned int *); // [rsp+198h] [rbp+90h]
  void (__fastcall *v79)(unsigned int *, __int64, __int64, __int64, __int64, __int64, __int64, int, __int64); // [rsp+1E8h] [rbp+E0h]
  __int64 v80; // [rsp+1F0h] [rbp+E8h]
  __int64 v81; // [rsp+208h] [rbp+100h]
  __int64 v82; // [rsp+210h] [rbp+108h]
  __int64 v83; // [rsp+258h] [rbp+150h]
  __int64 v84; // [rsp+260h] [rbp+158h]
  __int64 v85; // [rsp+270h] [rbp+168h]
  __int64 v86; // [rsp+278h] [rbp+170h]
  __int64 v87; // [rsp+280h] [rbp+178h]
  int v88; // [rsp+288h] [rbp+180h]
  int v89; // [rsp+28Ch] [rbp+184h]
  int v90; // [rsp+290h] [rbp+188h]
  __int64 v91; // [rsp+298h] [rbp+190h]
  __int64 v92; // [rsp+2A0h] [rbp+198h]
  __int64 v93; // [rsp+2A8h] [rbp+1A0h]
  int v94; // [rsp+2B0h] [rbp+1A8h]
  void *Src; // [rsp+2F0h] [rbp+1E8h]
  __int64 v96; // [rsp+2F8h] [rbp+1F0h]
  __int64 v97; // [rsp+300h] [rbp+1F8h]
  __int64 v98; // [rsp+308h] [rbp+200h]
  __int64 v99; // [rsp+310h] [rbp+208h]
  __int64 v100; // [rsp+318h] [rbp+210h]
  __int64 v101; // [rsp+320h] [rbp+218h]
  int v102; // [rsp+328h] [rbp+220h]

  v1 = 4LL;
  v3 = (_OWORD *)a1;
  v4 = &v72;
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
    v17 = v81;
    v18 = GraySharpenInput;
    v19 = v102;
    v20 = v100;
    v21 = v101;
    v22 = *(_QWORD *)(v81 + 96);
    Size_4 = v102;
    **(_WORD **)(v81 + 88) += *(unsigned __int8 *)(v81 + 82);
    *(_WORD *)(v22 - 2) += *(unsigned __int8 *)(v17 + 83);
    v23 = v20 - v19 * *(unsigned __int8 *)(v17 + 82);
    v24 = v19 * *(unsigned __int8 *)(v17 + 83);
    v25 = v82;
    v62 = v23;
    v60 = v82;
    v26 = *(unsigned __int16 **)(v82 + 88);
    *(_WORD *)(*(_QWORD *)(v82 + 96) - 2LL) += *(unsigned __int8 *)(v82 + 83);
    v27 = *(unsigned __int8 *)(v25 + 80);
    v61 = v24 + v21;
    Size = (v73 & 4) != 0 ? 1 : 3;
    v28 = *(_QWORD *)(v25 + 32) + 3 * Size;
    v29 = (int)(6 * Size + v74);
    v30 = v74;
    v67 = v28;
    v68 = v28 + v29;
    v31 = v29 + v29 + v28 + v29;
    v69 = v29 + v28 + v29;
    v70 = v31;
    v32 = v29 + v31;
    v33 = GrayFastExpAA_CX;
    v71 = v29 + v31;
    if ( (v73 & 4) == 0 )
      v33 = FastExpAA_CX;
    v63 = v33;
    if ( (v73 & 4) == 0 )
      v18 = SharpenInput;
    v65 = v18;
    GetFixupScan(&v72, v31);
    v34 = v27 - 1;
    if ( v34 < 0 )
      v72 |= 0x20u;
    GetFixupScan(&v72, v32);
    if ( v34 - 1 < 0 )
      v72 |= 0x20u;
    Src = (char *)Src + 9;
    v35 = -3;
    while ( 1 )
    {
      for ( i = 0LL; i < 4; ++i )
        *(&v67 + i) = *(&v68 + i);
      v71 = v28;
      GetFixupScan(&v72, v28);
      v37 = v69;
      v18(0, v69, v69, v70, v28, v30);
      v28 = v67;
      if ( ++v35 >= 0 )
      {
        v38 = *v26++;
        v57 = v38;
        v39 = v38;
        v64 = v26;
        v40 = v38;
        if ( !v35 )
        {
          v39 = *(unsigned __int8 *)(v60 + 82) + v38;
          v57 = v39;
        }
        v41 = (char *)Src;
        if ( v38 )
          break;
      }
      v43 = v76;
LABEL_35:
      v18 = v65;
      if ( !v43 )
        return *(unsigned int *)(a1 + 148);
    }
    v42 = v68;
    v43 = v76;
    while ( 1 )
    {
      --v40;
      if ( !v43 )
        return *(unsigned int *)(a1 + 148);
      switch ( v39 )
      {
        case 1:
          Do5225((_DWORD)v41, v28, v42, v37, v30);
          break;
        case 2:
          v44 = v37;
          if ( v40 == 1 )
            v44 = v28;
          Do13(v41, v44, v42, v30);
          break;
        case 3:
          v52 = v42;
          v53 = v41;
          if ( v40 != 1 )
          {
            v51 = v37;
            if ( v40 == 2 )
              v51 = v28;
            goto LABEL_68;
          }
          Do1141((_DWORD)v41, v28, v42, v37, v30);
          break;
        case 4:
          switch ( v40 )
          {
            case 0:
              v51 = v37;
              goto LABEL_60;
            case 1:
              v54 = v28;
              v55 = v37;
              goto LABEL_63;
            case 2:
              v54 = v37;
              v55 = v28;
LABEL_63:
              Do3121((_DWORD)v41, v55, v42, v54, v30);
              goto LABEL_26;
            case 3:
              v51 = v28;
LABEL_60:
              v52 = v42;
              v53 = v41;
LABEL_68:
              Do35(v53, v51, v52, v30);
              break;
          }
          break;
        case 5:
          switch ( v40 )
          {
            case 0:
              v48 = v37;
              goto LABEL_53;
            case 1:
              v49 = v28;
              v50 = v37;
              goto LABEL_50;
            case 2:
              Do3263((_DWORD)v41, v28, v42, v37, v30);
              goto LABEL_26;
            case 3:
              v49 = v37;
              v50 = v28;
LABEL_50:
              Do6251((_DWORD)v41, v50, v42, v49, v30);
              goto LABEL_26;
            case 4:
              v48 = v28;
LABEL_53:
              Do1319(v41, v48, v42, v30);
              break;
          }
          break;
      }
LABEL_26:
      memmove(&v41[-Size], v41, Size);
      memmove(&v41[v30], &v41[(int)v30 - (unsigned __int64)Size], Size);
      v63(v81, (int)v41, v62, v61, Size_4);
      v45 = v72;
      if ( (v72 & 0x80u) != 0 )
      {
        v78(&v72);
        v45 = v72;
      }
      if ( (v45 & 0x800) != 0 )
      {
        AlphaBlendBGRF(&v72);
        LOBYTE(v45) = v72;
      }
      if ( (v45 & 0x10) != 0 )
      {
        MappingBGRF(v96, v97, v84, v91);
        v56 = v94 + v91;
        if ( v56 == v92 )
          v56 = v93;
        v91 = v56;
      }
      v79(&v72, v98, v99, v75, v83, v85, v85 + v89, v90, v80);
      v39 = v57;
      v46 = v88 + v85;
      if ( v46 == v86 )
        v46 = v87;
      v75 += v77;
      v43 = v76 - 1;
      v85 = v46;
      --v76;
      if ( !v40 )
      {
        v26 = v64;
        goto LABEL_35;
      }
    }
  }
  return v76;
}
