/*
 * XREFs of ?AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C00D35C0
 * Callers:
 *     ?AcquireExclusive@COREACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000289C (-AcquireExclusive@COREACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IW4_DXGKETW_PROFILER_TYP.c)
 *     ?AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C00D1B00 (-AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 *     ?AcquireLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ @ 0x1C01EC280 (-AcquireLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireLocksForStop@DXGADAPTER@@QEAAXPEA_K@Z @ 0x1C01EC48C (-AcquireLocksForStop@DXGADAPTER@@QEAAXPEA_K@Z.c)
 *     ?EnableIoMmuIsolation@ADAPTER_RENDER@@QEAAJ_N0@Z @ 0x1C01F57CC (-EnableIoMmuIsolation@ADAPTER_RENDER@@QEAAJ_N0@Z.c)
 *     ?StopDisplayDevices@ADAPTER_RENDER@@QEAAXW4DXGADAPTER_DEVICELISTTYPE@@PEAVDXGADAPTER@@@Z @ 0x1C01F6B04 (-StopDisplayDevices@ADAPTER_RENDER@@QEAAXW4DXGADAPTER_DEVICELISTTYPE@@PEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007328 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     DpiEnableD3Requests @ 0x1C0008B54 (DpiEnableD3Requests.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0pt @ 0x1C0035D44 (McTemplateK0pt.c)
 *     ?SuspendScheduler@ADAPTER_RENDER@@QEAAJEE@Z @ 0x1C00D2F98 (-SuspendScheduler@ADAPTER_RENDER@@QEAAJEE@Z.c)
 *     ?AcquireCoreResourceExclusiveWithTracking@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@W4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00D372C (-AcquireCoreResourceExclusiveWithTracking@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@.c)
 *     ?StartCoreDripsBlockerTracking@DXGGLOBAL@@QEAAX_KPEADPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00D37D4 (-StartCoreDripsBlockerTracking@DXGGLOBAL@@QEAAX_KPEADPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?Flush@DXGDODPRESENT@@QEAAXXZ @ 0x1C00D3BD8 (-Flush@DXGDODPRESENT@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?WakeUpAdapter@DXGADAPTER@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C01F006C (-WakeUpAdapter@DXGADAPTER@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?AcquireDeviceLockForAllDevices@DXGPROCESS@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C025D780 (-AcquireDeviceLockForAllDevices@DXGPROCESS@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?FlushAllDevice@DXGPROCESS@@QEAAXPEBVDXGADAPTER@@@Z @ 0x1C025E670 (-FlushAllDevice@DXGPROCESS@@QEAAXPEBVDXGADAPTER@@@Z.c)
 *     ?ReleaseDeviceLockForAllDevices@DXGPROCESS@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C025F244 (-ReleaseDeviceLockForAllDevices@DXGPROCESS@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

void __fastcall DXGADAPTER::AcquireCoreResourceExclusive(__int64 a1, unsigned int a2, char a3, unsigned int a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  char v10; // r13
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct DXGGLOBAL *v14; // rax
  char v15; // r15
  const GUID *v16; // r8
  __int64 v17; // r8
  unsigned int v18; // r12d
  const GUID *v19; // r8
  DXGDODPRESENT *v20; // rcx
  _QWORD *v21; // rax
  const GUID *v22; // r8
  const GUID *v23; // r8
  __int64 v24; // rbx
  __int64 v25; // rdx
  __int64 v26; // rcx
  struct DXGGLOBAL *v27; // rax
  struct DXGPROCESS *Current; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  DXGPROCESS *v31; // r15
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 CurrentProcess; // rbx
  __int64 v35; // rdx
  __int64 v36; // rcx
  struct DXGGLOBAL *Global; // rax
  const GUID *v38; // r8
  const GUID *v39; // r8
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rax
  DXGDODPRESENT *v47; // rcx
  __int64 v48; // [rsp+20h] [rbp-48h]
  __int64 v49; // [rsp+20h] [rbp-48h]
  __int64 v50; // [rsp+20h] [rbp-48h]
  int v52; // [rsp+80h] [rbp+18h]

  v10 = 0;
  if ( ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(a1 + 144)) )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v9, v8);
    v21[3] = 275LL;
    v21[4] = 4LL;
    v21[5] = a1;
    v21[6] = 0LL;
    v21[7] = 0LL;
    WdLogEvent5_WdCriticalError(v21);
  }
  if ( a2 == 3 )
  {
    KeEnterCriticalRegion();
    Current = DXGPROCESS::GetCurrent();
    v31 = Current;
    v52 = a3 & 2;
    if ( (a3 & 2) != 0 )
    {
      if ( !Current )
      {
        v32 = WdLogNewEntry5_WdAssertion(v30, v29);
        *(_QWORD *)(v32 + 24) = 4035LL;
        WdLogEvent5_WdAssertion(v32);
      }
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx((char *)v31 + 160, 0LL);
      *((_QWORD *)v31 + 21) = KeGetCurrentThread();
      DXGPROCESS::AcquireDeviceLockForAllDevices(v31, (struct DXGADAPTER *)a1);
      v33 = *(_QWORD *)(a1 + 2560);
      if ( v33 && *(_QWORD *)(v33 + 528) )
        DXGPROCESS::FlushAllDevice(v31, (const struct DXGADAPTER *)a1);
    }
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(a1 + 96));
    CurrentProcess = PsGetCurrentProcess();
    Global = DXGGLOBAL::GetGlobal(v36, v35);
    DXGGLOBAL::StartCoreDripsBlockerTracking(Global, *(_QWORD *)(a1 + 200), 0LL, CurrentProcess, a4);
    if ( *(_DWORD *)(a1 + 136) == 1 )
    {
      DXGADAPTER::WakeUpAdapter(a1, a4);
      v10 = 1;
    }
    if ( bTracingEnabled
      && (*(_DWORD *)(&DxgkControlGuid_Context + 2) & 0x1000000) != 0
      && (*(_WORD *)(&DxgkControlGuid_Context + 2) & 0x2000) == 0
      && (Microsoft_Windows_DxgKrnlEnableBits & 0x100000000LL) != 0 )
    {
      LODWORD(v50) = 1;
      McTemplateK0pt((struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context, &EventPreAcquireAdapterLock, v38, a1, v50);
    }
    DXGADAPTER::AcquireCoreResourceExclusiveWithTracking(a1, 3LL, a4);
    if ( bTracingEnabled
      && (*(_DWORD *)(&DxgkControlGuid_Context + 2) & 0x1000000) != 0
      && (*(_WORD *)(&DxgkControlGuid_Context + 2) & 0x2000) == 0
      && (Microsoft_Windows_DxgKrnlEnableBits & 0x100000000LL) != 0 )
    {
      LODWORD(v50) = 1;
      McTemplateK0pt(
        (struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context,
        &EventPostAcquireAdapterLock,
        v39,
        a1,
        v50);
    }
    if ( v10 && *(_DWORD *)(a1 + 176) == 1 )
      DpiEnableD3Requests(*(_QWORD *)(a1 + 192));
    ExReleasePushLockSharedEx(a1 + 96, 0LL);
    KeLeaveCriticalRegion();
    v42 = *(_QWORD *)(a1 + 2560);
    if ( !v42 )
      goto LABEL_73;
    if ( *(_QWORD *)(v42 + 528) )
    {
      if ( *(_BYTE *)(v42 + 536) )
      {
        v43 = WdLogNewEntry5_WdAssertion(v41, v40);
        *(_QWORD *)(v43 + 24) = 4086LL;
        WdLogEvent5_WdAssertion(v43);
        v42 = *(_QWORD *)(a1 + 2560);
      }
      if ( (int)ADAPTER_RENDER::SuspendScheduler((ADAPTER_RENDER *)v42, 0, 0LL) < 0 )
      {
        v46 = WdLogNewEntry5_WdAssertion(v45, v44);
        *(_QWORD *)(v46 + 24) = 4088LL;
        WdLogEvent5_WdAssertion(v46);
      }
      *(_BYTE *)(*(_QWORD *)(a1 + 2560) + 536LL) = 1;
      v42 = *(_QWORD *)(a1 + 2560);
    }
    if ( !v42 )
    {
LABEL_73:
      v47 = *(DXGDODPRESENT **)(*(_QWORD *)(a1 + 2552) + 368LL);
      if ( v47 )
        DXGDODPRESENT::Flush(v47);
    }
    if ( v52 )
    {
      DXGPROCESS::ReleaseDeviceLockForAllDevices(v31, (struct DXGADAPTER *)a1);
      *((_QWORD *)v31 + 21) = 0LL;
      ExReleasePushLockExclusiveEx((char *)v31 + 160, 0LL);
      KeLeaveCriticalRegion();
    }
    v18 = a2;
    goto LABEL_14;
  }
  if ( (a3 & 1) == 0 )
  {
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(a1 + 96));
    v11 = PsGetCurrentProcess();
    v14 = DXGGLOBAL::GetGlobal(v13, v12);
    DXGGLOBAL::StartCoreDripsBlockerTracking(v14, *(_QWORD *)(a1 + 200), 0LL, v11, a4);
    if ( *(_DWORD *)(a1 + 136) == 1 )
    {
      DXGADAPTER::WakeUpAdapter(a1, a4);
      v15 = 1;
    }
    else
    {
      v15 = 0;
    }
    KeEnterCriticalRegion();
    if ( bTracingEnabled
      && (*(_DWORD *)(&DxgkControlGuid_Context + 2) & 0x1000000) != 0
      && (*(_WORD *)(&DxgkControlGuid_Context + 2) & 0x2000) == 0
      && (Microsoft_Windows_DxgKrnlEnableBits & 0x100000000LL) != 0 )
    {
      LODWORD(v49) = 1;
      McTemplateK0pt((struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context, &EventPreAcquireAdapterLock, v16, a1, v49);
    }
    v17 = a4;
    v18 = a2;
    DXGADAPTER::AcquireCoreResourceExclusiveWithTracking(a1, a2, v17);
    if ( bTracingEnabled
      && (*(_DWORD *)(&DxgkControlGuid_Context + 2) & 0x1000000) != 0
      && (*(_WORD *)(&DxgkControlGuid_Context + 2) & 0x2000) == 0
      && (Microsoft_Windows_DxgKrnlEnableBits & 0x100000000LL) != 0 )
    {
      LODWORD(v49) = 1;
      McTemplateK0pt(
        (struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context,
        &EventPostAcquireAdapterLock,
        v19,
        a1,
        v49);
    }
    if ( v15 && *(_DWORD *)(a1 + 176) == 1 )
      DpiEnableD3Requests(*(_QWORD *)(a1 + 192));
    ExReleasePushLockSharedEx(a1 + 96, 0LL);
    KeLeaveCriticalRegion();
LABEL_13:
    if ( !*(_QWORD *)(a1 + 2560) )
    {
      v20 = *(DXGDODPRESENT **)(*(_QWORD *)(a1 + 2552) + 368LL);
      if ( v20 )
        DXGDODPRESENT::Flush(v20);
    }
LABEL_14:
    *(_DWORD *)(a1 + 152) = v18;
    return;
  }
  KeEnterCriticalRegion();
  if ( bTracingEnabled
    && (*(_DWORD *)(&DxgkControlGuid_Context + 2) & 0x1000000) != 0
    && (*(_WORD *)(&DxgkControlGuid_Context + 2) & 0x2000) == 0
    && (Microsoft_Windows_DxgKrnlEnableBits & 0x100000000LL) != 0 )
  {
    McTemplateK0pt((struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context, &EventPreAcquireAdapterLock, v22, a1, 1);
  }
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 144), 0);
  if ( ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(a1 + 144)) )
  {
    if ( bTracingEnabled
      && (*(_DWORD *)(&DxgkControlGuid_Context + 2) & 0x1000000) != 0
      && (*(_WORD *)(&DxgkControlGuid_Context + 2) & 0x2000) == 0
      && (Microsoft_Windows_DxgKrnlEnableBits & 0x100000000LL) != 0 )
    {
      LODWORD(v48) = 1;
      McTemplateK0pt(
        (struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context,
        &EventPostAcquireAdapterLock,
        v23,
        a1,
        v48);
    }
    v24 = PsGetCurrentProcess();
    v27 = DXGGLOBAL::GetGlobal(v26, v25);
    DXGGLOBAL::StartCoreDripsBlockerTracking(v27, *(_QWORD *)(a1 + 200), 0LL, v24, a4);
    v18 = a2;
    goto LABEL_13;
  }
  if ( bTracingEnabled
    && (*(_DWORD *)(&DxgkControlGuid_Context + 2) & 0x1000000) != 0
    && (*(_WORD *)(&DxgkControlGuid_Context + 2) & 0x2000) == 0
    && (Microsoft_Windows_DxgKrnlEnableBits & 0x100000000LL) != 0 )
  {
    LODWORD(v48) = 0;
    McTemplateK0pt((struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context, &EventPostAcquireAdapterLock, v23, a1, v48);
  }
  KeLeaveCriticalRegion();
}
