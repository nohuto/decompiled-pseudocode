/*
 * XREFs of DxgkSignalSynchronizationObjectFromGpuByReference @ 0x1C00FB380
 * Callers:
 *     ?SignalTokenSync@CAdapter@@UEAAJPEAX_K_N@Z @ 0x1C0007DD0 (-SignalTokenSync@CAdapter@@UEAAJPEAX_K_N@Z.c)
 *     ?AddSignalToContextByPtr@CAdapter@@UEAAJIPEAX_K@Z @ 0x1C005AC20 (-AddSignalToContextByPtr@CAdapter@@UEAAJIPEAX_K@Z.c)
 *     ?VmBusSignalFenceNtSharedByRef@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C02298D0 (-VmBusSignalFenceNtSharedByRef@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0006B80 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000700C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007068 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007328 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C00075A8 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?AcquireShared@COREACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C00075DC (-AcquireShared@COREACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C00076AC (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0007718 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00088C0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000C1D0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000CBD0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     ?FindAdapterObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECTCA@@PEAVADAPTER_RENDER@@@Z @ 0x1C0044D74 (-FindAdapterObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECTCA@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C010BCB0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C010C150 (-ReleaseCoreResource@DXGADAPTER@@AEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0123538 (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01252BC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C01ECF74 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?WakeUpAdapter@DXGADAPTER@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C01F006C (-WakeUpAdapter@DXGADAPTER@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?VmBusSendSignalFenceNtSharedByRef@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@I_K@Z @ 0x1C0226AA4 (-VmBusSendSignalFenceNtSharedByRef@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTE.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0242248 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C0269B04 (-GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@.c)
 */

