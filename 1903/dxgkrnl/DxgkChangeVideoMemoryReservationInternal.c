/*
 * XREFs of DxgkChangeVideoMemoryReservationInternal @ 0x1C020805C
 * Callers:
 *     DxgkChangeVideoMemoryReservation @ 0x1C0208040 (DxgkChangeVideoMemoryReservation.c)
 *     ?VmBusChangeVideoMemoryReservation@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C021B530 (-VmBusChangeVideoMemoryReservation@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C000B9D0 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000BC9C (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BD80 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000BEB0 (-AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000C050 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ @ 0x1C0018978 (-GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C0101050 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ??0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z @ 0x1C013C150 (--0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z.c)
 *     ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x1C013C31C (-AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z.c)
 *     ?ChangeVideoMemoryReservation@ADAPTER_RENDER@@QEAAJPEAVDXGPROCESS@@PEBU_D3DKMT_CHANGEVIDEOMMEMORYRESERVATION@@@Z @ 0x1C01F47FC (-ChangeVideoMemoryReservation@ADAPTER_RENDER@@QEAAJPEAVDXGPROCESS@@PEBU_D3DKMT_CHANGEVIDEOMMEMOR.c)
 *     ??1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ @ 0x1C025D01C (--1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ.c)
 */

__int64 __fastcall DxgkChangeVideoMemoryReservationInternal(
        _D3DKMT_CHANGEVIDEOMMEMORYRESERVATION *a1,
        char a2,
        const GUID *a3)
{
  struct DXGADAPTER *v3; // r15
  __int64 v6; // rdx
  ULONG64 v7; // rcx
  ULONG64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  struct _KTHREAD **Current; // r14
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  const GUID *v17; // r8
  HANDLE hProcess; // r12
  __int64 v20; // rdx
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rax
  struct DXGPROCESS *Process; // r12
  DXGADAPTER *v27; // rdi
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  _QWORD *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  int PairingAdapters; // r14d
  __int64 v36; // rax
  struct DXGADAPTER *v37; // r14
  __int64 v38; // r8
  int v39; // r15d
  __int64 v40; // rdx
  __int64 v41; // rcx
  const GUID *v42; // r8
  ADAPTER_RENDER *v43; // r9
  UINT *p_PhysicalAdapterIndex; // rdx
  __int64 v45; // rdx
  __int64 v46; // rcx
  const GUID *v47; // r8
  int v49; // [rsp+48h] [rbp-170h] BYREF
  __int64 v50; // [rsp+50h] [rbp-168h]
  char v51; // [rsp+58h] [rbp-160h]
  struct DXGADAPTER *v52; // [rsp+60h] [rbp-158h] BYREF
  struct DXGADAPTER *v53; // [rsp+68h] [rbp-150h]
  _D3DKMT_CHANGEVIDEOMMEMORYRESERVATION v54; // [rsp+70h] [rbp-148h] BYREF
  struct DXGADAPTER *v55; // [rsp+90h] [rbp-128h] BYREF
  DXGADAPTER *v56; // [rsp+98h] [rbp-120h] BYREF
  unsigned __int64 v57; // [rsp+A8h] [rbp-110h] BYREF
  _BYTE v58[80]; // [rsp+B0h] [rbp-108h] BYREF
  _BYTE v59[144]; // [rsp+100h] [rbp-B8h] BYREF

  v3 = (struct DXGADAPTER *)a3;
  v49 = -1;
  v50 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v51 = 1;
    v49 = 2120;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2120);
  }
  else
  {
    v51 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v49, 2120LL);
  *(_QWORD *)&v54.PhysicalAdapterIndex = 0LL;
  if ( a2 )
  {
    v7 = MmUserProbeAddress;
    v8 = (ULONG64)a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v8 = MmUserProbeAddress;
    *(_OWORD *)&v54.hProcess = *(_OWORD *)v8;
    v54.Reservation = *(_QWORD *)(v8 + 16);
  }
  else
  {
    v54 = *a1;
  }
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v7, v6);
  if ( !Current )
  {
    v13 = WdLogNewEntry5_WdError(v10, v9, v11);
    LODWORD(v14) = -1073741811;
    *(_QWORD *)(v13 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v13);
LABEL_12:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v49, v15);
    if ( v51 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v16, &EventProfilerExit, v17, v49);
    }
    return (unsigned int)v14;
  }
  hProcess = v54.hProcess;
  DXGPROCESSMUTEXBYHANDLE::DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v58, v54.hProcess, 512);
  if ( hProcess )
  {
    LOBYTE(v20) = 1;
    v21 = DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)v58, v20);
    v14 = v21;
    if ( v21 < 0 )
    {
      v25 = WdLogNewEntry5_WdWarning(v23, v22, v24);
      *(_QWORD *)(v25 + 24) = hProcess;
      *(_QWORD *)(v25 + 32) = v14;
      WdLogEvent5_WdWarning(v25);
LABEL_19:
      DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v58);
      goto LABEL_12;
    }
    Process = DXGPROCESSMUTEXBYHANDLE::GetProcess((DXGPROCESSMUTEXBYHANDLE *)v58, v22);
  }
  else
  {
    Process = (struct DXGPROCESS *)Current;
  }
  v52 = v3;
  v27 = 0LL;
  v53 = 0LL;
  if ( !v3 )
  {
    DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v56, v54.hAdapter, Current, &v52, 1);
    if ( !v52 )
    {
      v31 = (_QWORD *)WdLogNewEntry5_WdWarning(v29, v28, v30);
      LODWORD(v14) = -1073741811;
      v31[3] = -1073741811LL;
      v31[4] = Current;
      v31[5] = v54.hAdapter;
      WdLogEvent5_WdWarning(v31);
      if ( v56 )
        DXGADAPTER::ReleaseReferenceNoTracking(v56);
      goto LABEL_19;
    }
    _InterlockedIncrement64((volatile signed __int64 *)v52 + 3);
    v3 = v52;
    v27 = v52;
    v53 = v52;
    if ( v56 )
      DXGADAPTER::ReleaseReferenceNoTracking(v56);
  }
  PairingAdapters = DxgkpGetPairingAdapters(v3, 0LL, &v55, &v57, 0LL, 0LL, 0);
  if ( PairingAdapters < 0 )
  {
    v36 = WdLogNewEntry5_WdWarning(v33, v32, v34);
    *(_QWORD *)(v36 + 24) = v3;
    WdLogEvent5_WdWarning(v36);
LABEL_43:
    if ( v27 )
      DXGADAPTER::ReleaseReferenceNoTracking(v27);
    DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v58);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v49, v45);
    if ( v51 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v46, &EventProfilerExit, v47, v49);
    return (unsigned int)PairingAdapters;
  }
  v37 = v55;
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v59, v55, 0LL);
  v39 = COREADAPTERACCESS::AcquireShared((__int64)v59, 0xFFFFFFFFLL, v38);
  DXGADAPTER::ReleaseReferenceNoTracking(v37);
  if ( v39 >= 0 )
  {
    v43 = (ADAPTER_RENDER *)*((_QWORD *)v37 + 320);
    if ( a2 && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v37 + 24) + 64LL) + 40LL) + 28LL) >= 0x5018u )
    {
      p_PhysicalAdapterIndex = &a1->PhysicalAdapterIndex;
      if ( (unsigned __int64)&a1->PhysicalAdapterIndex >= MmUserProbeAddress )
        p_PhysicalAdapterIndex = (UINT *)MmUserProbeAddress;
      v54.PhysicalAdapterIndex = *p_PhysicalAdapterIndex;
    }
    PairingAdapters = ADAPTER_RENDER::ChangeVideoMemoryReservation(v43, Process, &v54);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v59);
    goto LABEL_43;
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v59);
  if ( v27 )
    DXGADAPTER::ReleaseReferenceNoTracking(v27);
  DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v58);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v49, v40);
  if ( v51 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v41, &EventProfilerExit, v42, v49);
  return (unsigned int)v39;
}
