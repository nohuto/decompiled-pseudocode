/*
 * XREFs of DxgkGetMonitorInternalInfo @ 0x1C00C3480
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C0004D9C (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000FAAC (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0011D10 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0012240 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     MonitorIsMonitorAndLinkHDRCapable @ 0x1C00C2EBC (MonitorIsMonitorAndLinkHDRCapable.c)
 *     MonitorGetCCDMonitorID @ 0x1C00C3268 (MonitorGetCCDMonitorID.c)
 *     MonitorReleaseMonitorHandle @ 0x1C00C3A54 (MonitorReleaseMonitorHandle.c)
 *     MonitorGetMonitorHandle @ 0x1C00C3AE8 (MonitorGetMonitorHandle.c)
 *     MonitorGetMonitorOrientationsFromMonitor @ 0x1C00C3D50 (MonitorGetMonitorOrientationsFromMonitor.c)
 *     MonitorGetAdvancedColorParams @ 0x1C00C4348 (MonitorGetAdvancedColorParams.c)
 *     MonitorGetNativeFlags @ 0x1C00C44D4 (MonitorGetNativeFlags.c)
 *     MonitorGetDpiInfoFromDescriptor @ 0x1C00C58D4 (MonitorGetDpiInfoFromDescriptor.c)
 *     MonitorGetDisplayIDFromMonitor @ 0x1C00C5B64 (MonitorGetDisplayIDFromMonitor.c)
 *     MonitorIsMonitorEdidless @ 0x1C00C5C1C (MonitorIsMonitorEdidless.c)
 *     DxgkConvertLegacyQDCAdapterAndIdToActual @ 0x1C00DDBB0 (DxgkConvertLegacyQDCAdapterAndIdToActual.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00E2938 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 */