__int64 __fastcall DxgkSignalSynchronizationObjectFromGpuByReference(
        unsigned int *a1,
        unsigned __int64 a2,
        unsigned int a3)
{
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r13
  __int64 v10; // rcx
  const GUID *v11; // r8
  __int64 v12; // rax
  __int64 v13; // r8
  int v14; // ecx
  __int64 v15; // rcx
  __int64 v16; // rdi
  signed __int64 v17; // rax
  signed __int64 v18; // rtt
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r14
  __int64 v23; // rdx
  struct _KEVENT *v24; // rbx
  struct _KEVENT *v25; // rbx
  volatile signed __int64 *v26; // rcx
  volatile signed __int64 *v27; // rcx
  __int64 v28; // rcx
  const GUID *v29; // r8
  __int64 v30; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  PERESOURCE *v36; // rbx
  __int64 v37; // rdx
  __int64 v38; // rcx
  unsigned int *v39; // rbx
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r12
  __int64 v45; // rax
  int v46; // eax
  __int64 v47; // rdx
  __int64 v48; // rcx
  int v49; // ebx
  int DxgAdapterSyncObject; // r12d
  DXGFASTMUTEX *v51; // rbx
  int v52; // eax
  int v53; // eax
  struct DXGADAPTER *v54; // rcx
  struct DXGADAPTER *v55; // rcx
  __int64 *ThreadProperty; // rax
  __int64 *v58; // rdi
  __int64 v59; // rax
  int v60; // r9d
  __int64 v61; // rax
  _QWORD *v62; // rax
  const GUID *v63; // r8
  __int64 v64; // rcx
  char v65; // bl
  __int64 v66; // rax
  __int64 v67; // rax
  _QWORD *v68; // rax
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // rax
  _QWORD *v72; // rax
  _QWORD *v73; // rax
  __int64 v74; // rcx
  _QWORD *v75; // rax
  __int64 v76; // rax
  __int64 v77; // rax
  _QWORD *v78; // rax
  __int64 v79; // rax
  __int64 v80; // rbx
  __int64 v81; // rax
  __int64 v82; // r9
  int v83; // [rsp+50h] [rbp-B0h]
  DXGFASTMUTEX *v84; // [rsp+58h] [rbp-A8h] BYREF
  char v85; // [rsp+60h] [rbp-A0h]
  PERESOURCE *v86; // [rsp+68h] [rbp-98h] BYREF
  char v87; // [rsp+70h] [rbp-90h]
  unsigned __int64 v88[2]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v89; // [rsp+88h] [rbp-78h] BYREF
  __int64 v90; // [rsp+90h] [rbp-70h] BYREF
  __int64 v91; // [rsp+98h] [rbp-68h] BYREF
  char v92[8]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v93; // [rsp+A8h] [rbp-58h]
  char v94; // [rsp+B0h] [rbp-50h]
  _QWORD v95[2]; // [rsp+B8h] [rbp-48h] BYREF
  struct DXGADAPTERSYNCOBJECT *v96; // [rsp+C8h] [rbp-38h] BYREF
  char v97[8]; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v98; // [rsp+E0h] [rbp-20h]
  struct DXGADAPTER *v99; // [rsp+E8h] [rbp-18h]
  char v100; // [rsp+F0h] [rbp-10h]
  unsigned int v101; // [rsp+F4h] [rbp-Ch]
  __int64 v102; // [rsp+F8h] [rbp-8h]
  char v103[8]; // [rsp+118h] [rbp+18h] BYREF
  __int64 v104; // [rsp+120h] [rbp+20h]
  struct DXGADAPTER *v105; // [rsp+128h] [rbp+28h]
  char v106; // [rsp+130h] [rbp+30h]
  int v107; // [rsp+134h] [rbp+34h]
  __int64 v108; // [rsp+138h] [rbp+38h]
  __int64 v109; // [rsp+158h] [rbp+58h]
  char v110; // [rsp+160h] [rbp+60h]
  char v111[8]; // [rsp+170h] [rbp+70h] BYREF
  char v112[64]; // [rsp+178h] [rbp+78h] BYREF
  char v113[88]; // [rsp+1B8h] [rbp+B8h] BYREF

  v88[0] = a2;
  CurrentProcess = PsGetCurrentProcess(a1, a2);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v9 = ProcessDxgProcess;
  if ( !ProcessDxgProcess || (*(_BYTE *)(ProcessDxgProcess + 299) & 4) != 0 )
  {
    ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
    v58 = ThreadProperty;
    if ( ThreadProperty )
    {
      ObfDereferenceObject(ThreadProperty);
      v9 = *v58;
    }
  }
  if ( v9 != -184 && *(struct _KTHREAD **)(v9 + 192) == KeGetCurrentThread() )
  {
    v59 = WdLogNewEntry5_WdAssertion(v8, v7);
    *(_QWORD *)(v59 + 24) = 1449LL;
    WdLogEvent5_WdAssertion(v59);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v9 + 184, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v60 = *(_DWORD *)(v9 + 200);
      if ( v60 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v10, &EventBlockThread, v11, v60);
    }
    ExAcquirePushLockSharedEx(v9 + 184, 0LL);
  }
  v12 = (a3 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v12 >= *(_DWORD *)(v9 + 224) )
    goto LABEL_16;
  v13 = *(_QWORD *)(v9 + 208);
  v14 = *(_DWORD *)(v13 + 16 * v12 + 8);
  if ( ((a3 >> 25) & 0x60) != (*(_BYTE *)(v13 + 16 * v12 + 8) & 0x60) || (v14 & 0x2000) != 0 || (v14 & 0x1F) == 0 )
    goto LABEL_16;
  v15 = v14 & 0x1F;
  if ( (_BYTE)v15 != 7 )
  {
    v61 = WdLogNewEntry5_WdError(v15, 2LL * (unsigned int)v12, v13);
    *(_QWORD *)(v61 + 24) = 267LL;
    WdLogEvent5_WdError(v61);
LABEL_16:
    v16 = 0LL;
    goto LABEL_17;
  }
  v16 = *(_QWORD *)(v13 + 16LL * (unsigned int)v12);
  if ( !v16 )
    goto LABEL_17;
  _m_prefetchw((const void *)(v16 + 32));
  v17 = *(_QWORD *)(v16 + 32);
  if ( !v17 )
    goto LABEL_16;
  while ( 1 )
  {
    v18 = v17;
    v17 = _InterlockedCompareExchange64((volatile signed __int64 *)(v16 + 32), v17 + 1, v17);
    if ( v18 == v17 )
      break;
    if ( !v17 )
      goto LABEL_16;
  }
