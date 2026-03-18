/*
 * XREFs of ?CitpPostUpdateUseInfoLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x1C0077D70
 * Callers:
 *     ?CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagMONITOR@@PEAUtagSHELL_INPUT_USAGE_DATA_INFO@@@Z @ 0x1C0037F14 (-CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagM.c)
 *     ?CitpLogoff@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0076B78 (-CitpLogoff@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z @ 0x1C01839F8 (-CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00304B0 (_TlgKeywordOn.c)
 *     ?CitpStatIncrement@@YAXPEAGG@Z @ 0x1C00336E8 (-CitpStatIncrement@@YAXPEAGG@Z.c)
 *     _TlgWrite @ 0x1C003A4A8 (_TlgWrite.c)
 *     ?CitpPostUpdateUseInfoSave@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_CIT_POST_UPDATE_USE_INFO@@@Z @ 0x1C0077EF8 (-CitpPostUpdateUseInfoSave@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_CIT_POST_UPDATE_USE_INFO@@@Z.c)
 *     ?CitpPostUpdateUseInfoCalculate@@YAXPEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_POST_UPDATE_USE_INFO@@@Z @ 0x1C0078370 (-CitpPostUpdateUseInfoCalculate@@YAXPEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_POST_UPDATE_USE_INFO@@@Z.c)
 *     ?CitUpdateInputTypeCoverage@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0079394 (-CitUpdateInputTypeCoverage@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 */

