/*
 * XREFs of ?CreateVirtualGpu@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@E@Z @ 0x1C0215F30
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0006C3C (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C0006D60 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006DA8 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006E04 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0007150 (-AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007320 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C00088AC (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BD80 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000BEB0 (-AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BFE0 (--1COREACCESS@@QEAA@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C364 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C448 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000C500 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000CB44 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00F0408 (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     DpiKsrIsSoftBoot @ 0x1C015DD88 (DpiKsrIsSoftBoot.c)
 *     ??0DXGK_VIRTUAL_GPU@@QEAA@PEAVADAPTER_RENDER@@E@Z @ 0x1C020DC8C (--0DXGK_VIRTUAL_GPU@@QEAA@PEAVADAPTER_RENDER@@E@Z.c)
 *     ?GetTargetPartitionId@DXGVIRTUALGPUMANAGER@@QEAAJIPEAI@Z @ 0x1C020ECDC (-GetTargetPartitionId@DXGVIRTUALGPUMANAGER@@QEAAJIPEAI@Z.c)
 *     ?DdiCreateVirtualGpu@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@@Z @ 0x1C0210A4C (-DdiCreateVirtualGpu@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@@Z.c)
 *     ?DdiSetVirtualGpuResources@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_SETVIRTUALGPURESOURCES@@@Z @ 0x1C02140F8 (-DdiSetVirtualGpuResources@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_SETVIRTUALGPURESOURCES@@@Z.c)
 *     ?GetVirtualGpuDevice@DXGPROCESS@@QEAAPEAVDXGDEVICE@@PEAVADAPTER_RENDER@@@Z @ 0x1C025E404 (-GetVirtualGpuDevice@DXGPROCESS@@QEAAPEAVDXGDEVICE@@PEAVADAPTER_RENDER@@@Z.c)
 *     DpiKsrGetSavedAdapterState @ 0x1C02A934C (DpiKsrGetSavedAdapterState.c)
 */

