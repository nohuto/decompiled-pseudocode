/*
 * XREFs of ?DxgkCddOpenResourceFromNtHandle@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z @ 0x1C020BAE0
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
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C00EE0B8 (--$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROM.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00EEE94 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C012293C (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?MapGpuVirtualAddressToAllocation@@YAJPEAVADAPTER_RENDER@@PEAVDXGALLOCATION@@@Z @ 0x1C020CD98 (-MapGpuVirtualAddressToAllocation@@YAJPEAVADAPTER_RENDER@@PEAVDXGALLOCATION@@@Z.c)
 */

__int64 __fastcall DxgkCddOpenResourceFromNtHandle(
        struct _D3DKMT_OPENRESOURCEFROMNTHANDLE *a1,
        int a2,
        const GUID *a3,
        unsigned int *a4,
        void **a5,
        unsigned __int64 *a6)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  struct DXGPROCESS *Current; // r14
  __int64 v13; // rax
  int v14; // ebx
  __int64 v15; // rdx
  NTSTATUS v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  PVOID v20; // r13
  __int64 v21; // rsi
  __int64 v22; // rax
  HANDLE hNtHandle; // rcx
  D3DKMT_HANDLE hDevice; // edx
  char v25; // r15
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  ADAPTER_RENDER **v29; // rsi
  __int64 v30; // rax
  bool v31; // zf
  __int64 v32; // rax
  ADAPTER_RENDER *v33; // rax
  __int64 v34; // r9
  unsigned int v35; // r8d
  D3DKMT_HANDLE hAllocation; // edi
  __int64 v37; // rax
  __int64 v38; // r8
  int v39; // ecx
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rdi
  struct ADAPTER_RENDER *v43; // r11
  __int64 v44; // rcx
  const GUID *v45; // r8
  struct DXGDEVICE *v47; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v48; // [rsp+58h] [rbp-A8h]
  _BYTE v49[8]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v50; // [rsp+68h] [rbp-98h]
  char v51; // [rsp+70h] [rbp-90h]
  struct COREDEVICEACCESS *v52; // [rsp+78h] [rbp-88h]
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+80h] [rbp-80h] BYREF
  struct DXGDEVICE *v54; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v55[16]; // [rsp+90h] [rbp-70h] BYREF
  int v56; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v57; // [rsp+A8h] [rbp-58h]
  char v58; // [rsp+B0h] [rbp-50h]
  PVOID Object; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v60; // [rsp+C0h] [rbp-40h]
  __int64 v61; // [rsp+C8h] [rbp-38h]
  __int64 v62; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v63[64]; // [rsp+D8h] [rbp-28h] BYREF
  _BYTE v64[88]; // [rsp+118h] [rbp+18h] BYREF

  v56 = -1;
  v61 = (__int64)a4;
  v48 = (__int64)a3;
  LODWORD(v52) = a2;
  v60 = (__int64)a6;
  v57 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v58 = 1;
    v56 = 3034;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 3034);
  }
  else
  {
    v58 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v56, 3034LL);
  HandleInformation = 0LL;
  Current = DXGPROCESS::GetCurrent(v8, v7);
  if ( !Current )
  {
    v13 = WdLogNewEntry5_WdError(v10, v9, v11);
    v14 = -1073741811;
    *(_QWORD *)(v13 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v13);
    goto LABEL_47;
  }
  v16 = ObReferenceObjectByHandle(
          a1->hNtHandle,
          0x20000u,
          g_pDxgkSharedAllocationObjectType,
          1,
          &Object,
          &HandleInformation);
  v20 = Object;
  v21 = v16;
  v14 = v16;
  if ( v16 == -1073741788 )
  {
    v22 = WdLogNewEntry5_WdWarning(v18, v17, v19);
    hNtHandle = a1->hNtHandle;
    *(_QWORD *)(v22 + 32) = -1073741788LL;
LABEL_9:
    *(_QWORD *)(v22 + 24) = hNtHandle;
    WdLogEvent5_WdWarning(v22);
    goto LABEL_45;
  }
  if ( v16 < 0 )
  {
    v22 = WdLogNewEntry5_WdWarning(v18, v17, v19);
    hNtHandle = a1->hNtHandle;
    *(_QWORD *)(v22 + 32) = v21;
    goto LABEL_9;
  }
  hDevice = a1->hDevice;
  v54 = 0LL;
  v25 = (HandleInformation.GrantedAccess & 1) == 0;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v47, hDevice, (struct _KTHREAD **)Current, &v54);
  v29 = (ADAPTER_RENDER **)v54;
  if ( !v54 )
  {
    v30 = WdLogNewEntry5_WdError(v27, v26, v28);
    v14 = -1073741811;
    *(_QWORD *)(v30 + 24) = a1->hDevice;
    *(_QWORD *)(v30 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v30);
    goto LABEL_14;
  }
  if ( !a1->TotalPrivateDriverDataBufferSize && !a1->ResourcePrivateDriverDataSize )
  {
    v32 = WdLogNewEntry5_WdWarning(v27, v26, v28);
    v14 = -1073741811;
    *(_QWORD *)(v32 + 24) = v29;
    *(_QWORD *)(v32 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v32);
    goto LABEL_14;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v55, v54);
  v33 = v29[2];
  v51 = 0;
  v50 = *((_QWORD *)v33 + 2);
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v49);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)&v62, (__int64)v29, 0, v34, 0);
  v14 = COREDEVICEACCESS::AcquireShared((__int64)&v62, 0xFFFFFFFF, 0LL);
  if ( v14 >= 0 )
  {
    v14 = DXGDEVICE::OpenResource<_D3DKMT_OPENRESOURCEFROMNTHANDLE>(
            (struct DXGDEVICE *)v29,
            (__int64)a1,
            v35,
            (__int64)v20,
            (unsigned int)v52,
            (struct COREDEVICEACCESS *)&v62,
            v25,
            (struct _EPROCESS *)v48,
            (unsigned int *)v61,
            (unsigned __int64 *)v60);
    if ( v14 >= 0 )
    {
      hAllocation = a1->pOpenAllocationInfo2->hAllocation;
      DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 184));
      v37 = (hAllocation >> 6) & 0xFFFFFF;
      if ( (unsigned int)v37 < *((_DWORD *)Current + 56) )
      {
        v38 = *((_QWORD *)Current + 26);
        v39 = *(_DWORD *)(v38 + 16 * v37 + 8);
        if ( ((hAllocation >> 25) & 0x60) == (*(_BYTE *)(v38 + 16 * v37 + 8) & 0x60)
          && (v39 & 0x2000) == 0
          && (v39 & 0x1F) != 0 )
        {
          v40 = v39 & 0x1F;
          if ( (_BYTE)v40 == 5 )
          {
            v42 = *(_QWORD *)(v38 + 16LL * (unsigned int)v37);
LABEL_31:
            ExReleasePushLockSharedEx((char *)Current + 184, 0LL);
            KeLeaveCriticalRegion();
            if ( v42 )
            {
              if ( !ADAPTER_RENDER::GdiNodeSupportsGpuVa(v29[2])
                || (v14 = MapGpuVirtualAddressToAllocation(v43, (struct DXGALLOCATION *)v42), v14 >= 0) )
              {
                if ( a5 )
                  *a5 = (void *)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*((_QWORD *)v29[2] + 68) + 8LL)
                                                                          + 680LL))(
                                  *((_QWORD *)v29[2] + 69),
                                  *(_QWORD *)(v42 + 24));
                COREACCESS::~COREACCESS((COREACCESS *)v64);
                COREACCESS::~COREACCESS((COREACCESS *)v63);
                if ( v51 )
                  DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v49);
                DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v55);
                if ( !v47 )
                  goto LABEL_45;
                v15 = _InterlockedExchangeAdd64((volatile signed __int64 *)v47 + 8, 0xFFFFFFFFFFFFFFFFuLL);
                v31 = v15 == 1;
                goto LABEL_43;
              }
              DXGDEVICE::DestroyAllocationInternal(
                (DXGDEVICE *)v29,
                0,
                0LL,
                *(struct DXGRESOURCE **)(v42 + 40),
                0LL,
                DXGDEVICE::DestroyFlagsDefault);
            }
            else
            {
              v14 = -1073741811;
            }
            goto LABEL_20;
          }
          v41 = WdLogNewEntry5_WdError(v40, 2LL * (unsigned int)v37, v38);
          *(_QWORD *)(v41 + 24) = 267LL;
          WdLogEvent5_WdError(v41);
        }
      }
      v42 = 0LL;
      goto LABEL_31;
    }
  }
LABEL_20:
  COREACCESS::~COREACCESS((COREACCESS *)v64);
  COREACCESS::~COREACCESS((COREACCESS *)v63);
  if ( v51 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v49);
  DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v55);
LABEL_14:
  if ( v47 )
  {
    v31 = _InterlockedExchangeAdd64((volatile signed __int64 *)v47 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1;
LABEL_43:
    if ( v31 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v47 + 2), v47);
  }
LABEL_45:
  if ( v20 )
    ObfDereferenceObject(v20);
LABEL_47:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v56, v15);
  if ( v58 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v44, &EventProfilerExit, v45, v56);
  return (unsigned int)v14;
}
