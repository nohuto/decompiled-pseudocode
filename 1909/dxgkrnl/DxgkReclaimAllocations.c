/*
 * XREFs of DxgkReclaimAllocations @ 0x1C01350C0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006D80 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00070E8 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007328 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C00075DC (-AcquireShared@COREACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C0007664 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C00076AC (-Release@COREACCESS@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000CBD0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C010BCB0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?ReclaimAllocations@DXGDEVICE@@QEAAJPEAVDXGPAGINGQUEUE@@PEAU_D3DKMT_RECLAIMALLOCATIONS2@@@Z @ 0x1C010C5B0 (-ReclaimAllocations@DXGDEVICE@@QEAAJPEAVDXGPAGINGQUEUE@@PEAU_D3DKMT_RECLAIMALLOCATIONS2@@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01252BC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C01ECF74 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?WakeUpAdapter@DXGADAPTER@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C01F006C (-WakeUpAdapter@DXGADAPTER@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 */

__int64 __fastcall DxgkReclaimAllocations(__int64 a1, __int64 a2, const GUID *a3)
{
  ULONG64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  struct _KTHREAD **v11; // rsi
  struct _KTHREAD **v12; // r8
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  struct DXGDEVICE *v17; // rdi
  __int64 v18; // rcx
  int v19; // esi
  struct _KEVENT *v20; // r14
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rcx
  const GUID *v25; // r8
  struct DXGDEVICE *v26; // rdi
  unsigned int v27; // esi
  __int64 v28; // rdx
  __int64 v29; // rcx
  const GUID *v30; // r8
  struct _KTHREAD ***ThreadProperty; // rax
  struct _KTHREAD ***v33; // r14
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  const GUID *v37; // r8
  bool v38; // zf
  __int64 v39; // rax
  __int64 v40; // rdx
  struct _KEVENT *v41; // rcx
  const GUID *v42; // r8
  __int64 v43; // rcx
  char v44; // si
  __int64 v45; // rcx
  char v46; // si
  _QWORD *v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rcx
  const GUID *v54; // r8
  struct DXGDEVICE *v55; // [rsp+30h] [rbp-158h] BYREF
  struct DXGDEVICE *v56; // [rsp+38h] [rbp-150h] BYREF
  int v57; // [rsp+40h] [rbp-148h] BYREF
  __int64 v58; // [rsp+48h] [rbp-140h]
  char v59; // [rsp+50h] [rbp-138h]
  struct DXGDEVICE *v60; // [rsp+58h] [rbp-130h] BYREF
  int v61; // [rsp+60h] [rbp-128h]
  unsigned int v62[4]; // [rsp+68h] [rbp-120h]
  __int128 v63; // [rsp+78h] [rbp-110h]
  __int64 v64; // [rsp+88h] [rbp-100h]
  _D3DKMT_RECLAIMALLOCATIONS2 v65; // [rsp+90h] [rbp-F8h] BYREF
  char v66[8]; // [rsp+C0h] [rbp-C8h] BYREF
  _BYTE v67[16]; // [rsp+C8h] [rbp-C0h] BYREF
  __int64 v68; // [rsp+D8h] [rbp-B0h]
  char v69; // [rsp+E0h] [rbp-A8h]
  int v70; // [rsp+E4h] [rbp-A4h]
  __int64 v71; // [rsp+E8h] [rbp-A0h]
  _BYTE v72[16]; // [rsp+108h] [rbp-80h] BYREF
  __int64 v73; // [rsp+118h] [rbp-70h]
  __int64 v74; // [rsp+148h] [rbp-40h]
  char v75; // [rsp+150h] [rbp-38h]

  v3 = a1;
  v57 = -1;
  v58 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v59 = 1;
    v57 = 2071;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2071);
  }
  else
  {
    v59 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v57, 2071LL);
  CurrentProcess = PsGetCurrentProcess(v5, v4);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v11 = (struct _KTHREAD **)ProcessDxgProcess;
  if ( !ProcessDxgProcess || (*(_BYTE *)(ProcessDxgProcess + 299) & 4) != 0 )
  {
    ThreadProperty = (struct _KTHREAD ***)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
    v33 = ThreadProperty;
    if ( ThreadProperty )
    {
      ObfDereferenceObject(ThreadProperty);
      v11 = *v33;
    }
  }
  if ( !v11 )
  {
    v34 = WdLogNewEntry5_WdError(v9, v8, v10);
    *(_QWORD *)(v34 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v34);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v57, v35);
    v38 = v59 == 0;
