/*
 * XREFs of ?AnalyzeLatencyInformation@CTelemetryTouchLatencyAnalysis@@AEAAX_K000000000III0@Z @ 0x18001B9CC
 * Callers:
 *     ?UpdateScenarioLatency@TouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@QEAAX_K000@Z @ 0x18001B524 (-UpdateScenarioLatency@TouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@QEAAX_K000@Z.c)
 * Callees:
 *     ?FindScenario@CTelemetryTouchLatencyAnalysis@@AEAAPEAUTouchScenarioInfo@1@_K@Z @ 0x18001BAAC (-FindScenario@CTelemetryTouchLatencyAnalysis@@AEAAPEAUTouchScenarioInfo@1@_K@Z.c)
 *     ?QpcSpanToDurationMilliseconds@CTelemetryTouchLatencyAnalysis@@AEBAI_K0@Z @ 0x18001BE00 (-QpcSpanToDurationMilliseconds@CTelemetryTouchLatencyAnalysis@@AEBAI_K0@Z.c)
 *     _TlgWrite @ 0x1800B3880 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800B539C (_TlgKeywordOn.c)
 *     ??4CLatencyInfo@CTelemetryTouchLatencyAnalysis@@QEAAAEAV01@AEBV01@@Z @ 0x1800DF8E8 (--4CLatencyInfo@CTelemetryTouchLatencyAnalysis@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?IsVailContainer@@YAHXZ @ 0x1800DF934 (-IsVailContainer@@YAHXZ.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _TlgCreateWsz @ 0x180158BD8 (_TlgCreateWsz.c)
 *     ??HCLatencyInfo@CTelemetryTouchLatencyAnalysis@@QEAA?AV01@AEBV01@@Z @ 0x18018CE98 (--HCLatencyInfo@CTelemetryTouchLatencyAnalysis@@QEAA-AV01@AEBV01@@Z.c)
 *     ?QpcSpanToDurationMicroseconds@CTelemetryTouchLatencyAnalysis@@AEBAI_K0@Z @ 0x18018DDE0 (-QpcSpanToDurationMicroseconds@CTelemetryTouchLatencyAnalysis@@AEBAI_K0@Z.c)
 *     ?SetMax@CLatencyInfo@CTelemetryTouchLatencyAnalysis@@QEAAXAEBV12@@Z @ 0x18018FBB4 (-SetMax@CLatencyInfo@CTelemetryTouchLatencyAnalysis@@QEAAXAEBV12@@Z.c)
 *     McTemplateU0xxxxxxxxxqqqqqqqqqqqqxqnt @ 0x180190DF0 (McTemplateU0xxxxxxxxxqqqqqqqqqqqqxqnt.c)
 *     ?TryGetDataForInteraction@CTelemetryComputeScribbleAggregator@@SA_NIPEAUComputeScribbleLatencyData@@@Z @ 0x180192460 (-TryGetDataForInteraction@CTelemetryComputeScribbleAggregator@@SA_NIPEAUComputeScribbleLatencyDa.c)
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
        unsigned __int64 a9,
        unsigned __int64 a10,
        signed __int64 a11,
        unsigned int a12,
        char a13,
        unsigned int a14,
        unsigned __int64 a15)
{
  unsigned __int64 v15; // r15
  unsigned __int64 v16; // rbx
  struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *Scenario; // rdi
  unsigned __int64 v19; // r11
  unsigned __int64 v20; // r14
  CTelemetryTouchLatencyAnalysis *v21; // rcx
  CTelemetryTouchLatencyAnalysis *v22; // rcx
  CTelemetryTouchLatencyAnalysis *v23; // rcx
  CTelemetryTouchLatencyAnalysis *v24; // rcx
  CTelemetryTouchLatencyAnalysis *v25; // rcx
  unsigned __int64 v26; // r11
  unsigned int v27; // r12d
  unsigned int v28; // r13d
  int v29; // r10d
  unsigned __int64 v30; // r11
  CTelemetryTouchLatencyAnalysis *v31; // rcx
  CTelemetryTouchLatencyAnalysis *v32; // rcx
  unsigned int v33; // r9d
  char v34; // r10
  __int64 v35; // rax
  double v36; // xmm0_8
  double v37; // xmm0_8
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // r10
  __int64 v40; // r9
  const WCHAR *v41; // rdx
  char v42; // cl
  __int64 v43; // r11
  unsigned int v44; // eax
  unsigned __int64 v45; // rbx
  CTelemetryTouchLatencyAnalysis *v46; // rcx
  unsigned __int64 v47; // r11
  CTelemetryTouchLatencyAnalysis *v48; // rcx
  CTelemetryTouchLatencyAnalysis *v49; // rcx
  unsigned __int64 v50; // r11
  unsigned __int64 v51; // r10
  int v52; // eax
  const WCHAR *v53; // rdx
  char v54; // cl
  __int64 v55; // r11
  unsigned __int64 v56; // r15
  CTelemetryTouchLatencyAnalysis *v57; // rcx
  unsigned __int64 v58; // r11
  CTelemetryTouchLatencyAnalysis *v59; // rcx
  CTelemetryTouchLatencyAnalysis *v60; // rcx
  unsigned __int64 v61; // r11
  unsigned __int64 v62; // r10
  unsigned __int64 v63; // rdx
  unsigned __int64 v64; // r8
  char v65; // [rsp+E0h] [rbp-80h] BYREF
  char v66; // [rsp+E1h] [rbp-7Fh] BYREF
  char v67; // [rsp+E2h] [rbp-7Eh] BYREF
  char v68; // [rsp+E3h] [rbp-7Dh] BYREF
  char v69; // [rsp+E4h] [rbp-7Ch] BYREF
  _BYTE v70[3]; // [rsp+E5h] [rbp-7Bh] BYREF
  unsigned int v71; // [rsp+E8h] [rbp-78h] BYREF
  unsigned int v72; // [rsp+ECh] [rbp-74h] BYREF
  unsigned int v73; // [rsp+F0h] [rbp-70h] BYREF
  unsigned int v74; // [rsp+F4h] [rbp-6Ch] BYREF
  unsigned int v75; // [rsp+F8h] [rbp-68h] BYREF
  unsigned int v76; // [rsp+FCh] [rbp-64h] BYREF
  unsigned __int64 v77; // [rsp+100h] [rbp-60h] BYREF
  unsigned int v78; // [rsp+108h] [rbp-58h] BYREF
  unsigned int v79; // [rsp+10Ch] [rbp-54h] BYREF
  unsigned int v80; // [rsp+110h] [rbp-50h] BYREF
  unsigned __int64 v81; // [rsp+118h] [rbp-48h] BYREF
  _DWORD v82[2]; // [rsp+120h] [rbp-40h] BYREF
  unsigned __int64 v83; // [rsp+128h] [rbp-38h]
  unsigned __int64 v84; // [rsp+130h] [rbp-30h]
  unsigned int v85; // [rsp+138h] [rbp-28h]
  unsigned int v86; // [rsp+13Ch] [rbp-24h]
  unsigned int v87; // [rsp+140h] [rbp-20h]
  unsigned __int64 v88; // [rsp+148h] [rbp-18h] BYREF
  _BYTE v89[48]; // [rsp+150h] [rbp-10h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+180h] [rbp+20h] BYREF
  char *v91; // [rsp+1A0h] [rbp+40h]
  __int64 v92; // [rsp+1A8h] [rbp+48h]
  unsigned int *v93; // [rsp+1B0h] [rbp+50h]
  __int64 v94; // [rsp+1B8h] [rbp+58h]
  unsigned int *v95; // [rsp+1C0h] [rbp+60h]
  __int64 v96; // [rsp+1C8h] [rbp+68h]
  char *v97; // [rsp+1D0h] [rbp+70h]
  __int64 v98; // [rsp+1D8h] [rbp+78h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+1E0h] [rbp+80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v100; // [rsp+1F0h] [rbp+90h] BYREF
  char *v101; // [rsp+200h] [rbp+A0h]
  __int64 v102; // [rsp+208h] [rbp+A8h]
  char *v103; // [rsp+210h] [rbp+B0h]
  __int64 v104; // [rsp+218h] [rbp+B8h]
  char *v105; // [rsp+220h] [rbp+C0h]
  __int64 v106; // [rsp+228h] [rbp+C8h]
  char *v107; // [rsp+230h] [rbp+D0h]
  __int64 v108; // [rsp+238h] [rbp+D8h]
  char *v109; // [rsp+240h] [rbp+E0h]
  __int64 v110; // [rsp+248h] [rbp+E8h]
  char *v111; // [rsp+250h] [rbp+F0h]
  __int64 v112; // [rsp+258h] [rbp+F8h]
  unsigned int *v113; // [rsp+260h] [rbp+100h]
  __int64 v114; // [rsp+268h] [rbp+108h]
  char *v115; // [rsp+270h] [rbp+110h]
  __int64 v116; // [rsp+278h] [rbp+118h]
  char *v117; // [rsp+280h] [rbp+120h]
  __int64 v118; // [rsp+288h] [rbp+128h]
  char *v119; // [rsp+290h] [rbp+130h]
  __int64 v120; // [rsp+298h] [rbp+138h]
  unsigned __int64 *v121; // [rsp+2A0h] [rbp+140h]
  __int64 v122; // [rsp+2A8h] [rbp+148h]
  char *v123; // [rsp+2B0h] [rbp+150h]
  __int64 v124; // [rsp+2B8h] [rbp+158h]
  unsigned int *v125; // [rsp+2C0h] [rbp+160h]
  __int64 v126; // [rsp+2C8h] [rbp+168h]
  unsigned int *v127; // [rsp+2D0h] [rbp+170h]
  __int64 v128; // [rsp+2D8h] [rbp+178h]
  unsigned int *v129; // [rsp+2E0h] [rbp+180h]
  __int64 v130; // [rsp+2E8h] [rbp+188h]
  unsigned int *v131; // [rsp+2F0h] [rbp+190h]
  __int64 v132; // [rsp+2F8h] [rbp+198h]
  unsigned int *v133; // [rsp+300h] [rbp+1A0h]
  __int64 v134; // [rsp+308h] [rbp+1A8h]
  unsigned int *v135; // [rsp+310h] [rbp+1B0h]
  __int64 v136; // [rsp+318h] [rbp+1B8h]
  unsigned int *v137; // [rsp+320h] [rbp+1C0h]
  __int64 v138; // [rsp+328h] [rbp+1C8h]
  unsigned __int64 *v139; // [rsp+330h] [rbp+1D0h]
  __int64 v140; // [rsp+338h] [rbp+1D8h]
  unsigned __int64 *v141; // [rsp+340h] [rbp+1E0h]
  __int64 v142; // [rsp+348h] [rbp+1E8h]
  unsigned __int64 *v143; // [rsp+350h] [rbp+1F0h]
  __int64 v144; // [rsp+358h] [rbp+1F8h]
  unsigned __int64 *v145; // [rsp+360h] [rbp+200h]
  __int64 v146; // [rsp+368h] [rbp+208h]
  unsigned __int64 *v147; // [rsp+370h] [rbp+210h]
  __int64 v148; // [rsp+378h] [rbp+218h]
  unsigned __int64 *v149; // [rsp+380h] [rbp+220h]
  __int64 v150; // [rsp+388h] [rbp+228h]
  unsigned __int64 *v151; // [rsp+390h] [rbp+230h]
  __int64 v152; // [rsp+398h] [rbp+238h]
  signed __int64 *v153; // [rsp+3A0h] [rbp+240h]
  __int64 v154; // [rsp+3A8h] [rbp+248h]
  unsigned __int64 *v155; // [rsp+3B0h] [rbp+250h]
  __int64 v156; // [rsp+3B8h] [rbp+258h]
  unsigned __int64 *v157; // [rsp+3C0h] [rbp+260h]
  __int64 v158; // [rsp+3C8h] [rbp+268h]
  signed __int64 *v159; // [rsp+3D0h] [rbp+270h]
  __int64 v160; // [rsp+3D8h] [rbp+278h]
  char *v161; // [rsp+3E0h] [rbp+280h]
  __int64 v162; // [rsp+3E8h] [rbp+288h]
  char *v163; // [rsp+3F0h] [rbp+290h]
  __int64 v164; // [rsp+3F8h] [rbp+298h]
  unsigned __int64 v165; // [rsp+478h] [rbp+318h] BYREF

  v165 = a4;
  v15 = a8;
  v16 = a4;
  v81 = a2;
  v77 = a3;
  if ( a8 < a3 )
    return;
  if ( !a8 )
    return;
  if ( !*((_QWORD *)this + 495) )
    return;
  if ( *((double *)this + 496) == 0.0 )
    return;
  Scenario = CTelemetryTouchLatencyAnalysis::FindScenario(this, a2);
  if ( !Scenario )
    return;
  if ( *(_QWORD *)(*((_QWORD *)g_pComposition + 13) + 8LL) != *(_QWORD *)(*((_QWORD *)g_pComposition + 13) + 16LL) )
  {
    if ( CTelemetryComputeScribbleAggregator::TryGetDataForInteraction(a14, (struct ComputeScribbleLatencyData *)v82) )
    {
      v20 = v84;
      a6 = v83;
      v15 = v84;
      *((_DWORD *)Scenario + 12) = 1;
      v16 = v165;
      v19 = v77;
      goto LABEL_8;
    }
    v16 = v165;
    v19 = v77;
  }
  v20 = a7;
LABEL_8:
  if ( v19 )
  {
    v83 = 0LL;
    LODWORD(v84) = 0;
    v74 = CTelemetryTouchLatencyAnalysis::QpcSpanToDurationMicroseconds(this, v19, v16);
    v76 = CTelemetryTouchLatencyAnalysis::QpcSpanToDurationMicroseconds(v21, v16, a5);
    v73 = CTelemetryTouchLatencyAnalysis::QpcSpanToDurationMilliseconds(v22, a5, a6);
    v75 = CTelemetryTouchLatencyAnalysis::QpcSpanToDurationMilliseconds(v23, a6, v20);
    v71 = CTelemetryTouchLatencyAnalysis::QpcSpanToDurationMilliseconds(v24, v20, v15);
    v82[0] = CTelemetryTouchLatencyAnalysis::QpcSpanToDurationMilliseconds(v25, v26, v15);
    HIDWORD(v84) = v76;
    LOBYTE(v27) = 0;
    v72 = 0;
    v86 = v75;
    LOBYTE(v28) = 0;
    v85 = v73;
    v82[1] = v29;
    v87 = v71;
    if ( (unsigned int)IsVailContainer() )
    {
      v27 = CTelemetryTouchLatencyAnalysis::QpcSpanToDurationMicroseconds(this, v30, a9);
      v28 = CTelemetryTouchLatencyAnalysis::QpcSpanToDurationMicroseconds(v31, a9, a10);
      v72 = CTelemetryTouchLatencyAnalysis::QpcSpanToDurationMicroseconds(v32, a10, v16);
      LODWORD(v84) = v72;
      v83 = __PAIR64__(v28, v27);
    }
    if ( *((_DWORD *)Scenario + 36) )
    {
      v35 = CTelemetryTouchLatencyAnalysis::CLatencyInfo::operator+((char *)Scenario + 220, v89, v82);
      CTelemetryTouchLatencyAnalysis::CLatencyInfo::operator=((char *)Scenario + 220, v35);
      CTelemetryTouchLatencyAnalysis::CLatencyInfo::SetMax(
        (struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *)((char *)Scenario + 184),
        (const struct CTelemetryTouchLatencyAnalysis::CLatencyInfo *)v82);
      v34 = v74;
      v33 = v71;
    }
    else
    {
      CTelemetryTouchLatencyAnalysis::CLatencyInfo::operator=((char *)Scenario + 144, v82);
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x400) != 0 )
      McTemplateU0xxxxxxxxxqqqqqqqqqqqqxqnt(
        (_DWORD)Scenario + 76,
        v33 + v75,
        v81,
        v77,
        v165,
        a5,
        a6,
        v20,
        v15,
        a9,
        a10,
        v76 + v34,
        v33 + v75,
        v34,
        v76,
        v73,
        v75,
        v71,
        v27,
        v28,
        v72,
        a12,
        a13,
        a15,
        *((_DWORD *)Scenario + 18));
    v36 = (double)(int)a11;
    if ( a11 < 0 )
      v36 = v36 + 1.844674407370955e19;
    v37 = v36 * 1.5;
    v38 = 0LL;
    if ( v37 >= 9.223372036854776e18 )
    {
      v37 = v37 - 9.223372036854776e18;
      if ( v37 < 9.223372036854776e18 )
        v38 = 0x8000000000000000uLL;
    }
    v39 = v38 + (unsigned int)(int)v37;
    if ( *((_QWORD *)Scenario + 16) == a15 && a6 - v77 > v39 )
    {
      *((_BYTE *)Scenario + 180) = 1;
      if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 2uLL) )
      {
        v41 = (const WCHAR *)*((_QWORD *)Scenario + 2);
        v91 = (char *)Scenario + 72;
        v76 = *((_DWORD *)Scenario + 19);
        v93 = &v76;
        v75 = *((_DWORD *)Scenario + 20);
        v95 = &v75;
        v65 = *((_BYTE *)Scenario + 84);
        v97 = &v65;
        v92 = 4LL;
        v94 = 4LL;
        v96 = 4LL;
        v98 = v40;
        TlgCreateWsz(&pDesc, v41);
        TlgCreateWsz(&v100, *((LPCWSTR *)Scenario + 3));
        v42 = *((_BYTE *)Scenario + 32);
        v101 = &v66;
        v103 = (char *)Scenario + 52;
        v67 = *((_BYTE *)Scenario + 36);
        v105 = &v67;
        v68 = *((_BYTE *)Scenario + 40);
        v107 = &v68;
        v69 = *((_BYTE *)Scenario + 44);
        v109 = &v69;
        v70[0] = *((_BYTE *)Scenario + 48);
        v111 = v70;
        v113 = &a12;
        v115 = &a13;
        v119 = (char *)Scenario + 68;
        v121 = (unsigned __int64 *)((char *)Scenario + 70);
        v120 = v43;
        v122 = v43;
        v66 = v42;
        v123 = (char *)Scenario + 8;
        v102 = 1LL;
        v104 = 16LL;
        v106 = 1LL;
        v108 = 1LL;
        v110 = 1LL;
        v112 = 1LL;
        v114 = 4LL;
        v116 = 4LL;
        v117 = (char *)Scenario + 128;
        v118 = 8LL;
        v124 = 8LL;
        v44 = CTelemetryTouchLatencyAnalysis::QpcSpanToDurationMilliseconds(this, v77, a6);
        v45 = v165;
        v74 = v44;
        v126 = 4LL;
        v125 = &v74;
        v78 = CTelemetryTouchLatencyAnalysis::QpcSpanToDurationMicroseconds(v46, v47, v165);
        v127 = &v78;
        v128 = 4LL;
        v79 = CTelemetryTouchLatencyAnalysis::QpcSpanToDurationMicroseconds(v48, v45, a5);
        v129 = &v79;
        v130 = 4LL;
        v80 = CTelemetryTouchLatencyAnalysis::QpcSpanToDurationMilliseconds(v49, a5, a6);
        v131 = &v80;
        v132 = 4LL;
        if ( (unsigned int)IsVailContainer() )
          v73 = CTelemetryTouchLatencyAnalysis::QpcSpanToDurationMicroseconds(this, v50, a9);
        else
          v73 = 0;
        v134 = 4LL;
        v133 = &v73;
        if ( (unsigned int)IsVailContainer() )
          v72 = CTelemetryTouchLatencyAnalysis::QpcSpanToDurationMicroseconds(this, a9, a10);
        else
          v72 = 0;
        v136 = 4LL;
        v135 = &v72;
        if ( (unsigned int)IsVailContainer() )
          v71 = CTelemetryTouchLatencyAnalysis::QpcSpanToDurationMicroseconds(this, a10, v45);
        else
          v71 = 0;
        v137 = &v71;
        v138 = 4LL;
        v140 = 8LL;
        v142 = 8LL;
        v144 = 8LL;
        v146 = 8LL;
        v148 = 8LL;
        v150 = 8LL;
        v152 = 8LL;
        v154 = 8LL;
        v81 = 1000 * (v51 / g_qpcFrequency.QuadPart) + 1000 * (v51 % g_qpcFrequency.QuadPart) / g_qpcFrequency.QuadPart;
        v139 = &v81;
        v141 = &v77;
        v143 = &v165;
        v145 = &a5;
        v147 = &a6;
        v149 = &a9;
        v151 = &a10;
        v153 = &a11;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1802D87F5, 0LL, 0LL, 0x23u, &pData);
      }
    }
    else
    {
      v52 = *((_DWORD *)Scenario + 77);
      if ( v52 )
      {
        if ( a12 == v52 + 1 && *((_QWORD *)Scenario + 36) - *((_QWORD *)Scenario + 37) > v39 )
        {
          ++*((_WORD *)Scenario + 128);
          if ( hProvider > 4u )
          {
            if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 2uLL) )
            {
              v53 = (const WCHAR *)*((_QWORD *)Scenario + 2);
              v91 = (char *)Scenario + 72;
              v80 = *((_DWORD *)Scenario + 19);
              v93 = &v80;
              v79 = *((_DWORD *)Scenario + 20);
              v95 = &v79;
              v70[0] = *((_BYTE *)Scenario + 84);
              v97 = v70;
              v92 = 4LL;
              v94 = 4LL;
              v96 = 4LL;
              v98 = 1LL;
              TlgCreateWsz(&pDesc, v53);
              TlgCreateWsz(&v100, *((LPCWSTR *)Scenario + 3));
              v54 = *((_BYTE *)Scenario + 32);
              v101 = &v69;
              v103 = (char *)Scenario + 52;
              v68 = *((_BYTE *)Scenario + 36);
              v105 = &v68;
              v67 = *((_BYTE *)Scenario + 40);
              v107 = &v67;
              v66 = *((_BYTE *)Scenario + 44);
              v109 = &v66;
              v65 = *((_BYTE *)Scenario + 48);
              v111 = &v65;
              v113 = &a12;
              v117 = &a13;
              v121 = &a15;
              v123 = (char *)Scenario + 68;
              v125 = (unsigned int *)((char *)Scenario + 70);
              v124 = v55;
              v126 = v55;
              v69 = v54;
              v127 = (unsigned int *)((char *)Scenario + 8);
              v102 = 1LL;
              v104 = 16LL;
              v106 = 1LL;
              v108 = 1LL;
              v110 = 1LL;
              v112 = 1LL;
              v114 = 4LL;
              v115 = (char *)Scenario + 308;
              v116 = 4LL;
              v118 = 4LL;
              v119 = (char *)Scenario + 128;
              v120 = 8LL;
              v122 = 8LL;
              v128 = 8LL;
              v78 = CTelemetryTouchLatencyAnalysis::QpcSpanToDurationMilliseconds(this, v77, a6);
              v56 = v165;
              v129 = &v78;
              v130 = 4LL;
              v76 = CTelemetryTouchLatencyAnalysis::QpcSpanToDurationMicroseconds(v57, v58, v165);
              v131 = &v76;
              v132 = 4LL;
              v75 = CTelemetryTouchLatencyAnalysis::QpcSpanToDurationMicroseconds(v59, v56, a5);
              v133 = &v75;
              v134 = 4LL;
              v74 = CTelemetryTouchLatencyAnalysis::QpcSpanToDurationMilliseconds(v60, a5, a6);
              v135 = &v74;
              v136 = 4LL;
              if ( (unsigned int)IsVailContainer() )
                v73 = CTelemetryTouchLatencyAnalysis::QpcSpanToDurationMicroseconds(this, v61, a9);
              else
                v73 = 0;
              v138 = 4LL;
              v137 = &v73;
              if ( (unsigned int)IsVailContainer() )
                v72 = CTelemetryTouchLatencyAnalysis::QpcSpanToDurationMicroseconds(this, a9, a10);
              else
                v72 = 0;
              v140 = 4LL;
              v139 = (unsigned __int64 *)&v72;
              if ( (unsigned int)IsVailContainer() )
                v71 = CTelemetryTouchLatencyAnalysis::QpcSpanToDurationMicroseconds(this, a10, v56);
              else
                v71 = 0;
              v141 = (unsigned __int64 *)&v71;
              v142 = 4LL;
              v144 = 8LL;
              v63 = *((_QWORD *)Scenario + 37);
              v64 = *((_QWORD *)Scenario + 36);
              v88 = 1000 * (v62 / g_qpcFrequency.QuadPart)
                  + 1000 * (v62 % g_qpcFrequency.QuadPart) / g_qpcFrequency.QuadPart;
              v143 = &v88;
              LODWORD(v81) = CTelemetryTouchLatencyAnalysis::QpcSpanToDurationMilliseconds(this, v63, v64);
              v145 = &v81;
              v147 = &v77;
              v149 = &v165;
              v151 = &a5;
              v153 = (signed __int64 *)&a6;
              v155 = &a9;
              v157 = &a10;
              v159 = &a11;
              v146 = 4LL;
              v148 = 8LL;
              v150 = 8LL;
              v152 = 8LL;
              v154 = 8LL;
              v156 = 8LL;
              v158 = 8LL;
              v160 = 8LL;
              v161 = (char *)Scenario + 296;
              v162 = 8LL;
              v163 = (char *)Scenario + 288;
              v164 = 8LL;
              TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1802D84EE, 0LL, 0LL, 0x28u, &pData);
            }
          }
        }
      }
    }
    ++*((_WORD *)Scenario + 69);
  }
  ++*((_WORD *)Scenario + 68);
}
