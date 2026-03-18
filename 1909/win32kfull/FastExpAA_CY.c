/*
 * XREFs of FastExpAA_CY @ 0x1C02657A0
 * Callers:
 *     <none>
 * Callees:
 *     GetFixupScan @ 0x1C0080D9C (GetFixupScan.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01680F0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0168100 (memmove.c)
 *     AlphaBlendBGRF @ 0x1C0262AC0 (AlphaBlendBGRF.c)
 *     Do1141 @ 0x1C02630F8 (Do1141.c)
 *     Do13 @ 0x1C0263214 (Do13.c)
 *     Do1319 @ 0x1C02632D8 (Do1319.c)
 *     Do3121 @ 0x1C02633AC (Do3121.c)
 *     Do3263 @ 0x1C02634B0 (Do3263.c)
 *     Do35 @ 0x1C02635E0 (Do35.c)
 *     Do5225 @ 0x1C02636D8 (Do5225.c)
 *     Do6251 @ 0x1C026382C (Do6251.c)
 *     MappingBGRF @ 0x1C0267C94 (MappingBGRF.c)
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
  __int64 v18; // r8
  __int64 (__fastcall *v19)(int, int, int, int, __int64, int); // r13
  int v20; // r11d
  __int64 v21; // r9
  __int64 v22; // r10
  __int64 v23; // rdx
  __int64 v24; // r9
  unsigned __int16 *v25; // rsi
  unsigned int v26; // edi
  char *v27; // r15
  __int64 v28; // rdx
  int v29; // r14d
  unsigned __int8 *v30; // rcx
  char *v31; // rax
  char *v32; // rbx
  __int64 (__fastcall *v33)(int, int, int, int, int); // rcx
  int v34; // ebx
  __int64 i; // rcx
  unsigned __int8 *v36; // r12
  bool v37; // sf
  int v38; // ecx
  int v39; // edx
  int v40; // r13d
  _BYTE *v41; // rdi
  unsigned __int8 *v42; // rsi
  unsigned int v43; // eax
  unsigned __int8 *v44; // rdx
  unsigned __int8 *v45; // r9
  unsigned __int8 *v46; // rdx
  unsigned __int8 *v47; // rdx
  unsigned __int8 *v48; // r8
  _BYTE *v49; // rcx
  unsigned __int8 *v50; // r9
  unsigned __int8 *v51; // rdx
  unsigned __int8 *v52; // rdx
  size_t v53; // rbx
  __int16 v54; // ax
  __int64 v55; // rax
  __int64 v56; // rcx
  char v57; // [rsp+58h] [rbp-B0h]
  int v58; // [rsp+5Ch] [rbp-ACh]
  int v59; // [rsp+60h] [rbp-A8h]
  int v60; // [rsp+64h] [rbp-A4h]
  __int64 v61; // [rsp+68h] [rbp-A0h]
  __int64 v62; // [rsp+70h] [rbp-98h]
  __int64 v63; // [rsp+78h] [rbp-90h]
  __int64 (__fastcall *v64)(int, int, int, int, int); // [rsp+80h] [rbp-88h]
  unsigned __int16 *v65; // [rsp+88h] [rbp-80h]
  __int64 (__fastcall *v66)(int, int, int, int, __int64, int); // [rsp+90h] [rbp-78h]
  char *v68; // [rsp+A0h] [rbp-68h]
  unsigned __int8 *v69; // [rsp+A8h] [rbp-60h]
  unsigned __int8 *v70; // [rsp+B0h] [rbp-58h]
  char *v71; // [rsp+B8h] [rbp-50h]
  char *v72; // [rsp+C0h] [rbp-48h]
  int v73; // [rsp+D8h] [rbp-30h] BYREF
  char v74; // [rsp+E0h] [rbp-28h]
  int v75; // [rsp+118h] [rbp+10h]
  __int64 v76; // [rsp+160h] [rbp+58h]
  unsigned int v77; // [rsp+16Ch] [rbp+64h]
  int v78; // [rsp+174h] [rbp+6Ch]
  void (__fastcall *v79)(int *); // [rsp+198h] [rbp+90h]
  void (__fastcall *v80)(int *, __int64, __int64, __int64, __int64, __int64, __int64, int, __int64); // [rsp+1E8h] [rbp+E0h]
  __int64 v81; // [rsp+1F0h] [rbp+E8h]
  __int64 v82; // [rsp+208h] [rbp+100h]
  __int64 v83; // [rsp+210h] [rbp+108h]
  __int64 v84; // [rsp+258h] [rbp+150h]
  __int64 v85; // [rsp+260h] [rbp+158h]
  __int64 v86; // [rsp+270h] [rbp+168h]
  __int64 v87; // [rsp+278h] [rbp+170h]
  __int64 v88; // [rsp+280h] [rbp+178h]
  int v89; // [rsp+288h] [rbp+180h]
  int v90; // [rsp+28Ch] [rbp+184h]
  int v91; // [rsp+290h] [rbp+188h]
  __int64 v92; // [rsp+298h] [rbp+190h]
  __int64 v93; // [rsp+2A0h] [rbp+198h]
  __int64 v94; // [rsp+2A8h] [rbp+1A0h]
  int v95; // [rsp+2B0h] [rbp+1A8h]
  void *Src; // [rsp+2F0h] [rbp+1E8h]
  __int64 v97; // [rsp+2F8h] [rbp+1F0h]
  __int64 v98; // [rsp+300h] [rbp+1F8h]
  __int64 v99; // [rsp+308h] [rbp+200h]
  __int64 v100; // [rsp+310h] [rbp+208h]
  __int64 v101; // [rsp+318h] [rbp+210h]
  __int64 v102; // [rsp+320h] [rbp+218h]
  int v103; // [rsp+328h] [rbp+220h]

  v1 = 4LL;
  v3 = (_OWORD *)a1;
  v4 = &v73;
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
  if ( !*(_QWORD *)(a1 + 536) )
    return v77;
  v18 = v82;
  v19 = GraySharpenInput;
  v20 = v103;
  v21 = v101;
  v22 = v102;
  v23 = *(_QWORD *)(v82 + 96);
  v59 = v103;
  **(_WORD **)(v82 + 88) += *(unsigned __int8 *)(v82 + 82);
  *(_WORD *)(v23 - 2) += *(unsigned __int8 *)(v18 + 83);
  v63 = v21 - v20 * *(unsigned __int8 *)(v18 + 82);
  v24 = v83;
  v61 = v83;
  v25 = *(unsigned __int16 **)(v83 + 88);
  v62 = v20 * *(unsigned __int8 *)(v18 + 83) + v22;
  *(_WORD *)(*(_QWORD *)(v83 + 96) - 2LL) += *(unsigned __int8 *)(v83 + 83);
  v26 = *(unsigned __int8 *)(v24 + 80);
  v57 = v74 & 4;
  v27 = (char *)(*(_QWORD *)(v24 + 32) + (-(__int64)((v74 & 4) != 0) & 0xFFFFFFFFFFFFFFFAuLL) + 9);
  v68 = v27;
  v28 = ((v74 & 4) != 0 ? 6 : 18) + v75;
  v29 = v75;
  v30 = (unsigned __int8 *)&v27[v28 + v28];
  v69 = (unsigned __int8 *)&v27[v28];
  v31 = (char *)&v30[v28];
  v70 = v30;
  v32 = (char *)&v30[v28 + v28];
  v71 = (char *)&v30[v28];
  v72 = v32;
  v33 = GrayFastExpAA_CX;
  if ( (v74 & 4) == 0 )
    v33 = (__int64 (__fastcall *)(int, int, int, int, int))FastExpAA_CX;
  v64 = v33;
  if ( (v74 & 4) == 0 )
    v19 = SharpenInput;
  v66 = v19;
  GetFixupScan((__int64)&v73, v31);
  if ( !v26 )
    v73 |= 0x20u;
  GetFixupScan((__int64)&v73, v32);
  if ( v26 < 2 )
    v73 |= 0x20u;
  Src = (char *)Src + 9;
  v34 = -3;
  do
  {
    for ( i = 0LL; i < 4; ++i )
      (&v68)[i] = (char *)(&v69)[i];
    v72 = v27;
    GetFixupScan((__int64)&v73, v27);
    v36 = v70;
    v19(0, (int)v70, (int)v70, (int)v71, (__int64)v27, v29);
    v27 = v68;
    v37 = ++v34 < 0;
    v60 = v34;
    if ( !v37 )
    {
      v38 = *v25++;
      v58 = v38;
      v39 = v38;
      v65 = v25;
      v40 = v38;
      if ( !v34 )
      {
        v39 = *(unsigned __int8 *)(v61 + 82) + v38;
        v58 = v39;
      }
      v41 = Src;
      if ( v38 )
      {
        v42 = v69;
        v43 = v77;
        while ( 1 )
        {
          --v40;
          if ( !v43 )
            return *(unsigned int *)(a1 + 148);
          switch ( v39 )
          {
            case 1:
              Do5225(v41, (unsigned __int8 *)v27, v42, v36, v29);
              break;
            case 2:
              v52 = v36;
              if ( v40 == 1 )
                v52 = (unsigned __int8 *)v27;
              Do13(v41, v52, v42, v29);
              break;
            case 3:
              v48 = v42;
              v49 = v41;
              if ( v40 != 1 )
              {
                v47 = v36;
                if ( v40 == 2 )
                  v47 = (unsigned __int8 *)v27;
                goto LABEL_53;
              }
              Do1141(v41, (unsigned __int8 *)v27, v42, v36, v29);
              break;
            case 4:
              switch ( v40 )
              {
                case 0:
                  v47 = v36;
                  goto LABEL_44;
                case 1:
                  v50 = (unsigned __int8 *)v27;
                  v51 = v36;
                  goto LABEL_46;
                case 2:
                  v50 = v36;
                  v51 = (unsigned __int8 *)v27;
LABEL_46:
                  Do3121(v41, v51, v42, v50, v29);
                  goto LABEL_58;
                case 3:
                  v47 = (unsigned __int8 *)v27;
LABEL_44:
                  v48 = v42;
                  v49 = v41;
LABEL_53:
                  Do35(v49, v47, v48, v29);
                  break;
              }
              break;
            case 5:
              switch ( v40 )
              {
                case 0:
                  v44 = v36;
                  goto LABEL_38;
                case 1:
                  v45 = (unsigned __int8 *)v27;
                  v46 = v36;
                  goto LABEL_34;
                case 2:
                  Do3263(v41, (unsigned __int8 *)v27, v42, v36, v29);
                  goto LABEL_58;
                case 3:
                  v45 = v36;
                  v46 = (unsigned __int8 *)v27;
LABEL_34:
                  Do6251(v41, v46, v42, v45, v29);
                  goto LABEL_58;
                case 4:
                  v44 = (unsigned __int8 *)v27;
LABEL_38:
                  Do1319(v41, v44, v42, v29);
                  break;
              }
              break;
          }
LABEL_58:
          v53 = (-(__int64)(v57 != 0) & 0xFFFFFFFFFFFFFFFEuLL) + 3;
          memmove(&v41[-v53], v41, v53);
          memmove(&v41[v29], &v41[v29 - v53], v53);
          v64(v82, (int)v41, v63, v62, v59);
          v54 = v73;
          if ( (v73 & 0x80u) != 0 )
          {
            v79(&v73);
            v54 = v73;
          }
          if ( (v54 & 0x800) != 0 )
          {
            AlphaBlendBGRF(&v73);
            LOBYTE(v54) = v73;
          }
          if ( (v54 & 0x10) != 0 )
          {
            MappingBGRF(v97, v98, v85, v92);
            v55 = v95 + v92;
            if ( v55 == v93 )
              v55 = v94;
            v92 = v55;
          }
          v80(&v73, v99, v100, v76, v84, v86, v86 + v90, v91, v81);
          v39 = v58;
          v56 = v89 + v86;
          if ( v56 == v87 )
            v56 = v88;
          v76 += v78;
          v43 = v77 - 1;
          v86 = v56;
          --v77;
          if ( !v40 )
          {
            v34 = v60;
            v25 = v65;
            goto LABEL_71;
          }
        }
      }
    }
    v43 = v77;
LABEL_71:
    v19 = v66;
  }
  while ( v43 );
  return *(unsigned int *)(a1 + 148);
}
