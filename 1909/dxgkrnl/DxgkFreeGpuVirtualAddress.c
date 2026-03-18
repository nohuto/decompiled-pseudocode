/*
 * XREFs of DxgkFreeGpuVirtualAddress @ 0x1C013FD60
 * Callers:
 *     ?VmBusFreeGpuVirtualAddress@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C021FAE0 (-VmBusFreeGpuVirtualAddress@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ @ 0x1C00041EC (--IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C000BBC0 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C000BE40 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000BE8C (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BF70 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000C0A0 (-AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000C240 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C01061A0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?VmBusSendFreeGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJII_K0@Z @ 0x1C0224BF0 (-VmBusSendFreeGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJII_K0@Z.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C025E8C0 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

__int64 __fastcall DxgkFreeGpuVirtualAddress(__int64 a1, __int64 a2, const GUID *a3)
{
  ULONG64 v3; // rbx
  bool v4; // si
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  struct _KTHREAD **Current; // r15
  unsigned int *v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  struct DXGADAPTER *v15; // rbx
  __int64 v16; // r8
  int v17; // ebx
  struct DXGADAPTER *v18; // r14
  __int64 v19; // rdx
  __int64 v20; // rcx
  const GUID *v21; // r8
  __int64 v23; // rax
  _QWORD *v24; // rax
  struct DXGADAPTER **v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  int PairingAdapters; // r14d
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  const GUID *v33; // r8
  unsigned int v34; // ebx
  unsigned int HostProcess; // eax
  int v36; // [rsp+40h] [rbp-118h] BYREF
  __int64 v37; // [rsp+48h] [rbp-110h]
  char v38; // [rsp+50h] [rbp-108h]
  struct DXGADAPTER *v39; // [rsp+58h] [rbp-100h] BYREF
  unsigned __int64 v40; // [rsp+60h] [rbp-F8h] BYREF
  DXGADAPTER *v41; // [rsp+68h] [rbp-F0h] BYREF
  struct DXGADAPTER *v42; // [rsp+78h] [rbp-E0h] BYREF
  __int128 v43; // [rsp+80h] [rbp-D8h] BYREF
  __int64 v44; // [rsp+90h] [rbp-C8h]
  _BYTE v45[144]; // [rsp+A0h] [rbp-B8h] BYREF

  v3 = a1;
  v36 = -1;
  v37 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v38 = 1;
    v36 = 2099;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2099);
  }
  else
  {
    v38 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v36, 2099LL);
  v4 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v6, v5);
  if ( !Current )
  {
    v23 = WdLogNewEntry5_WdError(v8, v7, v9);
    v17 = -1073741811;
    *(_QWORD *)(v23 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v23);
LABEL_18:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v36, v19);
    if ( v38 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v20, &EventProfilerExit, v21, v36);
    }
    return (unsigned int)v17;
  }
  v43 = 0uLL;
  v44 = 0LL;
  if ( v4 )
  {
    v11 = (unsigned int *)&v43;
    if ( v3 >= MmUserProbeAddress )
      v3 = MmUserProbeAddress;
    v43 = *(_OWORD *)v3;
    v44 = *(_QWORD *)(v3 + 16);
  }
  else
  {
    v11 = (unsigned int *)v3;
  }
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v41, *v11, Current, &v42, 1);
  v15 = v42;
  if ( !v42 )
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdWarning(v13, v12, v14);
    v17 = -1073741811;
    v24[3] = -1073741811LL;
    v24[4] = Current;
    v24[5] = *v11;
    WdLogEvent5_WdWarning(v24);
    goto LABEL_16;
  }
  v39 = 0LL;
  if ( *((_QWORD *)v42 + 320) )
  {
    DXGADAPTER_REFERENCE::Assign(&v39, v42);
LABEL_11:
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v45, v39, 0LL);
    v17 = COREADAPTERACCESS::AcquireShared((__int64)v45, 0xFFFFFFFFLL, v16);
    if ( v17 >= 0 )
    {
      v18 = v39;
      if ( !*((_BYTE *)v39 + 185) )
      {
        v17 = (*(__int64 (__fastcall **)(_QWORD, struct _KTHREAD **, unsigned int *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v39 + 320) + 544LL)
                                                                                                + 8LL)
                                                                                    + 800LL))(
                *(_QWORD *)(*((_QWORD *)v39 + 320) + 552LL),
                Current,
                v11);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v45);
        if ( v39 )
          DXGADAPTER::ReleaseReferenceNoTracking(v39);
        v39 = 0LL;
        goto LABEL_16;
      }
      v34 = *((_DWORD *)v39 + 1052);
      HostProcess = DXGPROCESS::GetHostProcess((DXGPROCESS *)Current);
      v17 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendFreeGpuVirtualAddress(
              (struct DXGADAPTER *)((char *)v18 + 4144),
              HostProcess,
              v34,
              *((_QWORD *)v11 + 1),
              *((_QWORD *)v11 + 2));
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v45);
    DXGADAPTER_REFERENCE::Assign(&v39, 0LL);
LABEL_16:
    if ( v41 )
      DXGADAPTER::ReleaseReferenceNoTracking(v41);
    goto LABEL_18;
  }
  v25 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v39);
  PairingAdapters = DxgkpGetPairingAdapters(v15, 0LL, v25, &v40, 0LL, 0LL, 0);
  if ( PairingAdapters >= 0 )
    goto LABEL_11;
  v30 = WdLogNewEntry5_WdWarning(v27, v26, v28);
  *(_QWORD *)(v30 + 24) = v15;
  WdLogEvent5_WdWarning(v30);
  DXGADAPTER_REFERENCE::Assign(&v39, 0LL);
  if ( v41 )
    DXGADAPTER::ReleaseReferenceNoTracking(v41);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v36, v31);
  if ( v38 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v32, &EventProfilerExit, v33, v36);
  return (unsigned int)PairingAdapters;
}
