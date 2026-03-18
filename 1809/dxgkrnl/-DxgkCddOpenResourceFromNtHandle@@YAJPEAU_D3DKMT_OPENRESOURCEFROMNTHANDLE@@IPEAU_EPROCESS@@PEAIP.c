/*
 * XREFs of ?DxgkCddOpenResourceFromNtHandle@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z @ 0x1C01DCFE0
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
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C00F0B28 (--$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROM.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00F7E34 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkCddOpenResourceFromNtHandle(
        struct _D3DKMT_OPENRESOURCEFROMNTHANDLE *a1,
        unsigned int a2,
        GUID *a3,
        unsigned int *a4,
        void **a5,
        unsigned __int64 *a6)
{
  __int64 v9; // rcx
  struct DXGPROCESS *Current; // r14
  __int64 v11; // rax
  int v12; // ebx
  NTSTATUS v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rsi
  __int64 v18; // rax
  HANDLE hNtHandle; // rcx
  D3DKMT_HANDLE hDevice; // edx
  char v21; // r15
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  ADAPTER_RENDER **v25; // rsi
  __int64 v26; // rax
  __int64 v27; // rax
  ADAPTER_RENDER *v28; // rax
  __int64 v29; // r9
  unsigned int v30; // r8d
  D3DKMT_HANDLE hAllocation; // r15d
  __int64 v32; // rax
  __int64 v33; // rdx
  int v34; // ecx
  __int64 v35; // rcx
  __int64 v36; // rax
  struct _VIDMM_MULTI_ALLOC **v37; // rdi
  struct ADAPTER_RENDER *v38; // r11
  __int64 v39; // rcx
  const GUID *v40; // r8
  struct DXGDEVICE *v42; // [rsp+58h] [rbp-B0h] BYREF
  struct DXGDEVICE *v43; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD v44[2]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v45; // [rsp+78h] [rbp-90h]
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+80h] [rbp-88h] BYREF
  PVOID v47; // [rsp+88h] [rbp-80h]
  _BYTE v48[16]; // [rsp+90h] [rbp-78h] BYREF
  int v49; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v50; // [rsp+A8h] [rbp-60h]
  char v51; // [rsp+B0h] [rbp-58h]
  PVOID Object; // [rsp+B8h] [rbp-50h] BYREF
  PERESOURCE *v53; // [rsp+C8h] [rbp-40h] BYREF
  _BYTE v54[32]; // [rsp+D0h] [rbp-38h] BYREF
  _BYTE v55[56]; // [rsp+F0h] [rbp-18h] BYREF

  v49 = -1;
  v50 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v51 = 1;
    v49 = 3034;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 3034);
  }
  else
  {
    v51 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v49, 3034);
  HandleInformation = 0LL;
  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v11 = WdLogNewEntry5_WdError(v9);
    v12 = -1073741811;
    *(_QWORD *)(v11 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v11);
    goto LABEL_46;
  }
  v13 = ObReferenceObjectByHandle(
          a1->hNtHandle,
          0x20000u,
          g_pDxgkSharedAllocationObjectType,
          1,
          &Object,
          &HandleInformation);
  v17 = v13;
  v12 = v13;
  v47 = Object;
  if ( v13 == -1073741788 )
  {
    v18 = WdLogNewEntry5_WdWarning(v15, v14, v16);
    hNtHandle = a1->hNtHandle;
    *(_QWORD *)(v18 + 32) = -1073741788LL;
LABEL_9:
    *(_QWORD *)(v18 + 24) = hNtHandle;
    WdLogEvent5_WdWarning(v18);
    goto LABEL_44;
  }
  if ( v13 < 0 )
  {
    v18 = WdLogNewEntry5_WdWarning(v15, v14, v16);
    hNtHandle = a1->hNtHandle;
    *(_QWORD *)(v18 + 32) = v17;
    goto LABEL_9;
  }
  hDevice = a1->hDevice;
  v43 = 0LL;
  v21 = (HandleInformation.GrantedAccess & 1) == 0;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v42, hDevice, (struct _KTHREAD **)Current, &v43);
  v25 = (ADAPTER_RENDER **)v43;
  if ( !v43 )
  {
    v26 = WdLogNewEntry5_WdError(v23);
    v12 = -1073741811;
    *(_QWORD *)(v26 + 24) = a1->hDevice;
    *(_QWORD *)(v26 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v26);
    goto LABEL_14;
  }
  if ( !a1->TotalPrivateDriverDataBufferSize && !a1->ResourcePrivateDriverDataSize )
  {
    v27 = WdLogNewEntry5_WdWarning(v23, v22, v24);
    v12 = -1073741811;
    *(_QWORD *)(v27 + 24) = v25;
    *(_QWORD *)(v27 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v27);
    goto LABEL_14;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v48, v43);
  v28 = v25[2];
  LOBYTE(v45) = 0;
  v44[1] = *((_QWORD *)v28 + 2);
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v44);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)&v53, (__int64)v25, 0, v29, 0);
  v12 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)&v53);
  if ( v12 >= 0 )
  {
    v12 = DXGDEVICE::OpenResource<_D3DKMT_OPENRESOURCEFROMNTHANDLE>(
            (DXGDEVICE *)v25,
            (__int64)a1,
            v30,
            (__int64)v47,
            a2,
            &v53,
            v21,
            (struct _EPROCESS *)a3,
            a4,
            a6);
    if ( v12 >= 0 )
    {
      hAllocation = a1->pOpenAllocationInfo2->hAllocation;
      DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 208));
      v32 = (hAllocation >> 6) & 0xFFFFFF;
      if ( (unsigned int)v32 < *((_DWORD *)Current + 62) )
      {
        v33 = *((_QWORD *)Current + 29);
        v34 = *(_DWORD *)(v33 + 16 * v32 + 8);
        if ( ((hAllocation >> 25) & 0x60) == (*(_BYTE *)(v33 + 16 * v32 + 8) & 0x60)
          && (v34 & 0x2000) == 0
          && (v34 & 0x1F) != 0 )
        {
          v35 = v34 & 0x1F;
          if ( (_BYTE)v35 == 5 )
          {
            v37 = *(struct _VIDMM_MULTI_ALLOC ***)(v33 + 16LL * (unsigned int)v32);
LABEL_31:
            ExReleasePushLockSharedEx((char *)Current + 208, 0LL);
            KeLeaveCriticalRegion();
            if ( v37 )
            {
              if ( !ADAPTER_RENDER::GdiNodeSupportsGpuVa(v25[2])
                || (v12 = MapGpuVirtualAddressToAllocation(v38, (struct DXGALLOCATION *)v37), v12 >= 0) )
              {
                if ( a5 )
                  *a5 = (void *)VIDMM_EXPORT::VidMmGetAllocationSection(
                                  *((VIDMM_EXPORT **)v25[2] + 68),
                                  *((struct VIDMM_GLOBAL **)v25[2] + 69),
                                  v37[3]);
                COREACCESS::~COREACCESS((COREACCESS *)v55);
                COREACCESS::~COREACCESS((COREACCESS *)v54);
                if ( (_BYTE)v45 )
                  DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v44);
                DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v48);
                if ( !v42 )
                  goto LABEL_44;
                goto LABEL_42;
              }
              DXGDEVICE::DestroyAllocationInternal(
                (DXGDEVICE *)v25,
                0,
                0LL,
                v37[5],
                0LL,
                DXGDEVICE::DestroyFlagsDefault);
            }
            else
            {
              v12 = -1073741811;
            }
            goto LABEL_20;
          }
          v36 = WdLogNewEntry5_WdError(v35);
          *(_QWORD *)(v36 + 24) = 316LL;
          WdLogEvent5_WdError(v36);
        }
      }
      v37 = 0LL;
      goto LABEL_31;
    }
  }
LABEL_20:
  COREACCESS::~COREACCESS((COREACCESS *)v55);
  COREACCESS::~COREACCESS((COREACCESS *)v54);
  if ( (_BYTE)v45 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v44);
  DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v48);
LABEL_14:
  if ( v42 )
  {
LABEL_42:
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v42 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v42 + 2), v42);
  }
LABEL_44:
  if ( v47 )
    ObfDereferenceObject(v47);
LABEL_46:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v49);
  if ( v51 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v39, &EventProfilerExit, v40, v49);
  return (unsigned int)v12;
}
