/*
 * XREFs of ?DxgkCddOpenResource@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z @ 0x1C020B720
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0006A5C (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006AD4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006DA8 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006E04 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0007150 (-AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007320 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BFE0 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000CB44 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C001A7F8 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     ?GdiNodeSupportsGpuVa@ADAPTER_RENDER@@QEBAEXZ @ 0x1C003BFE4 (-GdiNodeSupportsGpuVa@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00EEE94 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C00F0DB4 (--$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHARE.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C012293C (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?MapGpuVirtualAddressToAllocation@@YAJPEAVADAPTER_RENDER@@PEAVDXGALLOCATION@@@Z @ 0x1C020CD98 (-MapGpuVirtualAddressToAllocation@@YAJPEAVADAPTER_RENDER@@PEAVDXGALLOCATION@@@Z.c)
 */

__int64 __fastcall DxgkCddOpenResource(
        struct _D3DKMT_OPENRESOURCE *a1,
        unsigned int a2,
        GUID *a3,
        unsigned int *a4,
        void **a5,
        unsigned __int64 *a6)
{
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct _KTHREAD **Current; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  struct _KTHREAD **v16; // rdi
  __int64 v17; // rax
  int v18; // ebx
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  ADAPTER_RENDER **v23; // rsi
  __int64 v24; // rax
  __int64 hDevice; // rcx
  __int64 v26; // rax
  ADAPTER_RENDER *v27; // rax
  __int64 v28; // r9
  int v29; // eax
  __int64 v30; // r9
  struct _KTHREAD **v31; // r14
  D3DKMT_HANDLE hAllocation; // ebx
  __int64 v33; // r8
  __int64 v34; // rax
  struct _KTHREAD *v35; // rdi
  int v36; // ecx
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rdi
  struct ADAPTER_RENDER *v40; // r11
  __int64 v41; // rcx
  const GUID *v42; // r8
  int v44; // [rsp+30h] [rbp-D0h]
  struct DXGDEVICE *v45; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v46; // [rsp+58h] [rbp-A8h]
  int v47; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v48; // [rsp+68h] [rbp-98h]
  char v49; // [rsp+70h] [rbp-90h]
  struct DXGDEVICE *v50; // [rsp+78h] [rbp-88h] BYREF
  char v51[8]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v52; // [rsp+88h] [rbp-78h]
  char v53; // [rsp+90h] [rbp-70h]
  _BYTE v54[24]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v55; // [rsp+B0h] [rbp-50h] BYREF
  char v56[64]; // [rsp+B8h] [rbp-48h] BYREF
  char v57[88]; // [rsp+F8h] [rbp-8h] BYREF

  v47 = -1;
  v48 = 0LL;
  v46 = (__int64)a6;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v49 = 1;
    v47 = 3034;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 3034);
  }
  else
  {
    v49 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v47, 3034LL);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v11, v10);
  v16 = Current;
  if ( !Current )
  {
    v17 = WdLogNewEntry5_WdError(v14, v13, v15);
    v18 = -1073741811;
    *(_QWORD *)(v17 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v17);
    goto LABEL_37;
  }
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v45, a1->hDevice, Current, &v50);
  v23 = (ADAPTER_RENDER **)v50;
  if ( v50 )
  {
    if ( !a1->TotalPrivateDriverDataBufferSize && !a1->ResourcePrivateDriverDataSize )
    {
      v26 = WdLogNewEntry5_WdWarning(v21, v20, v22);
      v18 = -1073741811;
      *(_QWORD *)(v26 + 24) = v23;
      *(_QWORD *)(v26 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v26);
      goto LABEL_34;
    }
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v54, v50);
    v27 = v23[2];
    v53 = 0;
    v52 = *((_QWORD *)v27 + 2);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v51);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)&v55, (__int64)v23, 0, v28, 0);
    v29 = COREDEVICEACCESS::AcquireShared((__int64)&v55, 0xFFFFFFFF, 0LL);
    if ( v29 < 0
      || (v29 = DXGDEVICE::OpenResource<_D3DKMT_OPENRESOURCE>(
                  (struct DXGDEVICE *)v23,
                  (__int64)a1,
                  a1->hGlobalShare,
                  v30,
                  a2,
                  (struct COREDEVICEACCESS *)&v55,
                  v44,
                  (struct _EPROCESS *)a3,
                  a4,
                  (unsigned __int64 *)v46),
          v29 < 0) )
    {
      v18 = v29;
LABEL_31:
      COREACCESS::~COREACCESS((COREACCESS *)v57);
      COREACCESS::~COREACCESS((COREACCESS *)v56);
      if ( v53 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v51);
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v54);
      goto LABEL_34;
    }
    v31 = v16 + 23;
    hAllocation = a1->pOpenAllocationInfo->hAllocation;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v16 + 23));
    v34 = (hAllocation >> 6) & 0xFFFFFF;
    if ( (unsigned int)v34 < *((_DWORD *)v16 + 56) )
    {
      v35 = v16[26];
      v36 = *((_DWORD *)v35 + 4 * v34 + 2);
      if ( ((hAllocation >> 25) & 0x60) == (*((_BYTE *)v35 + 16 * v34 + 8) & 0x60)
        && (v36 & 0x2000) == 0
        && (v36 & 0x1F) != 0 )
      {
        v37 = v36 & 0x1F;
        if ( (_BYTE)v37 == 5 )
        {
          v39 = *((_QWORD *)v35 + 2 * (unsigned int)v34);
LABEL_21:
          ExReleasePushLockSharedEx(v31, 0LL);
          KeLeaveCriticalRegion();
          if ( v39 )
          {
            if ( ADAPTER_RENDER::GdiNodeSupportsGpuVa(v23[2])
              && (v18 = MapGpuVirtualAddressToAllocation(v40, (struct DXGALLOCATION *)v39), v18 < 0) )
            {
              DXGDEVICE::DestroyAllocationInternal(
                (DXGDEVICE *)v23,
                0,
                0LL,
                *(struct DXGRESOURCE **)(v39 + 40),
                0LL,
                DXGDEVICE::DestroyFlagsDefault);
            }
            else
            {
              if ( a5 )
                *a5 = (void *)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*((_QWORD *)v23[2] + 68) + 8LL)
                                                                        + 680LL))(
                                *((_QWORD *)v23[2] + 69),
                                *(_QWORD *)(v39 + 24));
              v18 = 0;
            }
          }
          else
          {
            v18 = -1073741811;
          }
          goto LABEL_31;
        }
        v38 = WdLogNewEntry5_WdError(v37, 2LL * (unsigned int)v34, v33);
        *(_QWORD *)(v38 + 24) = 267LL;
        WdLogEvent5_WdError(v38);
      }
    }
    v39 = 0LL;
    goto LABEL_21;
  }
  v24 = WdLogNewEntry5_WdError(v21, v20, v22);
  hDevice = a1->hDevice;
  v18 = -1073741811;
  *(_QWORD *)(v24 + 24) = hDevice;
  *(_QWORD *)(v24 + 32) = -1073741811LL;
  WdLogEvent5_WdError(v24);
LABEL_34:
  if ( v45 && _InterlockedExchangeAdd64((volatile signed __int64 *)v45 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v45 + 2), v45);
LABEL_37:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v47, v19);
  if ( v49 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v41, &EventProfilerExit, v42, v47);
  return (unsigned int)v18;
}
