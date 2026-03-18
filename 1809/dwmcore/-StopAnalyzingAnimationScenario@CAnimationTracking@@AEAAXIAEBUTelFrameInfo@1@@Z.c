/*
 * XREFs of ?StopAnalyzingAnimationScenario@CAnimationTracking@@AEAAXIAEBUTelFrameInfo@1@@Z @ 0x180081B80
 * Callers:
 *     ?TimeoutOverdueScenarios@CAnimationTracking@@QEAAXAEBUTelFrameInfo@1@@Z @ 0x180081A40 (-TimeoutOverdueScenarios@CAnimationTracking@@QEAAXAEBUTelFrameInfo@1@@Z.c)
 *     ?BeginAnimationScenario@CAnimationTracking@@QEAAJIPEBUDCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO@@PEBGAEBUTelFrameInfo@1@@Z @ 0x180082A08 (-BeginAnimationScenario@CAnimationTracking@@QEAAJIPEBUDCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_.c)
 *     ?RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z @ 0x180083100 (-RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z.c)
 * Callees:
 *     McTemplateU0qqqzzq @ 0x1800816D4 (McTemplateU0qqqzzq.c)
 *     ?DeleteScenario@CAnimationTracking@@AEAAXI@Z @ 0x1800820F8 (-DeleteScenario@CAnimationTracking@@AEAAXI@Z.c)
 *     ?UpdateLongtermStatistics@CAnimationTracking@@AEAAXPEBU_GUID@@PEBGIIIIII@Z @ 0x1800821B4 (-UpdateLongtermStatistics@CAnimationTracking@@AEAAXPEBU_GUID@@PEBGIIIIII@Z.c)
 *     ?GetScenarioDetails@CAnimationTracking@@AEAAPEBGPEAUAnimationScenarioRunningStatistics@1@PEAGK@Z @ 0x1800827A0 (-GetScenarioDetails@CAnimationTracking@@AEAAPEBGPEAUAnimationScenarioRunningStatistics@1@PEAGK@Z.c)
 *     ?GetScenarioName@CAnimationTracking@@AEAAPEBGPEAUAnimationScenarioRunningStatistics@1@PEAGK@Z @ 0x1800839E4 (-GetScenarioName@CAnimationTracking@@AEAAPEBGPEAUAnimationScenarioRunningStatistics@1@PEAGK@Z.c)
 *     _TlgKeywordOn @ 0x180083CAC (_TlgKeywordOn.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180083F48 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     _TlgWrite @ 0x180083FFC (_TlgWrite.c)
 *     McTemplateU0xxqqqzzq @ 0x18008409C (McTemplateU0xxqqqzzq.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     McTemplateU0xxqqxxqzqqqqqqzzqq @ 0x18014CF50 (McTemplateU0xxqqxxqzqqqqqqzzqq.c)
 *     _TlgCreateWsz @ 0x18014D554 (_TlgCreateWsz.c)
 */

