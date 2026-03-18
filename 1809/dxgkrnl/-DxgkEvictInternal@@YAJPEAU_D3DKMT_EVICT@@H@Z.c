/*
 * XREFs of ?DxgkEvictInternal@@YAJPEAU_D3DKMT_EVICT@@H@Z @ 0x1C00F4BC8
 * Callers:
 *     DxgkEvict @ 0x1C00F55A0 (DxgkEvict.c)
 *     ?DxgkCddEvict@@YAJIEPEAU_D3DKMT_EVICT@@@Z @ 0x1C0123460 (-DxgkCddEvict@@YAJIEPEAU_D3DKMT_EVICT@@@Z.c)
 *     ?VmBusEvict@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01EF1B0 (-VmBusEvict@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000D500 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00101B4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0010A14 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?GetAllocationUnsafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0010C44 (-GetAllocationUnsafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0010E18 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C00119E0 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0011C84 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1DXGHANDLETABLELOCKSHARED@@QEAA@XZ @ 0x1C00123E8 (--1DXGHANDLETABLELOCKSHARED@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0012428 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C00AC058 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EF4FC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?Evict@DXGDEVICE@@QEAAJPEAVDXGALLOCATIONREFERENCE@@IUD3DDDI_EVICT_FLAGS@@PEA_K@Z @ 0x1C00F5404 (-Evict@DXGDEVICE@@QEAAJPEAVDXGALLOCATIONREFERENCE@@IUD3DDDI_EVICT_FLAGS@@PEA_K@Z.c)
 *     ??1?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAA@XZ @ 0x1C00F54D4 (--1-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAA@XZ.c)
 *     ??0?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAA@XZ @ 0x1C00F5560 (--0-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0106DA0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?VmBusSendEvict@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIUD3DDDI_EVICT_FLAGS@@IPEBVDXGALLOCATIONREFERENCE@@PEA_K@Z @ 0x1C01F45F4 (-VmBusSendEvict@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIUD3DDDI_EVICT_FLAGS@@IPEBVDXGALLOCATIONREFERE.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C0229704 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

__int64 __fastcall DxgkEvictInternal(struct _D3DKMT_EVICT *a1, int a2, const GUID *a3)
{
  ULONG64 v5; // rcx
  DXGPROCESS *Current; // r13
  __int64 v7; // rax
  struct _D3DKMT_EVICT *v8; // rax
  struct _D3DKMT_EVICT *v9; // r14
  struct DXGALLOCATION **v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  DXGDEVICE *v14; // r13
  __int64 v15; // rax
  __int64 v16; // r9
  __int64 v17; // rcx
  int v18; // ebx
  __int64 v19; // rcx
  const GUID *v20; // r8
  __int64 NumAllocations; // rdx
  unsigned int *AllocationList; // rbx
  unsigned int *v24; // r8
  __int64 v25; // rax
  __int64 v26; // rcx
  const GUID *v27; // r8
  unsigned __int64 v28; // rax
  __int64 v29; // rax
  unsigned int *v30; // rax
  unsigned int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rax
  __int64 v36; // rdi
  unsigned int v37; // r8d
  __int64 v38; // rbx
  unsigned int v39; // edi
  unsigned int HostProcess; // eax
  _QWORD *p_NumBytesToTrim; // rdx
  __int64 v42; // rcx
  const GUID *v43; // r8
  char v44; // [rsp+40h] [rbp-1F8h]
  struct DXGDEVICE *v45; // [rsp+48h] [rbp-1F0h] BYREF
  int v46; // [rsp+50h] [rbp-1E8h] BYREF
  __int64 v47; // [rsp+58h] [rbp-1E0h]
  char v48; // [rsp+60h] [rbp-1D8h]
  struct _D3DKMT_EVICT *v49; // [rsp+68h] [rbp-1D0h]
  struct DXGALLOCATION *v50; // [rsp+70h] [rbp-1C8h] BYREF
  unsigned int *v51; // [rsp+78h] [rbp-1C0h]
  int v52; // [rsp+80h] [rbp-1B8h]
  unsigned __int64 v53; // [rsp+88h] [rbp-1B0h] BYREF
  unsigned int v54; // [rsp+90h] [rbp-1A8h]
  int v55; // [rsp+94h] [rbp-1A4h]
  DXGDEVICE *v56; // [rsp+98h] [rbp-1A0h] BYREF
  unsigned int v57[2]; // [rsp+A0h] [rbp-198h]
  struct _D3DKMT_EVICT *v58; // [rsp+A8h] [rbp-190h]
  struct D3DDDI_EVICT_FLAGS *v59; // [rsp+B0h] [rbp-188h]
  __int64 v60; // [rsp+B8h] [rbp-180h]
  _BYTE v61[16]; // [rsp+C0h] [rbp-178h] BYREF
  unsigned int *v62; // [rsp+D0h] [rbp-168h]
  DXGPROCESS *v63; // [rsp+D8h] [rbp-160h]
  unsigned int *v64; // [rsp+E0h] [rbp-158h]
  _BYTE v65[24]; // [rsp+E8h] [rbp-150h] BYREF
  _OWORD v66[2]; // [rsp+100h] [rbp-138h] BYREF
  _BYTE v67[96]; // [rsp+120h] [rbp-118h] BYREF
  _BYTE *v68; // [rsp+180h] [rbp-B8h] BYREF
  _BYTE v69[128]; // [rsp+188h] [rbp-B0h] BYREF
  int v70; // [rsp+208h] [rbp-30h]

  v52 = a2;
  v49 = a1;
  v46 = -1;
  v47 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v48 = 1;
    v46 = 2116;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2116);
  }
  else
  {
    v48 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v46, 2116);
  Current = DXGPROCESS::GetCurrent();
  v63 = Current;
  if ( !Current )
    goto LABEL_6;
  if ( a2 )
  {
    v5 = MmUserProbeAddress;
    v8 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v8 = (struct _D3DKMT_EVICT *)MmUserProbeAddress;
    v66[0] = *(_OWORD *)&v8->hDevice;
    v66[1] = *(_OWORD *)&v8->Flags.0;
    v9 = (struct _D3DKMT_EVICT *)v66;
    v58 = (struct _D3DKMT_EVICT *)v66;
  }
  else
  {
    v9 = a1;
    v58 = a1;
  }
  v59 = (struct D3DDDI_EVICT_FLAGS *)v9;
  if ( !v9->NumAllocations )
  {
LABEL_6:
    v7 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v7 + 24) = -1073741811LL;
LABEL_7:
    WdLogEvent5_WdError(v7);
LABEL_35:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v46);
    if ( v48 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v26, &EventProfilerExit, v27, v46);
    }
    return 3221225485LL;
  }
  if ( !v9->AllocationList )
  {
    v7 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v7 + 24) = 777LL;
    goto LABEL_7;
  }
  if ( v9->Flags.Value >= 4 )
  {
    v7 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v7 + 24) = 784LL;
    goto LABEL_7;
  }
  PagedPoolArray<DXGALLOCATIONREFERENCE,16>::PagedPoolArray<DXGALLOCATIONREFERENCE,16>(&v68);
  v68 = v69;
  v70 = 16;
  v10 = (struct DXGALLOCATION **)v69;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v45, v9->hDevice, (struct _KTHREAD **)Current, &v56);
  v14 = v56;
  if ( !v56 )
  {
    v15 = WdLogNewEntry5_WdWarning(v12, v11, v13);
    *(_QWORD *)(v15 + 24) = v9->hDevice;
    WdLogEvent5_WdWarning(v15);
LABEL_31:
    if ( v45 && _InterlockedExchangeAdd64((volatile signed __int64 *)v45 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v45 + 2), v45);
    PagedPoolArray<DXGALLOCATIONREFERENCE,16>::~PagedPoolArray<DXGALLOCATIONREFERENCE,16>(&v68);
    goto LABEL_35;
  }
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
    (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v61,
    v56);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v67, (__int64)v14, 0, v16, 0);
  v18 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v67);
  if ( v18 >= 0 )
  {
    NumAllocations = v9->NumAllocations;
    v60 = NumAllocations;
    AllocationList = (unsigned int *)v9->AllocationList;
    v51 = AllocationList;
    v24 = &AllocationList[NumAllocations];
    v64 = v24;
    if ( v24 < AllocationList )
    {
      v25 = WdLogNewEntry5_WdWarning(v17, NumAllocations, v24);
      *(_QWORD *)(v25 + 24) = v9->NumAllocations;
      WdLogEvent5_WdWarning(v25);
LABEL_30:
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v67);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v61);
      goto LABEL_31;
    }
    v44 = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v14 + 2) + 16LL) + 185LL);
    v28 = 0LL;
    v53 = 0LL;
    while ( AllocationList != v24 )
    {
      v29 = 16LL;
      if ( (unsigned int)NumAllocations < 0x10 )
        v29 = (unsigned int)NumAllocations;
      v55 = v29;
      v62 = &AllocationList[v29];
      *(_QWORD *)v57 = DXGPROCESS::GetCurrent();
      DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v65, *(struct _KTHREAD ***)v57);
      while ( AllocationList != v62 )
      {
        if ( v52 )
        {
          v30 = AllocationList;
          if ( (unsigned __int64)AllocationList >= MmUserProbeAddress )
            v30 = (unsigned int *)MmUserProbeAddress;
          v31 = *v30;
          LODWORD(v51) = v31;
          v54 = v31;
          v9 = v58;
          v14 = v56;
        }
        else
        {
          v31 = *AllocationList;
          LODWORD(v51) = v31;
          v54 = v31;
        }
        DXGPROCESS::GetAllocationUnsafe(*(__int64 *)v57, (DXGALLOCATIONREFERENCE *)&v50, v31);
        if ( !v50 )
        {
          v35 = WdLogNewEntry5_WdWarning(v33, v32, v34);
          *(_QWORD *)(v35 + 24) = (unsigned int)v51;
LABEL_54:
          WdLogEvent5_WdWarning(v35);
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v50);
          DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v65);
          (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v14 + 2) + 520LL) + 8LL) + 208LL))(
            *((_QWORD *)v14 + 82),
            11LL);
          goto LABEL_30;
        }
        if ( *((DXGDEVICE **)v50 + 1) != v14 )
        {
          v35 = WdLogNewEntry5_WdWarning(v33, v32, v34);
          *(_QWORD *)(v35 + 24) = v14;
          *(_QWORD *)(v35 + 32) = *((_QWORD *)v50 + 1);
          goto LABEL_54;
        }
        DXGALLOCATIONREFERENCE::MoveAssign(v10++, &v50);
        v51 = ++AllocationList;
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v50);
      }
      v36 = ((char *)v10 - v69) >> 3;
      *(_QWORD *)v57 = v36;
      if ( v44 )
      {
        v38 = *(_QWORD *)(*((_QWORD *)v14 + 2) + 16LL);
        v39 = *((_DWORD *)v14 + 84);
        HostProcess = DXGPROCESS::GetHostProcess(v63);
        DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendEvict(
          (DXG_GUEST_VIRTUALGPU_VMBUS *)(v38 + 4152),
          HostProcess,
          v39,
          v59[4],
          v57[0],
          (const struct DXGALLOCATIONREFERENCE *)v69,
          &v53);
        AllocationList = v51;
        v10 = (struct DXGALLOCATION **)v69;
      }
      else
      {
        v37 = v36;
        v10 = (struct DXGALLOCATION **)v69;
        DXGDEVICE::Evict(v14, (struct DXGALLOCATIONREFERENCE *)v69, v37, v59[4], &v53);
      }
      DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v65);
      LODWORD(NumAllocations) = v60 - v55;
      v60 = (unsigned int)(v60 - v55);
      v28 = v53;
      v24 = v64;
    }
    if ( v52 )
    {
      p_NumBytesToTrim = &v49->NumBytesToTrim;
      if ( (unsigned __int64)&v49->NumBytesToTrim >= MmUserProbeAddress )
        p_NumBytesToTrim = (_QWORD *)MmUserProbeAddress;
      *p_NumBytesToTrim = v53;
    }
    else
    {
      v9->NumBytesToTrim = v28;
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v67);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v61);
    if ( v45 && _InterlockedExchangeAdd64((volatile signed __int64 *)v45 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v45 + 2), v45);
    PagedPoolArray<DXGALLOCATIONREFERENCE,16>::~PagedPoolArray<DXGALLOCATIONREFERENCE,16>(&v68);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v46);
    if ( v48 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v42, &EventProfilerExit, v43, v46);
    return 0LL;
  }
  else
  {
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v67);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v61);
    if ( v45 && !_InterlockedDecrement64((volatile signed __int64 *)v45 + 8) )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v45 + 2), v45);
    PagedPoolArray<DXGALLOCATIONREFERENCE,16>::~PagedPoolArray<DXGALLOCATIONREFERENCE,16>(&v68);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v46);
    if ( v48 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v19, &EventProfilerExit, v20, v46);
    return (unsigned int)v18;
  }
}
