/*
 * XREFs of ObpReferenceObjectByHandleWithTag @ 0x1405E8390
 * Callers:
 *     PopPowerRequestActionInfo @ 0x140588A30 (PopPowerRequestActionInfo.c)
 *     NtDuplicateObject @ 0x1405D09B0 (NtDuplicateObject.c)
 *     ObpLookupObjectName @ 0x1405E3BE0 (ObpLookupObjectName.c)
 *     ObReferenceObjectByHandle @ 0x1405E8350 (ObReferenceObjectByHandle.c)
 *     NtWaitForSingleObject @ 0x1405E9AA0 (NtWaitForSingleObject.c)
 *     NtSetInformationThread @ 0x1405E9EA0 (NtSetInformationThread.c)
 *     MiAllocateVirtualMemoryPrepare @ 0x1405ED0B0 (MiAllocateVirtualMemoryPrepare.c)
 *     NtProtectVirtualMemory @ 0x1405EDD70 (NtProtectVirtualMemory.c)
 *     NtResetWriteWatch @ 0x1405EE780 (NtResetWriteWatch.c)
 *     MmQueryVirtualMemory @ 0x1405EE910 (MmQueryVirtualMemory.c)
 *     MmFreeVirtualMemory @ 0x1405EF4F0 (MmFreeVirtualMemory.c)
 *     NtSetInformationVirtualMemory @ 0x1405F6680 (NtSetInformationVirtualMemory.c)
 *     NtQueryInformationJobObject @ 0x1405FE8F0 (NtQueryInformationJobObject.c)
 *     NtAssignProcessToJobObject @ 0x140605E30 (NtAssignProcessToJobObject.c)
 *     NtIsProcessInJob @ 0x1406064D0 (NtIsProcessInJob.c)
 *     PsReferencePartitionByHandle @ 0x1406083B4 (PsReferencePartitionByHandle.c)
 *     NtCreateUserProcess @ 0x14060A950 (NtCreateUserProcess.c)
 *     ExpWnfCaptureScopeInstanceId @ 0x14060FE20 (ExpWnfCaptureScopeInstanceId.c)
 *     NtUnmapViewOfSectionEx @ 0x1406170E0 (NtUnmapViewOfSectionEx.c)
 *     PspCreateThread @ 0x140621D64 (PspCreateThread.c)
 *     NtCreateThreadEx @ 0x140622100 (NtCreateThreadEx.c)
 *     PspBuildCreateProcessContext @ 0x140622378 (PspBuildCreateProcessContext.c)
 *     NtOpenProcessTokenEx @ 0x140646F20 (NtOpenProcessTokenEx.c)
 *     NtQueryInformationThread @ 0x14064A580 (NtQueryInformationThread.c)
 *     PsCreateSystemThreadEx @ 0x14066AAE0 (PsCreateSystemThreadEx.c)
 *     MmPrefetchVirtualMemory @ 0x14066BDC8 (MmPrefetchVirtualMemory.c)
 *     PspQueryQuotaLimits @ 0x14066D5F8 (PspQueryQuotaLimits.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140671520 (ObReferenceObjectByHandleWithTag.c)
 *     NtTerminateThread @ 0x140676540 (NtTerminateThread.c)
 *     NtResumeThread @ 0x140676880 (NtResumeThread.c)
 *     MiReadWriteVirtualMemory @ 0x140676A30 (MiReadWriteVirtualMemory.c)
 *     MiMapViewOfSectionCommon @ 0x140677210 (MiMapViewOfSectionCommon.c)
 *     NtTerminateProcess @ 0x14067A830 (NtTerminateProcess.c)
 *     NtCreateWorkerFactory @ 0x14068A210 (NtCreateWorkerFactory.c)
 *     PopEtEnergyTrackerQuery @ 0x14069C1FC (PopEtEnergyTrackerQuery.c)
 *     MiLockUnlockCommon @ 0x1406A24DC (MiLockUnlockCommon.c)
 *     NtFlushVirtualMemory @ 0x1406B6AE0 (NtFlushVirtualMemory.c)
 *     NtSuspendThread @ 0x1406C20E0 (NtSuspendThread.c)
 *     PspSetQuotaLimits @ 0x1406D1118 (PspSetQuotaLimits.c)
 *     NtAcquireProcessActivityReference @ 0x1406D60F0 (NtAcquireProcessActivityReference.c)
 *     NtGetNextProcess @ 0x140718D90 (NtGetNextProcess.c)
 *     ObWaitForSingleObject @ 0x14071E0C0 (ObWaitForSingleObject.c)
 *     DbgkpCreateNotificationEvent @ 0x140727AD8 (DbgkpCreateNotificationEvent.c)
 *     PopGetPolicyDeviceObject @ 0x140741040 (PopGetPolicyDeviceObject.c)
 *     PopCreateHiberFile @ 0x140746730 (PopCreateHiberFile.c)
 *     PspAssignPrimaryToken @ 0x140748988 (PspAssignPrimaryToken.c)
 *     PspCreateProcess @ 0x14075DE30 (PspCreateProcess.c)
 *     VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x14080856C (VrpHandleIoctlCreateMultipleNamespaceNodes.c)
 *     VrpHandleIoctlCreateNamespaceNode @ 0x1408088C4 (VrpHandleIoctlCreateNamespaceNode.c)
 *     VrpHandleIoctlGetVirtualRootKey @ 0x140808B2C (VrpHandleIoctlGetVirtualRootKey.c)
 *     VrpHandleIoctlInitializeJobForVreg @ 0x140808CA0 (VrpHandleIoctlInitializeJobForVreg.c)
 *     VrpHandleIoctlLoadDifferencingHive @ 0x140809090 (VrpHandleIoctlLoadDifferencingHive.c)
 *     VrpHandleIoctlModifyFlags @ 0x1408095B4 (VrpHandleIoctlModifyFlags.c)
 *     VrpHandleIoctlUnloadDynamicallyLoadedHives @ 0x1408098D0 (VrpHandleIoctlUnloadDynamicallyLoadedHives.c)
 *     NtDebugActiveProcess @ 0x14080FC60 (NtDebugActiveProcess.c)
 *     NtRemoveProcessDebug @ 0x140810050 (NtRemoveProcessDebug.c)
 *     DbgkpWerInitializeDeferredLiveDump @ 0x140812D38 (DbgkpWerInitializeDeferredLiveDump.c)
 *     NtCreateEnclave @ 0x14085A8E0 (NtCreateEnclave.c)
 *     NtInitializeEnclave @ 0x14085AD00 (NtInitializeEnclave.c)
 *     NtLoadEnclaveData @ 0x14085AFD0 (NtLoadEnclaveData.c)
 *     MmProcessWorkingSetControl @ 0x14085EDA0 (MmProcessWorkingSetControl.c)
 *     PfpDeprioritizeOldPagesInWs @ 0x140863EA4 (PfpDeprioritizeOldPagesInWs.c)
 *     PfpSourceGetPrefetchSupport @ 0x140864E80 (PfpSourceGetPrefetchSupport.c)
 *     PfSnAppLaunchScenarioControl @ 0x14086570C (PfSnAppLaunchScenarioControl.c)
 *     PopSetSpecialRequest @ 0x140866620 (PopSetSpecialRequest.c)
 *     PspConvertSiloToServerSilo @ 0x140886E24 (PspConvertSiloToServerSilo.c)
 *     PspQueryPooledQuotaLimits @ 0x140888B68 (PspQueryPooledQuotaLimits.c)
 *     PspQueryWorkingSetWatch @ 0x140888CF8 (PspQueryWorkingSetWatch.c)
 *     PspCreatePicoProcess @ 0x14088C1C0 (PspCreatePicoProcess.c)
 *     PspCreatePicoThread @ 0x14088C460 (PspCreatePicoThread.c)
 *     NtAlertResumeThread @ 0x14088CA70 (NtAlertResumeThread.c)
 *     NtAlertThread @ 0x14088CB90 (NtAlertThread.c)
 *     NtResumeProcess @ 0x14088CC10 (NtResumeProcess.c)
 *     NtSuspendProcess @ 0x14088CC90 (NtSuspendProcess.c)
 *     PsIumEnableOnDemandDebugWithResponse @ 0x14088CDD0 (PsIumEnableOnDemandDebugWithResponse.c)
 *     PsIumGetOnDemandDebugChallenge @ 0x14088CE60 (PsIumGetOnDemandDebugChallenge.c)
 *     NtGetNextThread @ 0x14088E9B0 (NtGetNextThread.c)
 *     ExpProfileCreate @ 0x1408D9BEC (ExpProfileCreate.c)
 * Callees:
 *     ObpIncrPointerCountEx @ 0x140003BB0 (ObpIncrPointerCountEx.c)
 *     ExSlowReplenishHandleTableEntry @ 0x140003BE0 (ExSlowReplenishHandleTableEntry.c)
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x140051600 (KeLeaveCriticalRegionThread.c)
 *     ExFastReplenishHandleTableEntry @ 0x140134B5C (ExFastReplenishHandleTableEntry.c)
 *     ExfUnblockPushLock @ 0x1401B7430 (ExfUnblockPushLock.c)
 *     KeBugCheckEx @ 0x1401BBBA0 (KeBugCheckEx.c)
 *     ObpPushStackInfo @ 0x1402D2F68 (ObpPushStackInfo.c)
 *     ExHandleLogBadReference @ 0x140319D14 (ExHandleLogBadReference.c)
 *     ObReferenceProcessHandleTable @ 0x1405D1160 (ObReferenceProcessHandleTable.c)
 *     ExpLookupHandleTableEntry @ 0x1405E8990 (ExpLookupHandleTableEntry.c)
 *     ExpBlockOnLockedHandleEntry @ 0x140697884 (ExpBlockOnLockedHandleEntry.c)
 *     ObpAuditObjectAccess @ 0x1408613B4 (ObpAuditObjectAccess.c)
 *     ExpGetHandleExtraInfo @ 0x1408CE130 (ExpGetHandleExtraInfo.c)
 *     VfCheckUserHandle @ 0x14093901C (VfCheckUserHandle.c)
 */

