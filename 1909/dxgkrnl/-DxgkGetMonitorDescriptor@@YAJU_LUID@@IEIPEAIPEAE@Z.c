/*
 * XREFs of ?DxgkGetMonitorDescriptor@@YAJU_LUID@@IEIPEAIPEAE@Z @ 0x1C014CA40
 * Callers:
 *     DxgkGetMonitorEdid @ 0x1C014CA10 (DxgkGetMonitorEdid.c)
 *     DxgkGetMonitorDisplayId @ 0x1C0270830 (DxgkGetMonitorDisplayId.c)
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000BE8C (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BF70 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000C0A0 (-AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000C1D0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     MonitorGetMonitorHandle @ 0x1C00EC42C (MonitorGetMonitorHandle.c)
 *     MonitorReleaseMonitorHandle @ 0x1C00ED228 (MonitorReleaseMonitorHandle.c)
 *     DxgkConvertLegacyQDCAdapterAndIdToActual @ 0x1C00F8E80 (DxgkConvertLegacyQDCAdapterAndIdToActual.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C0100730 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     MonitorGetDisplayIDFromMonitor @ 0x1C0146FF0 (MonitorGetDisplayIDFromMonitor.c)
 *     MonitorGetEdidFromMonitor @ 0x1C014CC34 (MonitorGetEdidFromMonitor.c)
 */

