/*
 * XREFs of DxgkQueryClockCalibration @ 0x1C02046E0
 * Callers:
 *     <none>
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C000BBC0 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000BE8C (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BF70 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000C0A0 (-AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000C240 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?DdiCalibrateGpuClock@ADAPTER_RENDER@@QEAAJIIPEAU_DXGK_GPUCLOCKDATA@@@Z @ 0x1C0037558 (-DdiCalibrateGpuClock@ADAPTER_RENDER@@QEAAJIIPEAU_DXGK_GPUCLOCKDATA@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C01061A0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 */

__int64 __fastcall DxgkQueryClockCalibration(__int64 a1, __int64 a2, const GUID *a3)
{
  ULONG64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  struct _KTHREAD **Current; // r14
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  const GUID *v13; // r8
  ULONG64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  struct DXGADAPTER *v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  int PairingAdapters; // r14d
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  const GUID *v28; // r8
  struct DXGADAPTER *v29; // rsi
  __int64 v30; // r8
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rax
  ADAPTER_RENDER *v35; // rcx
  __int64 v36; // rax
  int v37; // eax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // rsi
  _QWORD *v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  const GUID *v45; // r8
  __int64 v46; // rdx
  __int64 v47; // rcx
  const GUID *v48; // r8
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  const GUID *v52; // r8
  int v53; // [rsp+40h] [rbp-108h] BYREF
  __int64 v54; // [rsp+48h] [rbp-100h]
  char v55; // [rsp+50h] [rbp-F8h]
  struct DXGADAPTER *v56; // [rsp+58h] [rbp-F0h] BYREF
  DXGADAPTER *v57; // [rsp+60h] [rbp-E8h] BYREF
  unsigned __int64 v58[6]; // [rsp+70h] [rbp-D8h] BYREF
  _BYTE v59[144]; // [rsp+A0h] [rbp-A8h] BYREF

  v3 = a1;
  v53 = -1;
  v54 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v55 = 1;
    v53 = 2125;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2125);
  }
  else
  {
    v55 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v53, 2125LL);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v5, v4);
  if ( !Current )
  {
    v10 = WdLogNewEntry5_WdError(v7, v6, v8);
    *(_QWORD *)(v10 + 24) = 9202LL;
    WdLogEvent5_WdError(v10);
LABEL_7:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v53, v11);
    if ( v55 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v12, &EventProfilerExit, v13, v53);
    }
    return 3221225485LL;
  }
  memset(&v58[1], 0, 0x28uLL);
  v15 = v3;
  if ( v3 >= MmUserProbeAddress )
    v15 = MmUserProbeAddress;
  *(_OWORD *)&v58[1] = *(_OWORD *)v15;
  *(_OWORD *)&v58[3] = *(_OWORD *)(v15 + 16);
  v58[5] = *(_QWORD *)(v15 + 32);
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v57, LODWORD(v58[1]), Current, &v56, 1);
  v19 = v56;
  if ( !v56 )
  {
    v20 = WdLogNewEntry5_WdError(v17, v16, v18);
    *(_QWORD *)(v20 + 24) = Current;
    *(_QWORD *)(v20 + 32) = LODWORD(v58[1]);
    WdLogEvent5_WdError(v20);
    if ( v57 )
      DXGADAPTER::ReleaseReferenceNoTracking(v57);
    goto LABEL_7;
  }
  PairingAdapters = DxgkpGetPairingAdapters(v56, 0LL, &v56, v58, 0LL, 0LL, 0);
  if ( PairingAdapters < 0 )
  {
    v25 = WdLogNewEntry5_WdWarning(v22, v21, v23);
    *(_QWORD *)(v25 + 24) = v19;
    WdLogEvent5_WdWarning(v25);
LABEL_18:
    if ( v57 )
      DXGADAPTER::ReleaseReferenceNoTracking(v57);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v53, v26);
    if ( v55 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v27, &EventProfilerExit, v28, v53);
    return (unsigned int)PairingAdapters;
  }
  v29 = v56;
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v59, v56, 0LL);
  PairingAdapters = COREADAPTERACCESS::AcquireShared((__int64)v59, 0xFFFFFFFFLL, v30);
  DXGADAPTER::ReleaseReferenceNoTracking(v29);
  if ( PairingAdapters < 0 )
  {
    v34 = WdLogNewEntry5_WdWarning(v32, v31, v33);
    *(_QWORD *)(v34 + 24) = v29;
    WdLogEvent5_WdWarning(v34);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v59);
    goto LABEL_18;
  }
  v35 = (ADAPTER_RENDER *)*((_QWORD *)v29 + 320);
  v36 = *((_QWORD *)v35 + 2);
  if ( *(_QWORD *)(v36 + 776) && *(int *)(v36 + 2184) >= 0x2000 )
  {
    v37 = ADAPTER_RENDER::DdiCalibrateGpuClock(
            v35,
            HIDWORD(v58[1]),
            (const GUID *)LODWORD(v58[2]),
            (struct _DXGK_GPUCLOCKDATA *)((char *)&v58[2] + 4));
    v41 = v37;
    if ( v37 >= 0 )
    {
      if ( v3 >= MmUserProbeAddress )
        v3 = MmUserProbeAddress;
      *(_OWORD *)v3 = *(_OWORD *)&v58[1];
      *(_OWORD *)(v3 + 16) = *(_OWORD *)&v58[3];
      *(_QWORD *)(v3 + 32) = v58[5];
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v59);
      if ( v57 )
        DXGADAPTER::ReleaseReferenceNoTracking(v57);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v53, v46);
      if ( v55 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v47, &EventProfilerExit, v48, v53);
      return 0LL;
    }
    else
    {
      v42 = (_QWORD *)WdLogNewEntry5_WdWarning(v39, v38, v40);
      v42[3] = v41;
      v42[4] = HIDWORD(v58[1]);
      v42[5] = LODWORD(v58[2]);
      WdLogEvent5_WdWarning(v42);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v59);
      if ( v57 )
        DXGADAPTER::ReleaseReferenceNoTracking(v57);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v53, v43);
      if ( v55 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v44, &EventProfilerExit, v45, v53);
      return (unsigned int)v41;
    }
  }
  else
  {
    v49 = WdLogNewEntry5_WdError(v35, v31, v33);
    *(_QWORD *)(v49 + 24) = 9264LL;
    WdLogEvent5_WdError(v49);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v59);
    if ( v57 )
      DXGADAPTER::ReleaseReferenceNoTracking(v57);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v53, v50);
    if ( v55 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v51, &EventProfilerExit, v52, v53);
    return 3221225473LL;
  }
}
