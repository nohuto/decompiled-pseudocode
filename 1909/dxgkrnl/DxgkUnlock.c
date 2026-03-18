/*
 * XREFs of DxgkUnlock @ 0x1C0134740
 * Callers:
 *     ?VmBusUnlock2@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C022A870 (-VmBusUnlock2@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006D80 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007328 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C0007664 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1C000BFCC (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000C1D0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C010BCB0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01252BC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1C0134AC0 (-Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C01ECF74 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?WakeUpAdapter@DXGADAPTER@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C01F006C (-WakeUpAdapter@DXGADAPTER@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 */

__int64 __fastcall DxgkUnlock(__int64 a1, __int64 a2, const GUID *a3)
{
  __int128 *v3; // rsi
  unsigned __int8 v4; // r15
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  struct _KTHREAD **v12; // rdi
  __int128 v13; // xmm0
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  struct DXGDEVICE *v17; // rdi
  __int64 v18; // rcx
  int v19; // esi
  struct _KEVENT *v20; // r14
  struct _KEVENT *v21; // r14
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
  const GUID *v41; // r8
  __int64 v42; // rcx
  char v43; // si
  __int64 v44; // rcx
  char v45; // r14
  _QWORD *v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  const GUID *v49; // r8
  struct DXGDEVICE *v50; // [rsp+30h] [rbp-B8h] BYREF
  struct DXGDEVICE *v51; // [rsp+38h] [rbp-B0h] BYREF
  int v52; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v53; // [rsp+48h] [rbp-A0h]
  char v54; // [rsp+50h] [rbp-98h]
  struct _D3DKMT_UNLOCK v55; // [rsp+58h] [rbp-90h] BYREF
  struct DXGDEVICE *v56; // [rsp+68h] [rbp-80h] BYREF
  int v57; // [rsp+70h] [rbp-78h]
  _BYTE v58[16]; // [rsp+80h] [rbp-68h] BYREF
  __int64 v59; // [rsp+90h] [rbp-58h]
  char v60; // [rsp+98h] [rbp-50h]
  int v61; // [rsp+9Ch] [rbp-4Ch]
  __int64 v62; // [rsp+A0h] [rbp-48h]

  v3 = (__int128 *)a1;
  v52 = -1;
  v53 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v54 = 1;
    v52 = 2012;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2012);
  }
  else
  {
    v54 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v52, 2012LL);
  v4 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  CurrentProcess = PsGetCurrentProcess(v6, v5);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v12 = (struct _KTHREAD **)ProcessDxgProcess;
  if ( !ProcessDxgProcess || (*(_BYTE *)(ProcessDxgProcess + 299) & 4) != 0 )
  {
    ThreadProperty = (struct _KTHREAD ***)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
    v33 = ThreadProperty;
    if ( ThreadProperty )
    {
      ObfDereferenceObject(ThreadProperty);
      v12 = *v33;
    }
  }
  if ( v12 )
  {
    if ( v4 )
    {
      if ( (unsigned __int64)v3 >= MmUserProbeAddress )
        v3 = (__int128 *)MmUserProbeAddress;
      v13 = *v3;
    }
    else
    {
      v13 = *v3;
    }
    v55 = (struct _D3DKMT_UNLOCK)v13;
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v50, v13, v12, &v51);
    v17 = v51;
    if ( v51 )
    {
      v56 = v51;
      v18 = *(_QWORD *)(*((_QWORD *)v51 + 2) + 16LL);
      if ( *(int *)(v18 + 2184) >= 0x2000 || *(_BYTE *)(v18 + 2484) )
      {
        v19 = *((_DWORD *)DXGGLOBAL::GetGlobal(v18, v14) + 247);
        v57 = v19;
      }
      else
      {
        v19 = 0;
        v57 = 0;
      }
      v20 = (struct _KEVENT *)*((_QWORD *)v17 + 2);
      if ( *((_DWORD *)v17 + 82) == 2 )
      {
        v21 = v20 + 4;
        if ( KeReadStateEvent(v21) )
          goto LABEL_17;
      }
      else
      {
        v21 = v20 + 3;
        if ( KeReadStateEvent(v21) )
          goto LABEL_17;
      }
      KeWaitForSingleObject(v21, Executive, 0, 0, 0LL);
LABEL_17:
      KeEnterCriticalRegion();
      if ( v19 )
      {
        if ( (unsigned __int8)ExTryAcquirePushLockSharedEx((char *)v17 + 112, 0LL) )
          goto LABEL_19;
        KeLeaveCriticalRegion();
        DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)v17 + 2) + 16LL) + 96LL));
        v44 = *(_QWORD *)(*((_QWORD *)v17 + 2) + 16LL);
        if ( *(_DWORD *)(v44 + 136) == 1 )
        {
          DXGADAPTER::WakeUpAdapter(v44, 0xFFFFFFFFLL);
          v45 = 1;
        }
        else
        {
          v45 = 0;
        }
        DXGPUSHLOCK::AcquireShared((struct DXGDEVICE *)((char *)v17 + 112));
        if ( !v45 )
          goto LABEL_64;
      }
      else
      {
        if ( ExAcquireResourceExclusiveLite(*((PERESOURCE *)v17 + 13), 0) )
        {
LABEL_19:
          COREACCESS::COREACCESS((COREACCESS *)v58, *(struct DXGADAPTER *const *)(*((_QWORD *)v17 + 2) + 16LL));
          if ( v60 )
          {
            v46 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v23, v22);
            v46[3] = 275LL;
            v46[4] = 4LL;
            v46[5] = v58;
            v46[6] = 0LL;
            v46[7] = 0LL;
            WdLogEvent5_WdCriticalError(v46);
          }
          if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v59 + 160) )
          {
            if ( !KeReadStateEvent((PRKEVENT)(v59 + 48)) )
            {
              if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                McTemplateK0q(v24, &EventBlockThread, v25, 72);
              KeWaitForSingleObject((PVOID)(v59 + 48), Executive, 0, 0, 0LL);
            }
            DXGADAPTER::AcquireCoreResourceShared(v59, 0xFFFFFFFF, 0LL);
          }
          v61 = -1;
          v62 = 0LL;
          v60 = 1;
          if ( *((_DWORD *)v51 + 116) == 4 )
          {
            COREACCESS::~COREACCESS((COREACCESS *)v58);
            DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v56);
            if ( v50 && _InterlockedExchangeAdd64((volatile signed __int64 *)v50 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v50 + 2), v50);
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v52, v47);
            if ( v54 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
              McTemplateK0q(v48, &EventProfilerExit, v49, v52);
            return 0LL;
          }
          else
          {
            v55.hDevice = 0;
            v26 = v51;
            v27 = DXGDEVICE::Unlock(v51, &v55, v4);
            COREACCESS::~COREACCESS((COREACCESS *)v58);
            if ( v57 )
              ExReleasePushLockSharedEx((char *)v26 + 112, 0LL);
            else
              ExReleaseResourceLite(*((PERESOURCE *)v26 + 13));
            KeLeaveCriticalRegion();
            if ( v50 && _InterlockedExchangeAdd64((volatile signed __int64 *)v50 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v50 + 2), v50);
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v52, v28);
            if ( v54 )
            {
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
                McTemplateK0q(v29, &EventProfilerExit, v30, v52);
            }
            return v27;
          }
        }
        DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)v17 + 2) + 16LL) + 96LL));
        v42 = *(_QWORD *)(*((_QWORD *)v17 + 2) + 16LL);
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
        ExAcquireResourceExclusiveLite(*((PERESOURCE *)v17 + 13), 1u);
        if ( !v43 )
        {
LABEL_64:
          ExReleasePushLockSharedEx(*(_QWORD *)(*((_QWORD *)v17 + 2) + 16LL) + 96LL, 0LL);
          KeLeaveCriticalRegion();
          goto LABEL_19;
        }
      }
      DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*((_QWORD *)v17 + 2) + 16LL));
      goto LABEL_64;
    }
    v39 = WdLogNewEntry5_WdError(v15, v14, v16);
    *(_QWORD *)(v39 + 24) = (unsigned int)v13;
    *(_QWORD *)(v39 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v39);
    if ( v50 && _InterlockedExchangeAdd64((volatile signed __int64 *)v50 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v50 + 2), v50);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v52, v40);
    v38 = v54 == 0;
  }
  else
  {
    v34 = WdLogNewEntry5_WdError(v10, v9, v11);
    *(_QWORD *)(v34 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v34);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v52, v35);
    v38 = v54 == 0;
  }
  if ( !v38 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v36, &EventProfilerExit, v37, v52);
  return 3221225485LL;
}