__int64 __fastcall DxgkGetMonitorDescriptor(
        struct _LUID a1,
        unsigned int a2,
        const GUID *a3,
        unsigned int a4,
        unsigned int *a5,
        unsigned __int8 *a6)
{
  char v6; // r13
  DWORD LowPart; // edi
  __int64 v8; // r12
  __int64 v9; // r15
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rbx
  DXGGLOBAL *Global; // rax
  DWORD v19; // ebx
  struct DXGADAPTER *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  DXGADAPTER *v24; // r14
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rsi
  int MonitorHandle; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  struct HDXGMONITOR__ *v34; // rsi
  int EdidFromMonitor; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rbx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // rcx
  const GUID *v44; // r8
  __int64 v46; // rax
  _QWORD *v47; // rax
  __int64 v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  _QWORD *v52; // rax
  _QWORD *v53; // rax
  __int64 HighPart; // rcx
  __int64 v55; // rax
  _QWORD *v56; // rax
  int DisplayIDFromMonitor; // eax
  __int64 v58; // rdx
  __int64 v59; // r8
  __int64 v60; // rcx
  _QWORD *v61; // rax
  __int64 v62; // rax
  struct _LUID v63; // [rsp+30h] [rbp-D0h] BYREF
  struct _LUID v64; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v65; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int8 *v66; // [rsp+48h] [rbp-B8h]
  unsigned int *v67; // [rsp+50h] [rbp-B0h]
  int v68; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v69; // [rsp+60h] [rbp-A0h]
  char v70; // [rsp+68h] [rbp-98h]
  unsigned __int64 v71; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v72[8]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v73[64]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v74[72]; // [rsp+C8h] [rbp-38h] BYREF

  v69 = 0LL;
  v6 = (char)a3;
  LowPart = a1.LowPart;
  v67 = a5;
  v66 = a6;
  v8 = a4;
  v9 = a2;
  v64 = a1;
  v68 = -1;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v70 = 1;
    v68 = 2187;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(*(_QWORD *)&a1, &EventProfilerEnter, a3, 2187);
  }
  else
  {
    v70 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v68, 2187LL);
  v63 = 0LL;
  if ( v6 && (v8 & 0x7F) != 0 )
  {
    v46 = WdLogNewEntry5_WdWarning(v11, v10, v12);
    *(_QWORD *)(v46 + 24) = v8;
    *(_QWORD *)(v46 + 32) = 128LL;
    WdLogEvent5_WdWarning(v46);
    LODWORD(v17) = -1073741811;
    goto LABEL_19;
  }
  v13 = DxgkConvertLegacyQDCAdapterAndIdToActual(&v64, (unsigned int)v9, &v63, &v65);
  v17 = v13;
  if ( v13 < 0 )
  {
    v47 = (_QWORD *)WdLogNewEntry5_WdError(v15, v14, v16);
    v47[3] = v64.HighPart;
    v48 = LowPart;
    v47[5] = v9;
    v47[6] = v17;
LABEL_28:
    v47[4] = v48;
    WdLogEvent5_WdError(v47);
    goto LABEL_19;
  }
  Global = DXGGLOBAL::GetGlobal(v15, v14);
  v19 = v63.LowPart;
  v20 = DXGGLOBAL::ReferenceAdapterByLuid(Global, v63, &v71);
  v24 = v20;
  if ( !v20 )
  {
    v47 = (_QWORD *)WdLogNewEntry5_WdError(v22, v21, v23);
    v47[6] = 0LL;
LABEL_27:
    v47[3] = v63.HighPart;
    v48 = v19;
    LODWORD(v17) = -1073741811;
    v47[5] = -1073741811LL;
    goto LABEL_28;
  }
  if ( !*((_QWORD *)v20 + 319) )
  {
    DXGADAPTER::ReleaseReferenceNoTracking(v20);
    v47 = (_QWORD *)WdLogNewEntry5_WdError(v50, v49, v51);
    v47[6] = 1LL;
    goto LABEL_27;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v72, v20, 0LL);
  DXGADAPTER::ReleaseReferenceNoTracking(v24);
  v25 = COREADAPTERACCESS::AcquireShared((__int64)v72, 0xFFFFFFFFLL, 0LL);
  v29 = v25;
  if ( v25 < 0 )
  {
    v52 = (_QWORD *)WdLogNewEntry5_WdWarning(v27, v26, v28);
    v52[3] = v63.HighPart;
    v52[4] = v19;
    v52[5] = v29;
    WdLogEvent5_WdWarning(v52);
  }
  else
  {
    MonitorHandle = MonitorGetMonitorHandle(v24, v65, 0, DxgkGetMonitorDescriptor, &v63);
    v29 = MonitorHandle;
    if ( MonitorHandle >= 0 )
    {
      v34 = (struct HDXGMONITOR__ *)v63;
      if ( !*(_QWORD *)&v63 )
      {
        v55 = WdLogNewEntry5_WdAssertion(v32, v31);
        *(_QWORD *)(v55 + 24) = 7170LL;
        WdLogEvent5_WdAssertion(v55);
      }
      if ( v6 )
      {
        EdidFromMonitor = MonitorGetEdidFromMonitor(v34, v8, v67, v66);
        v39 = EdidFromMonitor;
        if ( EdidFromMonitor < 0 )
        {
          v56 = (_QWORD *)WdLogNewEntry5_WdError(v37, v36, v38);
          v56[3] = v64.HighPart;
          v56[4] = LowPart;
          v56[5] = v9;
          v56[6] = v39;
          v56[7] = 1LL;
          WdLogEvent5_WdError(v56);
        }
        LODWORD(v17) = 0;
      }
      else
      {
        DisplayIDFromMonitor = MonitorGetDisplayIDFromMonitor(v34, v8, v67, v66);
        v17 = DisplayIDFromMonitor;
        v60 = DisplayIDFromMonitor + 0x80000000;
        if ( (int)v60 >= 0 && DisplayIDFromMonitor != -1073741789 )
        {
          v61 = (_QWORD *)WdLogNewEntry5_WdWarning(v60, v58, v59);
          v61[3] = v64.HighPart;
          v61[4] = LowPart;
          v61[5] = v9;
          v61[6] = v17;
          WdLogEvent5_WdWarning(v61);
        }
      }
      if ( (int)MonitorReleaseMonitorHandle(v24, (__int64)v34, DxgkGetMonitorDescriptor) < 0 )
      {
        v62 = WdLogNewEntry5_WdAssertion(v41, v40);
        *(_QWORD *)(v62 + 24) = 7215LL;
        WdLogEvent5_WdAssertion(v62);
      }
      goto LABEL_18;
    }
    v53 = (_QWORD *)WdLogNewEntry5_WdError(v32, v31, v33);
    HighPart = v64.HighPart;
    v53[7] = 0LL;
    v53[3] = HighPart;
    v53[4] = LowPart;
    v53[5] = v9;
    v53[6] = v29;
    WdLogEvent5_WdError(v53);
  }
  LODWORD(v17) = v29;
LABEL_18:
  COREACCESS::~COREACCESS((COREACCESS *)v74);
  COREACCESS::~COREACCESS((COREACCESS *)v73);
LABEL_19:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v68, v42);
  if ( v70 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v43, &EventProfilerExit, v44, v68);
  return (unsigned int)v17;
}
