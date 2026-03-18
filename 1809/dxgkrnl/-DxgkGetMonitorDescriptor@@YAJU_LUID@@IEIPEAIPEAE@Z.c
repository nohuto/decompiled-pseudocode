/*
 * XREFs of ?DxgkGetMonitorDescriptor@@YAJU_LUID@@IEIPEAIPEAE@Z @ 0x1C0239510
 * Callers:
 *     DxgkGetMonitorDisplayId @ 0x1C023B970 (DxgkGetMonitorDisplayId.c)
 *     DxgkGetMonitorEdid @ 0x1C023B9A0 (DxgkGetMonitorEdid.c)
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0011D10 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0012240 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00123A4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     MonitorReleaseMonitorHandle @ 0x1C00C3A54 (MonitorReleaseMonitorHandle.c)
 *     MonitorGetMonitorHandle @ 0x1C00C3AE8 (MonitorGetMonitorHandle.c)
 *     MonitorGetDisplayIDFromMonitor @ 0x1C00C5B64 (MonitorGetDisplayIDFromMonitor.c)
 *     DxgkConvertLegacyQDCAdapterAndIdToActual @ 0x1C00DDBB0 (DxgkConvertLegacyQDCAdapterAndIdToActual.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00E2938 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     MonitorGetEdidFromMonitor @ 0x1C0290844 (MonitorGetEdidFromMonitor.c)
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
  __int64 v8; // r15
  __int64 v9; // r12
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // rbx
  int v15; // eax
  __int64 v16; // rcx
  _QWORD *v17; // rax
  __int64 v18; // rcx
  DXGGLOBAL *Global; // rax
  DWORD v20; // ebx
  struct DXGADAPTER *v21; // rax
  __int64 v22; // rcx
  DXGADAPTER *v23; // r14
  __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rsi
  _QWORD *v30; // rax
  int MonitorHandle; // eax
  __int64 v32; // rcx
  _QWORD *v33; // rax
  __int64 HighPart; // rcx
  struct HDXGMONITOR__ *v35; // rsi
  __int64 v36; // rax
  int EdidFromMonitor; // eax
  __int64 v38; // rcx
  __int64 v39; // r9
  __int64 v40; // rbx
  _QWORD *v41; // rax
  int DisplayIDFromMonitor; // eax
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // rcx
  _QWORD *v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rax
  __int64 v49; // rcx
  const GUID *v50; // r8
  struct _LUID v52; // [rsp+30h] [rbp-69h] BYREF
  int v53; // [rsp+38h] [rbp-61h] BYREF
  __int64 v54; // [rsp+40h] [rbp-59h]
  char v55; // [rsp+48h] [rbp-51h]
  unsigned __int64 v56; // [rsp+50h] [rbp-49h] BYREF
  _BYTE v57[8]; // [rsp+60h] [rbp-39h] BYREF
  _BYTE v58[32]; // [rsp+68h] [rbp-31h] BYREF
  _BYTE v59[88]; // [rsp+88h] [rbp-11h] BYREF
  struct _LUID v60; // [rsp+F0h] [rbp+57h] BYREF
  unsigned int v61; // [rsp+100h] [rbp+67h] BYREF

  v60 = a1;
  v53 = -1;
  v6 = (char)a3;
  v54 = 0LL;
  LowPart = a1.LowPart;
  v8 = a4;
  v9 = a2;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v55 = 1;
    v53 = 2187;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(*(_QWORD *)&a1, &EventProfilerEnter, a3, 2187);
  }
  else
  {
    v55 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v53, 2187);
  if ( !v6 || (v8 & 0x7F) == 0 )
  {
    v15 = DxgkConvertLegacyQDCAdapterAndIdToActual(&v60, v9, &v52, &v61);
    v14 = v15;
    if ( v15 < 0 )
    {
      v17 = (_QWORD *)WdLogNewEntry5_WdError(v16);
      v17[3] = v60.HighPart;
      v18 = LowPart;
      v17[5] = v9;
      v17[6] = v14;
LABEL_15:
      v17[4] = v18;
      WdLogEvent5_WdError(v17);
      goto LABEL_33;
    }
    Global = DXGGLOBAL::GetGlobal(v16);
    v20 = v52.LowPart;
    v21 = DXGGLOBAL::ReferenceAdapterByLuid(Global, v52, &v56);
    v23 = v21;
    if ( !v21 )
    {
      v17 = (_QWORD *)WdLogNewEntry5_WdError(v22);
      v17[6] = 0LL;
LABEL_14:
      v17[3] = v52.HighPart;
      v18 = v20;
      LODWORD(v14) = -1073741811;
      v17[5] = -1073741811LL;
      goto LABEL_15;
    }
    if ( !*((_QWORD *)v21 + 315) )
    {
      DXGADAPTER::ReleaseReference(v21);
      v17 = (_QWORD *)WdLogNewEntry5_WdError(v24);
      v17[6] = 1LL;
      goto LABEL_14;
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v57, v21, 0LL);
    DXGADAPTER::ReleaseReference(v23);
    v25 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v57);
    v29 = v25;
    if ( v25 >= 0 )
    {
      MonitorHandle = MonitorGetMonitorHandle(v23, v61, 0LL, DxgkGetMonitorDescriptor, &v52);
      v29 = MonitorHandle;
      if ( MonitorHandle >= 0 )
      {
        v35 = (struct HDXGMONITOR__ *)v52;
        if ( !*(_QWORD *)&v52 )
        {
          v36 = WdLogNewEntry5_WdAssertion(v32);
          *(_QWORD *)(v36 + 24) = 7019LL;
          WdLogEvent5_WdAssertion(v36);
        }
        if ( v6 )
        {
          EdidFromMonitor = MonitorGetEdidFromMonitor(v35, v8, a5, a6);
          v40 = EdidFromMonitor;
          if ( EdidFromMonitor < 0 )
          {
            v41 = (_QWORD *)WdLogNewEntry5_WdError(v38);
            v41[3] = v60.HighPart;
            v41[4] = LowPart;
            v41[5] = v9;
            v41[6] = v40;
            v41[7] = 1LL;
            WdLogEvent5_WdError(v41);
          }
          LODWORD(v14) = 0;
        }
        else
        {
          DisplayIDFromMonitor = MonitorGetDisplayIDFromMonitor(v35, v8, a5, a6);
          v14 = DisplayIDFromMonitor;
          v45 = DisplayIDFromMonitor + 0x80000000;
          if ( (int)v45 >= 0 && DisplayIDFromMonitor != -1073741789 )
          {
            v46 = (_QWORD *)WdLogNewEntry5_WdWarning(v45, v43, v44);
            v46[3] = v60.HighPart;
            v46[4] = LowPart;
            v46[5] = v9;
            v46[6] = v14;
            WdLogEvent5_WdWarning(v46);
          }
        }
        if ( (int)MonitorReleaseMonitorHandle(v23, (__int64)v35, DxgkGetMonitorDescriptor, v39) < 0 )
        {
          v48 = WdLogNewEntry5_WdAssertion(v47);
          *(_QWORD *)(v48 + 24) = 7064LL;
          WdLogEvent5_WdAssertion(v48);
        }
        goto LABEL_32;
      }
      v33 = (_QWORD *)WdLogNewEntry5_WdError(v32);
      HighPart = v60.HighPart;
      v33[7] = 0LL;
      v33[3] = HighPart;
      v33[4] = LowPart;
      v33[5] = v9;
      v33[6] = v29;
      WdLogEvent5_WdError(v33);
    }
    else
    {
      v30 = (_QWORD *)WdLogNewEntry5_WdWarning(v27, v26, v28);
      v30[3] = v52.HighPart;
      v30[4] = v20;
      v30[5] = v29;
      WdLogEvent5_WdWarning(v30);
    }
    LODWORD(v14) = v29;
LABEL_32:
    COREACCESS::~COREACCESS((COREACCESS *)v59);
    COREACCESS::~COREACCESS((COREACCESS *)v58);
    goto LABEL_33;
  }
  v13 = WdLogNewEntry5_WdWarning(v11, v10, v12);
  *(_QWORD *)(v13 + 24) = v8;
  *(_QWORD *)(v13 + 32) = 128LL;
  WdLogEvent5_WdWarning(v13);
  LODWORD(v14) = -1073741811;
LABEL_33:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v53);
  if ( v55 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v49, &EventProfilerExit, v50, v53);
  return (unsigned int)v14;
}
