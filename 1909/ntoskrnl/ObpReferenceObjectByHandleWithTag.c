/*
 * XREFs of ObpReferenceObjectByHandleWithTag @ 0x1405FB4F0
 * Callers:
 *     NtOpenProcessTokenEx @ 0x1405CFF00 (NtOpenProcessTokenEx.c)
 *     NtDuplicateObject @ 0x1405E67E0 (NtDuplicateObject.c)
 *     ObReferenceObjectByHandleWithTag @ 0x1405F13C0 (ObReferenceObjectByHandleWithTag.c)
 *     ObpLookupObjectName @ 0x1405F6F30 (ObpLookupObjectName.c)
 *     ObReferenceObjectByHandle @ 0x1405FB4B0 (ObReferenceObjectByHandle.c)
 *     NtWaitForSingleObject @ 0x1405FE090 (NtWaitForSingleObject.c)
 *     NtProtectVirtualMemory @ 0x140605410 (NtProtectVirtualMemory.c)
 *     NtResetWriteWatch @ 0x140605A40 (NtResetWriteWatch.c)
 *     MmFreeVirtualMemory @ 0x1406086D0 (MmFreeVirtualMemory.c)
 *     PspBuildCreateProcessContext @ 0x14060D280 (PspBuildCreateProcessContext.c)
 *     NtCreateThreadEx @ 0x14060E510 (NtCreateThreadEx.c)
 *     PspCreateThread @ 0x14060E80C (PspCreateThread.c)
 *     NtQueryInformationJobObject @ 0x140613C40 (NtQueryInformationJobObject.c)
 *     NtCreateUserProcess @ 0x140617920 (NtCreateUserProcess.c)
 *     NtFlushVirtualMemory @ 0x1406243B0 (NtFlushVirtualMemory.c)
 *     PsReferencePartitionByHandle @ 0x1406512D4 (PsReferencePartitionByHandle.c)
 *     MmPrefetchVirtualMemory @ 0x1406517C8 (MmPrefetchVirtualMemory.c)
 *     ExpWnfCaptureScopeInstanceId @ 0x140656250 (ExpWnfCaptureScopeInstanceId.c)
 *     NtUnmapViewOfSectionEx @ 0x140660200 (NtUnmapViewOfSectionEx.c)
 *     PopPowerRequestActionInfo @ 0x1406723B0 (PopPowerRequestActionInfo.c)
 *     PsCreateSystemThreadEx @ 0x1406725D0 (PsCreateSystemThreadEx.c)
 *     MiAllocateVirtualMemoryPrepare @ 0x14067D240 (MiAllocateVirtualMemoryPrepare.c)
 *     MiReadWriteVirtualMemory @ 0x14067DEE0 (MiReadWriteVirtualMemory.c)
 *     NtAssignProcessToJobObject @ 0x140689970 (NtAssignProcessToJobObject.c)
 *     NtIsProcessInJob @ 0x14068A1C0 (NtIsProcessInJob.c)
 *     PopEtEnergyTrackerQuery @ 0x1406BF04C (PopEtEnergyTrackerQuery.c)
 *     MiLockUnlockCommon @ 0x1406C55D0 (MiLockUnlockCommon.c)
 *     PspQueryQuotaLimits @ 0x1406C6C14 (PspQueryQuotaLimits.c)
 *     NtResumeThread @ 0x1406CCA10 (NtResumeThread.c)
 *     NtTerminateProcess @ 0x1406D6760 (NtTerminateProcess.c)
 *     NtSuspendThread @ 0x1406E5350 (NtSuspendThread.c)
 *     MmProcessWorkingSetControl @ 0x1406F7278 (MmProcessWorkingSetControl.c)
 *     PfpSourceGetPrefetchSupport @ 0x1406F9094 (PfpSourceGetPrefetchSupport.c)
 *     ObWaitForSingleObject @ 0x1407486F0 (ObWaitForSingleObject.c)
 *     PopGetPolicyDeviceObject @ 0x14074E1D0 (PopGetPolicyDeviceObject.c)
 *     PopCreateHiberFile @ 0x14075A430 (PopCreateHiberFile.c)
 *     DbgkpCreateNotificationEvent @ 0x14075D5C8 (DbgkpCreateNotificationEvent.c)
 *     VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x1408414DC (VrpHandleIoctlCreateMultipleNamespaceNodes.c)
 *     VrpHandleIoctlCreateNamespaceNode @ 0x140841848 (VrpHandleIoctlCreateNamespaceNode.c)
 *     VrpHandleIoctlGetVirtualRootKey @ 0x140841AC0 (VrpHandleIoctlGetVirtualRootKey.c)
 *     VrpHandleIoctlLoadDifferencingHive @ 0x140841F84 (VrpHandleIoctlLoadDifferencingHive.c)
 *     VrpHandleIoctlModifyFlags @ 0x1408424D8 (VrpHandleIoctlModifyFlags.c)
 *     VrpHandleIoctlUnloadDynamicallyLoadedHives @ 0x14084280C (VrpHandleIoctlUnloadDynamicallyLoadedHives.c)
 *     NtDebugActiveProcess @ 0x140848C20 (NtDebugActiveProcess.c)
 *     DbgkpWerInitializeDeferredLiveDump @ 0x14084BE68 (DbgkpWerInitializeDeferredLiveDump.c)
 *     NtCreateEnclave @ 0x1408947D0 (NtCreateEnclave.c)
 *     NtInitializeEnclave @ 0x140894C00 (NtInitializeEnclave.c)
 *     NtLoadEnclaveData @ 0x140894EE0 (NtLoadEnclaveData.c)
 *     PfpDeprioritizeOldPagesInWs @ 0x1408A01C8 (PfpDeprioritizeOldPagesInWs.c)
 *     PfSnAppLaunchScenarioControl @ 0x1408A1420 (PfSnAppLaunchScenarioControl.c)
 *     PopSetSpecialRequest @ 0x1408A2360 (PopSetSpecialRequest.c)
 *     PopDeleteHiberFile @ 0x1408A7724 (PopDeleteHiberFile.c)
 *     PspConvertSiloToServerSilo @ 0x1408C4AA4 (PspConvertSiloToServerSilo.c)
 *     PspQueryPooledQuotaLimits @ 0x1408C632C (PspQueryPooledQuotaLimits.c)
 *     PspQueryWorkingSetWatch @ 0x1408C64D4 (PspQueryWorkingSetWatch.c)
 *     PspCreatePicoThread @ 0x1408CA150 (PspCreatePicoThread.c)
 *     NtAlertResumeThread @ 0x1408CA760 (NtAlertResumeThread.c)
 *     NtAlertThread @ 0x1408CA880 (NtAlertThread.c)
 *     NtResumeProcess @ 0x1408CA900 (NtResumeProcess.c)
 *     NtSuspendProcess @ 0x1408CA980 (NtSuspendProcess.c)
 *     PsIumEnableOnDemandDebugWithResponse @ 0x1408CAB64 (PsIumEnableOnDemandDebugWithResponse.c)
 *     PsIumGetOnDemandDebugChallenge @ 0x1408CABF4 (PsIumGetOnDemandDebugChallenge.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtection_0 @ 0x140043C20 (ExReleaseRundownProtection_0.c)
 *     ObpIncrPointerCountEx @ 0x14007F114 (ObpIncrPointerCountEx.c)
 *     ExSlowReplenishHandleTableEntry @ 0x14007F140 (ExSlowReplenishHandleTableEntry.c)
 *     ExFastReplenishHandleTableEntry @ 0x140136130 (ExFastReplenishHandleTableEntry.c)
 *     ExfUnblockPushLock @ 0x1401C0870 (ExfUnblockPushLock.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     ObpPushStackInfo @ 0x1402ED44C (ObpPushStackInfo.c)
 *     ExHandleLogBadReference @ 0x1403385F8 (ExHandleLogBadReference.c)
 *     ObReferenceProcessHandleTable @ 0x1405E6F94 (ObReferenceProcessHandleTable.c)
 *     ExpLookupHandleTableEntry @ 0x1405FBAD0 (ExpLookupHandleTableEntry.c)
 *     ExpBlockOnLockedHandleEntry @ 0x1406A5224 (ExpBlockOnLockedHandleEntry.c)
 *     ObpAuditObjectAccess @ 0x14089D644 (ObpAuditObjectAccess.c)
 *     ExpGetHandleExtraInfo @ 0x14090B138 (ExpGetHandleExtraInfo.c)
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
