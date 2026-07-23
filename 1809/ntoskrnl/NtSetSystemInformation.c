/*
 * XREFs of NtSetSystemInformation @ 0x140664FB0
 * Callers:
 *     WmipRegisterFirmwareProviders @ 0x1409DFA74 (WmipRegisterFirmwareProviders.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     RtlImageNtHeader @ 0x14009DA20 (RtlImageNtHeader.c)
 *     KeQueryActiveProcessorCountEx @ 0x1400A7860 (KeQueryActiveProcessorCountEx.c)
 *     ExAllocatePoolWithQuotaTag @ 0x1400B75B0 (ExAllocatePoolWithQuotaTag.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1400B9B60 (PsIsCurrentThreadInServerSilo.c)
 *     KeSetActualBasePriorityThread @ 0x1400CCFC0 (KeSetActualBasePriorityThread.c)
 *     ExpUpdateTimerConfiguration @ 0x1400E2088 (ExpUpdateTimerConfiguration.c)
 *     RtlImageDirectoryEntryToData @ 0x1400F2CC0 (RtlImageDirectoryEntryToData.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140109DC0 (PsGetCurrentServerSiloGlobals.c)
 *     KeSetSystemAllowedCpuSets @ 0x140114A0C (KeSetSystemAllowedCpuSets.c)
 *     ExCpuSetResourceManagerAccessCheck @ 0x140126AB8 (ExCpuSetResourceManagerAccessCheck.c)
 *     MmAdjustWorkingSetSizeEx @ 0x14013C164 (MmAdjustWorkingSetSizeEx.c)
 *     MiGetThreadPartition @ 0x14013DC60 (MiGetThreadPartition.c)
 *     IoConfigureCrashDump @ 0x1401885EC (IoConfigureCrashDump.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memcmp @ 0x140196340 (memcmp.c)
 *     ZwLoadDriver @ 0x1401BA2D0 (ZwLoadDriver.c)
 *     ZwSetSystemInformation @ 0x1401BB750 (ZwSetSystemInformation.c)
 *     ZwUnloadDriver @ 0x1401BBAD0 (ZwUnloadDriver.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     VslProvisionDumpEncryption @ 0x14027BB20 (VslProvisionDumpEncryption.c)
 *     KdUpdateTimeSlipEvent @ 0x14028C5F0 (KdUpdateTimeSlipEvent.c)
 *     KeProcessorProfileControlArea @ 0x14028EF34 (KeProcessorProfileControlArea.c)
 *     KeSetTagCpuSets @ 0x140296FD8 (KeSetTagCpuSets.c)
 *     KeIntSteerAssignCpuSetForGsiv @ 0x14029A9B4 (KeIntSteerAssignCpuSetForGsiv.c)
 *     PsSetCpuQuotaInformation @ 0x1402E9948 (PsSetCpuQuotaInformation.c)
 *     PsSetExeModerationState @ 0x1402E9D84 (PsSetExeModerationState.c)
 *     ExpSetSoftRebootFlags @ 0x140319788 (ExpSetSoftRebootFlags.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     PsInvokeWin32Callout @ 0x1405F5E90 (PsInvokeWin32Callout.c)
 *     SeSinglePrivilegeCheck @ 0x140613160 (SeSinglePrivilegeCheck.c)
 *     ExAcquireTimeRefreshLock @ 0x1406669FC (ExAcquireTimeRefreshLock.c)
 *     PfSetSuperfetchInformation @ 0x140666A38 (PfSetSuperfetchInformation.c)
 *     PfSnSetPrefetcherInformation @ 0x140667058 (PfSnSetPrefetcherInformation.c)
 *     MmLoadSystemImageEx @ 0x1406821B8 (MmLoadSystemImageEx.c)
 *     ExHandleSPCall2 @ 0x1406ABF8C (ExHandleSPCall2.c)
 *     PsLookupProcessThreadByCid @ 0x1406B4230 (PsLookupProcessThreadByCid.c)
 *     KeSynchronizeWithDynamicProcessors @ 0x1406B6060 (KeSynchronizeWithDynamicProcessors.c)
 *     SmSetStoreInformation @ 0x1406CCED0 (SmSetStoreInformation.c)
 *     MiCombineIdenticalPages @ 0x1406D2818 (MiCombineIdenticalPages.c)
 *     DbgkRegisterErrorPort @ 0x140703740 (DbgkRegisterErrorPort.c)
 *     MmUnloadSystemImage @ 0x140710150 (MmUnloadSystemImage.c)
 *     MmIssueMemoryListCommand @ 0x14071D178 (MmIssueMemoryListCommand.c)
 *     PsChangeQuantumTable @ 0x14071D268 (PsChangeQuantumTable.c)
 *     ExpInitializeSessionDriver @ 0x14071F5B0 (ExpInitializeSessionDriver.c)
 *     ExpRegisterFirmwareTableInformationHandler @ 0x14075C8BC (ExpRegisterFirmwareTableInformationHandler.c)
 *     KeInitializeEntropySystem @ 0x140762774 (KeInitializeEntropySystem.c)
 *     WheaCrashDumpInitializationComplete @ 0x140764C7C (WheaCrashDumpInitializationComplete.c)
 *     CmSetRegistryQuotaInformation @ 0x1407ED814 (CmSetRegistryQuotaInformation.c)
 *     CmReconcileAndValidateAllHives @ 0x1407F6EF0 (CmReconcileAndValidateAllHives.c)
 *     VslRelaxQuotas @ 0x140819EF0 (VslRelaxQuotas.c)
 *     MmAddVerifierThunks @ 0x14084EDA0 (MmAddVerifierThunks.c)
 *     MmCreateMirror @ 0x14084F6D0 (MmCreateMirror.c)
 *     MmScrubMemory @ 0x140860F24 (MmScrubMemory.c)
 *     ObSetRefTraceInformation @ 0x140863D70 (ObSetRefTraceInformation.c)
 *     EtwSetPerformanceTraceInformation @ 0x1408BAD0C (EtwSetPerformanceTraceInformation.c)
 *     ExpIsKernelCfgActive @ 0x1408CCD40 (ExpIsKernelCfgActive.c)
 *     ExpQueryElamCertInfo @ 0x1408CD1D0 (ExpQueryElamCertInfo.c)
 *     ExpSetProcessorMicrocodeUpdateInformation @ 0x1408CDBCC (ExpSetProcessorMicrocodeUpdateInformation.c)
 *     ExpSetTimeZoneInformation @ 0x1408CDC34 (ExpSetTimeZoneInformation.c)
 *     ExpUpdateComPlusPackage @ 0x1408CE018 (ExpUpdateComPlusPackage.c)
 *     ExSetLeapSecondEnabled @ 0x1408CE388 (ExSetLeapSecondEnabled.c)
 *     ExpCapabilityCheck @ 0x1408D0EB4 (ExpCapabilityCheck.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 *     ExpCovResetInformation @ 0x1408D94A4 (ExpCovResetInformation.c)
 *     VfFreeCapturedUnicodeString @ 0x140926C98 (VfFreeCapturedUnicodeString.c)
 *     VfProbeAndCaptureUnicodeString @ 0x140926E48 (VfProbeAndCaptureUnicodeString.c)
 *     VfProbeAndCaptureUnicodeStringBuffer @ 0x140926E80 (VfProbeAndCaptureUnicodeStringBuffer.c)
 *     VfFaultsSetParameters @ 0x1409394A0 (VfFaultsSetParameters.c)
 *     VfAddVerifierEntry @ 0x14094B814 (VfAddVerifierEntry.c)
 *     VfRemoveVerifierEntry @ 0x14094B9F8 (VfRemoveVerifierEntry.c)
 *     VfSetVerifierInformation @ 0x14094BA20 (VfSetVerifierInformation.c)
 *     VfSetVerifierInformationEx @ 0x14094BB28 (VfSetVerifierInformationEx.c)
 */

