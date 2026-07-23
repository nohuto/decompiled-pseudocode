/*
 * XREFs of NtSetSystemInformation @ 0x1406A6650
 * Callers:
 *     WmipRegisterFirmwareProviders @ 0x140A22234 (WmipRegisterFirmwareProviders.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140002880 (PsIsCurrentThreadInServerSilo.c)
 *     KeQueryActiveProcessorCountEx @ 0x140005340 (KeQueryActiveProcessorCountEx.c)
 *     KeSetActualBasePriorityThread @ 0x140012880 (KeSetActualBasePriorityThread.c)
 *     KeLeaveCriticalRegion @ 0x14003DF60 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     MmGetSessionIdEx @ 0x14003F230 (MmGetSessionIdEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     RtlImageNtHeader @ 0x14005EE50 (RtlImageNtHeader.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     RtlImageDirectoryEntryToData @ 0x1400E8950 (RtlImageDirectoryEntryToData.c)
 *     ExpUpdateTimerConfiguration @ 0x1400FBBEC (ExpUpdateTimerConfiguration.c)
 *     KeSetSystemAllowedCpuSets @ 0x14011EDC8 (KeSetSystemAllowedCpuSets.c)
 *     ExCpuSetResourceManagerAccessCheck @ 0x140129974 (ExCpuSetResourceManagerAccessCheck.c)
 *     MmAdjustWorkingSetSizeEx @ 0x14012DF0C (MmAdjustWorkingSetSizeEx.c)
 *     MiGetThreadPartition @ 0x14013E08C (MiGetThreadPartition.c)
 *     IoConfigureCrashDump @ 0x1401938E0 (IoConfigureCrashDump.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memcmp @ 0x1401A1110 (memcmp.c)
 *     ZwLoadDriver @ 0x1401C2C50 (ZwLoadDriver.c)
 *     ZwSetSystemInformation @ 0x1401C40D0 (ZwSetSystemInformation.c)
 *     ZwUnloadDriver @ 0x1401C4450 (ZwUnloadDriver.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     VslProvisionDumpEncryption @ 0x14028FDC8 (VslProvisionDumpEncryption.c)
 *     KdUpdateTimeSlipEvent @ 0x1402A21F0 (KdUpdateTimeSlipEvent.c)
 *     KeProcessorProfileControlArea @ 0x1402A5594 (KeProcessorProfileControlArea.c)
 *     KeSetTagCpuSets @ 0x1402AD370 (KeSetTagCpuSets.c)
 *     KeIntSteerAssignCpuSetForGsiv @ 0x1402B1824 (KeIntSteerAssignCpuSetForGsiv.c)
 *     PsSetCpuQuotaInformation @ 0x1403067E8 (PsSetCpuQuotaInformation.c)
 *     PsSetExeModerationState @ 0x140306C24 (PsSetExeModerationState.c)
 *     ExpSetSoftRebootFlags @ 0x1403379C8 (ExpSetSoftRebootFlags.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     PsInvokeWin32Callout @ 0x1405EBC10 (PsInvokeWin32Callout.c)
 *     ObReferenceObjectByHandle @ 0x1405FB4B0 (ObReferenceObjectByHandle.c)
 *     SeSinglePrivilegeCheck @ 0x140678440 (SeSinglePrivilegeCheck.c)
 *     PsLookupProcessThreadByCid @ 0x140678520 (PsLookupProcessThreadByCid.c)
 *     ExReleaseTimeRefreshLock @ 0x1406A71E0 (ExReleaseTimeRefreshLock.c)
 *     ExAcquireTimeRefreshLock @ 0x1406A7200 (ExAcquireTimeRefreshLock.c)
 *     PfSnSetPrefetcherInformation @ 0x1406A723C (PfSnSetPrefetcherInformation.c)
 *     PfSetSuperfetchInformation @ 0x1406A75E8 (PfSetSuperfetchInformation.c)
 *     ExHandleSPCall2 @ 0x1406CA8D4 (ExHandleSPCall2.c)
 *     KeSynchronizeWithDynamicProcessors @ 0x1406D8BFC (KeSynchronizeWithDynamicProcessors.c)
 *     SmSetStoreInformation @ 0x1406ECC34 (SmSetStoreInformation.c)
 *     MiCombineIdenticalPages @ 0x1406F8B84 (MiCombineIdenticalPages.c)
 *     MmLoadSystemImage @ 0x14070B620 (MmLoadSystemImage.c)
 *     MmLoadSystemImageEx @ 0x14070F890 (MmLoadSystemImageEx.c)
 *     DbgkRegisterErrorPort @ 0x140729B54 (DbgkRegisterErrorPort.c)
 *     MmIssueMemoryListCommand @ 0x14074673C (MmIssueMemoryListCommand.c)
 *     PsChangeQuantumTable @ 0x140746DEC (PsChangeQuantumTable.c)
 *     ExpInitializeSessionDriver @ 0x140748DD0 (ExpInitializeSessionDriver.c)
 *     MmUnloadSystemImage @ 0x1407490E0 (MmUnloadSystemImage.c)
 *     ExpRegisterFirmwareTableInformationHandler @ 0x140784BFC (ExpRegisterFirmwareTableInformationHandler.c)
 *     KeInitializeEntropySystem @ 0x14078AA64 (KeInitializeEntropySystem.c)
 *     WheaCrashDumpInitializationComplete @ 0x14078C8EC (WheaCrashDumpInitializationComplete.c)
 *     CmSetRegistryQuotaInformation @ 0x140826820 (CmSetRegistryQuotaInformation.c)
 *     CmReconcileAndValidateAllHives @ 0x14082E94C (CmReconcileAndValidateAllHives.c)
 *     VslRelaxQuotas @ 0x1408523F8 (VslRelaxQuotas.c)
 *     MmAddVerifierThunks @ 0x140888D30 (MmAddVerifierThunks.c)
 *     MmCreateMirror @ 0x140889B40 (MmCreateMirror.c)
 *     MmScrubMemory @ 0x14089CC84 (MmScrubMemory.c)
 *     ObSetRefTraceInformation @ 0x14089EDA8 (ObSetRefTraceInformation.c)
 *     EtwSetPerformanceTraceInformation @ 0x1408F5EF0 (EtwSetPerformanceTraceInformation.c)
 *     ExpIsKernelCfgActive @ 0x140908EB4 (ExpIsKernelCfgActive.c)
 *     ExpQueryElamCertInfo @ 0x140909244 (ExpQueryElamCertInfo.c)
 *     ExpSetProcessorMicrocodeUpdateInformation @ 0x140909C84 (ExpSetProcessorMicrocodeUpdateInformation.c)
 *     ExpSetTimeZoneInformation @ 0x140909CEC (ExpSetTimeZoneInformation.c)
 *     ExpUpdateComPlusPackage @ 0x14090A0A0 (ExpUpdateComPlusPackage.c)
 *     ExSetLeapSecondEnabled @ 0x14090A140 (ExSetLeapSecondEnabled.c)
 *     ExpCapabilityCheck @ 0x14090CE14 (ExpCapabilityCheck.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913920 (ExRaiseDatatypeMisalignment.c)
 *     ExpCovResetInformation @ 0x140914E94 (ExpCovResetInformation.c)
 *     VfFreeCapturedUnicodeString @ 0x14096412C (VfFreeCapturedUnicodeString.c)
 *     VfProbeAndCaptureUnicodeString @ 0x1409642D8 (VfProbeAndCaptureUnicodeString.c)
 *     VfProbeAndCaptureUnicodeStringBuffer @ 0x140964310 (VfProbeAndCaptureUnicodeStringBuffer.c)
 *     VfFaultsSetParameters @ 0x140979DB8 (VfFaultsSetParameters.c)
 *     VfAddVerifierEntry @ 0x14098A1F4 (VfAddVerifierEntry.c)
 *     VfRemoveVerifierEntry @ 0x14098A3E0 (VfRemoveVerifierEntry.c)
 *     VfSetVerifierInformation @ 0x14098A408 (VfSetVerifierInformation.c)
 *     VfSetVerifierInformationEx @ 0x14098A510 (VfSetVerifierInformationEx.c)
 *     BgkSetBootGraphicsInformation @ 0x140993440 (BgkSetBootGraphicsInformation.c)
 */

