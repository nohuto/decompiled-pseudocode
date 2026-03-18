/*
 * XREFs of DxgkUpdateAllocationProperty @ 0x1C0255C60
 * Callers:
 *     ?VmBusUpdateAllocationProperty@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C022A2D0 (-VmBusUpdateAllocationProperty@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0006C3C (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C0006D60 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0006E84 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0007150 (-AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C000C1C0 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000CB44 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Open@DXGPAGINGQUEUEBYHANDLE@@QEAAXIPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@_N@Z @ 0x1C001D630 (-Open@DXGPAGINGQUEUEBYHANDLE@@QEAAXIPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@_N@Z.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     ?ReleaseReference@DXGPAGINGQUEUE@@QEAAXXZ @ 0x1C0023F34 (-ReleaseReference@DXGPAGINGQUEUE@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0107250 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?DdiValidateUpdateAllocationProperty@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_VALIDATEUPDATEALLOCPROPERTY@@@Z @ 0x1C01FFAB0 (-DdiValidateUpdateAllocationProperty@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_VALIDATEUPDATEALLOCPROPER.c)
 *     ?VmBusSendUpdateAllocationProperty@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEBVDXGPROCESS@@PEBVDXGPAGINGQUEUE@@PEBVDXGALLOCATION@@PEAUD3DDDI_UPDATEALLOCPROPERTY@@@Z @ 0x1C0227C70 (-VmBusSendUpdateAllocationProperty@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEBVDXGPROCESS@@PEBVDXGPAGIN.c)
 */

__int64 __fastcall DxgkUpdateAllocationProperty(ULONG64 a1, __int64 a2, const GUID *a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  ULONG64 v7; // rcx
  __int64 v8; // r8
  struct _KTHREAD **Current; // r14
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  const GUID *v13; // r8
  D3DDDI_UPDATEALLOCPROPERTY *v15; // rdi
  D3DDDI_UPDATEALLOCPROPERTY *v16; // rax
  unsigned int PropertyMaskValue; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  struct DXGPAGINGQUEUE *v21; // r13
  __int64 v22; // rax
  __int64 v23; // rsi
  __int64 v24; // r9
  int v25; // r12d
  __int64 v26; // rdx
  __int64 v27; // rcx
  const GUID *v28; // r8
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rax
  __int64 v33; // rdx
  ADAPTER_RENDER *v34; // r9
  __int64 v35; // r8
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rdi
  __int64 v40; // rdx
  __int64 v41; // rdx
  __int64 v42; // rcx
  const GUID *v43; // r8
  int updated; // eax
  ULONG64 v45; // rdx
  __int64 v46; // r12
  __int64 v47; // rax
  __int64 v48; // rdx
  int v49; // eax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r14
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rdx
  __int64 v57; // rcx
  const GUID *v58; // r8
  unsigned int v59; // esi
  _QWORD *v60; // r8
  __int64 v61; // rdx
  __int64 v62; // rcx
  const GUID *v63; // r8
  bool v64; // [rsp+30h] [rbp-168h]
  int v65; // [rsp+38h] [rbp-160h] BYREF
  __int64 v66; // [rsp+40h] [rbp-158h]
  char v67; // [rsp+48h] [rbp-150h]
  struct DXGALLOCATION *v68; // [rsp+50h] [rbp-148h] BYREF
  DXGPAGINGQUEUE *v69; // [rsp+58h] [rbp-140h] BYREF
  _BYTE v70[16]; // [rsp+60h] [rbp-138h] BYREF
  struct DXGPAGINGQUEUE *v71; // [rsp+70h] [rbp-128h] BYREF
  _DXGKARG_VALIDATEUPDATEALLOCPROPERTY v72; // [rsp+78h] [rbp-120h] BYREF
  __int64 v73; // [rsp+90h] [rbp-108h]
  _DWORD v74[4]; // [rsp+98h] [rbp-100h] BYREF
  D3DDDI_UPDATEALLOCPROPERTY v75; // [rsp+A8h] [rbp-F0h] BYREF
  _BYTE v76[160]; // [rsp+D0h] [rbp-C8h] BYREF

  v65 = -1;
  v66 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v67 = 1;
    v65 = 2132;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2132);
  }
  else
  {
    v67 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v65, 2132LL);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v5, v4);
  if ( !Current )
    goto LABEL_6;
  v64 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  memset(&v75, 0, sizeof(v75));
  v15 = &v75;
  if ( v64 )
  {
    v7 = MmUserProbeAddress;
    v16 = (D3DDDI_UPDATEALLOCPROPERTY *)a1;
    if ( a1 >= MmUserProbeAddress )
      v16 = (D3DDDI_UPDATEALLOCPROPERTY *)MmUserProbeAddress;
    v75 = *v16;
  }
  else
  {
    v15 = (D3DDDI_UPDATEALLOCPROPERTY *)a1;
  }
  PropertyMaskValue = v15->PropertyMaskValue;
  if ( PropertyMaskValue >= 8 || !PropertyMaskValue )
  {
LABEL_6:
    v10 = WdLogNewEntry5_WdError(v7, v6, v8);
    *(_QWORD *)(v10 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v10);
LABEL_7:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v65, v11);
    if ( v67 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v12, &EventProfilerExit, v13, v65);
    }
    return 3221225485LL;
  }
  v71 = 0LL;
  DXGPAGINGQUEUEBYHANDLE::Open((DXGPAGINGQUEUEBYHANDLE *)&v69, v15->hPagingQueue, Current, &v71, 1);
  v21 = v71;
  if ( !v71 )
  {
    v22 = WdLogNewEntry5_WdError(v19, v18, v20);
    *(_QWORD *)(v22 + 24) = v15->hPagingQueue;
    *(_QWORD *)(v22 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v22);
    goto LABEL_20;
  }
  v23 = *((_QWORD *)v71 + 2);
  v73 = v23;
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
    (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v70,
    (struct DXGDEVICE *)v23);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v76, v23, 0, v24, 0);
  v25 = COREDEVICEACCESS::AcquireShared((__int64)v76, 0xFFFFFFFF, 0LL);
  if ( v25 < 0 )
  {
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v76);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v70);
    if ( v69 )
      DXGPAGINGQUEUE::ReleaseReference(v69, v26);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v65, v26);
    if ( v67 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v27, &EventProfilerExit, v28, v65);
    return (unsigned int)v25;
  }
  DXGPROCESS::GetAllocationSafe((__int64)Current, (DXGALLOCATIONREFERENCE *)&v68, v15->hAllocation);
  if ( !v68 )
  {
    v32 = WdLogNewEntry5_WdError(v30, v29, v31);
    *(_QWORD *)(v32 + 24) = v15->hAllocation;
LABEL_31:
    WdLogEvent5_WdError(v32);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v68, v33);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v76);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v70);
