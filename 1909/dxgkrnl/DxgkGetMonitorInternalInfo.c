/*
 * XREFs of DxgkGetMonitorInternalInfo @ 0x1C00ECB40
 * Callers:
 *     <none>
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C0002920 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?_GetMonitorHandle@MONITOR_MGR@@SAPEAUHDXGMONITOR__@@PEAVDXGMONITOR@@@Z @ 0x1C0006830 (-_GetMonitorHandle@MONITOR_MGR@@SAPEAUHDXGMONITOR__@@PEAVDXGMONITOR@@@Z.c)
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C0006884 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000753C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000BE8C (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1C000BFCC (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000C0A0 (-AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000C1D0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     MonitorGetPseudoSpecializedState @ 0x1C00C6D28 (MonitorGetPseudoSpecializedState.c)
 *     MonitorIsMonitorAndLinkHDRCapable @ 0x1C00D6920 (MonitorIsMonitorAndLinkHDRCapable.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00EC628 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_AddReference@DXGMONITOR@@QEAAXPEAX@Z @ 0x1C00EC72C (-_AddReference@DXGMONITOR@@QEAAXPEAX@Z.c)
 *     MonitorGetMonitorOrientationsFromMonitor @ 0x1C00EC884 (MonitorGetMonitorOrientationsFromMonitor.c)
 *     MonitorGetCCDMonitorID @ 0x1C00EC934 (MonitorGetCCDMonitorID.c)
 *     MonitorReleaseMonitorHandle @ 0x1C00ED228 (MonitorReleaseMonitorHandle.c)
 *     MonitorGetNativeFlags @ 0x1C00ED2BC (MonitorGetNativeFlags.c)
 *     MonitorGetAdvancedColorParams @ 0x1C00ED3A4 (MonitorGetAdvancedColorParams.c)
 *     DxgkConvertLegacyQDCAdapterAndIdToActual @ 0x1C00F8E80 (DxgkConvertLegacyQDCAdapterAndIdToActual.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C0100730 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     MonitorGetDpiInfoFromDescriptor @ 0x1C01291C0 (MonitorGetDpiInfoFromDescriptor.c)
 *     MonitorGetDisplayIDFromMonitor @ 0x1C0146FF0 (MonitorGetDisplayIDFromMonitor.c)
 *     MonitorIsMonitorEdidless @ 0x1C0147790 (MonitorIsMonitorEdidless.c)
 */

