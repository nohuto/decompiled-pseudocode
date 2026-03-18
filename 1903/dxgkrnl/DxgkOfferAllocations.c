/*
 * XREFs of DxgkOfferAllocations @ 0x1C010BA10
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006AD4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C0006D60 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0006E84 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0006F3C (-AcquireShared@COREACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007320 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C00074E4 (-Release@COREACCESS@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000CB44 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0106B60 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?OfferAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_OFFERALLOCATIONS@@@Z @ 0x1C0109860 (-OfferAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_OFFERALLOCATIONS@@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C012293C (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C01EC944 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?WakeUpAdapter@DXGADAPTER@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C01EFA3C (-WakeUpAdapter@DXGADAPTER@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 */

__int64 __fastcall DxgkOfferAllocations(ULONG64 a1, __int64 a2, const GUID *a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  struct _KTHREAD **v11; // rdi
  _OWORD *v12; // rcx
  __int64 hDevice; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  struct DXGDEVICE *v17; // rdi
  __int64 v18; // rcx
  int v19; // esi
  struct _KEVENT *v20; // r14
  struct _KEVENT *v21; // r14
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rcx
  const GUID *v27; // r8
  struct DXGDEVICE *v28; // rdi
  unsigned int v29; // esi
  __int64 v30; // rdx
  __int64 v31; // rcx
  const GUID *v32; // r8
  UINT *v34; // rcx
  unsigned __int64 Value; // rsi
  struct _KTHREAD ***ThreadProperty; // rax
  struct _KTHREAD ***v37; // rsi
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  const GUID *v41; // r8
  bool v42; // zf
  __int64 v43; // rax
  const GUID *v44; // r8
  __int64 v45; // rcx
  char v46; // si
  __int64 v47; // rcx
  char v48; // r14
  _QWORD *v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rcx
  const GUID *v56; // r8
  __int64 v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rdx
  __int64 v60; // rcx
  const GUID *v61; // r8
  struct DXGDEVICE *v62; // [rsp+30h] [rbp-128h] BYREF
  struct DXGDEVICE *v63; // [rsp+38h] [rbp-120h] BYREF
  int v64; // [rsp+40h] [rbp-118h] BYREF
  __int64 v65; // [rsp+48h] [rbp-110h]
  char v66; // [rsp+50h] [rbp-108h]
  struct DXGDEVICE *v67; // [rsp+58h] [rbp-100h] BYREF
  int v68; // [rsp+60h] [rbp-F8h]
  _D3DKMT_OFFERALLOCATIONS v69; // [rsp+68h] [rbp-F0h] BYREF
  _BYTE v70[8]; // [rsp+90h] [rbp-C8h] BYREF
  _BYTE v71[16]; // [rsp+98h] [rbp-C0h] BYREF
  __int64 v72; // [rsp+A8h] [rbp-B0h]
  char v73; // [rsp+B0h] [rbp-A8h]
  int v74; // [rsp+B4h] [rbp-A4h]
  __int64 v75; // [rsp+B8h] [rbp-A0h]
  _BYTE v76[16]; // [rsp+D8h] [rbp-80h] BYREF
  __int64 v77; // [rsp+E8h] [rbp-70h]
  __int64 v78; // [rsp+118h] [rbp-40h]
  char v79; // [rsp+120h] [rbp-38h]

  v64 = -1;
  v65 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v66 = 1;
    v64 = 2070;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2070);
  }
  else
  {
    v66 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v64, 2070LL);
  CurrentProcess = PsGetCurrentProcess(v5, v4);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v11 = (struct _KTHREAD **)ProcessDxgProcess;
  if ( !ProcessDxgProcess || (*(_BYTE *)(ProcessDxgProcess + 299) & 4) != 0 )
  {
    ThreadProperty = (struct _KTHREAD ***)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
    v37 = ThreadProperty;
    if ( ThreadProperty )
    {
      ObfDereferenceObject(ThreadProperty);
      v11 = *v37;
    }
  }
  if ( !v11 )
  {
    v38 = WdLogNewEntry5_WdError(v9, v8, v10);
    *(_QWORD *)(v38 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v38);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v64, v39);
    v42 = v66 == 0;
    goto LABEL_46;
  }
  *(_QWORD *)&v69.Flags.0 = 0LL;
  v12 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v12 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)&v69.hDevice = *v12;
  *(_OWORD *)&v69.HandleList = v12[1];
  hDevice = v69.hDevice;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v62, v69.hDevice, v11, &v63);
  v17 = v63;
  if ( v63 )
  {
    v67 = v63;
    v18 = *(_QWORD *)(*((_QWORD *)v63 + 2) + 16LL);
    if ( *(int *)(v18 + 2184) >= 0x2000 || *(_BYTE *)(v18 + 2484) )
    {
      v19 = *((_DWORD *)DXGGLOBAL::GetGlobal(v18, v14) + 247);
      v68 = v19;
    }
    else
    {
      v19 = 0;
      v68 = 0;
    }
    v20 = (struct _KEVENT *)*((_QWORD *)v17 + 2);
    if ( *((_DWORD *)v17 + 82) == 2 )
    {
      v21 = v20 + 4;
      if ( KeReadStateEvent(v21) )
        goto LABEL_14;
    }
    else
    {
      v21 = v20 + 3;
      if ( KeReadStateEvent(v21) )
        goto LABEL_14;
    }
    KeWaitForSingleObject(v21, Executive, 0, 0, 0LL);
LABEL_14:
    KeEnterCriticalRegion();
    if ( v19 )
    {
      if ( (unsigned __int8)ExTryAcquirePushLockSharedEx((char *)v17 + 112, 0LL) )
        goto LABEL_16;
      KeLeaveCriticalRegion();
      DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)v17 + 2) + 16LL) + 96LL));
      v47 = *(_QWORD *)(*((_QWORD *)v17 + 2) + 16LL);
      if ( *(_DWORD *)(v47 + 136) == 1 )
      {
        DXGADAPTER::WakeUpAdapter(v47, 0xFFFFFFFFLL);
        v48 = 1;
      }
      else
      {
        v48 = 0;
      }
      DXGPUSHLOCK::AcquireShared((struct DXGDEVICE *)((char *)v17 + 112));
      if ( !v48 )
        goto LABEL_69;
    }
    else
    {
      if ( ExAcquireResourceExclusiveLite(*((PERESOURCE *)v17 + 13), 0) )
      {
LABEL_16:
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v70, (__int64)v17, 0, v22, 0);
        if ( v73 )
        {
          v49 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v24, v23);
          v49[3] = 275LL;
          v49[4] = 4LL;
          v49[5] = v71;
          v49[6] = 0LL;
          v49[7] = 0LL;
          WdLogEvent5_WdCriticalError(v49);
        }
        if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v72 + 160) )
        {
          if ( !KeReadStateEvent((PRKEVENT)(v72 + 48)) )
          {
            if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              McTemplateK0q(v26, &EventBlockThread, v27, 72);
            KeWaitForSingleObject((PVOID)(v72 + 48), Executive, 0, 0, 0LL);
          }
          DXGADAPTER::AcquireCoreResourceShared(v72, 0xFFFFFFFF, 0LL);
        }
        v74 = -1;
        v75 = 0LL;
        v73 = 1;
        if ( *(_DWORD *)(v78 + 464) != 1 )
          goto LABEL_76;
        if ( v79 )
        {
          COREACCESS::AcquireShared((__int64)v76, 0xFFFFFFFF, 0LL);
          if ( *(_DWORD *)(v77 + 176) != 1 )
          {
            COREACCESS::Release((COREACCESS *)v76);
LABEL_76:
            COREACCESS::Release((COREACCESS *)v71);
            v53 = WdLogNewEntry5_WdWarning(v51, v50, v52);
            *(_QWORD *)(v53 + 24) = v63;
            *(_QWORD *)(v53 + 32) = -1073741130LL;
            WdLogEvent5_WdWarning(v53);
            COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v70);
            DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v67);
            if ( v62 && _InterlockedExchangeAdd64((volatile signed __int64 *)v62 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v62 + 2), v62);
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v64, v54);
            if ( v66 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
              McTemplateK0q(v55, &EventProfilerExit, v56, v64);
            return 3221226166LL;
          }
        }
        if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v17 + 2) + 16LL) + 1728LL) < 0x5010u )
          goto LABEL_97;
        v34 = (UINT *)(a1 + 32);
        if ( a1 + 32 >= MmUserProbeAddress )
          v34 = (UINT *)MmUserProbeAddress;
        v69.Flags.Value = *v34;
        Value = v69.Flags.Value;
        if ( v69.Flags.Value < 4 )
        {
LABEL_97:
          if ( *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v17 + 2) + 16LL) + 185LL) )
          {
            COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v70);
            DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v67);
            if ( v62 && _InterlockedExchangeAdd64((volatile signed __int64 *)v62 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v62 + 2), v62);
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v64, v59);
            if ( v66 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
              McTemplateK0q(v60, &EventProfilerExit, v61, v64);
            return 0LL;
          }
          else
          {
            v28 = v63;
            v29 = DXGDEVICE::OfferAllocations(v63, &v69);
            COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v70);
            if ( v68 )
              ExReleasePushLockSharedEx((char *)v28 + 112, 0LL);
            else
              ExReleaseResourceLite(*((PERESOURCE *)v28 + 13));
            KeLeaveCriticalRegion();
            if ( v62 && _InterlockedExchangeAdd64((volatile signed __int64 *)v62 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v62 + 2), v62);
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v64, v30);
            if ( v66 )
            {
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
                McTemplateK0q(v31, &EventProfilerExit, v32, v64);
            }
            return v29;
          }
        }
        v57 = WdLogNewEntry5_WdWarning(v34, MmUserProbeAddress, v25);
        *(_QWORD *)(v57 + 24) = Value >> 2;
        WdLogEvent5_WdWarning(v57);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v70);
        DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v67);
        if ( v62 && _InterlockedExchangeAdd64((volatile signed __int64 *)v62 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v62 + 2), v62);
        goto LABEL_45;
      }
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
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v45, &EventBlockThread, v44, 40);
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)v17 + 13), 1u);
      if ( !v46 )
      {
LABEL_69:
        ExReleasePushLockSharedEx(*(_QWORD *)(*((_QWORD *)v17 + 2) + 16LL) + 96LL, 0LL);
        KeLeaveCriticalRegion();
        goto LABEL_16;
      }
    }
    DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*((_QWORD *)v17 + 2) + 16LL));
    goto LABEL_69;
  }
  v43 = WdLogNewEntry5_WdError(v15, v14, v16);
  *(_QWORD *)(v43 + 24) = hDevice;
  *(_QWORD *)(v43 + 32) = -1073741811LL;
  WdLogEvent5_WdError(v43);
  if ( v62 && _InterlockedExchangeAdd64((volatile signed __int64 *)v62 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v62 + 2), v62);
LABEL_45:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v64, v58);
  v42 = v66 == 0;
LABEL_46:
  if ( !v42 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v40, &EventProfilerExit, v41, v64);
  return 3221225485LL;
}