LABEL_36:
    if ( !v38 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v36, &EventProfilerExit, v37, v57);
    return 3221225485LL;
  }
  if ( v3 >= MmUserProbeAddress )
    v3 = MmUserProbeAddress;
  *(_OWORD *)v62 = *(_OWORD *)v3;
  v63 = *(_OWORD *)(v3 + 16);
  v64 = *(_QWORD *)(v3 + 32);
  v65.hPagingQueue = 0;
  v65.NumAllocations = v64;
  v65.pResources = *(D3DKMT_HANDLE **)&v62[2];
  *(_OWORD *)&v65.HandleList = v63;
  v65.PagingFenceValue = 0LL;
  v12 = v11;
  v13 = v62[0];
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v55, v62[0], v12, &v56);
  v17 = v56;
  if ( !v56 )
  {
    v39 = WdLogNewEntry5_WdError(v15, v14, v16);
    *(_QWORD *)(v39 + 24) = v13;
    *(_QWORD *)(v39 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v39);
    if ( v55 && _InterlockedExchangeAdd64((volatile signed __int64 *)v55 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v55 + 2), v55);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v57, v40);
    v38 = v59 == 0;
    goto LABEL_36;
  }
  v60 = v56;
  v18 = *(_QWORD *)(*((_QWORD *)v56 + 2) + 16LL);
  if ( *(int *)(v18 + 2184) >= 0x2000 || *(_BYTE *)(v18 + 2484) )
  {
    v19 = *((_DWORD *)DXGGLOBAL::GetGlobal(v18, v14) + 247);
    v61 = v19;
  }
  else
  {
    v19 = 0;
    v61 = 0;
  }
  v20 = (struct _KEVENT *)*((_QWORD *)v17 + 2);
  if ( *((_DWORD *)v17 + 82) == 2 )
  {
    if ( KeReadStateEvent(v20 + 4) )
      goto LABEL_14;
    v41 = v20 + 4;
  }
  else
  {
    if ( KeReadStateEvent(v20 + 3) )
      goto LABEL_14;
    v41 = v20 + 3;
  }
  KeWaitForSingleObject(v41, Executive, 0, 0, 0LL);
LABEL_14:
  KeEnterCriticalRegion();
  if ( v19 )
  {
    if ( (unsigned __int8)ExTryAcquirePushLockSharedEx((char *)v17 + 112, 0LL) )
      goto LABEL_16;
    KeLeaveCriticalRegion();
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)v17 + 2) + 16LL) + 96LL));
    v45 = *(_QWORD *)(*((_QWORD *)v17 + 2) + 16LL);
    if ( *(_DWORD *)(v45 + 136) == 1 )
    {
      DXGADAPTER::WakeUpAdapter(v45, 0xFFFFFFFFLL);
      v46 = 1;
    }
    else
    {
      v46 = 0;
    }
    DXGPUSHLOCK::AcquireShared((struct DXGDEVICE *)((char *)v17 + 112));
    if ( !v46 )
    {
LABEL_62:
      ExReleasePushLockSharedEx(*(_QWORD *)(*((_QWORD *)v17 + 2) + 16LL) + 96LL, 0LL);
      KeLeaveCriticalRegion();
      goto LABEL_16;
    }
LABEL_61:
    DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*((_QWORD *)v17 + 2) + 16LL));
    goto LABEL_62;
  }
  if ( !ExAcquireResourceExclusiveLite(*((PERESOURCE *)v17 + 13), 0) )
  {
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)v17 + 2) + 16LL) + 96LL));
    v43 = *(_QWORD *)(*((_QWORD *)v17 + 2) + 16LL);
    if ( *(_DWORD *)(v43 + 136) == 1 )
    {
      DXGADAPTER::WakeUpAdapter(v43, 0xFFFFFFFFLL);
      v44 = 1;
    }
    else
    {
      v44 = 0;
    }
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0q(v43, &EventBlockThread, v42, 40);
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)v17 + 13), 1u);
    if ( !v44 )
      goto LABEL_62;
    goto LABEL_61;
  }
LABEL_16:
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v66, (__int64)v17, 0, v21, 0);
  if ( v69 )
  {
    v47 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v23, v22);
    v47[3] = 275LL;
    v47[4] = 4LL;
    v47[5] = v67;
    v47[6] = 0LL;
    v47[7] = 0LL;
    WdLogEvent5_WdCriticalError(v47);
  }
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v68 + 160) )
  {
    if ( !KeReadStateEvent((PRKEVENT)(v68 + 48)) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v24, &EventBlockThread, v25, 72);
      KeWaitForSingleObject((PVOID)(v68 + 48), Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v68, 0xFFFFFFFF, 0LL);
  }
  v70 = -1;
  v71 = 0LL;
  v69 = 1;
  if ( *(_DWORD *)(v74 + 464) != 1 )
    goto LABEL_69;
  if ( v75 )
  {
    COREACCESS::AcquireShared((__int64)v72, 0xFFFFFFFF, 0LL);
    if ( *(_DWORD *)(v73 + 176) != 1 )
    {
      COREACCESS::Release((COREACCESS *)v72);
LABEL_69:
      COREACCESS::Release((COREACCESS *)v67);
      v51 = WdLogNewEntry5_WdWarning(v49, v48, v50);
      *(_QWORD *)(v51 + 24) = v56;
      *(_QWORD *)(v51 + 32) = -1073741130LL;
      WdLogEvent5_WdWarning(v51);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v66);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v60);
      if ( v55 && _InterlockedExchangeAdd64((volatile signed __int64 *)v55 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v55 + 2), v55);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v57, v52);
      if ( v59 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v53, &EventProfilerExit, v54, v57);
      return 3221226166LL;
    }
  }
  v26 = v56;
  v27 = DXGDEVICE::ReclaimAllocations(v56, 0LL, &v65);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v66);
  if ( v61 )
    ExReleasePushLockSharedEx((char *)v26 + 112, 0LL);
  else
    ExReleaseResourceLite(*((PERESOURCE *)v26 + 13));
  KeLeaveCriticalRegion();
  if ( v55 && _InterlockedExchangeAdd64((volatile signed __int64 *)v55 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v55 + 2), v55);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v57, v28);
  if ( v59 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v29, &EventProfilerExit, v30, v57);
  }
  return v27;
}