__int64 __fastcall ObpReferenceObjectByHandleWithTag(
        ULONG_PTR BugCheckParameter1,
        int a2,
        __int64 a3,
        char a4,
        ULONG Tag,
        _QWORD *a6,
        _DWORD *a7,
        _QWORD *a8)
{
  struct _KTHREAD *CurrentThread; // r15
  unsigned int v11; // ecx
  _KPROCESS *Process; // rdi
  ULONG_PTR v14; // r9
  unsigned __int64 *v15; // rax
  unsigned __int64 *v16; // rdi
  __int64 v17; // rcx
  signed __int64 v18; // rsi
  __int64 v19; // r14
  __int64 v20; // rax
  __int128 v21; // rt0
  unsigned __int8 v22; // tt
  unsigned __int64 v23; // rbx
  unsigned __int8 v24; // al
  int v25; // esi
  unsigned __int64 v26; // rcx
  __int64 v27; // r14
  char v28; // r10
  int v29; // r11d
  PVOID v31; // r8
  unsigned int v32; // edi
  int v33; // r14d
  signed __int64 v34; // r8
  unsigned __int64 v35; // rcx
  __int64 v36; // r9
  __int64 v37; // rax
  signed __int64 v38; // rbx
  _QWORD *HandleExtraInfo; // rax
  ULONG_PTR v40; // rdi
  signed __int64 BugCheckParameter4; // rbx
  int v42; // ecx
  signed __int32 v43[8]; // [rsp+0h] [rbp-88h] BYREF
  unsigned __int64 v44[3]; // [rsp+30h] [rbp-58h] BYREF
  struct _EX_RUNDOWN_REF *v45; // [rsp+90h] [rbp+8h]
  char v49; // [rsp+B8h] [rbp+30h]
  __int64 v50; // [rsp+C8h] [rbp+40h]

  CurrentThread = KeGetCurrentThread();
  v11 = 0;
  v49 = 0;
  Process = CurrentThread->ApcState.Process;
  v45 = (struct _EX_RUNDOWN_REF *)Process;
  *a6 = 0LL;
  if ( a8 )
    *a8 = 0LL;
  if ( (BugCheckParameter1 & 0xFFFFFFFF80000000uLL) == 0xFFFFFFFF80000000uLL )
  {
    if ( BugCheckParameter1 == -1LL )
    {
      if ( (POBJECT_TYPE *)a3 != PsProcessType && a3 )
        return 3221225508LL;
      v40 = (ULONG_PTR)CurrentThread->ApcState.Process;
      if ( (a2 & 0xFFE00000) != 0 && a4 )
      {
        return (unsigned int)-1073741790;
      }
      else
      {
        if ( a7 )
        {
          a7[1] = 0x1FFFFF;
          *a7 = 0;
        }
        if ( ObpTraceFlags )
        {
          ObpPushStackInfo(v40 - 48, 1, 1u, Tag);
          v11 = 0;
        }
        BugCheckParameter4 = _InterlockedIncrement64((volatile signed __int64 *)(v40 - 48));
        if ( BugCheckParameter4 <= 1 )
          KeBugCheckEx(0x18u, 0LL, v40, 0x10uLL, BugCheckParameter4);
        *a6 = v40;
      }
      return v11;
    }
    if ( BugCheckParameter1 == -2LL )
    {
      if ( (POBJECT_TYPE *)a3 == PsThreadType || !a3 )
      {
        if ( (a2 & 0xFFE00000) != 0 && a4 )
        {
          return (unsigned int)-1073741790;
        }
        else
        {
          if ( a7 )
          {
            a7[1] = 0x1FFFFF;
            *a7 = 0;
          }
          if ( ObpTraceFlags )
          {
            ObpPushStackInfo((__int64)&CurrentThread[-1].ReadTransferCount, 1, 1u, Tag);
            v11 = 0;
          }
          v38 = _InterlockedIncrement64(&CurrentThread[-1].ReadTransferCount);
          if ( v38 <= 1 )
            KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)CurrentThread, 0x10uLL, v38);
          *a6 = CurrentThread;
        }
      }
      else
      {
        return (unsigned int)-1073741788;
      }
      return v11;
    }
    if ( a4 )
      return 3221225480LL;
    v14 = ObpKernelHandleTable;
    BugCheckParameter1 ^= 0xFFFFFFFF80000000uLL;
    --CurrentThread->KernelApcDisable;
    v50 = v14;
    goto LABEL_10;
  }
  if ( (MmVerifierData & 0x100) != 0 && !a4 )
    VfCheckUserHandle(BugCheckParameter1);
  --CurrentThread->KernelApcDisable;
  if ( Process == CurrentThread->Process )
  {
    if ( (Process[1].DirectoryTableBase & 0x400000000000000LL) == 0 )
    {
LABEL_90:
      v32 = -1073741816;
      goto LABEL_79;
    }
    v14 = Process[1].ActiveProcessors.Bitmap[5];
  }
  else
  {
    v14 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)Process);
    v49 = 1;
  }
  v50 = v14;
  if ( !v14 )
    goto LABEL_90;
  if ( v14 == ObpKernelHandleTable )
  {
LABEL_86:
    v32 = -1073741816;
    goto LABEL_77;
  }
