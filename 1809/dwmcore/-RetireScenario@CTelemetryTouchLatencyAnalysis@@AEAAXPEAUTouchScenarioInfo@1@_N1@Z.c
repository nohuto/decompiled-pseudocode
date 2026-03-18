/*
 * XREFs of ?RetireScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N1@Z @ 0x180019810
 * Callers:
 *     ?AllocateScenario@CTelemetryTouchLatencyAnalysis@@AEAAPEAUTouchScenarioInfo@1@XZ @ 0x180018FE8 (-AllocateScenario@CTelemetryTouchLatencyAnalysis@@AEAAPEAUTouchScenarioInfo@1@XZ.c)
 *     ?UpdateInteractionProgress@CTelemetryTouchLatencyAnalysis@@QEAAJPEBUTOUCH_TELEMETRY_UPDATE_INFO@@_K_NAEB_KIU_LUID@@2PEAPEAUTouchUpdateInfo@1@@Z @ 0x180019288 (-UpdateInteractionProgress@CTelemetryTouchLatencyAnalysis@@QEAAJPEBUTOUCH_TELEMETRY_UPDATE_INFO@.c)
 *     ?UnreferenceScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@@Z @ 0x1800195F8 (-UnreferenceScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@@Z.c)
 *     ?TimeoutOverdueScenarios@CTelemetryTouchLatencyAnalysis@@QEAAXXZ @ 0x1800199EC (-TimeoutOverdueScenarios@CTelemetryTouchLatencyAnalysis@@QEAAXXZ.c)
 *     ??1CPartitionVerticalBlankScheduler@@UEAA@XZ @ 0x1801495E0 (--1CPartitionVerticalBlankScheduler@@UEAA@XZ.c)
 * Callees:
 *     ?QpcSpanToDurationMilliseconds@CTelemetryTouchLatencyAnalysis@@AEBAI_K0@Z @ 0x180019A68 (-QpcSpanToDurationMilliseconds@CTelemetryTouchLatencyAnalysis@@AEBAI_K0@Z.c)
 *     ??4CLatencyInfo@CTelemetryTouchLatencyAnalysis@@QEAAAEAV01@AEBV01@@Z @ 0x1800638CC (--4CLatencyInfo@CTelemetryTouchLatencyAnalysis@@QEAAAEAV01@AEBV01@@Z.c)
 *     _TlgKeywordOn @ 0x180083CAC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180083FFC (_TlgWrite.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 *     _TlgCreateWsz @ 0x18014D554 (_TlgCreateWsz.c)
 *     ??$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x18014D594 (--$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z.c)
 *     ??KCLatencyInfo@CTelemetryTouchLatencyAnalysis@@QEAA?AV01@I@Z @ 0x18014D634 (--KCLatencyInfo@CTelemetryTouchLatencyAnalysis@@QEAA-AV01@I@Z.c)
 *     ?AddToInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@GGAEBVCLatencyInfo@1@I@Z @ 0x18014D694 (-AddToInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@GGAEBVCLat.c)
 *     ?zInternalRelatedId@?$_TlgActivityBase@V?$TraceLoggingActivity@$1?g_hDwmInteractionProvider@@3QEBU_TlgProvider_t@@EB$0A@$04U_TlgReflectorTag_Param0IsHProvider@@@@$0A@$04@@QEBAPEBU_GUID@@XZ @ 0x18014FF34 (-zInternalRelatedId@-$_TlgActivityBase@V-$TraceLoggingActivity@$1-g_hDwmInteractionProvider@@3QE.c)
 *     ?zInternalStart@?$_TlgActivityBase@V?$TraceLoggingActivity@$1?g_hDwmInteractionProvider@@3QEBU_TlgProvider_t@@EB$0A@$04U_TlgReflectorTag_Param0IsHProvider@@@@$0A@$04@@QEAAXXZ @ 0x18014FF5C (-zInternalStart@-$_TlgActivityBase@V-$TraceLoggingActivity@$1-g_hDwmInteractionProvider@@3QEBU_T.c)
 *     McTemplateU0xxqqqhhqqxxqnttqqqz @ 0x18015041C (McTemplateU0xxqqqhhqqxxqnttqqqz.c)
 */

