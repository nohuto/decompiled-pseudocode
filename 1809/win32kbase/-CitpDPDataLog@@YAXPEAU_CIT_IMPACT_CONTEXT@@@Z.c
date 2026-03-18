/*
 * XREFs of ?CitpDPDataLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0183DFC
 * Callers:
 *     ?CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagMONITOR@@PEAUtagSHELL_INPUT_USAGE_DATA_INFO@@@Z @ 0x1C0037F14 (-CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagM.c)
 *     ?CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z @ 0x1C01839F8 (-CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00304B0 (_TlgKeywordOn.c)
 *     ?CitpStatIncrement@@YAXPEAGG@Z @ 0x1C00336E8 (-CitpStatIncrement@@YAXPEAGG@Z.c)
 *     _TlgWrite @ 0x1C003A4A8 (_TlgWrite.c)
 *     ?Citp100NSToMS@@YAI_K@Z @ 0x1C00787A4 (-Citp100NSToMS@@YAI_K@Z.c)
 *     ?CitpDPDataSave@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C00794EC (-CitpDPDataSave@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     memset @ 0x1C00AF780 (memset.c)
 *     ?CitDPMemoizationInitialize@@YAXPEAU_CIT_DP_MEMOIZATION_CONTEXT@@PEBU_CIT_DP_CALC_CONTEXT@@II@Z @ 0x1C01838E8 (-CitDPMemoizationInitialize@@YAXPEAU_CIT_DP_MEMOIZATION_CONTEXT@@PEBU_CIT_DP_CALC_CONTEXT@@II@Z.c)
 *     ?CitpDPCalcInit@@YAXPEAU_CIT_DP_CALC_CONTEXT@@NN@Z @ 0x1C0183D08 (-CitpDPCalcInit@@YAXPEAU_CIT_DP_CALC_CONTEXT@@NN@Z.c)
 *     ?CitpDPProcessDuration@@YAIPEBU_CIT_DP_MEMOIZATION_CONTEXT@@PEBU_CIT_DP_CALC_CONTEXT@@II@Z @ 0x1C0184610 (-CitpDPProcessDuration@@YAIPEBU_CIT_DP_MEMOIZATION_CONTEXT@@PEBU_CIT_DP_CALC_CONTEXT@@II@Z.c)
 */