LABEL_17:
  ExReleasePushLockSharedEx(v9 + 184, 0LL);
  KeLeaveCriticalRegion();
  if ( !v16 )
  {
    v62 = (_QWORD *)WdLogNewEntry5_WdError(v20, v19, v21);
    DxgAdapterSyncObject = -1073741811;
    v62[3] = v9;
    v62[4] = 0LL;
    v62[5] = -1073741811LL;
    WdLogEvent5_WdError(v62);
    return (unsigned int)DxgAdapterSyncObject;
  }
  v22 = *(_QWORD *)(v16 + 16);
  v83 = 0;
  v23 = v22;
  if ( v22 )
  {
    v24 = *(struct _KEVENT **)(v22 + 16);
    if ( *(_DWORD *)(v22 + 328) == 2 )
    {
      v25 = v24 + 4;
      if ( KeReadStateEvent(v25) )
        goto LABEL_21;
    }
    else
    {
      v25 = v24 + 3;
      if ( KeReadStateEvent(v25) )
      {
LABEL_21:
        KeEnterCriticalRegion();
        if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v22 + 104), 0) )
        {
          DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v22 + 16) + 16LL) + 96LL));
          v64 = *(_QWORD *)(*(_QWORD *)(v22 + 16) + 16LL);
          if ( *(_DWORD *)(v64 + 136) == 1 )
          {
            DXGADAPTER::WakeUpAdapter(v64, 0xFFFFFFFFLL);
            v65 = 1;
          }
          else
          {
            v65 = 0;
          }
          if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0q(v64, &EventBlockThread, v63, 40);
          ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v22 + 104), 1u);
          if ( v65 )
            DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v22 + 16) + 16LL));
          ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v22 + 16) + 16LL) + 96LL, 0LL);
          KeLeaveCriticalRegion();
        }
        v23 = *(_QWORD *)(v16 + 16);
        v83 = 1;
        goto LABEL_23;
      }
    }
    KeWaitForSingleObject(v25, Executive, 0, 0, 0LL);
    goto LABEL_21;
  }
LABEL_23:
  v26 = *(volatile signed __int64 **)(*(_QWORD *)(v23 + 16) + 16LL);
  v99 = (struct DXGADAPTER *)v26;
  v100 = 0;
  v101 = -1;
  v102 = 0LL;
  if ( v26 )
  {
    _InterlockedIncrement64(v26 + 3);
    v98 = -1LL;
  }
  v27 = *(volatile signed __int64 **)(*(_QWORD *)(v23 + 16) + 16LL);
  v105 = (struct DXGADAPTER *)v27;
  v106 = 0;
  v107 = -1;
  v108 = 0LL;
  if ( v27 )
  {
    _InterlockedIncrement64(v27 + 3);
    v104 = -1LL;
  }
  v109 = v23;
  v110 = 0;
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v99 + 20) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v99 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v28, &EventBlockThread, v29, 72);
      KeWaitForSingleObject((char *)v99 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v99, 0xFFFFFFFFLL, 0LL);
  }
  v101 = -1;
  v102 = 0LL;
  v100 = 1;
  v30 = *(unsigned int *)(v109 + 464);
  if ( (_DWORD)v30 != 1 )
    goto LABEL_113;
  if ( !v110
    || (COREACCESS::AcquireShared((__int64)v103, 0xFFFFFFFF, 0LL), v30 = *((unsigned int *)v105 + 44), (_DWORD)v30 == 1) )
  {
    Global = DXGGLOBAL::GetGlobal(v30, v23);
    v86 = (PERESOURCE *)Global;
    v87 = 0;
    if ( !Global )
    {
      v66 = WdLogNewEntry5_WdAssertion(v33, v32);
      *(_QWORD *)(v66 + 24) = 2313LL;
      WdLogEvent5_WdAssertion(v66);
      Global = (struct DXGGLOBAL *)v86;
    }
    if ( ExIsResourceAcquiredSharedLite(*((PERESOURCE *)Global + 43)) )
    {
      v67 = WdLogNewEntry5_WdAssertion(v35, v34);
      *(_QWORD *)(v67 + 24) = 2318LL;
      WdLogEvent5_WdAssertion(v67);
    }
    if ( v87 )
    {
      v68 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v35, v34);
      v68[5] = &v86;
      v68[3] = 275LL;
      v68[4] = 4LL;
      v68[6] = 0LL;
      v68[7] = 0LL;
      WdLogEvent5_WdCriticalError(v68);
    }
    v36 = v86;
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite(v36[43], 1u);
    v87 = 1;
    v38 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v16 + 16) + 16LL) + 16LL);
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v38 + 160)
      && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v38 + 144)) )
    {
      v69 = WdLogNewEntry5_WdAssertion(v38, v37);
      *(_QWORD *)(v69 + 24) = 1313LL;
      WdLogEvent5_WdAssertion(v69);
    }
    if ( (*(_BYTE *)(v9 + 299) & 0xC) != 0 )
    {
      v39 = a1;
    }
    else
    {
      v39 = *(unsigned int **)a1;
      if ( *(_BYTE *)(*(_QWORD *)a1 + 277LL) )
      {
        DxgAdapterSyncObject = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSignalFenceNtSharedByRef(
                                 (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v16 + 16) + 16LL)
                                                                          + 16LL)
                                                              + 4144LL),
                                 (struct DXGPROCESS *)v9,
                                 (struct DXGCONTEXT *)v16,
                                 a1[2],
                                 v88[0]);
