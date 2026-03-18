/*
 * XREFs of ?CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagMONITOR@@PEAUtagSHELL_INPUT_USAGE_DATA_INFO@@@Z @ 0x1C00836E0
 * Callers:
 *     CitProcessCallout @ 0x1C003625C (CitProcessCallout.c)
 *     ?CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x1C0082D78 (-CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@I@Z.c)
 *     ?CitpProcessForegroundChange@@YAHPEAUtagPROCESSINFO@@PEAUtagWND@@0PEAUtagMONITOR@@PEAUtagSHELL_INPUT_USAGE_DATA_INFO@@@Z @ 0x1C00835D0 (-CitpProcessForegroundChange@@YAHPEAUtagPROCESSINFO@@PEAUtagWND@@0PEAUtagMONITOR@@PEAUtagSHELL_I.c)
 *     CitSessionConnectChange @ 0x1C0084DC0 (CitSessionConnectChange.c)
 *     CitDisplayPowerChange @ 0x1C00B176C (CitDisplayPowerChange.c)
 *     ?CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z @ 0x1C01C65A4 (-CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z.c)
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x1C0031E30 (TraceLoggingProviderEnabled.c)
 *     _TlgKeywordOn @ 0x1C0031E60 (_TlgKeywordOn.c)
 *     ?CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z @ 0x1C00366D0 (-CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z.c)
 *     ?CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_PROCESS@@G@Z @ 0x1C00367D8 (-CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT.c)
 *     ?CitpProcessGetAppSessionId@@YA?AU_GUID@@PEAUtagPROCESSINFO@@PEAI@Z @ 0x1C00368E4 (-CitpProcessGetAppSessionId@@YA-AU_GUID@@PEAUtagPROCESSINFO@@PEAI@Z.c)
 *     ?CitpInputTimesAddTo@@YAXPEAU_CIT_INPUT_TIMES@@PEBU1@@Z @ 0x1C0038680 (-CitpInputTimesAddTo@@YAXPEAU_CIT_INPUT_TIMES@@PEBU1@@Z.c)
 *     ?CalculateUpToTime@CIT_USER_ACTIVE_TRACKER@@QEAAXI@Z @ 0x1C003892C (-CalculateUpToTime@CIT_USER_ACTIVE_TRACKER@@QEAAXI@Z.c)
 *     ?CitpPostUpdateUseInfoLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x1C0082100 (-CitpPostUpdateUseInfoLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z.c)
 *     ?CitpInteractionSummariesFlush@@YAXPEAU_CIT_IMPACT_CONTEXT@@_N@Z @ 0x1C0082E88 (-CitpInteractionSummariesFlush@@YAXPEAU_CIT_IMPACT_CONTEXT@@_N@Z.c)
 *     ?CalculateDeltaFrom@CIT_USER_ACTIVITY_STAT@@QEAA?AU1@AEBU1@@Z @ 0x1C0084114 (-CalculateDeltaFrom@CIT_USER_ACTIVITY_STAT@@QEAA-AU1@AEBU1@@Z.c)
 *     ?CitpGetForegroundWindowInfo@@YAHPEAU_CIT_WINDOW_INFO@@PEAUtagPROCESSINFO@@PEAUtagWND@@@Z @ 0x1C0084198 (-CitpGetForegroundWindowInfo@@YAHPEAU_CIT_WINDOW_INFO@@PEAUtagPROCESSINFO@@PEAUtagWND@@@Z.c)
 *     ?CitpAllowForegroundProcess@@YAHPEBU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0084224 (-CitpAllowForegroundProcess@@YAHPEBU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     _TlgWrite @ 0x1C0084244 (_TlgWrite.c)
 *     ?CitpBitmapUpdateForTimeRange@@YAXPEAU_CIT_BITMAP@@IIII@Z @ 0x1C00842E0 (-CitpBitmapUpdateForTimeRange@@YAXPEAU_CIT_BITMAP@@IIII@Z.c)
 *     CitGetMonitorInfo @ 0x1C0084CF0 (CitGetMonitorInfo.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     ?CitpDPDataLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C01C699C (-CitpDPDataLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpProcessEnsureProgData@@YAPEAU_CIT_PROG_DATA@@PEAUtagPROCESSINFO@@@Z @ 0x1C01C74D0 (-CitpProcessEnsureProgData@@YAPEAU_CIT_PROG_DATA@@PEAUtagPROCESSINFO@@@Z.c)
 *     ?CitpProgDataNotifyUseUpdate@@YAXPEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_PROG_DATA@@@Z @ 0x1C01C79D8 (-CitpProgDataNotifyUseUpdate@@YAXPEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_PROG_DATA@@@Z.c)
 */

