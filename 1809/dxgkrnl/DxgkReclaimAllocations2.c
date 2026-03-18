/*
 * XREFs of DxgkReclaimAllocations2 @ 0x1C00B0D70
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0010624 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0010E18 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C0011778 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00118EC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C00119E0 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0011C84 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0011DA0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGPAGINGQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@_N@Z @ 0x1C001D6A4 (--0DXGPAGINGQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@_N@Z.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ??1DXGPAGINGQUEUEBYHANDLE@@QEAA@XZ @ 0x1C0021074 (--1DXGPAGINGQUEUEBYHANDLE@@QEAA@XZ.c)
 *     ?ReclaimAllocations@DXGDEVICE@@QEAAJPEAVDXGPAGINGQUEUE@@PEAU_D3DKMT_RECLAIMALLOCATIONS2@@@Z @ 0x1C0105F90 (-ReclaimAllocations@DXGDEVICE@@QEAAJPEAVDXGPAGINGQUEUE@@PEAU_D3DKMT_RECLAIMALLOCATIONS2@@@Z.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C0106B60 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C01BD354 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 */

__int64 __fastcall DxgkReclaimAllocations2(ULONG64 a1, __int64 a2, const GUID *a3)
{
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v6; // rcx
  struct _KTHREAD **v7; // rbx
  _D3DKMT_RECLAIMALLOCATIONS2 *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rbx
  __int64 v13; // rcx
  int v14; // edi
  struct _KEVENT *v15; // r14
  __int64 v16; // r9
  __int64 v17; // rcx
  __int64 v18; // rcx
  const GUID *v19; // r8
  int v20; // edi
  _QWORD *v21; // rdx
  __int64 v22; // rcx
  const GUID *v23; // r8
  struct _KTHREAD ***ThreadProperty; // rax
  struct _KTHREAD ***v26; // rdi
  __int64 v27; // rax
  __int64 v28; // rcx
  const GUID *v29; // r8
  __int64 v30; // rax
  struct _KEVENT *v31; // rcx
  __int64 v32; // rcx
  unsigned __int8 v33; // di
  const GUID *v34; // r8
  unsigned __int8 v35; // di
  _QWORD *v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // rax
  __int64 v41; // rcx
  const GUID *v42; // r8
  int v43; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v44; // [rsp+38h] [rbp-D0h]
  char v45; // [rsp+40h] [rbp-C8h]
  __int64 v46; // [rsp+48h] [rbp-C0h] BYREF
  int v47; // [rsp+50h] [rbp-B8h]
  _D3DKMT_RECLAIMALLOCATIONS2 v48; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v49[8]; // [rsp+80h] [rbp-88h] BYREF
  struct _KTHREAD **v50[2]; // [rsp+88h] [rbp-80h] BYREF
  DXGADAPTER *v51; // [rsp+98h] [rbp-70h]
  char v52; // [rsp+A0h] [rbp-68h]
  struct _KTHREAD **v53[5]; // [rsp+A8h] [rbp-60h] BYREF
  char v54; // [rsp+D0h] [rbp-38h]
  struct DXGPAGINGQUEUE *v55; // [rsp+118h] [rbp+10h] BYREF
  char v56; // [rsp+120h] [rbp+18h] BYREF
  __int64 v57; // [rsp+128h] [rbp+20h]

  v43 = -1;
  v44 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v45 = 1;
    v43 = 2071;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2071);
  }
  else
  {
    v45 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v43, 2071);
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v7 = (struct _KTHREAD **)ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 323) & 4) != 0 )
    {
      ThreadProperty = (struct _KTHREAD ***)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      v26 = ThreadProperty;
      if ( ThreadProperty )
      {
        ObfDereferenceObject(ThreadProperty);
        v7 = *v26;
      }
    }
  }
  if ( !v7 )
  {
    v27 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v27 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v27);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v43);
    if ( !v45 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
      return 3221225485LL;
LABEL_39:
    McTemplateK0q(v28, &EventProfilerExit, v29, v43);
    return 3221225485LL;
  }
  v8 = (_D3DKMT_RECLAIMALLOCATIONS2 *)a1;
  if ( a1 >= MmUserProbeAddress )
    v8 = (_D3DKMT_RECLAIMALLOCATIONS2 *)MmUserProbeAddress;
  v48 = *v8;
  v55 = 0LL;
  DXGPAGINGQUEUEBYHANDLE::DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)&v56, v48.hPagingQueue, v7, &v55, 1);
  if ( !v55 )
  {
    v30 = WdLogNewEntry5_WdWarning(v10, v9, v11);
    *(_QWORD *)(v30 + 24) = v48.hPagingQueue;
    *(_QWORD *)(v30 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v30);
    DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)&v56);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v43);
    if ( !v45 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
      return 3221225485LL;
    goto LABEL_39;
  }
  v12 = *((_QWORD *)v55 + 2);
  v57 = v12;
  v46 = v12;
  v13 = *(_QWORD *)(*(_QWORD *)(v12 + 16) + 16LL);
  if ( *(int *)(v13 + 2160) >= 0x2000 || *(_BYTE *)(v13 + 2452) )
  {
    v14 = *((_DWORD *)DXGGLOBAL::GetGlobal(v13) + 255);
    v47 = v14;
  }
  else
  {
    v14 = 0;
    v47 = 0;
  }
  v15 = *(struct _KEVENT **)(v12 + 16);
  if ( *(_DWORD *)(v12 + 328) == 2 )
  {
    if ( KeReadStateEvent(v15 + 4) )
      goto LABEL_13;
    v31 = v15 + 4;
  }
  else
  {
    if ( KeReadStateEvent(v15 + 3) )
      goto LABEL_13;
    v31 = v15 + 3;
  }
  KeWaitForSingleObject(v31, Executive, 0, 0, 0LL);