void __fastcall CAnimationTracking::StopAnalyzingAnimationScenario(
        CAnimationTracking *this,
        unsigned int a2,
        const struct CAnimationTracking::TelFrameInfo *a3)
{
  const struct _GUID *v3; // rbx
  unsigned __int64 v5; // r10
  __int64 v6; // rdi
  unsigned int v7; // ecx
  __int64 v8; // rcx
  int *v9; // rsi
  unsigned int v10; // r8d
  unsigned int v11; // r14d
  __int64 v12; // r8
  float v13; // xmm0_4
  float v14; // xmm1_4
  int v15; // r15d
  unsigned __int64 v16; // rtt
  LONGLONG v17; // r9
  __int64 v18; // rax
  unsigned __int64 v19; // r8
  unsigned __int64 v20; // rtt
  unsigned int v21; // r10d
  unsigned __int64 v22; // rtt
  __int64 v23; // rax
  unsigned __int64 v24; // rdx
  const WCHAR *ScenarioName; // r12
  CAnimationTracking *v26; // rcx
  unsigned int v27; // r9d
  const WCHAR *ScenarioDetails; // rax
  const wchar_t *v29; // r13
  size_t v30; // r8
  unsigned int v31; // r8d
  int v32; // eax
  __int64 v33; // rcx
  __int64 v34; // rdx
  unsigned int v35; // ecx
  unsigned int v36; // r11d
  int v37; // eax
  unsigned int v38; // edx
  int v39; // edx
  unsigned int v40; // eax
  int v41; // edx
  char v42; // al
  const unsigned __int16 *v43; // rcx
  const struct _GUID *v44; // rdx
  CAnimationTracking *v45; // rbx
  wchar_t *v46; // rcx
  int v47; // eax
  int v48; // ecx
  __int64 v49; // rcx
  char v50; // al
  __int64 v51; // rdx
  unsigned __int64 v52; // r8
  wchar_t *v53; // r8
  __int64 v54; // rcx
  int v55; // r9d
  const WCHAR *v56; // rdx
  const WCHAR *v57; // rax
  const WCHAR *v58; // rdx
  __int64 v59; // rcx
  int v60; // eax
  __int64 cData; // [rsp+20h] [rbp-100h]
  unsigned int v62; // [rsp+A0h] [rbp-80h] BYREF
  int v63; // [rsp+A4h] [rbp-7Ch] BYREF
  unsigned int v64; // [rsp+A8h] [rbp-78h] BYREF
  unsigned int v65; // [rsp+ACh] [rbp-74h] BYREF
  unsigned int v66; // [rsp+B0h] [rbp-70h] BYREF
  unsigned int v67; // [rsp+B4h] [rbp-6Ch] BYREF
  unsigned int v68[2]; // [rsp+B8h] [rbp-68h]
  int v69; // [rsp+C0h] [rbp-60h] BYREF
  CAnimationTracking *v70; // [rsp+C8h] [rbp-58h]
  int v71; // [rsp+D0h] [rbp-50h] BYREF
  int v72; // [rsp+D4h] [rbp-4Ch] BYREF
  unsigned int v73; // [rsp+D8h] [rbp-48h]
  const struct CAnimationTracking::TelFrameInfo *v74; // [rsp+E0h] [rbp-40h]
  LPCWSTR pwsz; // [rsp+E8h] [rbp-38h]
  unsigned int v76[4]; // [rsp+F0h] [rbp-30h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+100h] [rbp-20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+120h] [rbp+0h] BYREF
  unsigned int *v79; // [rsp+130h] [rbp+10h]
  __int64 v80; // [rsp+138h] [rbp+18h]
  int *v81; // [rsp+140h] [rbp+20h]
  __int64 v82; // [rsp+148h] [rbp+28h]
  unsigned int *v83; // [rsp+150h] [rbp+30h]
  __int64 v84; // [rsp+158h] [rbp+38h]
  unsigned int *v85; // [rsp+160h] [rbp+40h]
  __int64 v86; // [rsp+168h] [rbp+48h]
  unsigned int *v87; // [rsp+170h] [rbp+50h]
  __int64 v88; // [rsp+178h] [rbp+58h]
  __int64 v89; // [rsp+180h] [rbp+60h]
  __int64 v90; // [rsp+188h] [rbp+68h]
  char *v91; // [rsp+190h] [rbp+70h]
  __int64 v92; // [rsp+198h] [rbp+78h]
  int *v93; // [rsp+1A0h] [rbp+80h]
  __int64 v94; // [rsp+1A8h] [rbp+88h]
  int *v95; // [rsp+1B0h] [rbp+90h]
  __int64 v96; // [rsp+1B8h] [rbp+98h]
  unsigned int *v97; // [rsp+1C0h] [rbp+A0h]
  __int64 v98; // [rsp+1C8h] [rbp+A8h]
  __int64 v99; // [rsp+1D0h] [rbp+B0h]
  __int64 v100; // [rsp+1D8h] [rbp+B8h]
  __int64 v101; // [rsp+1E0h] [rbp+C0h]
  __int64 v102; // [rsp+1E8h] [rbp+C8h]
  __int64 v103; // [rsp+1F0h] [rbp+D0h]
  __int64 v104; // [rsp+1F8h] [rbp+D8h]
  struct _EVENT_DATA_DESCRIPTOR v105; // [rsp+200h] [rbp+E0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v106; // [rsp+210h] [rbp+F0h] BYREF
  __int64 v107; // [rsp+220h] [rbp+100h]
  __int64 v108; // [rsp+228h] [rbp+108h]
  struct _EVENT_DATA_DESCRIPTOR v109; // [rsp+230h] [rbp+110h] BYREF
  int *v110; // [rsp+240h] [rbp+120h]
  __int64 v111; // [rsp+248h] [rbp+128h]
  wchar_t String2[8]; // [rsp+250h] [rbp+130h] BYREF
  unsigned __int16 v113[128]; // [rsp+260h] [rbp+140h] BYREF
  unsigned __int16 v114[128]; // [rsp+360h] [rbp+240h] BYREF

  v3 = 0LL;
  v70 = this;
  v74 = a3;
  LODWORD(v5) = 0;
  v73 = a2;
  v6 = *(_QWORD *)(*(_QWORD *)this + 8LL * a2);
  v64 = 0;
  v65 = 0;
  v62 = 0;
  v67 = 0;
  v69 = 0;
  v63 = 0;
  if ( *(_BYTE *)a3 && *(_DWORD *)(v6 + 72) >= 3u && (v7 = *(_DWORD *)(v6 + 28), v7 > *(_DWORD *)(v6 + 24)) )
  {
    v8 = v7 - *(_DWORD *)(v6 + 24);
    v9 = (int *)(v6 + 32);
    v10 = *(_DWORD *)(v6 + 32);
    v66 = v8;
    if ( v10 > (unsigned int)v8 )
    {
      *v9 = v8;
      v10 = *(_DWORD *)(v6 + 32);
      LODWORD(v5) = v62;
    }
    v11 = 100 * v10 / (unsigned int)v8;
    if ( !v11 )
      v11 = v10 != 0;
    v12 = *((_QWORD *)a3 + 2);
    v13 = (float)(int)v12;
    *(_QWORD *)v76 = v12 * v8 / 0x2710uLL;
    if ( v12 < 0 )
      v13 = v13 + 1.8446744e19;
    v14 = 10000000.0 / v13;
    if ( (float)(10000000.0 / v13) >= 59.0 && v14 <= 61.0 )
      v14 = FLOAT_60_0;
    v15 = (int)v14;
    *(_QWORD *)v68 = (unsigned int)(int)v14;
    v64 = (int)v14 * (100 - v11) / 0x64;
    v16 = *(_QWORD *)(v6 + 96);
    v17 = v16 % g_qpcFrequency.QuadPart;
    v65 = 1000 * (v16 / g_qpcFrequency.QuadPart) + 1000 * (v16 % g_qpcFrequency.QuadPart) / g_qpcFrequency.QuadPart;
    v18 = *(_QWORD *)(v6 + 152);
    if ( v18 )
    {
      if ( *(_QWORD *)(v18 + 8) )
      {
        v19 = *(_QWORD *)(v6 + 104);
        if ( v19 > *(_QWORD *)(v18 + 8) )
        {
          v20 = v19 - *(_QWORD *)(v18 + 8);
          v17 = v20 / g_qpcFrequency.QuadPart;
          v5 = (10000000 * (v20 % g_qpcFrequency.QuadPart) / g_qpcFrequency.QuadPart
              + 10000000 * (v20 / g_qpcFrequency.QuadPart))
             / 0x2710;
          v62 = v5;
        }
      }
      if ( (_DWORD)v5 )
      {
        v21 = *(_DWORD *)(v6 + 72);
        if ( v21 > 1 )
        {
          v22 = *(_QWORD *)(v6 + 80);
          v17 = v22 / g_qpcFrequency.QuadPart;
          v69 = (10000000 * (v22 % g_qpcFrequency.QuadPart) / g_qpcFrequency.QuadPart
               + 10000000 * (v22 / g_qpcFrequency.QuadPart))
              / 0x2710
              / (v21 - 1);
        }
      }
      v23 = *(_QWORD *)(v6 + 152);
      v24 = *(_QWORD *)(v23 + 16);
      if ( v24 )
      {
        v52 = *(_QWORD *)(v6 + 104);
        if ( v52 > v24 )
        {
          v17 = (v52 - v24) / g_qpcFrequency.QuadPart;
          v67 = (10000000 * ((v52 - v24) % g_qpcFrequency.QuadPart) / g_qpcFrequency.QuadPart + 10000000 * v17) / 0x2710;
          v23 = *(_QWORD *)(v6 + 152);
        }
      }
      v63 = *(_DWORD *)(v23 + 24);
    }
    ScenarioName = CAnimationTracking::GetScenarioName(
                     (CAnimationTracking *)g_qpcFrequency.QuadPart,
                     (struct CAnimationTracking::AnimationScenarioRunningStatistics *)v6,
                     v113,
                     v17);
    ScenarioDetails = CAnimationTracking::GetScenarioDetails(
                        v26,
                        (struct CAnimationTracking::AnimationScenarioRunningStatistics *)v6,
                        v114,
                        v27);
    v29 = word_180276388;
    pwsz = ScenarioDetails;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) != 0 )
    {
      v53 = word_180276388;
      if ( *(_QWORD *)(v6 + 136) )
        v53 = *(wchar_t **)(v6 + 136);
      v54 = *(_QWORD *)(v6 + 152);
      if ( v54 )
        v55 = *(_DWORD *)(v54 + 28);
      else
        LOBYTE(v55) = 0;
      McTemplateU0xxqqxxqzqqqqqqzzqq(
        v64,
        v15,
        *(_QWORD *)(v6 + 56),
        *((_QWORD *)v74 + 1),
        v11,
        v66,
        v15,
        v64,
        v65,
        (__int64)ScenarioName,
        *(_DWORD *)(v6 + 20),
        *(_DWORD *)(v6 + 36),
        v62,
        v67,
        v63,
        v55,
        (__int64)ScenarioDetails,
        (__int64)v53,
        *(_DWORD *)(v6 + 40),
        *v9);
    }
    wcscpy(String2, L"DManip");
    if ( ScenarioName )
    {
      v30 = -1LL;
      do
        ++v30;
      while ( String2[v30] );
      if ( wcsncmp(ScenarioName, String2, v30)
        && dword_180305EB8 > 5u
        && TlgKeywordOn((TraceLoggingHProvider)&dword_180305EB8, 0x200000000004uLL) )
      {
        TlgCreateWsz(&pDesc, ScenarioName);
        v80 = 4LL;
        v81 = &v69;
        v79 = &v64;
        v83 = &v65;
        v82 = 4LL;
        v85 = &v62;
        v56 = word_180276388;
        v84 = 4LL;
        v87 = &v67;
        v89 = v6 + 56;
        v86 = 4LL;
        v91 = (char *)v74 + 8;
        v93 = &v63;
        v95 = &v71;
        v97 = &v66;
        v101 = v6 + 36;
        v103 = v6 + 40;
        v57 = *(const WCHAR **)(v6 + 136);
        v88 = 4LL;
        v90 = 8LL;
        if ( v57 )
          v56 = v57;
        v92 = 8LL;
        v94 = 4LL;
        v71 = (int)v14;
        v96 = 4LL;
        v98 = 4LL;
        v99 = v6 + 32;
        v100 = 4LL;
        v102 = 4LL;
        v104 = 4LL;
        TlgCreateWsz(&v105, v56);
        v58 = word_180276388;
        if ( *(_QWORD *)(v6 + 144) )
          v58 = *(const WCHAR **)(v6 + 144);
        TlgCreateWsz(&v106, v58);
        v107 = v6 + 20;
        v108 = 4LL;
        TlgCreateWsz(&v109, pwsz);
        v59 = *(_QWORD *)(v6 + 152);
        if ( v59 )
          v60 = *(_DWORD *)(v59 + 28);
        else
          v60 = 0;
        v72 = v60;
        v110 = &v72;
        v111 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_180305EB8, &unk_1802B21CF, 0LL, 0LL, 0x15u, &pData);
      }
    }
    v31 = v62;
    if ( *v9 || v62 >= 0xC8 )
    {
      v32 = *v9;
      if ( *(_DWORD *)v6 )
      {
        v33 = *(_QWORD *)(v6 + 152);
        if ( v33 )
        {
          if ( *(_WORD *)(v33 + 38) )
          {
            v34 = v33 + *(unsigned __int16 *)(v33 + 38);
            if ( v34 )
            {
              LODWORD(cData) = *(_DWORD *)(v33 + 28);
              StringCchPrintfW((unsigned __int16 *)&pData, 0x80uLL, L"%ws|%X|%ws", ScenarioName, cData, v34);
              v32 = *(_DWORD *)(v6 + 32);
              ScenarioName = (const WCHAR *)&pData;
              v31 = v62;
            }
          }
        }
      }
      v35 = v66;
      v36 = v68[0];
      if ( v32 )
      {
        v37 = 4095;
        v38 = 255;
        if ( v66 < 0xFFF )
          v37 = v66;
        if ( v68[0] < 0xFF )
          v38 = v68[0];
        v39 = v37 | (v38 << 12);
        v40 = 255;
        if ( v64 < 0xFF )
          v40 = v64;
        v41 = (v40 << 20) | v39;
        if ( *(_DWORD *)v6 )
          v41 |= 0x80000000;
        v42 = -1;
        if ( v65 < 0xFFF )
          v42 = v65;
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x2000) != 0 )
        {
          v46 = word_180276388;
          if ( *(_QWORD *)(v6 + 136) )
            v46 = *(wchar_t **)(v6 + 136);
          McTemplateU0xxqqqzzq(
            (_DWORD)v46,
            v41,
            *(_QWORD *)(v6 + 56),
            *((_QWORD *)v74 + 1),
            v11,
            v41,
            v42,
            (__int64)ScenarioName,
            (__int64)v46,
            *(_DWORD *)(v6 + 20));
          v31 = v62;
          v35 = v66;
          v36 = v68[0];
        }
      }
      if ( v31 >= 0xC8 )
      {
        v47 = 4095;
        if ( v35 < 0xFFF )
          v47 = v35;
        v48 = 255;
        if ( v36 < 0xFF )
          v48 = v36;
        v49 = v47 | (unsigned int)(v48 << 12);
        v50 = -1;
        v51 = (unsigned int)v49;
        LODWORD(v51) = v49 | 0x80000000;
        if ( !*(_DWORD *)v6 )
          v51 = (unsigned int)v49;
        if ( v67 < 0xFFF )
          v50 = v67;
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x2000) != 0 )
        {
          if ( *(_QWORD *)(v6 + 136) )
            v29 = *(const wchar_t **)(v6 + 136);
          McTemplateU0qqqzzq(v49, v51, v31, v51, v50, ScenarioName, v29, *(_DWORD *)(v6 + 20));
          v31 = v62;
        }
      }
      v15 = v68[0];
    }
    if ( *(_DWORD *)v6 )
      v43 = *(const unsigned __int16 **)(v6 + 136);
    else
      v43 = 0LL;
    if ( !*(_DWORD *)v6 )
      v3 = (const struct _GUID *)(v6 + 4);
    v44 = v3;
    v45 = v70;
    CAnimationTracking::UpdateLongtermStatistics(v70, v44, v43, v11, v15, v64, v31, v76[0], *(_DWORD *)(v6 + 36));
    a2 = v73;
  }
  else
  {
    v45 = v70;
  }
  CAnimationTracking::DeleteScenario(v45, a2);
}
