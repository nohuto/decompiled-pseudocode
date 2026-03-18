/*
 * XREFs of ?DxgkCddOpenResource@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z @ 0x1C00B1870
 * Callers:
 *     <none>
 * Callees:
 *     ?GdiNodeSupportsGpuVa@ADAPTER_RENDER@@QEBAEXZ @ 0x1C00011B8 (-GdiNodeSupportsGpuVa@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000D500 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F590 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00101B4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C001071C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0010E18 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C001157C (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00118EC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C00186E8 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ?VidMmGetAllocationSection@VIDMM_EXPORT@@QEAAPEAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C00354B4 (-VidMmGetAllocationSection@VIDMM_EXPORT@@QEAAPEAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z.c)
 *     ?MapGpuVirtualAddressToAllocation@@YAJPEAVADAPTER_RENDER@@PEAVDXGALLOCATION@@@Z @ 0x1C00B1AD8 (-MapGpuVirtualAddressToAllocation@@YAJPEAVADAPTER_RENDER@@PEAVDXGALLOCATION@@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EF4FC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C00F3358 (--$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHARE.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00F7E34 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkCddOpenResource(
        struct _D3DKMT_OPENRESOURCE *a1,
        unsigned int a2,
        GUID *a3,
        unsigned int *a4,
        void **a5,
        unsigned __int64 *a6)
{
  struct _KTHREAD **Current; // rax
  __int64 v11; // rcx
  struct _KTHREAD **v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  ADAPTER_RENDER **v16; // rsi
  ADAPTER_RENDER *v17; // rax
  __int64 v18; // r9
  int v19; // eax
  struct _KTHREAD **v20; // r14
  D3DKMT_HANDLE hAllocation; // ebx
  __int64 v22; // rax
  struct _KTHREAD *v23; // rdi
  int v24; // ecx
  __int64 v25; // rcx
  struct _VIDMM_MULTI_ALLOC **v26; // rdi
  struct ADAPTER_RENDER *v27; // r11
  int v28; // ebx
  __int64 v29; // rcx
  const GUID *v30; // r8
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 hDevice; // rcx
  __int64 v35; // rax
  __int64 v36; // rax
  unsigned int v37; // [rsp+38h] [rbp-99h]
  struct DXGDEVICE *v38; // [rsp+58h] [rbp-79h] BYREF
  struct DXGDEVICE *v39; // [rsp+60h] [rbp-71h] BYREF
  int v40; // [rsp+68h] [rbp-69h] BYREF
  __int64 v41; // [rsp+70h] [rbp-61h]
  char v42; // [rsp+78h] [rbp-59h]
  char v43[8]; // [rsp+80h] [rbp-51h] BYREF
  __int64 v44; // [rsp+88h] [rbp-49h]
  char v45; // [rsp+90h] [rbp-41h]
  _BYTE v46[16]; // [rsp+98h] [rbp-39h] BYREF
  char v47[8]; // [rsp+A8h] [rbp-29h] BYREF
  char v48[32]; // [rsp+B0h] [rbp-21h] BYREF
  char v49[56]; // [rsp+D0h] [rbp-1h] BYREF

  v40 = -1;
  v41 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v42 = 1;
    v40 = 3034;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 3034);
  }
  else
  {
    v42 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v40, 3034);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  v12 = Current;
  if ( !Current )
  {
    v32 = WdLogNewEntry5_WdError(v11);
    v28 = -1073741811;
    *(_QWORD *)(v32 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v32);
    goto LABEL_26;
  }
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v38, a1->hDevice, Current, &v39);
  v16 = (ADAPTER_RENDER **)v39;
  if ( v39 )
  {
    if ( !a1->TotalPrivateDriverDataBufferSize && !a1->ResourcePrivateDriverDataSize )
    {
      v35 = WdLogNewEntry5_WdWarning(v14, v13, v15);
      v28 = -1073741811;
      *(_QWORD *)(v35 + 24) = v16;
      *(_QWORD *)(v35 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v35);
      goto LABEL_23;
    }
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v46, v39);
    v17 = v16[2];
    v45 = 0;
    v44 = *((_QWORD *)v17 + 2);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v43);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v47, (__int64)v16, 0, v18, 0);
    v19 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v47);
    if ( v19 < 0
      || (v19 = DXGDEVICE::OpenResource<_D3DKMT_OPENRESOURCE>(
                  (DXGDEVICE *)v16,
                  a2,
                  (struct COREDEVICEACCESS *)v47,
                  v37,
                  (struct _EPROCESS *)a3,
                  a4,
                  a6),
          v19 < 0) )
    {
      v28 = v19;
LABEL_20:
      COREACCESS::~COREACCESS((COREACCESS *)v49);
      COREACCESS::~COREACCESS((COREACCESS *)v48);
      if ( v45 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v43);
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v46);
      goto LABEL_23;
    }
    v20 = v12 + 26;
    hAllocation = a1->pOpenAllocationInfo->hAllocation;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v12 + 26));
    v22 = (hAllocation >> 6) & 0xFFFFFF;
    if ( (unsigned int)v22 < *((_DWORD *)v12 + 62) )
    {
      v23 = v12[29];
      v24 = *((_DWORD *)v23 + 4 * v22 + 2);
      if ( ((hAllocation >> 25) & 0x60) == (*((_BYTE *)v23 + 16 * v22 + 8) & 0x60)
        && (v24 & 0x2000) == 0
        && (v24 & 0x1F) != 0 )
      {
        v25 = v24 & 0x1F;
        if ( (_BYTE)v25 == 5 )
        {
          v26 = (struct _VIDMM_MULTI_ALLOC **)*((_QWORD *)v23 + 2 * (unsigned int)v22);
          goto LABEL_14;
        }
        v36 = WdLogNewEntry5_WdError(v25);
        *(_QWORD *)(v36 + 24) = 316LL;
        WdLogEvent5_WdError(v36);
      }
    }
    v26 = 0LL;
LABEL_14:
    ExReleasePushLockSharedEx(v20, 0LL);
    KeLeaveCriticalRegion();
    if ( v26 )
    {
      if ( ADAPTER_RENDER::GdiNodeSupportsGpuVa(v16[2])
        && (v28 = MapGpuVirtualAddressToAllocation(v27, (struct DXGALLOCATION *)v26), v28 < 0) )
      {
        DXGDEVICE::DestroyAllocationInternal((DXGDEVICE *)v16, 0, 0LL, v26[5], 0LL, DXGDEVICE::DestroyFlagsDefault);
      }
      else
      {
        if ( a5 )
          *a5 = (void *)VIDMM_EXPORT::VidMmGetAllocationSection(
                          *((VIDMM_EXPORT **)v16[2] + 68),
                          *((struct VIDMM_GLOBAL **)v16[2] + 69),
                          v26[3]);
        v28 = 0;
      }
    }
    else
    {
      v28 = -1073741811;
    }
    goto LABEL_20;
  }
  v33 = WdLogNewEntry5_WdError(v14);
  hDevice = a1->hDevice;
  v28 = -1073741811;
  *(_QWORD *)(v33 + 24) = hDevice;
  *(_QWORD *)(v33 + 32) = -1073741811LL;
  WdLogEvent5_WdError(v33);
LABEL_23:
  if ( v38 && _InterlockedExchangeAdd64((volatile signed __int64 *)v38 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v38 + 2), v38);
LABEL_26:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v40);
  if ( v42 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v29, &EventProfilerExit, v30, v40);
  return (unsigned int)v28;
}
