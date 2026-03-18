/*
 * XREFs of ?StopAnalyzingAnimationScenario@CAnimationTracking@@AEAAXIAEBUTelFrameInfo@1@@Z @ 0x1800B3DA8
 * Callers:
 *     ?RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z @ 0x180076EF8 (-RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z.c)
 *     ?TimeoutOverdueScenarios@CAnimationTracking@@QEAAXAEBUTelFrameInfo@1@@Z @ 0x1800B3008 (-TimeoutOverdueScenarios@CAnimationTracking@@QEAAXAEBUTelFrameInfo@1@@Z.c)
 *     ?BeginAnimationScenario@CAnimationTracking@@QEAAJIPEBUDCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO@@PEBGAEBUTelFrameInfo@1@@Z @ 0x1800B3A48 (-BeginAnimationScenario@CAnimationTracking@@QEAAJIPEBUDCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_.c)
 * Callees:
 *     _TlgWrite @ 0x1800B3880 (_TlgWrite.c)
 *     ?GetScenarioName@CAnimationTracking@@AEAAPEBGPEAUAnimationScenarioRunningStatistics@1@PEAGK@Z @ 0x1800B48CC (-GetScenarioName@CAnimationTracking@@AEAAPEBGPEAUAnimationScenarioRunningStatistics@1@PEAGK@Z.c)
 *     ?GetScenarioDetails@CAnimationTracking@@AEAAPEBGPEAUAnimationScenarioRunningStatistics@1@PEAGK@Z @ 0x1800B4AF0 (-GetScenarioDetails@CAnimationTracking@@AEAAPEBGPEAUAnimationScenarioRunningStatistics@1@PEAGK@Z.c)
 *     ?DeleteScenario@CAnimationTracking@@AEAAXI@Z @ 0x1800B4C6C (-DeleteScenario@CAnimationTracking@@AEAAXI@Z.c)
 *     ?UpdateLongtermStatistics@CAnimationTracking@@AEAAXPEBU_GUID@@PEBGIIIIII@Z @ 0x1800B4D2C (-UpdateLongtermStatistics@CAnimationTracking@@AEAAXPEBU_GUID@@PEBGIIIIII@Z.c)
 *     _TlgKeywordOn @ 0x1800B539C (_TlgKeywordOn.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1800B5444 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     McTemplateU0qqqzzq @ 0x1800B64D0 (McTemplateU0qqqzzq.c)
 *     McTemplateU0xxqqqzzq @ 0x1800B65E8 (McTemplateU0xxqqqzzq.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _TlgCreateWsz @ 0x180158BD8 (_TlgCreateWsz.c)
 *     McTemplateU0xxqqxxqzqqqqqqzzqq @ 0x18018C7F4 (McTemplateU0xxqqxxqzqqqqqqzzqq.c)
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
  const WCHAR *v29; // r13
  size_t v30; // r8
  unsigned int v31; // r8d
  const unsigned __int16 *v32; // rcx
  const struct _GUID *v33; // rdx
  CAnimationTracking *v34; // rbx
  int v35; // eax
  __int64 v36; // rcx
  __int64 v37; // rdx
  unsigned int v38; // ecx
  unsigned int v39; // r11d
  int v40; // eax
  int v41; // edx
  int v42; // edx
  unsigned int v43; // eax
  int v44; // edx
  char v45; // al
  int v46; // eax
  int v47; // ecx
  int v48; // ecx
  char v49; // al
  unsigned int v50; // edx
  const WCHAR *v51; // rcx
  unsigned __int64 v52; // r8
  const WCHAR *v53; // r8
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
  __int64 v68; // [rsp+B8h] [rbp-68h]
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
    v68 = (unsigned int)(int)v14;
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
    v29 = &::pwsz;
    pwsz = ScenarioDetails;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) != 0 )
    {
      v53 = &::pwsz;
      if ( *(_QWORD *)(v6 + 136) )
        v53 = *(const WCHAR **)(v6 + 136);
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
        && dword_180337208 > 5u
        && TlgKeywordOn((TraceLoggingHProvider)&dword_180337208, 0x200000000004uLL) )
      {
        TlgCreateWsz(&pDesc, ScenarioName);
        v80 = 4LL;
        v81 = &v69;
        v79 = &v64;
        v83 = &v65;
        v82 = 4LL;
        v85 = &v62;
        v56 = &::pwsz;
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
        v58 = &::pwsz;
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
        TlgWrite((TraceLoggingHProvider)&dword_180337208, &unk_1802D7600, 0LL, 0LL, 0x15u, &pData);
      }
    }
    v31 = v62;
    if ( *v9 || v62 >= 0xC8 )
    {
      v35 = *v9;
      if ( *(_DWORD *)v6 )
      {
        v36 = *(_QWORD *)(v6 + 152);
        if ( v36 )
        {
          if ( *(_WORD *)(v36 + 38) )
          {
            v37 = v36 + *(unsigned __int16 *)(v36 + 38);
            if ( v37 )
            {
              LODWORD(cData) = *(_DWORD *)(v36 + 28);
              StringCchPrintfW((unsigned __int16 *)&pData, 0x80uLL, L"%ws|%X|%ws", ScenarioName, cData, v37);
              v35 = *(_DWORD *)(v6 + 32);
              ScenarioName = (const WCHAR *)&pData;
              v31 = v62;
            }
          }
        }
      }
      v38 = v66;
      v39 = v68;
      if ( v35 )
      {
        v40 = 4095;
        v41 = 255;
        if ( v66 < 0xFFF )
          v40 = v66;
        if ( (unsigned int)v68 < 0xFF )
          v41 = v68;
        v42 = v40 | (v41 << 12);
        v43 = 255;
        if ( v64 < 0xFF )
          v43 = v64;
        v44 = (v43 << 20) | v42;
        if ( *(_DWORD *)v6 )
          v44 |= 0x80000000;
        v45 = -1;
        if ( v65 < 0xFFF )
          v45 = v65;
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x2000) != 0 )
        {
          v51 = &::pwsz;
          if ( *(_QWORD *)(v6 + 136) )
            v51 = *(const WCHAR **)(v6 + 136);
          McTemplateU0xxqqqzzq(
            (_DWORD)v51,
            v44,
            *(_QWORD *)(v6 + 56),
            *((_QWORD *)v74 + 1),
            v11,
            v44,
            v45,
            (__int64)ScenarioName,
            (__int64)v51,
            *(_DWORD *)(v6 + 20));
          v31 = v62;
          v38 = v66;
          v39 = v68;
        }
      }
      if ( v31 >= 0xC8 )
      {
        v46 = 4095;
        if ( v38 < 0xFFF )
          v46 = v38;
        v47 = 255;
        if ( v39 < 0xFF )
          v47 = v39;
        v48 = v46 | (v47 << 12);
        v49 = -1;
        v50 = v48 | 0x80000000;
        if ( !*(_DWORD *)v6 )
          v50 = v48;
        if ( v67 < 0xFFF )
          v49 = v67;
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x2000) != 0 )
        {
          if ( *(_QWORD *)(v6 + 136) )
            v29 = *(const WCHAR **)(v6 + 136);
          McTemplateU0qqqzzq(v48, v50, v31, v50, v49, (__int64)ScenarioName, (__int64)v29, *(_DWORD *)(v6 + 20));
          v31 = v62;
        }
      }
      v15 = v68;
    }
    if ( *(_DWORD *)v6 )
      v32 = *(const unsigned __int16 **)(v6 + 136);
    else
      v32 = 0LL;
    if ( !*(_DWORD *)v6 )
      v3 = (const struct _GUID *)(v6 + 4);
    v33 = v3;
    v34 = v70;
    CAnimationTracking::UpdateLongtermStatistics(v70, v33, v32, v11, v15, v64, v31, v76[0], *(_DWORD *)(v6 + 36));
    a2 = v73;
  }
  else
  {
    v34 = v70;
  }
  CAnimationTracking::DeleteScenario(v34, a2);
}
