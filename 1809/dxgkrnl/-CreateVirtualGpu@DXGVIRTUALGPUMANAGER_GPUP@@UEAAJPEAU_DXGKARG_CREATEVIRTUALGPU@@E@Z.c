/*
 * XREFs of ?CreateVirtualGpu@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@E@Z @ 0x1C01E6AF0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000D500 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C000E5B4 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F590 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C001071C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0010A14 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0010E18 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00118EC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C00119E0 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0011AAC (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0012060 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0012240 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00123A4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?VidMmPinAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAKPEAT_LARGE_INTEGER@@@Z @ 0x1C0013B08 (-VidMmPinAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAKPEAT_LARGE_.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00F8394 (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGK_VIRTUAL_GPU@@QEAA@PEAVADAPTER_RENDER@@E@Z @ 0x1C01DEBB0 (--0DXGK_VIRTUAL_GPU@@QEAA@PEAVADAPTER_RENDER@@E@Z.c)
 *     ?GetTargetPartitionId@DXGVIRTUALGPUMANAGER@@QEAAJIPEAI@Z @ 0x1C01DF984 (-GetTargetPartitionId@DXGVIRTUALGPUMANAGER@@QEAAJIPEAI@Z.c)
 *     ?DdiCreateVirtualGpu@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@@Z @ 0x1C01E16F4 (-DdiCreateVirtualGpu@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@@Z.c)
 *     ?DdiSetVirtualGpuResources@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_SETVIRTUALGPURESOURCES@@@Z @ 0x1C01E4DA0 (-DdiSetVirtualGpuResources@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_SETVIRTUALGPURESOURCES@@@Z.c)
 *     ?GetVirtualGpuDevice@DXGPROCESS@@QEAAPEAVDXGDEVICE@@PEAVADAPTER_RENDER@@@Z @ 0x1C02298D8 (-GetVirtualGpuDevice@DXGPROCESS@@QEAAPEAVDXGDEVICE@@PEAVADAPTER_RENDER@@@Z.c)
 */

__int64 __fastcall DXGVIRTUALGPUMANAGER_GPUP::CreateVirtualGpu(
        DXGVIRTUALGPUMANAGER_GPUP *this,
        struct _DXGKARG_CREATEVIRTUALGPU *a2)
{
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // r15
  __int64 v6; // rax
  __int64 v7; // rdi
  struct DXGADAPTER *v8; // rbx
  __int64 v9; // rcx
  struct DXGDEVICE *VirtualGpuDevice; // r12
  __int64 v11; // rax
  __int64 v12; // r9
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rax
  ULONG PartitionId; // edx
  __int64 v19; // rbx
  DXGK_VIRTUAL_GPU *v20; // rax
  const GUID *v21; // r8
  DXGK_VIRTUAL_GPU *v22; // rdi
  _QWORD *v23; // rcx
  _QWORD *v24; // rax
  __int64 v25; // rdx
  int VirtualGpu; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  unsigned __int64 NumMemorySegments; // rbx
  __int64 v35; // rax
  SIZE_T v36; // rax
  PVOID v37; // rax
  void *v38; // rcx
  __int64 v39; // rax
  ULONG v40; // eax
  __int64 v41; // r13
  int v42; // eax
  int StandardAllocation; // eax
  unsigned int v44; // ebx
  __int64 v45; // rax
  __int64 v46; // r8
  int v47; // ecx
  __int64 v48; // rcx
  __int64 v49; // rax
  __int64 v50; // rbx
  int v51; // eax
  __int64 v52; // rcx
  const GUID *v53; // r8
  __int64 v54; // r15
  __int64 v55; // rdx
  void *v56; // rcx
  __int64 v57; // rax
  int v58; // eax
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // rax
  unsigned int v64; // [rsp+30h] [rbp-D0h] BYREF
  ULONG v65; // [rsp+34h] [rbp-CCh] BYREF
  char v66[8]; // [rsp+38h] [rbp-C8h] BYREF
  struct DXGADAPTER *v67; // [rsp+40h] [rbp-C0h]
  char v68; // [rsp+48h] [rbp-B8h]
  struct DXGADAPTER *v69; // [rsp+50h] [rbp-B0h]
  UINT64 v70; // [rsp+58h] [rbp-A8h] BYREF
  char v71[8]; // [rsp+60h] [rbp-A0h] BYREF
  struct DXGADAPTER *v72; // [rsp+68h] [rbp-98h]
  char v73; // [rsp+70h] [rbp-90h]
  _BYTE v74[16]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v75[24]; // [rsp+88h] [rbp-78h] BYREF
  char v76[8]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v77[32]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v78[40]; // [rsp+C8h] [rbp-38h] BYREF
  char v79[8]; // [rsp+F0h] [rbp-10h] BYREF
  char v80[32]; // [rsp+F8h] [rbp-8h] BYREF
  char v81[56]; // [rsp+118h] [rbp+18h] BYREF
  _QWORD v82[54]; // [rsp+150h] [rbp+50h] BYREF
  UINT64 Size; // [rsp+300h] [rbp+200h] BYREF
  __int64 v84; // [rsp+308h] [rbp+208h]
  __int64 v85; // [rsp+310h] [rbp+210h]
  _DXGKARG_SETVIRTUALGPURESOURCES v86[26]; // [rsp+320h] [rbp+220h] BYREF

  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v6 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v6 + 24) = 359LL;
    WdLogEvent5_WdAssertion(v6);
  }
  *((_BYTE *)Current + 323) |= 2u;
  v69 = *(struct DXGADAPTER **)(*((_QWORD *)this + 4) + 16LL);
  v8 = v69;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)Current + 168, 0LL);
  *((_QWORD *)Current + 22) = KeGetCurrentThread();
  v7 = *((_QWORD *)this + 4) + 24LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v7, 0LL);
  *(_QWORD *)(v7 + 8) = KeGetCurrentThread();
  v67 = v8;
  v68 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v66);
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v76, v8, 0LL);
  LODWORD(v8) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v76);
  if ( (int)v8 < 0 )
    goto LABEL_6;
  VirtualGpuDevice = DXGPROCESS::GetVirtualGpuDevice(Current, *((struct ADAPTER_RENDER **)this + 4));
  if ( !VirtualGpuDevice )
  {
    v11 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v11 + 24) = 391LL;
    WdLogEvent5_WdError(v11);
    LODWORD(v8) = -1073741801;
