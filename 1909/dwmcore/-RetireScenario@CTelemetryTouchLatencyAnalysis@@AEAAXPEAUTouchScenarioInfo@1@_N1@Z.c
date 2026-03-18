/*
 * XREFs of ?RetireScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N1@Z @ 0x18001BB98
 * Callers:
 *     ?AllocateScenario@CTelemetryTouchLatencyAnalysis@@AEAAPEAUTouchScenarioInfo@1@XZ @ 0x18001B27C (-AllocateScenario@CTelemetryTouchLatencyAnalysis@@AEAAPEAUTouchScenarioInfo@1@XZ.c)
 *     ?UpdateInteractionProgress@CTelemetryTouchLatencyAnalysis@@QEAAJPEBUTOUCH_TELEMETRY_UPDATE_INFO@@_K_NAEB_KIU_LUID@@2PEAPEAUTouchUpdateInfo@1@@Z @ 0x18001B5C8 (-UpdateInteractionProgress@CTelemetryTouchLatencyAnalysis@@QEAAJPEBUTOUCH_TELEMETRY_UPDATE_INFO@.c)
 *     ?UnreferenceScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@@Z @ 0x18001B97C (-UnreferenceScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@@Z.c)
 *     ?TimeoutOverdueScenarios@CTelemetryTouchLatencyAnalysis@@QEAAXXZ @ 0x18001BD84 (-TimeoutOverdueScenarios@CTelemetryTouchLatencyAnalysis@@QEAAXXZ.c)
 *     ??1CPartitionVerticalBlankScheduler@@UEAA@XZ @ 0x180177BF8 (--1CPartitionVerticalBlankScheduler@@UEAA@XZ.c)
 *     ?UpdateLastTelemetryInfo@CTelemetryTouchLatencyAnalysis@@QEAAXPEBUTOUCH_TELEMETRY_UPDATE_INFO@@PEAUTouchUpdateInfo@1@_K@Z @ 0x180190078 (-UpdateLastTelemetryInfo@CTelemetryTouchLatencyAnalysis@@QEAAXPEBUTOUCH_TELEMETRY_UPDATE_INFO@@P.c)
 * Callees:
 *     ?QpcSpanToDurationMilliseconds@CTelemetryTouchLatencyAnalysis@@AEBAI_K0@Z @ 0x18001BE00 (-QpcSpanToDurationMilliseconds@CTelemetryTouchLatencyAnalysis@@AEBAI_K0@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     _TlgWrite @ 0x1800B3880 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800B539C (_TlgKeywordOn.c)
 *     ??4CLatencyInfo@CTelemetryTouchLatencyAnalysis@@QEAAAEAV01@AEBV01@@Z @ 0x1800DF8E8 (--4CLatencyInfo@CTelemetryTouchLatencyAnalysis@@QEAAAEAV01@AEBV01@@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E8D0E (memset_0.c)
 *     ?zInternalRelatedId@?$_TlgActivityBase@V?$TraceLoggingActivity@$1?g_hDwmInteractionProvider@@3QEBU_TlgProvider_t@@EB$0A@$04U_TlgReflectorTag_Param0IsHProvider@@@@$0A@$04@@QEBAPEBU_GUID@@XZ @ 0x1800EC834 (-zInternalRelatedId@-$_TlgActivityBase@V-$TraceLoggingActivity@$1-g_hDwmInteractionProvider@@3QE.c)
 *     _TlgCreateWsz @ 0x180158BD8 (_TlgCreateWsz.c)
 *     ??$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x18018CDF8 (--$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z.c)
 *     ??KCLatencyInfo@CTelemetryTouchLatencyAnalysis@@QEAA?AV01@I@Z @ 0x18018CF28 (--KCLatencyInfo@CTelemetryTouchLatencyAnalysis@@QEAA-AV01@I@Z.c)
 *     ?AddToInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@GGAEBVCLatencyInfo@1@I@Z @ 0x18018CFC0 (-AddToInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@GGAEBVCLat.c)
 *     ?zInternalStart@?$_TlgActivityBase@V?$TraceLoggingActivity@$1?g_hDwmInteractionProvider@@3QEBU_TlgProvider_t@@EB$0A@$04U_TlgReflectorTag_Param0IsHProvider@@@@$0A@$04@@QEAAXXZ @ 0x180190210 (-zInternalStart@-$_TlgActivityBase@V-$TraceLoggingActivity@$1-g_hDwmInteractionProvider@@3QEBU_T.c)
 *     McTemplateU0xxqqqhhqqxxqnttqqqqz @ 0x1801906D4 (McTemplateU0xxqqqhhqqxxqnttqqqqz.c)
 */

