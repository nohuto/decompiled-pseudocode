/*
 * XREFs of ?CitpDPDataLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C01C699C
 * Callers:
 *     ?CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagMONITOR@@PEAUtagSHELL_INPUT_USAGE_DATA_INFO@@@Z @ 0x1C00836E0 (-CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagM.c)
 *     ?CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z @ 0x1C01C65A4 (-CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0031E60 (_TlgKeywordOn.c)
 *     ?CitpStatIncrement@@YAXPEAGG@Z @ 0x1C00366AC (-CitpStatIncrement@@YAXPEAGG@Z.c)
 *     ?CitpDPDataSave@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0080808 (-CitpDPDataSave@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?Citp100NSToMS@@YAI_K@Z @ 0x1C0082C44 (-Citp100NSToMS@@YAI_K@Z.c)
 *     _TlgWrite @ 0x1C0084244 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     memset @ 0x1C00BF640 (memset.c)
 *     ?CitDPMemoizationInitialize@@YAXPEAU_CIT_DP_MEMOIZATION_CONTEXT@@PEBU_CIT_DP_CALC_CONTEXT@@II@Z @ 0x1C01C6494 (-CitDPMemoizationInitialize@@YAXPEAU_CIT_DP_MEMOIZATION_CONTEXT@@PEBU_CIT_DP_CALC_CONTEXT@@II@Z.c)
 *     ?CitpDPCalcInit@@YAXPEAU_CIT_DP_CALC_CONTEXT@@NN@Z @ 0x1C01C68B4 (-CitpDPCalcInit@@YAXPEAU_CIT_DP_CALC_CONTEXT@@NN@Z.c)
 *     ?CitpDPProcessDuration@@YAIPEBU_CIT_DP_MEMOIZATION_CONTEXT@@PEBU_CIT_DP_CALC_CONTEXT@@II@Z @ 0x1C01C7210 (-CitpDPProcessDuration@@YAIPEBU_CIT_DP_MEMOIZATION_CONTEXT@@PEBU_CIT_DP_CALC_CONTEXT@@II@Z.c)
 */

