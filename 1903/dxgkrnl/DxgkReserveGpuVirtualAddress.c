/*
 * XREFs of DxgkReserveGpuVirtualAddress @ 0x1C0152550
 * Callers:
 *     ?VmBusReserveGpuVirtualAddress@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C02223C0 (-VmBusReserveGpuVirtualAddress@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ @ 0x1C00040EC (--IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C000B9D0 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C000BC50 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000BC9C (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BD80 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000BEB0 (-AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000C050 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?Open@DXGPAGINGQUEUEBYHANDLE@@QEAAXIPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@_N@Z @ 0x1C001D630 (-Open@DXGPAGINGQUEUEBYHANDLE@@QEAAXIPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@_N@Z.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     ?ReleaseReference@DXGPAGINGQUEUE@@QEAAXXZ @ 0x1C0023F34 (-ReleaseReference@DXGPAGINGQUEUE@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C0101050 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?VmBusSendReserveGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIPEAUD3DDDI_RESERVEGPUVIRTUALADDRESS@@@Z @ 0x1C0226080 (-VmBusSendReserveGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIPEAUD3DDDI_RESERVEGPUVIRTU.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C025E230 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

__int64 __fastcall DxgkReserveGpuVirtualAddress(ULONG64 a1, __int64 a2, const GUID *a3)
{
  bool v4; // bl
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  struct _KTHREAD **Current; // r12
  __int64 v11; // rdx
  ULONG64 v12; // rcx
  __int64 v13; // r8
  D3DDDI_RESERVEGPUVIRTUALADDRESS *v14; // rbx
  D3DDDI_RESERVEGPUVIRTUALADDRESS *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  struct DXGPAGINGQUEUE *v19; // r14
  struct DXGADAPTER *v20; // rsi
  __int64 v21; // r15
  struct DXGADAPTER *v22; // rsi
  struct DXGPAGINGQUEUE *v23; // r13
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // rcx
  int v27; // esi
  __int64 v28; // r8
  ULONG64 v29; // r8
  _QWORD *v30; // rdx
  _QWORD *v31; // rdx
  __int64 v32; // rdx
  __int64 v33; // rcx
  const GUID *v34; // r8
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  const GUID *v39; // r8
  __int64 v40; // rax
  __int64 v41; // rax
  DXGPAGINGQUEUE *v42; // rcx
  struct DXGADAPTER **v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  int PairingAdapters; // r13d
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  const GUID *v51; // r8
  __int64 v52; // rax
  unsigned int v53; // r14d
  unsigned int HostProcess; // eax
  bool v55; // [rsp+40h] [rbp-198h]
  int v56; // [rsp+48h] [rbp-190h] BYREF
  __int64 v57; // [rsp+50h] [rbp-188h]
  char v58; // [rsp+58h] [rbp-180h]
  DXGPAGINGQUEUE *v59; // [rsp+60h] [rbp-178h] BYREF
  struct DXGADAPTER *v60; // [rsp+68h] [rbp-170h] BYREF
  unsigned __int64 v61; // [rsp+70h] [rbp-168h] BYREF
  struct DXGPAGINGQUEUE *v62; // [rsp+78h] [rbp-160h] BYREF
  struct DXGADAPTER *v63; // [rsp+80h] [rbp-158h] BYREF
  DXGADAPTER *v64; // [rsp+88h] [rbp-150h] BYREF
  D3DDDI_RESERVEGPUVIRTUALADDRESS *v65; // [rsp+98h] [rbp-140h]
  ULONG64 v66; // [rsp+A0h] [rbp-138h]
  struct _KTHREAD **v67; // [rsp+A8h] [rbp-130h]
  D3DDDI_RESERVEGPUVIRTUALADDRESS v68; // [rsp+D0h] [rbp-108h] BYREF
  _BYTE v69[144]; // [rsp+120h] [rbp-B8h] BYREF

  v66 = a1;
  v56 = -1;
  v57 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v58 = 1;
    v56 = 2098;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2098);
  }
  else
  {
    v58 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v56, 2098LL);
  v4 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  v55 = v4;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v6, v5);
  v67 = Current;
  if ( !Current )
  {
    v36 = WdLogNewEntry5_WdError(v8, v7, v9);
    *(_QWORD *)(v36 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v36);
    goto LABEL_35;
  }
  memset(&v68, 0, sizeof(v68));
  if ( v4 )
  {
    v14 = &v68;
    v65 = &v68;
    v12 = MmUserProbeAddress;
    v15 = (D3DDDI_RESERVEGPUVIRTUALADDRESS *)a1;
    if ( a1 >= MmUserProbeAddress )
      v15 = (D3DDDI_RESERVEGPUVIRTUALADDRESS *)MmUserProbeAddress;
    v68 = *v15;
  }
  else
  {
    v14 = (D3DDDI_RESERVEGPUVIRTUALADDRESS *)a1;
    v65 = (D3DDDI_RESERVEGPUVIRTUALADDRESS *)a1;
  }
  if ( v14->ReservationType > D3DDDIGPUVIRTUALADDRESS_RESERVE_ZERO )
  {
    v40 = WdLogNewEntry5_WdWarning(v12, v11, v13);
    *(_QWORD *)(v40 + 24) = -1073741811LL;
    *(_QWORD *)(v40 + 32) = 12348LL;
    WdLogEvent5_WdWarning(v40);
    goto LABEL_35;
  }
  v62 = 0LL;
  DXGPAGINGQUEUEBYHANDLE::Open((DXGPAGINGQUEUEBYHANDLE *)&v59, v14->hPagingQueue, Current, &v62, 0);
  v63 = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v64, v14->hPagingQueue, Current, &v63, 0);
  v19 = v62;
  v20 = v63;
  if ( !v62 && !v63 )
  {
    v41 = WdLogNewEntry5_WdWarning(v17, v16, v18);
    *(_QWORD *)(v41 + 24) = v14->hPagingQueue;
    *(_QWORD *)(v41 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v41);
    if ( v64 )
      DXGADAPTER::ReleaseReferenceNoTracking(v64);
    v42 = v59;
    if ( !v59 )
      goto LABEL_35;
    goto LABEL_60;
  }
  v21 = 0LL;
  if ( v62 )
  {
    v20 = *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v62 + 2) + 16LL) + 16LL);
    v21 = *((_QWORD *)v62 + 4);
  }
  v60 = 0LL;
  if ( *((_QWORD *)v20 + 320) )
  {
    DXGADAPTER_REFERENCE::Assign(&v60, v20);
    goto LABEL_14;
  }
  v43 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v60);
  PairingAdapters = DxgkpGetPairingAdapters(v20, 0LL, v43, &v61, 0LL, 0LL, 0);
  if ( PairingAdapters >= 0 )
  {
LABEL_14:
    v22 = v60;
    v23 = (struct DXGPAGINGQUEUE *)*((_QWORD *)v60 + 320);
    v62 = v23;
    if ( *((_BYTE *)v60 + 185) )
    {
      if ( v19 )
        v53 = *((_DWORD *)v19 + 7);
      else
        v53 = *((_DWORD *)v60 + 1052);
      HostProcess = DXGPROCESS::GetHostProcess((DXGPROCESS *)Current);
      v27 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendReserveGpuVirtualAddress(
              (struct DXGADAPTER *)((char *)v22 + 4144),
              HostProcess,
              v53,
              v14);
    }
    else
    {
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v69, v60, 0LL);
      v27 = COREADAPTERACCESS::AcquireShared((__int64)v69, 0xFFFFFFFFLL, v24);
      if ( v27 < 0 )
      {
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v69);
LABEL_26:
        DXGADAPTER_REFERENCE::Assign(&v60, 0LL);
        if ( v64 )
          DXGADAPTER::ReleaseReferenceNoTracking(v64);
        if ( v59 )
          DXGPAGINGQUEUE::ReleaseReference(v59, v32);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v56, v32);
        if ( v58 )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            McTemplateK0q(v33, &EventProfilerExit, v34, v56);
        }
        return (unsigned int)v27;
      }
      if ( v14->Reserved0 > 1 )
      {
        v52 = WdLogNewEntry5_WdWarning(v26, v25, v28);
        goto LABEL_57;
      }
      if ( v14->Reserved0 == 1 && !v21 )
      {
        v52 = WdLogNewEntry5_WdWarning(v26, v25, v28);
        *(_QWORD *)(v52 + 32) = 12415LL;
LABEL_57:
        *(_QWORD *)(v52 + 24) = -1073741811LL;
        WdLogEvent5_WdWarning(v52);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v69);
        DXGADAPTER_REFERENCE::Assign(&v60, 0LL);
        if ( v64 )
          DXGADAPTER::ReleaseReferenceNoTracking(v64);
        v42 = v59;
        if ( !v59 )
          goto LABEL_35;
LABEL_60:
        DXGPAGINGQUEUE::ReleaseReference(v42, v37);
LABEL_35:
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v56, v37);
        if ( v58 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q(v38, &EventProfilerExit, v39, v56);
        return 3221225485LL;
      }
      v27 = (*(__int64 (__fastcall **)(_QWORD, struct _KTHREAD **, __int64, D3DDDI_RESERVEGPUVIRTUALADDRESS *))(*(_QWORD *)(*((_QWORD *)v23 + 68) + 8LL) + 784LL))(
              *((_QWORD *)v23 + 69),
              Current,
              v21,
              v14);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v69);
    }
    if ( v27 >= 0 && v55 )
    {
      v29 = v66;
      v30 = (_QWORD *)(v66 + 56);
      if ( v66 + 56 >= MmUserProbeAddress )
        v30 = (_QWORD *)MmUserProbeAddress;
      *v30 = v14->VirtualAddress;
      v31 = (_QWORD *)(v29 + 64);
      if ( v29 + 64 >= MmUserProbeAddress )
        v31 = (_QWORD *)MmUserProbeAddress;
      *v31 = v14->PagingFenceValue;
    }
    goto LABEL_26;
  }
  v48 = WdLogNewEntry5_WdWarning(v45, v44, v46);
  *(_QWORD *)(v48 + 24) = v20;
  WdLogEvent5_WdWarning(v48);
  DXGADAPTER_REFERENCE::Assign(&v60, 0LL);
  if ( v64 )
    DXGADAPTER::ReleaseReferenceNoTracking(v64);
  if ( v59 )
    DXGPAGINGQUEUE::ReleaseReference(v59, v49);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v56, v49);
  if ( v58 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v50, &EventProfilerExit, v51, v56);
  return (unsigned int)PairingAdapters;
}
