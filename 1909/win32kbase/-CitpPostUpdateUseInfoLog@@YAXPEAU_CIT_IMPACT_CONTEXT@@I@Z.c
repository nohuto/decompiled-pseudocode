/*
 * XREFs of ?CitpPostUpdateUseInfoLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x1C0082100
 * Callers:
 *     ?CitpLogoff@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C00808E0 (-CitpLogoff@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagMONITOR@@PEAUtagSHELL_INPUT_USAGE_DATA_INFO@@@Z @ 0x1C00836E0 (-CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagM.c)
 *     ?CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z @ 0x1C01C65A4 (-CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0031E60 (_TlgKeywordOn.c)
 *     ?CitpStatIncrement@@YAXPEAGG@Z @ 0x1C00366AC (-CitpStatIncrement@@YAXPEAGG@Z.c)
 *     ?CitpPostUpdateUseInfoSave@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_CIT_POST_UPDATE_USE_INFO@@@Z @ 0x1C00827B0 (-CitpPostUpdateUseInfoSave@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_CIT_POST_UPDATE_USE_INFO@@@Z.c)
 *     ?CitpPostUpdateUseInfoCalculate@@YAXPEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_POST_UPDATE_USE_INFO@@@Z @ 0x1C0082A28 (-CitpPostUpdateUseInfoCalculate@@YAXPEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_POST_UPDATE_USE_INFO@@@Z.c)
 *     ?CitUpdateInputTypeCoverage@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0082C74 (-CitUpdateInputTypeCoverage@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     _TlgWrite @ 0x1C0084244 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     memset @ 0x1C00BF640 (memset.c)
 */

