/*
 * XREFs of DxgkFreeGpuVirtualAddress @ 0x1C01306E0
 * Callers:
 *     ?VmBusFreeGpuVirtualAddress@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01EFA10 (-VmBusFreeGpuVirtualAddress@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
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
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C0112E10 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 *     ?VmBusSendFreeGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJII_K0@Z @ 0x1C01F4850 (-VmBusSendFreeGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJII_K0@Z.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C0229704 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

__int64 __fastcall DxgkFreeGpuVirtualAddress(__int64 a1, __int64 a2, const GUID *a3)
{
  ULONG64 v3; // rbx
  bool v4; // di
  __int64 v5; // rcx
  struct _KTHREAD **Current; // r12
  unsigned int *v7; // r15
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  struct DXGADAPTER *v11; // rdi
  DXGADAPTER *v12; // r14
  int PairingAdapters; // ebx
  int v14; // eax
  __int64 v15; // rcx
  const GUID *v16; // r8
  __int64 v18; // rax
  _QWORD *v19; // rax
  __int64 v20; // rcx
  const GUID *v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rax
  unsigned int v26; // ebx
  unsigned int HostProcess; // eax
  int v28; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v29; // [rsp+38h] [rbp-C0h]
  char v30; // [rsp+40h] [rbp-B8h]
  struct DXGADAPTER *v31; // [rsp+48h] [rbp-B0h] BYREF
  DXGADAPTER *v32; // [rsp+50h] [rbp-A8h] BYREF
  unsigned __int64 v33; // [rsp+60h] [rbp-98h] BYREF
  _BYTE v34[80]; // [rsp+70h] [rbp-88h] BYREF
  __int128 v35; // [rsp+C0h] [rbp-38h] BYREF
  __int64 v36; // [rsp+D0h] [rbp-28h]

  v3 = a1;
  v28 = -1;
  v29 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v30 = 1;
    v28 = 2099;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2099);
  }
  else
  {
    v30 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v28, 2099);
  v4 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  if ( Current )
  {
    if ( v4 )
    {
      v7 = (unsigned int *)&v35;
      if ( v3 >= MmUserProbeAddress )
        v3 = MmUserProbeAddress;
      v35 = *(_OWORD *)v3;
      v36 = *(_QWORD *)(v3 + 16);
    }
    else
    {
      v7 = (unsigned int *)v3;
    }
    DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v32, *v7, Current, &v31, 1);
    v11 = v31;
    if ( v31 )
    {
      v12 = 0LL;
      if ( !*((_QWORD *)v31 + 316) )
      {
        PairingAdapters = DxgkpGetPairingAdapters(v31, 0, &v31, &v33, 0LL, 0LL);
        if ( PairingAdapters < 0 )
        {
          v25 = WdLogNewEntry5_WdWarning(v23, v22, v24);
          *(_QWORD *)(v25 + 24) = v31;
          WdLogEvent5_WdWarning(v25);
LABEL_16:
          if ( v32 )
            DXGADAPTER::ReleaseReference(v32);
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
          if ( v30 )
          {
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
              McTemplateK0q(v15, &EventProfilerExit, v16, v28);
          }
          return (unsigned int)PairingAdapters;
        }
        v11 = v31;
        v12 = v31;
      }
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v34, v11, 0LL);
      PairingAdapters = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v34);
      if ( PairingAdapters >= 0 )
      {
        if ( *((_BYTE *)v11 + 185) )
        {
          v26 = *((_DWORD *)v11 + 1054);
          HostProcess = DXGPROCESS::GetHostProcess((DXGPROCESS *)Current);
          v14 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendFreeGpuVirtualAddress(
                  (struct DXGADAPTER *)((char *)v11 + 4152),
                  HostProcess,
                  v26,
                  *((_QWORD *)v7 + 1),
                  *((_QWORD *)v7 + 2));
        }
        else
        {
          v14 = (*(__int64 (__fastcall **)(_QWORD, struct _KTHREAD **, unsigned int *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v11 + 316) + 544LL)
                                                                                                  + 8LL)
                                                                                      + 800LL))(
                  *(_QWORD *)(*((_QWORD *)v11 + 316) + 552LL),
                  Current,
                  v7);
        }
        PairingAdapters = v14;
      }
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v34);
      if ( v12 )
        DXGADAPTER::ReleaseReference(v12);
      goto LABEL_16;
    }
    v19 = (_QWORD *)WdLogNewEntry5_WdWarning(v9, v8, v10);
    v19[3] = -1073741811LL;
    v19[4] = Current;
    v19[5] = *v7;
    WdLogEvent5_WdWarning(v19);
    if ( v32 )
      DXGADAPTER::ReleaseReference(v32);
  }
  else
  {
    v18 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v18 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v18);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
  if ( v30 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v20, &EventProfilerExit, v21, v28);
  return 3221225485LL;
}