void __fastcall CitpPostUpdateUseInfoLog(struct _CIT_IMPACT_CONTEXT *a1, int a2)
{
  unsigned int v3; // eax
  unsigned __int64 v4; // rdi
  unsigned int v5; // edx
  int v6; // ecx
  unsigned int v7; // r8d
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  unsigned __int16 v17; // cx
  __int16 v18; // ax
  unsigned __int16 v19; // cx
  __int16 v20; // ax
  unsigned __int16 v21; // cx
  __int16 v22; // ax
  unsigned int v23; // ecx
  unsigned int v24; // eax
  unsigned int v25; // ecx
  int v26; // eax
  unsigned int v27; // ecx
  unsigned int v28; // eax
  unsigned int v29; // ecx
  unsigned int v30; // eax
  unsigned int v31; // ecx
  unsigned int v32; // eax
  unsigned int v33; // ecx
  unsigned int v34; // eax
  unsigned int v35; // ecx
  int v36; // eax
  unsigned int v37; // ecx
  unsigned int v38; // eax
  unsigned int v39; // ecx
  unsigned int v40; // eax
  unsigned int v41; // ecx
  unsigned int v42; // eax
  unsigned int v43; // ecx
  int v44; // eax
  unsigned int v45; // ecx
  unsigned int v46; // eax
  __int16 v47; // [rsp+38h] [rbp-D0h] BYREF
  char v48; // [rsp+3Ah] [rbp-CEh] BYREF
  __int16 v49; // [rsp+3Ch] [rbp-CCh] BYREF
  __int16 v50; // [rsp+3Eh] [rbp-CAh] BYREF
  int v51; // [rsp+40h] [rbp-C8h] BYREF
  int v52; // [rsp+44h] [rbp-C4h] BYREF
  unsigned int v53; // [rsp+48h] [rbp-C0h] BYREF
  int v54; // [rsp+4Ch] [rbp-BCh] BYREF
  unsigned int v55; // [rsp+50h] [rbp-B8h] BYREF
  unsigned int v56; // [rsp+54h] [rbp-B4h] BYREF
  unsigned int v57; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v58; // [rsp+5Ch] [rbp-ACh] BYREF
  int v59; // [rsp+60h] [rbp-A8h] BYREF
  unsigned int v60; // [rsp+64h] [rbp-A4h] BYREF
  unsigned int v61; // [rsp+68h] [rbp-A0h] BYREF
  unsigned int v62; // [rsp+6Ch] [rbp-9Ch] BYREF
  int v63; // [rsp+70h] [rbp-98h] BYREF
  unsigned int v64; // [rsp+74h] [rbp-94h] BYREF
  int v65; // [rsp+78h] [rbp-90h] BYREF
  int v66; // [rsp+7Ch] [rbp-8Ch] BYREF
  unsigned int v67; // [rsp+80h] [rbp-88h] BYREF
  double v68; // [rsp+88h] [rbp-80h] BYREF
  double v69; // [rsp+90h] [rbp-78h] BYREF
  __int128 Data; // [rsp+98h] [rbp-70h] BYREF
  __int128 v71; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v72; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v73; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v74; // [rsp+D8h] [rbp-30h] BYREF
  __int128 v75; // [rsp+E8h] [rbp-20h] BYREF
  __int128 v76; // [rsp+F8h] [rbp-10h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+108h] [rbp+0h] BYREF
  __int128 *p_Data; // [rsp+128h] [rbp+20h]
  __int64 v79; // [rsp+130h] [rbp+28h]
  char *v80; // [rsp+138h] [rbp+30h]
  __int64 v81; // [rsp+140h] [rbp+38h]
  char *v82; // [rsp+148h] [rbp+40h]
  __int64 v83; // [rsp+150h] [rbp+48h]
  char *v84; // [rsp+158h] [rbp+50h]
  __int64 v85; // [rsp+160h] [rbp+58h]
  char *v86; // [rsp+168h] [rbp+60h]
  __int64 v87; // [rsp+170h] [rbp+68h]
  char *v88; // [rsp+178h] [rbp+70h]
  __int64 v89; // [rsp+180h] [rbp+78h]
  __int128 *v90; // [rsp+188h] [rbp+80h]
  __int64 v91; // [rsp+190h] [rbp+88h]
  char *v92; // [rsp+198h] [rbp+90h]
  __int64 v93; // [rsp+1A0h] [rbp+98h]
  char *v94; // [rsp+1A8h] [rbp+A0h]
  __int64 v95; // [rsp+1B0h] [rbp+A8h]
  char *v96; // [rsp+1B8h] [rbp+B0h]
  __int64 v97; // [rsp+1C0h] [rbp+B8h]
  char *v98; // [rsp+1C8h] [rbp+C0h]
  __int64 v99; // [rsp+1D0h] [rbp+C8h]
  __int128 *v100; // [rsp+1D8h] [rbp+D0h]
  __int64 v101; // [rsp+1E0h] [rbp+D8h]
  char *v102; // [rsp+1E8h] [rbp+E0h]
  __int64 v103; // [rsp+1F0h] [rbp+E8h]
  char *v104; // [rsp+1F8h] [rbp+F0h]
  __int64 v105; // [rsp+200h] [rbp+F8h]
  char *v106; // [rsp+208h] [rbp+100h]
  __int64 v107; // [rsp+210h] [rbp+108h]
  __int128 *v108; // [rsp+218h] [rbp+110h]
  __int64 v109; // [rsp+220h] [rbp+118h]
  char *v110; // [rsp+228h] [rbp+120h]
  __int64 v111; // [rsp+230h] [rbp+128h]
  char *v112; // [rsp+238h] [rbp+130h]
  __int64 v113; // [rsp+240h] [rbp+138h]
  char *v114; // [rsp+248h] [rbp+140h]
  __int64 v115; // [rsp+250h] [rbp+148h]
  __int128 *v116; // [rsp+258h] [rbp+150h]
  __int64 v117; // [rsp+260h] [rbp+158h]
  char *v118; // [rsp+268h] [rbp+160h]
  __int64 v119; // [rsp+270h] [rbp+168h]
  int *v120; // [rsp+278h] [rbp+170h]
  __int64 v121; // [rsp+280h] [rbp+178h]
  __int16 *v122; // [rsp+288h] [rbp+180h]
  __int64 v123; // [rsp+290h] [rbp+188h]
  __int16 *v124; // [rsp+298h] [rbp+190h]
  __int64 v125; // [rsp+2A0h] [rbp+198h]
  int *v126; // [rsp+2A8h] [rbp+1A0h]
  __int64 v127; // [rsp+2B0h] [rbp+1A8h]
  int *v128; // [rsp+2B8h] [rbp+1B0h]
  __int64 v129; // [rsp+2C0h] [rbp+1B8h]
  int *v130; // [rsp+2C8h] [rbp+1C0h]
  __int64 v131; // [rsp+2D0h] [rbp+1C8h]
  int *v132; // [rsp+2D8h] [rbp+1D0h]
  __int64 v133; // [rsp+2E0h] [rbp+1D8h]
  int *v134; // [rsp+2E8h] [rbp+1E0h]
  __int64 v135; // [rsp+2F0h] [rbp+1E8h]
  int *v136; // [rsp+2F8h] [rbp+1F0h]
  __int64 v137; // [rsp+300h] [rbp+1F8h]
  int *v138; // [rsp+308h] [rbp+200h]
  __int64 v139; // [rsp+310h] [rbp+208h]
  int *v140; // [rsp+318h] [rbp+210h]
  __int64 v141; // [rsp+320h] [rbp+218h]
  int *v142; // [rsp+328h] [rbp+220h]
  __int64 v143; // [rsp+330h] [rbp+228h]
  int *v144; // [rsp+338h] [rbp+230h]
  __int64 v145; // [rsp+340h] [rbp+238h]
  int *v146; // [rsp+348h] [rbp+240h]
  __int64 v147; // [rsp+350h] [rbp+248h]
  int *v148; // [rsp+358h] [rbp+250h]
  __int64 v149; // [rsp+360h] [rbp+258h]
  int *v150; // [rsp+368h] [rbp+260h]
  __int64 v151; // [rsp+370h] [rbp+268h]
  char *v152; // [rsp+378h] [rbp+270h]
  __int64 v153; // [rsp+380h] [rbp+278h]
  int *v154; // [rsp+388h] [rbp+280h]
  __int64 v155; // [rsp+390h] [rbp+288h]
  __int128 *v156; // [rsp+398h] [rbp+290h]
  __int64 v157; // [rsp+3A0h] [rbp+298h]
  char *v158; // [rsp+3A8h] [rbp+2A0h]
  __int64 v159; // [rsp+3B0h] [rbp+2A8h]
  char *v160; // [rsp+3B8h] [rbp+2B0h]
  __int64 v161; // [rsp+3C0h] [rbp+2B8h]
  __int128 *v162; // [rsp+3C8h] [rbp+2C0h]
  __int64 v163; // [rsp+3D0h] [rbp+2C8h]
  EVENT_DATA_DESCRIPTOR v164; // [rsp+3D8h] [rbp+2D0h] BYREF
  int *v165; // [rsp+3F8h] [rbp+2F0h]
  __int64 v166; // [rsp+400h] [rbp+2F8h]
  int *v167; // [rsp+408h] [rbp+300h]
  __int64 v168; // [rsp+410h] [rbp+308h]
  __int16 *v169; // [rsp+418h] [rbp+310h]
  __int64 v170; // [rsp+420h] [rbp+318h]
  _QWORD *v171; // [rsp+428h] [rbp+320h]
  __int64 v172; // [rsp+430h] [rbp+328h]
  const wchar_t *v173; // [rsp+438h] [rbp+330h]
  _QWORD v174[13]; // [rsp+440h] [rbp+338h] BYREF
  int v175; // [rsp+4F0h] [rbp+3E8h] BYREF

  v175 = a2;
  CitUpdateInputTypeCoverage(a1);
  if ( *((_WORD *)a1 + 148) )
  {
    CitpStatIncrement((unsigned __int16 *)a1 + 149, 1);
    CitpPostUpdateUseInfoCalculate(a1, (struct _CIT_POST_UPDATE_USE_INFO *)&Data);
    if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x800000000800uLL) )
    {
      p_Data = &Data;
      v80 = (char *)&Data + 4;
      v82 = (char *)&Data + 6;
      v84 = (char *)&Data + 8;
      v86 = (char *)&Data + 10;
      v88 = (char *)&Data + 12;
      v90 = &v71;
      v92 = (char *)&v71 + 4;
      v94 = (char *)&v71 + 8;
      v96 = (char *)&v71 + 12;
      v98 = (char *)&v71 + 14;
      v100 = &v72;
      v102 = (char *)&v72 + 4;
      v104 = (char *)&v72 + 8;
      v106 = (char *)&v72 + 12;
      v108 = &v73;
      v110 = (char *)&v73 + 4;
      v112 = (char *)&v73 + 8;
      v114 = (char *)&v73 + 12;
      v116 = &v74;
      v118 = (char *)&v74 + 4;
      v14 = *((_QWORD *)a1 + 59);
      v79 = 4LL;
      v81 = 2LL;
      v83 = 2LL;
      v85 = 2LL;
      v87 = 2LL;
      v89 = 4LL;
      v91 = 4LL;
      v93 = 4LL;
      v95 = 2LL;
      v97 = 2LL;
      v99 = 2LL;
      v101 = 4LL;
      v103 = 4LL;
      v105 = 4LL;
      v107 = 4LL;
      v109 = 4LL;
      v111 = 4LL;
      v113 = 4LL;
      v115 = 4LL;
      v117 = 4LL;
      v119 = 4LL;
      if ( *((_QWORD *)&v74 + 1) > v14 )
        v15 = *((_QWORD *)&v74 + 1) - v14;
      else
        v15 = 0LL;
      if ( v15 >= 0x98968000000000LL )
        LODWORD(v16) = -1;
      else
        v16 = v15 / 0x989680;
      v17 = *((_WORD *)a1 + 202);
      v120 = &v52;
      v52 = v16;
      v121 = 4LL;
      if ( WORD2(Data) > v17 )
        v18 = WORD2(Data) - v17;
      else
        v18 = 0;
      v19 = *((_WORD *)a1 + 203);
      v49 = v18;
      v122 = &v49;
      v123 = 2LL;
      if ( WORD3(Data) > v19 )
        v20 = WORD3(Data) - v19;
      else
        v20 = 0;
      v21 = *((_WORD *)a1 + 204);
      v50 = v20;
      v124 = &v50;
      v125 = 2LL;
      if ( WORD4(Data) > v21 )
        v22 = WORD4(Data) - v21;
      else
        v22 = 0;
      v23 = *((_DWORD *)a1 + 103);
      LOWORD(v51) = v22;
      v126 = &v51;
      v127 = 2LL;
      if ( HIDWORD(Data) > v23 )
        v24 = HIDWORD(Data) - v23;
      else
        v24 = 0;
      v25 = *((_DWORD *)a1 + 104);
      v53 = v24;
      v128 = (int *)&v53;
      v129 = 4LL;
      if ( (unsigned int)v71 > v25 )
        v26 = v71 - v25;
      else
        v26 = 0;
      v27 = *((_DWORD *)a1 + 105);
      v54 = v26;
      v130 = &v54;
      v131 = 4LL;
      if ( DWORD1(v71) > v27 )
        v28 = DWORD1(v71) - v27;
      else
        v28 = 0;
      v29 = *((_DWORD *)a1 + 109);
      v55 = v28;
      v132 = (int *)&v55;
      v133 = 4LL;
      if ( DWORD1(v72) > v29 )
        v30 = DWORD1(v72) - v29;
      else
        v30 = 0;
      v31 = *((_DWORD *)a1 + 110);
      v56 = v30;
      v134 = (int *)&v56;
      v135 = 4LL;
      if ( DWORD2(v72) > v31 )
        v32 = DWORD2(v72) - v31;
      else
        v32 = 0;
      v33 = *((_DWORD *)a1 + 111);
      v57 = v32;
      v136 = (int *)&v57;
      v137 = 4LL;
      if ( HIDWORD(v72) > v33 )
        v34 = HIDWORD(v72) - v33;
      else
        v34 = 0;
      v35 = *((_DWORD *)a1 + 112);
      v58 = v34;
      v138 = (int *)&v58;
      v139 = 4LL;
      if ( (unsigned int)v73 > v35 )
        v36 = v73 - v35;
      else
        v36 = 0;
      v37 = *((_DWORD *)a1 + 113);
      v59 = v36;
      v140 = &v59;
      v141 = 4LL;
      if ( DWORD1(v73) > v37 )
        v38 = DWORD1(v73) - v37;
      else
        v38 = 0;
      v39 = *((_DWORD *)a1 + 114);
      v60 = v38;
      v142 = (int *)&v60;
      v143 = 4LL;
      if ( DWORD2(v73) > v39 )
        v40 = DWORD2(v73) - v39;
      else
        v40 = 0;
      v41 = *((_DWORD *)a1 + 115);
      v61 = v40;
      v144 = (int *)&v61;
      v145 = 4LL;
      if ( HIDWORD(v73) > v41 )
        v42 = HIDWORD(v73) - v41;
      else
        v42 = 0;
      v43 = *((_DWORD *)a1 + 116);
      v62 = v42;
      v146 = (int *)&v62;
      v147 = 4LL;
      if ( (unsigned int)v74 > v43 )
        v44 = v74 - v43;
      else
        v44 = 0;
      v45 = *((_DWORD *)a1 + 117);
      v63 = v44;
      v148 = &v63;
      v149 = 4LL;
      if ( DWORD1(v74) > v45 )
        v46 = DWORD1(v74) - v45;
      else
        v46 = 0;
      v64 = v46;
      v150 = (int *)&v64;
      v152 = (char *)a1 + 200;
      v154 = &v175;
      v156 = &v75;
      v158 = (char *)&v75 + 8;
      v160 = (char *)&v75 + 12;
      v162 = &v76;
      v151 = 4LL;
      v153 = 4LL;
      v155 = 4LL;
      v157 = 8LL;
      v159 = 2LL;
      v161 = 4LL;
      v163 = 4LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C01A20B2, 0LL, 0LL, 0x2Du, &pData);
    }
    v3 = *((_DWORD *)a1 + 104);
    v4 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    v5 = v4 - *((_DWORD *)a1 + 191);
    DWORD2(v76) = v5;
    if ( (unsigned int)v71 <= v3 )
      v6 = 0;
    else
      v6 = v71 - v3;
    v7 = v6 + DWORD1(v76);
    DWORD1(v76) += v6;
    if ( v175 == 2 || v5 >= dword_1C01D0CD0 )
    {
      v67 = dword_1C01D0CD0 / 0x3E8u;
      if ( v7 >= dword_1C01D0CD0 / 0x3E8u )
        DWORD1(v76) = dword_1C01D0CD0 / 0x3E8u - 1;
      if ( (unsigned int)dword_1C01C7780 > 5 )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C01C7780, 0x800000000000uLL) )
        {
          v165 = &v65;
          v167 = &v66;
          v169 = &v47;
          v171 = v174;
          v173 = L"Value";
          v174[1] = (char *)&v76 + 4;
          v174[3] = &v67;
          v174[5] = (char *)&v47 + 1;
          v174[7] = &v48;
          v174[9] = &v68;
          v174[11] = &v69;
          v68 = DOUBLE_N1_0;
          v69 = DOUBLE_N1_0;
          v65 = 1;
          v166 = 4LL;
          v66 = 1;
          v168 = 4LL;
          v47 = 0;
          v170 = 1LL;
          v172 = 2LL;
          v174[0] = 10LL;
          v174[2] = 4LL;
          v174[4] = 4LL;
          v174[6] = 1LL;
          v48 = 4;
          v174[8] = 1LL;
          v174[10] = 8LL;
          v174[12] = 8LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C01C7780, &unk_1C01A2022, 0LL, 0LL, 0xDu, &v164);
        }
      }
      *(_QWORD *)((char *)&v76 + 4) = 0LL;
      *((_DWORD *)a1 + 191) = v4;
    }
    CitpPostUpdateUseInfoSave(a1, &Data);
    v8 = v71;
    *((_OWORD *)a1 + 25) = Data;
    v9 = v72;
    *((_OWORD *)a1 + 26) = v8;
    v10 = v73;
    *((_OWORD *)a1 + 27) = v9;
    v11 = v74;
    *((_OWORD *)a1 + 28) = v10;
    v12 = v75;
    *((_OWORD *)a1 + 29) = v11;
    v13 = v76;
    *((_OWORD *)a1 + 30) = v12;
    *((_OWORD *)a1 + 31) = v13;
  }
}