__int64 __fastcall DxgkGetMonitorInternalInfo(
        struct DXGMONITOR *a1,
        unsigned int a2,
        __int64 a3,
        _DWORD *a4,
        __int64 a5)
{
  unsigned int v6; // edi
  __int64 v7; // r14
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rbx
  DXGGLOBAL *Global; // rax
  DWORD LowPart; // ebx
  struct DXGADAPTER *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  DXGADAPTER *v19; // r13
  struct DXGADAPTER *const v20; // rdx
  DXGADAPTER *v21; // rdx
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r14
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // r8
  bool v30; // zf
  int MonitorFromHandle; // ebx
  __int64 v32; // rcx
  struct HDXGMONITOR__ *MonitorHandle; // r15
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r12
  struct _FAST_MUTEX *v38; // r12
  int MonitorInstance; // eax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  DXGMONITOR *v43; // r14
  bool v44; // cl
  int v45; // eax
  _DWORD *v46; // rdx
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // rcx
  const GUID *v51; // r8
  int CCDMonitorID; // eax
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r14
  __int64 v58; // r12
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  int v62; // edx
  char v63; // al
  int DisplayIDFromMonitor; // eax
  unsigned int v65; // edx
  int v66; // eax
  __int64 v67; // rdx
  __int64 v68; // rcx
  struct DXGMONITOR *v69; // rbx
  struct _ERESOURCE *v70; // r14
  __int64 v71; // rcx
  unsigned __int64 v72; // rdi
  char *v73; // r12
  struct DXGMONITOR *v74; // rax
  __int64 v75; // rbx
  char *v76; // rax
  __int64 v77; // rdx
  __int64 v78; // rax
  _QWORD *v79; // rax
  __int64 v80; // rcx
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // r8
  _QWORD *v84; // rax
  __int64 v85; // rax
  __int64 v86; // rax
  __int64 v87; // rax
  __int64 v88; // rax
  __int64 v89; // rax
  _QWORD *v90; // rax
  __int64 v91; // rax
  _QWORD *v92; // rax
  _QWORD *v93; // rax
  __int64 v94; // rcx
  __int64 v95; // rax
  __int64 v96; // rax
  __int64 v97; // rax
  int v98; // [rsp+20h] [rbp-E0h]
  char v99; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int8 v100[15]; // [rsp+41h] [rbp-BFh] BYREF
  struct _LUID v101; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v102; // [rsp+58h] [rbp-A8h] BYREF
  struct DXGMONITOR *v103; // [rsp+60h] [rbp-A0h] BYREF
  int v104; // [rsp+68h] [rbp-98h]
  __int64 v105; // [rsp+70h] [rbp-90h]
  int v106; // [rsp+78h] [rbp-88h] BYREF
  __int64 v107; // [rsp+80h] [rbp-80h]
  char v108; // [rsp+88h] [rbp-78h]
  _DWORD v109[12]; // [rsp+90h] [rbp-70h] BYREF
  _DWORD *v110; // [rsp+C0h] [rbp-40h]
  _OWORD v111[6]; // [rsp+D0h] [rbp-30h] BYREF
  char v112[8]; // [rsp+130h] [rbp+30h] BYREF
  _BYTE v113[64]; // [rsp+138h] [rbp+38h] BYREF
  _BYTE v114[72]; // [rsp+178h] [rbp+78h] BYREF

  v106 = -1;
  v6 = (unsigned int)a1;
  v7 = a2;
  v110 = a4;
  *(_DWORD *)&v100[3] = a2;
  v103 = a1;
  v105 = a5;
  v107 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v108 = 1;
    v106 = 2186;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)a1, &EventProfilerEnter, (const GUID *)a3, 2186);
  }
  else
  {
    v108 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v106, 2186LL);
  v101 = 0LL;
  v8 = DxgkConvertLegacyQDCAdapterAndIdToActual(&v103, (unsigned int)v7, &v101, &v100[7]);
  v12 = v8;
  if ( v8 < 0 )
  {
    v79 = (_QWORD *)WdLogNewEntry5_WdError(v10, v9, v11);
    v79[3] = SHIDWORD(v103);
    v80 = v6;
    v79[5] = v7;
    v79[6] = v12;
LABEL_78:
    v79[4] = v80;
    WdLogEvent5_WdError(v79);
    goto LABEL_28;
  }
  Global = DXGGLOBAL::GetGlobal(v10, v9);
  LowPart = v101.LowPart;
  v15 = DXGGLOBAL::ReferenceAdapterByLuid(Global, v101, &v102);
  v19 = v15;
  if ( !v15 )
  {
    v79 = (_QWORD *)WdLogNewEntry5_WdError(v17, v16, v18);
    v79[6] = 0LL;
LABEL_77:
    v79[3] = v101.HighPart;
    v80 = LowPart;
    LODWORD(v12) = -1073741811;
    v79[5] = -1073741811LL;
    goto LABEL_78;
  }
  if ( !*((_QWORD *)v15 + 319) )
  {
    DXGADAPTER::ReleaseReferenceNoTracking(v15);
    v79 = (_QWORD *)WdLogNewEntry5_WdError(v82, v81, v83);
    v79[6] = 1LL;
    goto LABEL_77;
  }
  COREACCESS::COREACCESS((COREACCESS *)v113, v15);
  COREACCESS::COREACCESS((COREACCESS *)v114, v20);
  DXGADAPTER::ReleaseReferenceNoTracking(v21);
  v22 = COREADAPTERACCESS::AcquireShared((__int64)v112, 0xFFFFFFFFLL, 0LL);
  v26 = v22;
  if ( v22 >= 0 )
  {
    v27 = WdLogNewEntry5_WdTrace(v24, v23);
    v30 = *(_DWORD *)&v100[7] == -1;
    MonitorFromHandle = -1073741811;
    v32 = *(unsigned int *)&v100[7];
    *(_QWORD *)(v27 + 24) = *(unsigned int *)&v100[7];
    *(_QWORD *)(v27 + 32) = v19;
    if ( !v30 )
    {
      MonitorHandle = 0LL;
      DXGADAPTER::IsCoreResourceSharedOwner(v19);
      v37 = *((_QWORD *)v19 + 319);
      if ( !v37 )
      {
        v85 = WdLogNewEntry5_WdAssertion(v35, v34);
        WdLogEvent5_WdAssertion(v85);
        v37 = *((_QWORD *)v19 + 319);
      }
      v38 = *(struct _FAST_MUTEX **)(v37 + 96);
      if ( v38 )
      {
        v101 = 0LL;
        MonitorInstance = MONITOR_MGR::_GetMonitorInstance(
                            v38,
                            *(unsigned int *)&v100[7],
                            0,
                            (struct DXGMONITOR **)&v101);
        LODWORD(v26) = MonitorInstance;
        if ( MonitorInstance != -1073741275 )
        {
          if ( MonitorInstance >= 0 )
          {
            v43 = (DXGMONITOR *)v101;
            if ( !*(_QWORD *)&v101 )
            {
              v89 = WdLogNewEntry5_WdAssertion(v41, v40);
              WdLogEvent5_WdAssertion(v89);
            }
            DXGMONITOR::_AddReference(v43, DxgkGetMonitorInternalInfo);
            MonitorHandle = MONITOR_MGR::_GetMonitorHandle(v43);
LABEL_16:
            if ( !MonitorHandle )
            {
              v91 = WdLogNewEntry5_WdAssertion(v32, v28);
              *(_QWORD *)(v91 + 24) = 6870LL;
              WdLogEvent5_WdAssertion(v91);
            }
            if ( !a3 )
              goto LABEL_19;
            CCDMonitorID = MonitorGetCCDMonitorID(MonitorHandle, 0x104u, (unsigned __int16 *)(a3 + 20));
            v57 = *(unsigned int *)&v100[3];
            v58 = SHIDWORD(v103);
            LODWORD(v102) = CCDMonitorID;
            if ( CCDMonitorID < 0 )
            {
              v92 = (_QWORD *)WdLogNewEntry5_WdError(v55, v54, v56);
              v92[4] = v6;
              v92[6] = (int)v102;
              v92[3] = v58;
              v92[5] = v57;
              WdLogEvent5_WdError(v92);
            }
            *(_WORD *)&v100[3] = 0;
            memset(v109, 0, 0x2CuLL);
            v101.LowPart = 0;
            LOBYTE(v101.HighPart) = 0;
            LODWORD(v102) = MonitorGetAdvancedColorParams(MonitorHandle, &v100[3], v109, &v101);
            if ( (v102 & 0x80000000) != 0LL )
              goto LABEL_87;
            v30 = LOBYTE(v101.LowPart) == 0;
            v62 = *(_DWORD *)(a3 + 588);
            *(_DWORD *)(a3 + 540) = v109[0];
            *(_DWORD *)(a3 + 544) = v109[1];
            *(_DWORD *)(a3 + 548) = v109[2];
            *(_DWORD *)(a3 + 552) = v109[3];
            *(_DWORD *)(a3 + 556) = v109[4];
            *(_DWORD *)(a3 + 560) = v109[5];
            *(_DWORD *)(a3 + 564) = v109[6];
            *(_DWORD *)(a3 + 568) = v109[7];
            *(_DWORD *)(a3 + 572) = v109[8];
            *(_DWORD *)(a3 + 576) = v109[9];
            *(_DWORD *)(a3 + 580) = v109[10];
            *(_DWORD *)&v100[3] = 0;
            v63 = BYTE2(v101.LowPart);
            *(_DWORD *)(a3 + 588) = (LOBYTE(v101.HighPart) != 0 ? 2 : 0) | !v30 | v62 & 0xFFFFFFFC;
            *(_DWORD *)(a3 + 584) = (HIBYTE(v101.LowPart) != 0 ? 4 : 0) | (v63 != 0 ? 2 : 0) | *(_DWORD *)(a3 + 584) & 0xFFFFFFF9;
            LODWORD(v102) = MonitorIsMonitorAndLinkHDRCapable(MonitorHandle, (unsigned int *)&v100[3]);
            if ( (v102 & 0x80000000) != 0LL )
            {
LABEL_87:
              v93 = (_QWORD *)WdLogNewEntry5_WdError(v60, v59, v61);
              v93[3] = v58;
              v93[4] = v6;
              v94 = (int)v102;
              v93[5] = v57;
              v93[6] = v94;
              WdLogEvent5_WdError(v93);
            }
            else
            {
              *(_DWORD *)(a3 + 588) ^= (*(_DWORD *)(a3 + 588) ^ (2 * *(_DWORD *)&v100[3])) & 4 ^ (*(_BYTE *)(a3 + 588) ^ (*(_BYTE *)(a3 + 588) ^ (unsigned __int8)(2 * v100[3])) & 4 ^ (unsigned __int8)(16 * v100[3])) & 0x40;
            }
            wil_details_FeaturePropertyCache_ReportUsageToService(
              (__int64)&Feature_OemPanelDriverSupport__private_propertyCache,
              8395569LL,
              (const struct FEATURE_LOGGED_TRAITS *)&unk_1C006E090,
              1,
              v98);
            if ( (int)MonitorGetNativeFlags(MonitorHandle, v100, &v100[3], &v99) >= 0 )
              *(_DWORD *)(a3 + 588) = (v100[0] != 0 ? 8 : 0) | *(_DWORD *)(a3 + 588) & 0xFFFFFFF7;
            v99 = 1;
            if ( (int)MonitorIsMonitorEdidless(MonitorHandle, &v99) >= 0 )
              *(_DWORD *)(a3 + 588) = (v99 == 0 ? 0x10 : 0) | *(_DWORD *)(a3 + 588) & 0xFFFFFFEF;
            DisplayIDFromMonitor = MonitorGetDisplayIDFromMonitor(MonitorHandle, 0LL, &v102, 0LL);
            v65 = *(_DWORD *)&v100[7];
            v100[0] = 0;
            *(_DWORD *)(a3 + 588) = (DisplayIDFromMonitor != -1071841279 ? 0x20 : 0) | *(_DWORD *)(a3 + 588) & 0xFFFFFFDF;
            v103 = 0LL;
            v104 = 0;
            if ( (int)MonitorGetDpiInfoFromDescriptor(
                        v19,
                        v65,
                        (struct DISPLAY_PREFERRED_MODE_INFO *)&v103,
                        (unsigned int *)(a3 + 924),
                        (unsigned int *)(a3 + 928),
                        (__int64)v100,
                        0) >= 0 )
            {
              *(_DWORD *)(a3 + 916) = (_DWORD)v103;
              v66 = HIDWORD(v103);
              goto LABEL_41;
            }
            *(_DWORD *)(a3 + 924) = 0;
            *(_DWORD *)(a3 + 928) = 0;
            memset(v111, 0, sizeof(v111));
            if ( !MonitorHandle
              || (MonitorFromHandle = MONITOR_MGR::_GetMonitorFromHandle(MonitorHandle, &v103), MonitorFromHandle < 0) )
            {
LABEL_59:
              if ( MonitorFromHandle < 0 )
              {
                *(_QWORD *)(a3 + 916) = 0LL;
                goto LABEL_42;
              }
              *(_DWORD *)(a3 + 916) = DWORD1(v111[1]);
              v66 = DWORD2(v111[1]);
LABEL_41:
              *(_DWORD *)(a3 + 920) = v66;
LABEL_42:
              v100[0] = 0;
              v99 = 0;
              MonitorGetPseudoSpecializedState(MonitorHandle, (bool *)&v99, (bool *)v100);
              *(_DWORD *)(a3 + 588) ^= (*(_DWORD *)(a3 + 588) ^ ((unsigned __int8)v99 << 7)) & 0x80 ^ (*(_WORD *)(a3 + 588) ^ (*(_WORD *)(a3 + 588) ^ ((unsigned __int8)v99 << 7)) & 0x80 ^ (unsigned __int16)(v100[0] << 8)) & 0x100;
LABEL_19:
              *(_QWORD *)&v100[3] = 0LL;
              MonitorGetMonitorOrientationsFromMonitor(
                MonitorHandle,
                (unsigned int *)&v100[7],
                (unsigned int *)&v100[3]);
              v44 = v100[7];
              v45 = *(_DWORD *)&v100[3];
              if ( v110 )
              {
                v46 = (_DWORD *)v105;
                if ( v105 )
                {
                  *v110 = *(_DWORD *)&v100[7];
                  *v46 = v45;
                }
              }
              if ( a3 )
                *(_DWORD *)(a3 + 932) = (((_BYTE)v45 - v44) & 3) + 1;
              if ( (int)MonitorReleaseMonitorHandle(v19) < 0 )
              {
                v97 = WdLogNewEntry5_WdAssertion(v48, v47);
                *(_QWORD *)(v97 + 24) = 7033LL;
                WdLogEvent5_WdAssertion(v97);
              }
              LODWORD(v12) = 0;
              goto LABEL_27;
            }
            v69 = v103;
            if ( !v103 )
            {
              v95 = WdLogNewEntry5_WdAssertion(v68, v67);
              WdLogEvent5_WdAssertion(v95);
            }
            v70 = (struct _ERESOURCE *)((char *)v69 + 296);
            KeEnterCriticalRegion();
            ExAcquireResourceSharedLite((PERESOURCE)((char *)v69 + 296), 1u);
            v71 = 0LL;
            v72 = 0LL;
            v73 = (char *)v69 + 216;
            v74 = (struct DXGMONITOR *)*((_QWORD *)v69 + 27);
            if ( v74 != (struct DXGMONITOR *)((char *)v69 + 216) )
            {
              v75 = (__int64)v74 - 96;
              if ( !v74 )
                v75 = 0LL;
              if ( v75 )
              {
                do
                {
                  if ( *(_DWORD *)(v75 + 88) == 1 )
                  {
                    v77 = *(unsigned int *)(v75 + 84);
                    if ( (unsigned int)(v77 - 2) <= 1 )
                    {
                      if ( v71 )
                      {
                        v96 = WdLogNewEntry5_WdAssertion(v71, v77);
                        WdLogEvent5_WdAssertion(v96);
                      }
                      v71 = v75;
                    }
                    else if ( (_DWORD)v77 == 5 )
                    {
                      v78 = v75;
                      if ( v72 )
                        v78 = 1LL;
                      v72 = v78;
                    }
                  }
                  v76 = *(char **)(v75 + 96);
                  if ( v76 == v73 )
                    break;
                  v75 = (__int64)(v76 - 96);
                  if ( !v76 )
                    v75 = 0LL;
                }
                while ( v75 );
                if ( v72 > 1 )
                {
                  v111[1] = *(_OWORD *)(v72 + 16);
                  ExReleaseResourceLite(v70);
                  KeLeaveCriticalRegion();
LABEL_58:
                  MonitorFromHandle = 0;
                  goto LABEL_59;
                }
              }
              if ( v71 )
              {
                v111[1] = *(_OWORD *)(v71 + 16);
                ExReleaseResourceLite(v70);
                KeLeaveCriticalRegion();
                goto LABEL_58;
              }
            }
            ExReleaseResourceLite(v70);
            KeLeaveCriticalRegion();
            MonitorFromHandle = -1073741275;
            goto LABEL_59;
          }
          v88 = WdLogNewEntry5_WdError(v41, v40, v42);
          *(_QWORD *)(v88 + 24) = *(unsigned int *)&v100[7];
          *(_QWORD *)(v88 + 32) = v38;
          WdLogEvent5_WdError(v88);
          goto LABEL_84;
        }
        v87 = WdLogNewEntry5_WdDmmEvent(v41, v40);
        *(_QWORD *)(v87 + 24) = *(unsigned int *)&v100[7];
        *(_QWORD *)(v87 + 32) = v38;
        WdLogEvent5_WdDmmEvent(v87);
        LODWORD(v26) = -1073741275;
      }
      else
      {
        v86 = WdLogNewEntry5_WdError(v35, v34, v36);
        *(_QWORD *)(v86 + 24) = v19;
        WdLogEvent5_WdError(v86);
        LODWORD(v26) = -1073741811;
      }
LABEL_85:
      v90 = (_QWORD *)WdLogNewEntry5_WdError(v32, v28, v29);
      v90[3] = SHIDWORD(v103);
      v90[4] = v6;
      v90[5] = *(unsigned int *)&v100[3];
      v90[6] = (int)v26;
      v90[7] = 0LL;
      WdLogEvent5_WdError(v90);
      goto LABEL_86;
    }
    MonitorHandle = (struct HDXGMONITOR__ *)v105;
    LODWORD(v26) = -1073741811;
LABEL_84:
    if ( (int)v26 >= 0 )
      goto LABEL_16;
    goto LABEL_85;
  }
  v84 = (_QWORD *)WdLogNewEntry5_WdWarning(v24, v23, v25);
  v84[3] = v101.HighPart;
  v84[4] = LowPart;
  v84[5] = v26;
  WdLogEvent5_WdWarning(v84);
LABEL_86:
  LODWORD(v12) = v26;
LABEL_27:
  COREACCESS::~COREACCESS((COREACCESS *)v114);
  COREACCESS::~COREACCESS((COREACCESS *)v113);
LABEL_28:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v106, v49);
  if ( v108 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v50, &EventProfilerExit, v51, v106);
  return (unsigned int)v12;
}
