/*
 * XREFs of DxgkQueryVideoMemoryInfo @ 0x1C00B3150
 * Callers:
 *     ?VmBusQueryVideoMemoryInfo@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01F2410 (-VmBusQueryVideoMemoryInfo@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0011D10 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0012150 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0012240 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00123A4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C00124D0 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ?GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ @ 0x1C0017E94 (-GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?QueryVideoMemoryInfo@ADAPTER_RENDER@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYVIDEOMEMORYINFO@@@Z @ 0x1C00B34B0 (-QueryVideoMemoryInfo@ADAPTER_RENDER@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYVIDEOMEMORYINFO@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C0112E10 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 *     ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x1C012EA08 (-AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z.c)
 *     ??0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z @ 0x1C012FD70 (--0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z.c)
 *     ?VmBusSendQueryVideoMemoryInfo@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIPEAU_D3DKMT_QUERYVIDEOMEMORYINFO@@@Z @ 0x1C01F5F70 (-VmBusSendQueryVideoMemoryInfo@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIPEAU_D3DKMT_QUERYVIDEOMEMORYIN.c)
 *     ??1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ @ 0x1C0228440 (--1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C0229704 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

__int64 __fastcall DxgkQueryVideoMemoryInfo(_OWORD *a1)
{
  __int64 v2; // rcx
  const GUID *v3; // r8
  bool v4; // r13
  _D3DKMT_QUERYVIDEOMEMORYINFO *v5; // r14
  _OWORD *v6; // rax
  __int64 v7; // rcx
  struct _KTHREAD **Current; // rbx
  DXGPROCESS *Process; // r12
  __int64 v10; // rcx
  struct DXGADAPTER *v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  int PairingAdapters; // ebx
  __int64 v15; // r8
  struct DXGADAPTER *v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  UINT *v20; // rdx
  int VideoMemoryInfo; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rax
  __int64 v26; // rcx
  const GUID *v27; // r8
  __int64 v29; // rax
  __int64 v30; // rcx
  const GUID *v31; // r8
  bool v32; // zf
  int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rdi
  __int64 v38; // rax
  __int64 v39; // rcx
  const GUID *v40; // r8
  __int64 v41; // rax
  __int64 v42; // rax
  unsigned int v43; // ebx
  unsigned int HostProcess; // eax
  __int64 v45; // rcx
  const GUID *v46; // r8
  int v47; // [rsp+30h] [rbp-148h] BYREF
  __int64 v48; // [rsp+38h] [rbp-140h]
  char v49; // [rsp+40h] [rbp-138h]
  DXGADAPTER *v50; // [rsp+48h] [rbp-130h] BYREF
  struct DXGADAPTER *v51; // [rsp+58h] [rbp-120h] BYREF
  struct DXGADAPTER *v52; // [rsp+60h] [rbp-118h] BYREF
  unsigned __int64 v53; // [rsp+68h] [rbp-110h] BYREF
  _BYTE v54[80]; // [rsp+70h] [rbp-108h] BYREF
  _D3DKMT_QUERYVIDEOMEMORYINFO v55; // [rsp+C0h] [rbp-B8h] BYREF
  _BYTE v56[80]; // [rsp+100h] [rbp-78h] BYREF

  v4 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  v47 = -1;
  v48 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v49 = 1;
    v47 = 2119;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v2, &EventProfilerEnter, v3, 2119);
  }
  else
  {
    v49 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v47, 2119);
  memset(&v55, 0, sizeof(v55));
  v5 = &v55;
  if ( v4 )
  {
    v6 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v6 = (_OWORD *)MmUserProbeAddress;
    *(_OWORD *)&v55.hProcess = *v6;
    *(_OWORD *)&v55.Budget = v6[1];
    *(_OWORD *)&v55.CurrentReservation = v6[2];
  }
  else
  {
    v5 = (_D3DKMT_QUERYVIDEOMEMORYINFO *)a1;
  }
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v29 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v29 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v29);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v47);
    v32 = v49 == 0;
LABEL_39:
    if ( !v32 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v30, &EventProfilerExit, v31, v47);
    return 3221225485LL;
  }
  DXGPROCESSMUTEXBYHANDLE::DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v56, v5->hProcess, 0x400u);
  Process = (DXGPROCESS *)Current;
  if ( v5->hProcess )
  {
    v33 = DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)v56, 1);
    v37 = v33;
    if ( v33 < 0 )
    {
      v38 = WdLogNewEntry5_WdWarning(v35, v34, v36);
      *(_QWORD *)(v38 + 24) = v5->hProcess;
      *(_QWORD *)(v38 + 32) = v37;
      WdLogEvent5_WdWarning(v38);
      DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v56);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v47);
      if ( v49 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v39, &EventProfilerExit, v40, v47);
      return (unsigned int)v37;
    }
    Process = DXGPROCESSMUTEXBYHANDLE::GetProcess((DXGPROCESSMUTEXBYHANDLE *)v56);
  }
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v50, v5->hAdapter, Current, &v52, 1);
  v11 = v52;
  if ( !v52 )
  {
    v41 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v41 + 24) = Current;
    *(_QWORD *)(v41 + 32) = v5->hAdapter;
    WdLogEvent5_WdError(v41);
    if ( v50 )
      DXGADAPTER::ReleaseReference(v50);
    DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v56);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v47);
    v32 = v49 == 0;
    goto LABEL_39;
  }
  PairingAdapters = DxgkpGetPairingAdapters(v52, 0, &v51, &v53, 0LL, 0LL);
  if ( PairingAdapters < 0 )
  {
    v42 = WdLogNewEntry5_WdWarning(v13, v12, v15);
    *(_QWORD *)(v42 + 24) = v11;
    WdLogEvent5_WdWarning(v42);
    goto LABEL_22;
  }
  v16 = v51;
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v54, v51, 0LL);
  PairingAdapters = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v54);
  DXGADAPTER::ReleaseReference(v16);
  if ( PairingAdapters < 0 )
  {
    v25 = WdLogNewEntry5_WdWarning(v18, v17, v19);
    *(_QWORD *)(v25 + 24) = v16;
    goto LABEL_21;
  }
  if ( v4 && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v16 + 24) + 64LL) + 40LL) + 28LL) >= 0x5018u )
  {
    v20 = (UINT *)(a1 + 3);
    if ( (unsigned __int64)(a1 + 3) >= MmUserProbeAddress )
      v20 = (UINT *)MmUserProbeAddress;
    v5->PhysicalAdapterIndex = *v20;
    v16 = v51;
  }
  if ( *((_BYTE *)v16 + 185) )
  {
    v43 = *((_DWORD *)v16 + 1054);
    HostProcess = DXGPROCESS::GetHostProcess(Process);
    VideoMemoryInfo = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendQueryVideoMemoryInfo(
                        (struct DXGADAPTER *)((char *)v16 + 4152),
                        HostProcess,
                        v43,
                        v5);
  }
  else
  {
    VideoMemoryInfo = ADAPTER_RENDER::QueryVideoMemoryInfo(*((ADAPTER_RENDER **)v16 + 316), Process, v5);
  }
  PairingAdapters = VideoMemoryInfo;
  if ( VideoMemoryInfo < 0 )
  {
    v25 = WdLogNewEntry5_WdWarning(v23, v22, v24);
    *(_QWORD *)(v25 + 24) = PairingAdapters;
LABEL_21:
    WdLogEvent5_WdWarning(v25);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v54);
LABEL_22:
    if ( v50 )
      DXGADAPTER::ReleaseReference(v50);
    DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v56);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v47);
    if ( v49 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v26, &EventProfilerExit, v27, v47);
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
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v54);
  if ( v50 )
    DXGADAPTER::ReleaseReference(v50);
  DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v56);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v47);
  if ( v49 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v45, &EventProfilerExit, v46, v47);
  return 0LL;
}
