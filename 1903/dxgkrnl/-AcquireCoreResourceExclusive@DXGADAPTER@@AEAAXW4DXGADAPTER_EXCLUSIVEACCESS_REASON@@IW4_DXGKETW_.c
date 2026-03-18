/*
 * XREFs of ?AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0124280
 * Callers:
 *     ?AcquireExclusive@COREACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000CEC0 (-AcquireExclusive@COREACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IW4_DXGKETW_PROFILER_TYP.c)
 *     ?AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C012771C (-AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 *     ?AcquireLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ @ 0x1C01EBC48 (-AcquireLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireLocksForStop@DXGADAPTER@@QEAAXPEA_K@Z @ 0x1C01EBE54 (-AcquireLocksForStop@DXGADAPTER@@QEAAXPEA_K@Z.c)
 *     ?EnableIoMmuIsolation@ADAPTER_RENDER@@QEAAJ_N0@Z @ 0x1C01F515C (-EnableIoMmuIsolation@ADAPTER_RENDER@@QEAAJ_N0@Z.c)
 *     ?StopDisplayDevices@ADAPTER_RENDER@@QEAAXW4DXGADAPTER_DEVICELISTTYPE@@PEAVDXGADAPTER@@@Z @ 0x1C01F6494 (-StopDisplayDevices@ADAPTER_RENDER@@QEAAXW4DXGADAPTER_DEVICELISTTYPE@@PEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007320 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     DpiEnableD3Requests @ 0x1C0008924 (DpiEnableD3Requests.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0pt @ 0x1C0035BE4 (McTemplateK0pt.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?SuspendScheduler@ADAPTER_RENDER@@QEAAJEE@Z @ 0x1C012339C (-SuspendScheduler@ADAPTER_RENDER@@QEAAJEE@Z.c)
 *     ?AcquireCoreResourceExclusiveWithTracking@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@W4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C01243EC (-AcquireCoreResourceExclusiveWithTracking@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@.c)
 *     ?StartCoreDripsBlockerTracking@DXGGLOBAL@@QEAAX_KPEADPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0124494 (-StartCoreDripsBlockerTracking@DXGGLOBAL@@QEAAX_KPEADPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?Flush@DXGDODPRESENT@@QEAAXXZ @ 0x1C0124980 (-Flush@DXGDODPRESENT@@QEAAXXZ.c)
 *     ?WakeUpAdapter@DXGADAPTER@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C01EFA3C (-WakeUpAdapter@DXGADAPTER@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?AcquireDeviceLockForAllDevices@DXGPROCESS@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C025D0F0 (-AcquireDeviceLockForAllDevices@DXGPROCESS@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?FlushAllDevice@DXGPROCESS@@QEAAXPEBVDXGADAPTER@@@Z @ 0x1C025DFE0 (-FlushAllDevice@DXGPROCESS@@QEAAXPEBVDXGADAPTER@@@Z.c)
 *     ?ReleaseDeviceLockForAllDevices@DXGPROCESS@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C025EBB4 (-ReleaseDeviceLockForAllDevices@DXGPROCESS@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

void __fastcall DXGADAPTER::AcquireCoreResourceExclusive(__int64 a1, unsigned int a2, char a3, unsigned int a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  char v10; // r13
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  struct DXGGLOBAL *v16; // rax
  char v17; // r15
  const GUID *v18; // r8
  __int64 v19; // r8
  unsigned int v20; // r12d
  const GUID *v21; // r8
  DXGDODPRESENT *v22; // rcx
  _QWORD *v23; // rax
  const GUID *v24; // r8
  __int64 v25; // rdx
  __int64 v26; // rcx
  const GUID *v27; // r8
  __int64 v28; // rbx
  __int64 v29; // rdx
  __int64 v30; // rcx
  struct DXGGLOBAL *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  DXGPROCESS *v37; // r15
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 CurrentProcess; // rbx
  __int64 v43; // rdx
  __int64 v44; // rcx
  struct DXGGLOBAL *Global; // rax
  const GUID *v46; // r8
  const GUID *v47; // r8
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // rax
  DXGDODPRESENT *v55; // rcx
  __int64 v56; // [rsp+20h] [rbp-48h]
  __int64 v57; // [rsp+20h] [rbp-48h]
  __int64 v58; // [rsp+20h] [rbp-48h]
  int v60; // [rsp+80h] [rbp+18h]

  v10 = 0;
  if ( ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(a1 + 144)) )
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v9, v8);
    v23[3] = 275LL;
    v23[4] = 4LL;
    v23[5] = a1;
    v23[6] = 0LL;
    v23[7] = 0LL;
    WdLogEvent5_WdCriticalError(v23);
  }
  if ( a2 == 3 )
  {
    KeEnterCriticalRegion();
    Current = DXGPROCESS::GetCurrent(v33, v32);
    v37 = Current;
    v60 = a3 & 2;
    if ( (a3 & 2) != 0 )
    {
      if ( !Current )
      {
        v38 = WdLogNewEntry5_WdAssertion(v36, v35);
        *(_QWORD *)(v38 + 24) = 4035LL;
        WdLogEvent5_WdAssertion(v38);
      }
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx((char *)v37 + 160, 0LL);
      *((_QWORD *)v37 + 21) = KeGetCurrentThread();
      DXGPROCESS::AcquireDeviceLockForAllDevices(v37, (struct DXGADAPTER *)a1);
      v39 = *(_QWORD *)(a1 + 2560);
      if ( v39 && *(_QWORD *)(v39 + 528) )
        DXGPROCESS::FlushAllDevice(v37, (const struct DXGADAPTER *)a1);
    }
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(a1 + 96));
    CurrentProcess = PsGetCurrentProcess(v41, v40);
    Global = DXGGLOBAL::GetGlobal(v44, v43);
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
      LODWORD(v58) = 1;
      McTemplateK0pt((struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context, &EventPreAcquireAdapterLock, v46, a1, v58);
    }
    DXGADAPTER::AcquireCoreResourceExclusiveWithTracking(a1, 3LL, a4);
    if ( bTracingEnabled
      && (*(_DWORD *)(&DxgkControlGuid_Context + 2) & 0x1000000) != 0
      && (*(_WORD *)(&DxgkControlGuid_Context + 2) & 0x2000) == 0
      && (Microsoft_Windows_DxgKrnlEnableBits & 0x100000000LL) != 0 )
    {
      LODWORD(v58) = 1;
      McTemplateK0pt(
        (struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context,
        &EventPostAcquireAdapterLock,
        v47,
        a1,
        v58);
    }
    if ( v10 && *(_DWORD *)(a1 + 176) == 1 )
      DpiEnableD3Requests(*(_QWORD *)(a1 + 192));
    ExReleasePushLockSharedEx(a1 + 96, 0LL);
    KeLeaveCriticalRegion();
    v50 = *(_QWORD *)(a1 + 2560);
    if ( !v50 )
      goto LABEL_73;
    if ( *(_QWORD *)(v50 + 528) )
    {
      if ( *(_BYTE *)(v50 + 536) )
      {
        v51 = WdLogNewEntry5_WdAssertion(v49, v48);
        *(_QWORD *)(v51 + 24) = 4086LL;
        WdLogEvent5_WdAssertion(v51);
        v50 = *(_QWORD *)(a1 + 2560);
      }
      if ( (int)ADAPTER_RENDER::SuspendScheduler((ADAPTER_RENDER *)v50, 0, 0LL) < 0 )
      {
        v54 = WdLogNewEntry5_WdAssertion(v53, v52);
        *(_QWORD *)(v54 + 24) = 4088LL;
        WdLogEvent5_WdAssertion(v54);
      }
      *(_BYTE *)(*(_QWORD *)(a1 + 2560) + 536LL) = 1;
      v50 = *(_QWORD *)(a1 + 2560);
    }
    if ( !v50 )
    {
LABEL_73:
      v55 = *(DXGDODPRESENT **)(*(_QWORD *)(a1 + 2552) + 368LL);
      if ( v55 )
        DXGDODPRESENT::Flush(v55);
    }
    if ( v60 )
    {
      DXGPROCESS::ReleaseDeviceLockForAllDevices(v37, (struct DXGADAPTER *)a1);
      *((_QWORD *)v37 + 21) = 0LL;
      ExReleasePushLockExclusiveEx((char *)v37 + 160, 0LL);
      KeLeaveCriticalRegion();
    }
    v20 = a2;
    goto LABEL_14;
  }
  if ( (a3 & 1) == 0 )
  {
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(a1 + 96));
    v13 = PsGetCurrentProcess(v12, v11);
    v16 = DXGGLOBAL::GetGlobal(v15, v14);
    DXGGLOBAL::StartCoreDripsBlockerTracking(v16, *(_QWORD *)(a1 + 200), 0LL, v13, a4);
    if ( *(_DWORD *)(a1 + 136) == 1 )
    {
      DXGADAPTER::WakeUpAdapter(a1, a4);
      v17 = 1;
    }
    else
    {
      v17 = 0;
    }
    KeEnterCriticalRegion();
    if ( bTracingEnabled
      && (*(_DWORD *)(&DxgkControlGuid_Context + 2) & 0x1000000) != 0
      && (*(_WORD *)(&DxgkControlGuid_Context + 2) & 0x2000) == 0
      && (Microsoft_Windows_DxgKrnlEnableBits & 0x100000000LL) != 0 )
    {
      LODWORD(v57) = 1;
      McTemplateK0pt((struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context, &EventPreAcquireAdapterLock, v18, a1, v57);
    }
    v19 = a4;
    v20 = a2;
    DXGADAPTER::AcquireCoreResourceExclusiveWithTracking(a1, a2, v19);
    if ( bTracingEnabled
      && (*(_DWORD *)(&DxgkControlGuid_Context + 2) & 0x1000000) != 0
      && (*(_WORD *)(&DxgkControlGuid_Context + 2) & 0x2000) == 0
      && (Microsoft_Windows_DxgKrnlEnableBits & 0x100000000LL) != 0 )
    {
      LODWORD(v57) = 1;
      McTemplateK0pt(
        (struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context,
        &EventPostAcquireAdapterLock,
        v21,
        a1,
        v57);
    }
    if ( v17 && *(_DWORD *)(a1 + 176) == 1 )
      DpiEnableD3Requests(*(_QWORD *)(a1 + 192));
    ExReleasePushLockSharedEx(a1 + 96, 0LL);
    KeLeaveCriticalRegion();
LABEL_13:
    if ( !*(_QWORD *)(a1 + 2560) )
    {
      v22 = *(DXGDODPRESENT **)(*(_QWORD *)(a1 + 2552) + 368LL);
      if ( v22 )
        DXGDODPRESENT::Flush(v22);
    }
LABEL_14:
    *(_DWORD *)(a1 + 152) = v20;
    return;
  }
  KeEnterCriticalRegion();
  if ( bTracingEnabled
    && (*(_DWORD *)(&DxgkControlGuid_Context + 2) & 0x1000000) != 0
    && (*(_WORD *)(&DxgkControlGuid_Context + 2) & 0x2000) == 0
    && (Microsoft_Windows_DxgKrnlEnableBits & 0x100000000LL) != 0 )
  {
    McTemplateK0pt((struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context, &EventPreAcquireAdapterLock, v24, a1, 1);
  }
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 144), 0);
  if ( ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(a1 + 144)) )
  {
    if ( bTracingEnabled
      && (*(_DWORD *)(&DxgkControlGuid_Context + 2) & 0x1000000) != 0
      && (*(_WORD *)(&DxgkControlGuid_Context + 2) & 0x2000) == 0
      && (Microsoft_Windows_DxgKrnlEnableBits & 0x100000000LL) != 0 )
    {
      LODWORD(v56) = 1;
      McTemplateK0pt(
        (struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context,
        &EventPostAcquireAdapterLock,
        v27,
        a1,
        v56);
    }
    v28 = PsGetCurrentProcess(v26, v25);
    v31 = DXGGLOBAL::GetGlobal(v30, v29);
    DXGGLOBAL::StartCoreDripsBlockerTracking(v31, *(_QWORD *)(a1 + 200), 0LL, v28, a4);
    v20 = a2;
    goto LABEL_13;
  }
  if ( bTracingEnabled
    && (*(_DWORD *)(&DxgkControlGuid_Context + 2) & 0x1000000) != 0
    && (*(_WORD *)(&DxgkControlGuid_Context + 2) & 0x2000) == 0
    && (Microsoft_Windows_DxgKrnlEnableBits & 0x100000000LL) != 0 )
  {
    LODWORD(v56) = 0;
    McTemplateK0pt((struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context, &EventPostAcquireAdapterLock, v27, a1, v56);
  }
  KeLeaveCriticalRegion();
}
