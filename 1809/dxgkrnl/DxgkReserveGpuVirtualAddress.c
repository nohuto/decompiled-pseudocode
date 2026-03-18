/*
 * XREFs of DxgkReserveGpuVirtualAddress @ 0x1C0140440
 * Callers:
 *     ?VmBusReserveGpuVirtualAddress@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01F26F0 (-VmBusReserveGpuVirtualAddress@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0011D10 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0012150 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0012240 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00123A4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C00124D0 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ??0DXGPAGINGQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@_N@Z @ 0x1C001D6A4 (--0DXGPAGINGQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@_N@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ??1DXGPAGINGQUEUEBYHANDLE@@QEAA@XZ @ 0x1C0021074 (--1DXGPAGINGQUEUEBYHANDLE@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C0112E10 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 *     ?VmBusSendReserveGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIPEAUD3DDDI_RESERVEGPUVIRTUALADDRESS@@@Z @ 0x1C01F6050 (-VmBusSendReserveGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIPEAUD3DDDI_RESERVEGPUVIRTU.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C0229704 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

__int64 __fastcall DxgkReserveGpuVirtualAddress(ULONG64 a1, __int64 a2, const GUID *a3)
{
  __int64 v4; // r13
  bool v5; // di
  __int64 v6; // rdx
  ULONG64 v7; // rcx
  __int64 v8; // r8
  struct _KTHREAD **Current; // r12
  D3DDDI_RESERVEGPUVIRTUALADDRESS *v10; // r14
  D3DDDI_RESERVEGPUVIRTUALADDRESS *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  struct DXGPAGINGQUEUE *v15; // r15
  struct DXGADAPTER *v16; // rbx
  DXGADAPTER *v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v20; // ebx
  __int64 v21; // r8
  unsigned int Reserved0; // eax
  ULONG64 v23; // r8
  _QWORD *v24; // rdx
  _QWORD *v25; // rdx
  __int64 v26; // rcx
  const GUID *v27; // r8
  __int64 v29; // rax
  __int64 v30; // rcx
  const GUID *v31; // r8
  bool v32; // zf
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  int PairingAdapters; // edi
  __int64 v38; // r8
  __int64 v39; // rax
  __int64 v40; // rcx
  const GUID *v41; // r8
  __int64 v42; // rax
  unsigned int v43; // r15d
  unsigned int HostProcess; // eax
  bool v45; // [rsp+30h] [rbp-158h]
  int v46; // [rsp+38h] [rbp-150h] BYREF
  __int64 v47; // [rsp+40h] [rbp-148h]
  char v48; // [rsp+48h] [rbp-140h]
  char v49[8]; // [rsp+50h] [rbp-138h] BYREF
  struct DXGPAGINGQUEUE *v50; // [rsp+58h] [rbp-130h] BYREF
  struct DXGADAPTER *v51; // [rsp+60h] [rbp-128h] BYREF
  DXGADAPTER *v52; // [rsp+68h] [rbp-120h] BYREF
  D3DDDI_RESERVEGPUVIRTUALADDRESS *v53; // [rsp+78h] [rbp-110h]
  unsigned __int64 v54; // [rsp+80h] [rbp-108h] BYREF
  ULONG64 v55; // [rsp+88h] [rbp-100h]
  struct _KTHREAD **v56; // [rsp+90h] [rbp-F8h]
  _BYTE v57[80]; // [rsp+A0h] [rbp-E8h] BYREF
  D3DDDI_RESERVEGPUVIRTUALADDRESS v58; // [rsp+110h] [rbp-78h] BYREF

  v55 = a1;
  v46 = -1;
  v4 = 0LL;
  v47 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v48 = 1;
    v46 = 2098;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2098);
  }
  else
  {
    v48 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v46, 2098);
  v5 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  v45 = v5;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  v56 = Current;
  if ( !Current )
  {
    v29 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v29 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v29);
LABEL_34:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v46);
    v32 = v48 == 0;
LABEL_58:
    if ( !v32 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v30, &EventProfilerExit, v31, v46);
    return 3221225485LL;
  }
  if ( v5 )
  {
    v10 = &v58;
    v53 = &v58;
    v7 = MmUserProbeAddress;
    v11 = (D3DDDI_RESERVEGPUVIRTUALADDRESS *)a1;
    if ( a1 >= MmUserProbeAddress )
      v11 = (D3DDDI_RESERVEGPUVIRTUALADDRESS *)MmUserProbeAddress;
    v58 = *v11;
  }
  else
  {
    v10 = (D3DDDI_RESERVEGPUVIRTUALADDRESS *)a1;
    v53 = (D3DDDI_RESERVEGPUVIRTUALADDRESS *)a1;
  }
  if ( v10->ReservationType > D3DDDIGPUVIRTUALADDRESS_RESERVE_ZERO )
  {
    v33 = WdLogNewEntry5_WdWarning(v7, v6, v8);
    *(_QWORD *)(v33 + 24) = -1073741811LL;
    *(_QWORD *)(v33 + 32) = 12407LL;
    WdLogEvent5_WdWarning(v33);
    goto LABEL_34;
  }
  v50 = 0LL;
  DXGPAGINGQUEUEBYHANDLE::DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v49, v10->hPagingQueue, Current, &v50, 0);
  v51 = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v52, v10->hPagingQueue, Current, &v51, 0);
  v15 = v50;
  v16 = v51;
  if ( v50 )
  {
    v16 = *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v50 + 2) + 16LL) + 16LL);
    v4 = *((_QWORD *)v50 + 4);
    goto LABEL_11;
  }
  if ( !v51 )
  {
    v34 = WdLogNewEntry5_WdWarning(v13, v12, v14);
    *(_QWORD *)(v34 + 24) = v10->hPagingQueue;
    *(_QWORD *)(v34 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v34);
    if ( v52 )
      DXGADAPTER::ReleaseReference(v52);
    DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v49);
    goto LABEL_34;
  }
LABEL_11:
  v17 = 0LL;
  v50 = 0LL;
  if ( *((_QWORD *)v16 + 316) )
    goto LABEL_12;
  PairingAdapters = DxgkpGetPairingAdapters(v16, 0, &v50, &v54, 0LL, 0LL);
  if ( PairingAdapters >= 0 )
  {
    v16 = v50;
    v17 = v50;
LABEL_12:
    v51 = (struct DXGADAPTER *)*((_QWORD *)v16 + 316);
    v54 = (unsigned __int64)v51;
    if ( *((_BYTE *)v16 + 185) )
    {
      if ( v15 )
        v43 = *((_DWORD *)v15 + 7);
      else
        v43 = *((_DWORD *)v16 + 1054);
      HostProcess = DXGPROCESS::GetHostProcess((DXGPROCESS *)Current);
      v20 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendReserveGpuVirtualAddress(
              (struct DXGADAPTER *)((char *)v16 + 4152),
              HostProcess,
              v43,
              v10);
    }
    else
    {
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v57, v16, 0LL);
      v20 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v57);
      if ( v20 < 0 )
      {
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v57);
LABEL_24:
        if ( v17 )
          DXGADAPTER::ReleaseReference(v17);
        if ( v52 )
          DXGADAPTER::ReleaseReference(v52);
        DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v49);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v46);
        if ( v48 )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            McTemplateK0q(v26, &EventProfilerExit, v27, v46);
        }
        return (unsigned int)v20;
      }
      Reserved0 = v10->Reserved0;
      if ( Reserved0 > 1 )
      {
        v42 = WdLogNewEntry5_WdWarning(v19, v18, v21);
LABEL_53:
        *(_QWORD *)(v42 + 24) = -1073741811LL;
        WdLogEvent5_WdWarning(v42);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v57);
        if ( v17 )
          DXGADAPTER::ReleaseReference(v17);
        if ( v52 )
          DXGADAPTER::ReleaseReference(v52);
        DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v49);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v46);
        v32 = v48 == 0;
        goto LABEL_58;
      }
      if ( Reserved0 == 1 && !v4 )
      {
        v42 = WdLogNewEntry5_WdWarning(v19, v18, v21);
        *(_QWORD *)(v42 + 32) = 12470LL;
        goto LABEL_53;
      }
      v20 = (*(__int64 (__fastcall **)(_QWORD, struct _KTHREAD **, __int64, D3DDDI_RESERVEGPUVIRTUALADDRESS *))(*(_QWORD *)(*((_QWORD *)v51 + 68) + 8LL) + 784LL))(
              *((_QWORD *)v51 + 69),
              Current,
              v4,
              v10);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v57);
    }
    if ( v20 >= 0 && v45 )
    {
      v23 = v55;
      v24 = (_QWORD *)(v55 + 56);
      if ( v55 + 56 >= MmUserProbeAddress )
        v24 = (_QWORD *)MmUserProbeAddress;
      *v24 = v10->VirtualAddress;
      v25 = (_QWORD *)(v23 + 64);
      if ( v23 + 64 >= MmUserProbeAddress )
        v25 = (_QWORD *)MmUserProbeAddress;
      *v25 = v10->PagingFenceValue;
    }
    goto LABEL_24;
  }
  v39 = WdLogNewEntry5_WdWarning(v36, v35, v38);
  *(_QWORD *)(v39 + 24) = v16;
  WdLogEvent5_WdWarning(v39);
  if ( v52 )
    DXGADAPTER::ReleaseReference(v52);
  DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v49);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v46);
  if ( v48 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v40, &EventProfilerExit, v41, v46);
  return (unsigned int)PairingAdapters;
}