__int64 __fastcall DxgkGetMonitorInternalInfo(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r13
  __int64 v7; // r12
  DWORD LowPart; // ebx
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rdi
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v13; // rax
  __int64 v14; // rcx
  DXGADAPTER *v15; // r14
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rbx
  int MonitorHandle; // eax
  __int64 v22; // rcx
  struct HDXGMONITOR__ *v23; // r15
  __int64 v24; // rcx
  __int64 v25; // rcx
  const GUID *v26; // r8
  int CCDMonitorID; // eax
  __int64 v29; // rcx
  unsigned int v30; // ebx
  __int64 v31; // rdi
  __int64 v32; // r13
  int AdvancedColorParams; // eax
  __int64 v34; // rcx
  __int64 v35; // r13
  int v36; // edx
  char v37; // al
  unsigned int v38; // edx
  int IsMonitorAndLinkHDRCapable; // eax
  int DisplayIDFromMonitor; // eax
  unsigned int v41; // edx
  __int64 v42; // rcx
  int MonitorFromHandle; // edi
  struct DXGMONITOR *v44; // rbx
  struct _ERESOURCE *v45; // r12
  __int64 v46; // rcx
  unsigned __int64 v47; // rdi
  char *v48; // r13
  struct DXGMONITOR *v49; // rax
  __int64 v50; // rbx
  char *v51; // rax
  int v52; // eax
  int v53; // edx
  __int64 v54; // rax
  _QWORD *v55; // rax
  __int64 HighPart; // rcx
  __int64 v57; // rcx
  _QWORD *v58; // rax
  _QWORD *v59; // rax
  __int64 v60; // rax
  _QWORD *v61; // rax
  _QWORD *v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  int v66; // [rsp+28h] [rbp-E0h]
  char v67; // [rsp+38h] [rbp-D0h] BYREF
  char v68; // [rsp+39h] [rbp-CFh] BYREF
  char v69; // [rsp+3Ah] [rbp-CEh] BYREF
  __int16 v70; // [rsp+3Ch] [rbp-CCh] BYREF
  int v71; // [rsp+40h] [rbp-C8h] BYREF
  int v72; // [rsp+44h] [rbp-C4h]
  int v73; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v74; // [rsp+4Ch] [rbp-BCh] BYREF
  unsigned int v75[2]; // [rsp+50h] [rbp-B8h] BYREF
  struct _LUID v76; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v77; // [rsp+60h] [rbp-A8h] BYREF
  int v78; // [rsp+68h] [rbp-A0h]
  _QWORD v79[2]; // [rsp+70h] [rbp-98h] BYREF
  char v80; // [rsp+80h] [rbp-88h]
  _DWORD v81[12]; // [rsp+88h] [rbp-80h] BYREF
  char v82[8]; // [rsp+B8h] [rbp-50h] BYREF
  struct HDXGMONITOR__ *v83; // [rsp+C0h] [rbp-48h] BYREF
  struct DXGMONITOR *v84[14]; // [rsp+C8h] [rbp-40h] BYREF
  unsigned __int64 v85; // [rsp+138h] [rbp+30h] BYREF
  char v86[8]; // [rsp+148h] [rbp+40h] BYREF
  char v87[8]; // [rsp+150h] [rbp+48h] BYREF
  __int64 v88; // [rsp+158h] [rbp+50h]
  struct DXGADAPTER *v89; // [rsp+160h] [rbp+58h]
  char v90; // [rsp+168h] [rbp+60h]
  char v91[8]; // [rsp+170h] [rbp+68h] BYREF
  __int64 v92; // [rsp+178h] [rbp+70h]
  struct DXGADAPTER *v93; // [rsp+180h] [rbp+78h]
  char v94; // [rsp+188h] [rbp+80h]
  __int64 v95; // [rsp+1D8h] [rbp+D0h] BYREF
  __int64 v96; // [rsp+1F0h] [rbp+E8h]

  v96 = a4;
  v95 = a1;
  LODWORD(v79[0]) = -1;
  v5 = a4;
  v7 = a2;
  LowPart = a1;
  v79[1] = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v80 = 1;
    LODWORD(v79[0]) = 2186;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, (const GUID *)a3, 2186);
  }
  else
  {
    v80 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)v79, 2186);
  v9 = DxgkConvertLegacyQDCAdapterAndIdToActual(&v95, (unsigned int)v7, &v76, v75);
  v11 = v9;
  if ( v9 < 0 )
  {
    v55 = (_QWORD *)WdLogNewEntry5_WdError(v10);
    HighPart = SHIDWORD(v95);
    v55[5] = v7;
    v55[6] = v11;
LABEL_69:
    v55[3] = HighPart;
    v55[4] = LowPart;
    WdLogEvent5_WdError(v55);
    goto LABEL_18;
  }
  Global = DXGGLOBAL::GetGlobal(v10);
  LowPart = v76.LowPart;
  v13 = DXGGLOBAL::ReferenceAdapterByLuid(Global, v76, &v85);
  v15 = v13;
  if ( !v13 )
  {
    v55 = (_QWORD *)WdLogNewEntry5_WdError(v14);
    v55[6] = 0LL;
LABEL_68:
    HighPart = v76.HighPart;
    LODWORD(v11) = -1073741811;
    v55[5] = -1073741811LL;
    goto LABEL_69;
  }
  if ( !*((_QWORD *)v13 + 315) )
  {
    DXGADAPTER::ReleaseReference(v13);
    v55 = (_QWORD *)WdLogNewEntry5_WdError(v57);
    v55[6] = 1LL;
    goto LABEL_68;
  }
  v89 = v13;
  v90 = 0;
  _InterlockedIncrement64((volatile signed __int64 *)v13 + 3);
  v93 = v13;
  v88 = -1LL;
  v94 = 0;
  _InterlockedIncrement64((volatile signed __int64 *)v13 + 3);
  v92 = -1LL;
  DXGADAPTER::ReleaseReference(v13);
  v16 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v86);
  v20 = v16;
  if ( v16 < 0 )
  {
    v58 = (_QWORD *)WdLogNewEntry5_WdWarning(v18, v17, v19);
    v58[3] = v76.HighPart;
    v58[4] = v76.LowPart;
    v58[5] = v20;
    WdLogEvent5_WdWarning(v58);
  }
  else
  {
    MonitorHandle = MonitorGetMonitorHandle(v15, v75[0], 0, DxgkGetMonitorInternalInfo, (__int64)&v83);
    v20 = MonitorHandle;
    if ( MonitorHandle >= 0 )
    {
      v23 = v83;
      if ( !v83 )
      {
        v60 = WdLogNewEntry5_WdAssertion(v22);
        *(_QWORD *)(v60 + 24) = 6737LL;
        WdLogEvent5_WdAssertion(v60);
      }
      if ( !a3 )
        goto LABEL_11;
      CCDMonitorID = MonitorGetCCDMonitorID(v23, 0x104u, (unsigned __int16 *)(a3 + 20));
      v30 = v95;
      v31 = SHIDWORD(v95);
      v32 = CCDMonitorID;
      if ( CCDMonitorID < 0 )
      {
        v61 = (_QWORD *)WdLogNewEntry5_WdError(v29);
        v61[4] = v30;
        v61[3] = v31;
        v61[5] = v7;
        v61[6] = v32;
        WdLogEvent5_WdError(v61);
      }
      memset(v81, 0, 0x2CuLL);
      v71 = 0;
      LOBYTE(v72) = 0;
      v70 = 0;
      AdvancedColorParams = MonitorGetAdvancedColorParams(v23, &v70, v81, &v71);
      v35 = AdvancedColorParams;
      if ( AdvancedColorParams < 0 )
        goto LABEL_73;
      v36 = *(_DWORD *)(a3 + 588);
      *(_DWORD *)(a3 + 540) = v81[0];
      *(_DWORD *)(a3 + 544) = v81[1];
      *(_DWORD *)(a3 + 548) = v81[2];
      *(_DWORD *)(a3 + 552) = v81[3];
      *(_DWORD *)(a3 + 556) = v81[4];
      *(_DWORD *)(a3 + 560) = v81[5];
      *(_DWORD *)(a3 + 564) = v81[6];
      *(_DWORD *)(a3 + 568) = v81[7];
      *(_DWORD *)(a3 + 572) = v81[8];
      *(_DWORD *)(a3 + 576) = v81[9];
      *(_DWORD *)(a3 + 580) = v81[10];
      v37 = BYTE2(v71);
      *(_DWORD *)(a3 + 588) = ((_BYTE)v72 != 0 ? 2 : 0) | ((_BYTE)v71 != 0) | v36 & 0xFFFFFFFC;
      v38 = (HIBYTE(v71) != 0 ? 4 : 0) | (v37 != 0 ? 2 : 0) | *(_DWORD *)(a3 + 584) & 0xFFFFFFF9;
      v74 = 0;
      *(_DWORD *)(a3 + 584) = v38;
      IsMonitorAndLinkHDRCapable = MonitorIsMonitorAndLinkHDRCapable(v23, &v74);
      v35 = IsMonitorAndLinkHDRCapable;
      if ( IsMonitorAndLinkHDRCapable < 0 )
      {
LABEL_73:
        v62 = (_QWORD *)WdLogNewEntry5_WdError(v34);
        v62[3] = v31;
        v62[4] = v30;
        v62[5] = v7;
        v62[6] = v35;
        WdLogEvent5_WdError(v62);
      }
      else
      {
        *(_DWORD *)(a3 + 588) = *(_DWORD *)(a3 + 588) & 0xFFFFFFBB | (2 * (v74 & 2 | (8 * (v74 & 4))));
      }
      wil_details_FeaturePropertyCache_ReportUsageToService(
        (__int64)&Feature_OemPanelDriverSupport__private_propertyCache,
        8395569LL,
        (const struct FEATURE_LOGGED_TRAITS *)&unk_1C00656DC,
        1,
        v66);
      if ( (int)MonitorGetNativeFlags(v23, &v68, (char *)&v73 + 1, &v73) >= 0 )
        *(_DWORD *)(a3 + 588) = (v68 != 0 ? 8 : 0) | *(_DWORD *)(a3 + 588) & 0xFFFFFFF7;
      v67 = 1;
      if ( (int)MonitorIsMonitorEdidless(v23, &v67) >= 0 )
        *(_DWORD *)(a3 + 588) = (v67 == 0 ? 0x10 : 0) | *(_DWORD *)(a3 + 588) & 0xFFFFFFEF;
      DisplayIDFromMonitor = MonitorGetDisplayIDFromMonitor(v23, 0LL, v82, 0LL);
      v41 = v75[0];
      v69 = 0;
      *(_DWORD *)(a3 + 588) = (DisplayIDFromMonitor != -1071841279 ? 0x20 : 0) | *(_DWORD *)(a3 + 588) & 0xFFFFFFDF;
      v77 = 0LL;
      v78 = 0;
      if ( (int)MonitorGetDpiInfoFromDescriptor(
                  v15,
                  v41,
                  (struct DISPLAY_PREFERRED_MODE_INFO *)&v77,
                  (unsigned int *)(a3 + 924),
                  (unsigned int *)(a3 + 928),
                  (__int64)&v69) >= 0 )
      {
        *(_DWORD *)(a3 + 916) = v77;
        v52 = HIDWORD(v77);
        goto LABEL_52;
      }
      *(_DWORD *)(a3 + 924) = 0;
      *(_DWORD *)(a3 + 928) = 0;
      memset(&v84[2], 0, 0x60uLL);
      if ( !v23 )
      {
        MonitorFromHandle = -1073741811;
        goto LABEL_46;
      }
      MonitorFromHandle = MONITOR_MGR::_GetMonitorFromHandle(v23, v84);
      if ( MonitorFromHandle < 0 )
      {
LABEL_46:
        if ( MonitorFromHandle < 0 )
        {
          *(_QWORD *)(a3 + 916) = 0LL;
LABEL_48:
          LODWORD(v20) = 0;
          v5 = v96;
LABEL_11:
          if ( (int)v20 >= 0 && (v5 || a5) )
            MonitorGetMonitorOrientationsFromMonitor(v23, v5, a5);
          if ( (int)MonitorReleaseMonitorHandle(v15) < 0 )
          {
            v65 = WdLogNewEntry5_WdAssertion(v24);
            *(_QWORD *)(v65 + 24) = 6882LL;
            WdLogEvent5_WdAssertion(v65);
          }
          LODWORD(v11) = 0;
          goto LABEL_17;
        }
        *(_DWORD *)(a3 + 916) = HIDWORD(v84[4]);
        v52 = (int)v84[5];
LABEL_52:
        *(_DWORD *)(a3 + 920) = v52;
        goto LABEL_48;
      }
      v44 = v84[0];
      if ( !v84[0] )
      {
        v63 = WdLogNewEntry5_WdAssertion(v42);
        WdLogEvent5_WdAssertion(v63);
      }
      v45 = (struct _ERESOURCE *)((char *)v44 + 296);
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite((PERESOURCE)((char *)v44 + 296), 1u);
      v46 = 0LL;
      v47 = 0LL;
      v48 = (char *)v44 + 216;
      v49 = (struct DXGMONITOR *)*((_QWORD *)v44 + 27);
      if ( v49 != (struct DXGMONITOR *)((char *)v44 + 216) )
      {
        v50 = (__int64)v49 - 96;
        if ( !v49 )
          v50 = 0LL;
        if ( !v50 )
          goto LABEL_44;
        do
        {
          if ( *(_DWORD *)(v50 + 88) == 1 )
          {
            v53 = *(_DWORD *)(v50 + 84);
            if ( (unsigned int)(v53 - 2) <= 1 )
            {
              if ( v46 )
              {
                v64 = WdLogNewEntry5_WdAssertion(v46);
                WdLogEvent5_WdAssertion(v64);
              }
              v46 = v50;
            }
            else if ( v53 == 5 )
            {
              v54 = v50;
              if ( v47 )
                v54 = 1LL;
              v47 = v54;
            }
          }
          v51 = *(char **)(v50 + 96);
          if ( v51 == v48 )
            break;
          v50 = (__int64)(v51 - 96);
          if ( !v51 )
            v50 = 0LL;
        }
        while ( v50 );
        if ( v47 > 1 )
        {
          *(_OWORD *)&v84[4] = *(_OWORD *)(v47 + 16);
          ExReleaseResourceLite(v45);
          KeLeaveCriticalRegion();
        }
        else
        {
LABEL_44:
          if ( !v46 )
            goto LABEL_45;
          *(_OWORD *)&v84[4] = *(_OWORD *)(v46 + 16);
          ExReleaseResourceLite(v45);
          KeLeaveCriticalRegion();
        }
        MonitorFromHandle = 0;
        goto LABEL_46;
      }
LABEL_45:
      ExReleaseResourceLite(v45);
      KeLeaveCriticalRegion();
      MonitorFromHandle = -1073741275;
      goto LABEL_46;
    }
    v59 = (_QWORD *)WdLogNewEntry5_WdError(v22);
    v59[3] = SHIDWORD(v95);
    v59[4] = (unsigned int)v95;
    v59[5] = v7;
    v59[6] = v20;
    v59[7] = 0LL;
    WdLogEvent5_WdError(v59);
  }
  LODWORD(v11) = v20;
LABEL_17:
  COREACCESS::~COREACCESS((COREACCESS *)v91);
  COREACCESS::~COREACCESS((COREACCESS *)v87);
LABEL_18:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)v79);
  if ( v80 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v25, &EventProfilerExit, v26, v79[0]);
  return (unsigned int)v11;
}