NTSTATUS __stdcall NtSetSystemInformation(
        SYSTEM_INFORMATION_CLASS SystemInformationClass,
        PVOID SystemInformation,
        ULONG SystemInformationLength)
{
  size_t v3; // r14
  int v6; // r13d
  __int64 v7; // rdx
  char *v8; // rcx
  __int64 v9; // r8
  KPROCESSOR_MODE PreviousMode; // r12
  __int64 v11; // rbx
  __int64 v12; // r9
  __int64 v13; // rax
  int updated; // edi
  ULONG v15; // ecx
  ULONG v16; // ecx
  int v18; // ecx
  char v19; // cl
  unsigned __int64 v20; // r9
  ULONG ActiveProcessorCount; // eax
  __int64 *v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  PVOID v29; // rcx
  NTSTATUS result; // eax
  __int32 v31; // r15d
  int v32; // eax
  __m128i *v33; // rcx
  __int64 v34; // rcx
  char *v35; // rdi
  PIMAGE_NT_HEADERS v36; // rax
  int v37; // eax
  int SystemImage; // eax
  char *v39; // rbx
  PVOID v40; // r14
  PIMAGE_NT_HEADERS v41; // rax
  __int64 AddressOfEntryPoint; // rdx
  __int32 v43; // r15d
  __int32 v44; // r15d
  __int32 v45; // r15d
  __int32 v46; // r15d
  int v47; // r15d
  int v48; // r15d
  int v49; // r15d
  void (*v50)(void); // rax
  ULONG v51; // esi
  unsigned int v52; // edi
  bool v53; // zf
  unsigned __int64 v54; // rax
  __int16 v55; // ax
  __int64 v56; // r8
  PVOID v57; // r14
  void *v58; // rcx
  int v59; // edi
  __int32 v60; // r15d
  __int32 v61; // r15d
  __int32 v62; // r15d
  __int32 v63; // r15d
  int v64; // r15d
  int v65; // r15d
  int v66; // r15d
  __int64 v67; // r8
  __int64 v68; // r9
  __int64 v69; // r8
  __int64 v70; // r9
  __int32 v71; // r15d
  __int32 v72; // r15d
  __int32 v73; // r15d
  __int32 v74; // r15d
  int v75; // r15d
  int v76; // r15d
  int v77; // r15d
  char *CurrentServerSiloGlobals; // r15
  unsigned __int16 v79; // si
  char *v80; // rcx
  PVOID PoolWithQuotaTag; // rax
  __int64 v82; // r12
  int v83; // eax
  struct _KTHREAD *CurrentThread; // rax
  __int64 ThreadPartition; // rax
  __int64 v86; // rcx
  int v87; // r14d
  char v88; // di
  unsigned int v89; // r14d
  __int64 v90; // r15
  unsigned int v91; // r14d
  int v92; // r8d
  char *v93; // rdx
  PVOID v94; // rbx
  _KPROCESS *Process; // rbx
  unsigned int v96; // r14d
  unsigned __int64 v97; // r15
  struct _SINGLE_LIST_ENTRY v98; // [rsp+30h] [rbp-388h] BYREF
  LUID PrivilegeValue; // [rsp+50h] [rbp-368h]
  _BYTE v100[2]; // [rsp+58h] [rbp-360h] BYREF
  int SessionId; // [rsp+5Ch] [rbp-35Ch] BYREF
  void *Buf1[2]; // [rsp+60h] [rbp-358h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+70h] [rbp-348h] BYREF
  struct _SINGLE_LIST_ENTRY v104; // [rsp+78h] [rbp-340h] BYREF
  int v105; // [rsp+80h] [rbp-338h]
  PVOID BaseAddress; // [rsp+88h] [rbp-330h] BYREF
  UNICODE_STRING DriverServiceName; // [rsp+90h] [rbp-328h] BYREF
  ULONG v108; // [rsp+A0h] [rbp-318h]
  ULONG v109; // [rsp+A8h] [rbp-310h]
  ULONG Size[3]; // [rsp+ACh] [rbp-30Ch] BYREF
  PVOID Object; // [rsp+C0h] [rbp-2F8h] BYREF
  PVOID v112; // [rsp+C8h] [rbp-2F0h] BYREF
  __int64 v113; // [rsp+D0h] [rbp-2E8h] BYREF
  HANDLE v114; // [rsp+D8h] [rbp-2E0h]
  __int64 v115; // [rsp+E0h] [rbp-2D8h] BYREF
  PVOID v116[7]; // [rsp+E8h] [rbp-2D0h] BYREF
  HANDLE v117; // [rsp+128h] [rbp-290h]
  __int128 v118; // [rsp+138h] [rbp-280h] BYREF
  void *Src[2]; // [rsp+148h] [rbp-270h]
  __m128i v120[3]; // [rsp+158h] [rbp-260h] BYREF
  char v121[160]; // [rsp+190h] [rbp-228h] BYREF
  _BYTE v122[160]; // [rsp+230h] [rbp-188h] BYREF
  _BYTE v123[160]; // [rsp+2D0h] [rbp-E8h] BYREF

  v3 = SystemInformationLength;
  v6 = 1;
  memset(v120, 0, sizeof(v120));
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v11 = 0LL;
  v12 = 3LL;
  if ( PreviousMode )
  {
    v13 = 1LL;
    if ( SystemInformationClass != SystemErrorPortInformation )
      v13 = 3LL;
    if ( (_DWORD)v3 )
    {
      if ( ((unsigned __int64)SystemInformation & v13) != 0 )
        ExRaiseDatatypeMisalignment();
      v8 = (char *)SystemInformation + v3;
      if ( (unsigned __int64)SystemInformation + v3 > 0x7FFFFFFF0000LL || v8 < SystemInformation )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  updated = 0;
  if ( SystemInformationClass > SystemImageFileExecutionOptionsInformation )
  {
    if ( SystemInformationClass <= SystemSoftRebootInformation )
    {
      if ( SystemInformationClass == SystemSoftRebootInformation )
      {
        PrivilegeValue = (LUID)19LL;
        if ( !SeSinglePrivilegeCheck((LUID)19LL, PreviousMode) )
          return -1073741727;
        v87 = v3 - 1;
        if ( v87 )
        {
          if ( v87 != 3 )
            return -1073741820;
          v6 = *(_DWORD *)SystemInformation;
          Size[2] = *(_DWORD *)SystemInformation;
        }
        else
        {
          v88 = *(_BYTE *)SystemInformation;
          if ( *(_BYTE *)SystemInformation && !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
            return -1073741727;
          if ( !v88 )
            v6 = 5;
        }
        return ExpSetSoftRebootFlags(v6);
      }
      if ( SystemInformationClass <= SystemCpuQuotaInformation )
      {
        if ( SystemInformationClass == SystemCpuQuotaInformation )
          return PsSetCpuQuotaInformation((unsigned __int64)SystemInformation, v3, PreviousMode);
        v60 = SystemInformationClass - 95;
        if ( !v60 )
        {
          if ( PreviousMode && SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
          {
            if ( (unsigned int)v3 >= 0x18 )
              return ExpCovResetInformation(SystemInformation, (unsigned int)v3);
            return -1073741820;
          }
          return -1073741790;
        }
        v61 = v60 - 2;
        if ( !v61 )
        {
          if ( (_DWORD)v3 != 40 )
            return -1073741820;
          if ( (unsigned int)ExpIsKernelCfgActive(v8, v7, v9, 3LL) )
            return -1073740641;
          if ( PreviousMode )
          {
            if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
              return -1073741727;
            v120[0] = *(__m128i *)SystemInformation;
            v120[1] = *((__m128i *)SystemInformation + 1);
            v120[2].m128i_i64[0] = *((_QWORD *)SystemInformation + 4);
            result = VfProbeAndCaptureUnicodeStringBuffer(&v120[0].m128i_u64[1], 1LL, v67, v68);
            if ( result < 0 )
              return result;
            updated = VfProbeAndCaptureUnicodeStringBuffer(&v120[1].m128i_u64[1], 1LL, v69, v70);
            if ( updated < 0 )
            {
              v33 = (__m128i *)&v120[0].m128i_u64[1];
              goto LABEL_268;
            }
            SystemInformation = v120;
          }
          updated = VfFaultsSetParameters(SystemInformation);
          if ( !PreviousMode )
            return updated;
          VfFreeCapturedUnicodeString((char *)SystemInformation + 8);
          v33 = (__m128i *)((char *)SystemInformation + 24);
          goto LABEL_268;
        }
        v62 = v61 - 5;
        if ( v62 )
        {
          v63 = v62 - 2;
          if ( !v63 )
          {
            LOBYTE(v9) = PreviousMode;
            return ExpSetProcessorMicrocodeUpdateInformation(SystemInformation, (unsigned int)v3, v9, 3LL);
          }
          v64 = v63 - 2;
          if ( !v64 )
            return -1073741821;
          v65 = v64 - 3;
          if ( !v65 )
          {
            LOBYTE(v12) = PreviousMode;
            return SmSetStoreInformation(v8, SystemInformation, (unsigned int)v3, v12);
          }
          v66 = v65 - 1;
          if ( !v66 )
            return -1073741822;
          if ( v66 != 1 )
            return -1073741821;
          if ( (_DWORD)v3 != 4 )
            return -1073741820;
          if ( !SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, PreviousMode) )
            return -1073741790;
          MEMORY[0xFFFFF78000000248] = *(_DWORD *)SystemInformation;
          return 0;
        }
        v52 = 432;
        if ( (_DWORD)v3 != 432 )
          return -1073741820;
        if ( !PreviousMode || (unsigned __int8)ExpCapabilityCheck((PUNICODE_STRING)&TimeZoneCapability) )
          return ExpSetTimeZoneInformation(SystemInformation, v52);
        v53 = SeSinglePrivilegeCheck(SeTimeZonePrivilege, PreviousMode) == 0;
LABEL_193:
        if ( v53 )
          return -1073741727;
        return ExpSetTimeZoneInformation(SystemInformation, v52);
      }
      v71 = SystemInformationClass - 127;
      if ( !v71 )
      {
        if ( (_DWORD)v3 == 16 )
        {
          if ( SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, PreviousMode) )
          {
            updated = MmScrubMemory(v86, *(_QWORD *)SystemInformation, &v115);
            PrivilegeValue.LowPart = updated;
            *((_QWORD *)SystemInformation + 1) = v115;
            return updated;
          }
          return -1073741727;
        }
        return -1073741820;
      }
      v72 = v71 - 2;
      if ( !v72 )
        return KeProcessorProfileControlArea((__int64)SystemInformation, v3, PreviousMode);
      v73 = v72 - 1;
      if ( !v73 )
      {
        if ( (((_DWORD)v3 - 16) & 0xFFFFFFE7) == 0 && (_DWORD)v3 != 40 )
        {
          if ( SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, PreviousMode) )
          {
            memmove(v120, SystemInformation, v3);
            if ( (_DWORD)v3 == 32 )
              v11 = v120[1].m128i_i64[1];
            ThreadPartition = MiGetThreadPartition((__int64)KeGetCurrentThread());
            updated = MiCombineIdenticalPages(
                        ThreadPartition,
                        v120[0].m128i_i64[0],
                        v120[1].m128i_u32[0],
                        v11,
                        KeGetCurrentThread()->PreviousMode,
                        &v113);
            PrivilegeValue.LowPart = updated;
            *((_QWORD *)SystemInformation + 1) = v113;
            return updated;
          }
          return -1073741727;
        }
        return -1073741820;
      }
      v74 = v73 - 1;
      if ( !v74 )
      {
        if ( !PreviousMode )
        {
          if ( (_DWORD)v3 == 24 )
            return KeInitializeEntropySystem(
                     *(_QWORD *)SystemInformation,
                     *((_QWORD *)SystemInformation + 1),
                     *((_QWORD *)SystemInformation + 2),
                     3LL);
          return -1073741820;
        }
        return -1073741790;
      }
      v75 = v74 - 1;
      if ( !v75 )
      {
        if ( (_DWORD)v3 == 4 )
        {
          *(_DWORD *)&DriverServiceName.Length = 7733364;
          DriverServiceName.Buffer = L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\condrv";
          v83 = *(_DWORD *)SystemInformation & 1;
          v100[1] = *(_BYTE *)SystemInformation & 1;
          if ( (_BYTE)v83 )
          {
            CurrentThread = KeGetCurrentThread();
            --CurrentThread->KernelApcDisable;
            ExAcquirePushLockExclusiveEx((ULONG_PTR)&ExpConDrvLoadLock, 0LL);
            updated = ZwLoadDriver(&DriverServiceName);
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpConDrvLoadLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)&ExpConDrvLoadLock);
            KeAbPostRelease((ULONG_PTR)&ExpConDrvLoadLock);
            KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
            return updated;
          }
          if ( SeSinglePrivilegeCheck(SeLoadDriverPrivilege, PreviousMode) )
            return ZwUnloadDriver(&DriverServiceName);
          return -1073741727;
        }
        return -1073741820;
      }
      v76 = v75 - 2;
      if ( !v76 )
      {
        if ( (_DWORD)v3 == 32 )
          return ExHandleSPCall2(v8, SystemInformation);
        return -1073741820;
      }
      v77 = v76 - 8;
      if ( v77 )
      {
        if ( v77 != 8 )
          return -1073741821;
        if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
          return -1073741727;
        if ( !(_DWORD)v3 )
        {
          if ( ExBootLoaderMetadata )
            _InterlockedExchange((volatile __int32 *)ExBootLoaderMetadata, 0);
          return updated;
        }
        return -1073741820;
      }
      CurrentServerSiloGlobals = (char *)PsGetCurrentServerSiloGlobals();
      if ( (_DWORD)v3 == 48 )
      {
        if ( !SeSinglePrivilegeCheck(SeShutdownPrivilege, PreviousMode) )
          return -1073741727;
        v120[0] = *(__m128i *)SystemInformation;
        v120[1] = *((__m128i *)SystemInformation + 1);
        v120[2] = *((__m128i *)SystemInformation + 2);
        if ( _InterlockedCompareExchange(
               (volatile signed __int32 *)CurrentServerSiloGlobals + 298,
               _mm_cvtsi128_si32(v120[0]),
               0) )
        {
          return 0;
        }
        *(__m128i *)Src = v120[1];
        v120[1] = 0uLL;
        v79 = _mm_cvtsi128_si32(*(__m128i *)Src);
        if ( v79 && (v79 & 1) == 0 )
        {
          if ( ((__int64)Src[1] & 1) != 0 )
            ExRaiseDatatypeMisalignment();
          v80 = (char *)Src[1] + v79;
          if ( (unsigned __int64)v80 > 0x7FFFFFFF0000LL || v80 < Src[1] )
            MEMORY[0x7FFFFFFF0000] = 0;
          PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, v79, 0x50535845u);
          v82 = (__int64)PoolWithQuotaTag;
          if ( PoolWithQuotaTag )
          {
            memmove(PoolWithQuotaTag, Src[1], v79);
            v120[1].m128i_i64[1] = v82;
            v120[1].m128i_i16[0] = v79;
            v120[1].m128i_i16[1] = v79;
          }
        }
        *(__m128i *)(CurrentServerSiloGlobals + 1192) = v120[0];
        *(__m128i *)(CurrentServerSiloGlobals + 1208) = v120[1];
        *(__m128i *)(CurrentServerSiloGlobals + 1224) = v120[2];
        return 0;
      }
      return -1073741820;
    }
    if ( SystemInformationClass <= SystemWin32WerStartCallout )
    {
      switch ( SystemInformationClass )
      {
        case SystemWin32WerStartCallout:
          if ( (_DWORD)v3 != 8 )
          {
            if ( !(_DWORD)v3 )
            {
              updated = 0;
              Process = KeGetCurrentThread()->ApcState.Process;
              SessionId = MmGetSessionIdEx((__int64)Process);
              if ( SessionId == -1 )
                return updated;
              return PsInvokeWin32Callout(32, (__int64)Process, 1, (__int64)&SessionId);
            }
            return -1073741820;
          }
          if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
            return -1073741727;
          v117 = *(HANDLE *)SystemInformation;
          updated = ObReferenceObjectByHandle(v117, 0x1000u, (POBJECT_TYPE)PsProcessType, PreviousMode, v116, 0LL);
          if ( updated < 0 )
            return updated;
          v94 = v116[0];
          SessionId = MmGetSessionIdEx((__int64)v116[0]);
          if ( SessionId != -1 )
            updated = PsInvokeWin32Callout(32, (__int64)v94, 1, (__int64)&SessionId);
          v58 = v94;
          goto LABEL_224;
        case SystemElamCertificateInformation:
          if ( (_DWORD)v3 != 8 )
            return -1073741820;
          if ( PreviousMode )
            return ExpQueryElamCertInfo(*(_QWORD *)SystemInformation, v7, v9, 3LL);
          return -1073741811;
        case SystemRegistryReconciliationInformation:
          return CmReconcileAndValidateAllHives();
        case SystemHypervisorDetailInformation:
          return -1073741637;
        case SystemVmGenerationCountInformation:
          if ( !PreviousMode )
          {
            if ( (_DWORD)v3 == 8 )
              return KdInitialize(3LL, SystemInformation, &KdpContext);
            return -1073741820;
          }
          return -1073741790;
      }
      if ( SystemInformationClass != SystemCodeIntegrityPolicyInformation )
      {
        if ( SystemInformationClass != SystemAllowedCpuSetsInformation )
        {
          if ( SystemInformationClass == SystemInterruptCpuSetsInformation )
          {
            if ( (_DWORD)v3 == 16 )
            {
              if ( SeSinglePrivilegeCheck(SeIncreaseBasePriorityPrivilege, PreviousMode) )
                return KeIntSteerAssignCpuSetForGsiv(
                         *(_OWORD *)SystemInformation,
                         WORD2(*(_QWORD *)SystemInformation),
                         *((_QWORD *)SystemInformation + 1));
              return -1073741727;
            }
          }
          else
          {
            if ( SystemInformationClass != SystemCpuSetTagInformation )
              return -1073741821;
            if ( (unsigned int)v3 >= 8 )
            {
              v89 = v3 - 8;
              if ( (v89 & 7) == 0 && v89 <= 0xA0 )
              {
                v90 = *(_QWORD *)SystemInformation;
                v116[6] = *(PVOID *)SystemInformation;
                memmove(v121, (char *)SystemInformation + 8, v89);
                updated = ExCpuSetResourceManagerAccessCheck(PreviousMode);
                if ( updated < 0 )
                  return updated;
                return KeSetTagCpuSets(v89 >> 3, v121, v90);
              }
            }
          }
          return -1073741820;
        }
        if ( (v3 & 7) != 0 || (unsigned int)v3 > 0xA0 )
          return -1073741820;
        memmove(v122, SystemInformation, v3);
        result = ExCpuSetResourceManagerAccessCheck(PreviousMode);
        if ( result < 0 )
          return result;
        v91 = (unsigned int)v3 >> 3;
        v92 = 0;
        v93 = v122;
        return KeSetSystemAllowedCpuSets(v91, v93, v92);
      }
      goto LABEL_407;
    }
    switch ( SystemInformationClass )
    {
      case SystemActivityModerationExeState:
        if ( (_DWORD)v3 != 24 )
          return -1073741820;
        v120[0] = *(__m128i *)SystemInformation;
        v120[1].m128i_i64[0] = *((_QWORD *)SystemInformation + 2);
        result = VfProbeAndCaptureUnicodeStringBuffer(v120, 1LL, v9, 3LL);
        if ( result >= 0 )
        {
          updated = PsSetExeModerationState((__int64)v120, v120[1].m128i_u32[0], v120[1].m128i_u32[1]);
          v33 = v120;
          goto LABEL_268;
        }
        return result;
      case SystemCodeIntegrityUnlockInformation:
        goto LABEL_407;
      case SystemIntegrityQuotaInformation:
        if ( !(_DWORD)v3 )
        {
          if ( !PreviousMode || SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
            return VslRelaxQuotas();
          return -1073741727;
        }
        break;
      case SystemSecureDumpEncryptionInformation:
        if ( !(_DWORD)v3 )
        {
          if ( SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
            return VslProvisionDumpEncryption();
          return -1073741727;
        }
        break;
      case SystemCodeIntegrityVerificationInformation:
LABEL_407:
        if ( qword_14040EE68 )
          return qword_14040EE68((unsigned int)SystemInformationClass, SystemInformation, (unsigned int)v3);
        return -1073741637;
      case SystemWorkloadAllowedCpuSetsInformation:
        if ( (unsigned int)v3 < 8 )
          return -1073741820;
        v96 = v3 - 8;
        if ( (v96 & 7) != 0 || v96 > 0xA0 )
          return -1073741820;
        v97 = *(_QWORD *)SystemInformation;
        memmove(v123, (char *)SystemInformation + 8, v96);
        if ( v97 >= 2 )
          return -1073741811;
        updated = ExCpuSetResourceManagerAccessCheck(PreviousMode);
        if ( updated < 0 )
          return updated;
        v91 = v96 >> 3;
        v92 = v97;
        v93 = v123;
        return KeSetSystemAllowedCpuSets(v91, v93, v92);
      case SystemLeapSecondInformation:
        if ( (_DWORD)v3 == 8 )
        {
          if ( PreviousMode && !SeSinglePrivilegeCheck(SeSystemtimePrivilege, PreviousMode) )
            return -1073741727;
          if ( PsIsCurrentThreadInServerSilo() )
            return -1073741790;
          v120[0].m128i_i64[0] = *(_QWORD *)SystemInformation;
          LOBYTE(v98.Next) = v120[0].m128i_i8[0] != 0;
          result = ExSetLeapSecondEnabled();
          updated = result;
          if ( result >= 0 )
          {
            *(_BYTE *)ExLeapSecondData = v98.Next;
            return updated;
          }
          return result;
        }
        return -1073741820;
      case SystemFlags2Information:
        if ( (_DWORD)v3 == 4 )
        {
          if ( SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
          {
            NtGlobalFlag2 = *(_DWORD *)SystemInformation;
            *(_DWORD *)SystemInformation = NtGlobalFlag2;
            return updated;
          }
          return -1073741790;
        }
        return -1073741820;
      default:
        return -1073741821;
    }
    return -1073741811;
  }
  if ( SystemInformationClass == SystemImageFileExecutionOptionsInformation )
  {
    if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
      return -1073741790;
    if ( (_DWORD)v3 == 8 )
    {
      v120[0].m128i_i64[0] = *(_QWORD *)SystemInformation;
      _InterlockedOr((volatile signed __int32 *)0xFFFFF780000003A0LL, v120[0].m128i_u32[0]);
      _InterlockedAnd((volatile signed __int32 *)0xFFFFF780000003A0LL, ~v120[0].m128i_i32[1]);
      return updated;
    }
    return -1073741820;
  }
  if ( SystemInformationClass > SystemLoadGdiDriverInSystemSpace )
  {
    if ( SystemInformationClass <= SystemMemoryListInformation )
    {
      if ( SystemInformationClass == SystemMemoryListInformation )
      {
        LOBYTE(v9) = PreviousMode;
        return MmIssueMemoryListCommand(SystemInformation, (unsigned int)v3, v9, 3LL);
      }
      v43 = SystemInformationClass - 56;
      if ( !v43 )
      {
        LOBYTE(v12) = PreviousMode;
        return PfSnSetPrefetcherInformation(v8, SystemInformation, (unsigned int)v3, v12);
      }
      v44 = v43 - 3;
      if ( !v44 )
      {
        if ( (_DWORD)v3 == 4 )
        {
          v51 = *(_DWORD *)SystemInformation;
          Size[1] = v51;
          updated = ExpUpdateComPlusPackage(v51);
          if ( updated >= 0 )
            MEMORY[0xFFFFF780000002E0] = v51;
          return updated;
        }
        return -1073741820;
      }
      v45 = v44 - 10;
      if ( !v45 )
        return -1073741637;
      v46 = v45 - 2;
      if ( !v46 )
        return -1073741637;
      v47 = v46 - 1;
      if ( v47 )
      {
        v48 = v47 - 2;
        if ( v48 )
        {
          v49 = v48 - 1;
          if ( !v49 )
          {
            LOBYTE(v9) = PreviousMode;
            return ExpRegisterFirmwareTableInformationHandler(SystemInformation, (unsigned int)v3, v9);
          }
          if ( v49 == 4 )
          {
            LOBYTE(v12) = PreviousMode;
            return PfSetSuperfetchInformation(v8, SystemInformation, (unsigned int)v3, v12);
          }
          return -1073741821;
        }
        return -1073741822;
      }
      if ( !PreviousMode && SystemInformation && (_DWORD)v3 == 8 )
      {
        switch ( *(_DWORD *)SystemInformation )
        {
          case 0:
            return -1073741637;
          case 1:
            v50 = (void (*)(void))off_1403FF600[0];
            break;
          case 2:
            v50 = (void (*)(void))off_1403FF608[0];
            break;
          case 3:
            v50 = (void (*)(void))off_1403FF5F8[0];
            break;
          case 4:
            return -1073741637;
          case 6:
            return ((__int64 (__fastcall *)(__int64))off_1403FF618[0])(1LL);
          case 7:
            updated = 0;
            if ( off_1403FF618[0] == xKdEnumerateDebuggingDevices )
              return -1073741822;
            return updated;
          default:
            return -1073741811;
        }
        v50();
        return 0;
      }
      return -1073741811;
    }
    if ( SystemInformationClass == SystemFileCacheInformationEx )
    {
LABEL_225:
      if ( (unsigned int)v3 < 0x40 )
        return -1073741820;
      if ( SystemInformationClass == SystemFileCacheInformation )
      {
        v59 = 0;
        v105 = 0;
      }
      else
      {
        v105 = *((_DWORD *)SystemInformation + 15);
        v59 = v105;
        if ( (v105 & 0xFFFFFFF0) != 0 || (v105 & 0xC) == 0xC || (v105 & 3) == 3 )
          return -1073741584;
      }
      if ( SeSinglePrivilegeCheck(SeIncreaseQuotaPrivilege, PreviousMode) )
        return MmAdjustWorkingSetSizeEx(
                 *((_QWORD *)SystemInformation + 3),
                 *((_QWORD *)SystemInformation + 4),
                 2,
                 1,
                 v59,
                 v100);
      return -1073741790;
    }
    if ( SystemInformationClass != SystemThreadPriorityClientIdInformation )
    {
      if ( SystemInformationClass == SystemRefTraceInformation )
        return ObSetRefTraceInformation(SystemInformation, (unsigned int)v3, v9, 3LL);
      if ( SystemInformationClass != SystemSpecialPoolInformation )
      {
        switch ( SystemInformationClass )
        {
          case SystemErrorPortInformation:
            if ( PreviousMode == 1 )
            {
              if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, 1) )
                return -1073741727;
              v54 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7];
              if ( !v54 )
                return DbgkRegisterErrorPort(SystemInformation, (unsigned int)v3);
              v55 = *(_WORD *)(v54 + 8);
              if ( v55 != 332 && v55 != 452 )
                return DbgkRegisterErrorPort(SystemInformation, (unsigned int)v3);
            }
            return -1073741637;
          case SystemHypervisorInformation:
            if ( !PreviousMode )
            {
              if ( (_DWORD)v3 )
                return -1073741584;
              else
                return HvlHypervisorConnected == 0 ? 0xC0351000 : 0;
            }
            return -1073741790;
          case SystemVerifierInformationEx:
            if ( SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
            {
              if ( (_DWORD)v3 == 40 )
                return VfSetVerifierInformationEx(SystemInformation);
              return -1073741820;
            }
            return -1073741790;
        }
        if ( SystemInformationClass != SystemTimeZoneInformation )
          return -1073741821;
        v52 = 172;
        if ( (_DWORD)v3 != 172 )
          return -1073741820;
        if ( PreviousMode
          && !(unsigned __int8)ExpCapabilityCheck((PUNICODE_STRING)&TimeZoneCapability)
          && !SeSinglePrivilegeCheck(SeTimeZonePrivilege, PreviousMode) )
        {
          return -1073741727;
        }
        v53 = *((_BYTE *)PsGetCurrentServerSiloGlobals() + 1041) == 0;
        goto LABEL_193;
      }
      if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
        return -1073741790;
      if ( (_DWORD)v3 == 8 )
      {
        v120[0].m128i_i64[0] = *(_QWORD *)SystemInformation;
        MmSpecialPoolTag = v120[0].m128i_i32[0];
        MmSpecialPoolCatchOverruns = v120[0].m128i_i8[4] & 1;
        return updated;
      }
      return -1073741820;
    }
    if ( (unsigned int)v3 < 0x18 )
      return -1073741820;
    if ( !SeSinglePrivilegeCheck(SeIncreaseBasePriorityPrivilege, PreviousMode) )
      return -1073741727;
    if ( PreviousMode )
    {
      v120[0] = *(__m128i *)SystemInformation;
      v120[1].m128i_i64[0] = *((_QWORD *)SystemInformation + 2);
      SystemInformation = v120;
    }
    if ( (unsigned int)(*((_DWORD *)SystemInformation + 4) - 1) > 0x1E )
      return -1073741811;
    v118 = *(_OWORD *)SystemInformation;
    updated = PsLookupProcessThreadByCid(&v118, 0LL, &v112);
    if ( updated < 0 )
      return updated;
    v57 = v112;
    if ( *((_BYTE *)v112 + 4) )
    {
      updated = -1073741749;
    }
    else
    {
      KeSetActualBasePriorityThread((__int64)v112, *((unsigned int *)SystemInformation + 4), v56);
      updated = 259;
    }
    v58 = v57;
LABEL_224:
    ObfDereferenceObject(v58);
    return updated;
  }
  if ( SystemInformationClass == SystemLoadGdiDriverInSystemSpace )
  {
    v37 = 0;
    goto LABEL_136;
  }
  if ( SystemInformationClass <= SystemRegistryQuotaInformation )
  {
    if ( SystemInformationClass == SystemRegistryQuotaInformation )
    {
      if ( (_DWORD)v3 == 16 )
      {
        if ( !PreviousMode || SeSinglePrivilegeCheck(SeIncreaseQuotaPrivilege, PreviousMode) )
          return CmSetRegistryQuotaInformation(SystemInformation, v7, v9, v12);
        return -1073741727;
      }
      return -1073741820;
    }
    if ( SystemInformationClass != SystemFlagsInformation )
    {
      if ( SystemInformationClass != SystemFileCacheInformation )
      {
        if ( SystemInformationClass == SystemDpcBehaviorInformation )
        {
          if ( (_DWORD)v3 == 20 )
          {
            if ( !PreviousMode || SeSinglePrivilegeCheck(SeLoadDriverPrivilege, PreviousMode) )
            {
              v120[0] = *(__m128i *)SystemInformation;
              v120[1].m128i_i32[0] = *((_DWORD *)SystemInformation + 4);
              KiMinimumDpcRate = v120[0].m128i_i32[2];
              KiMaximumDpcQueueDepth = v120[0].m128i_i32[1];
              KiAdjustDpcThreshold = v120[0].m128i_i32[3];
              KiIdealDpcRate = v120[1].m128i_i32[0];
              KeSynchronizeWithDynamicProcessors(v120[1].m128i_u32[0], v7, v9);
              ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
              if ( ActiveProcessorCount )
              {
                v22 = KiProcessorBlock;
                v23 = ActiveProcessorCount;
                do
                {
                  v24 = *v22;
                  *(_DWORD *)(v24 + 11864) = KiMaximumDpcQueueDepth;
                  *(_DWORD *)(v24 + 11872) = KiMinimumDpcRate;
                  ++v22;
                  --v23;
                }
                while ( v23 );
              }
              return updated;
            }
            return -1073741727;
          }
          return -1073741820;
        }
        if ( SystemInformationClass != SystemLoadGdiDriverInformation )
        {
          if ( SystemInformationClass != SystemUnloadGdiDriverInformation )
          {
            if ( SystemInformationClass != SystemTimeAdjustmentInformation )
            {
              switch ( SystemInformationClass )
              {
                case SystemMirrorMemoryInformation:
                  return MmCreateMirror();
                case SystemPerformanceTraceInformation:
                  return EtwSetPerformanceTraceInformation(SystemInformation, (unsigned int)v3, PreviousMode);
                case SystemCrashDumpStateInformation:
                  if ( (!PreviousMode || SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode))
                    && !PsIsCurrentThreadInServerSilo() )
                  {
                    if ( (_DWORD)v3 == 4 )
                    {
                      if ( PreviousMode )
                      {
                        if ( ((unsigned __int8)SystemInformation & 3) != 0 )
                          ExRaiseDatatypeMisalignment();
                        if ( (unsigned __int64)SystemInformation + 4 > 0x7FFFFFFF0000LL
                          || (char *)SystemInformation + 4 < SystemInformation )
                        {
                          MEMORY[0x7FFFFFFF0000] = 0;
                        }
                        v15 = *(_DWORD *)SystemInformation;
                        v108 = *(_DWORD *)SystemInformation;
                      }
                      else
                      {
                        v15 = *(_DWORD *)SystemInformation;
                      }
                      if ( !v15 )
                      {
                        v18 = 0;
                        return IoConfigureCrashDump(v18, 0);
                      }
                      v16 = v15 - 1;
                      if ( v16 )
                      {
                        if ( v16 == 1 )
                          return WheaCrashDumpInitializationComplete();
                        return -1073741811;
                      }
                    }
                    v18 = 1;
                    return IoConfigureCrashDump(v18, 0);
                  }
                  return -1073741727;
              }
              return -1073741821;
            }
            if ( (((_DWORD)v3 - 8) & 0xFFFFFFF7) == 0 )
            {
              if ( !PreviousMode || SeSinglePrivilegeCheck(SeSystemtimePrivilege, PreviousMode) )
              {
                if ( !PsIsCurrentThreadInServerSilo() )
                {
                  if ( (_DWORD)v3 == 16 )
                  {
                    v19 = *((_BYTE *)SystemInformation + 8);
                    LOBYTE(v98.Next) = v19;
                    v104.Next = *(struct _SINGLE_LIST_ENTRY **)SystemInformation;
                  }
                  else
                  {
                    v19 = *((_BYTE *)SystemInformation + 4);
                    LOBYTE(v98.Next) = v19;
                    v20 = *(unsigned int *)SystemInformation;
                    v104.Next = (struct _SINGLE_LIST_ENTRY *)v20;
                    if ( v20 )
                      v104.Next = (struct _SINGLE_LIST_ENTRY *)(MEMORY[0xFFFFF78000000300]
                                                              * (unsigned __int64)KeMaximumIncrement
                                                              / v20);
                  }
                  if ( v19 )
                    v104.Next = (struct _SINGLE_LIST_ENTRY *)MEMORY[0xFFFFF78000000300];
                  ExAcquireTimeRefreshLock(1LL);
                  updated = ExpUpdateTimerConfiguration(0LL, &v104, &v98);
                  ExReleaseResourceLite(&ExpTimeRefreshLock);
                  KeLeaveCriticalRegion();
                  return updated;
                }
                return -1073741790;
              }
              return -1073741727;
            }
            return -1073741820;
          }
          if ( (_DWORD)v3 == 8 )
          {
            if ( PreviousMode )
              return -1073741727;
            MmUnloadSystemImage(*(_QWORD *)SystemInformation);
            return 0;
          }
          return -1073741820;
        }
        v37 = 1;
LABEL_136:
        if ( (_DWORD)v3 == 56 )
        {
          if ( !PreviousMode )
          {
            *(_OWORD *)Buf1 = *(_OWORD *)SystemInformation;
            SystemImage = MmLoadSystemImageEx(
                            (unsigned int)Buf1,
                            0,
                            0,
                            v37,
                            (__int64)&BugCheckParameter2,
                            (__int64)&BaseAddress);
            updated = SystemImage;
            if ( SystemImage < 0 )
            {
              if ( SystemImage == -1073741411 )
                return -1073741554;
            }
            else
            {
              v39 = (char *)BaseAddress;
              v40 = RtlImageDirectoryEntryToData(BaseAddress, 1u, 0, Size);
              v41 = RtlImageNtHeader(v39);
              *((_QWORD *)SystemInformation + 5) = v40;
              AddressOfEntryPoint = v41->OptionalHeader.AddressOfEntryPoint;
              *((_QWORD *)SystemInformation + 2) = v39;
              *((_QWORD *)SystemInformation + 3) = BugCheckParameter2;
              *((_QWORD *)SystemInformation + 4) = &v39[AddressOfEntryPoint];
              *((_DWORD *)SystemInformation + 12) = v41->OptionalHeader.SizeOfImage;
            }
            return updated;
          }
          return -1073741727;
        }
        return -1073741820;
      }
      goto LABEL_225;
    }
    if ( (_DWORD)v3 != 4 )
      return -1073741820;
    if ( SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
    {
      NtGlobalFlag = *(_DWORD *)SystemInformation ^ (NtGlobalFlag ^ *(_DWORD *)SystemInformation) & 0x6DCE640F;
      *(_DWORD *)SystemInformation = NtGlobalFlag;
      return updated;
    }
    return -1073741790;
  }
  if ( SystemInformationClass == SystemExtendServiceTableInformation )
  {
    if ( (_DWORD)v3 != 16 )
      return -1073741820;
    if ( PreviousMode )
    {
      if ( (BYTE1(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 1) == 0
        || !SeSinglePrivilegeCheck(SeLoadDriverPrivilege, 1) )
      {
        return -1073741727;
      }
      if ( (unsigned __int64)SystemInformation >= 0x7FFFFFFF0000LL )
        SystemInformation = (PVOID)0x7FFFFFFF0000LL;
      LODWORD(Buf1[0]) = *(_DWORD *)SystemInformation;
      Buf1[1] = *((void **)SystemInformation + 1);
      if ( LOWORD(Buf1[0]) == 62 )
      {
        if ( !memcmp(Buf1[1], L"\\SystemRoot\\System32\\win32k.sys", 0x3EuLL) )
        {
          Buf1[1] = L"\\SystemRoot\\System32\\win32k.sys";
          WORD1(Buf1[0]) = 62;
          return ZwSetSystemInformation(SystemExtendServiceTableInformation, Buf1, 0x10uLL);
        }
        else
        {
          return -1073741727;
        }
      }
      else
      {
        return -1073741727;
      }
    }
    else
    {
      *(_OWORD *)Buf1 = *(_OWORD *)SystemInformation;
      if ( !memcmp(
              (const void *)_mm_srli_si128(*(__m128i *)Buf1, 8).m128i_i64[0],
              L"\\SystemRoot\\System32\\win32k.sys",
              0x3EuLL) )
        v6 = -2147483643;
      result = MmLoadSystemImageEx((unsigned int)Buf1, 0, 0, v6, (__int64)&BugCheckParameter2, (__int64)&BaseAddress);
      if ( result >= 0 )
      {
        v35 = (char *)BaseAddress;
        v36 = RtlImageNtHeader(BaseAddress);
        if ( !v36 )
        {
          MmUnloadSystemImage(BugCheckParameter2);
          return -1073741701;
        }
        updated = ExpInitializeSessionDriver(&v35[v36->OptionalHeader.AddressOfEntryPoint], v35);
        if ( updated < 0 )
          MmUnloadSystemImage(BugCheckParameter2);
        return updated;
      }
      if ( result == -1073741411 )
        return -1073741554;
    }
    return result;
  }
  if ( SystemInformationClass == SystemPrioritySeperation )
  {
    if ( (_DWORD)v3 != 4 )
      return -1073741820;
    if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
      return -1073741727;
    v109 = *(_DWORD *)SystemInformation;
    LOBYTE(v34) = 1;
    PsChangeQuantumTable(v34);
    return 0;
  }
  if ( SystemInformationClass > SystemVerifierRemoveDriverInformation )
  {
    if ( SystemInformationClass == SystemTimeSlipNotification )
    {
      if ( (_DWORD)v3 != 8 )
        return -1073741820;
      if ( PreviousMode && !SeSinglePrivilegeCheck(SeSystemtimePrivilege, PreviousMode) )
        return -1073741727;
      if ( PsIsCurrentThreadInServerSilo() )
        return -1073741790;
      v114 = *(HANDLE *)SystemInformation;
      if ( v114 )
      {
        updated = ObReferenceObjectByHandle(v114, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &Object, 0LL);
        v29 = Object;
        if ( updated < 0 )
          return updated;
      }
      else
      {
        v29 = 0LL;
        updated = 0;
      }
      KdUpdateTimeSlipEvent(v29);
      return updated;
    }
    if ( (unsigned int)(SystemInformationClass - 47) > 1 )
    {
      if ( SystemInformationClass != SystemVerifierInformation )
      {
        if ( SystemInformationClass != SystemVerifierThunkExtend )
          return -1073741821;
        if ( !PreviousMode )
          return MmAddVerifierThunks(SystemInformation, v3);
        return -1073741727;
      }
      if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
        return -1073741790;
      if ( !(unsigned int)ExpIsKernelCfgActive(v26, v25, v27, v28) )
        return VfSetVerifierInformation(SystemInformation, (unsigned int)v3, 0LL);
      return -1073740641;
    }
    return -1073741822;
  }
  if ( (_DWORD)v3 != 16 )
    return -1073741820;
  if ( (unsigned int)ExpIsKernelCfgActive(v8, v7, v9, 3LL) )
    return -1073740641;
  if ( !PreviousMode )
  {
LABEL_101:
    v31 = SystemInformationClass - 40;
    if ( v31 )
    {
      if ( v31 != 1 )
      {
        updated = -1073741821;
LABEL_107:
        if ( !PreviousMode )
          return updated;
        v33 = (__m128i *)SystemInformation;
LABEL_268:
        VfFreeCapturedUnicodeString(v33);
        return updated;
      }
      v32 = VfRemoveVerifierEntry(SystemInformation);
    }
    else
    {
      v32 = VfAddVerifierEntry((PCUNICODE_STRING)SystemInformation);
    }
    updated = v32;
    goto LABEL_107;
  }
  if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
    return -1073741727;
  result = VfProbeAndCaptureUnicodeString(Buf1, SystemInformation, 1LL);
  if ( result >= 0 )
  {
    SystemInformation = Buf1;
    if ( !LOWORD(Buf1[0]) )
      return -1073741585;
    goto LABEL_101;
  }
  return result;
}
