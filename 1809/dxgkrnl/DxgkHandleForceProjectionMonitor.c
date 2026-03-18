/*
 * XREFs of DxgkHandleForceProjectionMonitor @ 0x1C00B39B0
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C0010778 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C001150C (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0011D10 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00123A4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     DxgkInvalidateMonitorConnections @ 0x1C00B3DE0 (DxgkInvalidateMonitorConnections.c)
 *     MonitorCreateSimulatedMonitor @ 0x1C00B659C (MonitorCreateSimulatedMonitor.c)
 *     MonitorGetMonitorType @ 0x1C00C2CC0 (MonitorGetMonitorType.c)
 *     MonitorReleaseMonitorHandle @ 0x1C00C3A54 (MonitorReleaseMonitorHandle.c)
 *     MonitorGetMonitorHandle @ 0x1C00C3AE8 (MonitorGetMonitorHandle.c)
 *     ?DmmIsTargetForcable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C00E23D0 (-DmmIsTargetForcable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00E2938 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     MonitorDestroySimulatedMonitor @ 0x1C0290138 (MonitorDestroySimulatedMonitor.c)
 */

__int64 __fastcall DxgkHandleForceProjectionMonitor(struct _LUID a1, unsigned int a2, unsigned int a3, int a4)
{
  __int64 v4; // r13
  __int64 v5; // r12
  __int64 v7; // rsi
  LONG v8; // edi
  unsigned int v9; // r14d
  __int64 v10; // rcx
  const GUID *v11; // r8
  _QWORD *v12; // rax
  __int64 v13; // rcx
  unsigned int v14; // eax
  unsigned int v15; // r12d
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  DXGADAPTER *v21; // rsi
  int v22; // r8d
  __int64 v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  signed int v27; // edi
  int MonitorHandle; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  int MonitorType; // eax
  __int64 v33; // rcx
  int SimulatedMonitor; // eax
  __int64 v35; // rcx
  const GUID *v36; // r8
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  int v48; // eax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // rdi
  int v53; // [rsp+20h] [rbp-E0h]
  int v54; // [rsp+30h] [rbp-D0h]
  char v55[4]; // [rsp+40h] [rbp-C0h] BYREF
  signed int v56; // [rsp+44h] [rbp-BCh]
  struct HDXGMONITOR__ *v57; // [rsp+48h] [rbp-B8h] BYREF
  __int64 HighPart; // [rsp+58h] [rbp-A8h]
  __int64 v59; // [rsp+60h] [rbp-A0h]
  int v60; // [rsp+68h] [rbp-98h] BYREF
  __int64 v61; // [rsp+70h] [rbp-90h]
  char v62; // [rsp+78h] [rbp-88h]
  unsigned __int64 v63; // [rsp+80h] [rbp-80h] BYREF
  __int64 v64; // [rsp+90h] [rbp-70h] BYREF
  char v65[32]; // [rsp+98h] [rbp-68h] BYREF
  char v66[40]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v67[10]; // [rsp+E0h] [rbp-20h] BYREF

  v4 = a2;
  HighPart = (unsigned int)a1.HighPart;
  v5 = a3;
  v59 = (unsigned int)a1.HighPart;
  v7 = a4;
  v8 = a1.HighPart;
  memset(v67, 0, 0x48uLL);
  v9 = 3;
  EtwActivityIdControl(3u, (LPGUID)&v67[1]);
  v60 = -1;
  v61 = 0LL;
  v67[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v67[3]) = 41;
  LOBYTE(v67[6]) = -1;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v62 = 1;
    v60 = 2179;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    {
      McTemplateK0q(v10, &EventProfilerEnter, v11, 2179);
      v8 = HighPart;
    }
  }
  else
  {
    v8 = v59;
    v62 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v60, 2179);
  v12 = (_QWORD *)WdLogNewEntry5_WdEvent();
  v59 = v4;
  v12[4] = v4;
  v12[7] = a1.LowPart;
  v12[3] = v5;
  v12[5] = v7;
  v12[6] = v8;
  WdLogEvent5_WdEvent(v12);
  v14 = v5;
  v15 = v5 & 0x7FFFFFFF;
  LODWORD(HighPart) = v14 >> 31;
  if ( v15 > 2 )
  {
    v38 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v38 + 24) = v15;
    goto LABEL_56;
  }
  if ( (_DWORD)v7 )
  {
    if ( (_DWORD)v7 == 1 )
      goto LABEL_8;
    if ( (_DWORD)v7 == 2 )
    {
      v9 = 4;
      goto LABEL_8;
    }
    v38 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v38 + 24) = v7;
LABEL_56:
    WdLogEvent5_WdError(v38);
    goto LABEL_57;
  }
  v9 = 2;
