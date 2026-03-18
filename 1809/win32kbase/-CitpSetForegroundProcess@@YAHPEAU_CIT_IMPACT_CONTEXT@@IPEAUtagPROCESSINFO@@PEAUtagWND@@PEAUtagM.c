/*
 * XREFs of ?CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagMONITOR@@PEAUtagSHELL_INPUT_USAGE_DATA_INFO@@@Z @ 0x1C0037F14
 * Callers:
 *     CitProcessCallout @ 0x1C00332B0 (CitProcessCallout.c)
 *     ?CitpProcessForegroundChange@@YAHPEAUtagPROCESSINFO@@PEAUtagWND@@0PEAUtagMONITOR@@PEAUtagSHELL_INPUT_USAGE_DATA_INFO@@@Z @ 0x1C003A210 (-CitpProcessForegroundChange@@YAHPEAUtagPROCESSINFO@@PEAUtagWND@@0PEAUtagMONITOR@@PEAUtagSHELL_I.c)
 *     ?CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x1C0079478 (-CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@I@Z.c)
 *     CitSessionConnectChange @ 0x1C0093510 (CitSessionConnectChange.c)
 *     CitDisplayPowerChange @ 0x1C00A3F5C (CitDisplayPowerChange.c)
 *     ?CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z @ 0x1C01839F8 (-CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z.c)
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x1C0030480 (TraceLoggingProviderEnabled.c)
 *     _TlgKeywordOn @ 0x1C00304B0 (_TlgKeywordOn.c)
 *     ?CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z @ 0x1C003370C (-CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z.c)
 *     ?CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_PROCESS@@G@Z @ 0x1C003382C (-CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT.c)
 *     ?CitpProcessGetAppSessionId@@YA?AU_GUID@@PEAUtagPROCESSINFO@@PEAI@Z @ 0x1C0033938 (-CitpProcessGetAppSessionId@@YA-AU_GUID@@PEAUtagPROCESSINFO@@PEAI@Z.c)
 *     ?CitpInputTimesAddTo@@YAXPEAU_CIT_INPUT_TIMES@@PEBU1@@Z @ 0x1C0034774 (-CitpInputTimesAddTo@@YAXPEAU_CIT_INPUT_TIMES@@PEBU1@@Z.c)
 *     ?CalculateUpToTime@CIT_USER_ACTIVE_TRACKER@@QEAAXI@Z @ 0x1C00360A8 (-CalculateUpToTime@CIT_USER_ACTIVE_TRACKER@@QEAAXI@Z.c)
 *     ?CalculateDeltaFrom@CIT_USER_ACTIVITY_STAT@@QEAA?AU1@AEBU1@@Z @ 0x1C00388B8 (-CalculateDeltaFrom@CIT_USER_ACTIVITY_STAT@@QEAA-AU1@AEBU1@@Z.c)
 *     ?CitpAllowForegroundProcess@@YAHPEBU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C003A358 (-CitpAllowForegroundProcess@@YAHPEBU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     _TlgWrite @ 0x1C003A4A8 (_TlgWrite.c)
 *     ?CitpGetForegroundWindowInfo@@YAHPEAU_CIT_WINDOW_INFO@@PEAUtagPROCESSINFO@@PEAUtagWND@@@Z @ 0x1C003A550 (-CitpGetForegroundWindowInfo@@YAHPEAU_CIT_WINDOW_INFO@@PEAUtagPROCESSINFO@@PEAUtagWND@@@Z.c)
 *     ?CitpInteractionSummariesFlush@@YAXPEAU_CIT_IMPACT_CONTEXT@@_N@Z @ 0x1C003ABE0 (-CitpInteractionSummariesFlush@@YAXPEAU_CIT_IMPACT_CONTEXT@@_N@Z.c)
 *     ?CitpBitmapUpdateForTimeRange@@YAXPEAU_CIT_BITMAP@@IIII@Z @ 0x1C003B33C (-CitpBitmapUpdateForTimeRange@@YAXPEAU_CIT_BITMAP@@IIII@Z.c)
 *     ?CitpPostUpdateUseInfoLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x1C0077D70 (-CitpPostUpdateUseInfoLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z.c)
 *     CitGetMonitorInfo @ 0x1C0085D80 (CitGetMonitorInfo.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     ?CitpDPDataLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0183DFC (-CitpDPDataLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpProcessEnsureProgData@@YAPEAU_CIT_PROG_DATA@@PEAUtagPROCESSINFO@@@Z @ 0x1C01848BC (-CitpProcessEnsureProgData@@YAPEAU_CIT_PROG_DATA@@PEAUtagPROCESSINFO@@@Z.c)
 *     ?CitpProgDataNotifyUseUpdate@@YAXPEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_PROG_DATA@@@Z @ 0x1C0184E10 (-CitpProgDataNotifyUseUpdate@@YAXPEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_PROG_DATA@@@Z.c)
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
  __int64 v24; // rcx
  _QWORD *v25; // r11
  __int64 v26; // rbx
  int v28; // eax
  struct tagPROCESSINFO *v29; // rdx
  __int128 v30; // xmm0
  __int64 v31; // r9
  __int64 v32; // r10
  __int64 v33; // r11
  struct _CIT_INTERACTION_SUMMARY *v34; // rax
  struct _CIT_INTERACTION_SUMMARY *v35; // r11
  unsigned int v36; // ecx
  int v37; // r10d
  unsigned int v38; // r9d
  int v39; // r8d
  int v40; // edx
  unsigned int v41; // eax
  int v42; // ecx
  int v43; // eax
  unsigned int v44; // ecx
  int v45; // r8d
  int v46; // edx
  unsigned int v47; // eax
  int v48; // ecx
  int v49; // eax
  unsigned int v50; // ecx
  int v51; // r8d
  unsigned int v52; // eax
  __int64 v53; // r11
  int v54; // eax
  _QWORD *v55; // r14
  __int128 v56; // xmm0
  unsigned int v57; // eax
  __int64 v58; // rcx
  unsigned int v59; // edx
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
  struct tagWND *v88; // [rsp+78h] [rbp-88h]
  struct tagMONITOR *v89; // [rsp+80h] [rbp-80h]
  struct _GUID v90; // [rsp+88h] [rbp-78h] BYREF
  struct _GUID v91; // [rsp+98h] [rbp-68h] BYREF
  __int64 v92; // [rsp+A8h] [rbp-58h] BYREF
  int v93; // [rsp+B0h] [rbp-50h]
  __int64 v94; // [rsp+B8h] [rbp-48h] BYREF
  int v95; // [rsp+C0h] [rbp-40h]
  __int128 v96; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v97; // [rsp+D8h] [rbp-28h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+F0h] [rbp-10h] BYREF
  char *v99; // [rsp+110h] [rbp+10h]
  __int64 v100; // [rsp+118h] [rbp+18h]
  __int128 *v101; // [rsp+120h] [rbp+20h]
  __int64 v102; // [rsp+128h] [rbp+28h]
  char *v103; // [rsp+130h] [rbp+30h]
  __int64 v104; // [rsp+138h] [rbp+38h]
  __int128 *v105; // [rsp+140h] [rbp+40h]
  __int64 v106; // [rsp+148h] [rbp+48h]
  __int128 *v107; // [rsp+150h] [rbp+50h]
  __int64 v108; // [rsp+158h] [rbp+58h]
  unsigned int *v109; // [rsp+160h] [rbp+60h]
  __int64 v110; // [rsp+168h] [rbp+68h]
  int *v111; // [rsp+170h] [rbp+70h]
  __int64 v112; // [rsp+178h] [rbp+78h]
  int *v113; // [rsp+180h] [rbp+80h]
  __int64 v114; // [rsp+188h] [rbp+88h]
  __int16 *v115; // [rsp+190h] [rbp+90h]
  __int64 v116; // [rsp+198h] [rbp+98h]
  __int64 v117; // [rsp+1A0h] [rbp+A0h]
  __int64 v118; // [rsp+1A8h] [rbp+A8h]
  __int64 v119; // [rsp+1B0h] [rbp+B0h]
  __int64 v120; // [rsp+1B8h] [rbp+B8h]
  __int64 v121; // [rsp+1C0h] [rbp+C0h]
  __int64 v122; // [rsp+1C8h] [rbp+C8h]
  __int64 v123; // [rsp+1D0h] [rbp+D0h]
  __int64 v124; // [rsp+1D8h] [rbp+D8h]
  __int64 v125; // [rsp+1E0h] [rbp+E0h]
  __int64 v126; // [rsp+1E8h] [rbp+E8h]
  __int64 v127; // [rsp+1F0h] [rbp+F0h]
  __int64 v128; // [rsp+1F8h] [rbp+F8h]
  int *v129; // [rsp+200h] [rbp+100h]
  __int64 v130; // [rsp+208h] [rbp+108h]
  __int64 *v131; // [rsp+210h] [rbp+110h]
  __int64 v132; // [rsp+218h] [rbp+118h]
  char *v133; // [rsp+220h] [rbp+120h]
  __int64 v134; // [rsp+228h] [rbp+128h]
  char *v135; // [rsp+230h] [rbp+130h]
  __int64 v136; // [rsp+238h] [rbp+138h]
  char *v137; // [rsp+240h] [rbp+140h]
  __int64 v138; // [rsp+248h] [rbp+148h]
  char *v139; // [rsp+250h] [rbp+150h]
  __int64 v140; // [rsp+258h] [rbp+158h]
  __int16 *v141; // [rsp+260h] [rbp+160h]
  __int64 v142; // [rsp+268h] [rbp+168h]
  char *v143; // [rsp+270h] [rbp+170h]
  __int64 v144; // [rsp+278h] [rbp+178h]
  __int64 v145; // [rsp+280h] [rbp+180h]
  __int64 v146; // [rsp+288h] [rbp+188h]
  unsigned int *v147; // [rsp+290h] [rbp+190h]
  __int64 v148; // [rsp+298h] [rbp+198h]
  __int64 v149; // [rsp+2A0h] [rbp+1A0h]
  __int64 v150; // [rsp+2A8h] [rbp+1A8h]
  EVENT_DATA_DESCRIPTOR v151; // [rsp+2B0h] [rbp+1B0h] BYREF
  char *v152; // [rsp+2D0h] [rbp+1D0h]
  __int64 v153; // [rsp+2D8h] [rbp+1D8h]
  __int128 *v154; // [rsp+2E0h] [rbp+1E0h]
  __int64 v155; // [rsp+2E8h] [rbp+1E8h]
  char *v156; // [rsp+2F0h] [rbp+1F0h]
  __int64 v157; // [rsp+2F8h] [rbp+1F8h]
  __int128 *v158; // [rsp+300h] [rbp+200h]
  __int64 v159; // [rsp+308h] [rbp+208h]
  __int128 *v160; // [rsp+310h] [rbp+210h]
  __int64 v161; // [rsp+318h] [rbp+218h]
  unsigned int *v162; // [rsp+320h] [rbp+220h]
  __int64 v163; // [rsp+328h] [rbp+228h]
  __int64 *v164; // [rsp+330h] [rbp+230h]
  __int64 v165; // [rsp+338h] [rbp+238h]
  char *v166; // [rsp+340h] [rbp+240h]
  __int64 v167; // [rsp+348h] [rbp+248h]
  char *v168; // [rsp+350h] [rbp+250h]
  __int64 v169; // [rsp+358h] [rbp+258h]
  char *v170; // [rsp+360h] [rbp+260h]
  __int64 v171; // [rsp+368h] [rbp+268h]
  char *v172; // [rsp+370h] [rbp+270h]
  __int64 v173; // [rsp+378h] [rbp+278h]
  unsigned int *v174; // [rsp+380h] [rbp+280h]
  __int64 v175; // [rsp+388h] [rbp+288h]
  char *v176; // [rsp+390h] [rbp+290h]
  __int64 v177; // [rsp+398h] [rbp+298h]
  unsigned int *v178; // [rsp+3A0h] [rbp+2A0h]
  __int64 v179; // [rsp+3A8h] [rbp+2A8h]
  _QWORD *v180; // [rsp+3B0h] [rbp+2B0h]
  __int64 v181; // [rsp+3B8h] [rbp+2B8h]

  v6 = 0;
  v7 = (__int64)a3;
  v88 = a4;
  v89 = a5;
  v75 = 0;
  if ( *((struct tagPROCESSINFO **)a1 + 15) == a3 )
    return 0LL;
  v10 = (char *)a1 + 188;
  CIT_USER_ACTIVE_TRACKER::CalculateUpToTime((struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 188), a2);
  v11 = *((_QWORD *)v10 + 2);
  v86 = v11;
  CIT_USER_ACTIVE_TRACKER::CalculateUpToTime((struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 212), a2);
  v12 = *(_QWORD *)((char *)a1 + 228);
  v13 = v11 - *((_DWORD *)a1 + 129);
  v87 = v12;
  if ( v13 > dword_1C01D0CCC )
  {
    v59 = 3;
LABEL_61:
    CitpPostUpdateUseInfoLog(a1, v59);
    *((_DWORD *)a1 + 129) = v11;
    *((_DWORD *)a1 + 128) = a2;
    goto LABEL_4;
  }
  if ( a2 - *((_DWORD *)a1 + 128) > 2 * dword_1C01D0CCC )
  {
    v59 = 4;
    goto LABEL_61;
  }
LABEL_4:
  if ( a2 - *((_DWORD *)a1 + 190) >= dword_1C01D0CE0 )
    CitpDPDataLog(a1);
  if ( *((_QWORD *)a1 + 15) )
  {
    v14 = *((_DWORD *)a1 + 70);
    v15 = -1;
    v16 = a2 - *((_DWORD *)a1 + 34);
    v78 = v16;
    v17 = v14 + 1;
    v18 = v14 + 1 < v14;
    v19 = *((_DWORD *)a1 + 71);
    if ( !v18 )
      v15 = v17;
    *((_DWORD *)a1 + 70) = v15;
    v20 = -1;
    if ( v19 + v16 >= v19 )
      v20 = v19 + v16;
    *((_DWORD *)a1 + 71) = v20;
    v21 = *(_QWORD *)(*((_QWORD *)a1 + 15) + 928LL);
    CIT_USER_ACTIVITY_STAT::CalculateDeltaFrom(&v86, &v79, (char *)a1 + 168);
    CIT_USER_ACTIVITY_STAT::CalculateDeltaFrom(&v87, &v81, (char *)a1 + 176);
    v22 = v81;
    *((_DWORD *)a1 + 142) += v81;
    v23 = *(_BYTE *)(v21 + 91);
    if ( (v23 & 0x1E) != 0 )
    {
      v58 = (v23 >> 1) & 0xF;
      if ( (unsigned int)v58 < 0xB )
        *((_DWORD *)a1 + v58 + 142) += v22;
    }
    if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&hProvider, 0, 0x800000000800uLL) )
    {
      v28 = *((_DWORD *)a1 + 41);
      v29 = (struct tagPROCESSINFO *)*((_QWORD *)a1 + 15);
      v94 = *(_QWORD *)((char *)a1 + 156);
      v95 = v28;
      CitpGetForegroundWindowInfo((struct _CIT_WINDOW_INFO *)&v94, v29, 0LL);
      if ( HIBYTE(qword_1C01D0CE4) )
      {
        v30 = (__int128)*CitpProcessGetAppSessionId(&v90, *((struct tagPROCESSINFO **)a1 + 15), &v83);
        ++*((_QWORD *)a1 + 96);
        v96 = v30;
        if ( hProvider > 5u )
        {
          if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x800000000800uLL) )
          {
            v67 = 0;
            v99 = &v67;
            v101 = &v96;
            v103 = &v68;
            v105 = &v96;
            v107 = &v96;
            v109 = &v78;
            v111 = &v79;
            v113 = &v81;
            v76 = v80;
            v115 = &v76;
            v119 = v31 + 2;
            v121 = v31 + 4;
            v123 = v31 + 8;
            v125 = v31 + 10;
            v127 = v31 + 6;
            v129 = &dword_1C01D0CC8;
            v131 = &v94;
            v133 = (char *)&v94 + 2;
            v135 = (char *)&v94 + 4;
            v137 = (char *)&v94 + 6;
            v69 = BYTE2(v95);
            v139 = &v69;
            v77 = v95;
            v141 = &v77;
            v143 = &v70;
            v145 = v31 + 12;
            v100 = v33;
            v102 = 16LL;
            v68 = v33;
            v104 = v33;
            v106 = 16LL;
            v108 = 16LL;
            v110 = 4LL;
            v112 = 4LL;
            v114 = 4LL;
            v116 = 2LL;
            v117 = v31;
            v118 = 2LL;
            v120 = 2LL;
            v122 = 2LL;
            v124 = 2LL;
            v126 = 2LL;
            v128 = 2LL;
            v130 = 4LL;
            v132 = 2LL;
            v134 = 2LL;
            v136 = 2LL;
            v138 = 2LL;
            v140 = v33;
            v142 = 2LL;
            v70 = v33;
            v144 = v33;
            v146 = 2LL;
            v147 = &v83;
            v148 = 4LL;
            v149 = v32;
            v150 = 8LL;
            TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C01A2D98, 0LL, 0LL, 0x1Cu, &pData);
          }
        }
      }
      if ( BYTE5(qword_1C01D0CE4) )
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
          CitpProgDataNotifyUseUpdate(qword_1C01D0CF0, v61);
        }
      }
      if ( (qword_1C01D0CD4 & 1) != 0 )
      {
        v34 = CitpInteractionSummaryEnsure(a1, (struct tagPROCESSINFO **)v21, 2);
        v35 = v34;
        if ( v34 )
        {
          v36 = *((_DWORD *)v34 + 29);
          v37 = -1;
          v38 = v78;
          v39 = -1;
          if ( v36 + 1 >= v36 )
            v39 = v36 + 1;
          v40 = -1;
          *((_DWORD *)v34 + 29) = v39;
          v41 = *((_DWORD *)v34 + 30);
          v42 = v41 + v38;
          v18 = v41 + v38 < v41;
          v43 = -1;
          if ( !v18 )
            v40 = v42;
          *((_DWORD *)v35 + 30) = v40;
          v44 = *((_DWORD *)v35 + 31);
          v45 = v79;
          if ( v44 + (v80 & 0x7FFFFFFF) >= v44 )
            v43 = v44 + (v80 & 0x7FFFFFFF);
          v46 = -1;
          *((_DWORD *)v35 + 31) = v43;
          v47 = *((_DWORD *)v35 + 32);
          v48 = v47 + v45;
          v18 = v47 + v45 < v47;
          v49 = -1;
          if ( !v18 )
            v46 = v48;
          *((_DWORD *)v35 + 32) = v46;
          v50 = *((_DWORD *)v35 + 33);
          v51 = v81;
          if ( v50 + (v82 & 0x7FFFFFFF) >= v50 )
            v49 = v50 + (v82 & 0x7FFFFFFF);
          *((_DWORD *)v35 + 33) = v49;
          v52 = *((_DWORD *)v35 + 34);
          if ( v52 + v51 >= v52 )
            v37 = v52 + v51;
          *((_DWORD *)v35 + 34) = v37;
          CitpInputTimesAddTo(
            (struct _CIT_INTERACTION_SUMMARY *)((char *)v35 + 32),
            (struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 140));
          *(_QWORD *)(v53 + 48) = v94;
          *(_DWORD *)(v53 + 56) = v95;
          CitpBitmapUpdateForTimeRange(
            (struct _CIT_BITMAP *)(v53 + 144),
            *((_DWORD *)a1 + 34),
            a2,
            *((_DWORD *)a1 + 202),
            dword_1C01D0CDC);
        }
        if ( (qword_1C01D0CD4 & 1) != 0 && a2 - *((_DWORD *)a1 + 202) > HIDWORD(qword_1C01D0CD4) )
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
  }
  if ( v7 )
  {
    v24 = v7 & -(__int64)((unsigned int)CitpAllowForegroundProcess(a1) != 0);
    v7 = v24;
    if ( v24 )
      v7 = v24 & -(__int64)(CitpProcessEnsureContext((struct _CIT_PROCESS **)v24) != 0LL);
  }
  *((_QWORD *)a1 + 15) = v7;
  *((_DWORD *)a1 + 34) = a2;
  *((_QWORD *)a1 + 21) = v11;
  *((_QWORD *)a1 + 22) = v12;
  CitpInputTimesAddTo(
    (struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 248),
    (struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 140));
  *v25 = 0LL;
  v25[1] = 0LL;
  *(_QWORD *)((char *)a1 + 156) = 0LL;
  *((_DWORD *)a1 + 41) = 0;
  if ( v7 )
  {
    v26 = *(_QWORD *)(v7 + 928);
    if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&hProvider, 0, 0x800000000800uLL) )
    {
      if ( (qword_1C01D0CD4 & 1) != 0
        && *((struct _CIT_IMPACT_CONTEXT **)a1 + 98) == (struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 784) )
      {
        *((_DWORD *)a1 + 202) = a2;
        *((_QWORD *)a1 + 100) = MEMORY[0xFFFFF78000000014];
      }
      v92 = 0LL;
      v93 = 0;
      if ( !(unsigned int)CitpGetForegroundWindowInfo((struct _CIT_WINDOW_INFO *)&v92, (struct tagPROCESSINFO *)v7, v88) )
        CitGetMonitorInfo(v89, &v92);
      v54 = v93;
      *(_QWORD *)((char *)a1 + 156) = v92;
      *((_DWORD *)a1 + 41) = v54;
      if ( HIBYTE(qword_1C01D0CE4) )
      {
        v55 = (_QWORD *)((char *)a1 + 768);
        v56 = (__int128)*CitpProcessGetAppSessionId(&v91, (struct tagPROCESSINFO *)v7, &v85);
        v57 = a2 - *(_DWORD *)(v26 + 80);
        ++*v55;
        v97 = v56;
        v84 = v57;
        if ( hProvider > 5u )
        {
          if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x800000000800uLL) )
          {
            v71 = 1;
            v152 = &v71;
            v154 = &v97;
            v156 = &v72;
            v158 = &v97;
            v160 = &v97;
            v162 = &v84;
            v164 = &v92;
            v166 = (char *)&v92 + 2;
            v168 = (char *)&v92 + 4;
            v170 = (char *)&v92 + 6;
            v73 = BYTE2(v93);
            v172 = &v73;
            LOWORD(v75) = v93;
            v174 = &v75;
            v176 = &v74;
            v178 = &v85;
            v153 = 1LL;
            v155 = 16LL;
            v72 = 1;
            v157 = 1LL;
            v159 = 16LL;
            v161 = 16LL;
            v163 = 4LL;
            v165 = 2LL;
            v167 = 2LL;
            v169 = 2LL;
            v171 = 2LL;
            v173 = 1LL;
            v175 = 2LL;
            v74 = 1;
            v177 = 1LL;
            v179 = 4LL;
            v180 = v55;
            v181 = 8LL;
            TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C01A2F90, 0LL, 0LL, 0x11u, &v151);
          }
        }
      }
    }
    *(_DWORD *)(v26 + 80) = a2;
  }
  return v6;
}