LABEL_13:
  KeEnterCriticalRegion();
  if ( v14 )
  {
    if ( (unsigned __int8)ExTryAcquirePushLockSharedEx(v12 + 112, 0LL) )
      goto LABEL_15;
    KeLeaveCriticalRegion();
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v12 + 16) + 16LL) + 96LL));
    v35 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v12 + 16) + 16LL));
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v12 + 112));
    if ( !v35 )
      goto LABEL_55;
    goto LABEL_54;
  }
  if ( ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v12 + 104), 0) )
    goto LABEL_15;
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v12 + 16) + 16LL) + 96LL));
  v33 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v12 + 16) + 16LL));
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    McTemplateK0q(v32, &EventBlockThread, v34, 40);
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v12 + 104), 1u);
  if ( v33 )
LABEL_54:
    DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v12 + 16) + 16LL));
LABEL_55:
  ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v12 + 16) + 16LL) + 96LL, 0LL);
  KeLeaveCriticalRegion();
LABEL_15:
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v49, v12, 0, v16, 0);
  if ( v52 )
  {
    v36 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v17);
    v36[3] = 275LL;
    v36[4] = 4LL;
    v36[5] = v50;
    v36[6] = 0LL;
    v36[7] = 0LL;
    WdLogEvent5_WdCriticalError(v36);
  }
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v51 + 20) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v51 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v18, &EventBlockThread, v19, 72);
      KeWaitForSingleObject((char *)v51 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v51);
  }
  v52 = 1;
  if ( *((_DWORD *)v53[4] + 116) != 1 )
    goto LABEL_62;
  if ( v54 )
  {
    COREACCESS::AcquireShared((DXGADAPTER **)v53);
    if ( *((_DWORD *)v53[2] + 44) != 1 )
    {
      COREACCESS::Release(v53);
LABEL_62:
      COREACCESS::Release(v50);
      v40 = WdLogNewEntry5_WdWarning(v38, v37, v39);
      *(_QWORD *)(v40 + 24) = v12;
      *(_QWORD *)(v40 + 32) = -1073741130LL;
      WdLogEvent5_WdWarning(v40);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v49);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v46);
      DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)&v56);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v43);
      if ( v45 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v41, &EventProfilerExit, v42, v43);
      return 3221226166LL;
    }
  }
  v20 = DXGDEVICE::ReclaimAllocations((DXGDEVICE *)v12, v55, &v48);
  if ( v20 >= 0 )
  {
    v21 = (_QWORD *)(a1 + 32);
    if ( a1 + 32 >= MmUserProbeAddress )
      v21 = (_QWORD *)MmUserProbeAddress;
    *v21 = v48.PagingFenceValue;
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v49);
  if ( v47 )
    ExReleasePushLockSharedEx(v12 + 112, 0LL);
  else
    ExReleaseResourceLite(*(PERESOURCE *)(v12 + 104));
  KeLeaveCriticalRegion();
  DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)&v56);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v43);
  if ( v45 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v22, &EventProfilerExit, v23, v43);
  }
  return (unsigned int)v20;
}