LABEL_10:
  if ( (BugCheckParameter1 & 0x3FC) == 0
    || (v15 = (unsigned __int64 *)ExpLookupHandleTableEntry(v14, BugCheckParameter1), (v16 = v15) == 0LL) )
  {
LABEL_84:
    if ( BugCheckParameter1 )
      ExHandleLogBadReference(v14, BugCheckParameter1, KeGetCurrentThread()->PreviousMode);
    goto LABEL_86;
  }
  _m_prefetchw(v15);
  v17 = *v15;
  v18 = v15[1];
  v44[1] = v18;
  v44[0] = v17;
  v19 = v17;
  if ( (v17 & 0x1FFFE) == 0 )
    goto LABEL_45;
  while ( 1 )
  {
    if ( (v19 & 1) == 0 )
    {
      ExpBlockOnLockedHandleEntry(v14, v16);
      _m_prefetchw(v16);
      v18 = v16[1];
      v14 = v50;
      v44[0] = *v16;
      v19 = v44[0];
      v44[1] = v18;
      goto LABEL_73;
    }
    *(_QWORD *)&v21 = v19;
    *((_QWORD *)&v21 + 1) = v18;
    v22 = _InterlockedCompareExchange128((volatile signed __int64 *)v16, v18, v19 - 2, (signed __int64 *)&v21);
    v20 = v21;
    v19 = v21;
    *(_OWORD *)v44 = v21;
    v18 = *((_QWORD *)&v21 + 1);
    if ( v22 )
      break;
LABEL_73:
    if ( (v19 & 0x1FFFE) == 0 )
    {
      do
      {
LABEL_45:
        while ( 1 )
        {
          _m_prefetchw(v16);
          v34 = *v16;
          if ( (*v16 & 1) != 0 )
            break;
          if ( !v34 )
            goto LABEL_84;
          ExpBlockOnLockedHandleEntry(v14, v16);
          v14 = v50;
        }
      }
      while ( v34 != _InterlockedCompareExchange64((volatile signed __int64 *)v16, v34 - 1, v34) );
      v23 = ((__int64)*v16 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
      *(_OWORD *)v44 = *(_OWORD *)v16;
      v35 = (int)(ExSlowReplenishHandleTableEntry(v16) + 1);
      v37 = _InterlockedExchangeAdd64((volatile signed __int64 *)v23, v35);
      if ( v37 <= 0 )
        KeBugCheckEx(0x18u, 0LL, v23 + 48, 0x10uLL, v35 + v37);
      _InterlockedExchangeAdd64((volatile signed __int64 *)v16, 1uLL);
      _InterlockedOr(v43, 0);
      if ( *(_QWORD *)(v36 + 48) )
        ExfUnblockPushLock((volatile __int64 *)(v36 + 48), 0LL);
      goto LABEL_50;
    }
  }
  if ( (unsigned __int16)((unsigned __int64)v20 >> 1) != 16 )
  {
    v23 = (v20 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
    goto LABEL_17;
  }
  v44[0] = v20 ^ ((unsigned int)v20 ^ (2 * (unsigned int)((unsigned __int64)v20 >> 1) - 2)) & 0x1FFFE;
  v23 = ((__int64)v44[0] >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
  ObpIncrPointerCountEx((volatile signed __int64 *)v23, 32752);
  v42 = ExFastReplenishHandleTableEntry((volatile signed __int64 *)v16, v44, 32752);
  if ( v42 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)v23, -v42);
LABEL_50:
  LODWORD(v18) = v44[1];
  v19 = v44[0];
LABEL_17:
  if ( ObpTraceFlags )
    ObpPushStackInfo(v23, 1, 1u, Tag);
  v24 = ObHeaderCookie ^ *(_BYTE *)(v23 + 24) ^ BYTE1(v23);
  if ( !a3 || *(_BYTE *)(a3 + 40) != v24 )
  {
    v31 = (PVOID)ObTypeIndexTable[v24];
    if ( !v31 || v31 == MmBadPointer )
      KeBugCheckEx(0x189u, v23, (ULONG_PTR)v31, 0LL, 0LL);
    if ( a3 )
    {
      v32 = -1073741788;
      goto LABEL_76;
    }
  }
  v25 = v18 & 0x1FFFFFF;
  if ( !a4 )
    goto LABEL_27;
  if ( (~v25 & a2) != 0 )
  {
    v32 = -1073741790;
    goto LABEL_76;
  }
  if ( (*(_BYTE *)(v23 + 26) & 0x40) == 0
    || (v26 = v23 - ObpInfoMaskToOffset[*(_BYTE *)(v23 + 26) & 0x7F], !*(_BYTE *)(*(_QWORD *)v26 + 24LL)) )
  {
LABEL_27:
    v27 = v19 >> 17;
    if ( a7 )
    {
      v33 = v27 & 7;
      a7[1] = v25;
      *a7 = v33;
      if ( (v33 & 4) == 0 )
        goto LABEL_29;
    }
    else if ( (v27 & 4) == 0 )
    {
LABEL_29:
      v28 = 0;
      goto LABEL_30;
    }
    v28 = 1;
LABEL_30:
    v29 = v50;
    if ( a8 )
    {
      if ( *(_DWORD *)(v50 + 4) )
      {
        HandleExtraInfo = (_QWORD *)ExpGetHandleExtraInfo(v50, BugCheckParameter1);
        if ( HandleExtraInfo )
          *a8 = *HandleExtraInfo;
      }
    }
    if ( v28 && a2 && !(unsigned __int8)ObpAuditObjectAccess(v29, BugCheckParameter1, (_DWORD)v16, v23, a2) )
    {
      v32 = -1073741816;
      goto LABEL_76;
    }
    *a6 = v23 + 48;
    if ( v49 )
      ExReleaseRundownProtection_0(v45 + 95);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    return 0LL;
  }
  if ( *(_QWORD *)(*(_QWORD *)v26 + 16LL) != 1LL )
  {
    v19 = v44[0];
    goto LABEL_27;
  }
  v32 = -1073700858;
LABEL_76:
  ObfDereferenceObjectWithTag((PVOID)(v23 + 48), Tag);
LABEL_77:
  if ( v49 )
    ExReleaseRundownProtection_0(v45 + 95);
LABEL_79:
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return v32;
}