void __fastcall CTelemetryTouchLatencyAnalysis::RetireScenario(
        CTelemetryTouchLatencyAnalysis *this,
        struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *a2,
        char a3,
        char a4)
{
  char v4; // r15
  char v5; // r14
  CTelemetryTouchLatencyAnalysis *v7; // rbx
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r10
  unsigned __int128 v11; // rax
  unsigned int v12; // ecx
  unsigned int v13; // eax
  unsigned int v14; // ecx
  unsigned int v15; // eax
  __int64 v16; // r9
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // r8
  unsigned __int64 QuadPart; // r8
  __int64 v20; // rax
  __int64 v21; // r15
  __int16 v22; // r12
  char v23; // al
  int v24; // edx
  unsigned int v25; // r9d
  const GUID *v26; // rax
  UINT32 cData; // r10d
  char *v28; // rdi
  ULONGLONG v29; // r10
  __int64 v30; // r11
  const WCHAR *v31; // rdx
  char v32; // cl
  __int64 v33; // r11
  ULONGLONG v34; // r10
  unsigned int v35; // r11d
  const WCHAR *v36; // rdx
  char v37; // cl
  const WCHAR *v38; // rdx
  char v39; // cl
  char v40; // [rsp+B0h] [rbp-80h] BYREF
  char v41; // [rsp+B1h] [rbp-7Fh] BYREF
  char v42; // [rsp+B2h] [rbp-7Eh] BYREF
  char v43; // [rsp+B3h] [rbp-7Dh] BYREF
  char v44; // [rsp+B4h] [rbp-7Ch] BYREF
  char v45; // [rsp+B5h] [rbp-7Bh] BYREF
  char v46; // [rsp+B6h] [rbp-7Ah] BYREF
  char v47; // [rsp+B7h] [rbp-79h] BYREF
  char v48; // [rsp+B8h] [rbp-78h] BYREF
  unsigned __int16 v49[2]; // [rsp+BCh] [rbp-74h] BYREF
  unsigned __int16 v50[2]; // [rsp+C0h] [rbp-70h] BYREF
  char v51; // [rsp+C4h] [rbp-6Ch] BYREF
  __int16 v52; // [rsp+C8h] [rbp-68h] BYREF
  int v53; // [rsp+CCh] [rbp-64h] BYREF
  int v54; // [rsp+D0h] [rbp-60h] BYREF
  int v55; // [rsp+D4h] [rbp-5Ch] BYREF
  int v56; // [rsp+D8h] [rbp-58h] BYREF
  int v57; // [rsp+DCh] [rbp-54h] BYREF
  int v58; // [rsp+E0h] [rbp-50h] BYREF
  int v59; // [rsp+E4h] [rbp-4Ch] BYREF
  int v60; // [rsp+E8h] [rbp-48h] BYREF
  int v61; // [rsp+ECh] [rbp-44h] BYREF
  CTelemetryTouchLatencyAnalysis *v62; // [rsp+F0h] [rbp-40h] BYREF
  int v63; // [rsp+F8h] [rbp-38h] BYREF
  int v64; // [rsp+FCh] [rbp-34h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+100h] [rbp-30h] BYREF
  __int64 v66; // [rsp+108h] [rbp-28h] BYREF
  __int64 v67; // [rsp+110h] [rbp-20h]
  __int64 v68; // [rsp+118h] [rbp-18h]
  int v69; // [rsp+120h] [rbp-10h] BYREF
  char v70; // [rsp+124h] [rbp-Ch]
  GUID pActivityId; // [rsp+128h] [rbp-8h] BYREF
  EVENT_DATA_DESCRIPTOR v72; // [rsp+150h] [rbp+20h] BYREF
  char *v73; // [rsp+170h] [rbp+40h]
  __int64 v74; // [rsp+178h] [rbp+48h]
  int *v75; // [rsp+180h] [rbp+50h]
  __int64 v76; // [rsp+188h] [rbp+58h]
  int *v77; // [rsp+190h] [rbp+60h]
  __int64 v78; // [rsp+198h] [rbp+68h]
  char *v79; // [rsp+1A0h] [rbp+70h]
  __int64 v80; // [rsp+1A8h] [rbp+78h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+1B0h] [rbp+80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v82; // [rsp+1C0h] [rbp+90h] BYREF
  char *v83; // [rsp+1D0h] [rbp+A0h]
  __int64 v84; // [rsp+1D8h] [rbp+A8h]
  char *v85; // [rsp+1E0h] [rbp+B0h]
  __int64 v86; // [rsp+1E8h] [rbp+B8h]
  char *v87; // [rsp+1F0h] [rbp+C0h]
  __int64 v88; // [rsp+1F8h] [rbp+C8h]
  char *v89; // [rsp+200h] [rbp+D0h]
  __int64 v90; // [rsp+208h] [rbp+D8h]
  char *v91; // [rsp+210h] [rbp+E0h]
  __int64 v92; // [rsp+218h] [rbp+E8h]
  char *v93; // [rsp+220h] [rbp+F0h]
  __int64 v94; // [rsp+228h] [rbp+F8h]
  unsigned __int16 *v95; // [rsp+230h] [rbp+100h]
  __int64 v96; // [rsp+238h] [rbp+108h]
  unsigned __int16 *v97; // [rsp+240h] [rbp+110h]
  __int64 v98; // [rsp+248h] [rbp+118h]
  char *v99; // [rsp+250h] [rbp+120h]
  __int64 v100; // [rsp+258h] [rbp+128h]
  int *v101; // [rsp+260h] [rbp+130h]
  __int64 v102; // [rsp+268h] [rbp+138h]
  char *v103; // [rsp+270h] [rbp+140h]
  __int64 v104; // [rsp+278h] [rbp+148h]
  char *v105; // [rsp+280h] [rbp+150h]
  __int64 v106; // [rsp+288h] [rbp+158h]
  struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *v107; // [rsp+290h] [rbp+160h]
  __int64 v108; // [rsp+298h] [rbp+168h]
  char *v109; // [rsp+2A0h] [rbp+170h]
  __int64 v110; // [rsp+2A8h] [rbp+178h]
  int *v111; // [rsp+2B0h] [rbp+180h]
  __int64 v112; // [rsp+2B8h] [rbp+188h]
  int *v113; // [rsp+2C0h] [rbp+190h]
  __int64 v114; // [rsp+2C8h] [rbp+198h]
  int *v115; // [rsp+2D0h] [rbp+1A0h]
  __int64 v116; // [rsp+2D8h] [rbp+1A8h]
  int *v117; // [rsp+2E0h] [rbp+1B0h]
  __int64 v118; // [rsp+2E8h] [rbp+1B8h]
  int *v119; // [rsp+2F0h] [rbp+1C0h]
  __int64 v120; // [rsp+2F8h] [rbp+1C8h]
  int *v121; // [rsp+300h] [rbp+1D0h]
  __int64 v122; // [rsp+308h] [rbp+1D8h]
  char *v123; // [rsp+310h] [rbp+1E0h]
  __int64 v124; // [rsp+318h] [rbp+1E8h]
  int *v125; // [rsp+320h] [rbp+1F0h]
  __int64 v126; // [rsp+328h] [rbp+1F8h]
  int *v127; // [rsp+330h] [rbp+200h]
  __int64 v128; // [rsp+338h] [rbp+208h]
  CTelemetryTouchLatencyAnalysis **v129; // [rsp+340h] [rbp+210h]
  __int64 v130; // [rsp+348h] [rbp+218h]
  char *v131; // [rsp+350h] [rbp+220h]
  __int64 v132; // [rsp+358h] [rbp+228h]
  char *v133; // [rsp+360h] [rbp+230h]
  __int64 v134; // [rsp+368h] [rbp+238h]
  char *v135; // [rsp+370h] [rbp+240h]
  __int64 v136; // [rsp+378h] [rbp+248h]
  __int16 *v137; // [rsp+380h] [rbp+250h]
  __int64 v138; // [rsp+388h] [rbp+258h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+390h] [rbp+260h] BYREF

  v47 = a4;
  v4 = a4;
  v5 = a3;
  v48 = a3;
  v7 = this;
  v62 = this;
  if ( *((_QWORD *)a2 + 1) )
  {
    QueryPerformanceCounter(&PerformanceCount);
    v9 = *((_QWORD *)a2 + 10);
    v10 = *((_QWORD *)a2 + 11);
    v50[0] = 0;
    v49[0] = 0;
    if ( v9 )
    {
      QuadPart = PerformanceCount.QuadPart;
      if ( v10 )
        QuadPart = v10;
      v50[0] = CTelemetryTouchLatencyAnalysis::QpcSpanToDurationMilliseconds(v7, v9, QuadPart);
    }
    if ( v10 )
      v49[0] = CTelemetryTouchLatencyAnalysis::QpcSpanToDurationMilliseconds(v7, v10, PerformanceCount.QuadPart);
    v66 = 0LL;
    v67 = 0LL;
    v68 = 0LL;
    *((_QWORD *)&v11 + 1) = 1LL;
    if ( *((_WORD *)a2 + 57) > 1u )
    {
      v20 = CTelemetryTouchLatencyAnalysis::CLatencyInfo::operator/(
              (char *)a2 + 172,
              &pData,
              (unsigned int)*((unsigned __int16 *)a2 + 57) - 1);
      CTelemetryTouchLatencyAnalysis::CLatencyInfo::operator=(&v66, v20);
      *((_QWORD *)&v11 + 1) = 1LL;
    }
    v12 = *((_DWORD *)a2 + 52);
    v13 = *((_DWORD *)a2 + 51);
    if ( v12 <= v13 || (v14 = v12 - v13, v15 = *((unsigned __int16 *)a2 + 101), v15 > v14) )
    {
      LOBYTE(v8) = 0;
      v16 = 0LL;
    }
    else
    {
      LOBYTE(v8) = 1;
      *((_QWORD *)&v11 + 1) = 100 * v15 % v14;
      v16 = 100 * v15 / v14;
    }
    v17 = *((_QWORD *)v7 + 394);
    v52 = 0;
    if ( v17 )
    {
      *((_QWORD *)&v11 + 1) = 0x989680 % v17;
      v52 = 0x989680 / v17;
      if ( (_BYTE)v8 )
      {
        v18 = (unsigned int)(100 - v16) * (0x989680uLL / (unsigned int)v17);
        v11 = v18 * (unsigned __int128)0x47AE147AE147AE15uLL;
        v8 = v18 / 0x64;
        *((_WORD *)a2 + 106) = v8;
      }
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x400) != 0 )
    {
      v21 = *((_QWORD *)a2 + 13);
      v22 = *((_WORD *)a2 + 56);
      v23 = CTelemetryTouchLatencyAnalysis::QpcSpanToDurationMilliseconds(
              v62,
              *((_QWORD *)a2 + 9),
              PerformanceCount.QuadPart);
      McTemplateU0xxqqqhhqqxxqnttqqqz(
        *((_DWORD *)a2 + 12),
        v24,
        *(_QWORD *)a2,
        (_DWORD)a2,
        *((_DWORD *)a2 + 7),
        *((_DWORD *)a2 + 9),
        *((_DWORD *)a2 + 10),
        *((_WORD *)a2 + 22),
        *((_WORD *)a2 + 23),
        v23,
        v22,
        v21,
        v22 + v21 - 1,
        *((_DWORD *)a2 + 12));
      v7 = v62;
      v5 = v48;
      v4 = v47;
    }
    if ( *((_WORD *)a2 + 56)
      && *(_QWORD *)a2
      && *(_QWORD *)a2 != 0xDDEECCCCDDEE0001uLL
      && *((_DWORD *)a2 + 7)
      && *((_DWORD *)a2 + 9) )
    {
      v69 = 0;
      v70 = 0;
      _TlgActivityBase<TraceLoggingActivity<&_TlgProvider_t const * const g_hDwmInteractionProvider,0,5,_TlgReflectorTag_Param0IsHProvider>,0,5>::zInternalStart(
        &v69,
        *((_QWORD *)&v11 + 1),
        v8,
        v16);
      v25 = hProvider;
      if ( hProvider > 5u )
      {
        v26 = (const GUID *)_TlgActivityBase<TraceLoggingActivity<&_TlgProvider_t const * const g_hDwmInteractionProvider,0,5,_TlgReflectorTag_Param0IsHProvider>,0,5>::zInternalRelatedId(&v69);
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1802B37D0, &pActivityId, v26, cData, &pData);
        v25 = hProvider;
      }
      if ( v25 > 4 )
      {
        v28 = (char *)a2 + 48;
        if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 2uLL) )
        {
          v31 = (const WCHAR *)*((_QWORD *)a2 + 1);
          v53 = *((_DWORD *)a2 + 13);
          v75 = &v53;
          v54 = *((_DWORD *)a2 + 14);
          v77 = &v54;
          v48 = *((_BYTE *)a2 + 60);
          v79 = &v48;
          v73 = (char *)a2 + 48;
          v74 = v30;
          v76 = v30;
          v78 = v30;
          v80 = 1LL;
          TlgCreateWsz(&pDesc, v31);
          TlgCreateWsz(&v82, *((LPCWSTR *)a2 + 2));
          v32 = *((_BYTE *)a2 + 24);
          v83 = &v47;
          v51 = *((_BYTE *)a2 + 28);
          v85 = &v51;
          v40 = *((_BYTE *)a2 + 32);
          v87 = &v40;
          v41 = *((_BYTE *)a2 + 36);
          v89 = &v41;
          v42 = *((_BYTE *)a2 + 40);
          v91 = &v42;
          v93 = (char *)a2 + 96;
          v95 = v50;
          v97 = v49;
          v55 = *((_DWORD *)a2 + 52) - *((_DWORD *)a2 + 51);
          v101 = &v55;
          v103 = (char *)a2 + 44;
          v105 = (char *)a2 + 46;
          v109 = &v43;
          v56 = *((_DWORD *)a2 + 30);
          v111 = &v56;
          v47 = v32;
          v84 = 1LL;
          v86 = 1LL;
          v88 = 1LL;
          v90 = 1LL;
          v92 = 1LL;
          v94 = 1LL;
          v96 = 2LL;
          v98 = 2LL;
          v99 = (char *)a2 + 112;
          v100 = 2LL;
          v102 = v33;
          v104 = 2LL;
          v106 = 2LL;
          v107 = a2;
          v108 = 8LL;
          v43 = v4;
          v110 = 1LL;
          v44 = *((_BYTE *)a2 + 144);
          v113 = (int *)&v44;
          v45 = *((_BYTE *)a2 + 145);
          v115 = (int *)&v45;
          v57 = v66;
          v117 = &v57;
          v58 = *((_DWORD *)a2 + 37);
          v119 = &v58;
          v121 = (int *)((char *)a2 + 196);
          v123 = (char *)a2 + 198;
          v46 = *((_BYTE *)a2 + 116);
          v125 = (int *)&v46;
          v112 = v33;
          v114 = 1LL;
          v116 = 1LL;
          v118 = v33;
          v120 = v33;
          v122 = 2LL;
          v124 = 2LL;
          v126 = 1LL;
          TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1802B37EB, &pActivityId, 0LL, 0x1Eu, &v72);
          v25 = hProvider;
          v29 = 2LL;
          LODWORD(v30) = 4;
        }
        if ( v25 > (unsigned int)v30 )
        {
          if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, v29) )
          {
            v36 = (const WCHAR *)*((_QWORD *)a2 + 1);
            v58 = *((_DWORD *)a2 + 13);
            v75 = &v58;
            v57 = *((_DWORD *)a2 + 14);
            v77 = &v57;
            v46 = *((_BYTE *)a2 + 60);
            v79 = &v46;
            v73 = (char *)a2 + 48;
            v74 = 4LL;
            v76 = 4LL;
            v78 = 4LL;
            v80 = 1LL;
            TlgCreateWsz(&pDesc, v36);
            TlgCreateWsz(&v82, *((LPCWSTR *)a2 + 2));
            v37 = *((_BYTE *)a2 + 24);
            v83 = &v45;
            v44 = *((_BYTE *)a2 + 28);
            v85 = &v44;
            v43 = *((_BYTE *)a2 + 32);
            v87 = &v43;
            v42 = *((_BYTE *)a2 + 36);
            v89 = &v42;
            v41 = *((_BYTE *)a2 + 40);
            v91 = &v41;
            v93 = (char *)a2 + 96;
            v95 = v50;
            v97 = v49;
            v56 = *((_DWORD *)a2 + 52) - *((_DWORD *)a2 + 51);
            v101 = &v56;
            v103 = (char *)a2 + 44;
            v105 = (char *)a2 + 46;
            v109 = &v40;
            v55 = *((_DWORD *)a2 + 31);
            v111 = &v55;
            v45 = v37;
            v84 = 1LL;
            v86 = 1LL;
            v88 = 1LL;
            v90 = 1LL;
            v92 = 1LL;
            v94 = 1LL;
            v96 = 2LL;
            v98 = 2LL;
            v99 = (char *)a2 + 112;
            v100 = 2LL;
            v102 = 4LL;
            v104 = 2LL;
            v106 = 2LL;
            v107 = a2;
            v108 = 8LL;
            v40 = v4;
            v110 = 1LL;
            v54 = *((_DWORD *)a2 + 32);
            v113 = &v54;
            v53 = HIDWORD(v66);
            v115 = &v53;
            v59 = v67;
            v117 = &v59;
            v60 = *((_DWORD *)a2 + 38);
            v119 = &v60;
            v61 = *((_DWORD *)a2 + 39);
            v121 = &v61;
            v123 = (char *)a2 + 216;
            v112 = 4LL;
            v114 = 4LL;
            v116 = 4LL;
            v118 = 4LL;
            v120 = 4LL;
            v122 = 4LL;
            v124 = 4LL;
            TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1802B32FA, &pActivityId, 0LL, 0x1Du, &v72);
            v25 = hProvider;
            v34 = 2LL;
            v35 = 4;
          }
          else
          {
            v28 = (char *)a2 + 48;
          }
          if ( v25 > v35 && TlgKeywordOn((TraceLoggingHProvider)&hProvider, v34) )
          {
            v38 = (const WCHAR *)*((_QWORD *)a2 + 1);
            v61 = *((_DWORD *)a2 + 13);
            v75 = &v61;
            v60 = *((_DWORD *)a2 + 14);
            v77 = &v60;
            v46 = *((_BYTE *)a2 + 60);
            v73 = v28;
            v79 = &v46;
            v74 = 4LL;
            v76 = 4LL;
            v78 = 4LL;
            v80 = 1LL;
            TlgCreateWsz(&pDesc, v38);
            TlgCreateWsz(&v82, *((LPCWSTR *)a2 + 2));
            v39 = *((_BYTE *)a2 + 24);
            v83 = &v45;
            v44 = *((_BYTE *)a2 + 28);
            v85 = &v44;
            v43 = *((_BYTE *)a2 + 32);
            v87 = &v43;
            v42 = *((_BYTE *)a2 + 36);
            v89 = &v42;
            v41 = *((_BYTE *)a2 + 40);
            v91 = &v41;
            v93 = (char *)a2 + 96;
            v95 = v50;
            v97 = v49;
            v59 = *((_DWORD *)a2 + 52) - *((_DWORD *)a2 + 51);
            v101 = &v59;
            v103 = (char *)a2 + 44;
            v105 = (char *)a2 + 46;
            v109 = &v40;
            v58 = *((_DWORD *)a2 + 33);
            v45 = v39;
            v84 = 1LL;
            v86 = 1LL;
            v88 = 1LL;
            v90 = 1LL;
            v92 = 1LL;
            v94 = 1LL;
            v96 = 2LL;
            v98 = 2LL;
            v99 = (char *)a2 + 112;
            v100 = 2LL;
            v102 = 4LL;
            v104 = 2LL;
            v106 = 2LL;
            v107 = a2;
            v108 = 8LL;
            v40 = v4;
            v110 = 1LL;
            v111 = &v58;
            v57 = *((_DWORD *)a2 + 34);
            v113 = &v57;
            v56 = *((_DWORD *)a2 + 35);
            v115 = &v56;
            v117 = (int *)((char *)a2 + 146);
            v55 = HIDWORD(v67);
            v119 = &v55;
            v54 = v68;
            v121 = &v54;
            v53 = HIDWORD(v68);
            v123 = (char *)&v53;
            v63 = *((_DWORD *)a2 + 40);
            v125 = &v63;
            v64 = *((_DWORD *)a2 + 41);
            v127 = &v64;
            LODWORD(v62) = *((_DWORD *)a2 + 42);
            v129 = &v62;
            v131 = (char *)a2 + 202;
            v133 = (char *)a2 + 200;
            v135 = (char *)a2 + 212;
            v137 = &v52;
            v112 = 4LL;
            v114 = 4LL;
            v116 = 4LL;
            v118 = 1LL;
            v120 = 4LL;
            v122 = 4LL;
            v124 = 4LL;
            v126 = 4LL;
            v128 = 4LL;
            v130 = 4LL;
            v132 = 2LL;
            v134 = 2LL;
            v136 = 2LL;
            v138 = 2LL;
            TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1802B351B, &pActivityId, 0LL, 0x24u, &v72);
            v25 = hProvider;
          }
        }
      }
      v69 = 2;
      if ( v25 > 5 )
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1802B32DF, &pActivityId, 0LL, 2u, &pData);
      if ( (unsigned int)(*((_DWORD *)a2 + 7) - 2) <= 4 )
        CTelemetryTouchLatencyAnalysis::AddToInteractionSummary(
          v7,
          a2,
          v50[0],
          v49[0],
          (const struct CTelemetryTouchLatencyAnalysis::CLatencyInfo *)&v66,
          *((_DWORD *)a2 + 52) - *((_DWORD *)a2 + 51));
      if ( v69 == 1 )
      {
        v69 = 2;
        _TlgWriteActivityAutoStop<0,5>(&hProvider, &pActivityId);
      }
    }
    *((_DWORD *)a2 + 17) = 0;
    if ( v5 )
    {
      WPF::ProcessHeapImpl::Free(*((void **)a2 + 1));
      memset_0(a2, 0, 0xF8uLL);
      if ( *(_DWORD *)v7 )
        --*(_DWORD *)v7;
    }
  }
}