void __fastcall CitpDPDataLog(struct _CIT_IMPACT_CONTEXT *a1)
{
  char *v1; // rbx
  int v3; // edi
  double v4; // xmm6_8
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
  unsigned int v24; // r9d
  float v25; // xmm0_4
  unsigned int v26; // r9d
  float v27; // xmm0_4
  float v28; // xmm0_4
  unsigned int v29; // eax
  __int64 v30; // r8
  unsigned int v31; // r9d
  UINT32 cData; // r10d
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  char *v40; // rbx
  __int128 v41; // xmm1
  __int128 v42; // xmm0
  __int128 v43; // xmm1
  __int128 v44; // xmm0
  __int128 v45; // xmm1
  __int64 v46; // rax
  char v47; // [rsp+38h] [rbp-D0h] BYREF
  char v48; // [rsp+39h] [rbp-CFh] BYREF
  char v49; // [rsp+3Ah] [rbp-CEh] BYREF
  char v50; // [rsp+3Bh] [rbp-CDh] BYREF
  char v51; // [rsp+3Ch] [rbp-CCh] BYREF
  char v52; // [rsp+3Dh] [rbp-CBh] BYREF
  __int16 v53; // [rsp+3Eh] [rbp-CAh] BYREF
  __int16 v54; // [rsp+40h] [rbp-C8h] BYREF
  __int16 v55; // [rsp+42h] [rbp-C6h] BYREF
  unsigned int v56; // [rsp+44h] [rbp-C4h] BYREF
  float v57; // [rsp+48h] [rbp-C0h] BYREF
  float v58; // [rsp+4Ch] [rbp-BCh] BYREF
  unsigned int v59; // [rsp+50h] [rbp-B8h] BYREF
  unsigned int v60; // [rsp+54h] [rbp-B4h] BYREF
  float v61; // [rsp+58h] [rbp-B0h] BYREF
  float v62; // [rsp+5Ch] [rbp-ACh] BYREF
  unsigned int v63; // [rsp+60h] [rbp-A8h] BYREF
  unsigned int v64; // [rsp+64h] [rbp-A4h] BYREF
  float v65; // [rsp+68h] [rbp-A0h] BYREF
  float v66; // [rsp+6Ch] [rbp-9Ch] BYREF
  unsigned int v67; // [rsp+70h] [rbp-98h] BYREF
  unsigned int v68; // [rsp+74h] [rbp-94h] BYREF
  unsigned int v69; // [rsp+78h] [rbp-90h] BYREF
  unsigned int v70; // [rsp+7Ch] [rbp-8Ch] BYREF
  _BYTE v71[80]; // [rsp+88h] [rbp-80h] BYREF
  __int128 v72; // [rsp+D8h] [rbp-30h] BYREF
  __int128 v73; // [rsp+E8h] [rbp-20h]
  __int128 v74; // [rsp+F8h] [rbp-10h] BYREF
  __int128 v75; // [rsp+108h] [rbp+0h]
  __int128 v76; // [rsp+118h] [rbp+10h]
  __int128 v77; // [rsp+128h] [rbp+20h]
  __int128 v78; // [rsp+138h] [rbp+30h]
  __int128 v79; // [rsp+148h] [rbp+40h]
  __int128 v80; // [rsp+158h] [rbp+50h]
  __int128 v81; // [rsp+168h] [rbp+60h]
  __int128 v82; // [rsp+178h] [rbp+70h]
  __int128 v83; // [rsp+188h] [rbp+80h]
  __int128 v84; // [rsp+198h] [rbp+90h]
  __int128 v85; // [rsp+1A8h] [rbp+A0h]
  __int64 v86; // [rsp+1B8h] [rbp+B0h]
  EVENT_DATA_DESCRIPTOR v87; // [rsp+1C8h] [rbp+C0h] BYREF
  char *v88; // [rsp+1E8h] [rbp+E0h]
  __int64 v89; // [rsp+1F0h] [rbp+E8h]
  char *v90; // [rsp+1F8h] [rbp+F0h]
  __int64 v91; // [rsp+200h] [rbp+F8h]
  unsigned int *v92; // [rsp+208h] [rbp+100h]
  __int64 v93; // [rsp+210h] [rbp+108h]
  float *v94; // [rsp+218h] [rbp+110h]
  __int64 v95; // [rsp+220h] [rbp+118h]
  float *v96; // [rsp+228h] [rbp+120h]
  __int64 v97; // [rsp+230h] [rbp+128h]
  __int16 *v98; // [rsp+238h] [rbp+130h]
  __int64 v99; // [rsp+240h] [rbp+138h]
  unsigned int *v100; // [rsp+248h] [rbp+140h]
  __int64 v101; // [rsp+250h] [rbp+148h]
  unsigned int *v102; // [rsp+258h] [rbp+150h]
  __int64 v103; // [rsp+260h] [rbp+158h]
  unsigned int *v104; // [rsp+268h] [rbp+160h]
  __int64 v105; // [rsp+270h] [rbp+168h]
  char *v106; // [rsp+278h] [rbp+170h]
  __int64 v107; // [rsp+280h] [rbp+178h]
  char *v108; // [rsp+288h] [rbp+180h]
  __int64 v109; // [rsp+290h] [rbp+188h]
  char *v110; // [rsp+298h] [rbp+190h]
  __int64 v111; // [rsp+2A0h] [rbp+198h]
  unsigned int *v112; // [rsp+2A8h] [rbp+1A0h]
  __int64 v113; // [rsp+2B0h] [rbp+1A8h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+2B8h] [rbp+1B0h] BYREF
  char *v115; // [rsp+2D8h] [rbp+1D0h]
  __int64 v116; // [rsp+2E0h] [rbp+1D8h]
  char *v117; // [rsp+2E8h] [rbp+1E0h]
  __int64 v118; // [rsp+2F0h] [rbp+1E8h]
  unsigned int *v119; // [rsp+2F8h] [rbp+1F0h]
  __int64 v120; // [rsp+300h] [rbp+1F8h]
  float *v121; // [rsp+308h] [rbp+200h]
  __int64 v122; // [rsp+310h] [rbp+208h]
  float *v123; // [rsp+318h] [rbp+210h]
  __int64 v124; // [rsp+320h] [rbp+218h]
  __int16 *v125; // [rsp+328h] [rbp+220h]
  __int64 v126; // [rsp+330h] [rbp+228h]
  unsigned int *v127; // [rsp+338h] [rbp+230h]
  __int64 v128; // [rsp+340h] [rbp+238h]
  unsigned int *v129; // [rsp+348h] [rbp+240h]
  __int64 v130; // [rsp+350h] [rbp+248h]
  EVENT_DATA_DESCRIPTOR v131; // [rsp+358h] [rbp+250h] BYREF
  char *v132; // [rsp+378h] [rbp+270h]
  __int64 v133; // [rsp+380h] [rbp+278h]
  char *v134; // [rsp+388h] [rbp+280h]
  __int64 v135; // [rsp+390h] [rbp+288h]
  unsigned int *v136; // [rsp+398h] [rbp+290h]
  __int64 v137; // [rsp+3A0h] [rbp+298h]
  float *v138; // [rsp+3A8h] [rbp+2A0h]
  __int64 v139; // [rsp+3B0h] [rbp+2A8h]
  float *v140; // [rsp+3B8h] [rbp+2B0h]
  __int64 v141; // [rsp+3C0h] [rbp+2B8h]
  __int16 *v142; // [rsp+3C8h] [rbp+2C0h]
  __int64 v143; // [rsp+3D0h] [rbp+2C8h]
  unsigned int *v144; // [rsp+3D8h] [rbp+2D0h]
  __int64 v145; // [rsp+3E0h] [rbp+2D8h]
  unsigned int *v146; // [rsp+3E8h] [rbp+2E0h]
  __int64 v147; // [rsp+3F0h] [rbp+2E8h]

  v1 = (char *)a1 + 528;
  v3 = 0x546000u / BYTE3(qword_1C01D0CE4);
  v4 = 8.0 / (double)BYTE2(qword_1C01D0CE4);
  CitpDPCalcInit((struct _CIT_DP_CALC_CONTEXT *)v71, v4, (double)(((unsigned int)qword_1C01D0CE4 >> 2) & 0xF) * 0.025);
  v6 = (const struct _CIT_DP_MEMOIZATION_CONTEXT *)(v1 + 88);
  if ( *((double *)v1 + 11) != v4 || *((_DWORD *)v1 + 24) != v3 )
    CitDPMemoizationInitialize(
      (struct _CIT_DP_MEMOIZATION_CONTEXT *)(v1 + 88),
      (const struct _CIT_DP_CALC_CONTEXT *)v71,
      v3,
      v5);
  CitpStatIncrement((unsigned __int16 *)v1 + 2, 1);
  v7 = *((_OWORD *)v1 + 1);
  v72 = *(_OWORD *)v1;
  v8 = *((_OWORD *)v1 + 2);
  v73 = v7;
  v9 = *((_OWORD *)v1 + 3);
  v74 = v8;
  v10 = *((_OWORD *)v1 + 4);
  v75 = v9;
  v11 = *((_OWORD *)v1 + 5);
  v76 = v10;
  v12 = *((_OWORD *)v1 + 6);
  v77 = v11;
  v13 = *((_OWORD *)v1 + 8);
  v78 = v12;
  v79 = *((_OWORD *)v1 + 7);
  v14 = *((_OWORD *)v1 + 9);
  v80 = v13;
  v15 = *((_OWORD *)v1 + 10);
  v81 = v14;
  v16 = *((_OWORD *)v1 + 11);
  v82 = v15;
  v17 = *((_OWORD *)v1 + 12);
  v83 = v16;
  v18 = *((_OWORD *)v1 + 13);
  v19 = *((_QWORD *)v1 + 28);
  v84 = v17;
  v85 = v18;
  v86 = v19;
  v20 = MEMORY[0xFFFFF78000000014];
  v21 = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - *((_DWORD *)a1 + 190);
  *((_DWORD *)a1 + 190) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  *((_QWORD *)v1 + 4) = v20;
  memset(v1 + 40, 0, 0x2CuLL);
  if ( CitpDPDataSave(a1) >= 0 )
  {
    v22 = 0;
    for ( i = (_DWORD *)&v74 + 2; ; ++i )
    {
      v69 = *i / 0x3E8u;
      v56 = CitpDPProcessDuration(v6, (const struct _CIT_DP_CALC_CONTEXT *)v71, v22, v69);
      if ( (qword_1C01D0CE4 & 1) != 0 )
      {
        if ( hProvider > 5u )
        {
          if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x800000000800uLL) )
          {
            v47 = 4;
            v25 = v4;
            v116 = 1LL;
            v115 = &v47;
            v48 = v22;
            v117 = &v48;
            v118 = 1LL;
            v119 = &v56;
            v121 = &v57;
            v123 = &v58;
            v125 = &v53;
            v57 = v25;
            v120 = 4LL;
            v127 = &v59;
            v59 = dword_1C01D0CE0 / 0x3E8u;
            v58 = (float)v3;
            v122 = 4LL;
            v60 = v21 / 0x3E8;
            v124 = 4LL;
            v53 = (v24 >> 2) & 0xF;
            v126 = 2LL;
            v128 = 4LL;
            v129 = &v60;
            v130 = 4LL;
            TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C01A2CA7, 0LL, 0LL, 0xAu, &pData);
          }
LABEL_13:
          if ( hProvider > 5u )
          {
            if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000800uLL) )
            {
              v89 = 1LL;
              v51 = 4;
              v88 = &v51;
              v52 = v22;
              v90 = &v52;
              v28 = v4;
              v91 = 1LL;
              v92 = &v56;
              v93 = 4LL;
              v94 = &v65;
              v96 = &v66;
              v65 = v28;
              v55 = ((unsigned int)qword_1C01D0CE4 >> 2) & 0xF;
              v95 = 4LL;
              v98 = &v55;
              v97 = 4LL;
              v100 = &v67;
              v67 = dword_1C01D0CE0 / 0x3E8u;
              v66 = (float)v3;
              v99 = 2LL;
              v102 = &v68;
              v104 = &v69;
              v106 = (char *)&v72 + 8;
              v108 = (char *)&v72 + 6;
              v110 = (char *)&v72 + 4;
              v101 = 4LL;
              v68 = v21 / 0x3E8;
              v103 = 4LL;
              v105 = 4LL;
              v107 = 2LL;
              v109 = 2LL;
              v111 = 2LL;
              v29 = Citp100NSToMS(v20 - v74);
              v113 = v30;
              v70 = (unsigned int)((v29 * (unsigned __int64)v31) >> 32) >> 6;
              v112 = &v70;
              TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C01A27AE, 0LL, 0LL, cData, &v87);
            }
          }
        }
      }
      else if ( hProvider > 5u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000800uLL) )
        {
          v49 = 4;
          v27 = v4;
          v133 = 1LL;
          v132 = &v49;
          v50 = v22;
          v134 = &v50;
          v135 = 1LL;
          v136 = &v56;
          v138 = &v61;
          v140 = &v62;
          v142 = &v54;
          v61 = v27;
          v137 = 4LL;
          v144 = &v63;
          v63 = dword_1C01D0CE0 / 0x3E8u;
          v62 = (float)v3;
          v139 = 4LL;
          v64 = v21 / 0x3E8;
          v141 = 4LL;
          v54 = (v26 >> 2) & 0xF;
          v143 = 2LL;
          v145 = 4LL;
          v146 = &v64;
          v147 = 4LL;
          TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C01A2D20, 0LL, 0LL, 0xAu, &v131);
        }
        goto LABEL_13;
      }
      if ( ++v22 >= 0xB )
        return;
    }
  }
  v33 = v73;
  *(_OWORD *)v1 = v72;
  v34 = v74;
  *((_OWORD *)v1 + 1) = v33;
  v35 = v75;
  *((_OWORD *)v1 + 2) = v34;
  v36 = v76;
  *((_OWORD *)v1 + 3) = v35;
  v37 = v77;
  *((_OWORD *)v1 + 4) = v36;
  v38 = v78;
  *((_OWORD *)v1 + 5) = v37;
  v39 = v79;
  *((_OWORD *)v1 + 6) = v38;
  v40 = v1 + 128;
  *((_OWORD *)v40 - 1) = v39;
  v41 = v81;
  *(_OWORD *)v40 = v80;
  v42 = v82;
  *((_OWORD *)v40 + 1) = v41;
  v43 = v83;
  *((_OWORD *)v40 + 2) = v42;
  v44 = v84;
  *((_OWORD *)v40 + 3) = v43;
  v45 = v85;
  v46 = v86;
  *((_OWORD *)v40 + 4) = v44;
  *((_OWORD *)v40 + 5) = v45;
  *((_QWORD *)v40 + 12) = v46;
}