void __fastcall CitpPostUpdateUseInfoLog(struct _CIT_IMPACT_CONTEXT *a1, int a2)
{
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rdx
  unsigned __int16 v6; // cx
  __int16 v7; // ax
  unsigned __int16 v8; // cx
  __int16 v9; // ax
  unsigned __int16 v10; // cx
  __int16 v11; // ax
  unsigned int v12; // ecx
  unsigned int v13; // eax
  unsigned int v14; // ecx
  unsigned int v15; // eax
  unsigned int v16; // ecx
  unsigned int v17; // eax
  unsigned int v18; // ecx
  unsigned int v19; // eax
  unsigned int v20; // ecx
  unsigned int v21; // eax
  unsigned int v22; // ecx
  unsigned int v23; // eax
  unsigned int v24; // ecx
  unsigned int v25; // eax
  unsigned int v26; // ecx
  unsigned int v27; // eax
  unsigned int v28; // ecx
  unsigned int v29; // eax
  unsigned int v30; // ecx
  unsigned int v31; // eax
  unsigned int v32; // ecx
  unsigned int v33; // eax
  unsigned int v34; // ecx
  unsigned int v35; // eax
  unsigned int v36; // eax
  unsigned __int64 v37; // rdi
  unsigned int v38; // edx
  unsigned int v39; // ecx
  unsigned int v40; // r8d
  __int128 v41; // xmm1
  __int128 v42; // xmm0
  __int128 v43; // xmm1
  __int128 v44; // xmm0
  __int128 v45; // xmm1
  __int128 v46; // xmm0
  __int16 v47; // [rsp+38h] [rbp-D0h] BYREF
  char v48; // [rsp+3Ah] [rbp-CEh] BYREF
  __int16 v49; // [rsp+3Ch] [rbp-CCh] BYREF
  __int16 v50; // [rsp+3Eh] [rbp-CAh] BYREF
  int v51; // [rsp+40h] [rbp-C8h] BYREF
  int v52; // [rsp+44h] [rbp-C4h] BYREF
  unsigned int v53; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v54; // [rsp+4Ch] [rbp-BCh] BYREF
  unsigned int v55; // [rsp+50h] [rbp-B8h] BYREF
  unsigned int v56; // [rsp+54h] [rbp-B4h] BYREF
  unsigned int v57; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v58; // [rsp+5Ch] [rbp-ACh] BYREF
  unsigned int v59; // [rsp+60h] [rbp-A8h] BYREF
  unsigned int v60; // [rsp+64h] [rbp-A4h] BYREF
  unsigned int v61; // [rsp+68h] [rbp-A0h] BYREF
  unsigned int v62; // [rsp+6Ch] [rbp-9Ch] BYREF
  unsigned int v63; // [rsp+70h] [rbp-98h] BYREF
  unsigned int v64; // [rsp+74h] [rbp-94h] BYREF
  int v65; // [rsp+78h] [rbp-90h] BYREF
  int v66; // [rsp+7Ch] [rbp-8Ch] BYREF
  unsigned int v67; // [rsp+80h] [rbp-88h] BYREF
  __int64 v68; // [rsp+88h] [rbp-80h] BYREF
  double v69; // [rsp+90h] [rbp-78h] BYREF
  double v70; // [rsp+98h] [rbp-70h] BYREF
  _OWORD Data[8]; // [rsp+A8h] [rbp-60h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+128h] [rbp+20h] BYREF
  __int64 *v73; // [rsp+148h] [rbp+40h]
  __int64 v74; // [rsp+150h] [rbp+48h]
  _OWORD *v75; // [rsp+158h] [rbp+50h]
  __int64 v76; // [rsp+160h] [rbp+58h]
  char *v77; // [rsp+168h] [rbp+60h]
  __int64 v78; // [rsp+170h] [rbp+68h]
  char *v79; // [rsp+178h] [rbp+70h]
  __int64 v80; // [rsp+180h] [rbp+78h]
  char *v81; // [rsp+188h] [rbp+80h]
  __int64 v82; // [rsp+190h] [rbp+88h]
  char *v83; // [rsp+198h] [rbp+90h]
  __int64 v84; // [rsp+1A0h] [rbp+98h]
  char *v85; // [rsp+1A8h] [rbp+A0h]
  __int64 v86; // [rsp+1B0h] [rbp+A8h]
  _OWORD *v87; // [rsp+1B8h] [rbp+B0h]
  __int64 v88; // [rsp+1C0h] [rbp+B8h]
  char *v89; // [rsp+1C8h] [rbp+C0h]
  __int64 v90; // [rsp+1D0h] [rbp+C8h]
  char *v91; // [rsp+1D8h] [rbp+D0h]
  __int64 v92; // [rsp+1E0h] [rbp+D8h]
  char *v93; // [rsp+1E8h] [rbp+E0h]
  __int64 v94; // [rsp+1F0h] [rbp+E8h]
  char *v95; // [rsp+1F8h] [rbp+F0h]
  __int64 v96; // [rsp+200h] [rbp+F8h]
  _OWORD *v97; // [rsp+208h] [rbp+100h]
  __int64 v98; // [rsp+210h] [rbp+108h]
  char *v99; // [rsp+218h] [rbp+110h]
  __int64 v100; // [rsp+220h] [rbp+118h]
  char *v101; // [rsp+228h] [rbp+120h]
  __int64 v102; // [rsp+230h] [rbp+128h]
  char *v103; // [rsp+238h] [rbp+130h]
  __int64 v104; // [rsp+240h] [rbp+138h]
  _OWORD *v105; // [rsp+248h] [rbp+140h]
  __int64 v106; // [rsp+250h] [rbp+148h]
  char *v107; // [rsp+258h] [rbp+150h]
  __int64 v108; // [rsp+260h] [rbp+158h]
  char *v109; // [rsp+268h] [rbp+160h]
  __int64 v110; // [rsp+270h] [rbp+168h]
  char *v111; // [rsp+278h] [rbp+170h]
  __int64 v112; // [rsp+280h] [rbp+178h]
  _OWORD *v113; // [rsp+288h] [rbp+180h]
  __int64 v114; // [rsp+290h] [rbp+188h]
  char *v115; // [rsp+298h] [rbp+190h]
  __int64 v116; // [rsp+2A0h] [rbp+198h]
  char *v117; // [rsp+2A8h] [rbp+1A0h]
  __int64 v118; // [rsp+2B0h] [rbp+1A8h]
  int *v119; // [rsp+2B8h] [rbp+1B0h]
  __int64 v120; // [rsp+2C0h] [rbp+1B8h]
  __int16 *v121; // [rsp+2C8h] [rbp+1C0h]
  __int64 v122; // [rsp+2D0h] [rbp+1C8h]
  __int16 *v123; // [rsp+2D8h] [rbp+1D0h]
  __int64 v124; // [rsp+2E0h] [rbp+1D8h]
  int *v125; // [rsp+2E8h] [rbp+1E0h]
  __int64 v126; // [rsp+2F0h] [rbp+1E8h]
  int *v127; // [rsp+2F8h] [rbp+1F0h]
  __int64 v128; // [rsp+300h] [rbp+1F8h]
  int *v129; // [rsp+308h] [rbp+200h]
  __int64 v130; // [rsp+310h] [rbp+208h]
  int *v131; // [rsp+318h] [rbp+210h]
  __int64 v132; // [rsp+320h] [rbp+218h]
  int *v133; // [rsp+328h] [rbp+220h]
  __int64 v134; // [rsp+330h] [rbp+228h]
  int *v135; // [rsp+338h] [rbp+230h]
  __int64 v136; // [rsp+340h] [rbp+238h]
  int *v137; // [rsp+348h] [rbp+240h]
  __int64 v138; // [rsp+350h] [rbp+248h]
  int *v139; // [rsp+358h] [rbp+250h]
  __int64 v140; // [rsp+360h] [rbp+258h]
  int *v141; // [rsp+368h] [rbp+260h]
  __int64 v142; // [rsp+370h] [rbp+268h]
  int *v143; // [rsp+378h] [rbp+270h]
  __int64 v144; // [rsp+380h] [rbp+278h]
  int *v145; // [rsp+388h] [rbp+280h]
  __int64 v146; // [rsp+390h] [rbp+288h]
  int *v147; // [rsp+398h] [rbp+290h]
  __int64 v148; // [rsp+3A0h] [rbp+298h]
  int *v149; // [rsp+3A8h] [rbp+2A0h]
  __int64 v150; // [rsp+3B0h] [rbp+2A8h]
  char *v151; // [rsp+3B8h] [rbp+2B0h]
  __int64 v152; // [rsp+3C0h] [rbp+2B8h]
  int *v153; // [rsp+3C8h] [rbp+2C0h]
  __int64 v154; // [rsp+3D0h] [rbp+2C8h]
  char *v155; // [rsp+3D8h] [rbp+2D0h]
  __int64 v156; // [rsp+3E0h] [rbp+2D8h]
  _OWORD *v157; // [rsp+3E8h] [rbp+2E0h]
  __int64 v158; // [rsp+3F0h] [rbp+2E8h]
  char *v159; // [rsp+3F8h] [rbp+2F0h]
  __int64 v160; // [rsp+400h] [rbp+2F8h]
  char *v161; // [rsp+408h] [rbp+300h]
  __int64 v162; // [rsp+410h] [rbp+308h]
  EVENT_DATA_DESCRIPTOR v163; // [rsp+418h] [rbp+310h] BYREF
  int *v164; // [rsp+438h] [rbp+330h]
  __int64 v165; // [rsp+440h] [rbp+338h]
  int *v166; // [rsp+448h] [rbp+340h]
  __int64 v167; // [rsp+450h] [rbp+348h]
  __int16 *v168; // [rsp+458h] [rbp+350h]
  __int64 v169; // [rsp+460h] [rbp+358h]
  _QWORD *v170; // [rsp+468h] [rbp+360h]
  __int64 v171; // [rsp+470h] [rbp+368h]
  const wchar_t *v172; // [rsp+478h] [rbp+370h]
  _QWORD v173[13]; // [rsp+480h] [rbp+378h] BYREF
  int v174; // [rsp+530h] [rbp+428h] BYREF

  v174 = a2;
  CitUpdateInputTypeCoverage(a1);
  if ( *((_WORD *)a1 + 152) )
  {
    CitpStatIncrement((unsigned __int16 *)a1 + 153, 1);
    memset(Data, 0, 0x78uLL);
    CitpPostUpdateUseInfoCalculate(a1, (struct _CIT_POST_UPDATE_USE_INFO *)Data);
    if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x800000000800uLL) )
    {
      v73 = &v68;
      v75 = Data;
      v77 = (char *)Data + 4;
      v79 = (char *)Data + 6;
      v81 = (char *)Data + 8;
      v83 = (char *)Data + 10;
      v85 = (char *)Data + 12;
      v87 = &Data[1];
      v89 = (char *)&Data[1] + 4;
      v91 = (char *)&Data[1] + 8;
      v93 = (char *)&Data[1] + 12;
      v95 = (char *)&Data[1] + 14;
      v97 = &Data[2];
      v99 = (char *)&Data[2] + 4;
      v101 = (char *)&Data[2] + 8;
      v103 = (char *)&Data[2] + 12;
      v105 = &Data[3];
      v107 = (char *)&Data[3] + 4;
      v109 = (char *)&Data[3] + 8;
      v111 = (char *)&Data[3] + 12;
      v113 = &Data[4];
      v115 = (char *)&Data[4] + 4;
      v117 = (char *)&Data[4] + 8;
      v3 = *((_QWORD *)a1 + 62);
      v68 = 0x2000000LL;
      v74 = 8LL;
      v76 = 4LL;
      v78 = 2LL;
      v80 = 2LL;
      v82 = 2LL;
      v84 = 2LL;
      v86 = 4LL;
      v88 = 4LL;
      v90 = 4LL;
      v92 = 2LL;
      v94 = 2LL;
      v96 = 2LL;
      v98 = 4LL;
      v100 = 4LL;
      v102 = 4LL;
      v104 = 4LL;
      v106 = 4LL;
      v108 = 4LL;
      v110 = 4LL;
      v112 = 4LL;
      v114 = 4LL;
      v116 = 4LL;
      v118 = 4LL;
      if ( *(_QWORD *)&Data[5] <= v3 )
        v4 = 0LL;
      else
        v4 = *(_QWORD *)&Data[5] - v3;
      if ( v4 >= 0x98968000000000LL )
        LODWORD(v5) = -1;
      else
        v5 = v4 / 0x989680;
      v6 = *((_WORD *)a1 + 210);
      v119 = &v52;
      v52 = v5;
      v120 = 4LL;
      if ( WORD2(Data[0]) > v6 )
        v7 = WORD2(Data[0]) - v6;
      else
        v7 = 0;
      v8 = *((_WORD *)a1 + 211);
      v49 = v7;
      v121 = &v49;
      v122 = 2LL;
      if ( WORD3(Data[0]) > v8 )
        v9 = WORD3(Data[0]) - v8;
      else
        v9 = 0;
      v10 = *((_WORD *)a1 + 212);
      v50 = v9;
      v123 = &v50;
      v124 = 2LL;
      if ( WORD4(Data[0]) <= v10 )
        v11 = 0;
      else
        v11 = WORD4(Data[0]) - v10;
      v12 = *((_DWORD *)a1 + 107);
      LOWORD(v51) = v11;
      v125 = &v51;
      v126 = 2LL;
      if ( HIDWORD(Data[0]) <= v12 )
        v13 = 0;
      else
        v13 = HIDWORD(Data[0]) - v12;
      v14 = *((_DWORD *)a1 + 108);
      v53 = v13;
      v127 = (int *)&v53;
      v128 = 4LL;
      if ( LODWORD(Data[1]) <= v14 )
        v15 = 0;
      else
        v15 = LODWORD(Data[1]) - v14;
      v16 = *((_DWORD *)a1 + 109);
      v54 = v15;
      v129 = (int *)&v54;
      v130 = 4LL;
      if ( DWORD1(Data[1]) <= v16 )
        v17 = 0;
      else
        v17 = DWORD1(Data[1]) - v16;
      v18 = *((_DWORD *)a1 + 113);
      v55 = v17;
      v131 = (int *)&v55;
      v132 = 4LL;
      if ( DWORD1(Data[2]) <= v18 )
        v19 = 0;
      else
        v19 = DWORD1(Data[2]) - v18;
      v20 = *((_DWORD *)a1 + 114);
      v56 = v19;
      v133 = (int *)&v56;
      v134 = 4LL;
      if ( DWORD2(Data[2]) <= v20 )
        v21 = 0;
      else
        v21 = DWORD2(Data[2]) - v20;
      v22 = *((_DWORD *)a1 + 115);
      v57 = v21;
      v135 = (int *)&v57;
      v136 = 4LL;
      if ( HIDWORD(Data[2]) <= v22 )
        v23 = 0;
      else
        v23 = HIDWORD(Data[2]) - v22;
      v24 = *((_DWORD *)a1 + 116);
      v58 = v23;
      v137 = (int *)&v58;
      v138 = 4LL;
      if ( LODWORD(Data[3]) <= v24 )
        v25 = 0;
      else
        v25 = LODWORD(Data[3]) - v24;
      v26 = *((_DWORD *)a1 + 117);
      v59 = v25;
      v139 = (int *)&v59;
      v140 = 4LL;
      if ( DWORD1(Data[3]) <= v26 )
        v27 = 0;
      else
        v27 = DWORD1(Data[3]) - v26;
      v28 = *((_DWORD *)a1 + 118);
      v60 = v27;
      v141 = (int *)&v60;
      v142 = 4LL;
      if ( DWORD2(Data[3]) > v28 )
        v29 = DWORD2(Data[3]) - v28;
      else
        v29 = 0;
      v30 = *((_DWORD *)a1 + 120);
      v61 = v29;
      v143 = (int *)&v61;
      v144 = 4LL;
      if ( LODWORD(Data[4]) <= v30 )
        v31 = 0;
      else
        v31 = LODWORD(Data[4]) - v30;
      v32 = *((_DWORD *)a1 + 121);
      v62 = v31;
      v145 = (int *)&v62;
      v146 = 4LL;
      if ( DWORD1(Data[4]) <= v32 )
        v33 = 0;
      else
        v33 = DWORD1(Data[4]) - v32;
      v34 = *((_DWORD *)a1 + 122);
      v63 = v33;
      v147 = (int *)&v63;
      v148 = 4LL;
      if ( DWORD2(Data[4]) <= v34 )
        v35 = 0;
      else
        v35 = DWORD2(Data[4]) - v34;
      v64 = v35;
      v149 = (int *)&v64;
      v151 = (char *)a1 + 204;
      v153 = &v174;
      v155 = (char *)&Data[5] + 8;
      v157 = &Data[6];
      v159 = (char *)&Data[6] + 4;
      v161 = (char *)&Data[6] + 8;
      v150 = 4LL;
      v152 = 4LL;
      v154 = 4LL;
      v156 = 8LL;
      v158 = 2LL;
      v160 = 4LL;
      v162 = 4LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C01E6E12, 0LL, 0LL, 0x2Fu, &pData);
    }
    v36 = *((_DWORD *)a1 + 108);
    v37 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    v38 = v37 - *((_DWORD *)a1 + 197);
    LODWORD(Data[7]) = v38;
    if ( LODWORD(Data[1]) <= v36 )
      v39 = 0;
    else
      v39 = LODWORD(Data[1]) - v36;
    v40 = v39 + HIDWORD(Data[6]);
    HIDWORD(Data[6]) += v39;
    if ( v174 == 2 || v38 >= dword_1C02157F0 )
    {
      v67 = dword_1C02157F0 / 0x3E8u;
      if ( v40 >= dword_1C02157F0 / 0x3E8u )
        HIDWORD(Data[6]) = dword_1C02157F0 / 0x3E8u - 1;
      if ( (unsigned int)dword_1C020C5A8 > 5 )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020C5A8, 0x800000000000uLL) )
        {
          v164 = &v65;
          v166 = &v66;
          v168 = &v47;
          v170 = v173;
          v172 = L"Value";
          v173[1] = (char *)&Data[6] + 12;
          v173[3] = &v67;
          v173[5] = (char *)&v47 + 1;
          v173[7] = &v48;
          v173[9] = &v69;
          v173[11] = &v70;
          v69 = DOUBLE_N1_0;
          v70 = DOUBLE_N1_0;
          v65 = 1;
          v165 = 4LL;
          v66 = 1;
          v167 = 4LL;
          v47 = 0;
          v169 = 1LL;
          v171 = 2LL;
          v173[0] = 10LL;
          v173[2] = 4LL;
          v173[4] = 4LL;
          v173[6] = 1LL;
          v48 = 4;
          v173[8] = 1LL;
          v173[10] = 8LL;
          v173[12] = 8LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C020C5A8, &unk_1C01E6D82, 0LL, 0LL, 0xDu, &v163);
        }
      }
      *(_QWORD *)((char *)&Data[6] + 12) = 0LL;
      *((_DWORD *)a1 + 197) = v37;
    }
    CitpPostUpdateUseInfoSave(a1, Data);
    v41 = Data[1];
    *((_OWORD *)a1 + 26) = Data[0];
    v42 = Data[2];
    *((_OWORD *)a1 + 27) = v41;
    v43 = Data[3];
    *((_OWORD *)a1 + 28) = v42;
    v44 = Data[4];
    *((_OWORD *)a1 + 29) = v43;
    v45 = Data[5];
    *((_OWORD *)a1 + 30) = v44;
    v46 = Data[6];
    *((_OWORD *)a1 + 31) = v45;
    *(_QWORD *)&v45 = *(_QWORD *)&Data[7];
    *((_OWORD *)a1 + 32) = v46;
    *((_QWORD *)a1 + 66) = v45;
  }
}
