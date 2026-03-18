/*
 * XREFs of DxgkReclaimAllocations2 @ 0x1C0139700
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00070E8 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007328 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C00075DC (-AcquireShared@COREACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C0007664 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C00076AC (-Release@COREACCESS@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000CBD0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Open@DXGPAGINGQUEUEBYHANDLE@@QEAAXIPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@_N@Z @ 0x1C001D680 (-Open@DXGPAGINGQUEUEBYHANDLE@@QEAAXIPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@_N@Z.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     ?ReleaseReference@DXGPAGINGQUEUE@@QEAAXXZ @ 0x1C0023F84 (-ReleaseReference@DXGPAGINGQUEUE@@QEAAXXZ.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C010BCB0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?ReclaimAllocations@DXGDEVICE@@QEAAJPEAVDXGPAGINGQUEUE@@PEAU_D3DKMT_RECLAIMALLOCATIONS2@@@Z @ 0x1C010C5B0 (-ReclaimAllocations@DXGDEVICE@@QEAAJPEAVDXGPAGINGQUEUE@@PEAU_D3DKMT_RECLAIMALLOCATIONS2@@@Z.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C01ECF74 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?WakeUpAdapter@DXGADAPTER@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C01F006C (-WakeUpAdapter@DXGADAPTER@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 */

__int64 __fastcall DxgkReclaimAllocations2(ULONG64 a1, __int64 a2, const GUID *a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  struct _KTHREAD **v11; // rbx
  struct _D3DKMT_RECLAIMALLOCATIONS2 *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rbx
  __int64 v17; // rcx
  int v18; // edi
  struct _KEVENT *v19; // r14
  struct _KEVENT *v20; // r14
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rcx
  const GUID *v25; // r8
  int v26; // edi
  _QWORD *v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // rcx
  const GUID *v30; // r8
  struct _KTHREAD ***ThreadProperty; // rax
  struct _KTHREAD ***v33; // rdi
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  const GUID *v37; // r8
  bool v38; // zf
  __int64 v39; // rax
  __int64 v40; // rdx
  const GUID *v41; // r8
  __int64 v42; // rcx
  char v43; // di
  __int64 v44; // rcx
  char v45; // r14
  _QWORD *v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  const GUID *v53; // r8
  int v54; // [rsp+30h] [rbp-138h] BYREF
  __int64 v55; // [rsp+38h] [rbp-130h]
  char v56; // [rsp+40h] [rbp-128h]
  struct DXGPAGINGQUEUE *v57; // [rsp+48h] [rbp-120h] BYREF
  DXGPAGINGQUEUE *v58; // [rsp+50h] [rbp-118h] BYREF
  __int64 v59; // [rsp+58h] [rbp-110h] BYREF
  int v60; // [rsp+60h] [rbp-108h]
  __int64 v61; // [rsp+68h] [rbp-100h]
  struct _D3DKMT_RECLAIMALLOCATIONS2 v62; // [rsp+70h] [rbp-F8h] BYREF
  _BYTE v63[8]; // [rsp+A0h] [rbp-C8h] BYREF
  _BYTE v64[16]; // [rsp+A8h] [rbp-C0h] BYREF
  __int64 v65; // [rsp+B8h] [rbp-B0h]
  char v66; // [rsp+C0h] [rbp-A8h]
  int v67; // [rsp+C4h] [rbp-A4h]
  __int64 v68; // [rsp+C8h] [rbp-A0h]
  _BYTE v69[16]; // [rsp+E8h] [rbp-80h] BYREF
  __int64 v70; // [rsp+F8h] [rbp-70h]
  __int64 v71; // [rsp+128h] [rbp-40h]
  char v72; // [rsp+130h] [rbp-38h]

  v54 = -1;
  v55 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v56 = 1;
    v54 = 2071;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2071);
  }
  else
  {
    v56 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v54, 2071LL);
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
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v54, v35);
    v38 = v56 == 0;
LABEL_38:
    if ( !v38 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v36, &EventProfilerExit, v37, v54);
    return 3221225485LL;
  }
  memset(&v62, 0, sizeof(v62));
  v12 = (struct _D3DKMT_RECLAIMALLOCATIONS2 *)a1;
  if ( a1 >= MmUserProbeAddress )
    v12 = (struct _D3DKMT_RECLAIMALLOCATIONS2 *)MmUserProbeAddress;
  v62 = *v12;
  v57 = 0LL;
  DXGPAGINGQUEUEBYHANDLE::Open((DXGPAGINGQUEUEBYHANDLE *)&v58, v62.hPagingQueue, v11, &v57, 1);
  if ( !v57 )
  {
    v39 = WdLogNewEntry5_WdWarning(v14, v13, v15);
    *(_QWORD *)(v39 + 24) = v62.hPagingQueue;
    *(_QWORD *)(v39 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v39);
    if ( v58 )
      DXGPAGINGQUEUE::ReleaseReference(v58, v40);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v54, v40);
    v38 = v56 == 0;
    goto LABEL_38;
  }
  v16 = *((_QWORD *)v57 + 2);
  v61 = v16;
  v59 = v16;
  v17 = *(_QWORD *)(*(_QWORD *)(v16 + 16) + 16LL);
  if ( *(int *)(v17 + 2184) >= 0x2000 || *(_BYTE *)(v17 + 2484) )
  {
    v18 = *((_DWORD *)DXGGLOBAL::GetGlobal(v17, v13) + 247);
    v60 = v18;
  }
  else
  {
    v18 = 0;
    v60 = 0;
  }
  v19 = *(struct _KEVENT **)(v16 + 16);
  if ( *(_DWORD *)(v16 + 328) == 2 )
  {
    v20 = v19 + 4;
    if ( KeReadStateEvent(v20) )
      goto LABEL_13;
  }
  else
  {
    v20 = v19 + 3;
    if ( KeReadStateEvent(v20) )
      goto LABEL_13;
  }
  KeWaitForSingleObject(v20, Executive, 0, 0, 0LL);
