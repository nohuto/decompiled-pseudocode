/*
 * XREFs of ?AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@E@Z @ 0x1C00F9164
 * Callers:
 *     ?AcquireExclusive@COREACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C001170C (-AcquireExclusive@COREACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ?AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C00BCFF8 (-AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 *     ?AcquireLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ @ 0x1C01BC7E4 (-AcquireLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireLocksForStop@DXGADAPTER@@QEAAXPEA_K@Z @ 0x1C01BCA0C (-AcquireLocksForStop@DXGADAPTER@@QEAAXPEA_K@Z.c)
 *     ?EnableIoMmuIsolation@ADAPTER_RENDER@@QEAAJ_N0@Z @ 0x1C01C646C (-EnableIoMmuIsolation@ADAPTER_RENDER@@QEAAJ_N0@Z.c)
 *     ?StopDisplayDevices@ADAPTER_RENDER@@QEAAXW4DXGADAPTER_DEVICELISTTYPE@@@Z @ 0x1C01C78D0 (-StopDisplayDevices@ADAPTER_RENDER@@QEAAXW4DXGADAPTER_DEVICELISTTYPE@@@Z.c)
 * Callees:
 *     DpiEnableD3Requests @ 0x1C000F734 (DpiEnableD3Requests.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C0011778 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00118EC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGPROCESSDEVICEITERATIONLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C002D4FC (--0DXGPROCESSDEVICEITERATIONLOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGPROCESSDEVICEITERATIONLOCK@@QEAA@XZ @ 0x1C002D580 (--1DXGPROCESSDEVICEITERATIONLOCK@@QEAA@XZ.c)
 *     McTemplateK0pt @ 0x1C00303E4 (McTemplateK0pt.c)
 *     ?SuspendScheduler@ADAPTER_RENDER@@QEAAJEE@Z @ 0x1C00D32F4 (-SuspendScheduler@ADAPTER_RENDER@@QEAAJEE@Z.c)
 *     ?Flush@DXGDODPRESENT@@QEAAXXZ @ 0x1C00F6FF8 (-Flush@DXGDODPRESENT@@QEAAXXZ.c)
 *     ?StartCoreDripsBlockerTracking@DXGGLOBAL@@QEAAX_KPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00F92D4 (-StartCoreDripsBlockerTracking@DXGGLOBAL@@QEAAX_KPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AcquireDeviceLockForAllDevices@DXGPROCESS@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0228514 (-AcquireDeviceLockForAllDevices@DXGPROCESS@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?FlushAllDevice@DXGPROCESS@@QEAAXPEBVDXGADAPTER@@@Z @ 0x1C02294A0 (-FlushAllDevice@DXGPROCESS@@QEAAXPEBVDXGADAPTER@@@Z.c)
 *     ?ReleaseDeviceLockForAllDevices@DXGPROCESS@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C022A348 (-ReleaseDeviceLockForAllDevices@DXGPROCESS@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

void __fastcall DXGADAPTER::AcquireCoreResourceExclusive(__int64 a1, int a2, char a3)
{
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rcx
  struct DXGGLOBAL *v9; // rax
  unsigned __int8 v10; // r13
  const GUID *v11; // r8
  const GUID *v12; // r8
  DXGDODPRESENT *v13; // rcx
  _QWORD *v14; // rax
  const GUID *v15; // r8
  const GUID *v16; // r8
  __int64 v17; // rbx
  __int64 v18; // rcx
  struct DXGGLOBAL *v19; // rax
  __int64 v20; // rcx
  struct DXGPROCESS *Current; // r12
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 CurrentProcess; // rbx
  __int64 v25; // rcx
  struct DXGGLOBAL *Global; // rax
  const GUID *v27; // r8
  unsigned __int8 v28; // r13
  const GUID *v29; // r8
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rax
  DXGDODPRESENT *v35; // rcx
  __int64 v36; // [rsp+20h] [rbp-48h]
  char v37; // [rsp+70h] [rbp+8h] BYREF
  int v38; // [rsp+78h] [rbp+10h]

  v38 = a2;
  if ( ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(a1 + 144)) )
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v6);
    v14[3] = 275LL;
    v14[4] = 4LL;
    v14[5] = a1;
    v14[6] = 0LL;
    v14[7] = 0LL;
    WdLogEvent5_WdCriticalError(v14);
  }
  if ( a2 == 3 )
  {
    Current = DXGPROCESS::GetCurrent();
    if ( !Current )
    {
      v22 = WdLogNewEntry5_WdAssertion(v20);
      *(_QWORD *)(v22 + 24) = 3948LL;
      WdLogEvent5_WdAssertion(v22);
    }
    KeEnterCriticalRegion();
    DXGPROCESSDEVICEITERATIONLOCK::DXGPROCESSDEVICEITERATIONLOCK((DXGPROCESSDEVICEITERATIONLOCK *)&v37, Current);
    DXGPROCESS::AcquireDeviceLockForAllDevices(Current, (struct DXGADAPTER *)a1);
    v23 = *(_QWORD *)(a1 + 2528);
    if ( v23 && *(_QWORD *)(v23 + 528) )
      DXGPROCESS::FlushAllDevice(Current, (const struct DXGADAPTER *)a1);
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(a1 + 96));
    CurrentProcess = PsGetCurrentProcess();
    Global = DXGGLOBAL::GetGlobal(v25);
    DXGGLOBAL::StartCoreDripsBlockerTracking(Global, *(_QWORD *)(a1 + 200), CurrentProcess, 0xFFFFFFFFLL);
    v28 = DXGADAPTER::TryWakeUpFromD3State((DXGADAPTER *)a1);
    if ( bTracingEnabled
      && (*(_DWORD *)(&DxgkControlGuid_Context + 2) & 0x1000000) != 0
      && (*(_WORD *)(&DxgkControlGuid_Context + 2) & 0x2000) == 0
      && (Microsoft_Windows_DxgKrnlEnableBits & 0x20000000) != 0 )
    {
      McTemplateK0pt((struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context, &EventPreAcquireAdapterLock, v27, a1, 1);
    }
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 144), 1u);
    if ( bTracingEnabled
      && (*(_DWORD *)(&DxgkControlGuid_Context + 2) & 0x1000000) != 0
      && (*(_WORD *)(&DxgkControlGuid_Context + 2) & 0x2000) == 0
      && (Microsoft_Windows_DxgKrnlEnableBits & 0x20000000) != 0 )
    {
      LODWORD(v36) = 1;
      McTemplateK0pt(
        (struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context,
        &EventPostAcquireAdapterLock,
        v29,
        a1,
        v36);
    }
    if ( v28 && *(_DWORD *)(a1 + 176) == 1 )
      DpiEnableD3Requests(*(_QWORD *)(a1 + 192));
    ExReleasePushLockSharedEx(a1 + 96, 0LL);
    KeLeaveCriticalRegion();
    v30 = *(_QWORD *)(a1 + 2528);
    v31 = v30;
    if ( v30 && *(_QWORD *)(v30 + 528) )
    {
      if ( *(_BYTE *)(v30 + 536) )
      {
        v32 = WdLogNewEntry5_WdAssertion(v30);
        *(_QWORD *)(v32 + 24) = 4003LL;
        WdLogEvent5_WdAssertion(v32);
        v30 = *(_QWORD *)(a1 + 2528);
      }
      if ( (int)ADAPTER_RENDER::SuspendScheduler((ADAPTER_RENDER *)v30, 0, 0LL) < 0 )
      {
        v34 = WdLogNewEntry5_WdAssertion(v33);
        *(_QWORD *)(v34 + 24) = 4005LL;
        WdLogEvent5_WdAssertion(v34);
      }
      *(_BYTE *)(*(_QWORD *)(a1 + 2528) + 536LL) = 1;
      v31 = *(_QWORD *)(a1 + 2528);
    }
    if ( !v31 )
    {
      v35 = *(DXGDODPRESENT **)(*(_QWORD *)(a1 + 2520) + 264LL);
      if ( v35 )
        DXGDODPRESENT::Flush(v35);
    }
    DXGPROCESS::ReleaseDeviceLockForAllDevices(Current, (struct DXGADAPTER *)a1);
    DXGPROCESSDEVICEITERATIONLOCK::~DXGPROCESSDEVICEITERATIONLOCK((DXGPROCESSDEVICEITERATIONLOCK *)&v37);
    goto LABEL_12;
  }
  if ( a3 )
  {
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(a1 + 96));
    v7 = PsGetCurrentProcess();
    v9 = DXGGLOBAL::GetGlobal(v8);
    DXGGLOBAL::StartCoreDripsBlockerTracking(v9, *(_QWORD *)(a1 + 200), v7, 0xFFFFFFFFLL);
    v10 = DXGADAPTER::TryWakeUpFromD3State((DXGADAPTER *)a1);
    KeEnterCriticalRegion();
    if ( bTracingEnabled
      && (*(_DWORD *)(&DxgkControlGuid_Context + 2) & 0x1000000) != 0
      && (*(_WORD *)(&DxgkControlGuid_Context + 2) & 0x2000) == 0
      && (Microsoft_Windows_DxgKrnlEnableBits & 0x20000000) != 0 )
    {
      McTemplateK0pt((struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context, &EventPreAcquireAdapterLock, v11, a1, 1);
    }
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 144), 1u);
    if ( bTracingEnabled
      && (*(_DWORD *)(&DxgkControlGuid_Context + 2) & 0x1000000) != 0
      && (*(_WORD *)(&DxgkControlGuid_Context + 2) & 0x2000) == 0
      && (Microsoft_Windows_DxgKrnlEnableBits & 0x20000000) != 0 )
    {
      LODWORD(v36) = 1;
      McTemplateK0pt(
        (struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context,
        &EventPostAcquireAdapterLock,
        v12,
        a1,
        v36);
    }
    if ( v10 && *(_DWORD *)(a1 + 176) == 1 )
      DpiEnableD3Requests(*(_QWORD *)(a1 + 192));
    ExReleasePushLockSharedEx(a1 + 96, 0LL);
    KeLeaveCriticalRegion();
LABEL_11:
    if ( !*(_QWORD *)(a1 + 2528) )
    {
      v13 = *(DXGDODPRESENT **)(*(_QWORD *)(a1 + 2520) + 264LL);
      if ( v13 )
        DXGDODPRESENT::Flush(v13);
    }
LABEL_12:
    *(_DWORD *)(a1 + 152) = v38;
    return;
  }
  KeEnterCriticalRegion();
  if ( bTracingEnabled
    && (*(_DWORD *)(&DxgkControlGuid_Context + 2) & 0x1000000) != 0
    && (*(_WORD *)(&DxgkControlGuid_Context + 2) & 0x2000) == 0
    && (Microsoft_Windows_DxgKrnlEnableBits & 0x20000000) != 0 )
  {
    McTemplateK0pt((struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context, &EventPreAcquireAdapterLock, v15, a1, 1);
  }
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 144), 0);
  if ( ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(a1 + 144)) )
  {
    if ( bTracingEnabled
      && (*(_DWORD *)(&DxgkControlGuid_Context + 2) & 0x1000000) != 0
      && (*(_WORD *)(&DxgkControlGuid_Context + 2) & 0x2000) == 0
      && (Microsoft_Windows_DxgKrnlEnableBits & 0x20000000) != 0 )
    {
      LODWORD(v36) = 1;
      McTemplateK0pt(
        (struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context,
        &EventPostAcquireAdapterLock,
        v16,
        a1,
        v36);
    }
    v17 = PsGetCurrentProcess();
    v19 = DXGGLOBAL::GetGlobal(v18);
    DXGGLOBAL::StartCoreDripsBlockerTracking(v19, *(_QWORD *)(a1 + 200), v17, 0xFFFFFFFFLL);
    goto LABEL_11;
  }
  if ( bTracingEnabled
    && (*(_DWORD *)(&DxgkControlGuid_Context + 2) & 0x1000000) != 0
    && (*(_WORD *)(&DxgkControlGuid_Context + 2) & 0x2000) == 0
    && (Microsoft_Windows_DxgKrnlEnableBits & 0x20000000) != 0 )
  {
    LODWORD(v36) = 0;
    McTemplateK0pt((struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context, &EventPostAcquireAdapterLock, v16, a1, v36);
  }
  KeLeaveCriticalRegion();
}
