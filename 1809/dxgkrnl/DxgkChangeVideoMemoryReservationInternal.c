/*
 * XREFs of DxgkChangeVideoMemoryReservationInternal @ 0x1C01D9BDC
 * Callers:
 *     DxgkChangeVideoMemoryReservation @ 0x1C01D9BC0 (DxgkChangeVideoMemoryReservation.c)
 *     ?VmBusChangeVideoMemoryReservation@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01EBBA0 (-VmBusChangeVideoMemoryReservation@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
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
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C0112E10 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 *     ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x1C012EA08 (-AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z.c)
 *     ??0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z @ 0x1C012FD70 (--0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z.c)
 *     ?ChangeVideoMemoryReservation@ADAPTER_RENDER@@QEAAJPEAVDXGPROCESS@@PEBU_D3DKMT_CHANGEVIDEOMMEMORYRESERVATION@@@Z @ 0x1C01C5E68 (-ChangeVideoMemoryReservation@ADAPTER_RENDER@@QEAAJPEAVDXGPROCESS@@PEBU_D3DKMT_CHANGEVIDEOMMEMOR.c)
 *     ??1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ @ 0x1C0228440 (--1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ.c)
 */

__int64 __fastcall DxgkChangeVideoMemoryReservationInternal(
        _D3DKMT_CHANGEVIDEOMMEMORYRESERVATION *a1,
        char a2,
        const GUID *a3)
{
  struct DXGADAPTER *v3; // rsi
  ULONG64 v6; // rax
  __int64 v7; // rcx
  struct _KTHREAD **Current; // r14
  __int64 v9; // rax
  __int64 v10; // rcx
  const GUID *v11; // r8
  bool v12; // zf
  HANDLE hProcess; // r15
  struct DXGPROCESS *Process; // r12
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rcx
  const GUID *v22; // r8
  DXGADAPTER *v24; // rdi
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  _QWORD *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  int PairingAdapters; // r14d
  __int64 v33; // rax
  __int64 v34; // rcx
  const GUID *v35; // r8
  struct DXGADAPTER *v36; // rsi
  ADAPTER_RENDER *v37; // r9
  UINT *p_PhysicalAdapterIndex; // rdx
  unsigned int v39; // esi
  __int64 v40; // rcx
  const GUID *v41; // r8
  int v43; // [rsp+38h] [rbp-140h] BYREF
  __int64 v44; // [rsp+40h] [rbp-138h]
  char v45; // [rsp+48h] [rbp-130h]
  struct DXGADAPTER *v46; // [rsp+50h] [rbp-128h] BYREF
  DXGADAPTER *v47; // [rsp+58h] [rbp-120h]
  _D3DKMT_CHANGEVIDEOMMEMORYRESERVATION v48; // [rsp+60h] [rbp-118h] BYREF
  struct DXGADAPTER *v49; // [rsp+80h] [rbp-F8h] BYREF
  DXGADAPTER *v50; // [rsp+88h] [rbp-F0h] BYREF
  unsigned __int64 v51; // [rsp+98h] [rbp-E0h] BYREF
  _BYTE v52[80]; // [rsp+A0h] [rbp-D8h] BYREF
  _BYTE v53[80]; // [rsp+F0h] [rbp-88h] BYREF

  v3 = (struct DXGADAPTER *)a3;
  v43 = -1;
  v44 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v45 = 1;
    v43 = 2120;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2120);
  }
  else
  {
    v45 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v43, 2120);
  memset(&v48, 0, sizeof(v48));
  if ( a2 )
  {
    v6 = (ULONG64)a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v6 = MmUserProbeAddress;
    *(_OWORD *)&v48.hProcess = *(_OWORD *)v6;
    v48.Reservation = *(_QWORD *)(v6 + 16);
  }
  else
  {
    v48 = *a1;
  }
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v9 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v9 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v9);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v43);
    v12 = v45 == 0;
LABEL_24:
    if ( !v12 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v10, &EventProfilerExit, v11, v43);
    return 3221225485LL;
  }
  hProcess = v48.hProcess;
  DXGPROCESSMUTEXBYHANDLE::DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v53, v48.hProcess, 512);
  Process = (struct DXGPROCESS *)Current;
  if ( hProcess )
  {
    v15 = DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)v53, 1);
    v19 = v15;
    if ( v15 < 0 )
    {
      v20 = WdLogNewEntry5_WdWarning(v17, v16, v18);
      *(_QWORD *)(v20 + 24) = hProcess;
      *(_QWORD *)(v20 + 32) = v19;
      WdLogEvent5_WdWarning(v20);
      DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v53);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v43);
      if ( v45 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v21, &EventProfilerExit, v22, v43);
      return (unsigned int)v19;
    }
    Process = DXGPROCESSMUTEXBYHANDLE::GetProcess((DXGPROCESSMUTEXBYHANDLE *)v53);
  }
  v46 = v3;
  v24 = 0LL;
  v47 = 0LL;
  if ( !v3 )
  {
    DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v50, v48.hAdapter, Current, &v46, 1);
    if ( !v46 )
    {
      v28 = (_QWORD *)WdLogNewEntry5_WdWarning(v26, v25, v27);
      v28[3] = -1073741811LL;
      v28[4] = Current;
      v28[5] = v48.hAdapter;
      WdLogEvent5_WdWarning(v28);
      if ( v50 )
        DXGADAPTER::ReleaseReference(v50);
      DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v53);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v43);
      v12 = v45 == 0;
      goto LABEL_24;
    }
    _InterlockedIncrement64((volatile signed __int64 *)v46 + 3);
    v3 = v46;
    v24 = v46;
    v47 = v46;
    if ( v50 )
      DXGADAPTER::ReleaseReference(v50);
  }
  PairingAdapters = DxgkpGetPairingAdapters(v3, 0, &v49, &v51, 0LL, 0LL);
  if ( PairingAdapters < 0 )
  {
    v33 = WdLogNewEntry5_WdWarning(v30, v29, v31);
    *(_QWORD *)(v33 + 24) = v3;
    WdLogEvent5_WdWarning(v33);
LABEL_32:
    if ( v24 )
      DXGADAPTER::ReleaseReference(v24);
    DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v53);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v43);
    if ( v45 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v34, &EventProfilerExit, v35, v43);
    return (unsigned int)PairingAdapters;
  }
  v36 = v49;
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v52, v49, 0LL);
  PairingAdapters = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v52);
  DXGADAPTER::ReleaseReference(v36);
  if ( PairingAdapters < 0 )
  {
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v52);
    goto LABEL_32;
  }
  v37 = (ADAPTER_RENDER *)*((_QWORD *)v36 + 316);
  if ( a2 && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v36 + 24) + 64LL) + 40LL) + 28LL) >= 0x5018u )
  {
    p_PhysicalAdapterIndex = &a1->PhysicalAdapterIndex;
    if ( (unsigned __int64)&a1->PhysicalAdapterIndex >= MmUserProbeAddress )
      p_PhysicalAdapterIndex = (UINT *)MmUserProbeAddress;
    v48.PhysicalAdapterIndex = *p_PhysicalAdapterIndex;
  }
  v39 = ADAPTER_RENDER::ChangeVideoMemoryReservation(v37, Process, &v48);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v52);
  if ( v24 )
    DXGADAPTER::ReleaseReference(v24);
  DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v53);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v43);
  if ( v45 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v40, &EventProfilerExit, v41, v43);
  return v39;
}
