/*
 * XREFs of ?DxgkCddSubmitPresentHistory@@YAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAD@Z @ 0x1C0116B20
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0006B80 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000700C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007068 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007328 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C00075A8 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?AcquireShared@COREACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C00075DC (-AcquireShared@COREACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C00076AC (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0007718 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000C1D0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000CBD0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C010BCB0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C010C150 (-ReleaseCoreResource@DXGADAPTER@@AEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@W4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C01171E0 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0123538 (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01252BC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C01ECF74 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?WakeUpAdapter@DXGADAPTER@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C01F006C (-WakeUpAdapter@DXGADAPTER@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0242248 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkCddSubmitPresentHistory(__int64 a1, struct _D3DKMT_PRESENTHISTORYTOKEN *a2, const GUID *a3)
{
  __int64 v3; // r12
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r13
  unsigned int v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rcx
  const GUID *v16; // r8
  __int64 v17; // r9
  int v18; // edx
  __int64 v19; // rdx
  __int64 v20; // rdi
  signed __int64 v21; // rax
  signed __int64 v22; // rtt
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r15
  struct _KEVENT *v27; // rbx
  volatile signed __int64 *v28; // rbx
  __int64 v29; // rdx
  volatile signed __int64 *v30; // rcx
  volatile signed __int64 *v31; // rcx
  __int64 v32; // rcx
  const GUID *v33; // r8
  const GUID *v34; // rsi
  __int64 v35; // rcx
  __int64 v36; // rcx
  const GUID *v37; // r8
  unsigned int v38; // eax
  unsigned int v39; // esi
  struct DXGADAPTER *v40; // rcx
  struct DXGADAPTER *v41; // rcx
  struct DXGADAPTER *v42; // rbx
  __int64 v43; // rdx
  __int64 v44; // rcx
  const GUID *v45; // r8
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v49; // rax
  const GUID *v50; // r8
  __int64 v51; // rcx
  char v52; // bl
  int v53; // r9d
  __int64 *ThreadProperty; // rax
  __int64 *v55; // rbx
  __int64 v56; // rbx
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // rax
  __int64 v60; // rax
  _QWORD *v61; // rbx
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // rax
  _QWORD *v65; // rax
  _BYTE *v66; // rcx
  char v67; // al
  _BYTE *v68; // rax
  _BYTE *v69; // rax
  __int64 v70; // rcx
  _QWORD *v71; // rax
  __int64 v72; // rax
  int v73; // r9d
  __int64 v74; // rbx
  __int64 v75; // rax
  __int64 v76; // r9
  _QWORD v79[2]; // [rsp+78h] [rbp-90h] BYREF
  char v80; // [rsp+88h] [rbp-80h]
  __int64 v81; // [rsp+90h] [rbp-78h] BYREF
  struct DXGADAPTER *v82; // [rsp+98h] [rbp-70h]
  char v83; // [rsp+A0h] [rbp-68h]
  __int64 v84; // [rsp+A8h] [rbp-60h] BYREF
  char v85[8]; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v86; // [rsp+B8h] [rbp-50h]
  char v87; // [rsp+C0h] [rbp-48h]
  _QWORD v88[2]; // [rsp+C8h] [rbp-40h] BYREF
  char v89[8]; // [rsp+D8h] [rbp-30h] BYREF
  char v90[8]; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v91; // [rsp+E8h] [rbp-20h]
  struct DXGADAPTER *v92; // [rsp+F0h] [rbp-18h]
  char v93; // [rsp+F8h] [rbp-10h]
  int v94; // [rsp+FCh] [rbp-Ch]
  _BYTE *v95; // [rsp+100h] [rbp-8h]
  _BYTE v96[24]; // [rsp+108h] [rbp+0h] BYREF
  char v97[8]; // [rsp+120h] [rbp+18h] BYREF
  __int64 v98; // [rsp+128h] [rbp+20h]
  struct DXGADAPTER *v99; // [rsp+130h] [rbp+28h]
  char v100; // [rsp+138h] [rbp+30h]
  int v101; // [rsp+13Ch] [rbp+34h]
  __int64 v102; // [rsp+140h] [rbp+38h]
  __int64 v103; // [rsp+160h] [rbp+58h]
  char v104; // [rsp+168h] [rbp+60h]
  char v105[8]; // [rsp+178h] [rbp+70h] BYREF
  char v106[64]; // [rsp+180h] [rbp+78h] BYREF
  char v107[88]; // [rsp+1C0h] [rbp+B8h] BYREF

  LODWORD(v79[0]) = -1;
  v3 = (unsigned int)a1;
  v79[1] = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v80 = 1;
    LODWORD(v79[0]) = 3036;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 3036);
  }
  else
  {
    v80 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)v79, 3036LL);
  CurrentProcess = PsGetCurrentProcess(v5, v4);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v11 = ProcessDxgProcess;
  if ( !ProcessDxgProcess || (*(_BYTE *)(ProcessDxgProcess + 299) & 4) != 0 )
  {
    ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
    v55 = ThreadProperty;
    if ( ThreadProperty )
    {
      ObfDereferenceObject(ThreadProperty);
      v11 = *v55;
    }
  }
  if ( !v11 )
  {
    v39 = -1073741811;
    v56 = WdLogNewEntry5_WdError(v9, v8, v10);
    *(_QWORD *)(v56 + 24) = -1073741811LL;
    *(_QWORD *)(v56 + 32) = PsGetCurrentProcess(v58, v57);
    WdLogEvent5_WdError(v56);
    goto LABEL_58;
  }
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v11 + 184));
  v12 = ((unsigned int)v3 >> 6) & 0xFFFFFF;
  if ( v12 < *(_DWORD *)(v11 + 224) )
  {
    v47 = *(_QWORD *)(v11 + 208);
    v48 = *(unsigned int *)(v47 + 16LL * v12 + 8);
    if ( (((unsigned int)v3 >> 25) & 0x60) == (*(_BYTE *)(v47 + 16LL * v12 + 8) & 0x60)
      && (v48 & 0x2000) == 0
      && (v48 & 0x1F) != 0
      && (*(_BYTE *)(v47 + 16LL * (((unsigned int)v3 >> 6) & 0xFFFFFF) + 8) & 0x1F) != 7 )
    {
      v49 = WdLogNewEntry5_WdError(((unsigned int)v3 >> 25) & 0x60, v47, v48);
      *(_QWORD *)(v49 + 24) = 267LL;
      WdLogEvent5_WdError(v49);
    }
  }
  ExReleasePushLockSharedEx(v11 + 184, 0LL);
  KeLeaveCriticalRegion();
  if ( v11 != -184 && *(struct _KTHREAD **)(v11 + 192) == KeGetCurrentThread() )
  {
    v59 = WdLogNewEntry5_WdAssertion(v14, v13);
    *(_QWORD *)(v59 + 24) = 1449LL;
    WdLogEvent5_WdAssertion(v59);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v11 + 184, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v53 = *(_DWORD *)(v11 + 200);
      if ( v53 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v15, &EventBlockThread, v16, v53);
    }
    ExAcquirePushLockSharedEx(v11 + 184, 0LL);
  }
  if ( v12 >= *(_DWORD *)(v11 + 224) )
    goto LABEL_20;
  v17 = *(_QWORD *)(v11 + 208);
  v18 = *(_DWORD *)(v17 + 16LL * v12 + 8);
  if ( (((unsigned int)v3 >> 25) & 0x60) != (*(_BYTE *)(v17 + 16LL * v12 + 8) & 0x60)
    || (v18 & 0x2000) != 0
    || (v18 & 0x1F) == 0 )
  {
    goto LABEL_20;
  }
  v19 = v18 & 0x1F;
  if ( (_BYTE)v19 != 7 )
  {
    v60 = WdLogNewEntry5_WdError(((unsigned int)v3 >> 25) & 0x60, v19, 2LL * v12);
    *(_QWORD *)(v60 + 24) = 267LL;
    WdLogEvent5_WdError(v60);
LABEL_20:
    v20 = 0LL;
    goto LABEL_21;
  }
  v20 = *(_QWORD *)(v17 + 16LL * v12);
  if ( !v20 )
    goto LABEL_21;
  _m_prefetchw((const void *)(v20 + 32));
  v21 = *(_QWORD *)(v20 + 32);
  if ( !v21 )
    goto LABEL_20;
  while ( 1 )
  {
    v22 = v21;
    v21 = _InterlockedCompareExchange64((volatile signed __int64 *)(v20 + 32), v21 + 1, v21);
    if ( v22 == v21 )
      break;
    if ( !v21 )
      goto LABEL_20;
  }
LABEL_21:
  ExReleasePushLockSharedEx(v11 + 184, 0LL);
  KeLeaveCriticalRegion();
  if ( !v20 )
  {
    v39 = -1073741811;
    v61 = (_QWORD *)WdLogNewEntry5_WdError(v24, v23, v25);
    v61[3] = -1073741811LL;
    v64 = PsGetCurrentProcess(v63, v62);
    v61[5] = v3;
    v61[4] = v64;
    WdLogEvent5_WdError(v61);
    goto LABEL_58;
  }
  v26 = *(_QWORD *)(v20 + 16);
  v27 = (struct _KEVENT *)(*(_QWORD *)(v26 + 16) + 96LL);
  if ( !KeReadStateEvent(v27) )
    KeWaitForSingleObject(v27, Executive, 0, 0, 0LL);
  KeEnterCriticalRegion();
  if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v26 + 104), 0) )
  {
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v26 + 16) + 16LL) + 96LL));
    v51 = *(_QWORD *)(*(_QWORD *)(v26 + 16) + 16LL);
    if ( *(_DWORD *)(v51 + 136) == 1 )
    {
      DXGADAPTER::WakeUpAdapter(v51, 0xFFFFFFFFLL);
      v52 = 1;
    }
    else
    {
      v52 = 0;
    }
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0q(v51, &EventBlockThread, v50, 40);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v26 + 104), 1u);
    if ( v52 )
      DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v26 + 16) + 16LL));
    ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v26 + 16) + 16LL) + 96LL, 0LL);
    KeLeaveCriticalRegion();
  }
  v28 = *(volatile signed __int64 **)(*(_QWORD *)(*(_QWORD *)(v20 + 16) + 16LL) + 16LL);
  v82 = (struct DXGADAPTER *)v28;
  _InterlockedIncrement64(v28 + 3);
  v81 = -1LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v28 + 15, 0LL);
  v29 = *(_QWORD *)(v20 + 16);
  v83 = 1;
  v30 = *(volatile signed __int64 **)(*(_QWORD *)(v29 + 16) + 16LL);
  v92 = (struct DXGADAPTER *)v30;
  v93 = 0;
  v94 = -1;
  v95 = 0LL;
  if ( v30 )
  {
    _InterlockedIncrement64(v30 + 3);
    v91 = -1LL;
  }
  v31 = *(volatile signed __int64 **)(*(_QWORD *)(v29 + 16) + 16LL);
  v99 = (struct DXGADAPTER *)v31;
  v100 = 0;
  v101 = -1;
  v102 = 0LL;
  if ( v31 )
  {
    _InterlockedIncrement64(v31 + 3);
    v98 = -1LL;
  }
  v103 = v29;
  v104 = 0;
  if ( v93 )
  {
    v65 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v31, v29);
    v65[5] = v90;
    v65[3] = 275LL;
    v65[4] = 4LL;
    v65[6] = 0LL;
    v65[7] = 0LL;
    WdLogEvent5_WdCriticalError(v65);
  }
  if ( KeGetCurrentThread() == *((struct _KTHREAD **)v92 + 20) )
  {
    v34 = a3;
  }
  else
  {
    if ( !KeReadStateEvent((PRKEVENT)v92 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v32, &EventBlockThread, v33, 72);
      KeWaitForSingleObject((char *)v92 + 48, Executive, 0, 0, 0LL);
    }
    v34 = a3;
    DXGADAPTER::AcquireCoreResourceShared((__int64)v92, 0xBDCu, (__int64)a3);
  }
  v94 = 3036;
  v95 = 0LL;
  if ( v34 )
  {
    v66 = v96;
    v29 = 17LL;
    do
    {
      if ( v29 == -2147483629 )
        break;
      v67 = v66[(char *)v34 - v96];
      if ( !v67 )
        break;
      *v66++ = v67;
      --v29;
    }
    while ( v29 );
    v68 = v66 - 1;
    if ( v29 )
      v68 = v66;
    *v68 = 0;
    v69 = v96;
    if ( !v29 )
      v69 = v95;
    v95 = v69;
  }
  v93 = 1;
  v35 = *(unsigned int *)(v103 + 464);
  if ( (_DWORD)v35 == 1 )
  {
    if ( !v104
      || (COREACCESS::AcquireShared((__int64)v97, 0xFFFFFFFF, 0LL), v35 = *((unsigned int *)v99 + 44), (_DWORD)v35 == 1) )
    {
      if ( v20 != -456 && *(struct _KTHREAD **)(v20 + 464) == KeGetCurrentThread() )
      {
        v72 = WdLogNewEntry5_WdAssertion(v35, v29);
        *(_QWORD *)(v72 + 24) = 1449LL;
        WdLogEvent5_WdAssertion(v72);
      }
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v20 + 456, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v73 = *(_DWORD *)(v20 + 472);
          if ( v73 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0q(v36, &EventBlockThread, v37, v73);
        }
        ExAcquirePushLockExclusiveEx(v20 + 456, 0LL);
      }
      *(_QWORD *)(v20 + 464) = KeGetCurrentThread();
      v84 = -100000LL;
      v38 = SubmitPresentHistoryToken(a2, v89, &v81, 0LL, 0, &v84, 0LL, 0LL, v20, 0LL, 3036, v34);
      *(_QWORD *)(v20 + 464) = 0LL;
      v39 = v38;
      ExReleasePushLockExclusiveEx(v20 + 456, 0LL);
      KeLeaveCriticalRegion();
      goto LABEL_42;
    }
    COREACCESS::Release((COREACCESS *)v97);
  }
  COREACCESS::Release((COREACCESS *)v90);
  v71 = (_QWORD *)WdLogNewEntry5_WdEvent(v70);
  v71[3] = -1073741130LL;
  v71[4] = v20;
  v71[5] = v11;
  WdLogEvent5_WdEvent(v71);
  v39 = -1073741130;
LABEL_42:
  v40 = v99;
  if ( v99 )
  {
    if ( v100 )
    {
      COREACCESS::Release((COREACCESS *)v97);
      v40 = v99;
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v40 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v40 + 2), v40);
  }
  v41 = v92;
  if ( v92 )
  {
    if ( v93 )
    {
      v93 = 0;
      v41 = v92;
      if ( KeGetCurrentThread() != *((struct _KTHREAD **)v92 + 20) )
      {
        DXGADAPTER::ReleaseCoreResource((__int64)v92, v94, (__int64)v95);
        v41 = v92;
      }
      v95 = 0LL;
      v94 = -1;
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v41 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v41 + 2), v41);
  }
  if ( v83 )
  {
    v42 = v82;
    ExReleasePushLockSharedEx((char *)v82 + 120, 0LL);
    KeLeaveCriticalRegion();
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v42 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v82 + 2), v82);
  }
  ExReleaseResourceLite(*(PERESOURCE *)(v26 + 104));
  KeLeaveCriticalRegion();
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v20 + 32), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
  {
    v74 = *(_QWORD *)(v20 + 16);
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
      (DXGDEVICEACCESSLOCKEXCLUSIVE *)v88,
      (struct DXGDEVICE *)v74);
    v75 = *(_QWORD *)(v20 + 16);
    v87 = 0;
    v86 = *(_QWORD *)(*(_QWORD *)(v75 + 16) + 16LL);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v85);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v105, v74, 2, v76, 0);
    COREDEVICEACCESS::AcquireSharedUncheck((__int64)v105);
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v74 + 16) + 16LL) + 176LL) != 4 )
      DXGDEVICE::DestroyContext((DXGDEVICE *)v74, (struct DXGCONTEXT *)v20, (struct COREDEVICEACCESS *)v105);
    COREACCESS::~COREACCESS((COREACCESS *)v107);
    COREACCESS::~COREACCESS((COREACCESS *)v106);
    if ( v87 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v85);
    if ( v88[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v88);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v74 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v74 + 16), (struct DXGDEVICE *)v74);
  }
LABEL_58:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)v79, v43);
  if ( v80 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v44, &EventProfilerExit, v45, v79[0]);
  return v39;
}