void __fastcall CTelemetryTouchLatencyAnalysis::RetireScenario(
        CTelemetryTouchLatencyAnalysis *this,
        struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *a2,
        char a3,
        char a4)
{
  char v4; // r12
  struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *v5; // r14
  CTelemetryTouchLatencyAnalysis *v6; // rbx
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // r10
  unsigned __int64 v9; // r8
  unsigned __int128 v10; // rax
  unsigned int v11; // ecx
  unsigned int v12; // eax
  unsigned int v13; // ecx
  unsigned int v14; // eax
  __int64 v15; // r9
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // r8
  unsigned __int64 QuadPart; // r8
  __int64 v19; // rax
  __int16 v20; // r13
  __int64 v21; // r12
  char v22; // al
  unsigned int v23; // r9d
  const GUID *v24; // rax
  UINT32 cData; // r11d
  ULONGLONG v26; // r11
  const WCHAR *v27; // rdx
  char v28; // cl
  int v29; // eax
  ULONGLONG v30; // r11
  const WCHAR *v31; // rdx
  char v32; // cl
  char *v33; // r13
  int v34; // eax
  const WCHAR *v35; // rdx
  char v36; // cl
  int v37; // eax
  char v38; // [rsp+C0h] [rbp-80h] BYREF
  char v39; // [rsp+C1h] [rbp-7Fh] BYREF
  char v40; // [rsp+C2h] [rbp-7Eh] BYREF
  char v41; // [rsp+C3h] [rbp-7Dh] BYREF
  char v42; // [rsp+C4h] [rbp-7Ch] BYREF
  char v43; // [rsp+C5h] [rbp-7Bh] BYREF
  char v44; // [rsp+C6h] [rbp-7Ah] BYREF
  char v45; // [rsp+C7h] [rbp-79h] BYREF
  unsigned __int16 v46[2]; // [rsp+C8h] [rbp-78h] BYREF
  unsigned __int16 v47[2]; // [rsp+CCh] [rbp-74h] BYREF
  char v48; // [rsp+D0h] [rbp-70h] BYREF
  char v49; // [rsp+D1h] [rbp-6Fh] BYREF
  char v50; // [rsp+D2h] [rbp-6Eh]
  __int16 v51; // [rsp+D4h] [rbp-6Ch] BYREF
  int v52; // [rsp+D8h] [rbp-68h] BYREF
  int v53; // [rsp+DCh] [rbp-64h] BYREF
  int v54; // [rsp+E0h] [rbp-60h] BYREF
  int v55; // [rsp+E4h] [rbp-5Ch] BYREF
  int v56; // [rsp+E8h] [rbp-58h] BYREF
  int v57; // [rsp+ECh] [rbp-54h] BYREF
  int v58; // [rsp+F0h] [rbp-50h] BYREF
  int v59; // [rsp+F4h] [rbp-4Ch] BYREF
  int v60; // [rsp+F8h] [rbp-48h] BYREF
  int v61; // [rsp+FCh] [rbp-44h] BYREF
  int v62; // [rsp+100h] [rbp-40h] BYREF
  int v63; // [rsp+104h] [rbp-3Ch] BYREF
  int v64; // [rsp+108h] [rbp-38h] BYREF
  int v65; // [rsp+10Ch] [rbp-34h] BYREF
  int v66; // [rsp+110h] [rbp-30h] BYREF
  int v67; // [rsp+114h] [rbp-2Ch] BYREF
  struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *v68; // [rsp+118h] [rbp-28h] BYREF
  CTelemetryTouchLatencyAnalysis *v69; // [rsp+120h] [rbp-20h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+128h] [rbp-18h] BYREF
  _DWORD v71[3]; // [rsp+130h] [rbp-10h] BYREF
  int v72; // [rsp+13Ch] [rbp-4h]
  int v73; // [rsp+140h] [rbp+0h]
  int v74; // [rsp+144h] [rbp+4h]
  int v75; // [rsp+148h] [rbp+8h]
  int v76; // [rsp+14Ch] [rbp+Ch]
  int v77; // [rsp+150h] [rbp+10h]
  int v78; // [rsp+158h] [rbp+18h] BYREF
  char v79; // [rsp+15Ch] [rbp+1Ch]
  GUID pActivityId; // [rsp+160h] [rbp+20h] BYREF
  EVENT_DATA_DESCRIPTOR v81; // [rsp+180h] [rbp+40h] BYREF
  char *v82; // [rsp+1A0h] [rbp+60h]
  __int64 v83; // [rsp+1A8h] [rbp+68h]
  struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo **v84; // [rsp+1B0h] [rbp+70h]
  __int64 v85; // [rsp+1B8h] [rbp+78h]
  CTelemetryTouchLatencyAnalysis **v86; // [rsp+1C0h] [rbp+80h]
  __int64 v87; // [rsp+1C8h] [rbp+88h]
  char *v88; // [rsp+1D0h] [rbp+90h]
  __int64 v89; // [rsp+1D8h] [rbp+98h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+1E0h] [rbp+A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v91; // [rsp+1F0h] [rbp+B0h] BYREF
  char *v92; // [rsp+200h] [rbp+C0h]
  __int64 v93; // [rsp+208h] [rbp+C8h]
  char *v94; // [rsp+210h] [rbp+D0h]
  __int64 v95; // [rsp+218h] [rbp+D8h]
  char *v96; // [rsp+220h] [rbp+E0h]
  __int64 v97; // [rsp+228h] [rbp+E8h]
  char *v98; // [rsp+230h] [rbp+F0h]
  __int64 v99; // [rsp+238h] [rbp+F8h]
  char *v100; // [rsp+240h] [rbp+100h]
  __int64 v101; // [rsp+248h] [rbp+108h]
  char *v102; // [rsp+250h] [rbp+110h]
  __int64 v103; // [rsp+258h] [rbp+118h]
  char *v104; // [rsp+260h] [rbp+120h]
  __int64 v105; // [rsp+268h] [rbp+128h]
  unsigned __int16 *v106; // [rsp+270h] [rbp+130h]
  __int64 v107; // [rsp+278h] [rbp+138h]
  unsigned __int16 *v108; // [rsp+280h] [rbp+140h]
  __int64 v109; // [rsp+288h] [rbp+148h]
  char *v110; // [rsp+290h] [rbp+150h]
  __int64 v111; // [rsp+298h] [rbp+158h]
  int *v112; // [rsp+2A0h] [rbp+160h]
  __int64 v113; // [rsp+2A8h] [rbp+168h]
  char *v114; // [rsp+2B0h] [rbp+170h]
  __int64 v115; // [rsp+2B8h] [rbp+178h]
  char *v116; // [rsp+2C0h] [rbp+180h]
  __int64 v117; // [rsp+2C8h] [rbp+188h]
  char *v118; // [rsp+2D0h] [rbp+190h]
  __int64 v119; // [rsp+2D8h] [rbp+198h]
  char *v120; // [rsp+2E0h] [rbp+1A0h]
  __int64 v121; // [rsp+2E8h] [rbp+1A8h]
  int *v122; // [rsp+2F0h] [rbp+1B0h]
  __int64 v123; // [rsp+2F8h] [rbp+1B8h]
  int *v124; // [rsp+300h] [rbp+1C0h]
  __int64 v125; // [rsp+308h] [rbp+1C8h]
  int *v126; // [rsp+310h] [rbp+1D0h]
  __int64 v127; // [rsp+318h] [rbp+1D8h]
  int *v128; // [rsp+320h] [rbp+1E0h]
  __int64 v129; // [rsp+328h] [rbp+1E8h]
  int *v130; // [rsp+330h] [rbp+1F0h]
  __int64 v131; // [rsp+338h] [rbp+1F8h]
  int *v132; // [rsp+340h] [rbp+200h]
  __int64 v133; // [rsp+348h] [rbp+208h]
  int *v134; // [rsp+350h] [rbp+210h]
  __int64 v135; // [rsp+358h] [rbp+218h]
  int *v136; // [rsp+360h] [rbp+220h]
  __int64 v137; // [rsp+368h] [rbp+228h]
  int *v138; // [rsp+370h] [rbp+230h]
  __int64 v139; // [rsp+378h] [rbp+238h]
  int *v140; // [rsp+380h] [rbp+240h]
  __int64 v141; // [rsp+388h] [rbp+248h]
  int *v142; // [rsp+390h] [rbp+250h]
  __int64 v143; // [rsp+398h] [rbp+258h]
  int *v144; // [rsp+3A0h] [rbp+260h]
  __int64 v145; // [rsp+3A8h] [rbp+268h]
  int *v146; // [rsp+3B0h] [rbp+270h]
  __int64 v147; // [rsp+3B8h] [rbp+278h]
  CTelemetryTouchLatencyAnalysis **v148; // [rsp+3C0h] [rbp+280h]
  __int64 v149; // [rsp+3C8h] [rbp+288h]
  struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo **v150; // [rsp+3D0h] [rbp+290h]
  __int64 v151; // [rsp+3D8h] [rbp+298h]
  char *v152; // [rsp+3E0h] [rbp+2A0h]
  __int64 v153; // [rsp+3E8h] [rbp+2A8h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+3F0h] [rbp+2B0h] BYREF

  v45 = a4;
  v4 = a4;
  v5 = a2;
  v50 = a3;
  v6 = this;
  v68 = a2;
  v69 = this;
  if ( *((_QWORD *)a2 + 2) )
  {
    QueryPerformanceCounter(&PerformanceCount);
    v7 = *((_QWORD *)v5 + 13);
    v8 = *((_QWORD *)v5 + 14);
    v47[0] = 0;
    v46[0] = 0;
    if ( v7 )
    {
      QuadPart = PerformanceCount.QuadPart;
      if ( v8 )
        QuadPart = v8;
      v47[0] = CTelemetryTouchLatencyAnalysis::QpcSpanToDurationMilliseconds(v6, v7, QuadPart);
    }
    if ( v8 )
      v46[0] = CTelemetryTouchLatencyAnalysis::QpcSpanToDurationMilliseconds(v6, v8, PerformanceCount.QuadPart);
    memset_0(v71, 0, 0x24uLL);
    LOWORD(v10) = *((_WORD *)v5 + 69);
    *((_QWORD *)&v10 + 1) = 1LL;
    if ( (unsigned __int16)v10 > 1u )
    {
      v19 = CTelemetryTouchLatencyAnalysis::CLatencyInfo::operator/(
              (char *)v5 + 220,
              &pData,
              (unsigned int)(unsigned __int16)v10 - 1);
      CTelemetryTouchLatencyAnalysis::CLatencyInfo::operator=(v71, v19);
      *((_QWORD *)&v10 + 1) = 1LL;
    }
    v11 = *((_DWORD *)v5 + 67);
    v12 = *((_DWORD *)v5 + 66);
    if ( v11 <= v12 || (v13 = v11 - v12, v14 = *((unsigned __int16 *)v5 + 131), v14 > v13) )
    {
      LOBYTE(v9) = 0;
      v15 = 0LL;
    }
    else
    {
      LOBYTE(v9) = 1;
      *((_QWORD *)&v10 + 1) = 100 * v14 % v13;
      v15 = 100 * v14 / v13;
    }
    v16 = *((_QWORD *)v6 + 497);
    v51 = 0;
    if ( v16 )
    {
      *((_QWORD *)&v10 + 1) = 0x989680 % v16;
      v51 = 0x989680 / v16;
      if ( (_BYTE)v9 )
      {
        v17 = (unsigned int)(100 - v15) * (0x989680uLL / (unsigned int)v16);
        v10 = v17 * (unsigned __int128)0x47AE147AE147AE15uLL;
        v9 = v17 / 0x64;
        *((_WORD *)v5 + 136) = v9;
      }
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x400) != 0 )
    {
      v20 = *((_WORD *)v5 + 68);
      v21 = *((_QWORD *)v5 + 16);
      v22 = CTelemetryTouchLatencyAnalysis::QpcSpanToDurationMilliseconds(
              v69,
              *((_QWORD *)v68 + 12),
              PerformanceCount.QuadPart);
      v5 = v68;
      McTemplateU0xxqqqhhqqxxqnttqqqqz(
        *((_DWORD *)v68 + 18),
        (_DWORD)v68,
        *((_QWORD *)v68 + 1),
        (_DWORD)v68,
        *((_DWORD *)v68 + 9),
        *((_DWORD *)v68 + 11),
        *((_DWORD *)v68 + 12),
        *((_WORD *)v68 + 34),
        *((_WORD *)v68 + 35),
        v22,
        v20,
        v21,
        v21 + v20 - 1,
        *((_DWORD *)v68 + 18));
      v6 = v69;
      v4 = v45;
    }
    if ( *((_WORD *)v5 + 68)
      && *((_QWORD *)v5 + 1)
      && *((_QWORD *)v5 + 1) != 0xDDEECCCCDDEE0001uLL
      && *((_DWORD *)v5 + 9)
      && *((_DWORD *)v5 + 11)
      && !*(_BYTE *)v5 )
    {
      v78 = 0;
      v79 = 0;
      _TlgActivityBase<TraceLoggingActivity<&_TlgProvider_t const * const g_hDwmInteractionProvider,0,5,_TlgReflectorTag_Param0IsHProvider>,0,5>::zInternalStart(
        &v78,
        *((_QWORD *)&v10 + 1),
        v9,
        v15);
      v23 = hProvider;
      if ( hProvider > 5u )
      {
        v24 = (const GUID *)_TlgActivityBase<TraceLoggingActivity<&_TlgProvider_t const * const g_hDwmInteractionProvider,0,5,_TlgReflectorTag_Param0IsHProvider>,0,5>::zInternalRelatedId(&v78);
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1802D90F0, &pActivityId, v24, cData, &pData);
        v23 = hProvider;
      }
      if ( v23 > 4 )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 2uLL) )
        {
          v27 = (const WCHAR *)*((_QWORD *)v5 + 2);
          v52 = *((_DWORD *)v5 + 19);
          v84 = (struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo **)&v52;
          v53 = *((_DWORD *)v5 + 20);
          v86 = (CTelemetryTouchLatencyAnalysis **)&v53;
          v45 = *((_BYTE *)v5 + 84);
          v88 = &v45;
          v82 = (char *)v5 + 72;
          v83 = 4LL;
          v85 = 4LL;
          v87 = 4LL;
          v89 = 1LL;
          TlgCreateWsz(&pDesc, v27);
          TlgCreateWsz(&v91, *((LPCWSTR *)v5 + 3));
          v28 = *((_BYTE *)v5 + 32);
          v92 = &v48;
          v94 = (char *)v5 + 52;
          v49 = *((_BYTE *)v5 + 36);
          v96 = &v49;
          v38 = *((_BYTE *)v5 + 40);
          v98 = &v38;
          v39 = *((_BYTE *)v5 + 44);
          v100 = &v39;
          v40 = *((_BYTE *)v5 + 48);
          v102 = &v40;
          v104 = (char *)v5 + 120;
          v106 = v47;
          v108 = v46;
          v54 = *((_DWORD *)v5 + 67) - *((_DWORD *)v5 + 66);
          v112 = &v54;
          v114 = (char *)v5 + 68;
          v116 = (char *)v5 + 70;
          v120 = &v41;
          v29 = *((_DWORD *)v5 + 36);
          v48 = v28;
          v93 = 1LL;
          v95 = 16LL;
          v97 = 1LL;
          v99 = 1LL;
          v101 = 1LL;
          v103 = 1LL;
          v105 = 1LL;
          v107 = 2LL;
          v109 = 2LL;
          v110 = (char *)v5 + 136;
          v111 = 2LL;
          v113 = 4LL;
          v115 = 2LL;
          v117 = 2LL;
          v118 = (char *)v5 + 8;
          v119 = 8LL;
          v41 = v4;
          v121 = 1LL;
          v55 = v29;
          v122 = &v55;
          v42 = *((_BYTE *)v5 + 180);
          v124 = (int *)&v42;
          v43 = *((_BYTE *)v5 + 181);
          v126 = (int *)&v43;
          v56 = v71[0];
          v128 = &v56;
          v57 = *((_DWORD *)v5 + 46);
          v130 = &v57;
          v132 = (int *)((char *)v5 + 256);
          v134 = (int *)((char *)v5 + 258);
          v44 = *((_BYTE *)v5 + 140);
          v136 = (int *)&v44;
          v123 = 4LL;
          v125 = 1LL;
          v127 = 1LL;
          v129 = 4LL;
          v131 = 4LL;
          v133 = 2LL;
          v135 = 2LL;
          v137 = 1LL;
          TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1802D910B, &pActivityId, 0LL, 0x1Fu, &v81);
          v23 = hProvider;
          v26 = 2LL;
        }
        if ( v23 > 4 )
        {
          if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, v26) )
          {
            v31 = (const WCHAR *)*((_QWORD *)v5 + 2);
            v57 = *((_DWORD *)v5 + 19);
            v84 = (struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo **)&v57;
            v56 = *((_DWORD *)v5 + 20);
            v86 = (CTelemetryTouchLatencyAnalysis **)&v56;
            v44 = *((_BYTE *)v5 + 84);
            v88 = &v44;
            v82 = (char *)v5 + 72;
            v83 = 4LL;
            v85 = 4LL;
            v87 = 4LL;
            v89 = 1LL;
            TlgCreateWsz(&pDesc, v31);
            TlgCreateWsz(&v91, *((LPCWSTR *)v5 + 3));
            v32 = *((_BYTE *)v5 + 32);
            v92 = &v43;
            v33 = (char *)v5 + 52;
            v42 = *((_BYTE *)v5 + 36);
            v96 = &v42;
            v41 = *((_BYTE *)v5 + 40);
            v98 = &v41;
            v40 = *((_BYTE *)v5 + 44);
            v100 = &v40;
            v39 = *((_BYTE *)v5 + 48);
            v102 = &v39;
            v104 = (char *)v5 + 120;
            v106 = v47;
            v108 = v46;
            v55 = *((_DWORD *)v5 + 67) - *((_DWORD *)v5 + 66);
            v112 = &v55;
            v114 = (char *)v5 + 68;
            v116 = (char *)v5 + 70;
            v120 = &v38;
            v34 = *((_DWORD *)v5 + 37);
            v43 = v32;
            v93 = 1LL;
            v94 = (char *)v5 + 52;
            v95 = 16LL;
            v97 = 1LL;
            v99 = 1LL;
            v101 = 1LL;
            v103 = 1LL;
            v105 = 1LL;
            v107 = 2LL;
            v109 = 2LL;
            v110 = (char *)v5 + 136;
            v111 = 2LL;
            v113 = 4LL;
            v115 = 2LL;
            v117 = 2LL;
            v118 = (char *)v5 + 8;
            v119 = 8LL;
            v38 = v4;
            v121 = 1LL;
            v54 = v34;
            v123 = 4LL;
            v122 = &v54;
            v53 = *((_DWORD *)v5 + 41);
            v124 = &v53;
            v52 = *((_DWORD *)v5 + 38);
            v126 = &v52;
            v58 = *((_DWORD *)v5 + 39);
            v128 = &v58;
            v59 = *((_DWORD *)v5 + 40);
            v130 = &v59;
            v60 = v71[1];
            v132 = &v60;
            v61 = v74;
            v134 = &v61;
            v62 = v72;
            v63 = v72;
            v138 = &v63;
            v64 = v73;
            v140 = &v64;
            v65 = *((_DWORD *)v5 + 47);
            v142 = &v65;
            v66 = *((_DWORD *)v5 + 51);
            v144 = &v66;
            v67 = *((_DWORD *)v5 + 48);
            v146 = &v67;
            LODWORD(v69) = *((_DWORD *)v5 + 49);
            v148 = &v69;
            LODWORD(v68) = *((_DWORD *)v5 + 50);
            v150 = &v68;
            v152 = (char *)v5 + 276;
            v125 = 4LL;
            v127 = 4LL;
            v129 = 4LL;
            v131 = 4LL;
            v133 = 4LL;
            v135 = 4LL;
            v136 = &v62;
            v137 = 4LL;
            v139 = 4LL;
            v141 = 4LL;
            v143 = 4LL;
            v145 = 4LL;
            v147 = 4LL;
            v149 = 4LL;
            v151 = 4LL;
            v153 = 4LL;
            TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1802D8ACF, &pActivityId, 0LL, 0x27u, &v81);
            v23 = hProvider;
            v30 = 2LL;
          }
          else
          {
            v33 = (char *)v5 + 52;
          }
          if ( v23 > 4 && TlgKeywordOn((TraceLoggingHProvider)&hProvider, v30) )
          {
            v35 = (const WCHAR *)*((_QWORD *)v5 + 2);
            LODWORD(v68) = *((_DWORD *)v5 + 19);
            v84 = &v68;
            LODWORD(v69) = *((_DWORD *)v5 + 20);
            v86 = &v69;
            v44 = *((_BYTE *)v5 + 84);
            v82 = (char *)v5 + 72;
            v88 = &v44;
            v83 = 4LL;
            v85 = 4LL;
            v87 = 4LL;
            v89 = 1LL;
            TlgCreateWsz(&pDesc, v35);
            TlgCreateWsz(&v91, *((LPCWSTR *)v5 + 3));
            v36 = *((_BYTE *)v5 + 32);
            v92 = &v43;
            v42 = *((_BYTE *)v5 + 36);
            v96 = &v42;
            v41 = *((_BYTE *)v5 + 40);
            v98 = &v41;
            v40 = *((_BYTE *)v5 + 44);
            v100 = &v40;
            v39 = *((_BYTE *)v5 + 48);
            v102 = &v39;
            v104 = (char *)v5 + 120;
            v106 = v47;
            v108 = v46;
            v67 = *((_DWORD *)v5 + 67) - *((_DWORD *)v5 + 66);
            v112 = &v67;
            v114 = (char *)v5 + 68;
            v116 = (char *)v5 + 70;
            v120 = &v38;
            v37 = *((_DWORD *)v5 + 42);
            v43 = v36;
            v93 = 1LL;
            v94 = v33;
            v95 = 16LL;
            v97 = 1LL;
            v99 = 1LL;
            v101 = 1LL;
            v103 = 1LL;
            v105 = 1LL;
            v107 = 2LL;
            v109 = 2LL;
            v110 = (char *)v5 + 136;
            v111 = 2LL;
            v113 = 4LL;
            v115 = 2LL;
            v117 = 2LL;
            v118 = (char *)v5 + 8;
            v119 = 8LL;
            v38 = v4;
            v121 = 1LL;
            v66 = v37;
            v122 = &v66;
            v65 = *((_DWORD *)v5 + 43);
            v124 = &v65;
            v64 = *((_DWORD *)v5 + 44);
            v126 = &v64;
            v128 = (int *)((char *)v5 + 182);
            v63 = v75;
            v130 = &v63;
            v62 = v76;
            v132 = &v62;
            v61 = v77;
            v134 = &v61;
            v60 = *((_DWORD *)v5 + 52);
            v136 = &v60;
            v59 = *((_DWORD *)v5 + 53);
            v138 = &v59;
            v58 = *((_DWORD *)v5 + 54);
            v140 = &v58;
            v142 = (int *)((char *)v5 + 262);
            v144 = (int *)((char *)v5 + 260);
            v146 = (int *)((char *)v5 + 272);
            v148 = (CTelemetryTouchLatencyAnalysis **)&v51;
            v123 = 4LL;
            v125 = 4LL;
            v127 = 4LL;
            v129 = 1LL;
            v131 = 4LL;
            v133 = 4LL;
            v135 = 4LL;
            v137 = 4LL;
            v139 = 4LL;
            v141 = 4LL;
            v143 = 2LL;
            v145 = 2LL;
            v147 = 2LL;
            v149 = 2LL;
            TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1802D8E2A, &pActivityId, 0LL, 0x25u, &v81);
            v23 = hProvider;
          }
        }
      }
      v78 = 2;
      if ( v23 > 5 )
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1802D8E0F, &pActivityId, 0LL, 2u, &pData);
      if ( (unsigned int)(*((_DWORD *)v5 + 9) - 2) <= 4 )
        CTelemetryTouchLatencyAnalysis::AddToInteractionSummary(
          v6,
          v5,
          v47[0],
          v46[0],
          (const struct CTelemetryTouchLatencyAnalysis::CLatencyInfo *)v71,
          *((_DWORD *)v5 + 67) - *((_DWORD *)v5 + 66));
      if ( v78 == 1 )
      {
        v78 = 2;
        _TlgWriteActivityAutoStop<0,5>(&hProvider, &pActivityId);
      }
    }
    *((_DWORD *)v5 + 23) = 0;
    if ( v50 )
    {
      operator delete(*((void **)v5 + 2));
      memset_0(v5, 0, 0x138uLL);
      if ( *(_DWORD *)v6 )
        --*(_DWORD *)v6;
    }
  }
}