LABEL_13:
  KeEnterCriticalRegion();
  if ( !v18 )
  {
    if ( ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v16 + 104), 0) )
      goto LABEL_15;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v16 + 16) + 16LL) + 96LL));
    v42 = *(_QWORD *)(*(_QWORD *)(v16 + 16) + 16LL);
    if ( *(_DWORD *)(v42 + 136) == 1 )
    {
      DXGADAPTER::WakeUpAdapter(v42, 0xFFFFFFFFLL);
      v43 = 1;
    }
    else
    {
      v43 = 0;
    }
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0q(v42, &EventBlockThread, v41, 40);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v16 + 104), 1u);
    if ( !v43 )
    {
LABEL_62:
      ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v16 + 16) + 16LL) + 96LL, 0LL);
      KeLeaveCriticalRegion();
      goto LABEL_15;
    }
LABEL_61:
    DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v16 + 16) + 16LL));
    goto LABEL_62;
  }
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v16 + 112, 0LL) )
  {
    KeLeaveCriticalRegion();
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v16 + 16) + 16LL) + 96LL));
    v44 = *(_QWORD *)(*(_QWORD *)(v16 + 16) + 16LL);
    if ( *(_DWORD *)(v44 + 136) == 1 )
    {
      DXGADAPTER::WakeUpAdapter(v44, 0xFFFFFFFFLL);
      v45 = 1;
    }
    else
    {
      v45 = 0;
    }
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v16 + 112));
    if ( !v45 )
      goto LABEL_62;
    goto LABEL_61;
  }
LABEL_15:
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v63, v16, 0, v21, 0);
  if ( v66 )
  {
    v46 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v23, v22);
    v46[3] = 275LL;
    v46[4] = 4LL;
    v46[5] = v64;
    v46[6] = 0LL;
    v46[7] = 0LL;
    WdLogEvent5_WdCriticalError(v46);
  }
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v65 + 160) )
  {
    if ( !KeReadStateEvent((PRKEVENT)(v65 + 48)) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v24, &EventBlockThread, v25, 72);
      KeWaitForSingleObject((PVOID)(v65 + 48), Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v65, 0xFFFFFFFF, 0LL);
  }
  v67 = -1;
  v68 = 0LL;
  v66 = 1;
  if ( *(_DWORD *)(v71 + 464) != 1 )
    goto LABEL_69;
  if ( v72 )
  {
    COREACCESS::AcquireShared((__int64)v69, 0xFFFFFFFF, 0LL);
    if ( *(_DWORD *)(v70 + 176) != 1 )
    {
      COREACCESS::Release((COREACCESS *)v69);
LABEL_69:
      COREACCESS::Release((COREACCESS *)v64);
      v50 = WdLogNewEntry5_WdWarning(v48, v47, v49);
      *(_QWORD *)(v50 + 24) = v16;
      *(_QWORD *)(v50 + 32) = -1073741130LL;
      WdLogEvent5_WdWarning(v50);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v63);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v59);
      if ( v58 )
        DXGPAGINGQUEUE::ReleaseReference(v58, v51);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v54, v51);
      if ( v56 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v52, &EventProfilerExit, v53, v54);
      return 3221226166LL;
    }
  }
  v26 = DXGDEVICE::ReclaimAllocations((DXGDEVICE *)v16, v57, &v62);
  if ( v26 >= 0 )
  {
    v27 = (_QWORD *)(a1 + 32);
    if ( a1 + 32 >= MmUserProbeAddress )
      v27 = (_QWORD *)MmUserProbeAddress;
    *v27 = v62.PagingFenceValue;
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v63);
  if ( v60 )
    ExReleasePushLockSharedEx(v16 + 112, 0LL);
  else
    ExReleaseResourceLite(*(PERESOURCE *)(v16 + 104));
  KeLeaveCriticalRegion();
  if ( v58 )
    DXGPAGINGQUEUE::ReleaseReference(v58, v28);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v54, v28);
  if ( v56 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v29, &EventProfilerExit, v30, v54);
  }
  return (unsigned int)v26;
}
