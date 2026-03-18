/*
 * XREFs of DxgkSetContextSchedulingPriority @ 0x1C0146510
 * Callers:
 *     ?VmBusSetContextSchedulingPriority@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C02287E0 (-VmBusSetContextSchedulingPriority@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0006E84 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0006EC8 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0007150 (-AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C000C654 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000C678 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000CB44 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C000D348 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C000D3B8 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?SetSchedulingPriority@DXGCONTEXT@@QEAAXH_N@Z @ 0x1C011D35C (-SetSchedulingPriority@DXGCONTEXT@@QEAAXH_N@Z.c)
 *     ?VmBusSendSetContextSchedulingPriority@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@PEBU_D3DKMT_SETCONTEXTSCHEDULINGPRIORITY@@@Z @ 0x1C0226170 (-VmBusSendSetContextSchedulingPriority@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGC.c)
 */

__int64 __fastcall DxgkSetContextSchedulingPriority(__int64 a1, __int64 a2, const GUID *a3)
{
  _D3DKMT_SETCONTEXTSCHEDULINGPRIORITY *v3; // rbx
  bool v4; // si
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  struct _KTHREAD **Current; // r14
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  DXGCONTEXT *v14; // rsi
  char v15; // r15
  unsigned int v16; // r14d
  INT Priority; // ebx
  __int64 v18; // r9
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r12
  __int64 v24; // rbx
  __int64 v25; // rdx
  __int64 v26; // rcx
  const GUID *v27; // r8
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rcx
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  const GUID *v42; // r8
  __int64 v43; // rax
  int v44; // eax
  int v45; // [rsp+30h] [rbp-108h] BYREF
  __int64 v46; // [rsp+38h] [rbp-100h]
  char v47; // [rsp+40h] [rbp-F8h]
  _D3DKMT_SETCONTEXTSCHEDULINGPRIORITY v48; // [rsp+48h] [rbp-F0h] BYREF
  _BYTE v49[16]; // [rsp+50h] [rbp-E8h] BYREF
  DXGCONTEXT *v50[2]; // [rsp+60h] [rbp-D8h] BYREF
  _BYTE v51[160]; // [rsp+70h] [rbp-C8h] BYREF

  v3 = (_D3DKMT_SETCONTEXTSCHEDULINGPRIORITY *)a1;
  v45 = -1;
  v46 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v47 = 1;
    v45 = 2029;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2029);
  }
  else
  {
    v47 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v45, 2029LL);
  v4 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v6, v5);
  if ( !Current )
  {
    v29 = WdLogNewEntry5_WdError(v8, v7, v9);
    LODWORD(v24) = -1073741811;
    *(_QWORD *)(v29 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v29);
    goto LABEL_20;
  }
  if ( v4 )
  {
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v3 = (_D3DKMT_SETCONTEXTSCHEDULINGPRIORITY *)MmUserProbeAddress;
    v48 = *v3;
    LODWORD(v3) = v48.hContext;
  }
  else
  {
    v3 = (_D3DKMT_SETCONTEXTSCHEDULINGPRIORITY *)*v3;
    v48 = (_D3DKMT_SETCONTEXTSCHEDULINGPRIORITY)v3;
  }
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v49, (unsigned int)v3, Current, v50, 0);
  v14 = v50[0];
  if ( !v50[0] )
  {
    v30 = WdLogNewEntry5_WdWarning(v12, v11, v13);
    v31 = (unsigned int)v3;
    goto LABEL_29;
  }
  if ( *((_BYTE *)v50[0] + 449) )
  {
    v32 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSetContextSchedulingPriority(
            (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v50[0] + 2) + 16LL) + 16LL) + 4144LL),
            (struct DXGPROCESS *)Current,
            v50[0],
            &v48);
    v24 = v32;
    if ( v32 < 0 )
    {
      v30 = WdLogNewEntry5_WdWarning(v34, v33, v35);
LABEL_30:
      *(_QWORD *)(v30 + 24) = v24;
      goto LABEL_31;
    }
  }
  v15 = 0;
  v16 = 0;
  Priority = v48.Priority;
  if ( v48.Priority >= 0 && (v48.Priority & 0x40000000) != 0 )
  {
    if ( !DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v14 + 2) + 16LL) + 16LL)) )
    {
      v30 = WdLogNewEntry5_WdWarning(v37, v36, v38);
      v24 = -1073741637LL;
      goto LABEL_30;
    }
    if ( (Priority & 0x3FFFFFE0) != 0 )
    {
      v30 = WdLogNewEntry5_WdWarning(v37, v36, v38);
      v24 = -1073741811LL;
      goto LABEL_30;
    }
    v16 = Priority & 0x1F;
    if ( v16 <= 0x1E )
    {
      v15 = 1;
      goto LABEL_13;
    }
    v30 = WdLogNewEntry5_WdWarning(v37, v36, v38);
    v31 = Priority & 0x1F;
LABEL_29:
    *(_QWORD *)(v30 + 24) = v31;
    LODWORD(v24) = -1073741811;
    *(_QWORD *)(v30 + 32) = -1073741811LL;
LABEL_31:
    WdLogEvent5_WdWarning(v30);
LABEL_19:
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v49);
LABEL_20:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v45, v25);
    if ( v47 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v26, &EventProfilerExit, v27, v45);
    }
    return (unsigned int)v24;
  }
LABEL_13:
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
    (DXGDEVICEACCESSLOCKEXCLUSIVE *)v50,
    *((struct DXGDEVICE **)v14 + 2));
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v51, *((_QWORD *)v14 + 2), 0, v18, 0);
  v19 = COREDEVICEACCESS::AcquireShared((__int64)v51, 0xFFFFFFFF, 0LL);
  v23 = v19;
  if ( v19 >= 0 )
  {
    if ( v15 )
    {
      v43 = *((_QWORD *)v14 + 2);
      if ( (*((_DWORD *)v14 + 103) & 0x10) != 0 )
        v44 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v43 + 16) + 520LL)
                                                                            + 8LL)
                                                                + 976LL))(
                *((_QWORD *)v14 + 37),
                v16,
                0LL);
      else
        v44 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v43 + 16) + 520LL)
                                                                            + 8LL)
                                                                + 968LL))(
                *((_QWORD *)v14 + 34),
                v16,
                0LL);
      LODWORD(v24) = v44;
    }
    else if ( (unsigned int)(Priority + 7) > 0xE )
    {
      LODWORD(v24) = -1073741811;
    }
    else
    {
      DXGCONTEXT::SetSchedulingPriority(v14, Priority + *((_DWORD *)v14 + 108), 1u);
      *((_DWORD *)v14 + 109) = Priority;
      LODWORD(v24) = 0;
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v51);
    if ( v50[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v50);
    goto LABEL_19;
  }
  v39 = WdLogNewEntry5_WdWarning(v21, v20, v22);
  *(_QWORD *)(v39 + 24) = *((_QWORD *)v14 + 2);
  *(_QWORD *)(v39 + 32) = v23;
  WdLogEvent5_WdWarning(v39);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v51);
  if ( v50[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v50);
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v49);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v45, v40);
  if ( v47 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v41, &EventProfilerExit, v42, v45);
  return (unsigned int)v23;
}