LABEL_68:
        if ( v87 )
        {
          v87 = 0;
          ExReleaseResourceLite(v86[43]);
          KeLeaveCriticalRegion();
        }
        goto LABEL_70;
      }
    }
    v85 = 0;
    v84 = (DXGFASTMUTEX *)(v39 + 8);
    if ( v39 == (unsigned int *)-32LL )
    {
      v70 = WdLogNewEntry5_WdAssertion(v38, v37);
      *(_QWORD *)(v70 + 24) = 660LL;
      WdLogEvent5_WdAssertion(v70);
    }
    CurrentThread = KeGetCurrentThread();
    if ( *((struct _KTHREAD **)v84 + 2) == CurrentThread )
    {
      v71 = WdLogNewEntry5_WdAssertion(CurrentThread, v37);
      *(_QWORD *)(v71 + 24) = 667LL;
      WdLogEvent5_WdAssertion(v71);
    }
    if ( v85 )
    {
      v72 = (_QWORD *)WdLogNewEntry5_WdCriticalError(CurrentThread, v37);
      v72[5] = &v84;
      v72[3] = 275LL;
      v72[4] = 4LL;
      v72[6] = 0LL;
      v72[7] = 0LL;
      WdLogEvent5_WdCriticalError(v72);
    }
    DXGFASTMUTEX::Acquire(v84);
    v85 = 1;
    v44 = *(_QWORD *)(*(_QWORD *)(v16 + 16) + 16LL);
    if ( (v39[49] & 4) != 0 )
    {
      DxgAdapterSyncObject = DXGSYNCOBJECTCA::GetDxgAdapterSyncObject(
                               (DXGSYNCOBJECTCA *)v39,
                               *(struct ADAPTER_RENDER **)(*(_QWORD *)(v16 + 16) + 16LL),
                               &v96);
      if ( DxgAdapterSyncObject >= 0 )
      {
LABEL_52:
        if ( (v39[49] & 4) != 0 )
          v45 = *((_QWORD *)DXGSYNCOBJECTCA::FindAdapterObject(
                              (DXGSYNCOBJECTCA *)v39,
                              *(struct ADAPTER_RENDER **)(*(_QWORD *)(v16 + 16) + 16LL))
                + 4);
        else
          v45 = *((_QWORD *)v39 + 40);
        v89 = v45;
        if ( v45 )
        {
          if ( (*(_DWORD *)(v16 + 412) & 0x10) != 0 )
          {
            v90 = *(_QWORD *)(v16 + 304);
            v46 = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64, __int64 *, _DWORD, unsigned __int64 *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v16 + 16) + 16LL) + 520LL) + 8LL) + 648LL))(
                    1LL,
                    &v90,
                    1LL,
                    &v89,
                    0,
                    v88);
          }
          else
          {
            v91 = *(_QWORD *)(v16 + 272);
            v46 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *, int, __int64 *, _DWORD, unsigned __int64 *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v16 + 16) + 16LL) + 520LL) + 8LL) + 640LL))(
                    0LL,
                    0LL,
                    1LL,
                    &v91,
                    1,
                    &v89,
                    0,
                    v88);
          }
          v49 = v46;
          if ( v46 < 0 )
          {
            v77 = WdLogNewEntry5_WdAssertion(v48, v47);
            *(_QWORD *)(v77 + 24) = 1403LL;
            WdLogEvent5_WdAssertion(v77);
          }
          DxgAdapterSyncObject = v49;
        }
        else
        {
          v76 = WdLogNewEntry5_WdError(v42, v41, v43);
          *(_QWORD *)(v76 + 24) = v39;
          WdLogEvent5_WdError(v76);
          DxgAdapterSyncObject = -1073741811;
        }
        goto LABEL_60;
      }
    }
    else
    {
      if ( !v44 || *((_QWORD *)v39 + 38) == v44 )
        goto LABEL_52;
      v73 = (_QWORD *)WdLogNewEntry5_WdError(v42, v41, v43);
      v73[3] = v39;
      v74 = *((_QWORD *)v39 + 38);
      v73[5] = v44;
      DxgAdapterSyncObject = -1073741811;
      v73[4] = v74;
      v73[6] = -1073741811LL;
      WdLogEvent5_WdError(v73);
    }
    v75 = (_QWORD *)WdLogNewEntry5_WdError(v42, v41, v43);
    v75[3] = v9;
    v75[4] = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v16 + 16) + 16LL) + 16LL);
    v75[5] = DxgAdapterSyncObject;
    WdLogEvent5_WdError(v75);