LABEL_8:
  Global = DXGGLOBAL::GetGlobal(v13);
  v17 = DXGGLOBAL::ReferenceAdapterByLuid(Global, a1, &v63);
  v21 = v17;
  if ( !v17 )
  {
    v39 = WdLogNewEntry5_WdWarning(v19, v18, v20);
    *(_QWORD *)(v39 + 24) = 1903LL;
    WdLogEvent5_WdWarning(v39);
LABEL_57:
    LODWORD(v23) = -1073741811;
    goto LABEL_30;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)&v64, v17, 0LL);
  v23 = (int)COREADAPTERACCESS::AcquireExclusive(&v64, (unsigned int)(v22 + 1));
  DXGADAPTER::ReleaseReference(v21);
  if ( (int)v23 < 0 )
  {
    v40 = WdLogNewEntry5_WdWarning(v25, v24, v26);
    *(_QWORD *)(v40 + 24) = v21;
    *(_QWORD *)(v40 + 32) = v23;
    goto LABEL_54;
  }
  v55[0] = 0;
  LODWORD(v23) = DmmIsTargetForcable(v21, (unsigned int)v4, v55, 0LL);
  if ( (int)v23 >= 0 && !v55[0] )
  {
    v41 = WdLogNewEntry5_WdEvent();
    *(_QWORD *)(v41 + 24) = v4;
    *(_QWORD *)(v41 + 32) = v21;
    WdLogEvent5_WdEvent(v41);
    LODWORD(v23) = -1073741811;
  }
  v27 = 0;
  v56 = 0;
  if ( (int)v23 >= 0 )
  {
    v57 = 0LL;
    MonitorHandle = MonitorGetMonitorHandle(v21, v4, 0, DxgkHandleForceProjectionMonitor, (__int64)&v57);
    LODWORD(v23) = MonitorHandle;
    if ( MonitorHandle < 0 )
    {
      if ( MonitorHandle == -1073741275 )
      {
        if ( v57 )
        {
          v44 = WdLogNewEntry5_WdAssertion(v30);
          *(_QWORD *)(v44 + 24) = 1970LL;
          WdLogEvent5_WdAssertion(v44);
        }
        LODWORD(v23) = 0;
      }
    }
    else
    {
      MonitorType = MonitorGetMonitorType(v57);
      v27 = v56;
      LODWORD(v23) = MonitorType;
      if ( MonitorType >= 0 && !v56 )
      {
        v42 = WdLogNewEntry5_WdAssertion(v33);
        *(_QWORD *)(v42 + 24) = 1959LL;
        WdLogEvent5_WdAssertion(v42);
      }
      if ( (int)MonitorReleaseMonitorHandle(v21) < 0 )
      {
        v43 = WdLogNewEntry5_WdAssertion(v30);
        *(_QWORD *)(v43 + 24) = 1964LL;
        WdLogEvent5_WdAssertion(v43);
      }
    }
    if ( (int)v23 >= 0 && v15 != 2 )
    {
      if ( !v15 )
      {
        if ( v27 && (v27 != 1 || v9 == 4) && v27 != 5 && (int)v9 >= v27 )
        {
          v45 = WdLogNewEntry5_WdError(v30);
          *(_QWORD *)(v45 + 24) = v9;
          *(_QWORD *)(v45 + 32) = v27;
          WdLogEvent5_WdError(v45);
          goto LABEL_28;
        }
        SimulatedMonitor = MonitorCreateSimulatedMonitor(v21, v53, 0, v54, (__int64)v67);
LABEL_27:
        LODWORD(v23) = SimulatedMonitor;
        goto LABEL_28;
      }
      if ( v27 )
      {
        if ( v9 == v27 )
        {
          SimulatedMonitor = MonitorDestroySimulatedMonitor(v21, v4, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v67);
          goto LABEL_27;
        }
        v47 = WdLogNewEntry5_WdWarning(v30, v29, v31);
        *(_QWORD *)(v47 + 24) = v9;
        *(_QWORD *)(v47 + 32) = v27;
        WdLogEvent5_WdWarning(v47);
      }
      else
      {
        v46 = WdLogNewEntry5_WdError(v30);
        *(_QWORD *)(v46 + 24) = v59;
        WdLogEvent5_WdError(v46);
      }
      LODWORD(v23) = -1073741811;
    }
  }
LABEL_28:
  COREADAPTERACCESS::Release((COREADAPTERACCESS *)&v64);
  if ( !(_BYTE)HighPart )
    goto LABEL_29;
  v48 = DxgkInvalidateMonitorConnections(1uLL);
  v52 = v48;
  if ( v48 >= 0 )
    goto LABEL_29;
  v40 = WdLogNewEntry5_WdWarning(v50, v49, v51);
  *(_QWORD *)(v40 + 24) = v52;
LABEL_54:
  WdLogEvent5_WdWarning(v40);
LABEL_29:
  COREACCESS::~COREACCESS((COREACCESS *)v66);
  COREACCESS::~COREACCESS((COREACCESS *)v65);
LABEL_30:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v60);
  if ( v62 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v35, &EventProfilerExit, v36, v60);
  return (unsigned int)v23;
}
