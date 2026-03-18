/*
 * XREFs of ?DxgkCddSubmitPresentHistory@@YAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C00FA060
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F590 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00100A8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C00105FC (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0010624 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C001071C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0010E18 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C0011778 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00118EC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0011C44 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0011DA0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ?GetDeviceExecutionState@DXGDEVICE@@QEBAJPEAW4_D3DKMT_DEVICEEXECUTION_STATE@@@Z @ 0x1C00CF054 (-GetDeviceExecutionState@DXGDEVICE@@QEBAJPEAW4_D3DKMT_DEVICEEXECUTION_STATE@@@Z.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00EA118 (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EF4FC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@@Z @ 0x1C00FC840 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C0106B60 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXXZ @ 0x1C0106CB0 (-ReleaseCoreResource@DXGADAPTER@@AEAAXXZ.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C01BD354 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C020E7D4 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkCddSubmitPresentHistory(__int64 a1, struct _D3DKMT_PRESENTHISTORYTOKEN *a2, const GUID *a3)
{
  __int64 v4; // r15
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v7; // rcx
  __int64 v8; // r14
  __int64 v9; // rcx
  const GUID *v10; // r8
  unsigned int v11; // ebx
  __int64 v12; // r8
  int v13; // edx
  __int64 v14; // rcx
  __int64 v15; // rcx
  const GUID *v16; // r8
  __int64 v17; // r9
  int v18; // edx
  __int64 *v19; // rbx
  __int64 v20; // rbx
  signed __int64 v21; // rax
  signed __int64 v22; // rtt
  __int64 v23; // rcx
  __int64 v24; // r15
  struct _KEVENT *v25; // rdi
  volatile signed __int64 *v26; // rdi
  __int64 v27; // rdx
  volatile signed __int64 *v28; // rcx
  volatile signed __int64 *v29; // rcx
  __int64 v30; // rcx
  const GUID *v31; // r8
  DXGDEVICE *v32; // rcx
  __int64 v33; // rcx
  const GUID *v34; // r8
  int v35; // eax
  unsigned int v36; // r14d
  struct DXGADAPTER *v37; // rcx
  DXGADAPTER *v38; // rcx
  struct DXGADAPTER *v39; // rdi
  __int64 v40; // rcx
  const GUID *v41; // r8
  __int64 v43; // rcx
  unsigned __int8 v44; // di
  const GUID *v45; // r8
  __int64 *ThreadProperty; // rax
  __int64 *v47; // rbx
  __int64 v48; // rbx
  int v49; // r9d
  __int64 v50; // rax
  __int64 v51; // rax
  int v52; // r9d
  __int64 v53; // rax
  _QWORD *v54; // rbx
  __int64 v55; // rax
  _QWORD *v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rcx
  _QWORD *v59; // rax
  __int64 v60; // rax
  int v61; // r9d
  __int64 v62; // rdi
  __int64 v63; // rax
  __int64 v64; // r9
  _QWORD v65[2]; // [rsp+60h] [rbp-A8h] BYREF
  char v66; // [rsp+70h] [rbp-98h]
  char v67[8]; // [rsp+78h] [rbp-90h] BYREF
  struct _KTHREAD **v68[2]; // [rsp+80h] [rbp-88h] BYREF
  DXGADAPTER *v69; // [rsp+90h] [rbp-78h]
  char v70; // [rsp+98h] [rbp-70h]
  struct _KTHREAD **v71[2]; // [rsp+A0h] [rbp-68h] BYREF
  struct DXGADAPTER *v72; // [rsp+B0h] [rbp-58h]
  char v73; // [rsp+B8h] [rbp-50h]
  __int64 v74; // [rsp+C0h] [rbp-48h]
  char v75; // [rsp+C8h] [rbp-40h]
  __int64 v76; // [rsp+D8h] [rbp-30h] BYREF
  struct DXGADAPTER *v77; // [rsp+E0h] [rbp-28h]
  char v78; // [rsp+E8h] [rbp-20h]
  char v79[8]; // [rsp+F0h] [rbp-18h] BYREF
  __int64 v80; // [rsp+F8h] [rbp-10h]
  char v81; // [rsp+100h] [rbp-8h]
  _QWORD v82[2]; // [rsp+108h] [rbp+0h] BYREF
  char v83[8]; // [rsp+118h] [rbp+10h] BYREF
  char v84[32]; // [rsp+120h] [rbp+18h] BYREF
  char v85[48]; // [rsp+140h] [rbp+38h] BYREF
  enum _D3DKMT_DEVICEEXECUTION_STATE v86; // [rsp+1C8h] [rbp+C0h] BYREF
  union _LARGE_INTEGER v87; // [rsp+1D0h] [rbp+C8h] BYREF

  v4 = (unsigned int)a1;
  LODWORD(v65[0]) = -1;
  v65[1] = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v66 = 1;
    LODWORD(v65[0]) = 3036;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 3036);
  }
  else
  {
    v66 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)v65, 3036);
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v8 = ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 323) & 4) != 0 )
    {
      ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      v47 = ThreadProperty;
      if ( ThreadProperty )
      {
        ObfDereferenceObject(ThreadProperty);
        v8 = *v47;
      }
    }
  }
  if ( !v8 )
  {
    v36 = -1073741811;
    v48 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v48 + 24) = -1073741811LL;
    *(_QWORD *)(v48 + 32) = PsGetCurrentProcess();
    WdLogEvent5_WdError(v48);
    goto LABEL_61;
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v8 + 208, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v49 = *(_DWORD *)(v8 + 224);
      if ( v49 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v9, &EventBlockThread, v10, v49);
    }
    ExAcquirePushLockSharedEx(v8 + 208, 0LL);
  }
  v11 = ((unsigned int)v4 >> 6) & 0xFFFFFF;
  if ( v11 < *(_DWORD *)(v8 + 248) )
  {
    v12 = *(_QWORD *)(v8 + 232);
    v13 = *(_DWORD *)(v12 + 16LL * v11 + 8);
    if ( (((unsigned int)v4 >> 25) & 0x60) == (*(_BYTE *)(v12 + 16LL * v11 + 8) & 0x60)
      && (v13 & 0x2000) == 0
      && (v13 & 0x1F) != 0
      && (*(_BYTE *)(v12 + 16LL * (((unsigned int)v4 >> 6) & 0xFFFFFF) + 8) & 0x1F) != 7 )
    {
      v50 = WdLogNewEntry5_WdError(((unsigned int)v4 >> 25) & 0x60);
      *(_QWORD *)(v50 + 24) = 316LL;
      WdLogEvent5_WdError(v50);
    }
  }
  ExReleasePushLockSharedEx(v8 + 208, 0LL);
  KeLeaveCriticalRegion();
  if ( v8 != -208 && *(struct _KTHREAD **)(v8 + 216) == KeGetCurrentThread() )
  {
    v51 = WdLogNewEntry5_WdAssertion(v14);
    *(_QWORD *)(v51 + 24) = 1309LL;
    WdLogEvent5_WdAssertion(v51);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v8 + 208, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v52 = *(_DWORD *)(v8 + 224);
      if ( v52 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v15, &EventBlockThread, v16, v52);
    }
    ExAcquirePushLockSharedEx(v8 + 208, 0LL);
  }
  if ( v11 >= *(_DWORD *)(v8 + 248) )
    goto LABEL_86;
  v17 = *(_QWORD *)(v8 + 232);
  v18 = *(_DWORD *)(v17 + 16LL * v11 + 8);
  if ( (((unsigned int)v4 >> 25) & 0x60) != (*(_BYTE *)(v17 + 16LL * v11 + 8) & 0x60)
    || (v18 & 0x2000) != 0
    || (v18 & 0x1F) == 0 )
  {
    goto LABEL_86;
  }
  v19 = (__int64 *)(v17 + 16LL * v11);
  if ( (v18 & 0x1F) != 7 )
  {
    v53 = WdLogNewEntry5_WdError(((unsigned int)v4 >> 25) & 0x60);
    *(_QWORD *)(v53 + 24) = 316LL;
    WdLogEvent5_WdError(v53);
LABEL_86:
    v20 = 0LL;
    goto LABEL_25;
  }
  v20 = *v19;
  if ( !v20 )
    goto LABEL_25;
  _m_prefetchw((const void *)(v20 + 32));
  v21 = *(_QWORD *)(v20 + 32);
  if ( !v21 )
    goto LABEL_86;
  while ( 1 )
  {
    v22 = v21;
    v21 = _InterlockedCompareExchange64((volatile signed __int64 *)(v20 + 32), v21 + 1, v21);
    if ( v22 == v21 )
      break;
    if ( !v21 )
      goto LABEL_86;
  }
LABEL_25:
  ExReleasePushLockSharedEx(v8 + 208, 0LL);
  KeLeaveCriticalRegion();
  if ( !v20 )
  {
    v36 = -1073741811;
    v54 = (_QWORD *)WdLogNewEntry5_WdError(v23);
    v54[3] = -1073741811LL;
    v55 = PsGetCurrentProcess();
    v54[5] = v4;
    v54[4] = v55;
    WdLogEvent5_WdError(v54);
    goto LABEL_61;
  }
  v24 = *(_QWORD *)(v20 + 16);
  v25 = (struct _KEVENT *)(*(_QWORD *)(v24 + 16) + 96LL);
  if ( !KeReadStateEvent(v25) )
    KeWaitForSingleObject(v25, Executive, 0, 0, 0LL);
  KeEnterCriticalRegion();
  if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v24 + 104), 0) )
  {
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v24 + 16) + 16LL) + 96LL));
    v44 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v24 + 16) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0q(v43, &EventBlockThread, v45, 40);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v24 + 104), 1u);
    if ( v44 )
      DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v24 + 16) + 16LL));
    ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v24 + 16) + 16LL) + 96LL, 0LL);
    KeLeaveCriticalRegion();
  }
  v26 = *(volatile signed __int64 **)(*(_QWORD *)(*(_QWORD *)(v20 + 16) + 16LL) + 16LL);
  v77 = (struct DXGADAPTER *)v26;
  _InterlockedIncrement64(v26 + 3);
  v76 = -1LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v26 + 15, 0LL);
  v27 = *(_QWORD *)(v20 + 16);
  v78 = 1;
  v28 = *(volatile signed __int64 **)(*(_QWORD *)(v27 + 16) + 16LL);
  v69 = (DXGADAPTER *)v28;
  v70 = 0;
  if ( v28 )
  {
    _InterlockedIncrement64(v28 + 3);
    v68[1] = (struct _KTHREAD **)-1LL;
  }
  v29 = *(volatile signed __int64 **)(*(_QWORD *)(v27 + 16) + 16LL);
  v72 = (struct DXGADAPTER *)v29;
  v73 = 0;
  if ( v29 )
  {
    _InterlockedIncrement64(v29 + 3);
    v71[1] = (struct _KTHREAD **)-1LL;
  }
  v74 = v27;
  v75 = 0;
  if ( v70 )
  {
    v56 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v29);
    v56[5] = v68;
    v56[3] = 275LL;
    v56[4] = 4LL;
    v56[6] = 0LL;
    v56[7] = 0LL;
    WdLogEvent5_WdCriticalError(v56);
  }
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v69 + 20) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v69 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v30, &EventBlockThread, v31, 72);
      KeWaitForSingleObject((char *)v69 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v69);
  }
  v70 = 1;
  if ( *(_DWORD *)(v74 + 464) != 1 )
    goto LABEL_94;
  if ( v75 )
  {
    COREACCESS::AcquireShared((DXGADAPTER **)v71);
    if ( *((_DWORD *)v72 + 44) != 1 )
    {
      COREACCESS::Release(v71);
LABEL_94:
      COREACCESS::Release(v68);
      v59 = (_QWORD *)WdLogNewEntry5_WdEvent(v58, v57);
      v59[3] = -1073741130LL;
      v59[4] = v20;
      v59[5] = v8;
      WdLogEvent5_WdEvent(v59);
      goto LABEL_95;
    }
  }
  v32 = *(DXGDEVICE **)(v20 + 16);
  if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v32 + 2) + 16LL) + 308LL) & 0x10) == 0
    || (int)DXGDEVICE::GetDeviceExecutionState(v32, &v86) >= 0 && v86 == D3DKMT_DEVICEEXECUTION_ACTIVE )
  {
    if ( v20 != -440 && *(struct _KTHREAD **)(v20 + 448) == KeGetCurrentThread() )
    {
      v60 = WdLogNewEntry5_WdAssertion(v32);
      *(_QWORD *)(v60 + 24) = 1309LL;
      WdLogEvent5_WdAssertion(v60);
    }
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v20 + 440, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v61 = *(_DWORD *)(v20 + 456);
        if ( v61 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v33, &EventBlockThread, v34, v61);
      }
      ExAcquirePushLockExclusiveEx(v20 + 440, 0LL);
    }
    *(_QWORD *)(v20 + 448) = KeGetCurrentThread();
    v87.QuadPart = -100000LL;
    v35 = SubmitPresentHistoryToken(
            a2,
            (struct COREDEVICEACCESS *)v67,
            (struct DXGADAPTERSTOPRESETLOCKSHARED *)&v76,
            0LL,
            0,
            &v87,
            0LL,
            0LL,
            (struct DXGCONTEXT *)v20,
            0LL);
    *(_QWORD *)(v20 + 448) = 0LL;
    v36 = v35;
    ExReleasePushLockExclusiveEx(v20 + 440, 0LL);
    KeLeaveCriticalRegion();
    goto LABEL_46;
  }
LABEL_95:
  v36 = -1073741130;
LABEL_46:
  v37 = v72;
  if ( v72 )
  {
    if ( v73 )
    {
      COREACCESS::Release(v71);
      v37 = v72;
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v37 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v37 + 2), v37);
  }
  v38 = v69;
  if ( v69 )
  {
    if ( v70 )
    {
      v70 = 0;
      v38 = v69;
      if ( KeGetCurrentThread() != *((struct _KTHREAD **)v69 + 20) )
      {
        DXGADAPTER::ReleaseCoreResource(v69);
        v38 = v69;
      }
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v38 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v38 + 2), v38);
  }
  if ( v78 )
  {
    v39 = v77;
    ExReleasePushLockSharedEx((char *)v77 + 120, 0LL);
    KeLeaveCriticalRegion();
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v39 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v77 + 2), v77);
  }
  ExReleaseResourceLite(*(PERESOURCE *)(v24 + 104));
  KeLeaveCriticalRegion();
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v20 + 32), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
  {
    v62 = *(_QWORD *)(v20 + 16);
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
      (DXGDEVICEACCESSLOCKEXCLUSIVE *)v82,
      (struct DXGDEVICE *)v62);
    v63 = *(_QWORD *)(v20 + 16);
    v81 = 0;
    v80 = *(_QWORD *)(*(_QWORD *)(v63 + 16) + 16LL);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v79);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v83, v62, 2, v64, 0);
    COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v83);
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v62 + 16) + 16LL) + 176LL) != 4 )
      DXGDEVICE::DestroyContext((DXGDEVICE *)v62, (struct DXGCONTEXT ***)v20, (struct COREDEVICEACCESS *)v83);
    COREACCESS::~COREACCESS((COREACCESS *)v85);
    COREACCESS::~COREACCESS((COREACCESS *)v84);
    if ( v81 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v79);
    if ( v82[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v82);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v62 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v62 + 16), (struct DXGDEVICE *)v62);
  }
LABEL_61:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)v65);
  if ( v66 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v40, &EventProfilerExit, v41, v65[0]);
  return v36;
}