LABEL_6:
    COREACCESS::~COREACCESS((COREACCESS *)v78);
    COREACCESS::~COREACCESS((COREACCESS *)v77);
    if ( v68 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v66);
    *(_QWORD *)(v7 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v7, 0LL);
    KeLeaveCriticalRegion();
    *((_QWORD *)Current + 22) = 0LL;
    ExReleasePushLockExclusiveEx((char *)Current + 168, 0LL);
    KeLeaveCriticalRegion();
    return (unsigned int)v8;
  }
  COREACCESS::~COREACCESS((COREACCESS *)v78);
  COREACCESS::~COREACCESS((COREACCESS *)v77);
  if ( v68 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v66);
  *(_QWORD *)(v7 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v7, 0LL);
  KeLeaveCriticalRegion();
  *((_QWORD *)Current + 22) = 0LL;
  ExReleasePushLockExclusiveEx((char *)Current + 168, 0LL);
  KeLeaveCriticalRegion();
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
    (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v74,
    VirtualGpuDevice);
  v72 = v69;
  v73 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v71);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v79, (__int64)VirtualGpuDevice, 2, v12, 0);
  v13 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v79);
  v8 = (struct DXGADAPTER *)v13;
  if ( v13 >= 0 )
  {
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v75, (struct _KTHREAD **)this + 5);
    PartitionId = a2->PartitionId;
    v64 = 0xFFFF;
    LODWORD(v8) = DXGVIRTUALGPUMANAGER::GetTargetPartitionId(this, PartitionId, &v64);
    if ( (int)v8 < 0 )
    {
LABEL_51:
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v75);
      goto LABEL_52;
    }
    v19 = v64;
    a2->PartitionId = v64;
    v20 = (DXGK_VIRTUAL_GPU *)operator new(0xB8uLL, 0x4B677844u, 1, PagedPool);
    v22 = v20;
    if ( v20 )
    {
      DXGK_VIRTUAL_GPU::DXGK_VIRTUAL_GPU(v20, *((struct ADAPTER_RENDER **)this + 4), 0);
      *(_QWORD *)v22 = &DXGK_VIRTUAL_GPU_GPUP::`vftable';
    }
    else
    {
      v22 = 0LL;
    }
    if ( !v22 )
    {
      LODWORD(v8) = -1073741801;
      goto LABEL_51;
    }
    *((_QWORD *)v22 + 10) = Current;
    v23 = (_QWORD *)((char *)this + 64);
    *((_DWORD *)v22 + 6) = v19;
    *((_QWORD *)v22 + 20) = VirtualGpuDevice;
    *(_QWORD *)(*((_QWORD *)this + 3) + 8 * v19) = v22;
    v24 = (_QWORD *)((char *)v22 + 112);
    ++*((_DWORD *)this + 4);
    v25 = *((_QWORD *)this + 8);
    if ( *(DXGVIRTUALGPUMANAGER_GPUP **)(v25 + 8) != (DXGVIRTUALGPUMANAGER_GPUP *)((char *)this + 64) )
      __fastfail(3u);
    *v24 = v25;
    *((_QWORD *)v22 + 15) = v23;
    *(_QWORD *)(v25 + 8) = v24;
    *v23 = v24;
    VirtualGpu = ADAPTER_RENDER::DdiCreateVirtualGpu(*((ADAPTER_RENDER **)this + 4), a2, v21);
    v8 = (struct DXGADAPTER *)VirtualGpu;
    if ( VirtualGpu < 0 )
    {
LABEL_22:
      v30 = WdLogNewEntry5_WdWarning(v28, v27, v29);
LABEL_46:
      *(_QWORD *)(v30 + 24) = v8;
      WdLogEvent5_WdWarning(v30);
      goto LABEL_47;
    }
    *((_BYTE *)v22 + 176) = 1;
    *(CLSID *)((char *)v22 + 36) = a2->UserModeVirtualDeviceProvider;
    RtlCopyLuid((PLUID)((char *)v22 + 28), &a2->VirtualGpuLuid);
    NumMemorySegments = a2->NumMemorySegments;
    if ( (unsigned int)NumMemorySegments > 0x20 )
    {
      v35 = WdLogNewEntry5_WdWarning(v32, v31, v33);
      *(_QWORD *)(v35 + 24) = a2->NumMemorySegments;
      *(_QWORD *)(v35 + 32) = 446LL;
      WdLogEvent5_WdWarning(v35);
      LODWORD(v8) = -1073741811;
LABEL_47:
      (*(void (__fastcall **)(DXGVIRTUALGPUMANAGER_GPUP *, DXGK_VIRTUAL_GPU *))(*(_QWORD *)this + 24LL))(this, v22);
      goto LABEL_51;
    }
    if ( (_DWORD)NumMemorySegments )
    {
      v36 = 8 * NumMemorySegments;
      if ( !is_mul_ok(NumMemorySegments, 8uLL) )
        v36 = -1LL;
      v37 = operator new[](v36, 0x4B677844u, PagedPool);
      *((_QWORD *)v22 + 21) = v37;
      v38 = v37;
      if ( !v37 )
      {
        v39 = WdLogNewEntry5_WdLowResource(0LL);
        *(_QWORD *)(v39 + 24) = 455LL;
        WdLogEvent5_WdLowResource(v39);
        LODWORD(v8) = -1073741801;
        goto LABEL_47;
      }
      v40 = a2->NumMemorySegments;
      *((_DWORD *)v22 + 38) = v40;
      memset(v38, 0, 8LL * v40);
      LODWORD(NumMemorySegments) = a2->NumMemorySegments;
    }
    v41 = 0LL;
    if ( !(_DWORD)NumMemorySegments )
    {
LABEL_42:
      memset(v86, 0, 0x408uLL);
      v54 = 0LL;
      v86[0].PartitionId = a2->PartitionId;
      v86[0].NumMemoryAllocations = NumMemorySegments;
      if ( (_DWORD)NumMemorySegments )
      {
        do
        {
          (*(void (__fastcall **)(_QWORD, _QWORD, ULONG *, UINT64 *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)VirtualGpuDevice
                                                                                              + 2)
                                                                                            + 544LL)
                                                                                + 8LL)
                                                                    + 216LL))(
            *(_QWORD *)(*((_QWORD *)this + 4) + 552LL),
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v22 + 21) + 8 * v54) + 48LL) + 8LL),
            &v65,
            &v70);
          v55 = (unsigned int)v54;
          v56 = *(void **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v22 + 21) + 8 * v54) + 48LL) + 16LL);
          v86[0].MemoryInfo[v55].AllocationAddress.MemorySegmentId = v65;
          v86[0].MemoryInfo[v55].AllocationAddress.MemorySegmentOffset = v70;
          v86[0].MemoryInfo[v55].DriverAllocationHandle = v56;
          v57 = 6 * (v54 + 3);
          v54 = (unsigned int)(v54 + 1);
          v86[0].MemoryInfo[v55].AllocationSize = *((_QWORD *)&a2->PartitionId + v57);
        }
        while ( (unsigned int)v54 < a2->NumMemorySegments );
      }
      v58 = ADAPTER_RENDER::DdiSetVirtualGpuResources(*((ADAPTER_RENDER **)this + 4), v86, v53);
      v8 = (struct DXGADAPTER *)v58;
      if ( v58 >= 0 )
      {
        LODWORD(v8) = 0;
        goto LABEL_51;
      }
      v30 = WdLogNewEntry5_WdWarning(v60, v59, v61);
      *(_QWORD *)(v30 + 32) = 525LL;
      goto LABEL_46;
    }
    while ( 1 )
    {
      v84 = 0LL;
      v85 = 0LL;
      memset(v82, 0, 0x1A8uLL);
      v42 = *((_DWORD *)VirtualGpuDevice + 83);
      LODWORD(v82[0]) |= 0x200u;
      HIDWORD(v82[0]) = v42;
      LODWORD(v82[2]) = 5;
      v82[3] = &Size;
      Size = a2->SegmentInfo[v41].Size;
      LODWORD(v84) = a2->SegmentInfo[v41].Alignment;
      HIDWORD(v84) = a2->SegmentInfo[v41].DriverSegmentId;
      LODWORD(v85) = a2->SegmentInfo[v41].PrivateDriverData;
      StandardAllocation = DXGDEVICE::CreateStandardAllocation(
                             VirtualGpuDevice,
                             (struct _D3DKM_CREATESTANDARDALLOCATION *)v82,
                             0LL);
      v8 = (struct DXGADAPTER *)StandardAllocation;
      if ( StandardAllocation < 0 )
        goto LABEL_22;
      v44 = HIDWORD(v82[6]);
      DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 208));
      v45 = (v44 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v45 >= *((_DWORD *)Current + 62) )
        goto LABEL_39;
      v46 = *((_QWORD *)Current + 29);
      v47 = *(_DWORD *)(v46 + 16 * v45 + 8);
      if ( ((v44 >> 25) & 0x60) != (*(_BYTE *)(v46 + 16 * v45 + 8) & 0x60) || (v47 & 0x2000) != 0 || (v47 & 0x1F) == 0 )
        goto LABEL_39;
      v48 = v47 & 0x1F;
      if ( (_BYTE)v48 != 5 )
        break;
      v50 = *(_QWORD *)(v46 + 16LL * (unsigned int)v45);
LABEL_40:
      ExReleasePushLockSharedEx((char *)Current + 208, 0LL);
      KeLeaveCriticalRegion();
      *(_QWORD *)(*((_QWORD *)v22 + 21) + 8 * v41) = v50;
      v51 = VIDMM_EXPORT::VidMmPinAllocation(
              *(VIDMM_EXPORT **)(*((_QWORD *)VirtualGpuDevice + 2) + 544LL),
              *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 4) + 552LL),
              *(struct _VIDMM_MULTI_ALLOC **)(*(_QWORD *)(*((_QWORD *)v22 + 21) + 8 * v41) + 24LL),
              0LL,
              0LL);
      v8 = (struct DXGADAPTER *)v51;
      if ( v51 < 0 )
      {
        v62 = WdLogNewEntry5_WdError(v52);
        *(_QWORD *)(v62 + 24) = v8;
        WdLogEvent5_WdError(v62);
        goto LABEL_47;
      }
      LODWORD(NumMemorySegments) = a2->NumMemorySegments;
      v41 = (unsigned int)(v41 + 1);
      if ( (unsigned int)v41 >= (unsigned int)NumMemorySegments )
        goto LABEL_42;
    }
    v49 = WdLogNewEntry5_WdError(v48);
    *(_QWORD *)(v49 + 24) = 316LL;
    WdLogEvent5_WdError(v49);
LABEL_39:
    v50 = 0LL;
    goto LABEL_40;
  }
  v17 = WdLogNewEntry5_WdWarning(v15, v14, v16);
  *(_QWORD *)(v17 + 24) = VirtualGpuDevice;
  *(_QWORD *)(v17 + 32) = v8;
  WdLogEvent5_WdWarning(v17);
LABEL_52:
  COREACCESS::~COREACCESS((COREACCESS *)v81);
  COREACCESS::~COREACCESS((COREACCESS *)v80);
  if ( v73 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v71);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v74);
  return (unsigned int)v8;
}