LABEL_60:
    if ( v85 )
    {
      v51 = v84;
      v85 = 0;
      if ( *((struct _KTHREAD **)v84 + 2) != KeGetCurrentThread() )
      {
        v78 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v48, v47);
        v78[3] = 275LL;
        v78[4] = 4LL;
        v78[5] = v51;
        v78[6] = 0LL;
        v78[7] = 0LL;
        WdLogEvent5_WdCriticalError(v78);
      }
      v52 = *((_DWORD *)v51 + 6);
      if ( v52 <= 0 )
      {
        v79 = WdLogNewEntry5_WdAssertion(v48, v47);
        *(_QWORD *)(v79 + 24) = 603LL;
        WdLogEvent5_WdAssertion(v79);
        v52 = *((_DWORD *)v51 + 6);
      }
      v53 = v52 - 1;
      *((_DWORD *)v51 + 6) = v53;
      if ( !v53 )
      {
        *((_QWORD *)v51 + 2) = 0LL;
        ExReleasePushLockExclusiveEx(v51, 0LL);
      }
      KeLeaveCriticalRegion();
    }
    goto LABEL_68;
  }
  COREACCESS::Release((COREACCESS *)v103);
LABEL_113:
  COREACCESS::Release((COREACCESS *)v97);
  DxgAdapterSyncObject = -1073741130;
LABEL_70:
  v54 = v105;
  if ( v105 )
  {
    if ( v106 )
    {
      COREACCESS::Release((COREACCESS *)v103);
      v54 = v105;
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v54 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v54 + 2), v54);
  }
  v55 = v99;
  if ( v99 )
  {
    if ( v100 )
    {
      v100 = 0;
      v55 = v99;
      if ( KeGetCurrentThread() != *((struct _KTHREAD **)v99 + 20) )
      {
        DXGADAPTER::ReleaseCoreResource(v99, v101, v102);
        v55 = v99;
      }
      v102 = 0LL;
      v101 = -1;
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v55 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v55 + 2), v55);
  }
  if ( v22 && v83 )
  {
    ExReleaseResourceLite(*(PERESOURCE *)(v22 + 104));
    KeLeaveCriticalRegion();
  }
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v16 + 32), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
  {
    v80 = *(_QWORD *)(v16 + 16);
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
      (DXGDEVICEACCESSLOCKEXCLUSIVE *)v95,
      (struct DXGDEVICE *)v80);
    v81 = *(_QWORD *)(v16 + 16);
    v94 = 0;
    v93 = *(_QWORD *)(*(_QWORD *)(v81 + 16) + 16LL);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v92);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v111, v80, 2, v82, 0);
    COREDEVICEACCESS::AcquireSharedUncheck((__int64)v111);
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v80 + 16) + 16LL) + 176LL) != 4 )
      DXGDEVICE::DestroyContext((DXGDEVICE *)v80, (struct DXGCONTEXT *)v16, (struct COREDEVICEACCESS *)v111);
    COREACCESS::~COREACCESS((COREACCESS *)v113);
    COREACCESS::~COREACCESS((COREACCESS *)v112);
    if ( v94 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v92);
    if ( v95[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v95);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v80 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v80 + 16), (struct DXGDEVICE *)v80);
  }
  return (unsigned int)DxgAdapterSyncObject;
}
