/*
 * XREFs of DxgkSetContextSchedulingPriority @ 0x1C011E3C0
 * Callers:
 *     ?VmBusSetContextSchedulingPriority@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01F8680 (-VmBusSetContextSchedulingPriority@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000D500 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00100A8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0010E18 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0011BD4 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0011C44 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0011C84 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0011FEC (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0012E54 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?SetSchedulingPriority@DXGCONTEXT@@QEAAXH_N@Z @ 0x1C011CEF0 (-SetSchedulingPriority@DXGCONTEXT@@QEAAXH_N@Z.c)
 *     ?VmBusSendSetContextSchedulingPriority@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@PEBU_D3DKMT_SETCONTEXTSCHEDULINGPRIORITY@@@Z @ 0x1C01F6140 (-VmBusSendSetContextSchedulingPriority@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGC.c)
 */

__int64 __fastcall DxgkSetContextSchedulingPriority(__int64 a1, __int64 a2, const GUID *a3)
{
  _D3DKMT_SETCONTEXTSCHEDULINGPRIORITY *v3; // rbx
  bool v4; // si
  __int64 v5; // rcx
  struct _KTHREAD **Current; // r14
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  DXGCONTEXT *v10; // rsi
  char v11; // r12
  unsigned int v12; // r14d
  INT Priority; // ebx
  __int64 v14; // r9
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r15
  __int64 v20; // rbx
  __int64 v21; // rcx
  const GUID *v22; // r8
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rcx
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rax
  __int64 v35; // rcx
  const GUID *v36; // r8
  __int64 v37; // rax
  int v38; // eax
  int v39; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v40; // [rsp+38h] [rbp-C0h]
  char v41; // [rsp+40h] [rbp-B8h]
  _BYTE v42[16]; // [rsp+48h] [rbp-B0h] BYREF
  _QWORD v43[3]; // [rsp+58h] [rbp-A0h] BYREF
  _BYTE v44[136]; // [rsp+70h] [rbp-88h] BYREF
  _D3DKMT_SETCONTEXTSCHEDULINGPRIORITY v45; // [rsp+108h] [rbp+10h] BYREF
  DXGCONTEXT *v46; // [rsp+110h] [rbp+18h] BYREF

  v3 = (_D3DKMT_SETCONTEXTSCHEDULINGPRIORITY *)a1;
  v39 = -1;
  v40 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v41 = 1;
    v39 = 2029;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2029);
  }
  else
  {
    v41 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v39, 2029);
  v4 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v24 = WdLogNewEntry5_WdError(v5);
    LODWORD(v20) = -1073741811;
    *(_QWORD *)(v24 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v24);
    goto LABEL_20;
  }
  if ( v4 )
  {
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v3 = (_D3DKMT_SETCONTEXTSCHEDULINGPRIORITY *)MmUserProbeAddress;
    v45 = *v3;
    LODWORD(v3) = v45.hContext;
  }
  else
  {
    v3 = (_D3DKMT_SETCONTEXTSCHEDULINGPRIORITY *)*v3;
    v45 = (_D3DKMT_SETCONTEXTSCHEDULINGPRIORITY)v3;
  }
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v42, (unsigned int)v3, Current, &v46, 0);
  v10 = v46;
  if ( !v46 )
  {
    v25 = WdLogNewEntry5_WdWarning(v8, v7, v9);
    v26 = (unsigned int)v3;
    goto LABEL_32;
  }
  if ( *((_BYTE *)v46 + 433) )
  {
    v27 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSetContextSchedulingPriority(
            (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v46 + 2) + 16LL) + 16LL) + 4152LL),
            (struct DXGPROCESS *)Current,
            v46,
            &v45);
    v20 = v27;
    if ( v27 < 0 )
    {
      v25 = WdLogNewEntry5_WdWarning(v29, v28, v30);
LABEL_30:
      *(_QWORD *)(v25 + 24) = v20;
LABEL_33:
      WdLogEvent5_WdWarning(v25);
LABEL_19:
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v42);
LABEL_20:
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39);
      if ( v41 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q(v21, &EventProfilerExit, v22, v39);
      }
      return (unsigned int)v20;
    }
  }
  v11 = 0;
  v12 = 0;
  Priority = v45.Priority;
  if ( v45.Priority >= 0 && (v45.Priority & 0x40000000) != 0 )
  {
    if ( !DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v10 + 2) + 16LL) + 16LL)) )
    {
      v25 = WdLogNewEntry5_WdWarning(v32, v31, v33);
      v20 = -1073741637LL;
      goto LABEL_30;
    }
    if ( (Priority & 0x3FFFFFE0) != 0 )
    {
      v25 = WdLogNewEntry5_WdWarning(v32, v31, v33);
      v20 = -1073741811LL;
      goto LABEL_30;
    }
    v12 = Priority & 0x1F;
    if ( v12 <= 0x1E )
    {
      v11 = 1;
      goto LABEL_13;
    }
    v25 = WdLogNewEntry5_WdWarning(v32, v31, v33);
    v26 = Priority & 0x1F;
LABEL_32:
    LODWORD(v20) = -1073741811;
    *(_QWORD *)(v25 + 24) = v26;
    *(_QWORD *)(v25 + 32) = -1073741811LL;
    goto LABEL_33;
  }
LABEL_13:
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
    (DXGDEVICEACCESSLOCKEXCLUSIVE *)v43,
    *((struct DXGDEVICE **)v10 + 2));
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v44, *((_QWORD *)v10 + 2), 0, v14, 0);
  v15 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v44);
  v19 = v15;
  if ( v15 >= 0 )
  {
    if ( v11 )
    {
      v37 = *((_QWORD *)v10 + 2);
      if ( (*((_DWORD *)v10 + 99) & 0x10) != 0 )
        v38 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v37 + 16) + 520LL)
                                                                            + 8LL)
                                                                + 976LL))(
                *((_QWORD *)v10 + 35),
                v12,
                0LL);
      else
        v38 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v37 + 16) + 520LL)
                                                                            + 8LL)
                                                                + 968LL))(
                *((_QWORD *)v10 + 32),
                v12,
                0LL);
      LODWORD(v20) = v38;
    }
    else if ( (unsigned int)(Priority + 7) > 0xE )
    {
      LODWORD(v20) = -1073741811;
    }
    else
    {
      DXGCONTEXT::SetSchedulingPriority(v10, Priority + *((_DWORD *)v10 + 104), 1u);
      *((_DWORD *)v10 + 105) = Priority;
      LODWORD(v20) = 0;
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v44);
    if ( v43[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v43);
    goto LABEL_19;
  }
  v34 = WdLogNewEntry5_WdWarning(v17, v16, v18);
  *(_QWORD *)(v34 + 24) = *((_QWORD *)v10 + 2);
  *(_QWORD *)(v34 + 32) = v19;
  WdLogEvent5_WdWarning(v34);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v44);
  if ( v43[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v43);
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v42);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39);
  if ( v41 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v35, &EventProfilerExit, v36, v39);
  return (unsigned int)v19;
}