__int64 __fastcall CitpSetForegroundProcess(
        struct _CIT_IMPACT_CONTEXT *a1,
        unsigned int a2,
        struct tagPROCESSINFO *a3,
        struct tagWND *a4,
        struct tagMONITOR *a5,
        struct tagSHELL_INPUT_USAGE_DATA_INFO *a6)
{
  unsigned int v6; // r13d
  __int64 v7; // r15
  char *v10; // rbx
  __int64 v11; // rbx
  __int64 v12; // rdi
  unsigned int v13; // eax
  unsigned int v14; // eax
  int v15; // edx
  unsigned int v16; // r8d
  int v17; // ecx
  bool v18; // cf
  unsigned int v19; // eax
  int v20; // edx
  __int64 v21; // r13
  int v22; // eax
  unsigned __int8 v23; // cl
  int v24; // eax
  struct tagPROCESSINFO *v25; // rdx
  __int128 v26; // xmm0
  __int64 v27; // r9
  __int64 v28; // r10
  __int64 v29; // r11
  struct _CIT_INTERACTION_SUMMARY *v30; // rax
  struct _CIT_INTERACTION_SUMMARY *v31; // r11
  unsigned int v32; // ecx
  int v33; // r10d
  unsigned int v34; // r9d
  int v35; // r8d
  int v36; // edx
  unsigned int v37; // eax
  int v38; // ecx
  int v39; // eax
  unsigned int v40; // ecx
  int v41; // r8d
  int v42; // edx
  unsigned int v43; // eax
  int v44; // ecx
  int v45; // eax
  unsigned int v46; // ecx
  int v47; // r8d
  unsigned int v48; // eax
  __int64 v49; // r11
  __int64 v50; // rcx
  __int64 v51; // r11
  __int64 v52; // rbx
  int v53; // eax
  _QWORD *v54; // r14
  __int128 v55; // xmm0
  unsigned int v56; // eax
  __int64 v58; // rcx
  int v59; // edx
  struct _CIT_PROG_DATA *v60; // rax
  struct _CIT_PROG_DATA *v61; // r10
  unsigned int v62; // ecx
  unsigned int v63; // r9d
  int v64; // r8d
  int v65; // edx
  unsigned int v66; // eax
  char v67; // [rsp+30h] [rbp-D0h] BYREF
  char v68; // [rsp+31h] [rbp-CFh] BYREF
  char v69; // [rsp+32h] [rbp-CEh] BYREF
  char v70; // [rsp+33h] [rbp-CDh] BYREF
  char v71; // [rsp+34h] [rbp-CCh] BYREF
  char v72; // [rsp+35h] [rbp-CBh] BYREF
  char v73; // [rsp+36h] [rbp-CAh] BYREF
  char v74; // [rsp+37h] [rbp-C9h] BYREF
  unsigned int v75; // [rsp+38h] [rbp-C8h] BYREF
  __int16 v76; // [rsp+3Ch] [rbp-C4h] BYREF
  __int16 v77; // [rsp+3Eh] [rbp-C2h] BYREF
  unsigned int v78; // [rsp+40h] [rbp-C0h] BYREF
  int v79; // [rsp+48h] [rbp-B8h] BYREF
  int v80; // [rsp+4Ch] [rbp-B4h]
  int v81; // [rsp+50h] [rbp-B0h] BYREF
  int v82; // [rsp+54h] [rbp-ACh]
  unsigned int v83; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v84; // [rsp+5Ch] [rbp-A4h] BYREF
  unsigned int v85; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v86; // [rsp+68h] [rbp-98h] BYREF
  __int64 v87; // [rsp+70h] [rbp-90h] BYREF
  __int64 v88; // [rsp+78h] [rbp-88h] BYREF
  struct tagWND *v89; // [rsp+80h] [rbp-80h]
  struct tagMONITOR *v90; // [rsp+88h] [rbp-78h]
  __int64 v91; // [rsp+90h] [rbp-70h] BYREF
  struct _GUID v92; // [rsp+98h] [rbp-68h] BYREF
  struct _GUID v93; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v94; // [rsp+B8h] [rbp-48h] BYREF
  int v95; // [rsp+C0h] [rbp-40h]
  __int64 v96; // [rsp+C8h] [rbp-38h] BYREF
  int v97; // [rsp+D0h] [rbp-30h]
  __int128 v98; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v99; // [rsp+E8h] [rbp-18h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+100h] [rbp+0h] BYREF
  __int64 *v101; // [rsp+120h] [rbp+20h]
  __int64 v102; // [rsp+128h] [rbp+28h]
  char *v103; // [rsp+130h] [rbp+30h]
  __int64 v104; // [rsp+138h] [rbp+38h]
  __int128 *v105; // [rsp+140h] [rbp+40h]
  __int64 v106; // [rsp+148h] [rbp+48h]
  char *v107; // [rsp+150h] [rbp+50h]
  __int64 v108; // [rsp+158h] [rbp+58h]
  __int128 *v109; // [rsp+160h] [rbp+60h]
  __int64 v110; // [rsp+168h] [rbp+68h]
  __int128 *v111; // [rsp+170h] [rbp+70h]
  __int64 v112; // [rsp+178h] [rbp+78h]
  unsigned int *v113; // [rsp+180h] [rbp+80h]
  __int64 v114; // [rsp+188h] [rbp+88h]
  int *v115; // [rsp+190h] [rbp+90h]
  __int64 v116; // [rsp+198h] [rbp+98h]
  int *v117; // [rsp+1A0h] [rbp+A0h]
  __int64 v118; // [rsp+1A8h] [rbp+A8h]
  __int16 *v119; // [rsp+1B0h] [rbp+B0h]
  __int64 v120; // [rsp+1B8h] [rbp+B8h]
  __int64 v121; // [rsp+1C0h] [rbp+C0h]
  __int64 v122; // [rsp+1C8h] [rbp+C8h]
  __int64 v123; // [rsp+1D0h] [rbp+D0h]
  __int64 v124; // [rsp+1D8h] [rbp+D8h]
  __int64 v125; // [rsp+1E0h] [rbp+E0h]
  __int64 v126; // [rsp+1E8h] [rbp+E8h]
  __int64 v127; // [rsp+1F0h] [rbp+F0h]
  __int64 v128; // [rsp+1F8h] [rbp+F8h]
  __int64 v129; // [rsp+200h] [rbp+100h]
  __int64 v130; // [rsp+208h] [rbp+108h]
  __int64 v131; // [rsp+210h] [rbp+110h]
  __int64 v132; // [rsp+218h] [rbp+118h]
  __int64 v133; // [rsp+220h] [rbp+120h]
  __int64 v134; // [rsp+228h] [rbp+128h]
  int *v135; // [rsp+230h] [rbp+130h]
  __int64 v136; // [rsp+238h] [rbp+138h]
  __int64 *v137; // [rsp+240h] [rbp+140h]
  __int64 v138; // [rsp+248h] [rbp+148h]
  char *v139; // [rsp+250h] [rbp+150h]
  __int64 v140; // [rsp+258h] [rbp+158h]
  char *v141; // [rsp+260h] [rbp+160h]
  __int64 v142; // [rsp+268h] [rbp+168h]
  char *v143; // [rsp+270h] [rbp+170h]
  __int64 v144; // [rsp+278h] [rbp+178h]
  char *v145; // [rsp+280h] [rbp+180h]
  __int64 v146; // [rsp+288h] [rbp+188h]
  __int16 *v147; // [rsp+290h] [rbp+190h]
  __int64 v148; // [rsp+298h] [rbp+198h]
  char *v149; // [rsp+2A0h] [rbp+1A0h]
  __int64 v150; // [rsp+2A8h] [rbp+1A8h]
  __int64 v151; // [rsp+2B0h] [rbp+1B0h]
  __int64 v152; // [rsp+2B8h] [rbp+1B8h]
  unsigned int *v153; // [rsp+2C0h] [rbp+1C0h]
  __int64 v154; // [rsp+2C8h] [rbp+1C8h]
  __int64 v155; // [rsp+2D0h] [rbp+1D0h]
  __int64 v156; // [rsp+2D8h] [rbp+1D8h]
  EVENT_DATA_DESCRIPTOR v157; // [rsp+2E0h] [rbp+1E0h] BYREF
  __int64 *v158; // [rsp+300h] [rbp+200h]
  __int64 v159; // [rsp+308h] [rbp+208h]
  char *v160; // [rsp+310h] [rbp+210h]
  __int64 v161; // [rsp+318h] [rbp+218h]
  __int128 *v162; // [rsp+320h] [rbp+220h]
  __int64 v163; // [rsp+328h] [rbp+228h]
  char *v164; // [rsp+330h] [rbp+230h]
  __int64 v165; // [rsp+338h] [rbp+238h]
  __int128 *v166; // [rsp+340h] [rbp+240h]
  __int64 v167; // [rsp+348h] [rbp+248h]
  __int128 *v168; // [rsp+350h] [rbp+250h]
  __int64 v169; // [rsp+358h] [rbp+258h]
  unsigned int *v170; // [rsp+360h] [rbp+260h]
  __int64 v171; // [rsp+368h] [rbp+268h]
  __int64 *v172; // [rsp+370h] [rbp+270h]
  __int64 v173; // [rsp+378h] [rbp+278h]
  char *v174; // [rsp+380h] [rbp+280h]
  __int64 v175; // [rsp+388h] [rbp+288h]
  char *v176; // [rsp+390h] [rbp+290h]
  __int64 v177; // [rsp+398h] [rbp+298h]
  char *v178; // [rsp+3A0h] [rbp+2A0h]
  __int64 v179; // [rsp+3A8h] [rbp+2A8h]
  char *v180; // [rsp+3B0h] [rbp+2B0h]
  __int64 v181; // [rsp+3B8h] [rbp+2B8h]
  unsigned int *v182; // [rsp+3C0h] [rbp+2C0h]
  __int64 v183; // [rsp+3C8h] [rbp+2C8h]
  char *v184; // [rsp+3D0h] [rbp+2D0h]
  __int64 v185; // [rsp+3D8h] [rbp+2D8h]
  unsigned int *v186; // [rsp+3E0h] [rbp+2E0h]
  __int64 v187; // [rsp+3E8h] [rbp+2E8h]
  _QWORD *v188; // [rsp+3F0h] [rbp+2F0h]
  __int64 v189; // [rsp+3F8h] [rbp+2F8h]

