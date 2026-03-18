/*
 * XREFs of ObpReferenceObjectByHandleWithTag @ 0x1405FA4A0
 * Callers:
 *     NtOpenProcessTokenEx @ 0x1405CFA00 (NtOpenProcessTokenEx.c)
 *     NtDuplicateObject @ 0x1405E6010 (NtDuplicateObject.c)
 *     ObReferenceObjectByHandleWithTag @ 0x1405F0AB0 (ObReferenceObjectByHandleWithTag.c)
 *     ObpLookupObjectName @ 0x1405F5EE0 (ObpLookupObjectName.c)
 *     ObReferenceObjectByHandle @ 0x1405FA460 (ObReferenceObjectByHandle.c)
 *     NtWaitForSingleObject @ 0x1405FD000 (NtWaitForSingleObject.c)
 *     NtProtectVirtualMemory @ 0x140603900 (NtProtectVirtualMemory.c)
 *     NtResetWriteWatch @ 0x140603F30 (NtResetWriteWatch.c)
 *     MmFreeVirtualMemory @ 0x140606BC0 (MmFreeVirtualMemory.c)
 *     PspBuildCreateProcessContext @ 0x14060B770 (PspBuildCreateProcessContext.c)
 *     NtCreateThreadEx @ 0x14060CA00 (NtCreateThreadEx.c)
 *     PspCreateThread @ 0x14060CCFC (PspCreateThread.c)
 *     NtQueryInformationJobObject @ 0x140612130 (NtQueryInformationJobObject.c)
 *     NtCreateUserProcess @ 0x140615E10 (NtCreateUserProcess.c)
 *     ExpWnfCaptureScopeInstanceId @ 0x140642700 (ExpWnfCaptureScopeInstanceId.c)
 *     NtUnmapViewOfSectionEx @ 0x14064C570 (NtUnmapViewOfSectionEx.c)
 *     MiReadWriteVirtualMemory @ 0x14064CDB0 (MiReadWriteVirtualMemory.c)
 *     PsReferencePartitionByHandle @ 0x14066CC84 (PsReferencePartitionByHandle.c)
 *     MiAllocateVirtualMemoryPrepare @ 0x140677B30 (MiAllocateVirtualMemoryPrepare.c)
 *     NtAssignProcessToJobObject @ 0x140696400 (NtAssignProcessToJobObject.c)
 *     NtIsProcessInJob @ 0x140696C50 (NtIsProcessInJob.c)
 *     NtFlushVirtualMemory @ 0x14069E8A0 (NtFlushVirtualMemory.c)
 *     PopPowerRequestActionInfo @ 0x14069FA64 (PopPowerRequestActionInfo.c)
 *     MmPrefetchVirtualMemory @ 0x1406A58F8 (MmPrefetchVirtualMemory.c)
 *     PsCreateSystemThreadEx @ 0x1406B4000 (PsCreateSystemThreadEx.c)
 *     PopEtEnergyTrackerQuery @ 0x1406C01EC (PopEtEnergyTrackerQuery.c)
 *     MiLockUnlockCommon @ 0x1406C6CF0 (MiLockUnlockCommon.c)
 *     PspQueryQuotaLimits @ 0x1406C88E4 (PspQueryQuotaLimits.c)
 *     NtResumeThread @ 0x1406CDC70 (NtResumeThread.c)
 *     NtTerminateProcess @ 0x1406D6D10 (NtTerminateProcess.c)
 *     NtSuspendThread @ 0x1406E4370 (NtSuspendThread.c)
 *     MmProcessWorkingSetControl @ 0x1406F54B4 (MmProcessWorkingSetControl.c)
 *     PfpSourceGetPrefetchSupport @ 0x1406F72D4 (PfpSourceGetPrefetchSupport.c)
 *     ObWaitForSingleObject @ 0x1407467F0 (ObWaitForSingleObject.c)
 *     PopCreateHiberFile @ 0x14074A544 (PopCreateHiberFile.c)
 *     PopGetPolicyDeviceObject @ 0x14074D740 (PopGetPolicyDeviceObject.c)
 *     DbgkpCreateNotificationEvent @ 0x140758D38 (DbgkpCreateNotificationEvent.c)
 *     VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x140841E7C (VrpHandleIoctlCreateMultipleNamespaceNodes.c)
 *     VrpHandleIoctlCreateNamespaceNode @ 0x1408421E8 (VrpHandleIoctlCreateNamespaceNode.c)
 *     VrpHandleIoctlGetVirtualRootKey @ 0x140842460 (VrpHandleIoctlGetVirtualRootKey.c)
 *     VrpHandleIoctlLoadDifferencingHive @ 0x140842924 (VrpHandleIoctlLoadDifferencingHive.c)
 *     VrpHandleIoctlModifyFlags @ 0x140842E64 (VrpHandleIoctlModifyFlags.c)
 *     VrpHandleIoctlUnloadDynamicallyLoadedHives @ 0x140843198 (VrpHandleIoctlUnloadDynamicallyLoadedHives.c)
 *     NtDebugActiveProcess @ 0x140849520 (NtDebugActiveProcess.c)
 *     DbgkpWerInitializeDeferredLiveDump @ 0x14084C768 (DbgkpWerInitializeDeferredLiveDump.c)
 *     NtCreateEnclave @ 0x140894FB0 (NtCreateEnclave.c)
 *     NtInitializeEnclave @ 0x1408953E0 (NtInitializeEnclave.c)
 *     NtLoadEnclaveData @ 0x1408956C0 (NtLoadEnclaveData.c)
 *     PfpDeprioritizeOldPagesInWs @ 0x1408A0988 (PfpDeprioritizeOldPagesInWs.c)
 *     PfSnAppLaunchScenarioControl @ 0x1408A1BE0 (PfSnAppLaunchScenarioControl.c)
 *     PopSetSpecialRequest @ 0x1408A2B20 (PopSetSpecialRequest.c)
 *     PopDeleteHiberFile @ 0x1408A7EC4 (PopDeleteHiberFile.c)
 *     PspConvertSiloToServerSilo @ 0x1408C51D4 (PspConvertSiloToServerSilo.c)
 *     PspQueryPooledQuotaLimits @ 0x1408C6A4C (PspQueryPooledQuotaLimits.c)
 *     PspQueryWorkingSetWatch @ 0x1408C6BF4 (PspQueryWorkingSetWatch.c)
 *     PspCreatePicoThread @ 0x1408CA870 (PspCreatePicoThread.c)
 *     NtAlertResumeThread @ 0x1408CAE80 (NtAlertResumeThread.c)
 *     NtAlertThread @ 0x1408CAFA0 (NtAlertThread.c)
 *     NtResumeProcess @ 0x1408CB020 (NtResumeProcess.c)
 *     NtSuspendProcess @ 0x1408CB0A0 (NtSuspendProcess.c)
 *     PsIumEnableOnDemandDebugWithResponse @ 0x1408CB284 (PsIumEnableOnDemandDebugWithResponse.c)
 *     PsIumGetOnDemandDebugChallenge @ 0x1408CB314 (PsIumGetOnDemandDebugChallenge.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtection_0 @ 0x140043820 (ExReleaseRundownProtection_0.c)
 *     ObpIncrPointerCountEx @ 0x14007ED14 (ObpIncrPointerCountEx.c)
 *     ExSlowReplenishHandleTableEntry @ 0x14007ED40 (ExSlowReplenishHandleTableEntry.c)
 *     ExFastReplenishHandleTableEntry @ 0x140135770 (ExFastReplenishHandleTableEntry.c)
 *     ExfUnblockPushLock @ 0x1401BFCF0 (ExfUnblockPushLock.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     ObpPushStackInfo @ 0x1402ED6EC (ObpPushStackInfo.c)
 *     ExHandleLogBadReference @ 0x140338B98 (ExHandleLogBadReference.c)
 *     ObReferenceProcessHandleTable @ 0x1405E67C4 (ObReferenceProcessHandleTable.c)
 *     ExpLookupHandleTableEntry @ 0x1405FAA80 (ExpLookupHandleTableEntry.c)
 *     ExpBlockOnLockedHandleEntry @ 0x1406BCCE4 (ExpBlockOnLockedHandleEntry.c)
 *     ObpAuditObjectAccess @ 0x14089DE24 (ObpAuditObjectAccess.c)
 *     ExpGetHandleExtraInfo @ 0x14090B6D8 (ExpGetHandleExtraInfo.c)
 *     VfCheckUserHandle @ 0x140977664 (VfCheckUserHandle.c)
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
  int v25; // ecx
  int v26; // esi
  __int64 v27; // r14
  char v28; // r10
  int v29; // r11d
  unsigned __int64 v31; // rcx
  PVOID v32; // r8
  unsigned int v33; // edi
  int v34; // r14d
  signed __int64 v35; // r8
  unsigned __int64 v36; // rcx
  __int64 v37; // r9
  __int64 v38; // rax
  signed __int64 v39; // rbx
  ULONG_PTR v40; // rdi
  signed __int64 BugCheckParameter4; // rbx
  int v42; // ecx
  _QWORD *HandleExtraInfo; // rax
  signed __int32 v44[8]; // [rsp+0h] [rbp-88h] BYREF
  unsigned __int64 v45[3]; // [rsp+30h] [rbp-58h] BYREF
  struct _EX_RUNDOWN_REF *v46; // [rsp+90h] [rbp+8h]
  char v50; // [rsp+B8h] [rbp+30h]
  __int64 v51; // [rsp+C8h] [rbp+40h]

  CurrentThread = KeGetCurrentThread();
  v11 = 0;
  v50 = 0;
  Process = CurrentThread->ApcState.Process;
  v46 = (struct _EX_RUNDOWN_REF *)Process;
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
            ObpPushStackInfo((__int64)&CurrentThread[-1].OtherTransferCount, 1, 1u, Tag);
            v11 = 0;
          }
          v39 = _InterlockedIncrement64(&CurrentThread[-1].OtherTransferCount);
          if ( v39 <= 1 )
            KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)CurrentThread, 0x10uLL, v39);
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
    v51 = v14;
    goto LABEL_10;
  }
  if ( (MmVerifierData & 0x100) != 0 && !a4 )
    VfCheckUserHandle(BugCheckParameter1);
  --CurrentThread->KernelApcDisable;
  if ( Process == CurrentThread->Process )
  {
    if ( (Process[1].DirectoryTableBase & 0x400000000000000LL) == 0 )
    {
LABEL_110:
      v33 = -1073741816;
      goto LABEL_81;
    }
    v14 = Process[1].ActiveProcessors.Bitmap[4];
  }
  else
  {
    v14 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)Process);
    v50 = 1;
  }
  v51 = v14;
  if ( !v14 )
    goto LABEL_110;
  if ( v14 == ObpKernelHandleTable )
  {
LABEL_84:
    v33 = -1073741816;
    goto LABEL_79;
  }
LABEL_10:
  if ( (BugCheckParameter1 & 0x3FC) == 0
    || (v15 = (unsigned __int64 *)ExpLookupHandleTableEntry(v14, BugCheckParameter1), (v16 = v15) == 0LL) )
  {
LABEL_82:
    if ( BugCheckParameter1 )
      ExHandleLogBadReference(v14, BugCheckParameter1, KeGetCurrentThread()->PreviousMode);
    goto LABEL_84;
  }
  _m_prefetchw(v15);
  v17 = *v15;
  v18 = v15[1];
  v45[1] = v18;
  v45[0] = v17;
  v19 = v17;
  if ( (v17 & 0x1FFFE) == 0 )
    goto LABEL_46;
  while ( 1 )
  {
    if ( (v19 & 1) == 0 )
    {
      ExpBlockOnLockedHandleEntry(v14, v16, v19);
      _m_prefetchw(v16);
      v18 = v16[1];
      v14 = v51;
      v45[0] = *v16;
      v19 = v45[0];
      v45[1] = v18;
      goto LABEL_75;
    }
    *(_QWORD *)&v21 = v19;
    *((_QWORD *)&v21 + 1) = v18;
    v22 = _InterlockedCompareExchange128((volatile signed __int64 *)v16, v18, v19 - 2, (signed __int64 *)&v21);
    v20 = v21;
    v19 = v21;
    *(_OWORD *)v45 = v21;
    v18 = *((_QWORD *)&v21 + 1);
    if ( v22 )
      break;
LABEL_75:
    if ( (v19 & 0x1FFFE) == 0 )
    {
      do
      {
LABEL_46:
        while ( 1 )
        {
          _m_prefetchw(v16);
          v35 = *v16;
          if ( (*v16 & 1) != 0 )
            break;
          if ( !v35 )
            goto LABEL_82;
          ExpBlockOnLockedHandleEntry(v14, v16, v35);
          v14 = v51;
        }
      }
      while ( v35 != _InterlockedCompareExchange64((volatile signed __int64 *)v16, v35 - 1, v35) );
      v23 = ((__int64)*v16 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
      *(_OWORD *)v45 = *(_OWORD *)v16;
      v36 = (int)(ExSlowReplenishHandleTableEntry(v16) + 1);
      v38 = _InterlockedExchangeAdd64((volatile signed __int64 *)v23, v36);
      if ( v38 <= 0 )
        KeBugCheckEx(0x18u, 0LL, v23 + 48, 0x10uLL, v36 + v38);
      _InterlockedExchangeAdd64((volatile signed __int64 *)v16, 1uLL);
      _InterlockedOr(v44, 0);
      if ( *(_QWORD *)(v37 + 48) )
        ExfUnblockPushLock((volatile __int64 *)(v37 + 48), 0LL);
      goto LABEL_51;
    }
  }
  if ( (unsigned __int16)((unsigned __int64)v20 >> 1) != 16 )
  {
    v23 = (v20 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
    goto LABEL_17;
  }
  v45[0] = v20 ^ ((unsigned int)v20 ^ (2 * (unsigned int)((unsigned __int64)v20 >> 1) - 2)) & 0x1FFFE;
  v23 = ((__int64)v45[0] >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
  ObpIncrPointerCountEx((volatile signed __int64 *)v23, 32752);
  v42 = ExFastReplenishHandleTableEntry((volatile signed __int64 *)v16, v45, 32752);
  if ( v42 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)v23, -v42);
LABEL_51:
  LODWORD(v18) = v45[1];
  v19 = v45[0];
LABEL_17:
  if ( ObpTraceFlags )
    ObpPushStackInfo(v23, 1, 1u, Tag);
  v24 = ObHeaderCookie ^ *(_BYTE *)(v23 + 24) ^ BYTE1(v23);
  if ( !a3 || *(_BYTE *)(a3 + 40) != v24 )
  {
    v32 = (PVOID)ObTypeIndexTable[v24];
    if ( !v32 || v32 == MmBadPointer )
      KeBugCheckEx(0x189u, v23, (ULONG_PTR)v32, 0LL, 0LL);
    if ( a3 )
    {
      v33 = -1073741788;
      goto LABEL_78;
    }
  }
  v25 = a2;
  v26 = v18 & 0x1FFFFFF;
  if ( !a4 )
  {
LABEL_24:
    v27 = v19 >> 17;
    if ( a7 )
    {
      v34 = v27 & 7;
      a7[1] = v26;
      *a7 = v34;
      if ( (v34 & 4) == 0 )
        goto LABEL_26;
    }
    else if ( (v27 & 4) == 0 )
    {
LABEL_26:
      v28 = 0;
      goto LABEL_27;
    }
    v28 = 1;
LABEL_27:
    v29 = v51;
    if ( a8 )
    {
      if ( *(_DWORD *)(v51 + 4) )
      {
        HandleExtraInfo = (_QWORD *)ExpGetHandleExtraInfo(v51, BugCheckParameter1);
        v25 = a2;
        if ( HandleExtraInfo )
          *a8 = *HandleExtraInfo;
      }
    }
    if ( v28 && v25 && !(unsigned __int8)ObpAuditObjectAccess(v29, BugCheckParameter1, (_DWORD)v16, v23, v25) )
    {
      v33 = -1073741816;
      goto LABEL_78;
    }
    *a6 = v23 + 48;
    if ( v50 )
      ExReleaseRundownProtection_0(v46 + 96);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    return 0LL;
  }
  if ( (~v26 & a2) != 0 )
  {
    v33 = -1073741790;
    goto LABEL_78;
  }
  if ( (*(_BYTE *)(v23 + 26) & 0x40) == 0 )
    goto LABEL_24;
  v31 = v23 - ObpInfoMaskToOffset[*(_BYTE *)(v23 + 26) & 0x7F];
  if ( !*(_BYTE *)(*(_QWORD *)v31 + 24LL) )
  {
LABEL_35:
    v25 = a2;
    goto LABEL_24;
  }
  if ( *(_QWORD *)(*(_QWORD *)v31 + 16LL) != 1LL )
  {
    v19 = v45[0];
    goto LABEL_35;
  }
  v33 = -1073700858;
LABEL_78:
  ObfDereferenceObjectWithTag((PVOID)(v23 + 48), Tag);
LABEL_79:
  if ( v50 )
    ExReleaseRundownProtection_0(v46 + 96);
LABEL_81:
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return v33;
}