void __fastcall CitpDPDataLog(struct _CIT_IMPACT_CONTEXT *a1)
{
  char *v1; // rbx
  int v3; // edi
  double v4; // xmm7_8
  unsigned int v5; // r9d
  const struct _CIT_DP_MEMOIZATION_CONTEXT *v6; // r14
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int64 v19; // rax
  __int64 v20; // r12
  unsigned int v21; // r15d
  unsigned int v22; // ebx
  _DWORD *i; // rsi
  float v24; // xmm6_4
  unsigned int v25; // r9d
  __int64 v26; // r10
  unsigned int v27; // r9d
  __int64 v28; // r10
  unsigned int v29; // eax
  __int64 v30; // r8
  unsigned int v31; // r9d
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  char *v39; // rbx
  __int128 v40; // xmm1
  __int128 v41; // xmm0
  __int128 v42; // xmm1
  __int128 v43; // xmm0
  __int128 v44; // xmm1
  __int64 v45; // rax
  char v46; // [rsp+38h] [rbp-D0h] BYREF
  char v47; // [rsp+39h] [rbp-CFh] BYREF
  char v48; // [rsp+3Ah] [rbp-CEh] BYREF
  char v49; // [rsp+3Bh] [rbp-CDh] BYREF
  char v50; // [rsp+3Ch] [rbp-CCh] BYREF
  char v51; // [rsp+3Dh] [rbp-CBh] BYREF
  __int16 v52; // [rsp+3Eh] [rbp-CAh] BYREF
  __int16 v53; // [rsp+40h] [rbp-C8h] BYREF
  __int16 v54; // [rsp+42h] [rbp-C6h] BYREF
  unsigned int v55; // [rsp+44h] [rbp-C4h] BYREF
  float v56; // [rsp+48h] [rbp-C0h] BYREF
  float v57; // [rsp+4Ch] [rbp-BCh] BYREF
  unsigned int v58; // [rsp+50h] [rbp-B8h] BYREF
  unsigned int v59; // [rsp+54h] [rbp-B4h] BYREF
  float v60; // [rsp+58h] [rbp-B0h] BYREF
  float v61; // [rsp+5Ch] [rbp-ACh] BYREF
  unsigned int v62; // [rsp+60h] [rbp-A8h] BYREF
  unsigned int v63; // [rsp+64h] [rbp-A4h] BYREF
  float v64; // [rsp+68h] [rbp-A0h] BYREF
  float v65; // [rsp+6Ch] [rbp-9Ch] BYREF
  unsigned int v66; // [rsp+70h] [rbp-98h] BYREF
  unsigned int v67; // [rsp+74h] [rbp-94h] BYREF
  unsigned int v68; // [rsp+78h] [rbp-90h] BYREF
  unsigned int v69; // [rsp+7Ch] [rbp-8Ch] BYREF
  __int64 v70; // [rsp+80h] [rbp-88h] BYREF
  __int64 v71; // [rsp+88h] [rbp-80h] BYREF
  __int64 v72; // [rsp+90h] [rbp-78h] BYREF
  _BYTE v73[80]; // [rsp+98h] [rbp-70h] BYREF
  __int128 v74; // [rsp+E8h] [rbp-20h] BYREF
  __int128 v75; // [rsp+F8h] [rbp-10h]
  __int128 v76; // [rsp+108h] [rbp+0h] BYREF
  __int128 v77; // [rsp+118h] [rbp+10h]
  __int128 v78; // [rsp+128h] [rbp+20h]
  __int128 v79; // [rsp+138h] [rbp+30h]
  __int128 v80; // [rsp+148h] [rbp+40h]
  __int128 v81; // [rsp+158h] [rbp+50h]
  __int128 v82; // [rsp+168h] [rbp+60h]
  __int128 v83; // [rsp+178h] [rbp+70h]
  __int128 v84; // [rsp+188h] [rbp+80h]
  __int128 v85; // [rsp+198h] [rbp+90h]
  __int128 v86; // [rsp+1A8h] [rbp+A0h]
  __int128 v87; // [rsp+1B8h] [rbp+B0h]
  __int64 v88; // [rsp+1C8h] [rbp+C0h]
  EVENT_DATA_DESCRIPTOR v89; // [rsp+1D8h] [rbp+D0h] BYREF
  char *v90; // [rsp+1F8h] [rbp+F0h]
  __int64 v91; // [rsp+200h] [rbp+F8h]
  char *v92; // [rsp+208h] [rbp+100h]
  __int64 v93; // [rsp+210h] [rbp+108h]
  unsigned int *v94; // [rsp+218h] [rbp+110h]
  __int64 v95; // [rsp+220h] [rbp+118h]
  float *v96; // [rsp+228h] [rbp+120h]
  __int64 v97; // [rsp+230h] [rbp+128h]
  float *v98; // [rsp+238h] [rbp+130h]
  __int64 v99; // [rsp+240h] [rbp+138h]
  __int16 *v100; // [rsp+248h] [rbp+140h]
  __int64 v101; // [rsp+250h] [rbp+148h]
  unsigned int *v102; // [rsp+258h] [rbp+150h]
  __int64 v103; // [rsp+260h] [rbp+158h]
  unsigned int *v104; // [rsp+268h] [rbp+160h]
  __int64 v105; // [rsp+270h] [rbp+168h]
  __int64 *v106; // [rsp+278h] [rbp+170h]
  __int64 v107; // [rsp+280h] [rbp+178h]
  unsigned int *v108; // [rsp+288h] [rbp+180h]
  __int64 v109; // [rsp+290h] [rbp+188h]
  char *v110; // [rsp+298h] [rbp+190h]
  __int64 v111; // [rsp+2A0h] [rbp+198h]
  char *v112; // [rsp+2A8h] [rbp+1A0h]
  __int64 v113; // [rsp+2B0h] [rbp+1A8h]
  char *v114; // [rsp+2B8h] [rbp+1B0h]
  __int64 v115; // [rsp+2C0h] [rbp+1B8h]
  unsigned int *v116; // [rsp+2C8h] [rbp+1C0h]
  __int64 v117; // [rsp+2D0h] [rbp+1C8h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+2D8h] [rbp+1D0h] BYREF
  char *v119; // [rsp+2F8h] [rbp+1F0h]
  __int64 v120; // [rsp+300h] [rbp+1F8h]
  char *v121; // [rsp+308h] [rbp+200h]
  __int64 v122; // [rsp+310h] [rbp+208h]
  unsigned int *v123; // [rsp+318h] [rbp+210h]
  __int64 v124; // [rsp+320h] [rbp+218h]
  float *v125; // [rsp+328h] [rbp+220h]
  __int64 v126; // [rsp+330h] [rbp+228h]
  float *v127; // [rsp+338h] [rbp+230h]
  __int64 v128; // [rsp+340h] [rbp+238h]
  __int16 *v129; // [rsp+348h] [rbp+240h]
  __int64 v130; // [rsp+350h] [rbp+248h]
  unsigned int *v131; // [rsp+358h] [rbp+250h]
  __int64 v132; // [rsp+360h] [rbp+258h]
  unsigned int *v133; // [rsp+368h] [rbp+260h]
  __int64 v134; // [rsp+370h] [rbp+268h]
  __int64 *v135; // [rsp+378h] [rbp+270h]
  __int64 v136; // [rsp+380h] [rbp+278h]
  EVENT_DATA_DESCRIPTOR v137; // [rsp+388h] [rbp+280h] BYREF
  char *v138; // [rsp+3A8h] [rbp+2A0h]
  __int64 v139; // [rsp+3B0h] [rbp+2A8h]
  char *v140; // [rsp+3B8h] [rbp+2B0h]
  __int64 v141; // [rsp+3C0h] [rbp+2B8h]
  unsigned int *v142; // [rsp+3C8h] [rbp+2C0h]
  __int64 v143; // [rsp+3D0h] [rbp+2C8h]
  float *v144; // [rsp+3D8h] [rbp+2D0h]
  __int64 v145; // [rsp+3E0h] [rbp+2D8h]
  float *v146; // [rsp+3E8h] [rbp+2E0h]
  __int64 v147; // [rsp+3F0h] [rbp+2E8h]
  __int16 *v148; // [rsp+3F8h] [rbp+2F0h]
  __int64 v149; // [rsp+400h] [rbp+2F8h]
  unsigned int *v150; // [rsp+408h] [rbp+300h]
  __int64 v151; // [rsp+410h] [rbp+308h]
  unsigned int *v152; // [rsp+418h] [rbp+310h]
  __int64 v153; // [rsp+420h] [rbp+318h]
  __int64 *v154; // [rsp+428h] [rbp+320h]
  __int64 v155; // [rsp+430h] [rbp+328h]

  v1 = (char *)a1 + 552;
  v3 = 0x546000u / BYTE3(qword_1C0215804);
  v4 = 8.0 / (double)BYTE2(qword_1C0215804);
  memset(v73, 0, sizeof(v73));
  CitpDPCalcInit((struct _CIT_DP_CALC_CONTEXT *)v73, v4, (double)(((unsigned int)qword_1C0215804 >> 2) & 0xF) * 0.025);
  v6 = (const struct _CIT_DP_MEMOIZATION_CONTEXT *)(v1 + 88);
  if ( *((double *)v1 + 11) != v4 || *((_DWORD *)v1 + 24) != v3 )
    CitDPMemoizationInitialize(
      (struct _CIT_DP_MEMOIZATION_CONTEXT *)(v1 + 88),
      (const struct _CIT_DP_CALC_CONTEXT *)v73,
      v3,
      v5);
  CitpStatIncrement((unsigned __int16 *)v1 + 2, 1);
  v7 = *((_OWORD *)v1 + 1);
  v74 = *(_OWORD *)v1;
  v8 = *((_OWORD *)v1 + 2);
  v75 = v7;
  v9 = *((_OWORD *)v1 + 3);
  v76 = v8;
  v10 = *((_OWORD *)v1 + 4);
  v77 = v9;
  v11 = *((_OWORD *)v1 + 5);
  v78 = v10;
  v12 = *((_OWORD *)v1 + 6);
  v79 = v11;
  v13 = *((_OWORD *)v1 + 8);
  v80 = v12;
  v81 = *((_OWORD *)v1 + 7);
  v14 = *((_OWORD *)v1 + 9);
  v82 = v13;
  v15 = *((_OWORD *)v1 + 10);
  v83 = v14;
  v16 = *((_OWORD *)v1 + 11);
  v84 = v15;
  v17 = *((_OWORD *)v1 + 12);
  v85 = v16;
  v18 = *((_OWORD *)v1 + 13);
  v19 = *((_QWORD *)v1 + 28);
  v86 = v17;
  v87 = v18;
  v88 = v19;
  v20 = MEMORY[0xFFFFF78000000014];
  v21 = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - *((_DWORD *)a1 + 196);
  *((_DWORD *)a1 + 196) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  *((_QWORD *)v1 + 4) = v20;
  memset(v1 + 40, 0, 0x2CuLL);
  if ( CitpDPDataSave(a1) >= 0 )
  {
    v22 = 0;
    for ( i = (_DWORD *)&v76 + 2; ; ++i )
    {
      v68 = *i / 0x3E8u;
      v55 = CitpDPProcessDuration(v6, (const struct _CIT_DP_CALC_CONTEXT *)v73, v22, v68);
      if ( (qword_1C0215804 & 1) != 0 )
      {
        if ( hProvider > 5u )
        {
          v24 = v4;
          if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x800000000800uLL) )
          {
            v56 = v4;
            v119 = &v46;
            v46 = v26 + 3;
            v121 = &v47;
            v120 = v26;
            v123 = &v55;
            v47 = v22;
            v125 = &v56;
            v127 = &v57;
            v129 = &v52;
            v122 = v26;
            v131 = &v58;
            v58 = dword_1C0215800 / 0x3E8u;
            v57 = (float)v3;
            v124 = (unsigned int)(v26 + 3);
            v133 = &v59;
            v59 = v21 / 0x3E8;
            v126 = v124;
            v128 = v124;
            v52 = (v25 >> 2) & 0xF;
            v130 = 2LL;
            v132 = v124;
            v134 = v124;
            v70 = 0x2000000LL;
            v135 = &v70;
            v136 = 8LL;
            TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C01E7B30, 0LL, 0LL, 0xBu, &pData);
          }
LABEL_13:
          if ( hProvider > 5u )
          {
            if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000800uLL) )
            {
              v64 = v24;
              v50 = 4;
              v90 = &v50;
              v91 = 1LL;
              v92 = &v51;
              v51 = v22;
              v94 = &v55;
              v96 = &v64;
              v98 = &v65;
              v93 = 1LL;
              v54 = ((unsigned int)qword_1C0215804 >> 2) & 0xF;
              v100 = &v54;
              v95 = 4LL;
              v102 = &v66;
              v66 = dword_1C0215800 / 0x3E8u;
              v65 = (float)v3;
              v97 = 4LL;
              v104 = &v67;
              v106 = &v72;
              v108 = &v68;
              v110 = (char *)&v74 + 8;
              v112 = (char *)&v74 + 6;
              v114 = (char *)&v74 + 4;
              v99 = 4LL;
              v101 = 2LL;
              v103 = 4LL;
              v67 = v21 / 0x3E8;
              v105 = 4LL;
              v72 = 0x2000000LL;
              v107 = 8LL;
              v109 = 4LL;
              v111 = 2LL;
              v113 = 2LL;
              v115 = 2LL;
              v29 = Citp100NSToMS(v20 - v76);
              v117 = v30;
              v69 = (unsigned int)((v29 * (unsigned __int64)v31) >> 32) >> 6;
              v116 = &v69;
              TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C01E7A5B, 0LL, 0LL, 0x10u, &v89);
            }
          }
        }
      }
      else if ( hProvider > 5u )
      {
        v24 = v4;
        if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000800uLL) )
        {
          v60 = v4;
          v138 = &v48;
          v48 = 4;
          v140 = &v49;
          v139 = v28;
          v142 = &v55;
          v49 = v22;
          v144 = &v60;
          v146 = &v61;
          v148 = &v53;
          v141 = v28;
          v150 = &v62;
          v62 = dword_1C0215800 / 0x3E8u;
          v61 = (float)v3;
          v143 = 4LL;
          v152 = &v63;
          v63 = v21 / 0x3E8;
          v145 = 4LL;
          v147 = 4LL;
          v53 = (v27 >> 2) & 0xF;
          v149 = 2LL;
          v151 = 4LL;
          v153 = 4LL;
          v71 = 0x2000000LL;
          v154 = &v71;
          v155 = 8LL;
          TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C01E79D3, 0LL, 0LL, 0xBu, &v137);
        }
        goto LABEL_13;
      }
      if ( ++v22 >= 0xB )
        return;
    }
  }
  v32 = v75;
  *(_OWORD *)v1 = v74;
  v33 = v76;
  *((_OWORD *)v1 + 1) = v32;
  v34 = v77;
  *((_OWORD *)v1 + 2) = v33;
  v35 = v78;
  *((_OWORD *)v1 + 3) = v34;
  v36 = v79;
  *((_OWORD *)v1 + 4) = v35;
  v37 = v80;
  *((_OWORD *)v1 + 5) = v36;
  v38 = v81;
  *((_OWORD *)v1 + 6) = v37;
  v39 = v1 + 128;
  *((_OWORD *)v39 - 1) = v38;
  v40 = v83;
  *(_OWORD *)v39 = v82;
  v41 = v84;
  *((_OWORD *)v39 + 1) = v40;
  v42 = v85;
  *((_OWORD *)v39 + 2) = v41;
  v43 = v86;
  *((_OWORD *)v39 + 3) = v42;
  v44 = v87;
  v45 = v88;
  *((_OWORD *)v39 + 4) = v43;
  *((_OWORD *)v39 + 5) = v44;
  *((_QWORD *)v39 + 12) = v45;
}