  v6 = 0;
  v7 = (__int64)a3;
  v89 = a4;
  v90 = a5;
  v75 = 0;
  if ( *((struct tagPROCESSINFO **)a1 + 15) == a3 )
    return 0LL;
  v10 = (char *)a1 + 192;
  CIT_USER_ACTIVE_TRACKER::CalculateUpToTime((struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 192), a2);
  v11 = *((_QWORD *)v10 + 2);
  v86 = v11;
  CIT_USER_ACTIVE_TRACKER::CalculateUpToTime((struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 216), a2);
  v12 = *((_QWORD *)a1 + 29);
  v13 = v11 - *((_DWORD *)a1 + 135);
  v87 = v12;
  if ( v13 > dword_1C02157EC )
  {
    v59 = 3;
LABEL_60:
    CitpPostUpdateUseInfoLog(a1, v59);
    *((_DWORD *)a1 + 135) = v11;
    *((_DWORD *)a1 + 134) = a2;
    goto LABEL_4;
  }
  if ( a2 - *((_DWORD *)a1 + 134) > 2 * dword_1C02157EC )
  {
    v59 = 4;
    goto LABEL_60;
  }
LABEL_4:
  if ( a2 - *((_DWORD *)a1 + 196) >= dword_1C0215800 )
    CitpDPDataLog(a1);
  if ( *((_QWORD *)a1 + 15) )
  {
    v14 = *((_DWORD *)a1 + 71);
    v15 = -1;
    v16 = a2 - *((_DWORD *)a1 + 34);
    v78 = v16;
    v17 = v14 + 1;
    v18 = v14 + 1 < v14;
    v19 = *((_DWORD *)a1 + 72);
    if ( !v18 )
      v15 = v17;
    *((_DWORD *)a1 + 71) = v15;
    v20 = -1;
    if ( v19 + v16 >= v19 )
      v20 = v19 + v16;
    *((_DWORD *)a1 + 72) = v20;
    v21 = *(_QWORD *)(*((_QWORD *)a1 + 15) + 920LL);
    CIT_USER_ACTIVITY_STAT::CalculateDeltaFrom(&v86, &v79, (char *)a1 + 172);
    CIT_USER_ACTIVITY_STAT::CalculateDeltaFrom(&v87, &v81, (char *)a1 + 180);
    v22 = v81;
    *((_DWORD *)a1 + 148) += v81;
    v23 = *(_BYTE *)(v21 + 92);
    if ( (v23 & 0x1E) != 0 )
    {
      v58 = (v23 >> 1) & 0xF;
      if ( (unsigned int)v58 < 0xB )
        *((_DWORD *)a1 + v58 + 148) += v22;
    }
    if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&hProvider, 0, 0x800000000800uLL) )
    {
      v24 = *(_DWORD *)((char *)a1 + 166);
      v25 = (struct tagPROCESSINFO *)*((_QWORD *)a1 + 15);
      v96 = *(_QWORD *)((char *)a1 + 158);
      v97 = v24;
      CitpGetForegroundWindowInfo((struct _CIT_WINDOW_INFO *)&v96, v25, 0LL);
      if ( HIBYTE(qword_1C0215804) )
      {
        v26 = (__int128)*CitpProcessGetAppSessionId(&v92, *((struct tagPROCESSINFO **)a1 + 15), &v83);
        ++*((_QWORD *)a1 + 99);
        v98 = v26;
        if ( hProvider > 5u )
        {
          if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x800000000800uLL) )
          {
            v88 = 0x2000000LL;
            v101 = &v88;
            v103 = &v67;
            v105 = &v98;
            v107 = &v68;
            v109 = &v98;
            v111 = &v98;
            v113 = &v78;
            v115 = &v79;
            v117 = &v81;
            v76 = v80;
            v119 = &v76;
            v123 = v27 + 2;
            v125 = v27 + 4;
            v127 = v27 + 8;
            v129 = v27 + 10;
            v131 = v27 + 6;
            v133 = v27 + 14;
            v135 = &dword_1C02157E8;
            v137 = &v96;
            v139 = (char *)&v96 + 2;
            v141 = (char *)&v96 + 4;
            v143 = (char *)&v96 + 6;
            v69 = BYTE2(v97);
            v145 = &v69;
            v77 = v97;
            v147 = &v77;
            v102 = 8LL;
            v67 = 0;
            v104 = v29;
            v106 = 16LL;
            v68 = v29;
            v108 = v29;
            v110 = 16LL;
            v112 = 16LL;
            v114 = 4LL;
            v116 = 4LL;
            v118 = 4LL;
            v120 = 2LL;
            v121 = v27;
            v122 = 2LL;
            v124 = 2LL;
            v126 = 2LL;
            v128 = 2LL;
            v130 = 2LL;
            v132 = 2LL;
            v134 = 2LL;
            v136 = 4LL;
            v138 = 2LL;
            v140 = 2LL;
            v142 = 2LL;
            v144 = 2LL;
            v146 = v29;
            v148 = 2LL;
            v70 = v29;
            v150 = v29;
            v149 = &v70;
            v151 = v27 + 12;
            v153 = &v83;
            v152 = 2LL;
            v154 = 4LL;
            v155 = v28;
            v156 = 8LL;
            TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C01E7CF3, 0LL, 0LL, 0x1Eu, &pData);
          }
        }
      }
      if ( BYTE5(qword_1C0215804) )
      {
        v60 = CitpProcessEnsureProgData(*(struct tagPROCESSINFO **)(v21 + 8));
        v61 = v60;
        if ( v60 )
        {
          v62 = *((_DWORD *)v60 + 20);
          v63 = v78;
          v64 = -1;
          if ( v62 + 1 >= v62 )
            v64 = v62 + 1;
          v65 = -1;
          *((_DWORD *)v60 + 20) = v64;
          v66 = *((_DWORD *)v60 + 21);
          if ( v66 + v63 >= v66 )
            v65 = v66 + v63;
          *((_DWORD *)v61 + 21) = v65;
          CitpProgDataNotifyUseUpdate(qword_1C0215810, v61);
        }
      }
      if ( (qword_1C02157F4 & 1) != 0 )
      {
        v30 = CitpInteractionSummaryEnsure(a1, (struct tagPROCESSINFO **)v21, 2);
        v31 = v30;
        if ( v30 )
        {
          v32 = *((_DWORD *)v30 + 30);
          v33 = -1;
          v34 = v78;
          v35 = -1;
          if ( v32 + 1 >= v32 )
            v35 = v32 + 1;
          v36 = -1;
          *((_DWORD *)v30 + 30) = v35;
          v37 = *((_DWORD *)v30 + 31);
          v38 = v37 + v34;
          v18 = v37 + v34 < v37;
          v39 = -1;
          if ( !v18 )
            v36 = v38;
          *((_DWORD *)v31 + 31) = v36;
          v40 = *((_DWORD *)v31 + 32);
          v41 = v79;
          if ( v40 + (v80 & 0x7FFFFFFF) >= v40 )
            v39 = v40 + (v80 & 0x7FFFFFFF);
          v42 = -1;
          *((_DWORD *)v31 + 32) = v39;
          v43 = *((_DWORD *)v31 + 33);
          v44 = v43 + v41;
          v18 = v43 + v41 < v43;
          v45 = -1;
          if ( !v18 )
            v42 = v44;
          *((_DWORD *)v31 + 33) = v42;
          v46 = *((_DWORD *)v31 + 34);
          v47 = v81;
          if ( v46 + (v82 & 0x7FFFFFFF) >= v46 )
            v45 = v46 + (v82 & 0x7FFFFFFF);
          *((_DWORD *)v31 + 34) = v45;
          v48 = *((_DWORD *)v31 + 35);
          if ( v48 + v47 >= v48 )
            v33 = v48 + v47;
          *((_DWORD *)v31 + 35) = v33;
          CitpInputTimesAddTo(
            (struct _CIT_INTERACTION_SUMMARY *)((char *)v31 + 32),
            (struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 140));
          *(_QWORD *)(v49 + 50) = v96;
          *(_DWORD *)(v49 + 58) = v97;
          CitpBitmapUpdateForTimeRange(
            (struct _CIT_BITMAP *)(v49 + 144),
            *((_DWORD *)a1 + 34),
            a2,
            *((_DWORD *)a1 + 208),
            dword_1C02157FC);
        }
        if ( (qword_1C02157F4 & 1) != 0 && a2 - *((_DWORD *)a1 + 208) > HIDWORD(qword_1C02157F4) )
          CitpInteractionSummariesFlush(a1, 0);
      }
      *(_DWORD *)(v21 + 80) = a2;
    }
    v6 = v75;
  }
  if ( a6 )
  {
    v6 = 1;
    *((_WORD *)a6 + 4) = *((_WORD *)a1 + 71);
    *((_WORD *)a6 + 5) = *((_WORD *)a1 + 72);
    *((_WORD *)a6 + 6) = *((_WORD *)a1 + 73);
    *((_WORD *)a6 + 7) = *((_WORD *)a1 + 74);
    *((_WORD *)a6 + 8) = *((_WORD *)a1 + 75);
    *((_WORD *)a6 + 9) = *((_WORD *)a1 + 77);
    *((_WORD *)a6 + 10) = *((_WORD *)a1 + 76);
  }
  if ( v7 )
  {
    v50 = v7 & -(__int64)((unsigned int)CitpAllowForegroundProcess(a1) != 0);
    v7 = v50;
    if ( v50 )
      v7 = v50 & -(__int64)(CitpProcessEnsureContext((struct _CIT_PROCESS **)v50) != 0LL);
  }
  *((_QWORD *)a1 + 15) = v7;
  *((_DWORD *)a1 + 34) = a2;
  *(_QWORD *)((char *)a1 + 172) = v11;
  *(_QWORD *)((char *)a1 + 180) = v12;
  CitpInputTimesAddTo(
    (struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 248),
    (struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 140));
  *(_QWORD *)v51 = 0LL;
  *(_QWORD *)(v51 + 8) = 0LL;
  *(_WORD *)(v51 + 16) = 0;
  *(_QWORD *)((char *)a1 + 158) = 0LL;
  *(_DWORD *)((char *)a1 + 166) = 0;
  if ( v7 )
  {
    v52 = *(_QWORD *)(v7 + 920);
    if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&hProvider, 0, 0x800000000800uLL) )
    {
      if ( (qword_1C02157F4 & 1) != 0
        && *((struct _CIT_IMPACT_CONTEXT **)a1 + 101) == (struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 808) )
      {
        *((_DWORD *)a1 + 208) = a2;
        *((_QWORD *)a1 + 103) = MEMORY[0xFFFFF78000000014];
      }
      v94 = 0LL;
      v95 = 0;
      if ( !(unsigned int)CitpGetForegroundWindowInfo((struct _CIT_WINDOW_INFO *)&v94, (struct tagPROCESSINFO *)v7, v89) )
        CitGetMonitorInfo(v90, &v94);
      v53 = v95;
      *(_QWORD *)((char *)a1 + 158) = v94;
      *(_DWORD *)((char *)a1 + 166) = v53;
      if ( HIBYTE(qword_1C0215804) )
      {
        v54 = (_QWORD *)((char *)a1 + 792);
        v55 = (__int128)*CitpProcessGetAppSessionId(&v93, (struct tagPROCESSINFO *)v7, &v85);
        v56 = a2 - *(_DWORD *)(v52 + 80);
        ++*v54;
        v99 = v55;
        v84 = v56;
        if ( hProvider > 5u )
        {
          if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x800000000800uLL) )
          {
            v91 = 0x2000000LL;
            v158 = &v91;
            v160 = &v71;
            v162 = &v99;
            v164 = &v72;
            v166 = &v99;
            v168 = &v99;
            v170 = &v84;
            v172 = &v94;
            v174 = (char *)&v94 + 2;
            v176 = (char *)&v94 + 4;
            v178 = (char *)&v94 + 6;
            v73 = BYTE2(v95);
            v180 = &v73;
            LOWORD(v75) = v95;
            v182 = &v75;
            v184 = &v74;
            v186 = &v85;
            v159 = 8LL;
            v71 = 1;
            v161 = 1LL;
            v163 = 16LL;
            v72 = 1;
            v165 = 1LL;
            v167 = 16LL;
            v169 = 16LL;
            v171 = 4LL;
            v173 = 2LL;
            v175 = 2LL;
            v177 = 2LL;
            v179 = 2LL;
            v181 = 1LL;
            v183 = 2LL;
            v74 = 1;
            v185 = 1LL;
            v187 = 4LL;
            v188 = v54;
            v189 = 8LL;
            TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C01E7BB9, 0LL, 0LL, 0x12u, &v157);
          }
        }
      }
    }
    *(_DWORD *)(v52 + 80) = a2;
  }
  return v6;
}
