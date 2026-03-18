/*
 * XREFs of ?AnalyzeLatencyInformation@CTelemetryTouchLatencyAnalysis@@AEAAX_K0000000III0@Z @ 0x180019648
 * Callers:
 *     ?RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z @ 0x180083100 (-RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z.c)
 * Callees:
 *     ?FindScenario@CTelemetryTouchLatencyAnalysis@@AEAAPEAUTouchScenarioInfo@1@_K@Z @ 0x180019724 (-FindScenario@CTelemetryTouchLatencyAnalysis@@AEAAPEAUTouchScenarioInfo@1@_K@Z.c)
 *     ?QpcSpanToDurationMilliseconds@CTelemetryTouchLatencyAnalysis@@AEBAI_K0@Z @ 0x180019A68 (-QpcSpanToDurationMilliseconds@CTelemetryTouchLatencyAnalysis@@AEBAI_K0@Z.c)
 *     ??4CLatencyInfo@CTelemetryTouchLatencyAnalysis@@QEAAAEAV01@AEBV01@@Z @ 0x1800638CC (--4CLatencyInfo@CTelemetryTouchLatencyAnalysis@@QEAAAEAV01@AEBV01@@Z.c)
 *     _TlgKeywordOn @ 0x180083CAC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180083FFC (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _TlgCreateWsz @ 0x18014D554 (_TlgCreateWsz.c)
 *     ?QpcSpanToDurationMicroseconds@CTelemetryTouchLatencyAnalysis@@AEBAI_K0@Z @ 0x18014E198 (-QpcSpanToDurationMicroseconds@CTelemetryTouchLatencyAnalysis@@AEBAI_K0@Z.c)
 *     ?SetMax@CLatencyInfo@CTelemetryTouchLatencyAnalysis@@QEAAXAEBV12@@Z @ 0x18014F9AC (-SetMax@CLatencyInfo@CTelemetryTouchLatencyAnalysis@@QEAAXAEBV12@@Z.c)
 *     McTemplateU0xxxxxxxqqqqqqqqqxqnt @ 0x180150930 (McTemplateU0xxxxxxxqqqqqqqqqxqnt.c)
 *     ?TryGetDataForInteraction@CTelemetryComputeScribbleAggregator@@SA_NIPEAUComputeScribbleLatencyData@@@Z @ 0x180152094 (-TryGetDataForInteraction@CTelemetryComputeScribbleAggregator@@SA_NIPEAUComputeScribbleLatencyDa.c)
 */