NTSTATUS __stdcall NtSetSystemInformation(
        SYSTEM_INFORMATION_CLASS SystemInformationClass,
        PVOID SystemInformation,
        ULONG SystemInformationLength)
{
  size_t v3; // r15
  int v6; // r13d
  __int64 v7; // rdx
  char *v8; // rcx
  __int64 v9; // r8
  KPROCESSOR_MODE PreviousMode; // r12
  __int64 v11; // rbx
  __int64 v12; // r9
  __int64 v13; // rax
  NTSTATUS updated; // edi
  char v15; // cl
  unsigned __int64 v16; // r9
  NTSTATUS result; // eax
  __int32 v18; // r14d
  __int32 v20; // r14d
  __int32 v21; // r14d
  __int32 v22; // r14d
  int v23; // r14d
  int v24; // r14d
  int v25; // r14d
  __int32 v26; // r14d
  __int32 v27; // r14d
  __int32 v28; // r14d
  __int32 v29; // r14d
  int v30; // r14d
  int v31; // r14d
  PVOID v32; // r14
  void *v33; // rcx
  unsigned int v34; // r15d
  int v35; // r8d
  char *v36; // rdx
  char *v37; // rdi
  PIMAGE_NT_HEADERS v38; // rax
  __int32 v39; // r14d
  __int32 v40; // r14d
  __int32 v41; // r14d
  __int64 ThreadPartition; // rax
  int v43; // eax
  int SystemImage; // eax
  char *v45; // rbx
  PVOID v46; // r14
  PIMAGE_NT_HEADERS v47; // rax
  __int64 AddressOfEntryPoint; // rdx
  __int64 v49; // rcx
  int v50; // ecx
  __int32 v51; // r14d
  int v52; // r14d
  int v53; // eax
  struct _KTHREAD *CurrentThread; // rax
  char v55; // bl
  unsigned __int64 v56; // rax
  __int16 v57; // ax
  int v58; // ecx
  int v59; // r14d
  int v60; // r14d
  unsigned int v61; // r15d
  ULONG_PTR v62; // r14
  ULONG ActiveProcessorCount; // eax
  __int64 *v64; // rdx
  __int64 v65; // r8
  __int64 v66; // rcx
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // r9
  PVOID v71; // rcx
  __int32 v72; // r14d
  NTSTATUS v73; // eax
  char *v74; // rcx
  void (*v75)(void); // rax
  ULONG v76; // esi
  unsigned int v77; // edi
  int v78; // edi
  __int64 v79; // r8
  __int64 v80; // r9
  __int64 v81; // r8
  __int64 v82; // r9
  int v83; // r14d
  int v84; // r14d
  __int128 v85; // xmm1
  char *v86; // rcx
  PVOID PoolWithTag; // rax
  PVOID v88; // r15
  __int64 v89; // rcx
  int v90; // r15d
  int v91; // ecx
  char v92; // di
  unsigned int v93; // r15d
  __int64 v94; // r14
  PVOID v95; // rbx
  _KPROCESS *Process; // rbx
  bool v97[32]; // [rsp+30h] [rbp-478h] BYREF
  NTSTATUS v98; // [rsp+50h] [rbp-458h]
  _BYTE v99[2]; // [rsp+54h] [rbp-454h] BYREF
  int SessionId; // [rsp+58h] [rbp-450h] BYREF
  void *Buf1[2]; // [rsp+60h] [rbp-448h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+70h] [rbp-438h] BYREF
  unsigned __int64 v103; // [rsp+78h] [rbp-430h] BYREF
  int v104; // [rsp+80h] [rbp-428h]
  PVOID BaseAddress[2]; // [rsp+88h] [rbp-420h] BYREF
  UNICODE_STRING DriverServiceName; // [rsp+98h] [rbp-410h] BYREF
  __int128 v107; // [rsp+A8h] [rbp-400h]
  ULONG Size[3]; // [rsp+B8h] [rbp-3F0h] BYREF
  PVOID v109; // [rsp+E0h] [rbp-3C8h] BYREF
  PVOID Object[7]; // [rsp+110h] [rbp-398h] BYREF
  __int64 v111[3]; // [rsp+148h] [rbp-360h] BYREF
  HANDLE v112; // [rsp+160h] [rbp-348h]
  __int64 v113[8]; // [rsp+168h] [rbp-340h] BYREF
  PVOID v114; // [rsp+1A8h] [rbp-300h] BYREF
  int v115; // [rsp+1E0h] [rbp-2C8h]
  int v116; // [rsp+1E8h] [rbp-2C0h]
  __int128 v117; // [rsp+1F0h] [rbp-2B8h] BYREF
  void *Src[2]; // [rsp+200h] [rbp-2A8h]
  HANDLE v119; // [rsp+218h] [rbp-290h]
  __int64 v120; // [rsp+240h] [rbp-268h]
  ULONG_PTR v121; // [rsp+248h] [rbp-260h]
  _OWORD v122[3]; // [rsp+250h] [rbp-258h] BYREF
  char v123[160]; // [rsp+280h] [rbp-228h] BYREF
  _BYTE v124[160]; // [rsp+320h] [rbp-188h] BYREF
  _BYTE v125[160]; // [rsp+3C0h] [rbp-E8h] BYREF

  v3 = SystemInformationLength;
  v117 = 0uLL;
  Buf1[0] = 0LL;
  Buf1[1] = 0LL;
  v6 = 1;
  memset(v122, 0, sizeof(v122));
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
      if ( (v13 & (unsigned __int64)SystemInformation) != 0 )
        ExRaiseDatatypeMisalignment();
      v8 = (char *)SystemInformation + v3;
      if ( (unsigned __int64)SystemInformation + v3 > 0x7FFFFFFF0000LL || v8 < SystemInformation )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  updated = 0;
  if ( SystemInformationClass <= SystemImageFileExecutionOptionsInformation )
  {
    if ( SystemInformationClass == SystemImageFileExecutionOptionsInformation )
    {
      if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
        return -1073741790;
      if ( (_DWORD)v3 == 8 )
      {
        *(_QWORD *)&v122[0] = *(_QWORD *)SystemInformation;
        _InterlockedOr((volatile signed __int32 *)0xFFFFF780000003A0LL, v122[0]);
        _InterlockedAnd((volatile signed __int32 *)0xFFFFF780000003A0LL, ~DWORD1(v122[0]));
        return updated;
      }
      return -1073741820;
    }
    if ( SystemInformationClass <= SystemLoadGdiDriverInSystemSpace )
    {
      if ( SystemInformationClass == SystemLoadGdiDriverInSystemSpace )
      {
        v43 = 0;
        goto LABEL_104;
      }
      if ( SystemInformationClass <= SystemRegistryQuotaInformation )
      {
        if ( SystemInformationClass == SystemRegistryQuotaInformation )
        {
          if ( (_DWORD)v3 != 16 )
            return -1073741820;
          if ( PreviousMode && !SeSinglePrivilegeCheck(SeIncreaseQuotaPrivilege, PreviousMode) )
            return -1073741727;
          return CmSetRegistryQuotaInformation(SystemInformation, v7, v9, v12);
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
                  v122[0] = *(_OWORD *)SystemInformation;
                  LODWORD(v122[1]) = *((_DWORD *)SystemInformation + 4);
                  KiMinimumDpcRate = DWORD2(v122[0]);
                  KiMaximumDpcQueueDepth = DWORD1(v122[0]);
                  KiAdjustDpcThreshold = HIDWORD(v122[0]);
                  KiIdealDpcRate = v122[1];
                  KeSynchronizeWithDynamicProcessors(LODWORD(v122[1]), v7, v9);
                  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
                  if ( ActiveProcessorCount )
                  {
                    v64 = KiProcessorBlock;
                    v65 = ActiveProcessorCount;
                    do
                    {
                      v66 = *v64;
                      *(_DWORD *)(v66 + 11864) = KiMaximumDpcQueueDepth;
                      *(_DWORD *)(v66 + 11872) = KiMinimumDpcRate;
                      ++v64;
                      --v65;
                    }
                    while ( v65 );
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
                switch ( SystemInformationClass )
                {
                  case SystemTimeAdjustmentInformation:
                    if ( (((_DWORD)v3 - 8) & 0xFFFFFFF7) == 0 )
                    {
                      if ( !PreviousMode || SeSinglePrivilegeCheck(SeSystemtimePrivilege, PreviousMode) )
                      {
                        if ( !PsIsCurrentThreadInServerSilo() )
                        {
                          if ( (_DWORD)v3 == 16 )
                          {
                            v15 = *((_BYTE *)SystemInformation + 8);
                            v97[0] = v15;
                            v103 = *(_QWORD *)SystemInformation;
                          }
                          else
                          {
                            v15 = *((_BYTE *)SystemInformation + 4);
                            v97[0] = v15;
                            v16 = *(unsigned int *)SystemInformation;
                            v103 = v16;
                            if ( v16 )
                              v103 = MEMORY[0xFFFFF78000000300] * (unsigned __int64)KeMaximumIncrement / v16;
                          }
                          if ( v15 )
                            v103 = MEMORY[0xFFFFF78000000300];
                          ExAcquireTimeRefreshLock(1LL);
                          updated = ExpUpdateTimerConfiguration(0LL, (__int64)&v103, (__int64)v97);
                          ExReleaseTimeRefreshLock();
                          return updated;
                        }
                        return -1073741790;
                      }
                      return -1073741727;
                    }
                    return -1073741820;
                  case SystemMirrorMemoryInformation:
                    return MmCreateMirror();
                  case SystemPerformanceTraceInformation:
                    return EtwSetPerformanceTraceInformation(SystemInformation, (unsigned int)v3, PreviousMode);
                  case SystemCrashDumpStateInformation:
                    if ( PreviousMode && !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode)
                      || PsIsCurrentThreadInServerSilo() )
                    {
                      return -1073741727;
                    }
                    if ( (_DWORD)v3 != 4 )
                      goto LABEL_189;
                    if ( PreviousMode )
                    {
                      if ( ((unsigned __int8)SystemInformation & 3) != 0 )
                        ExRaiseDatatypeMisalignment();
                      if ( (unsigned __int64)SystemInformation + 4 > 0x7FFFFFFF0000LL
                        || (char *)SystemInformation + 4 < SystemInformation )
                      {
                        MEMORY[0x7FFFFFFF0000] = 0;
                      }
                      v50 = *(_DWORD *)SystemInformation;
                      v115 = *(_DWORD *)SystemInformation;
                    }
                    else
                    {
                      v50 = *(_DWORD *)SystemInformation;
                    }
                    if ( !v50 )
                      return IoConfigureCrashDump(v50, 0);
                    v58 = v50 - 1;
                    if ( !v58 )
                    {
LABEL_189:
                      v50 = 1;
                      return IoConfigureCrashDump(v50, 0);
                    }
                    if ( v58 == 1 )
                      return WheaCrashDumpInitializationComplete();
                    return -1073741811;
                }
                return -1073741821;
              }
              if ( (_DWORD)v3 != 8 )
                return -1073741820;
              if ( PreviousMode )
                return -1073741727;
              MmUnloadSystemImage(*(_QWORD *)SystemInformation);
              return 0;
            }
            v43 = 1;
LABEL_104:
            if ( (_DWORD)v3 == 56 )
            {
              if ( !PreviousMode )
              {
                *(_OWORD *)Buf1 = *(_OWORD *)SystemInformation;
                SystemImage = MmLoadSystemImage(
                                (unsigned int)Buf1,
                                0,
                                0,
                                v43,
                                (__int64)&BugCheckParameter2,
                                (__int64)BaseAddress);
                updated = SystemImage;
                if ( SystemImage < 0 )
                {
                  if ( SystemImage == -1073741411 )
                    return -1073741554;
                }
                else
                {
                  v45 = (char *)BaseAddress[0];
                  v46 = RtlImageDirectoryEntryToData(BaseAddress[0], 1u, 0, Size);
                  v47 = RtlImageNtHeader(v45);
                  *((_QWORD *)SystemInformation + 5) = v46;
                  AddressOfEntryPoint = v47->OptionalHeader.AddressOfEntryPoint;
                  *((_QWORD *)SystemInformation + 2) = v45;
                  *((_QWORD *)SystemInformation + 3) = BugCheckParameter2;
                  *((_QWORD *)SystemInformation + 4) = &v45[AddressOfEntryPoint];
                  *((_DWORD *)SystemInformation + 12) = v47->OptionalHeader.SizeOfImage;
                }
                return updated;
              }
              return -1073741727;
            }
            return -1073741820;
          }
LABEL_287:
          if ( (unsigned int)v3 >= 0x40 )
          {
            if ( SystemInformationClass == SystemFileCacheInformation )
            {
              v78 = 0;
              v104 = 0;
            }
            else
            {
              v104 = *((_DWORD *)SystemInformation + 15);
              v78 = v104;
              if ( (v104 & 0xFFFFFFF0) != 0 || (v104 & 0xC) == 0xC || (v104 & 3) == 3 )
                return -1073741584;
            }
            if ( SeSinglePrivilegeCheck(SeIncreaseQuotaPrivilege, PreviousMode) )
              return MmAdjustWorkingSetSizeEx(
                       *((_QWORD *)SystemInformation + 3),
                       *((_QWORD *)SystemInformation + 4),
                       2,
                       1,
                       v78,
                       v99);
            return -1073741790;
          }
          return -1073741820;
        }
        if ( (_DWORD)v3 == 4 )
        {
          if ( SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
          {
            NtGlobalFlag = *(_DWORD *)SystemInformation ^ (NtGlobalFlag ^ *(_DWORD *)SystemInformation) & 0x6DCE640F;
            *(_DWORD *)SystemInformation = NtGlobalFlag;
            return updated;
          }
          return -1073741790;
        }
        return -1073741820;
      }
      if ( SystemInformationClass == SystemExtendServiceTableInformation )
      {
        if ( (_DWORD)v3 != 16 )
          return -1073741820;
        if ( PreviousMode )
        {
          if ( (KeGetCurrentThread()->ApcState.Process[1].SecureState.SecureHandle & 0x100) == 0
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
          result = MmLoadSystemImageEx((unsigned int)Buf1, 0, 0, v6, (__int64)&BugCheckParameter2, (__int64)BaseAddress);
          if ( result >= 0 )
          {
            v37 = (char *)BaseAddress[0];
            v38 = RtlImageNtHeader(BaseAddress[0]);
            if ( !v38 )
            {
              MmUnloadSystemImage(BugCheckParameter2);
              return -1073741701;
            }
            updated = ExpInitializeSessionDriver(&v37[v38->OptionalHeader.AddressOfEntryPoint], v37);
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
        v116 = *(_DWORD *)SystemInformation;
        LOBYTE(v49) = 1;
        PsChangeQuantumTable(v49);
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
          v112 = *(HANDLE *)SystemInformation;
          if ( v112 )
          {
            updated = ObReferenceObjectByHandle(v112, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &v109, 0LL);
            v71 = v109;
            if ( updated < 0 )
              return updated;
          }
          else
          {
            v71 = 0LL;
            updated = 0;
          }
          KdUpdateTimeSlipEvent(v71);
          return updated;
        }
        if ( SystemInformationClass != SystemSessionCreate && SystemInformationClass != SystemSessionDetach )
        {
          if ( SystemInformationClass != SystemVerifierInformation )
          {
            if ( SystemInformationClass == SystemVerifierThunkExtend )
            {
              if ( PreviousMode )
                return -1073741727;
              return MmAddVerifierThunks(SystemInformation, v3);
            }
            return -1073741821;
          }
          if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
            return -1073741790;
          if ( !(unsigned int)ExpIsKernelCfgActive(v68, v67, v69, v70) )
            return VfSetVerifierInformation(SystemInformation, (unsigned int)v3, 0LL);
          return -1073740641;
        }
        return -1073741822;
      }
      if ( (_DWORD)v3 != 16 )
        return -1073741820;
      if ( (unsigned int)ExpIsKernelCfgActive(v8, v7, v9, 3LL) )
        return -1073740641;
      if ( PreviousMode )
      {
        if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
          return -1073741727;
        result = VfProbeAndCaptureUnicodeString(Buf1, SystemInformation, 1LL);
        if ( result < 0 )
          return result;
        SystemInformation = Buf1;
        if ( !LOWORD(Buf1[0]) )
          return -1073741585;
      }
      v72 = SystemInformationClass - 40;
      if ( v72 )
      {
        if ( v72 != 1 )
        {
          updated = -1073741821;
LABEL_241:
          if ( !PreviousMode )
            return updated;
          v74 = (char *)SystemInformation;
          goto LABEL_318;
        }
        v73 = VfRemoveVerifierEntry(SystemInformation);
      }
      else
      {
        v73 = VfAddVerifierEntry((PCUNICODE_STRING)SystemInformation);
      }
      updated = v73;
      goto LABEL_241;
    }
    if ( SystemInformationClass <= SystemMemoryListInformation )
    {
      if ( SystemInformationClass == SystemMemoryListInformation )
      {
        LOBYTE(v9) = PreviousMode;
        return MmIssueMemoryListCommand(SystemInformation, (unsigned int)v3, v9, 3LL);
      }
      v18 = SystemInformationClass - 56;
      if ( !v18 )
      {
        LOBYTE(v12) = PreviousMode;
        return PfSnSetPrefetcherInformation(v8, SystemInformation, (unsigned int)v3, v12);
      }
      v20 = v18 - 3;
      if ( !v20 )
      {
        if ( (_DWORD)v3 == 4 )
        {
          v76 = *(_DWORD *)SystemInformation;
          Size[1] = v76;
          updated = ExpUpdateComPlusPackage(v76);
          if ( updated >= 0 )
            MEMORY[0xFFFFF780000002E0] = v76;
          return updated;
        }
        return -1073741820;
      }
      v21 = v20 - 10;
      if ( !v21 )
        return -1073741637;
      v22 = v21 - 2;
      if ( !v22 )
        return -1073741637;
      v23 = v22 - 1;
      if ( v23 )
      {
        v24 = v23 - 2;
        if ( !v24 )
          return -1073741822;
        v25 = v24 - 1;
        if ( v25 )
        {
          if ( v25 != 4 )
            return -1073741821;
          LOBYTE(v12) = PreviousMode;
          return PfSetSuperfetchInformation(v8, SystemInformation, (unsigned int)v3, v12);
        }
        else
        {
          LOBYTE(v9) = PreviousMode;
          return ExpRegisterFirmwareTableInformationHandler(SystemInformation, (unsigned int)v3, v9);
        }
      }
      if ( PreviousMode || !SystemInformation || (_DWORD)v3 != 8 )
        return -1073741811;
      switch ( *(_DWORD *)SystemInformation )
      {
        case 0:
          return -1073741637;
        case 1:
          v75 = (void (*)(void))off_140424600[0];
          break;
        case 2:
          v75 = (void (*)(void))off_140424608[0];
          break;
        case 3:
          v75 = (void (*)(void))off_1404245F8[0];
          break;
        case 4:
          return -1073741637;
        case 6:
          return ((__int64 (__fastcall *)(__int64))off_140424618[0])(1LL);
        case 7:
          updated = 0;
          if ( off_140424618[0] == xKdEnumerateDebuggingDevices )
            return -1073741822;
          return updated;
        default:
          return -1073741811;
      }
      v75();
      return 0;
    }
    switch ( SystemInformationClass )
    {
      case SystemFileCacheInformationEx:
        goto LABEL_287;
      case SystemThreadPriorityClientIdInformation:
        if ( (unsigned int)v3 < 0x18 )
          return -1073741820;
        if ( !SeSinglePrivilegeCheck(SeIncreaseBasePriorityPrivilege, PreviousMode) )
          return -1073741727;
        if ( PreviousMode )
        {
          v122[0] = *(_OWORD *)SystemInformation;
          *(_QWORD *)&v122[1] = *((_QWORD *)SystemInformation + 2);
          SystemInformation = v122;
        }
        if ( (unsigned int)(*((_DWORD *)SystemInformation + 4) - 1) > 0x1E )
          return -1073741811;
        v117 = *(_OWORD *)SystemInformation;
        updated = PsLookupProcessThreadByCid((__int64)&v117, 0LL, Object);
        if ( updated < 0 )
          return updated;
        v32 = Object[0];
        if ( *((_BYTE *)Object[0] + 4) )
        {
          updated = -1073741749;
        }
        else
        {
          KeSetActualBasePriorityThread((__int64)Object[0], *((unsigned int *)SystemInformation + 4));
          updated = 259;
        }
        v33 = v32;
LABEL_71:
        ObfDereferenceObject(v33);
        return updated;
      case SystemRefTraceInformation:
        return ObSetRefTraceInformation(SystemInformation, (unsigned int)v3, v9, 3LL);
      case SystemSpecialPoolInformation:
        if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
          return -1073741790;
        if ( (_DWORD)v3 == 8 )
        {
          *(_QWORD *)&v122[0] = *(_QWORD *)SystemInformation;
          MmSpecialPoolTag = v122[0];
          MmSpecialPoolCatchOverruns = BYTE4(v122[0]) & 1;
          return updated;
        }
        return -1073741820;
      case SystemErrorPortInformation:
        if ( PreviousMode == 1 )
        {
          if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, 1) )
            return -1073741727;
          v56 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[6];
          if ( !v56 )
            return DbgkRegisterErrorPort(SystemInformation, (unsigned int)v3);
          v57 = *(_WORD *)(v56 + 8);
          if ( v57 != 332 && v57 != 452 )
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
        if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
          return -1073741790;
        if ( (_DWORD)v3 != 40 )
          return -1073741820;
        return VfSetVerifierInformationEx(SystemInformation);
    }
    if ( SystemInformationClass != SystemTimeZoneInformation )
      return -1073741821;
    v77 = 172;
LABEL_305:
    if ( (_DWORD)v3 != v77 )
      return -1073741820;
    if ( PreviousMode
      && !(unsigned __int8)ExpCapabilityCheck((PUNICODE_STRING)&TimeZoneCapability)
      && !SeSinglePrivilegeCheck(SeTimeZonePrivilege, PreviousMode) )
    {
      return -1073741727;
    }
    if ( PsIsCurrentThreadInServerSilo() )
      return -1073741790;
    return ExpSetTimeZoneInformation(SystemInformation, v77);
  }
  if ( SystemInformationClass <= SystemSoftRebootInformation )
  {
    if ( SystemInformationClass == SystemSoftRebootInformation )
    {
      v120 = 19LL;
      BaseAddress[1] = (PVOID)19;
      if ( !SeSinglePrivilegeCheck((LUID)19LL, PreviousMode) )
        return -1073741727;
      v90 = v3 - 1;
      if ( v90 )
      {
        if ( v90 != 3 )
          return -1073741820;
        v91 = *(_DWORD *)SystemInformation;
        Size[2] = *(_DWORD *)SystemInformation;
      }
      else
      {
        v92 = *(_BYTE *)SystemInformation;
        if ( *(_BYTE *)SystemInformation && !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
          return -1073741727;
        if ( !v92 )
          v6 = 5;
        v91 = v6;
      }
      return ExpSetSoftRebootFlags(v91);
    }
    if ( SystemInformationClass <= SystemBootGraphicsInformation )
    {
      if ( SystemInformationClass == SystemBootGraphicsInformation )
      {
        if ( PreviousMode )
          return -1073741727;
        if ( (_DWORD)v3 == 32 )
          return BgkSetBootGraphicsInformation(v8, SystemInformation, v9, 3LL);
        return -1073741820;
      }
      v26 = SystemInformationClass - 95;
      if ( !v26 )
      {
        if ( !PreviousMode || !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
          return -1073741790;
        if ( (unsigned int)v3 < 0x18 )
          return -1073741820;
        return ExpCovResetInformation(SystemInformation, (unsigned int)v3);
      }
      v27 = v26 - 2;
      if ( !v27 )
      {
        if ( (_DWORD)v3 != 40 )
          return -1073741820;
        if ( (unsigned int)ExpIsKernelCfgActive(v8, v7, v9, 3LL) )
          return -1073740641;
        if ( PreviousMode )
        {
          if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
            return -1073741727;
          v122[0] = *(_OWORD *)SystemInformation;
          v122[1] = *((_OWORD *)SystemInformation + 1);
          *(_QWORD *)&v122[2] = *((_QWORD *)SystemInformation + 4);
          result = VfProbeAndCaptureUnicodeStringBuffer((char *)v122 + 8, 1LL, v79, v80);
          if ( result < 0 )
            return result;
          updated = VfProbeAndCaptureUnicodeStringBuffer((char *)&v122[1] + 8, 1LL, v81, v82);
          if ( updated < 0 )
          {
            v74 = (char *)v122 + 8;
            goto LABEL_318;
          }
          SystemInformation = v122;
        }
        updated = VfFaultsSetParameters(SystemInformation);
        if ( !PreviousMode )
          return updated;
        VfFreeCapturedUnicodeString((char *)SystemInformation + 8);
        v74 = (char *)SystemInformation + 24;
        goto LABEL_318;
      }
      v28 = v27 - 5;
      if ( v28 )
      {
        v29 = v28 - 2;
        if ( !v29 )
        {
          LOBYTE(v9) = PreviousMode;
          return ExpSetProcessorMicrocodeUpdateInformation(SystemInformation, (unsigned int)v3, v9, 3LL);
        }
        v30 = v29 - 2;
        if ( !v30 )
          return -1073741821;
        v31 = v30 - 3;
        if ( v31 )
        {
          v59 = v31 - 1;
          if ( !v59 )
            return -1073741822;
          v60 = v59 - 1;
          if ( v60 )
          {
            if ( v60 == 2 )
              return PsSetCpuQuotaInformation((unsigned __int64)SystemInformation, v3, PreviousMode);
            return -1073741821;
          }
          if ( (_DWORD)v3 != 4 )
            return -1073741820;
          if ( !SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, PreviousMode) )
            return -1073741790;
          MEMORY[0xFFFFF78000000248] = *(_DWORD *)SystemInformation;
          return 0;
        }
        LOBYTE(v12) = PreviousMode;
        return SmSetStoreInformation(v8, SystemInformation, (unsigned int)v3, v12);
      }
      v77 = 432;
      goto LABEL_305;
    }
    v39 = SystemInformationClass - 127;
    if ( v39 )
    {
      v40 = v39 - 2;
      if ( !v40 )
        return KeProcessorProfileControlArea((__int64)SystemInformation, v3, PreviousMode);
      v41 = v40 - 1;
      if ( !v41 )
      {
        if ( (((_DWORD)v3 - 16) & 0xFFFFFFE7) == 0 && (_DWORD)v3 != 40 )
        {
          if ( SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, PreviousMode) )
          {
            memmove(v122, SystemInformation, v3);
            if ( (_DWORD)v3 == 32 )
              v11 = *((_QWORD *)&v122[1] + 1);
            ThreadPartition = MiGetThreadPartition((__int64)KeGetCurrentThread());
            updated = MiCombineIdenticalPages(
                        ThreadPartition,
                        *(_QWORD *)&v122[0],
                        LODWORD(v122[1]),
                        v11,
                        KeGetCurrentThread()->PreviousMode,
                        v111);
            v98 = updated;
            *((_QWORD *)SystemInformation + 1) = v111[0];
            return updated;
          }
          return -1073741727;
        }
        return -1073741820;
      }
      v51 = v41 - 1;
      if ( !v51 )
      {
        if ( PreviousMode )
          return -1073741790;
        if ( (_DWORD)v3 != 24 )
          return -1073741820;
        return KeInitializeEntropySystem(
                 *(_QWORD *)SystemInformation,
                 *((_QWORD *)SystemInformation + 1),
                 *((_QWORD *)SystemInformation + 2),
                 3LL);
      }
      v52 = v51 - 1;
      if ( !v52 )
      {
        if ( (_DWORD)v3 != 4 )
          return -1073741820;
        *(_QWORD *)&DriverServiceName.Length = 7733364LL;
        DriverServiceName.Buffer = L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\condrv";
        v53 = *(_DWORD *)SystemInformation & 1;
        v99[1] = *(_BYTE *)SystemInformation & 1;
        if ( (_BYTE)v53 )
        {
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->KernelApcDisable;
          ExAcquirePushLockExclusiveEx((ULONG_PTR)&ExpConDrvLoadLock, 0LL);
          updated = ZwLoadDriver(&DriverServiceName);
          v55 = _InterlockedExchangeAdd64((volatile signed __int64 *)&ExpConDrvLoadLock, 0xFFFFFFFFFFFFFFFFuLL);
          if ( (v55 & 2) != 0 && (v55 & 4) == 0 )
            ExfTryToWakePushLock((volatile signed __int64 *)&ExpConDrvLoadLock);
          KeAbPostRelease((ULONG_PTR)&ExpConDrvLoadLock);
          KeLeaveCriticalRegion();
          return updated;
        }
        if ( !SeSinglePrivilegeCheck(SeLoadDriverPrivilege, PreviousMode) )
          return -1073741727;
        return ZwUnloadDriver(&DriverServiceName);
      }
      v83 = v52 - 2;
      if ( !v83 )
      {
        if ( (_DWORD)v3 != 32 )
          return -1073741820;
        return ExHandleSPCall2(v8, SystemInformation);
      }
      v84 = v83 - 8;
      if ( v84 )
      {
        if ( v84 == 8 )
        {
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
        return -1073741821;
      }
      Src[0] = 0LL;
      Src[1] = 0LL;
      if ( (_DWORD)v3 != 48 )
        return -1073741820;
      if ( !SeSinglePrivilegeCheck(SeShutdownPrivilege, PreviousMode) )
        return -1073741727;
      if ( CriticalProcessExceptionData )
        return 0;
      v122[0] = *(_OWORD *)SystemInformation;
      v85 = *((_OWORD *)SystemInformation + 1);
      v122[1] = v85;
      v122[2] = *((_OWORD *)SystemInformation + 2);
      *(_OWORD *)Src = v85;
      v122[1] = 0uLL;
      if ( (_WORD)v85 && (v85 & 1) == 0 )
      {
        if ( ((__int64)Src[1] & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v86 = (char *)Src[1] + (unsigned __int16)v85;
        if ( (unsigned __int64)v86 > 0x7FFFFFFF0000LL || v86 < Src[1] )
          MEMORY[0x7FFFFFFF0000] = 0;
        PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)9, (unsigned __int16)v85, 0x50535845u);
        v88 = PoolWithTag;
        if ( PoolWithTag )
        {
          memmove(PoolWithTag, Src[1], (unsigned __int16)v85);
          *((_QWORD *)&v122[1] + 1) = v88;
          LOWORD(v122[1]) = v85;
          WORD1(v122[1]) = v85;
        }
      }
      *(_OWORD *)&CriticalProcessExceptionData = v122[0];
      xmmword_1404324D0 = v122[1];
      xmmword_1404324E0 = v122[2];
      return 0;
    }
    if ( (_DWORD)v3 != 16 )
      return -1073741820;
    if ( !SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, PreviousMode) )
      return -1073741727;
    updated = MmScrubMemory(v89, *(_QWORD *)SystemInformation, v113);
    v98 = updated;
    *((_QWORD *)SystemInformation + 1) = v113[0];
    return updated;
  }
  if ( SystemInformationClass <= SystemWin32WerStartCallout )
  {
    switch ( SystemInformationClass )
    {
      case SystemWin32WerStartCallout:
        if ( (_DWORD)v3 == 8 )
        {
          if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
            return -1073741727;
          v119 = *(HANDLE *)SystemInformation;
          updated = ObReferenceObjectByHandle(v119, 0x1000u, (POBJECT_TYPE)PsProcessType, PreviousMode, &v114, 0LL);
          if ( updated >= 0 )
          {
            v95 = v114;
            SessionId = MmGetSessionIdEx((__int64)v114);
            if ( SessionId != -1 )
              updated = PsInvokeWin32Callout(32, (__int64)v95, 1, (__int64)&SessionId);
            v33 = v95;
            goto LABEL_71;
          }
        }
        else
        {
          if ( (_DWORD)v3 )
            return -1073741820;
          updated = 0;
          Process = KeGetCurrentThread()->ApcState.Process;
          SessionId = MmGetSessionIdEx((__int64)Process);
          if ( SessionId != -1 )
            return PsInvokeWin32Callout(32, (__int64)Process, 1, (__int64)&SessionId);
        }
        return updated;
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
        if ( PreviousMode )
          return -1073741790;
        if ( (_DWORD)v3 != 8 )
          return -1073741820;
        return KdInitialize(3LL, SystemInformation, (char *)&KdDebuggerNotPresent + 5);
    }
    if ( SystemInformationClass != SystemCodeIntegrityPolicyInformation )
    {
      if ( SystemInformationClass != SystemAllowedCpuSetsInformation )
      {
        if ( SystemInformationClass == SystemInterruptCpuSetsInformation )
        {
          v107 = 0uLL;
          if ( (_DWORD)v3 != 16 )
            return -1073741820;
          if ( !SeSinglePrivilegeCheck(SeIncreaseBasePriorityPrivilege, PreviousMode) )
            return -1073741727;
          return KeIntSteerAssignCpuSetForGsiv(
                   *(_OWORD *)SystemInformation,
                   WORD2(*(_QWORD *)SystemInformation),
                   *((_QWORD *)SystemInformation + 1));
        }
        if ( SystemInformationClass != SystemCpuSetTagInformation )
          return -1073741821;
        if ( (unsigned int)v3 < 8 )
          return -1073741820;
        v93 = v3 - 8;
        if ( (v93 & 7) != 0 || v93 > 0xA0 )
          return -1073741820;
        v94 = *(_QWORD *)SystemInformation;
        v121 = *(_QWORD *)SystemInformation;
        memmove(v123, (char *)SystemInformation + 8, v93);
        updated = ExCpuSetResourceManagerAccessCheck(PreviousMode);
        if ( updated >= 0 )
          return KeSetTagCpuSets(v93 >> 3, v123, v94);
        return updated;
      }
      if ( (v3 & 7) != 0 || (unsigned int)v3 > 0xA0 )
        return -1073741820;
      memmove(v124, SystemInformation, v3);
      result = ExCpuSetResourceManagerAccessCheck(PreviousMode);
      if ( result < 0 )
        return result;
      v34 = (unsigned int)v3 >> 3;
      v35 = 0;
      v36 = v124;
      return KeSetSystemAllowedCpuSets(v34, v36, v35);
    }
LABEL_416:
    if ( qword_1404364A8 )
      return qword_1404364A8((unsigned int)SystemInformationClass, SystemInformation, (unsigned int)v3);
    return -1073741637;
  }
  switch ( SystemInformationClass )
  {
    case SystemActivityModerationExeState:
      if ( (_DWORD)v3 != 24 )
        return -1073741820;
      v122[0] = *(_OWORD *)SystemInformation;
      *(_QWORD *)&v122[1] = *((_QWORD *)SystemInformation + 2);
      result = VfProbeAndCaptureUnicodeStringBuffer(v122, 1LL, v9, 3LL);
      if ( result < 0 )
        return result;
      updated = PsSetExeModerationState((__int64)v122, v122[1], DWORD1(v122[1]));
      v74 = (char *)v122;
LABEL_318:
      VfFreeCapturedUnicodeString(v74);
      return updated;
    case SystemCodeIntegrityUnlockInformation:
      goto LABEL_416;
    case SystemIntegrityQuotaInformation:
      if ( !(_DWORD)v3 )
      {
        if ( PreviousMode && !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
          return -1073741727;
        return VslRelaxQuotas();
      }
      return -1073741811;
    case SystemSecureDumpEncryptionInformation:
      if ( !(_DWORD)v3 )
      {
        if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
          return -1073741727;
        return VslProvisionDumpEncryption();
      }
      return -1073741811;
    case SystemCodeIntegrityVerificationInformation:
      goto LABEL_416;
    case SystemWorkloadAllowedCpuSetsInformation:
      if ( (unsigned int)v3 < 8 )
        return -1073741820;
      v61 = v3 - 8;
      if ( (v61 & 7) != 0 || v61 > 0xA0 )
        return -1073741820;
      v62 = *(_QWORD *)SystemInformation;
      memmove(v125, (char *)SystemInformation + 8, v61);
      if ( v62 >= 2 )
        return -1073741811;
      updated = ExCpuSetResourceManagerAccessCheck(PreviousMode);
      if ( updated < 0 )
        return updated;
      v34 = v61 >> 3;
      v35 = v62;
      v36 = v125;
      return KeSetSystemAllowedCpuSets(v34, v36, v35);
  }
  if ( SystemInformationClass != SystemLeapSecondInformation )
  {
    if ( SystemInformationClass != SystemFlags2Information )
      return -1073741821;
    if ( (_DWORD)v3 != 4 )
      return -1073741820;
    if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
      return -1073741790;
    NtGlobalFlag2 = *(_DWORD *)SystemInformation;
    *(_DWORD *)SystemInformation = NtGlobalFlag2;
    return updated;
  }
  if ( (_DWORD)v3 != 8 )
    return -1073741820;
  if ( PreviousMode && !SeSinglePrivilegeCheck(SeSystemtimePrivilege, PreviousMode) )
    return -1073741727;
  if ( PsIsCurrentThreadInServerSilo() )
    return -1073741790;
  *(_QWORD *)&v122[0] = *(_QWORD *)SystemInformation;
  v97[0] = LOBYTE(v122[0]) != 0;
  result = ExSetLeapSecondEnabled();
  updated = result;
  if ( result >= 0 )
  {
    *(_BYTE *)ExLeapSecondData = v97[0];
    return updated;
  }
  return result;
}