__int64 __fastcall DXGVIRTUALGPUMANAGER_GPUP::CreateVirtualGpu(
        DXGVIRTUALGPUMANAGER_GPUP *this,
        struct _DXGKARG_CREATEVIRTUALGPU *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // r13
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // r8
  struct DXGADAPTER *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  struct DXGDEVICE *v14; // r12
  __int64 v15; // rax
  __int64 v16; // r9
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rax
  ULONG PartitionId; // edx
  __int64 v23; // rdi
  DXGK_VIRTUAL_GPU *v24; // rax
  const GUID *v25; // r8
  DXGK_VIRTUAL_GPU *v26; // rsi
  _QWORD *v27; // rcx
  _QWORD *v28; // rax
  __int64 v29; // rdx
  int VirtualGpu; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 NumMemorySegments; // rax
  __int64 v39; // rax
  SIZE_T v40; // rax
  PVOID v41; // rax
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // r9
  void *v45; // rcx
  __int64 v46; // rax
  ULONG v47; // eax
  _DWORD *v48; // r12
  int SavedAdapterState; // eax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // r8
  _DWORD *v56; // rcx
  unsigned int v57; // ebx
  unsigned __int64 v58; // rdi
  int StandardAllocation; // eax
  unsigned int v60; // ebx
  __int64 v61; // rax
  __int64 v62; // r8
  int v63; // ecx
  __int64 v64; // rcx
  __int64 v65; // rax
  __int64 v66; // rbx
  __int64 v67; // rdi
  __int64 v68; // r8
  int v69; // eax
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  ULONG v73; // r9d
  __int64 v74; // rdx
  const GUID *v75; // r8
  __int64 v76; // r12
  __int64 v77; // rdi
  void *v78; // rcx
  __int64 v79; // rax
  int v80; // eax
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // r8
  unsigned int v85; // [rsp+30h] [rbp-D0h] BYREF
  ULONG v86; // [rsp+34h] [rbp-CCh] BYREF
  DXGDEVICE *VirtualGpuDevice; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v88; // [rsp+40h] [rbp-C0h] BYREF
  UINT64 v89; // [rsp+48h] [rbp-B8h] BYREF
  char v90[8]; // [rsp+50h] [rbp-B0h] BYREF
  struct DXGADAPTER *v91; // [rsp+58h] [rbp-A8h]
  char v92; // [rsp+60h] [rbp-A0h]
  char v93[8]; // [rsp+68h] [rbp-98h] BYREF
  struct DXGADAPTER *v94; // [rsp+70h] [rbp-90h]
  __int64 v95; // [rsp+78h] [rbp-88h] BYREF
  char v96[8]; // [rsp+80h] [rbp-80h] BYREF
  struct DXGADAPTER *v97; // [rsp+88h] [rbp-78h]
  char v98; // [rsp+90h] [rbp-70h]
  _BYTE v99[16]; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v100[24]; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD v101[54]; // [rsp+C0h] [rbp-40h] BYREF
  UINT64 Size; // [rsp+270h] [rbp+170h] BYREF
  UINT Alignment; // [rsp+278h] [rbp+178h]
  ULONG DriverSegmentId; // [rsp+27Ch] [rbp+17Ch]
  UINT PrivateDriverData; // [rsp+280h] [rbp+180h]
  int v106; // [rsp+284h] [rbp+184h]
  char v107[8]; // [rsp+290h] [rbp+190h] BYREF
  _BYTE v108[64]; // [rsp+298h] [rbp+198h] BYREF
  _BYTE v109[72]; // [rsp+2D8h] [rbp+1D8h] BYREF
  char v110[8]; // [rsp+320h] [rbp+220h] BYREF
  char v111[64]; // [rsp+328h] [rbp+228h] BYREF
  char v112[88]; // [rsp+368h] [rbp+268h] BYREF
  _DXGKARG_SETVIRTUALGPURESOURCES v113[26]; // [rsp+3C0h] [rbp+2C0h] BYREF

  Current = DXGPROCESS::GetCurrent((__int64)this, (__int64)a2);
  if ( !Current )
  {
    v7 = WdLogNewEntry5_WdAssertion(v5, v4);
    *(_QWORD *)(v7 + 24) = 400LL;
    WdLogEvent5_WdAssertion(v7);
  }
  *((_BYTE *)Current + 299) |= 2u;
  v94 = *(struct DXGADAPTER **)(*((_QWORD *)this + 4) + 16LL);
  v10 = v94;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)Current + 160, 0LL);
  *((_QWORD *)Current + 21) = KeGetCurrentThread();
  v8 = *((_QWORD *)this + 4) + 24LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v8, 0LL);
  *(_QWORD *)(v8 + 8) = KeGetCurrentThread();
  v91 = v10;
  v92 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v90);
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v107, v10, 0LL);
  LODWORD(v10) = COREADAPTERACCESS::AcquireShared((__int64)v107, -1LL, v9);
  if ( (int)v10 < 0 )
    goto LABEL_6;
  VirtualGpuDevice = DXGPROCESS::GetVirtualGpuDevice(Current, *((struct ADAPTER_RENDER **)this + 4));
  v14 = VirtualGpuDevice;
  if ( !VirtualGpuDevice )
  {
    v15 = WdLogNewEntry5_WdError(v12, v11, v13);
    *(_QWORD *)(v15 + 24) = 432LL;
    WdLogEvent5_WdError(v15);
    LODWORD(v10) = -1073741801;
LABEL_6:
    COREACCESS::~COREACCESS((COREACCESS *)v109);
    COREACCESS::~COREACCESS((COREACCESS *)v108);
    if ( v92 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v90);
    *(_QWORD *)(v8 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v8, 0LL);
    KeLeaveCriticalRegion();
    *((_QWORD *)Current + 21) = 0LL;
    ExReleasePushLockExclusiveEx((char *)Current + 160, 0LL);
    KeLeaveCriticalRegion();
    return (unsigned int)v10;
  }
  COREACCESS::~COREACCESS((COREACCESS *)v109);
  COREACCESS::~COREACCESS((COREACCESS *)v108);
  if ( v92 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v90);
  *(_QWORD *)(v8 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v8, 0LL);
  KeLeaveCriticalRegion();
  *((_QWORD *)Current + 21) = 0LL;
  ExReleasePushLockExclusiveEx((char *)Current + 160, 0LL);
  KeLeaveCriticalRegion();
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
    (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v99,
    v14);
  v97 = v94;
  v98 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v96);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v110, (__int64)v14, 2, v16, 0);
  v17 = COREDEVICEACCESS::AcquireShared((__int64)v110, 0xFFFFFFFF, 0LL);
  v10 = (struct DXGADAPTER *)v17;
  if ( v17 >= 0 )
  {
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v100, (struct _KTHREAD **)this + 5);
    PartitionId = a2->PartitionId;
    v85 = 0xFFFF;
    LODWORD(v10) = DXGVIRTUALGPUMANAGER::GetTargetPartitionId(this, PartitionId, &v85);
    if ( (int)v10 < 0 )
    {
LABEL_70:
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v100);
      goto LABEL_71;
    }
    v23 = v85;
    a2->PartitionId = v85;
    v24 = (DXGK_VIRTUAL_GPU *)operator new(0xB8uLL, 0x4B677844u, 1, PagedPool);
    v26 = v24;
    if ( v24 )
    {
      DXGK_VIRTUAL_GPU::DXGK_VIRTUAL_GPU(v24, *((struct ADAPTER_RENDER **)this + 4), 0);
      *(_QWORD *)v26 = &DXGK_VIRTUAL_GPU_GPUP::`vftable';
    }
    else
    {
      v26 = 0LL;
    }
    if ( !v26 )
    {
      LODWORD(v10) = -1073741801;
      goto LABEL_70;
    }
    *((_QWORD *)v26 + 10) = Current;
    v27 = (_QWORD *)((char *)v26 + 112);
    *((_DWORD *)v26 + 6) = v23;
    *((_QWORD *)v26 + 20) = v14;
    *(_QWORD *)(*((_QWORD *)this + 3) + 8 * v23) = v26;
    v28 = (_QWORD *)((char *)this + 64);
    ++*((_DWORD *)this + 4);
    v29 = *((_QWORD *)this + 8);
    if ( *(DXGVIRTUALGPUMANAGER_GPUP **)(v29 + 8) != (DXGVIRTUALGPUMANAGER_GPUP *)((char *)this + 64) )
      __fastfail(3u);
    *v27 = v29;
    *((_QWORD *)v26 + 15) = v28;
    *(_QWORD *)(v29 + 8) = v27;
    *v28 = v27;
    VirtualGpu = ADAPTER_RENDER::DdiCreateVirtualGpu(*((ADAPTER_RENDER **)this + 4), a2, v25);
    v10 = (struct DXGADAPTER *)VirtualGpu;
    if ( VirtualGpu < 0 )
    {
LABEL_22:
      v34 = WdLogNewEntry5_WdWarning(v32, v31, v33);
LABEL_66:
      *(_QWORD *)(v34 + 24) = v10;
      WdLogEvent5_WdWarning(v34);
      goto LABEL_67;
    }
    *((_BYTE *)v26 + 176) = 1;
    *(CLSID *)((char *)v26 + 36) = a2->UserModeVirtualDeviceProvider;
    RtlCopyLuid((PLUID)((char *)v26 + 28), &a2->VirtualGpuLuid);
    NumMemorySegments = a2->NumMemorySegments;
    if ( (unsigned int)NumMemorySegments > 0x20 )
    {
      v39 = WdLogNewEntry5_WdWarning(v36, v35, v37);
      *(_QWORD *)(v39 + 24) = a2->NumMemorySegments;
      *(_QWORD *)(v39 + 32) = 487LL;
      WdLogEvent5_WdWarning(v39);
      LODWORD(v10) = -1073741811;
LABEL_67:
      (*(void (__fastcall **)(DXGVIRTUALGPUMANAGER_GPUP *, DXGK_VIRTUAL_GPU *))(*(_QWORD *)this + 24LL))(this, v26);
      goto LABEL_70;
    }
    if ( (_DWORD)NumMemorySegments )
    {
      v40 = 32 * NumMemorySegments;
      if ( !is_mul_ok(a2->NumMemorySegments, 0x20uLL) )
        v40 = -1LL;
      v41 = operator new[](v40, 0x4B677844u, PagedPool);
      *((_QWORD *)v26 + 21) = v41;
      v45 = v41;
      if ( !v41 )
      {
        v46 = WdLogNewEntry5_WdLowResource(0LL, v42, v43, v44);
        *(_QWORD *)(v46 + 24) = 496LL;
        WdLogEvent5_WdLowResource(v46);
        LODWORD(v10) = -1073741801;
        goto LABEL_67;
      }
      v47 = a2->NumMemorySegments;
      *((_DWORD *)v26 + 38) = v47;
      memset(v45, 0, 32LL * v47);
    }
    v48 = 0LL;
    if ( DpiKsrIsSoftBoot() )
    {
      SavedAdapterState = DpiKsrGetSavedAdapterState(
                            *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 16LL) + 192LL),
                            v93,
                            &v88);
      v10 = (struct DXGADAPTER *)SavedAdapterState;
      if ( SavedAdapterState < 0 )
      {
        v53 = WdLogNewEntry5_WdError(v51, v50, v52);
        *(_QWORD *)(v53 + 24) = v10;
LABEL_34:
        WdLogEvent5_WdError(v53);
        goto LABEL_67;
      }
      v54 = 0LL;
      v55 = *(unsigned int *)v88;
      v56 = (_DWORD *)(v88 + 4);
      if ( (_DWORD)v55 )
      {
        while ( *v56 != (_DWORD)v23 )
        {
          v54 = (unsigned int)(v54 + 1);
          v56 = (_DWORD *)((char *)v56 + (unsigned int)v56[3]);
          if ( (unsigned int)v54 >= (unsigned int)v55 )
            goto LABEL_38;
        }
        v73 = a2->NumMemorySegments;
        if ( v56[2] != v73 )
        {
          v53 = WdLogNewEntry5_WdError(v56, v54, v55);
          *(_QWORD *)(v53 + 24) = 528LL;
          goto LABEL_34;
        }
        v74 = 0LL;
        v48 = v56 + 4;
        if ( v73 )
        {
          while ( v48[6 * v74] == a2->SegmentInfo[v74].DriverSegmentId
               && *(_QWORD *)&v48[6 * v74 + 4] == a2->SegmentInfo[v74].Size
               && v48[6 * v74 + 1] == a2->SegmentInfo[v74].Alignment )
          {
            v74 = (unsigned int)(v74 + 1);
            if ( (unsigned int)v74 >= v73 )
              goto LABEL_38;
          }
          v53 = WdLogNewEntry5_WdError(v56, v74, 6 * v74);
          *(_QWORD *)(v53 + 24) = 538LL;
          goto LABEL_34;
        }
      }
    }
LABEL_38:
    v57 = a2->NumMemorySegments;
    v58 = 0LL;
    v85 = 0;
    if ( !v57 )
    {
LABEL_62:
      memset(v113[0].MemoryInfo, 0, 0x400uLL);
      v76 = 0LL;
      v113[0].PartitionId = a2->PartitionId;
      v113[0].NumMemoryAllocations = v57;
      if ( v57 )
      {
        do
        {
          v95 = 0LL;
          v77 = (unsigned int)v76;
          (*(void (__fastcall **)(_QWORD, _QWORD, ULONG *, __int64 *, UINT64 *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)VirtualGpuDevice + 2) + 544LL)
                                                                                           + 8LL)
                                                                               + 216LL))(
            *(_QWORD *)(*((_QWORD *)this + 4) + 552LL),
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v77 * 32 + *((_QWORD *)v26 + 21)) + 48LL) + 8LL),
            &v86,
            &v95,
            &v89);
          v78 = *(void **)(*(_QWORD *)(*(_QWORD *)(v77 * 32 + *((_QWORD *)v26 + 21)) + 48LL) + 16LL);
          v113[0].MemoryInfo[v77].AllocationAddress.MemorySegmentOffset = v89;
          v113[0].MemoryInfo[v77].DriverAllocationHandle = v78;
          LODWORD(v78) = v86;
          v79 = 6 * (v76 + 3);
          v113[0].MemoryInfo[v77].AllocationAddress.MemorySegmentId = v86;
          v76 = (unsigned int)(v76 + 1);
          v113[0].MemoryInfo[v77].AllocationSize = *((_QWORD *)&a2->PartitionId + v79);
          *(_DWORD *)(v77 * 32 + *((_QWORD *)v26 + 21) + 28) = (_DWORD)v78;
          *(_QWORD *)(v77 * 32 + *((_QWORD *)v26 + 21) + 8) = v89;
        }
        while ( (unsigned int)v76 < a2->NumMemorySegments );
      }
      v80 = ADAPTER_RENDER::DdiSetVirtualGpuResources(*((ADAPTER_RENDER **)this + 4), v113, v75);
      v10 = (struct DXGADAPTER *)v80;
      if ( v80 >= 0 )
      {
        LODWORD(v10) = 0;
        goto LABEL_70;
      }
      v34 = WdLogNewEntry5_WdWarning(v82, v81, v83);
      *(_QWORD *)(v34 + 32) = 653LL;
      goto LABEL_66;
    }
    while ( 1 )
    {
      v106 = 0;
      memset(v101, 0, 0x1A8uLL);
      LODWORD(v101[0]) |= 0x200u;
      LODWORD(v101[2]) = 5;
      v88 = v58;
      HIDWORD(v101[0]) = *((_DWORD *)VirtualGpuDevice + 83);
      v101[3] = &Size;
      Size = a2->SegmentInfo[v58].Size;
      Alignment = a2->SegmentInfo[v58].Alignment;
      DriverSegmentId = a2->SegmentInfo[v58].DriverSegmentId;
      PrivateDriverData = a2->SegmentInfo[v58].PrivateDriverData;
      StandardAllocation = DXGDEVICE::CreateStandardAllocation(
                             VirtualGpuDevice,
                             (struct _D3DKM_CREATESTANDARDALLOCATION *)v101,
                             0LL);
      v10 = (struct DXGADAPTER *)StandardAllocation;
      if ( StandardAllocation < 0 )
        goto LABEL_22;
      v60 = HIDWORD(v101[6]);
      DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 184));
      v61 = (v60 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v61 >= *((_DWORD *)Current + 56) )
        goto LABEL_46;
      v62 = *((_QWORD *)Current + 26);
      v63 = *(_DWORD *)(v62 + 16 * v61 + 8);
      if ( ((v60 >> 25) & 0x60) != (*(_BYTE *)(v62 + 16 * v61 + 8) & 0x60) || (v63 & 0x2000) != 0 || (v63 & 0x1F) == 0 )
        goto LABEL_46;
      v64 = v63 & 0x1F;
      if ( (_BYTE)v64 != 5 )
        break;
      v66 = *(_QWORD *)(v62 + 16LL * (unsigned int)v61);
LABEL_47:
      ExReleasePushLockSharedEx((char *)Current + 184, 0LL);
      KeLeaveCriticalRegion();
      v67 = 32 * v58;
      *(_QWORD *)(v67 + *((_QWORD *)v26 + 21)) = v66;
      v68 = *((_QWORD *)VirtualGpuDevice + 2);
      if ( v48 )
        v69 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(v68 + 544) + 8LL)
                                                                        + 1232LL))(
                *(_QWORD *)(*((_QWORD *)this + 4) + 552LL),
                *(_QWORD *)(*(_QWORD *)(v67 + *((_QWORD *)v26 + 21)) + 24LL),
                (unsigned int)v48[6 * v88],
                *(_QWORD *)&v48[6 * v88 + 2]);
      else
        v69 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(v68 + 544) + 8LL)
                                                                        + 224LL))(
                *(_QWORD *)(*((_QWORD *)this + 4) + 552LL),
                *(_QWORD *)(*(_QWORD *)(v67 + *((_QWORD *)v26 + 21)) + 24LL),
                0LL,
                0LL);
      LODWORD(v10) = v69;
      if ( v69 < 0 )
      {
        v53 = WdLogNewEntry5_WdError(v71, v70, v72);
        *(_QWORD *)(v53 + 24) = (int)v10;
        goto LABEL_34;
      }
      *(_QWORD *)(v67 + *((_QWORD *)v26 + 21) + 16) = Size;
      *(_DWORD *)(v67 + *((_QWORD *)v26 + 21) + 24) = Alignment;
      v57 = a2->NumMemorySegments;
      v58 = v85 + 1;
      v85 = v58;
      if ( (unsigned int)v58 >= v57 )
        goto LABEL_62;
    }
    v65 = WdLogNewEntry5_WdError(v64, 2LL * (unsigned int)v61, v62);
    *(_QWORD *)(v65 + 24) = 267LL;
    WdLogEvent5_WdError(v65);
LABEL_46:
    v66 = 0LL;
    goto LABEL_47;
  }
  v21 = WdLogNewEntry5_WdWarning(v19, v18, v20);
  *(_QWORD *)(v21 + 24) = v14;
  *(_QWORD *)(v21 + 32) = v10;
  WdLogEvent5_WdWarning(v21);
LABEL_71:
  COREACCESS::~COREACCESS((COREACCESS *)v112);
  COREACCESS::~COREACCESS((COREACCESS *)v111);
  if ( v98 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v96);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v99);
  return (unsigned int)v10;
}