void __fastcall CTelemetryTouchLatencyAnalysis::AnalyzeLatencyInformation(
        CTelemetryTouchLatencyAnalysis *this,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        unsigned __int64 a7,
        unsigned __int64 a8,
        signed __int64 a9,
        unsigned int a10,
        char a11,
        unsigned int a12,
        unsigned __int64 a13)
{
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // r14
  struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *Scenario; // rbx
  unsigned __int64 v17; // r11
  unsigned int v18; // eax
  CTelemetryTouchLatencyAnalysis *v19; // rcx
  unsigned __int64 v20; // r11
  unsigned __int16 v21; // r13
  unsigned int v22; // r12d
  CTelemetryTouchLatencyAnalysis *v23; // rcx
  CTelemetryTouchLatencyAnalysis *v24; // rcx
  unsigned int v25; // eax
  unsigned __int64 v26; // r10
  unsigned __int16 v27; // r15
  CTelemetryTouchLatencyAnalysis *v28; // rcx
  unsigned __int64 v29; // r10
  unsigned int v30; // r14d
  unsigned int v31; // eax
  unsigned __int16 v32; // r11
  unsigned int v33; // edx
  bool v34; // zf
  int v35; // r13d
  int v36; // r15d
  char v37; // r10
  char v38; // r11
  unsigned int v39; // ecx
  int v40; // ecx
  double v41; // xmm0_8
  double v42; // xmm0_8
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // r10
  const WCHAR *v45; // rdx
  char v46; // cl
  __int64 v47; // r11
  CTelemetryTouchLatencyAnalysis *v48; // rcx
  CTelemetryTouchLatencyAnalysis *v49; // rcx
  CTelemetryTouchLatencyAnalysis *v50; // rcx
  unsigned __int64 v51; // r10
  int v52; // eax
  __int64 v53; // r9
  const WCHAR *v54; // rdx
  char v55; // cl
  __int64 v56; // r11
  CTelemetryTouchLatencyAnalysis *v57; // rcx
  CTelemetryTouchLatencyAnalysis *v58; // rcx
  CTelemetryTouchLatencyAnalysis *v59; // rcx
  unsigned __int64 v60; // r10
  unsigned __int64 v61; // rdx
  unsigned __int64 v62; // r8
  char v63; // [rsp+C0h] [rbp-80h] BYREF
  char v64; // [rsp+C1h] [rbp-7Fh] BYREF
  char v65; // [rsp+C2h] [rbp-7Eh] BYREF
  char v66; // [rsp+C3h] [rbp-7Dh] BYREF
  char v67; // [rsp+C4h] [rbp-7Ch] BYREF
  _BYTE v68[3]; // [rsp+C5h] [rbp-7Bh] BYREF
  unsigned __int64 v69; // [rsp+C8h] [rbp-78h] BYREF
  unsigned int v70; // [rsp+D0h] [rbp-70h] BYREF
  unsigned int v71; // [rsp+D4h] [rbp-6Ch] BYREF
  unsigned int v72; // [rsp+D8h] [rbp-68h] BYREF
  unsigned int v73; // [rsp+DCh] [rbp-64h] BYREF
  unsigned int v74; // [rsp+E0h] [rbp-60h] BYREF
  unsigned int v75; // [rsp+E4h] [rbp-5Ch] BYREF
  unsigned __int64 v76; // [rsp+E8h] [rbp-58h] BYREF
  __int64 v77; // [rsp+F0h] [rbp-50h] BYREF
  unsigned __int64 v78; // [rsp+F8h] [rbp-48h]
  unsigned __int64 v79; // [rsp+100h] [rbp-40h]
  unsigned __int64 v80; // [rsp+108h] [rbp-38h] BYREF
  __int64 v81; // [rsp+110h] [rbp-30h]
  __int64 v82; // [rsp+118h] [rbp-28h]
  unsigned __int64 v83; // [rsp+120h] [rbp-20h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+130h] [rbp-10h] BYREF
  char *v85; // [rsp+150h] [rbp+10h]
  __int64 v86; // [rsp+158h] [rbp+18h]
  unsigned int *v87; // [rsp+160h] [rbp+20h]
  __int64 v88; // [rsp+168h] [rbp+28h]
  unsigned int *v89; // [rsp+170h] [rbp+30h]
  __int64 v90; // [rsp+178h] [rbp+38h]
  char *v91; // [rsp+180h] [rbp+40h]
  __int64 v92; // [rsp+188h] [rbp+48h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+190h] [rbp+50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v94; // [rsp+1A0h] [rbp+60h] BYREF
  char *v95; // [rsp+1B0h] [rbp+70h]
  __int64 v96; // [rsp+1B8h] [rbp+78h]
  char *v97; // [rsp+1C0h] [rbp+80h]
  __int64 v98; // [rsp+1C8h] [rbp+88h]
  char *v99; // [rsp+1D0h] [rbp+90h]
  __int64 v100; // [rsp+1D8h] [rbp+98h]
  char *v101; // [rsp+1E0h] [rbp+A0h]
  __int64 v102; // [rsp+1E8h] [rbp+A8h]
  char *v103; // [rsp+1F0h] [rbp+B0h]
  __int64 v104; // [rsp+1F8h] [rbp+B8h]
  unsigned int *v105; // [rsp+200h] [rbp+C0h]
  __int64 v106; // [rsp+208h] [rbp+C8h]
  char *v107; // [rsp+210h] [rbp+D0h]
  __int64 v108; // [rsp+218h] [rbp+D8h]
  char *v109; // [rsp+220h] [rbp+E0h]
  __int64 v110; // [rsp+228h] [rbp+E8h]
  char *v111; // [rsp+230h] [rbp+F0h]
  __int64 v112; // [rsp+238h] [rbp+F8h]
  unsigned __int64 *v113; // [rsp+240h] [rbp+100h]
  __int64 v114; // [rsp+248h] [rbp+108h]
  struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *v115; // [rsp+250h] [rbp+110h]
  __int64 v116; // [rsp+258h] [rbp+118h]
  unsigned int *v117; // [rsp+260h] [rbp+120h]
  __int64 v118; // [rsp+268h] [rbp+128h]
  unsigned int *v119; // [rsp+270h] [rbp+130h]
  __int64 v120; // [rsp+278h] [rbp+138h]
  unsigned int *v121; // [rsp+280h] [rbp+140h]
  __int64 v122; // [rsp+288h] [rbp+148h]
  unsigned int *v123; // [rsp+290h] [rbp+150h]
  __int64 v124; // [rsp+298h] [rbp+158h]
  unsigned __int64 *v125; // [rsp+2A0h] [rbp+160h]
  __int64 v126; // [rsp+2A8h] [rbp+168h]
  unsigned __int64 *v127; // [rsp+2B0h] [rbp+170h]
  __int64 v128; // [rsp+2B8h] [rbp+178h]
  unsigned __int64 *v129; // [rsp+2C0h] [rbp+180h]
  __int64 v130; // [rsp+2C8h] [rbp+188h]
  unsigned __int64 *v131; // [rsp+2D0h] [rbp+190h]
  __int64 v132; // [rsp+2D8h] [rbp+198h]
  unsigned __int64 *v133; // [rsp+2E0h] [rbp+1A0h]
  __int64 v134; // [rsp+2E8h] [rbp+1A8h]
  unsigned __int64 *v135; // [rsp+2F0h] [rbp+1B0h]
  __int64 v136; // [rsp+2F8h] [rbp+1B8h]
  unsigned __int64 *v137; // [rsp+300h] [rbp+1C0h]
  __int64 v138; // [rsp+308h] [rbp+1C8h]
  unsigned __int64 *v139; // [rsp+310h] [rbp+1D0h]
  __int64 v140; // [rsp+318h] [rbp+1D8h]
  signed __int64 *v141; // [rsp+320h] [rbp+1E0h]
  __int64 v142; // [rsp+328h] [rbp+1E8h]
  char *v143; // [rsp+330h] [rbp+1F0h]
  __int64 v144; // [rsp+338h] [rbp+1F8h]
  char *v145; // [rsp+340h] [rbp+200h]
  __int64 v146; // [rsp+348h] [rbp+208h]
  unsigned __int64 v147; // [rsp+3C8h] [rbp+288h] BYREF

  v147 = a4;
  v13 = a8;
  v14 = a4;
  v76 = a2;
  v69 = a3;
  if ( a8 >= a3 )
  {
    if ( a8 )
    {
      if ( *((_QWORD *)this + 392) )
      {
        if ( *((double *)this + 393) != 0.0 )
        {
          Scenario = CTelemetryTouchLatencyAnalysis::FindScenario(this, a2);
          if ( Scenario )
          {
            if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)&g_pComposition + 112LL) + 8LL) != *(_QWORD *)(*(_QWORD *)(*(_QWORD *)&g_pComposition + 112LL)
                                                                                                 + 16LL) )
            {
              if ( CTelemetryComputeScribbleAggregator::TryGetDataForInteraction(
                     a12,
                     (struct ComputeScribbleLatencyData *)&v77) )
              {
                a6 = v78;
                v13 = v79;
                *((_DWORD *)Scenario + 10) = 1;
              }
              v14 = v147;
              v17 = v69;
            }
            if ( v17 )
            {
              v18 = CTelemetryTouchLatencyAnalysis::QpcSpanToDurationMilliseconds(this, v17, v13);
              v21 = v18;
              if ( v18 >= 0xFFFF )
                v21 = -1;
              v22 = CTelemetryTouchLatencyAnalysis::QpcSpanToDurationMicroseconds(v19, v20, v14);
              CTelemetryTouchLatencyAnalysis::QpcSpanToDurationMicroseconds(v23, v14, a5);
              v25 = CTelemetryTouchLatencyAnalysis::QpcSpanToDurationMilliseconds(v24, a5, a6);
              v27 = v25;
              if ( v25 >= 0xFFFF )
                v27 = -1;
              v30 = CTelemetryTouchLatencyAnalysis::QpcSpanToDurationMilliseconds(this, a6, v26);
              if ( v30 >= 0xFFFF )
                LOWORD(v30) = -1;
              v31 = CTelemetryTouchLatencyAnalysis::QpcSpanToDurationMilliseconds(v28, v29, v13);
              if ( v31 >= 0xFFFF )
                LOWORD(v31) = -1;
              v33 = v21;
              v80 = 0LL;
              v81 = 0LL;
              v82 = 0LL;
              v34 = *((_DWORD *)Scenario + 30) == 0;
              v35 = v27;
              v36 = (unsigned __int16)v31;
              v80 = __PAIR64__(v22, v33);
              LODWORD(v81) = v32;
              HIDWORD(v81) = v35;
              LODWORD(v82) = (unsigned __int16)v30;
              HIDWORD(v82) = (unsigned __int16)v31;
              if ( v34 )
              {
                CTelemetryTouchLatencyAnalysis::CLatencyInfo::operator=((char *)Scenario + 120, &v80);
              }
              else
              {
                v77 = v33 + *((_DWORD *)Scenario + 43);
                v39 = v22 + *((_DWORD *)Scenario + 44);
                v78 = 0LL;
                HIDWORD(v77) = v39;
                v40 = v32 + *((_DWORD *)Scenario + 45);
                v79 = 0LL;
                LODWORD(v78) = v40;
                HIDWORD(v78) = v35 + *((_DWORD *)Scenario + 46);
                LODWORD(v79) = (unsigned __int16)v30 + *((_DWORD *)Scenario + 47);
                HIDWORD(v79) = (unsigned __int16)v31 + *((_DWORD *)Scenario + 48);
                CTelemetryTouchLatencyAnalysis::CLatencyInfo::operator=((char *)Scenario + 172, &v77);
                CTelemetryTouchLatencyAnalysis::CLatencyInfo::SetMax(
                  (struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *)((char *)Scenario + 148),
                  (const struct CTelemetryTouchLatencyAnalysis::CLatencyInfo *)&v80);
              }
              if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x400) != 0 )
                McTemplateU0xxxxxxxqqqqqqqqqxqnt(
                  (_DWORD)Scenario + 52,
                  v36 + (unsigned __int16)v30,
                  v76,
                  v69,
                  v147,
                  a5,
                  a6,
                  v37,
                  v13,
                  v38 + v22,
                  v36 + v30,
                  v22,
                  v38,
                  v35,
                  v30,
                  v36,
                  a10,
                  a11,
                  a13,
                  *((_DWORD *)Scenario + 12));
              v41 = (double)(int)a9;
              if ( a9 < 0 )
                v41 = v41 + 1.844674407370955e19;
              v42 = v41 * 1.5;
              v43 = 0LL;
              if ( v42 >= 9.223372036854776e18 )
              {
                v42 = v42 - 9.223372036854776e18;
                if ( v42 < 9.223372036854776e18 )
                  v43 = 0x8000000000000000uLL;
              }
              v44 = v43 + (unsigned int)(int)v42;
              if ( *((_QWORD *)Scenario + 13) == a13 && a6 - v69 > v44 )
              {
                *((_BYTE *)Scenario + 144) = 1;
                if ( hProvider > 4u )
                {
                  if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 2uLL) )
                  {
                    v45 = (const WCHAR *)*((_QWORD *)Scenario + 1);
                    v85 = (char *)Scenario + 48;
                    v70 = *((_DWORD *)Scenario + 13);
                    v87 = &v70;
                    v71 = *((_DWORD *)Scenario + 14);
                    v89 = &v71;
                    v63 = *((_BYTE *)Scenario + 60);
                    v91 = &v63;
                    v86 = 4LL;
                    v88 = 4LL;
                    v90 = 4LL;
                    v92 = 1LL;
                    TlgCreateWsz(&pDesc, v45);
                    TlgCreateWsz(&v94, *((LPCWSTR *)Scenario + 2));
                    v46 = *((_BYTE *)Scenario + 24);
                    v95 = &v64;
                    v65 = *((_BYTE *)Scenario + 28);
                    v97 = &v65;
                    v66 = *((_BYTE *)Scenario + 32);
                    v99 = &v66;
                    v67 = *((_BYTE *)Scenario + 36);
                    v101 = &v67;
                    v68[0] = *((_BYTE *)Scenario + 40);
                    v103 = v68;
                    v105 = &a10;
                    v107 = &a11;
                    v111 = (char *)Scenario + 44;
                    v64 = v46;
                    v113 = (unsigned __int64 *)((char *)Scenario + 46);
                    v96 = 1LL;
                    v98 = 1LL;
                    v100 = 1LL;
                    v102 = 1LL;
                    v104 = 1LL;
                    v106 = 4LL;
                    v108 = 4LL;
                    v109 = (char *)Scenario + 104;
                    v110 = 8LL;
                    v112 = v47;
                    v114 = v47;
                    v115 = Scenario;
                    v116 = 8LL;
                    v72 = CTelemetryTouchLatencyAnalysis::QpcSpanToDurationMilliseconds(this, v69, a6);
                    v117 = &v72;
                    v118 = 4LL;
                    v73 = CTelemetryTouchLatencyAnalysis::QpcSpanToDurationMicroseconds(v48, v69, v147);
                    v119 = &v73;
                    v120 = 4LL;
                    v74 = CTelemetryTouchLatencyAnalysis::QpcSpanToDurationMilliseconds(v49, v147, a5);
                    v121 = &v74;
                    v122 = 4LL;
                    v75 = CTelemetryTouchLatencyAnalysis::QpcSpanToDurationMilliseconds(v50, a5, a6);
                    v123 = &v75;
                    v124 = 4LL;
                    v126 = 8LL;
                    v128 = 8LL;
                    v130 = 8LL;
                    v132 = 8LL;
                    v134 = 8LL;
                    v136 = 8LL;
                    v76 = 1000 * (v51 / g_qpcFrequency.QuadPart)
                        + 1000 * (v51 % g_qpcFrequency.QuadPart) / g_qpcFrequency.QuadPart;
                    v125 = &v76;
                    v127 = &v69;
                    v129 = &v147;
                    v131 = &a5;
                    v133 = &a6;
                    v135 = (unsigned __int64 *)&a9;
                    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1802B3096, 0LL, 0LL, 0x1Du, &pData);
                  }
                }
              }
              else
              {
                v52 = *((_DWORD *)Scenario + 61);
                if ( v52 )
                {
                  if ( a10 == v52 + 1 && *((_QWORD *)Scenario + 28) - *((_QWORD *)Scenario + 29) > v44 )
                  {
                    ++*((_WORD *)Scenario + 98);
                    if ( hProvider > 4u )
                    {
                      if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 2uLL) )
                      {
                        v54 = (const WCHAR *)*((_QWORD *)Scenario + 1);
                        v85 = (char *)Scenario + 48;
                        v75 = *((_DWORD *)Scenario + 13);
                        v87 = &v75;
                        v74 = *((_DWORD *)Scenario + 14);
                        v89 = &v74;
                        v68[0] = *((_BYTE *)Scenario + 60);
                        v91 = v68;
                        v86 = 4LL;
                        v88 = 4LL;
                        v90 = 4LL;
                        v92 = v53;
                        TlgCreateWsz(&pDesc, v54);
                        TlgCreateWsz(&v94, *((LPCWSTR *)Scenario + 2));
                        v55 = *((_BYTE *)Scenario + 24);
                        v95 = &v67;
                        v66 = *((_BYTE *)Scenario + 28);
                        v97 = &v66;
                        v65 = *((_BYTE *)Scenario + 32);
                        v99 = &v65;
                        v64 = *((_BYTE *)Scenario + 36);
                        v101 = &v64;
                        v63 = *((_BYTE *)Scenario + 40);
                        v103 = &v63;
                        v105 = &a10;
                        v109 = &a11;
                        v113 = &a13;
                        v115 = (struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *)((char *)Scenario + 44);
                        v67 = v55;
                        v117 = (unsigned int *)((char *)Scenario + 46);
                        v96 = 1LL;
                        v98 = 1LL;
                        v100 = 1LL;
                        v102 = 1LL;
                        v104 = 1LL;
                        v106 = 4LL;
                        v107 = (char *)Scenario + 244;
                        v108 = 4LL;
                        v110 = 4LL;
                        v111 = (char *)Scenario + 104;
                        v112 = 8LL;
                        v114 = 8LL;
                        v116 = v56;
                        v118 = v56;
                        v119 = (unsigned int *)Scenario;
                        v120 = 8LL;
                        v73 = CTelemetryTouchLatencyAnalysis::QpcSpanToDurationMilliseconds(this, v69, a6);
                        v121 = &v73;
                        v122 = 4LL;
                        v72 = CTelemetryTouchLatencyAnalysis::QpcSpanToDurationMicroseconds(v57, v69, v147);
                        v123 = &v72;
                        v124 = 4LL;
                        v71 = CTelemetryTouchLatencyAnalysis::QpcSpanToDurationMilliseconds(v58, v147, a5);
                        v125 = (unsigned __int64 *)&v71;
                        v126 = 4LL;
                        v70 = CTelemetryTouchLatencyAnalysis::QpcSpanToDurationMilliseconds(v59, a5, a6);
                        v127 = (unsigned __int64 *)&v70;
                        v128 = 4LL;
                        v130 = 8LL;
                        v61 = *((_QWORD *)Scenario + 29);
                        v62 = *((_QWORD *)Scenario + 28);
                        v83 = 1000 * (v60 / g_qpcFrequency.QuadPart)
                            + 1000 * (v60 % g_qpcFrequency.QuadPart) / g_qpcFrequency.QuadPart;
                        v129 = &v83;
                        LODWORD(v76) = CTelemetryTouchLatencyAnalysis::QpcSpanToDurationMilliseconds(this, v61, v62);
                        v131 = &v76;
                        v133 = &v69;
                        v135 = &v147;
                        v137 = &a5;
                        v139 = &a6;
                        v141 = &a9;
                        v132 = 4LL;
                        v134 = 8LL;
                        v136 = 8LL;
                        v138 = 8LL;
                        v140 = 8LL;
                        v142 = 8LL;
                        v143 = (char *)Scenario + 232;
                        v144 = 8LL;
                        v145 = (char *)Scenario + 224;
                        v146 = 8LL;
                        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1802B2E20, 0LL, 0LL, 0x22u, &pData);
                      }
                    }
                  }
                }
              }
              ++*((_WORD *)Scenario + 57);
            }
            ++*((_WORD *)Scenario + 56);
          }
        }
      }
    }
  }
}
