/*
 * XREFs of DxgkHandleForceProjectionMonitor @ 0x1C0270860
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000281C (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IW4_DXGKETW_PROFI.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C00037E8 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000BE8C (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BF70 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000C1D0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     MonitorGetMonitorType @ 0x1C00DFFD4 (MonitorGetMonitorType.c)
 *     MonitorGetMonitorHandle @ 0x1C00EC42C (MonitorGetMonitorHandle.c)
 *     MonitorReleaseMonitorHandle @ 0x1C00ED228 (MonitorReleaseMonitorHandle.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C0100730 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?DmmIsTargetForceable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C0100818 (-DmmIsTargetForceable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z.c)
 *     DxgkInvalidateMonitorConnections @ 0x1C0140EE0 (DxgkInvalidateMonitorConnections.c)
 *     MonitorCreateSimulatedMonitor @ 0x1C02C8ED4 (MonitorCreateSimulatedMonitor.c)
 *     MonitorDestroySimulatedMonitor @ 0x1C02C923C (MonitorDestroySimulatedMonitor.c)
 */

__int64 __fastcall DxgkHandleForceProjectionMonitor(struct _LUID a1, unsigned int a2, unsigned int a3, int a4)
{
  __int64 v4; // r13
  __int64 v6; // r12
  __int64 v7; // rdi
  unsigned int v8; // r14d
  __int64 v9; // rcx
  const GUID *v10; // r8
  __int64 v11; // rcx
  _QWORD *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  unsigned int v16; // eax
  unsigned int v17; // r12d
  __int64 v18; // rax
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  DXGADAPTER *v24; // rsi
  __int64 v25; // rax
  __int64 v26; // rdx
  int v27; // r8d
  __int64 v28; // rbx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rax
  signed int v35; // edi
  int MonitorHandle; // eax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  int MonitorType; // eax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  int SimulatedMonitor; // eax
  __int64 v48; // rax
  __int64 v49; // rax
  int v50; // eax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // rdi
  __int64 v55; // rcx
  const GUID *v56; // r8
  int v58; // [rsp+20h] [rbp-E0h]
  int v59; // [rsp+30h] [rbp-D0h]
  unsigned __int8 v60[4]; // [rsp+40h] [rbp-C0h] BYREF
  signed int v61; // [rsp+44h] [rbp-BCh] BYREF
  struct HDXGMONITOR__ *v62; // [rsp+48h] [rbp-B8h] BYREF
  struct _LUID v63; // [rsp+50h] [rbp-B0h]
  int v64; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v65; // [rsp+60h] [rbp-A0h]
  char v66; // [rsp+68h] [rbp-98h]
  unsigned __int64 v67; // [rsp+78h] [rbp-88h] BYREF
  __int64 v68[10]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v69; // [rsp+D0h] [rbp-30h] BYREF
  char v70[64]; // [rsp+D8h] [rbp-28h] BYREF
  char v71[72]; // [rsp+118h] [rbp+18h] BYREF

  v4 = a2;
  v6 = a3;
  v63 = a1;
  v7 = a4;
  memset(v68, 0, 0x48uLL);
  v8 = 3;
  EtwActivityIdControl(3u, (LPGUID)&v68[1]);
  v64 = -1;
  v65 = 0LL;
  v68[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v68[3]) = 41;
  LOBYTE(v68[6]) = -1;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v66 = 1;
    v64 = 2179;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v9, &EventProfilerEnter, v10, 2179);
  }
  else
  {
    v66 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v64, 2179LL);
  v12 = (_QWORD *)WdLogNewEntry5_WdEvent(v11);
  v12[4] = v4;
  v12[6] = v63.HighPart;
  v12[7] = a1.LowPart;
  v12[3] = v6;
  v12[5] = v7;
  WdLogEvent5_WdEvent(v12);
  v16 = v6;
  v17 = v6 & 0x7FFFFFFF;
  v63.LowPart = v16 >> 31;
  if ( v17 > 2 )
  {
    v18 = WdLogNewEntry5_WdError(v14, v13, v15);
    *(_QWORD *)(v18 + 24) = v17;
LABEL_53:
    WdLogEvent5_WdError(v18);
    goto LABEL_54;
  }
  if ( (_DWORD)v7 )
  {
    if ( (_DWORD)v7 != 1 )
    {
      if ( (_DWORD)v7 != 2 )
      {
        v18 = WdLogNewEntry5_WdError(v14, v13, v15);
        *(_QWORD *)(v18 + 24) = v7;
        goto LABEL_53;
      }
      v8 = 4;
    }
  }
  else
  {
    v8 = 2;
  }
  Global = DXGGLOBAL::GetGlobal(v14, v13);
  v20 = DXGGLOBAL::ReferenceAdapterByLuid(Global, a1, &v67);
  v24 = v20;
  if ( !v20 )
  {
    v25 = WdLogNewEntry5_WdWarning(v22, v21, v23);
    *(_QWORD *)(v25 + 24) = 1923LL;
    WdLogEvent5_WdWarning(v25);
LABEL_54:
    LODWORD(v28) = -1073741811;
    goto LABEL_55;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)&v69, v20, 0LL);
  v28 = (int)COREADAPTERACCESS::AcquireExclusive(&v69, (unsigned int)(v27 + 1));
  DXGADAPTER::ReleaseReferenceNoTracking(v24);
  if ( (int)v28 < 0 )
  {
    v32 = WdLogNewEntry5_WdWarning(v30, v29, v31);
    *(_QWORD *)(v32 + 24) = v24;
    *(_QWORD *)(v32 + 32) = v28;
    goto LABEL_50;
  }
  v60[0] = 0;
  LODWORD(v28) = DmmIsTargetForceable((__int64)v24, (unsigned int)v4, v60, 0);
  if ( (int)v28 >= 0 && !v60[0] )
  {
    v34 = WdLogNewEntry5_WdEvent(v33);
    *(_QWORD *)(v34 + 24) = v4;
    *(_QWORD *)(v34 + 32) = v24;
    WdLogEvent5_WdEvent(v34);
    LODWORD(v28) = -1073741811;
  }
  v35 = 0;
  v61 = 0;
  if ( (int)v28 >= 0 )
  {
    v62 = 0LL;
    MonitorHandle = MonitorGetMonitorHandle(v24, (unsigned int)v4, 0, DxgkHandleForceProjectionMonitor, &v62);
    LODWORD(v28) = MonitorHandle;
    if ( MonitorHandle < 0 )
    {
      if ( MonitorHandle == -1073741275 )
      {
        if ( v62 )
        {
          v45 = WdLogNewEntry5_WdAssertion(v38, v37);
          *(_QWORD *)(v45 + 24) = 1990LL;
          WdLogEvent5_WdAssertion(v45);
        }
        LODWORD(v28) = 0;
      }
    }
    else
    {
      MonitorType = MonitorGetMonitorType(v62, &v61);
      v35 = v61;
      LODWORD(v28) = MonitorType;
      if ( MonitorType >= 0 && !v61 )
      {
        v43 = WdLogNewEntry5_WdAssertion(v42, v41);
        *(_QWORD *)(v43 + 24) = 1979LL;
        WdLogEvent5_WdAssertion(v43);
      }
      if ( (int)MonitorReleaseMonitorHandle(v24, (__int64)v62, DxgkHandleForceProjectionMonitor) < 0 )
      {
        v44 = WdLogNewEntry5_WdAssertion(v38, v37);
        *(_QWORD *)(v44 + 24) = 1984LL;
        WdLogEvent5_WdAssertion(v44);
      }
    }
    if ( (int)v28 >= 0 && v17 != 2 )
    {
      if ( !v17 )
      {
        if ( v35 && (v35 != 1 || v8 == 4) && v35 != 5 && (int)v8 >= v35 )
        {
          v46 = WdLogNewEntry5_WdError(v38, v37, v39);
          *(_QWORD *)(v46 + 24) = v8;
          *(_QWORD *)(v46 + 32) = v35;
          WdLogEvent5_WdError(v46);
          goto LABEL_47;
        }
        SimulatedMonitor = MonitorCreateSimulatedMonitor(v24, v58, 0, v59, (__int64)v68);
        goto LABEL_46;
      }
      if ( v35 )
      {
        if ( v8 == v35 )
        {
          SimulatedMonitor = MonitorDestroySimulatedMonitor(v24, v4, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v68);
LABEL_46:
          LODWORD(v28) = SimulatedMonitor;
          goto LABEL_47;
        }
        v49 = WdLogNewEntry5_WdWarning(v38, v37, v39);
        *(_QWORD *)(v49 + 24) = v8;
        *(_QWORD *)(v49 + 32) = v35;
        WdLogEvent5_WdWarning(v49);
      }
      else
      {
        v48 = WdLogNewEntry5_WdError(v38, v37, v39);
        *(_QWORD *)(v48 + 24) = v4;
        WdLogEvent5_WdError(v48);
      }
      LODWORD(v28) = -1073741811;
    }
  }
LABEL_47:
  COREADAPTERACCESS::Release((COREADAPTERACCESS *)&v69);
  if ( !LOBYTE(v63.LowPart) )
    goto LABEL_51;
  v50 = DxgkInvalidateMonitorConnections(1uLL);
  v54 = v50;
  if ( v50 >= 0 )
    goto LABEL_51;
  v32 = WdLogNewEntry5_WdWarning(v52, v51, v53);
  *(_QWORD *)(v32 + 24) = v54;
LABEL_50:
  WdLogEvent5_WdWarning(v32);
LABEL_51:
  COREACCESS::~COREACCESS((COREACCESS *)v71);
  COREACCESS::~COREACCESS((COREACCESS *)v70);
LABEL_55:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v64, v26);
  if ( v66 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v55, &EventProfilerExit, v56, v64);
  return (unsigned int)v28;
}
