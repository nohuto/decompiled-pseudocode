/*
 * XREFs of DxgkQueryClockCalibration @ 0x1C01D6200
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0011D10 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0012150 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0012240 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00123A4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C00124D0 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ?DdiCalibrateGpuClock@ADAPTER_RENDER@@QEAAJIIPEAU_DXGK_GPUCLOCKDATA@@@Z @ 0x1C0031B7C (-DdiCalibrateGpuClock@ADAPTER_RENDER@@QEAAJIIPEAU_DXGK_GPUCLOCKDATA@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C0112E10 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 */

__int64 __fastcall DxgkQueryClockCalibration(__int64 a1, __int64 a2, const GUID *a3)
{
  ULONG64 v3; // rsi
  __int64 v4; // rcx
  struct _KTHREAD **Current; // r14
  __int64 v6; // rax
  ULONG64 v7; // rax
  __int64 v8; // rcx
  struct DXGADAPTER *v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rcx
  const GUID *v12; // r8
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  int PairingAdapters; // r14d
  __int64 v18; // rax
  __int64 v19; // rcx
  const GUID *v20; // r8
  struct DXGADAPTER *v21; // rdi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rax
  ADAPTER_RENDER *v26; // rcx
  __int64 v27; // rax
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rdi
  _QWORD *v33; // rax
  __int64 v34; // rcx
  const GUID *v35; // r8
  __int64 v36; // rcx
  const GUID *v37; // r8
  __int64 v38; // rax
  __int64 v39; // rcx
  const GUID *v40; // r8
  int v41; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v42; // [rsp+38h] [rbp-C0h]
  char v43; // [rsp+40h] [rbp-B8h]
  struct DXGADAPTER *v44; // [rsp+48h] [rbp-B0h] BYREF
  DXGADAPTER *v45; // [rsp+50h] [rbp-A8h] BYREF
  unsigned __int64 v46; // [rsp+60h] [rbp-98h] BYREF
  _BYTE v47[80]; // [rsp+70h] [rbp-88h] BYREF
  _OWORD v48[2]; // [rsp+C0h] [rbp-38h] BYREF
  __int64 v49; // [rsp+E0h] [rbp-18h]

  v3 = a1;
  v41 = -1;
  v42 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v43 = 1;
    v41 = 2125;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2125);
  }
  else
  {
    v43 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v41, 2125);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v6 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v6 + 24) = 8490LL;
    WdLogEvent5_WdError(v6);
LABEL_12:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v41);
    if ( v43 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v11, &EventProfilerExit, v12, v41);
    }
    return 3221225485LL;
  }
  v7 = v3;
  if ( v3 >= MmUserProbeAddress )
    v7 = MmUserProbeAddress;
  v48[0] = *(_OWORD *)v7;
  v48[1] = *(_OWORD *)(v7 + 16);
  v49 = *(_QWORD *)(v7 + 32);
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v45, v48[0], Current, &v44, 1);
  v9 = v44;
  if ( !v44 )
  {
    v10 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v10 + 24) = Current;
    *(_QWORD *)(v10 + 32) = LODWORD(v48[0]);
    WdLogEvent5_WdError(v10);
    if ( v45 )
      DXGADAPTER::ReleaseReference(v45);
    goto LABEL_12;
  }
  PairingAdapters = DxgkpGetPairingAdapters(v44, 0, &v44, &v46, 0LL, 0LL);
  if ( PairingAdapters < 0 )
  {
    v18 = WdLogNewEntry5_WdWarning(v15, v14, v16);
    *(_QWORD *)(v18 + 24) = v9;
    WdLogEvent5_WdWarning(v18);
LABEL_18:
    if ( v45 )
      DXGADAPTER::ReleaseReference(v45);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v41);
    if ( v43 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v19, &EventProfilerExit, v20, v41);
    return (unsigned int)PairingAdapters;
  }
  v21 = v44;
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v47, v44, 0LL);
  PairingAdapters = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v47);
  DXGADAPTER::ReleaseReference(v21);
  if ( PairingAdapters < 0 )
  {
    v25 = WdLogNewEntry5_WdWarning(v23, v22, v24);
    *(_QWORD *)(v25 + 24) = v21;
    WdLogEvent5_WdWarning(v25);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v47);
    goto LABEL_18;
  }
  v26 = (ADAPTER_RENDER *)*((_QWORD *)v21 + 316);
  v27 = *((_QWORD *)v26 + 2);
  if ( *(_QWORD *)(v27 + 792) && *(int *)(v27 + 2160) >= 0x2000 )
  {
    v28 = ADAPTER_RENDER::DdiCalibrateGpuClock(
            v26,
            DWORD1(v48[0]),
            (const GUID *)DWORD2(v48[0]),
            (struct _DXGK_GPUCLOCKDATA *)((char *)v48 + 12));
    v32 = v28;
    if ( v28 >= 0 )
    {
      if ( v3 >= MmUserProbeAddress )
        v3 = MmUserProbeAddress;
      *(_OWORD *)v3 = v48[0];
      *(_OWORD *)(v3 + 16) = v48[1];
      *(_QWORD *)(v3 + 32) = v49;
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v47);
      if ( v45 )
        DXGADAPTER::ReleaseReference(v45);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v41);
      if ( v43 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v36, &EventProfilerExit, v37, v41);
      return 0LL;
    }
    else
    {
      v33 = (_QWORD *)WdLogNewEntry5_WdWarning(v30, v29, v31);
      v33[3] = v32;
      v33[4] = DWORD1(v48[0]);
      v33[5] = DWORD2(v48[0]);
      WdLogEvent5_WdWarning(v33);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v47);
      if ( v45 )
        DXGADAPTER::ReleaseReference(v45);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v41);
      if ( v43 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v34, &EventProfilerExit, v35, v41);
      return (unsigned int)v32;
    }
  }
  else
  {
    v38 = WdLogNewEntry5_WdError(v26);
    *(_QWORD *)(v38 + 24) = 8552LL;
    WdLogEvent5_WdError(v38);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v47);
    if ( v45 )
      DXGADAPTER::ReleaseReference(v45);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v41);
    if ( v43 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v39, &EventProfilerExit, v40, v41);
    return 3221225473LL;
  }
}