LABEL_20:
    if ( v69 )
      DXGPAGINGQUEUE::ReleaseReference(v69, v11);
    goto LABEL_7;
  }
  if ( *((_QWORD *)v68 + 1) != v23 )
  {
    v32 = WdLogNewEntry5_WdError(v30, v29, v31);
    *(_QWORD *)(v32 + 24) = v23;
    *(_QWORD *)(v32 + 32) = *((_QWORD *)v68 + 1);
    goto LABEL_31;
  }
  v34 = *(ADAPTER_RENDER **)(v23 + 16);
  v35 = *((_QWORD *)v34 + 2);
  v36 = *(_QWORD *)(*(_QWORD *)(v35 + 192) + 64LL);
  v37 = *(_QWORD *)(v36 + 40);
  if ( *(_DWORD *)(v37 + 28) < 0x6002u )
  {
    v38 = WdLogNewEntry5_WdError(v37, v36, v35);
    v39 = -1073741637LL;
    *(_QWORD *)(v38 + 32) = 1105LL;
LABEL_36:
    *(_QWORD *)(v38 + 24) = v39;
    WdLogEvent5_WdError(v38);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v68, v40);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v76);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v70);
    if ( v69 )
      DXGPAGINGQUEUE::ReleaseReference(v69, v41);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v65, v41);
    if ( v67 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v42, &EventProfilerExit, v43, v65);
    return (unsigned int)v39;
  }
  if ( (*(_BYTE *)(v23 + 1749) & 1) != 0 )
  {
    updated = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendUpdateAllocationProperty(
                (struct _KTHREAD **)(v35 + 4144),
                (const struct DXGPROCESS *)Current,
                v21,
                v68,
                v15);
    goto LABEL_58;
  }
  if ( !*(_QWORD *)(v35 + 960) )
  {
    v38 = WdLogNewEntry5_WdError(v37, v36, v35);
    v39 = -1073741822LL;
    *(_QWORD *)(v38 + 32) = 1117LL;
    goto LABEL_36;
  }
  v46 = *((_QWORD *)v68 + 3);
  if ( !v46 )
  {
    v47 = WdLogNewEntry5_WdError(v37, v36, v35);
    *(_QWORD *)(v47 + 24) = v68;
    WdLogEvent5_WdError(v47);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v68, v48);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v76);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v70);
    if ( v69 )
      DXGPAGINGQUEUE::ReleaseReference(v69, v11);
    goto LABEL_7;
  }
  memset(&v72, 0, sizeof(v72));
  v72.hAllocation = (HANDLE)*((_QWORD *)v68 + 4);
  v72.Flags.Value = v15->Flags.Value;
  v72.PreferredSegment.Value = v15->PreferredSegment.Value;
  v72.SupportedSegmentSet = v15->SupportedSegmentSet;
  v72.PropertyMaskValue = v15->PropertyMaskValue;
  v49 = ADAPTER_RENDER::DdiValidateUpdateAllocationProperty(v34, &v72, (const GUID *)v35);
  v53 = v49;
  if ( v49 >= 0 )
  {
    v74[2] = v15->Flags.0;
    v74[1] = v15->PreferredSegment.0;
    v74[0] = v15->SupportedSegmentSet;
    v74[3] = v15->0;
    updated = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _DWORD *, UINT64 *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v23 + 16) + 544LL)
                                                                                                 + 8LL)
                                                                                     + 208LL))(
                *(_QWORD *)(*(_QWORD *)(v23 + 16) + 552LL),
                *((_QWORD *)v21 + 4),
                v46,
                v74,
                &v15->PagingFenceValue);
LABEL_58:
    v59 = updated;
    if ( updated >= 0 && v64 )
    {
      v60 = (_QWORD *)(a1 + 24);
      v45 = MmUserProbeAddress;
      if ( a1 + 24 >= MmUserProbeAddress )
        v60 = (_QWORD *)MmUserProbeAddress;
      *v60 = v15->PagingFenceValue;
    }
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v68, v45);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v76);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v70);
    if ( v69 )
      DXGPAGINGQUEUE::ReleaseReference(v69, v61);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v65, v61);
    if ( v67 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v62, &EventProfilerExit, v63, v65);
    return v59;
  }
  v54 = WdLogNewEntry5_WdError(v51, v50, v52);
  *(_QWORD *)(v54 + 24) = v53;
  WdLogEvent5_WdError(v54);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v68, v55);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v76);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v70);
  if ( v69 )
    DXGPAGINGQUEUE::ReleaseReference(v69, v56);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v65, v56);
  if ( v67 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v57, &EventProfilerExit, v58, v65);
  return (unsigned int)v53;
}
