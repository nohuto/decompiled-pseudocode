/*
 * XREFs of ?StopAnalyzingAnimationScenario@CAnimationTracking@@AEAAXIAEBUTelFrameInfo@1@@Z @ 0x1800A6008
 * Callers:
 *     ?TimeoutOverdueScenarios@CAnimationTracking@@QEAAXAEBUTelFrameInfo@1@@Z @ 0x1800A3CD8 (-TimeoutOverdueScenarios@CAnimationTracking@@QEAAXAEBUTelFrameInfo@1@@Z.c)
 *     ?RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z @ 0x1800A52D4 (-RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z.c)
 *     ?BeginAnimationScenario@CAnimationTracking@@QEAAJIPEBUDCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO@@PEBGAEBUTelFrameInfo@1@@Z @ 0x1800A5CA8 (-BeginAnimationScenario@CAnimationTracking@@QEAAJIPEBUDCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_.c)
 * Callees:
 *     McTemplateU0qqqzzq @ 0x1800A33B0 (McTemplateU0qqqzzq.c)
 *     McTemplateU0xxqqqzzq @ 0x1800A34C8 (McTemplateU0xxqqqzzq.c)
 *     _TlgWrite @ 0x1800A5240 (_TlgWrite.c)
 *     ?GetScenarioName@CAnimationTracking@@AEAAPEBGPEAUAnimationScenarioRunningStatistics@1@PEAGK@Z @ 0x1800A6B2C (-GetScenarioName@CAnimationTracking@@AEAAPEBGPEAUAnimationScenarioRunningStatistics@1@PEAGK@Z.c)
 *     ?GetScenarioDetails@CAnimationTracking@@AEAAPEBGPEAUAnimationScenarioRunningStatistics@1@PEAGK@Z @ 0x1800A6D50 (-GetScenarioDetails@CAnimationTracking@@AEAAPEBGPEAUAnimationScenarioRunningStatistics@1@PEAGK@Z.c)
 *     ?DeleteScenario@CAnimationTracking@@AEAAXI@Z @ 0x1800A6ECC (-DeleteScenario@CAnimationTracking@@AEAAXI@Z.c)
 *     ?UpdateLongtermStatistics@CAnimationTracking@@AEAAXPEBU_GUID@@PEBGIIIIII@Z @ 0x1800A6F8C (-UpdateLongtermStatistics@CAnimationTracking@@AEAAXPEBU_GUID@@PEBGIIIIII@Z.c)
 *     _TlgKeywordOn @ 0x1800A762C (_TlgKeywordOn.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1800A76D4 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _TlgCreateWsz @ 0x18015A2B8 (_TlgCreateWsz.c)
 *     McTemplateU0xxqqxxqzqqqqqqzzqq @ 0x18018DF34 (McTemplateU0xxqqxxqzqqqqqqzzqq.c)
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
  __int64 v44; // rdx
  int v45; // eax
  int v46; // r10d
  int v47; // r10d
  int v48; // eax
  int v49; // r10d
  int v50; // eax
  int v51; // ecx
  __int64 v52; // rcx
  char v53; // al
  __int64 v54; // rdx
  const WCHAR *v55; // rcx
  unsigned __int64 v56; // r8
  const WCHAR *v57; // r8
  __int64 v58; // rcx
  int v59; // r9d
  const WCHAR *v60; // rdx
  const WCHAR *v61; // rax
  const WCHAR *v62; // rdx
  __int64 v63; // rcx
  int v64; // eax
  __int64 cData; // [rsp+20h] [rbp-100h]
  EVENT_DATA_DESCRIPTOR *pData; // [rsp+28h] [rbp-F8h]
  unsigned int v67[2]; // [rsp+30h] [rbp-F0h]
  __int64 v68; // [rsp+48h] [rbp-D8h]
  unsigned int v69; // [rsp+A0h] [rbp-80h] BYREF
  unsigned int v70; // [rsp+A4h] [rbp-7Ch] BYREF
  unsigned int v71; // [rsp+A8h] [rbp-78h] BYREF
  unsigned int v72; // [rsp+ACh] [rbp-74h] BYREF
  unsigned int v73; // [rsp+B0h] [rbp-70h] BYREF
  unsigned int v74; // [rsp+B4h] [rbp-6Ch] BYREF
  __int64 v75; // [rsp+B8h] [rbp-68h]
  int v76; // [rsp+C0h] [rbp-60h] BYREF
  CAnimationTracking *v77; // [rsp+C8h] [rbp-58h]
  int v78; // [rsp+D0h] [rbp-50h] BYREF
  int v79; // [rsp+D4h] [rbp-4Ch] BYREF
  unsigned int v80; // [rsp+D8h] [rbp-48h]
  const struct CAnimationTracking::TelFrameInfo *v81; // [rsp+E0h] [rbp-40h]
  LPCWSTR pwsz; // [rsp+E8h] [rbp-38h]
  unsigned int v83[4]; // [rsp+F0h] [rbp-30h]
  EVENT_DATA_DESCRIPTOR v84; // [rsp+100h] [rbp-20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+120h] [rbp+0h] BYREF
  unsigned int *v86; // [rsp+130h] [rbp+10h]
  __int64 v87; // [rsp+138h] [rbp+18h]
  int *v88; // [rsp+140h] [rbp+20h]
  __int64 v89; // [rsp+148h] [rbp+28h]
  unsigned int *v90; // [rsp+150h] [rbp+30h]
  __int64 v91; // [rsp+158h] [rbp+38h]
  unsigned int *v92; // [rsp+160h] [rbp+40h]
  __int64 v93; // [rsp+168h] [rbp+48h]
  unsigned int *v94; // [rsp+170h] [rbp+50h]
  __int64 v95; // [rsp+178h] [rbp+58h]
  __int64 v96; // [rsp+180h] [rbp+60h]
  __int64 v97; // [rsp+188h] [rbp+68h]
  char *v98; // [rsp+190h] [rbp+70h]
  __int64 v99; // [rsp+198h] [rbp+78h]
  unsigned int *v100; // [rsp+1A0h] [rbp+80h]
  __int64 v101; // [rsp+1A8h] [rbp+88h]
  int *v102; // [rsp+1B0h] [rbp+90h]
  __int64 v103; // [rsp+1B8h] [rbp+98h]
  unsigned int *v104; // [rsp+1C0h] [rbp+A0h]
  __int64 v105; // [rsp+1C8h] [rbp+A8h]
  __int64 v106; // [rsp+1D0h] [rbp+B0h]
  __int64 v107; // [rsp+1D8h] [rbp+B8h]
  __int64 v108; // [rsp+1E0h] [rbp+C0h]
  __int64 v109; // [rsp+1E8h] [rbp+C8h]
  __int64 v110; // [rsp+1F0h] [rbp+D0h]
  __int64 v111; // [rsp+1F8h] [rbp+D8h]
  struct _EVENT_DATA_DESCRIPTOR v112; // [rsp+200h] [rbp+E0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v113; // [rsp+210h] [rbp+F0h] BYREF
  __int64 v114; // [rsp+220h] [rbp+100h]
  __int64 v115; // [rsp+228h] [rbp+108h]
  struct _EVENT_DATA_DESCRIPTOR v116; // [rsp+230h] [rbp+110h] BYREF
  int *v117; // [rsp+240h] [rbp+120h]
  __int64 v118; // [rsp+248h] [rbp+128h]
  wchar_t String2[8]; // [rsp+250h] [rbp+130h] BYREF
  unsigned __int16 v120[128]; // [rsp+260h] [rbp+140h] BYREF
  unsigned __int16 v121[128]; // [rsp+360h] [rbp+240h] BYREF

  v3 = 0LL;
  v77 = this;
  v81 = a3;
  LODWORD(v5) = 0;
  v80 = a2;
  v6 = *(_QWORD *)(*(_QWORD *)this + 8LL * a2);
  v71 = 0;
  v72 = 0;
  v69 = 0;
  v74 = 0;
  v76 = 0;
  v70 = 0;
  if ( *(_BYTE *)a3 && *(_DWORD *)(v6 + 72) >= 3u && (v7 = *(_DWORD *)(v6 + 28), v7 > *(_DWORD *)(v6 + 24)) )
  {
    v8 = v7 - *(_DWORD *)(v6 + 24);
    v9 = (int *)(v6 + 32);
    v10 = *(_DWORD *)(v6 + 32);
    v73 = v8;
    if ( v10 > (unsigned int)v8 )
    {
      *v9 = v8;
      v10 = *(_DWORD *)(v6 + 32);
      LODWORD(v5) = v69;
    }
    v11 = 100 * v10 / (unsigned int)v8;
    if ( !v11 )
      v11 = v10 != 0;
    v12 = *((_QWORD *)a3 + 2);
    v13 = (float)(int)v12;
    *(_QWORD *)v83 = v12 * v8 / 0x2710uLL;
    if ( v12 < 0 )
      v13 = v13 + 1.8446744e19;
    v14 = 10000000.0 / v13;
    if ( (float)(10000000.0 / v13) >= 59.0 && v14 <= 61.0 )
      v14 = FLOAT_60_0;
    v15 = (int)v14;
    v75 = (unsigned int)(int)v14;
    v71 = (int)v14 * (100 - v11) / 0x64;
    v16 = *(_QWORD *)(v6 + 96);
    v17 = v16 % g_qpcFrequency.QuadPart;
    v72 = 1000 * (v16 / g_qpcFrequency.QuadPart) + 1000 * (v16 % g_qpcFrequency.QuadPart) / g_qpcFrequency.QuadPart;
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
          v69 = v5;
        }
      }
      if ( (_DWORD)v5 )
      {
        v21 = *(_DWORD *)(v6 + 72);
        if ( v21 > 1 )
        {
          v22 = *(_QWORD *)(v6 + 80);
          v17 = v22 / g_qpcFrequency.QuadPart;
          v76 = (10000000 * (v22 % g_qpcFrequency.QuadPart) / g_qpcFrequency.QuadPart
               + 10000000 * (v22 / g_qpcFrequency.QuadPart))
              / 0x2710
              / (v21 - 1);
        }
      }
      v23 = *(_QWORD *)(v6 + 152);
      v24 = *(_QWORD *)(v23 + 16);
      if ( v24 )
      {
        v56 = *(_QWORD *)(v6 + 104);
        if ( v56 > v24 )
        {
          v17 = (v56 - v24) / g_qpcFrequency.QuadPart;
          v74 = (10000000 * ((v56 - v24) % g_qpcFrequency.QuadPart) / g_qpcFrequency.QuadPart + 10000000 * v17) / 0x2710;
          v23 = *(_QWORD *)(v6 + 152);
        }
      }
      v70 = *(_DWORD *)(v23 + 24);
    }
    ScenarioName = CAnimationTracking::GetScenarioName(
                     (CAnimationTracking *)g_qpcFrequency.QuadPart,
                     (struct CAnimationTracking::AnimationScenarioRunningStatistics *)v6,
                     v120,
                     v17);
    ScenarioDetails = CAnimationTracking::GetScenarioDetails(
                        v26,
                        (struct CAnimationTracking::AnimationScenarioRunningStatistics *)v6,
                        v121,
                        v27);
    v29 = &::pwsz;
    pwsz = ScenarioDetails;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) != 0 )
    {
      v57 = &::pwsz;
      if ( *(_QWORD *)(v6 + 136) )
        v57 = *(const WCHAR **)(v6 + 136);
      v58 = *(_QWORD *)(v6 + 152);
      if ( v58 )
        v59 = *(_DWORD *)(v58 + 28);
      else
        LOBYTE(v59) = 0;
      McTemplateU0xxqqxxqzqqqqqqzzqq(
        v71,
        v15,
        *(_QWORD *)(v6 + 56),
        *((_QWORD *)v81 + 1),
        v11,
        v73,
        v15,
        v71,
        v72,
        (__int64)ScenarioName,
        *(_DWORD *)(v6 + 20),
        *(_DWORD *)(v6 + 36),
        v69,
        v74,
        v70,
        v59,
        (__int64)ScenarioDetails,
        (__int64)v57,
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
        && dword_18033A208 > 5u
        && TlgKeywordOn((TraceLoggingHProvider)&dword_18033A208, 0x200000000004uLL) )
      {
        TlgCreateWsz(&pDesc, ScenarioName);
        v87 = 4LL;
        v88 = &v76;
        v86 = &v71;
        v90 = &v72;
        v89 = 4LL;
        v92 = &v69;
        v60 = &::pwsz;
        v91 = 4LL;
        v94 = &v74;
        v96 = v6 + 56;
        v93 = 4LL;
        v98 = (char *)v81 + 8;
        v100 = &v70;
        v102 = &v78;
        v104 = &v73;
        v108 = v6 + 36;
        v110 = v6 + 40;
        v61 = *(const WCHAR **)(v6 + 136);
        v95 = 4LL;
        v97 = 8LL;
        if ( v61 )
          v60 = v61;
        v99 = 8LL;
        v101 = 4LL;
        v78 = (int)v14;
        v103 = 4LL;
        v105 = 4LL;
        v106 = v6 + 32;
        v107 = 4LL;
        v109 = 4LL;
        v111 = 4LL;
        TlgCreateWsz(&v112, v60);
        v62 = &::pwsz;
        if ( *(_QWORD *)(v6 + 144) )
          v62 = *(const WCHAR **)(v6 + 144);
        TlgCreateWsz(&v113, v62);
        v114 = v6 + 20;
        v115 = 4LL;
        TlgCreateWsz(&v116, pwsz);
        v63 = *(_QWORD *)(v6 + 152);
        if ( v63 )
          v64 = *(_DWORD *)(v63 + 28);
        else
          v64 = 0;
        v79 = v64;
        v117 = &v79;
        v118 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_18033A208, &unk_1802D94A0, 0LL, 0LL, 0x15u, &v84);
      }
    }
    v31 = v69;
    if ( *v9 || v69 >= 0xC8 )
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
              StringCchPrintfW((unsigned __int16 *)&v84, 0x80uLL, L"%ws|%X|%ws", ScenarioName, cData, v37);
              v35 = *(_DWORD *)(v6 + 32);
              ScenarioName = (const WCHAR *)&v84;
              v31 = v69;
            }
          }
        }
      }
      v38 = v73;
      v39 = v75;
      if ( v35 )
      {
        v40 = 4095;
        v41 = 255;
        if ( v73 < 0xFFF )
          v40 = v73;
        if ( (unsigned int)v75 < 0xFF )
          v41 = v75;
        v42 = v40 | (v41 << 12);
        v43 = 255;
        if ( v71 < 0xFF )
          v43 = v71;
        v44 = (v43 << 20) | v42;
        if ( *(_DWORD *)v6 )
          LODWORD(v44) = v44 | 0x80000000;
        v45 = 4095;
        v46 = 255;
        if ( v72 < 0xFFF )
          v45 = v72;
        if ( *(_DWORD *)(v6 + 36) < 0xFFu )
          v46 = *(_DWORD *)(v6 + 36);
        v47 = v45 | (v46 << 12);
        v48 = 4095;
        if ( v70 < 0xFFF )
          v48 = v70;
        v49 = (v48 << 20) | v47;
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x2000) != 0 )
        {
          v55 = &::pwsz;
          if ( *(_QWORD *)(v6 + 136) )
            v55 = *(const WCHAR **)(v6 + 136);
          LODWORD(v68) = *(_DWORD *)(v6 + 20);
          v67[0] = v49;
          LODWORD(pData) = v44;
          LODWORD(cData) = v11;
          McTemplateU0xxqqqzzq(
            (__int64)v55,
            v44,
            *(_QWORD *)(v6 + 56),
            *((_QWORD *)v81 + 1),
            cData,
            pData,
            *(_QWORD *)v67,
            ScenarioName,
            v55,
            v68);
          v31 = v69;
          v38 = v73;
          v39 = v75;
        }
      }
      if ( v31 >= 0xC8 )
      {
        v50 = 4095;
        if ( v38 < 0xFFF )
          v50 = v38;
        v51 = 255;
        if ( v39 < 0xFF )
          v51 = v39;
        v52 = v50 | (unsigned int)(v51 << 12);
        v53 = -1;
        v54 = (unsigned int)v52;
        LODWORD(v54) = v52 | 0x80000000;
        if ( !*(_DWORD *)v6 )
          v54 = (unsigned int)v52;
        if ( v74 < 0xFFF )
          v53 = v74;
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x2000) != 0 )
        {
          if ( *(_QWORD *)(v6 + 136) )
            v29 = *(const wchar_t **)(v6 + 136);
          McTemplateU0qqqzzq(v52, v54, v31, v54, v53, ScenarioName, v29, *(_DWORD *)(v6 + 20));
          v31 = v69;
        }
      }
      v15 = v75;
    }
    if ( *(_DWORD *)v6 )
      v32 = *(const unsigned __int16 **)(v6 + 136);
    else
      v32 = 0LL;
    if ( !*(_DWORD *)v6 )
      v3 = (const struct _GUID *)(v6 + 4);
    v33 = v3;
    v34 = v77;
    CAnimationTracking::UpdateLongtermStatistics(v77, v33, v32, v11, v15, v71, v31, v83[0], *(_DWORD *)(v6 + 36));
    a2 = v80;
  }
  else
  {
    v34 = v77;
  }
  CAnimationTracking::DeleteScenario(v34, a2);
}
