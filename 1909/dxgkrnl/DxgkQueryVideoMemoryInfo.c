/*
 * XREFs of DxgkQueryVideoMemoryInfo @ 0x1C00C5650
 * Callers:
 *     ?VmBusQueryVideoMemoryInfo@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0222760 (-VmBusQueryVideoMemoryInfo@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C000BBC0 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000BE8C (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BF70 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000C0A0 (-AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000C240 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ @ 0x1C0018DF4 (-GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?QueryVideoMemoryInfo@ADAPTER_RENDER@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYVIDEOMEMORYINFO@@@Z @ 0x1C00C59C4 (-QueryVideoMemoryInfo@ADAPTER_RENDER@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYVIDEOMEMORYINFO@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C01061A0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ??0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z @ 0x1C013F560 (--0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z.c)
 *     ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x1C013F72C (-AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z.c)
 *     ?VmBusSendQueryVideoMemoryInfo@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIPEAU_D3DKMT_QUERYVIDEOMEMORYINFO@@@Z @ 0x1C0226610 (-VmBusSendQueryVideoMemoryInfo@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIPEAU_D3DKMT_QUERYVIDEOMEMORYIN.c)
 *     ??1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ @ 0x1C025D6AC (--1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C025E8C0 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

__int64 __fastcall DxgkQueryVideoMemoryInfo(_OWORD *a1)
{
  __int64 v2; // rcx
  const GUID *v3; // r8
  bool v4; // r13
  _D3DKMT_QUERYVIDEOMEMORYINFO *v5; // r14
  _OWORD *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct _KTHREAD **Current; // rbx
  __int64 v10; // r8
  DXGPROCESS *Process; // r12
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  struct DXGADAPTER *v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx
  int PairingAdapters; // ebx
  __int64 v19; // r8
  struct DXGADAPTER *v20; // rdi
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  UINT *v25; // rdx
  int VideoMemoryInfo; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  const GUID *v33; // r8
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  const GUID *v38; // r8
  bool v39; // zf
  __int64 v40; // rdx
  int v41; // eax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // rdi
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  const GUID *v49; // r8
  __int64 v50; // rax
  __int64 v51; // rax
  unsigned int v52; // ebx
  unsigned int HostProcess; // eax
  __int64 v54; // rdx
  __int64 v55; // rcx
  const GUID *v56; // r8
  int v57; // [rsp+40h] [rbp-188h] BYREF
  __int64 v58; // [rsp+48h] [rbp-180h]
  char v59; // [rsp+50h] [rbp-178h]
  DXGADAPTER *v60; // [rsp+58h] [rbp-170h] BYREF
  struct DXGADAPTER *v61; // [rsp+68h] [rbp-160h] BYREF
  struct DXGADAPTER *v62; // [rsp+70h] [rbp-158h] BYREF
  unsigned __int64 v63; // [rsp+78h] [rbp-150h] BYREF
  _D3DKMT_QUERYVIDEOMEMORYINFO v64; // [rsp+80h] [rbp-148h] BYREF
  _BYTE v65[80]; // [rsp+C0h] [rbp-108h] BYREF
  _BYTE v66[144]; // [rsp+110h] [rbp-B8h] BYREF

  v4 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  v57 = -1;
  v58 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v59 = 1;
    v57 = 2119;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v2, &EventProfilerEnter, v3, 2119);
  }
  else
  {
    v59 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v57, 2119LL);
  memset(&v64, 0, sizeof(v64));
  v5 = &v64;
  if ( v4 )
  {
    v6 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v6 = (_OWORD *)MmUserProbeAddress;
    *(_OWORD *)&v64.hProcess = *v6;
    *(_OWORD *)&v64.Budget = v6[1];
    *(_OWORD *)&v64.CurrentReservation = v6[2];
  }
  else
  {
    v5 = (_D3DKMT_QUERYVIDEOMEMORYINFO *)a1;
  }
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v35 = WdLogNewEntry5_WdError(v8, v7, v10);
    *(_QWORD *)(v35 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v35);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v57, v36);
    v39 = v59 == 0;
LABEL_31:
    if ( !v39 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v37, &EventProfilerExit, v38, v57);
    return 3221225485LL;
  }
  DXGPROCESSMUTEXBYHANDLE::DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v65, v5->hProcess, 0x400u);
  Process = (DXGPROCESS *)Current;
  if ( v5->hProcess )
  {
    v41 = DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)v65, 1);
    v45 = v41;
    if ( v41 < 0 )
    {
      v46 = WdLogNewEntry5_WdWarning(v43, v42, v44);
      *(_QWORD *)(v46 + 24) = v5->hProcess;
      *(_QWORD *)(v46 + 32) = v45;
      WdLogEvent5_WdWarning(v46);
      DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v65);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v57, v47);
      if ( v59 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v48, &EventProfilerExit, v49, v57);
      return (unsigned int)v45;
    }
    Process = DXGPROCESSMUTEXBYHANDLE::GetProcess((DXGPROCESSMUTEXBYHANDLE *)v65, v42);
  }
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v60, v5->hAdapter, Current, &v62, 1);
  v15 = v62;
  if ( !v62 )
  {
    v50 = WdLogNewEntry5_WdError(v13, v12, v14);
    *(_QWORD *)(v50 + 24) = Current;
    *(_QWORD *)(v50 + 32) = v5->hAdapter;
    WdLogEvent5_WdError(v50);
    if ( v60 )
      DXGADAPTER::ReleaseReferenceNoTracking(v60);
    DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v65);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v57, v40);
    v39 = v59 == 0;
    goto LABEL_31;
  }
  PairingAdapters = DxgkpGetPairingAdapters(v62, 0, &v61, &v63, 0LL, 0LL, 0);
  if ( PairingAdapters < 0 )
  {
    v51 = WdLogNewEntry5_WdWarning(v17, v16, v19);
    *(_QWORD *)(v51 + 24) = v15;
    WdLogEvent5_WdWarning(v51);
    goto LABEL_22;
  }
  v20 = v61;
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v66, v61, 0LL);
  PairingAdapters = COREADAPTERACCESS::AcquireShared((__int64)v66, 0xFFFFFFFFLL, v21);
  DXGADAPTER::ReleaseReferenceNoTracking(v20);
  if ( PairingAdapters < 0 )
  {
    v30 = WdLogNewEntry5_WdWarning(v23, v22, v24);
    *(_QWORD *)(v30 + 24) = v20;
    goto LABEL_21;
  }
  if ( v4 && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v20 + 24) + 64LL) + 40LL) + 28LL) >= 0x5018u )
  {
    v25 = (UINT *)(a1 + 3);
    if ( (unsigned __int64)(a1 + 3) >= MmUserProbeAddress )
      v25 = (UINT *)MmUserProbeAddress;
    v5->PhysicalAdapterIndex = *v25;
    v20 = v61;
  }
  if ( *((_BYTE *)v20 + 185) )
  {
    v52 = *((_DWORD *)v20 + 1052);
    HostProcess = DXGPROCESS::GetHostProcess(Process);
    VideoMemoryInfo = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendQueryVideoMemoryInfo(
                        (struct DXGADAPTER *)((char *)v20 + 4144),
                        HostProcess,
                        v52,
                        v5);
  }
  else
  {
    VideoMemoryInfo = ADAPTER_RENDER::QueryVideoMemoryInfo(*((ADAPTER_RENDER **)v20 + 320), Process, v5);
  }
  PairingAdapters = VideoMemoryInfo;
  if ( VideoMemoryInfo < 0 )
  {
    v30 = WdLogNewEntry5_WdWarning(v28, v27, v29);
    *(_QWORD *)(v30 + 24) = PairingAdapters;
LABEL_21:
    WdLogEvent5_WdWarning(v30);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v66);
LABEL_22:
    if ( v60 )
      DXGADAPTER::ReleaseReferenceNoTracking(v60);
    DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v65);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v57, v31);
    if ( v59 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v32, &EventProfilerExit, v33, v57);
    }
    return (unsigned int)PairingAdapters;
  }
  if ( v4 )
  {
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      a1 = (_OWORD *)MmUserProbeAddress;
    *a1 = *(_OWORD *)&v5->hProcess;
    a1[1] = *(_OWORD *)&v5->Budget;
    a1[2] = *(_OWORD *)&v5->CurrentReservation;
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v66);
  if ( v60 )
    DXGADAPTER::ReleaseReferenceNoTracking(v60);
  DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v65);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v57, v54);
  if ( v59 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v55, &EventProfilerExit, v56, v57);
  return 0LL;
}
