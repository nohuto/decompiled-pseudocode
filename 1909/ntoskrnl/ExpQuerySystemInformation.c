/*
 * XREFs of ExpQuerySystemInformation @ 0x1405CB430
 * Callers:
 *     NtQuerySystemInformationEx @ 0x1405C9E60 (NtQuerySystemInformationEx.c)
 *     NtQuerySystemInformation @ 0x1405CB2E0 (NtQuerySystemInformation.c)
 * Callees:
 *     ExpGetSystemProcessorInformation @ 0x1400045A4 (ExpGetSystemProcessorInformation.c)
 *     ExpGetSystemBasicInformation @ 0x1400047D8 (ExpGetSystemBasicInformation.c)
 *     PoGetIdleTimes @ 0x140004998 (PoGetIdleTimes.c)
 *     KeGetProcessorIndexFromNumber @ 0x140004AD0 (KeGetProcessorIndexFromNumber.c)
 *     KeQueryActiveProcessorCountEx @ 0x140005340 (KeQueryActiveProcessorCountEx.c)
 *     MmGetHighestPhysicalPage @ 0x140005F68 (MmGetHighestPhysicalPage.c)
 *     MmQueryMemoryListInformation @ 0x140006020 (MmQueryMemoryListInformation.c)
 *     PsGetCurrentProcess @ 0x1400065C0 (PsGetCurrentProcess.c)
 *     PoEnergyEstimationEnabled @ 0x14000E540 (PoEnergyEstimationEnabled.c)
 *     ExReleaseResourceLite @ 0x14003B910 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003C090 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegion @ 0x14003DF60 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     KeEnterCriticalRegion @ 0x140043D20 (KeEnterCriticalRegion.c)
 *     KeEnterCriticalRegionThread @ 0x140053A10 (KeEnterCriticalRegionThread.c)
 *     KeFlushProcessWriteBuffers @ 0x140098C58 (KeFlushProcessWriteBuffers.c)
 *     ExAllocatePoolWithQuotaTag @ 0x14009EE00 (ExAllocatePoolWithQuotaTag.c)
 *     KeQueryActiveGroupCount @ 0x1400D7A20 (KeQueryActiveGroupCount.c)
 *     MmQuerySystemWorkingSetInformation @ 0x1400D9D04 (MmQuerySystemWorkingSetInformation.c)
 *     MmGetSharedCommit @ 0x1400D9FF8 (MmGetSharedCommit.c)
 *     MmGetResidentAvailablePages @ 0x1400DA008 (MmGetResidentAvailablePages.c)
 *     MmGetPeakCommitment @ 0x1400DB69C (MmGetPeakCommitment.c)
 *     MmGetTotalCommitLimit @ 0x1400DB6B8 (MmGetTotalCommitLimit.c)
 *     MmGetTotalCommittedPages @ 0x1400DB6D4 (MmGetTotalCommittedPages.c)
 *     MmGetAvailablePages @ 0x1400DB6F0 (MmGetAvailablePages.c)
 *     MmGetProcessPartitionId @ 0x1400DB70C (MmGetProcessPartitionId.c)
 *     KeGetRecommendedSharedDataAlignment @ 0x1400FD470 (KeGetRecommendedSharedDataAlignment.c)
 *     KeQueryLogicalProcessorRelationship @ 0x1400FF420 (KeQueryLogicalProcessorRelationship.c)
 *     ExCpuSetResourceManagerAccessCheck @ 0x140129974 (ExCpuSetResourceManagerAccessCheck.c)
 *     ExpGetSystemEmulationBasicInformation @ 0x14012A2D8 (ExpGetSystemEmulationBasicInformation.c)
 *     KeQueryBootTimeValues @ 0x14012AC04 (KeQueryBootTimeValues.c)
 *     KeQueryCycleTimeStatsProcessor @ 0x14012AFC4 (KeQueryCycleTimeStatsProcessor.c)
 *     PoGetPerfStateAndParkingInfo @ 0x140132310 (PoGetPerfStateAndParkingInfo.c)
 *     KeQueryGroupAffinity @ 0x1401353A0 (KeQueryGroupAffinity.c)
 *     ExpGetSystemEmulationProcessorInformation @ 0x140138810 (ExpGetSystemEmulationProcessorInformation.c)
 *     VslIsSecureKernelRunning @ 0x14013DAD0 (VslIsSecureKernelRunning.c)
 *     MmGetLowestPhysicalPage @ 0x14013DB44 (MmGetLowestPhysicalPage.c)
 *     VslGetNestedPageProtectionFlags @ 0x14018C9D0 (VslGetNestedPageProtectionFlags.c)
 *     PsQueryCpuQuotaInformation @ 0x14019EA24 (PsQueryCpuQuotaInformation.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ExPoolIsZeroingSupportPresent @ 0x1401C0714 (ExPoolIsZeroingSupportPresent.c)
 *     ZwFilterBootOption @ 0x1401C2810 (ZwFilterBootOption.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     HvlQueryActiveProcessors @ 0x140284F40 (HvlQueryActiveProcessors.c)
 *     HvlQueryProcessorTopologyCount @ 0x140285150 (HvlQueryProcessorTopologyCount.c)
 *     VslIsTrustletRunning @ 0x14028FA10 (VslIsTrustletRunning.c)
 *     VslQuerySecureKernelProfileInformation @ 0x14028FE24 (VslQuerySecureKernelProfileInformation.c)
 *     KeGetAffinitizedInterruptsInfo @ 0x1402B170C (KeGetAffinitizedInterruptsInfo.c)
 *     MmEnumerateBadPages @ 0x1402ECF0C (MmEnumerateBadPages.c)
 *     PpmCapturePerformanceDistribution @ 0x1402FF644 (PpmCapturePerformanceDistribution.c)
 *     PsQueryActivityModerationUserSettings @ 0x140306BC0 (PsQueryActivityModerationUserSettings.c)
 *     SeQueryTrustedPlatformModuleInformation @ 0x14031DF0C (SeQueryTrustedPlatformModuleInformation.c)
 *     ExpGetLookasideInformation @ 0x14033751C (ExpGetLookasideInformation.c)
 *     ExGetBigPoolInfo @ 0x140338D60 (ExGetBigPoolInfo.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PsWow64GetSupportedArchitectures @ 0x1405C9C44 (PsWow64GetSupportedArchitectures.c)
 *     WbDispatchOperation @ 0x1405CADA0 (WbDispatchOperation.c)
 *     PfQuerySuperfetchInformation @ 0x1405CEA00 (PfQuerySuperfetchInformation.c)
 *     PsLookupProcessByProcessId @ 0x1405D0AD0 (PsLookupProcessByProcessId.c)
 *     ProbeForWrite @ 0x1405F10D0 (ProbeForWrite.c)
 *     ExpGetProcessInformation @ 0x1405F9BB0 (ExpGetProcessInformation.c)
 *     ObReferenceObjectByHandle @ 0x1405FB4B0 (ObReferenceObjectByHandle.c)
 *     ExpQueryModuleInformation @ 0x1406664E0 (ExpQueryModuleInformation.c)
 *     ExpQuerySystemPerformanceInformation @ 0x1406738A0 (ExpQuerySystemPerformanceInformation.c)
 *     MmGetPageFileInformation @ 0x140673FCC (MmGetPageFileInformation.c)
 *     SeSinglePrivilegeCheck @ 0x140678440 (SeSinglePrivilegeCheck.c)
 *     ExGetSessionPoolTagInformation @ 0x1406A468C (ExGetSessionPoolTagInformation.c)
 *     ExReleaseTimeRefreshLock @ 0x1406A71E0 (ExReleaseTimeRefreshLock.c)
 *     ExAcquireTimeRefreshLock @ 0x1406A7200 (ExAcquireTimeRefreshLock.c)
 *     SeCodeIntegrityQueryPolicyInformation @ 0x1406B24A0 (SeCodeIntegrityQueryPolicyInformation.c)
 *     ExpQueryNumaProcessorMap @ 0x1406C06C0 (ExpQueryNumaProcessorMap.c)
 *     ExGetPoolTagInfo @ 0x1406C7CF8 (ExGetPoolTagInfo.c)
 *     ExHandleSPCall2 @ 0x1406CA8D4 (ExHandleSPCall2.c)
 *     PsQueryFullProcessImageName @ 0x1406CCCC4 (PsQueryFullProcessImageName.c)
 *     ExIsRestrictedCaller @ 0x1406D17C8 (ExIsRestrictedCaller.c)
 *     KeBuildLogicalProcessorSystemInformation @ 0x1406D7D40 (KeBuildLogicalProcessorSystemInformation.c)
 *     ExpGetSystemFlushInformation @ 0x1406DACB8 (ExpGetSystemFlushInformation.c)
 *     ExpGetSystemFirmwareTableInformation @ 0x1406DADE4 (ExpGetSystemFirmwareTableInformation.c)
 *     PfSnQueryPrefetcherInformation @ 0x1406DC468 (PfSnQueryPrefetcherInformation.c)
 *     SeCodeIntegrityQueryInformation @ 0x1406DD98C (SeCodeIntegrityQueryInformation.c)
 *     IoQuerySystemDeviceName @ 0x1406E1288 (IoQuerySystemDeviceName.c)
 *     SeSecureBootQueryInformation @ 0x1406E8B80 (SeSecureBootQueryInformation.c)
 *     IoQueryLowPriorityIoInformation @ 0x1406EC720 (IoQueryLowPriorityIoInformation.c)
 *     SmQueryStoreInformation @ 0x1406F0B68 (SmQueryStoreInformation.c)
 *     ExpReadComPlusPackage @ 0x1406F1720 (ExpReadComPlusPackage.c)
 *     ExpQueryModuleInformationEx @ 0x140716848 (ExpQueryModuleInformationEx.c)
 *     HvlQueryVsmProtectionInfo @ 0x14072EB44 (HvlQueryVsmProtectionInfo.c)
 *     CmQueryRegistryQuotaInformation @ 0x14072F068 (CmQueryRegistryQuotaInformation.c)
 *     KeQuerySpeculationControlInformation @ 0x14072F3F8 (KeQuerySpeculationControlInformation.c)
 *     KeQueryKvaShadowInformation @ 0x14072F880 (KeQueryKvaShadowInformation.c)
 *     SeSecurityModelQueryInformation @ 0x14072F980 (SeSecurityModelQueryInformation.c)
 *     IoGetConfigurationInformation @ 0x14073D130 (IoGetConfigurationInformation.c)
 *     SeQueryHSTIResults @ 0x140749560 (SeQueryHSTIResults.c)
 *     ExSystemExceptionFilter @ 0x140749ED0 (ExSystemExceptionFilter.c)
 *     ExQueryBootEntropyInformation @ 0x14075BACC (ExQueryBootEntropyInformation.c)
 *     ExpQueryMemoryTopologyInformation @ 0x140781B0C (ExpQueryMemoryTopologyInformation.c)
 *     KeQueryCpuSetInformation @ 0x140783CB0 (KeQueryCpuSetInformation.c)
 *     ExpQueryInterruptSteeringInformation @ 0x140788F34 (ExpQueryInterruptSteeringInformation.c)
 *     ExpGetSystemPlatformBinary @ 0x140789190 (ExpGetSystemPlatformBinary.c)
 *     ExpGetSystemWriteConstraintInformation @ 0x14078ABFC (ExpGetSystemWriteConstraintInformation.c)
 *     HvlQueryEnlightenmentInfo @ 0x14078B62C (HvlQueryEnlightenmentInfo.c)
 *     IoQueryVhdBootInformation @ 0x14078B970 (IoQueryVhdBootInformation.c)
 *     HvlQueryDetailInfo @ 0x140850718 (HvlQueryDetailInfo.c)
 *     MmGetSessionMappedViewInformation @ 0x1408871F8 (MmGetSessionMappedViewInformation.c)
 *     ObQueryRefTraceInformation @ 0x14089EAC0 (ObQueryRefTraceInformation.c)
 *     PsRootSiloInformation @ 0x1408C45F0 (PsRootSiloInformation.c)
 *     EtwQueryPerformanceTraceInformation @ 0x1408F5828 (EtwQueryPerformanceTraceInformation.c)
 *     ExGetSessionBigPoolInformation @ 0x14090873C (ExGetSessionBigPoolInformation.c)
 *     ExpGetDeviceDataInformation @ 0x140908970 (ExpGetDeviceDataInformation.c)
 *     ExpGetHandleInformation @ 0x140908B84 (ExpGetHandleInformation.c)
 *     ExpGetHandleInformationEx @ 0x140908C1C (ExpGetHandleInformationEx.c)
 *     ExpGetLockInformation @ 0x140908CB4 (ExpGetLockInformation.c)
 *     ExpGetObjectInformation @ 0x140908D28 (ExpGetObjectInformation.c)
 *     ExpGetSystemProcessorFeaturesInformation @ 0x140908DAC (ExpGetSystemProcessorFeaturesInformation.c)
 *     ExpIsIumEncryptionKeyAvailable @ 0x140908E08 (ExpIsIumEncryptionKeyAvailable.c)
 *     ExpQueryChannelInformation @ 0x140908ED0 (ExpQueryChannelInformation.c)
 *     ExpQueryCodeIntegrityCertificateInfo @ 0x14090900C (ExpQueryCodeIntegrityCertificateInfo.c)
 *     ExpQueryLegacyDriverInformation @ 0x140909588 (ExpQueryLegacyDriverInformation.c)
 *     ExpQueryNumaAvailableMemory @ 0x140909684 (ExpQueryNumaAvailableMemory.c)
 *     ExpQueryNumaProximityNode @ 0x140909828 (ExpQueryNumaProximityNode.c)
 *     ExpQueryPortableWorkspaceEfiLauncherInformation @ 0x14090997C (ExpQueryPortableWorkspaceEfiLauncherInformation.c)
 *     ExpQuerySingleModuleInformation @ 0x140909B90 (ExpQuerySingleModuleInformation.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913920 (ExRaiseDatatypeMisalignment.c)
 *     ExpCovQueryInformation @ 0x14091462C (ExpCovQueryInformation.c)
 *     VfGetVerifierInformation @ 0x14098A2CC (VfGetVerifierInformation.c)
 *     VfGetVerifierInformationEx @ 0x14098A390 (VfGetVerifierInformationEx.c)
 *     BgkQueryBootGraphicsInformation @ 0x14098F454 (BgkQueryBootGraphicsInformation.c)
 */

NTSTATUS __fastcall ExpQuerySystemInformation(
        unsigned int a1,
        LOGICAL_PROCESSOR_RELATIONSHIP *a2,
        unsigned int a3,
        __int64 a4,
        unsigned int Length,
        unsigned int *a6)
{
  unsigned int v7; // edi
  __int64 v8; // rsi
  __int64 v9; // rcx
  unsigned __int8 v10; // r12
  ULONG v11; // r8d
  __int64 v12; // r9
  unsigned __int16 v13; // r10
  LOGICAL_PROCESSOR_RELATIONSHIP v14; // edx
  USHORT v15; // cx
  ULONG ActiveProcessorCount; // eax
  int v17; // edi
  unsigned int v18; // r11d
  NTSTATUS result; // eax
  signed int SystemBasicInformation; // eax
  _KPROCESS *v21; // rax
  unsigned __int16 v22; // di
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rax
  signed int VerifierInformation; // edi
  _KPROCESS *v27; // rax
  unsigned __int16 v28; // di
  _KPROCESS *CurrentProcess; // rax
  unsigned __int16 ProcessPartitionId; // di
  __int64 v31; // rcx
  unsigned int v32; // edi
  unsigned int v33; // edi
  unsigned int v34; // eax
  _DWORD *v35; // r13
  int v36; // ecx
  unsigned __int64 v37; // r12
  unsigned int v38; // ecx
  _DWORD *PoolWithTag; // rax
  _DWORD *v40; // rsi
  __int64 v41; // rdi
  unsigned __int64 v42; // rdi
  char v43; // si
  unsigned __int64 v44; // rdx
  struct _KTHREAD *CurrentThread; // rsi
  PCONFIGURATION_INFORMATION ConfigurationInformation; // rax
  signed int v47; // eax
  unsigned int v48; // eax
  int v49; // ecx
  unsigned int v50; // eax
  __int64 v51; // rdx
  unsigned int v52; // ebx
  int v53; // ecx
  int v54; // edx
  __int64 *v55; // r12
  __int64 v56; // r8
  __int64 *v57; // r12
  __int64 v58; // rdx
  unsigned int i; // edi
  _DWORD *v60; // rdx
  _OWORD *v61; // rcx
  __int64 v62; // rax
  __int64 *v63; // r12
  __int64 v64; // rcx
  __int32 v65; // edx
  unsigned int v66; // r8d
  unsigned __int16 v67; // r9
  unsigned int v68; // eax
  unsigned int v69; // r13d
  unsigned __int16 j; // ax
  __int64 v71; // rcx
  _QWORD *v72; // rax
  unsigned int v73; // eax
  __int64 v74; // rcx
  unsigned int v75; // eax
  unsigned int v76; // r13d
  __int64 v77; // rdx
  LOGICAL_PROCESSOR_RELATIONSHIP *PoolWithQuotaTag; // rsi
  int v79; // eax
  int v80; // ecx
  __int64 v81; // rax
  PVOID v82; // rsi
  unsigned int v83; // ecx
  PVOID v84; // r12
  void *v85; // rcx
  unsigned int v86; // eax
  unsigned int v87; // r13d
  __int64 v88; // rcx
  __int16 NestedPageProtectionFlags; // ax
  char v90; // cl
  LOGICAL_PROCESSOR_RELATIONSHIP *v91; // rax
  int v92; // eax
  __int64 v93; // rax
  size_t Size; // [rsp+30h] [rbp-1D8h] BYREF
  _PROCESSOR_NUMBER ProcNumber; // [rsp+38h] [rbp-1D0h] BYREF
  unsigned __int16 v96; // [rsp+3Ch] [rbp-1CCh]
  char v97[4]; // [rsp+40h] [rbp-1C8h] BYREF
  unsigned int v98; // [rsp+44h] [rbp-1C4h]
  int v99; // [rsp+48h] [rbp-1C0h]
  int v100; // [rsp+4Ch] [rbp-1BCh]
  SIZE_T NumberOfBytes[2]; // [rsp+50h] [rbp-1B8h] BYREF
  LOGICAL_PROCESSOR_RELATIONSHIP *v102; // [rsp+60h] [rbp-1A8h]
  char Data[4]; // [rsp+68h] [rbp-1A0h] BYREF
  int v104; // [rsp+6Ch] [rbp-19Ch] BYREF
  ULONG v105; // [rsp+70h] [rbp-198h]
  unsigned __int16 v106; // [rsp+74h] [rbp-194h]
  unsigned int v107; // [rsp+78h] [rbp-190h]
  int v108; // [rsp+7Ch] [rbp-18Ch]
  _QWORD *v109; // [rsp+80h] [rbp-188h]
  PEPROCESS Process; // [rsp+88h] [rbp-180h] BYREF
  int v111; // [rsp+90h] [rbp-178h] BYREF
  LOGICAL_PROCESSOR_RELATIONSHIP RelationshipType; // [rsp+94h] [rbp-174h]
  unsigned int v113; // [rsp+98h] [rbp-170h]
  int v114; // [rsp+9Ch] [rbp-16Ch] BYREF
  int v115; // [rsp+A0h] [rbp-168h] BYREF
  unsigned int v116; // [rsp+A4h] [rbp-164h] BYREF
  int v117; // [rsp+A8h] [rbp-160h]
  __int64 v118; // [rsp+B0h] [rbp-158h]
  HANDLE Handle; // [rsp+B8h] [rbp-150h]
  HANDLE ProcessId[2]; // [rsp+C0h] [rbp-148h]
  unsigned __int64 v121; // [rsp+D0h] [rbp-138h]
  volatile void *v122; // [rsp+D8h] [rbp-130h]
  PVOID P; // [rsp+E0h] [rbp-128h] BYREF
  PVOID v124; // [rsp+E8h] [rbp-120h] BYREF
  __int64 v125; // [rsp+F0h] [rbp-118h]
  int v126; // [rsp+FCh] [rbp-10Ch]
  int v127; // [rsp+104h] [rbp-104h]
  __int64 v128; // [rsp+108h] [rbp-100h] BYREF
  PVOID Object; // [rsp+110h] [rbp-F8h] BYREF
  PVOID v130[3]; // [rsp+118h] [rbp-F0h] BYREF
  _OWORD Src[8]; // [rsp+130h] [rbp-D8h] BYREF
  KAFFINITY GroupAffinity; // [rsp+1B0h] [rbp-58h] BYREF
  __int64 v133; // [rsp+1B8h] [rbp-50h]

  v98 = a3;
  v102 = a2;
  v7 = a1;
  v107 = a1;
  NumberOfBytes[1] = (SIZE_T)a6;
  v8 = 0LL;
  Size = 0LL;
  GroupAffinity = 0LL;
  v133 = 0LL;
  ProcNumber = 0;
  memset(Src, 0, sizeof(Src));
  v109 = 0LL;
  v10 = KeGetCurrentThread()->$24A664F1AFBF48775CBEA2BECCC9B900::gap0[10];
  if ( v10 )
  {
    switch ( v7 )
    {
      case 0xCu:
        v11 = 8;
        break;
      case 0x23u:
      case 0x91u:
      case 0x93u:
      case 0x95u:
      case 0x9Eu:
      case 0xA3u:
      case 0xA9u:
      case 0xCAu:
      case 0xE3u:
        v11 = 1;
        break;
      default:
        v11 = 4;
        break;
    }
    ProbeForWrite((volatile void *)a4, Length, v11);
    if ( a6 )
    {
      v9 = (__int64)a6;
      if ( (unsigned __int64)a6 >= 0x7FFFFFFF0000LL )
        v9 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v9 = *(_DWORD *)v9;
    }
  }
  LODWORD(Size) = 0;
  RelationshipType = RelationAll;
  v12 = 0LL;
  v105 = 0;
  v13 = 0;
  v99 = 0;
  v96 = 0;
  v106 = 0;
  v118 = 0LL;
  Handle = 0LL;
  v125 = 0LL;
  v14 = 9;
  v108 = 9;
  v117 = 9;
  switch ( v7 )
  {
    case 2u:
    case 0x21u:
    case 0x24u:
    case 0x41u:
      v99 = 0xFFFF;
      v96 = -1;
      v15 = -1;
      goto LABEL_12;
    case 8u:
    case 0x17u:
    case 0x2Au:
    case 0x3Du:
    case 0x49u:
    case 0x53u:
    case 0x64u:
    case 0x6Cu:
    case 0x8Du:
    case 0xA0u:
      if ( v98 < 2 )
        return -1073741811;
      v17 = *(unsigned __int16 *)v102;
      v99 = v17;
      v96 = v17;
      if ( (unsigned __int16)v17 >= KeQueryActiveGroupCount() )
        return -1073741811;
      v15 = v17;
LABEL_12:
      ActiveProcessorCount = KeQueryActiveProcessorCountEx(v15);
      v12 = ActiveProcessorCount;
      v105 = ActiveProcessorCount;
      v13 = v99;
      v7 = v107;
      v14 = v108;
LABEL_31:
      v18 = v98;
      goto LABEL_32;
    case 0x48u:
      v18 = v98;
      if ( v98 != 4 )
        return -1073741811;
      v14 = *v102;
      v117 = *v102;
      goto LABEL_32;
    case 0x6Bu:
      v18 = v98;
      if ( v98 < 4 )
        return -1073741811;
      RelationshipType = *v102;
      goto LABEL_32;
    case 0x79u:
      v18 = v98;
      if ( v98 < 2 )
        return -1073741811;
      v106 = *(_WORD *)v102;
      v9 = v106;
      if ( v106 >= (unsigned __int16)KeNumberNodes )
        return -1073741811;
      goto LABEL_32;
    case 0xA5u:
      v18 = v98;
      if ( v98 )
      {
        if ( v98 != 8 )
          return -1073741811;
        v118 = *(_QWORD *)v102;
      }
      else
      {
        v118 = 0LL;
      }
LABEL_32:
      switch ( v7 )
      {
        case 0u:
        case 0x72u:
          if ( Length == 64 )
          {
            SystemBasicInformation = ExpGetSystemBasicInformation(a4);
            goto LABEL_623;
          }
          if ( a6 )
            *a6 = 64;
          return -1073741820;
        case 1u:
          if ( Length >= 0xC )
          {
            SystemBasicInformation = ExpGetSystemProcessorInformation(a4);
            LODWORD(Size) = 12;
            goto LABEL_624;
          }
          if ( a6 )
            *a6 = 12;
          return -1073741820;
        case 2u:
          if ( Length < 0x138 )
          {
            if ( a6 )
              *a6 = 344;
            return -1073741820;
          }
          v32 = 344;
          if ( Length <= 0x158 )
            v32 = Length;
          ExpQuerySystemPerformanceInformation((unsigned int)v12, a4, v32);
          goto LABEL_270;
        case 3u:
          if ( Length <= 0x30 )
          {
            KeQueryBootTimeValues((_QWORD *)Src + 1, (LARGE_INTEGER *)Src, &Src[2]);
            *(_QWORD *)&Src[1] = ExpTimeZoneBias;
            DWORD2(Src[1]) = ExpCurrentTimeZoneId;
            *((_QWORD *)&Src[2] + 1) = MEMORY[0xFFFFF780000003B0];
            memmove((void *)a4, Src, Length);
            goto LABEL_119;
          }
          if ( a6 )
            *a6 = 48;
          return -1073741820;
        case 4u:
        case 0xAu:
        case 0x19u:
        case 0x1Du:
        case 0x60u:
          return -1073741822;
        case 5u:
        case 0x39u:
        case 0x94u:
          SystemBasicInformation = ExpGetProcessInformation(a4, Length, (unsigned int)&Size, 0, v7);
          goto LABEL_624;
        case 6u:
          return -1073741637;
        case 7u:
          if ( Length == 24 )
          {
            ConfigurationInformation = IoGetConfigurationInformation();
            *(_DWORD *)a4 = ConfigurationInformation->DiskCount;
            *(_DWORD *)(a4 + 4) = ConfigurationInformation->FloppyCount;
            *(_DWORD *)(a4 + 8) = ConfigurationInformation->CdRomCount;
            *(_DWORD *)(a4 + 12) = ConfigurationInformation->TapeCount;
            *(_DWORD *)(a4 + 16) = ConfigurationInformation->SerialCount;
            *(_DWORD *)(a4 + 20) = ConfigurationInformation->ParallelCount;
            goto LABEL_65;
          }
          if ( a6 )
            *a6 = 24;
          return -1073741820;
        case 8u:
        case 0x8Du:
          v33 = 48;
          if ( v107 != 8 )
            v33 = 72;
          if ( Length && !(Length % v33) )
          {
            v100 = 0;
            v34 = 0;
            while ( 1 )
            {
              v108 = v34;
              if ( v34 >= (unsigned int)v12 )
                break;
              ProcNumber.Group = v13;
              ProcNumber.Number = v34;
              ProcNumber.Reserved = 0;
              v35 = (_DWORD *)KiProcessorBlock[KeGetProcessorIndexFromNumber(&ProcNumber)];
              v36 = v100;
              if ( Length < v33 + v100 )
                goto LABEL_89;
              v100 += v33;
              PoGetIdleTimes(&ProcNumber, 0LL, (__int64)Src);
              *(_QWORD *)(a4 + 16) = KeMaximumIncrement * (unsigned __int64)(unsigned int)v35[5858];
              *(_QWORD *)(a4 + 8) = KeMaximumIncrement * (unsigned __int64)DWORD1(Src[0]);
              *(_QWORD *)(a4 + 24) = KeMaximumIncrement * (unsigned __int64)(unsigned int)v35[5859];
              *(_QWORD *)(a4 + 32) = KeMaximumIncrement * (unsigned __int64)(unsigned int)v35[5860];
              *(_QWORD *)a4 = KeMaximumIncrement * (unsigned __int64)LODWORD(Src[0]);
              *(_DWORD *)(a4 + 40) = v35[5856];
              if ( v107 == 141 )
              {
                *(_QWORD *)(a4 + 48) = KeMaximumIncrement * (unsigned __int64)(unsigned int)v35[5867];
                *(_DWORD *)(a4 + 44) = 0;
                *(_QWORD *)(a4 + 56) = 0LL;
                *(_QWORD *)(a4 + 64) = 0LL;
              }
              a4 += v33;
              v34 = v108 + 1;
              LODWORD(v12) = v105;
              v13 = v99;
            }
            v36 = v100;
LABEL_89:
            LODWORD(Size) = v36;
            VerifierInformation = HIDWORD(Size);
            goto LABEL_625;
          }
          if ( a6 )
            *a6 = v12 * v33;
          return -1073741820;
        case 9u:
          if ( Length == 4 )
          {
            *(_DWORD *)a4 = NtGlobalFlag;
            goto LABEL_161;
          }
          if ( a6 )
            *a6 = 4;
          return -1073741820;
        case 0xBu:
          if ( (unsigned int)ExIsRestrictedCaller(v10) )
            return -1073741790;
          KeEnterCriticalRegion();
          ExAcquireResourceExclusiveLite(&PsLoadedModuleResource, 1u);
          v47 = ExpQueryModuleInformation(&PsLoadedModuleList, a4, Length, &Size);
          goto LABEL_169;
        case 0xCu:
          if ( Length < 0x38 )
          {
            if ( a6 )
              *a6 = 56;
            return -1073741820;
          }
          if ( (unsigned int)ExIsRestrictedCaller(v10) )
            return -1073741790;
          SystemBasicInformation = ExpGetLockInformation(a4, Length, &Size);
          goto LABEL_624;
        case 0xDu:
          if ( Length >= 0x128 )
            goto LABEL_181;
          if ( a6 )
            *a6 = 296;
          return -1073741820;
        case 0xEu:
        case 0xFu:
        case 0x13u:
LABEL_181:
          VerifierInformation = -1073741822;
          goto LABEL_625;
        case 0x10u:
          if ( Length < 0x20 )
          {
            if ( a6 )
              *a6 = 32;
            return -1073741820;
          }
          if ( (a4 & 7) != 0 )
            return -2147483646;
          if ( !(unsigned int)ExIsRestrictedCaller(v10) )
          {
            SystemBasicInformation = ExpGetHandleInformation(a4, Length, &Size);
            goto LABEL_624;
          }
          return -1073741790;
        case 0x11u:
          if ( Length < 0x40 )
          {
            if ( a6 )
              *a6 = 64;
            return -1073741820;
          }
          if ( (unsigned int)ExIsRestrictedCaller(v10) )
            return -1073741790;
          SystemBasicInformation = ExpGetObjectInformation(a4, Length, &Size);
          goto LABEL_624;
        case 0x12u:
        case 0x90u:
          v48 = 32;
          if ( v7 != 18 )
            v48 = 40;
          LODWORD(Size) = v48;
          if ( Length >= v48 )
          {
            LODWORD(Size) = 0;
            LOBYTE(v8) = v7 == 144;
            SystemBasicInformation = MmGetPageFileInformation(-1, a4, Length, v8, (__int64)&Size);
            goto LABEL_624;
          }
          if ( a6 )
            *a6 = v48;
          return -1073741820;
        case 0x15u:
        case 0x51u:
        case 0x77u:
        case 0x78u:
          if ( Length < 0x40 )
          {
            if ( a6 )
              *a6 = 64;
            return -1073741820;
          }
          v49 = 2;
          if ( v7 == 119 )
          {
            v50 = 3;
          }
          else
          {
            if ( v7 == 120 )
              v49 = 4;
            v50 = v49;
          }
          MmQuerySystemWorkingSetInformation(v50, Src);
          *(_OWORD *)a4 = Src[0];
          *(_DWORD *)(a4 + 16) = Src[1];
          *(_QWORD *)(a4 + 24) = *((_QWORD *)&Src[1] + 1);
          *(_OWORD *)(a4 + 32) = Src[2];
          *(_OWORD *)(a4 + 48) = Src[3];
          LODWORD(Size) = 64;
          VerifierInformation = HIDWORD(Size);
          goto LABEL_625;
        case 0x16u:
          if ( Length >= 0x30 )
          {
            SystemBasicInformation = ExGetPoolTagInfo(a4, Length, &Size, v12);
            goto LABEL_624;
          }
          if ( a6 )
            *a6 = 48;
          return -1073741820;
        case 0x17u:
          LODWORD(Size) = 24 * v12;
          if ( Length >= 24 * (int)v12 )
          {
            for ( i = 0; i < (unsigned int)v12; ++i )
            {
              ProcNumber.Group = v13;
              ProcNumber.Number = i;
              ProcNumber.Reserved = 0;
              v60 = (_DWORD *)KiProcessorBlock[KeGetProcessorIndexFromNumber(&ProcNumber)];
              *(_DWORD *)a4 = v60[2895];
              *(_DWORD *)(a4 + 4) = v60[2951];
              *(_DWORD *)(a4 + 8) = v60[2967];
              *(_DWORD *)(a4 + 12) = KeTimeIncrement;
              *(_DWORD *)(a4 + 16) = 0;
              *(_DWORD *)(a4 + 20) = 0;
              a4 += 24LL;
              LODWORD(v12) = v105;
              v13 = v99;
            }
            goto LABEL_290;
          }
          if ( a6 )
            *a6 = 24 * v12;
          return -1073741820;
        case 0x18u:
          if ( Length == 20 )
          {
            *(_DWORD *)(a4 + 4) = KiMaximumDpcQueueDepth;
            *(_DWORD *)(a4 + 8) = KiMinimumDpcRate;
            *(_DWORD *)(a4 + 12) = KiAdjustDpcThreshold;
            *(_DWORD *)(a4 + 16) = KiIdealDpcRate;
            goto LABEL_279;
          }
          if ( a6 )
            *a6 = 20;
          return -1073741820;
        case 0x1Cu:
          if ( Length != 12 && Length != 24 )
          {
            if ( a6 )
              *a6 = 12;
            return -1073741820;
          }
          LOBYTE(v9) = 1;
          ExAcquireTimeRefreshLock(v9);
          v42 = KeTimeAdjustmentFrequency;
          v43 = KeTimeSynchronization;
          ExReleaseTimeRefreshLock();
          if ( Length == 24 )
          {
            *(_QWORD *)a4 = v42;
            *(_QWORD *)(a4 + 8) = MEMORY[0xFFFFF78000000300];
            *(_BYTE *)(a4 + 16) = v43;
          }
          else
          {
            *(_DWORD *)a4 = MEMORY[0xFFFFF78000000300] * (unsigned __int64)KeMaximumIncrement / v42;
            *(_DWORD *)(a4 + 4) = KeMaximumIncrement;
            *(_BYTE *)(a4 + 8) = v43;
          }
LABEL_119:
          LODWORD(Size) = Length;
          VerifierInformation = HIDWORD(Size);
          goto LABEL_625;
        case 0x1Fu:
          SystemBasicInformation = EtwQueryPerformanceTraceInformation(a4, Length, v10, &Size);
          goto LABEL_624;
        case 0x21u:
          if ( Length < 0x10 )
          {
            if ( a6 )
              *a6 = 16;
            return -1073741820;
          }
          LODWORD(Size) = 16;
          v53 = 0;
          v54 = 0;
          if ( (_DWORD)v12 )
          {
            v55 = KiProcessorBlock;
            v56 = (unsigned int)v12;
            do
            {
              v53 += *(_DWORD *)(*v55 + 24632);
              v54 += *(_DWORD *)(*v55++ + 23472);
              --v56;
            }
            while ( v56 );
          }
          *(_DWORD *)a4 = v53;
          *(_DWORD *)(a4 + 4) = v54;
          *(_DWORD *)(a4 + 8) = 0;
          *(_DWORD *)(a4 + 12) = 0;
          VerifierInformation = HIDWORD(Size);
          goto LABEL_625;
        case 0x23u:
          if ( Length >= 2 )
          {
            *(_BYTE *)a4 = (_BYTE)KdDebuggerEnabled;
            *(_BYTE *)(a4 + 1) = (_BYTE)KdDebuggerNotPresent;
            LODWORD(Size) = 2;
            VerifierInformation = HIDWORD(Size);
            goto LABEL_625;
          }
          if ( a6 )
            *a6 = 2;
          return -1073741820;
        case 0x24u:
          if ( Length < 0x30 )
          {
            if ( a6 )
              *a6 = 48;
            return -1073741820;
          }
          if ( (_DWORD)v12 )
          {
            v57 = KiProcessorBlock;
            v58 = (unsigned int)v12;
            do
            {
              LODWORD(v8) = *(_DWORD *)(*v57++ + 11580) + v8;
              --v58;
            }
            while ( v58 );
          }
          *(_DWORD *)a4 = v8;
          *(_DWORD *)(a4 + 4) = KeThreadSwitchCounters;
          *(_DWORD *)(a4 + 8) = dword_14044D6A8;
          *(_DWORD *)(a4 + 12) = dword_14044D6A4;
          *(_DWORD *)(a4 + 16) = dword_14044D6AC;
          *(_DWORD *)(a4 + 20) = dword_14044D6B0;
          *(_DWORD *)(a4 + 24) = dword_14044D6B8;
          *(_DWORD *)(a4 + 28) = dword_14044D6B4;
          *(_DWORD *)(a4 + 32) = dword_14044D6BC;
          *(_DWORD *)(a4 + 36) = dword_14044D6C0;
          *(_DWORD *)(a4 + 40) = dword_14044D6C4;
          *(_DWORD *)(a4 + 44) = dword_14044D6C8;
          v32 = 48;
LABEL_270:
          LODWORD(Size) = v32;
          VerifierInformation = HIDWORD(Size);
          goto LABEL_625;
        case 0x25u:
          if ( Length >= 0x10 )
          {
            SystemBasicInformation = CmQueryRegistryQuotaInformation(a4);
            LODWORD(Size) = 16;
            goto LABEL_624;
          }
          if ( a6 )
            *a6 = 16;
          return -1073741820;
        case 0x2Au:
          LODWORD(Size) = 48 * v12;
          if ( Length < 48 * (int)v12 )
            goto LABEL_102;
          while ( (unsigned int)v8 < (unsigned int)v12 )
          {
            ProcNumber.Group = v13;
            ProcNumber.Number = v8;
            ProcNumber.Reserved = 0;
            PoGetIdleTimes(&ProcNumber, (__int64)Src, 0LL);
            *(_OWORD *)a4 = Src[0];
            *(_OWORD *)(a4 + 16) = Src[1];
            *(_OWORD *)(a4 + 32) = Src[2];
            a4 += 48LL;
            LODWORD(v8) = v8 + 1;
            LODWORD(v12) = v105;
            v13 = v99;
          }
          goto LABEL_60;
        case 0x2Bu:
          if ( Length >= 0x18 )
          {
            LODWORD(Size) = Length;
            SystemBasicInformation = ExpQueryLegacyDriverInformation(a4, &Size);
            goto LABEL_624;
          }
          if ( a6 )
            *a6 = 24;
          return -1073741820;
        case 0x2Cu:
          if ( Length < 0xAC )
          {
            if ( a6 )
              *a6 = 172;
            return -1073741820;
          }
          LOBYTE(v9) = 1;
          ExAcquireTimeRefreshLock(v9);
          *(_OWORD *)a4 = ExpTimeZoneInformation;
          *(_OWORD *)(a4 + 16) = *((_OWORD *)&ExpTimeZoneInformation + 1);
          *(_OWORD *)(a4 + 32) = *((_OWORD *)&ExpTimeZoneInformation + 2);
          *(_OWORD *)(a4 + 48) = *((_OWORD *)&ExpTimeZoneInformation + 3);
          *(_OWORD *)(a4 + 64) = *((_OWORD *)&ExpTimeZoneInformation + 4);
          *(_OWORD *)(a4 + 80) = *((_OWORD *)&ExpTimeZoneInformation + 5);
          *(_OWORD *)(a4 + 96) = *((_OWORD *)&ExpTimeZoneInformation + 6);
          *(_OWORD *)(a4 + 112) = *((_OWORD *)&ExpTimeZoneInformation + 7);
          *(_OWORD *)(a4 + 128) = *((_OWORD *)&ExpTimeZoneInformation + 8);
          *(_OWORD *)(a4 + 144) = *((_OWORD *)&ExpTimeZoneInformation + 9);
          *(_QWORD *)(a4 + 160) = *((_QWORD *)&ExpTimeZoneInformation + 20);
          *(_DWORD *)(a4 + 168) = *((_DWORD *)&ExpTimeZoneInformation + 42);
          ExReleaseTimeRefreshLock();
          LODWORD(Size) = 172;
LABEL_290:
          VerifierInformation = 0;
          goto LABEL_625;
        case 0x2Du:
          SystemBasicInformation = ExpGetLookasideInformation(a4, Length, &Size);
          goto LABEL_624;
        case 0x32u:
          if ( Length == 8 )
          {
            *(_QWORD *)a4 = 0xFFFF800000000000uLL;
            goto LABEL_114;
          }
          if ( a6 )
            *a6 = 8;
          return -1073741820;
        case 0x33u:
          if ( Length >= 0x90 )
            goto LABEL_305;
          if ( a6 )
            *a6 = 144;
          return -1073741820;
        case 0x35u:
          if ( Length >= 0x10 )
          {
            v104 = *(_DWORD *)a4;
            v122 = *(volatile void **)(a4 + 8);
            v113 = *(_DWORD *)(a4 + 4);
            ProbeForWrite(v122, v113, 4u);
            SystemBasicInformation = ExpGetProcessInformation(
                                       (_DWORD)v122,
                                       v113,
                                       (unsigned int)&Size,
                                       (unsigned int)&v104,
                                       5);
            goto LABEL_624;
          }
          if ( a6 )
            *a6 = 16;
          return -1073741820;
        case 0x37u:
          SystemBasicInformation = ExpQueryNumaProcessorMap(a4, Length, &Size, v12);
          goto LABEL_624;
        case 0x38u:
          SystemBasicInformation = PfSnQueryPrefetcherInformation(56LL, a4, Length, v10, &Size);
          goto LABEL_624;
        case 0x3Au:
          if ( Length >= 4 )
          {
            *(_DWORD *)a4 = KeGetRecommendedSharedDataAlignment();
            goto LABEL_161;
          }
          if ( a6 )
            *a6 = 4;
          return -1073741820;
        case 0x3Bu:
          if ( Length != 4 )
          {
            if ( a6 )
              *a6 = 4;
            return -1073741820;
          }
          if ( MEMORY[0xFFFFF780000002E0] == -1 )
          {
            MEMORY[0xFFFFF780000002E0] = 0;
            result = ExpReadComPlusPackage();
            VerifierInformation = result;
            if ( result < 0 )
              return result;
          }
          else
          {
            VerifierInformation = HIDWORD(Size);
          }
          *(_DWORD *)a4 = MEMORY[0xFFFFF780000002E0];
          LODWORD(Size) = 4;
          goto LABEL_625;
        case 0x3Cu:
          SystemBasicInformation = ExpQueryNumaAvailableMemory(a4, Length, &Size, v12);
          goto LABEL_624;
        case 0x3Du:
          LODWORD(Size) = 80 * v12;
          if ( Length < 80 * (int)v12 )
            goto LABEL_102;
          while ( (unsigned int)v8 < (unsigned int)v12 )
          {
            ProcNumber.Group = v13;
            ProcNumber.Number = v8;
            ProcNumber.Reserved = 0;
            v41 = KiProcessorBlock[KeGetProcessorIndexFromNumber(&ProcNumber)];
            PoGetPerfStateAndParkingInfo(&ProcNumber, Src, 0LL, &v128);
            memset((void *)a4, 0, 0x50uLL);
            *(_QWORD *)(a4 + 40) = KeMaximumIncrement
                                 * (unsigned __int64)(unsigned int)(*(_DWORD *)(v41 + 23428) + *(_DWORD *)(v41 + 23432));
            *(_QWORD *)(a4 + 48) = KeMaximumIncrement
                                 * (unsigned __int64)*(unsigned int *)(*(_QWORD *)(v41 + 24) + 652LL);
            if ( BYTE12(Src[1]) )
            {
              *(_BYTE *)a4 = BYTE8(Src[0]);
              *(_BYTE *)(a4 + 7) = BYTE12(Src[0]);
              *(_BYTE *)(a4 + 8) = Src[1];
              *(_DWORD *)(a4 + 12) = 1;
            }
            *(_QWORD *)(a4 + 72) = v128;
            a4 += 80LL;
            v109 = (_QWORD *)a4;
            LODWORD(v8) = v8 + 1;
            LODWORD(v12) = v105;
            v13 = v99;
          }
          goto LABEL_60;
        case 0x3Eu:
          if ( Length != 64 )
          {
            if ( a6 )
              *a6 = 64;
            return -1073741820;
          }
          SystemBasicInformation = ExpGetSystemEmulationBasicInformation(a4);
LABEL_623:
          LODWORD(Size) = 64;
          goto LABEL_624;
        case 0x3Fu:
          if ( Length >= 0xC )
          {
            SystemBasicInformation = ExpGetSystemEmulationProcessorInformation(a4);
            LODWORD(Size) = 12;
            goto LABEL_624;
          }
          if ( a6 )
            *a6 = 12;
          return -1073741820;
        case 0x40u:
          if ( Length < 0x38 )
          {
            if ( a6 )
              *a6 = 56;
            return -1073741820;
          }
          if ( (a4 & 7) != 0 )
            return -2147483646;
          if ( !(unsigned int)ExIsRestrictedCaller(v10) )
          {
            SystemBasicInformation = ExpGetHandleInformationEx(a4, Length, &Size);
            goto LABEL_624;
          }
          return -1073741790;
        case 0x41u:
          if ( Length < 4 )
          {
            if ( a6 )
              *a6 = 4;
            return -1073741820;
          }
          if ( (_DWORD)v12 )
          {
            v63 = KiProcessorBlock;
            v64 = (unsigned int)v12;
            do
            {
              LODWORD(v8) = *(_DWORD *)(*v63++ + 23740) + v8;
              --v64;
            }
            while ( v64 );
          }
          *(_DWORD *)a4 = v8;
          goto LABEL_161;
        case 0x42u:
          if ( Length < 0x20 )
          {
            if ( a6 )
              *a6 = 32;
            return -1073741820;
          }
          if ( (unsigned int)ExIsRestrictedCaller(v10) )
            return -1073741790;
          SystemBasicInformation = ExGetBigPoolInfo((_DWORD *)a4, Length, 1, (unsigned int *)&Size);
          goto LABEL_624;
        case 0x43u:
          if ( Length < 0x10 )
          {
            if ( a6 )
              *a6 = 16;
            return -1073741820;
          }
          v104 = *(_DWORD *)a4;
          v122 = *(volatile void **)(a4 + 8);
          v51 = *(unsigned int *)(a4 + 4);
          v113 = *(_DWORD *)(a4 + 4);
          if ( ((unsigned __int8)v122 & 7) != 0 )
            return -2147483646;
          SystemBasicInformation = ExGetSessionPoolTagInformation(v122, v51, &Size, &v104);
          goto LABEL_624;
        case 0x44u:
          if ( Length < 0x20 )
          {
            if ( a6 )
              *a6 = 32;
            return -1073741820;
          }
          v104 = *(_DWORD *)(a4 + 8);
          if ( (a4 & 7) != 0 )
            return -2147483646;
          SystemBasicInformation = MmGetSessionMappedViewInformation(a4, Length, &Size, &v104);
          goto LABEL_624;
        case 0x45u:
          goto LABEL_415;
        case 0x46u:
          if ( Length == 4 )
          {
            *(_DWORD *)a4 = ObpObjectSecurityMode;
            goto LABEL_161;
          }
          if ( a6 )
            *a6 = 4;
          return -1073741820;
        case 0x48u:
          if ( Length != 8 )
            return -1073741811;
          v109 = (_QWORD *)a4;
          v65 = v14 - 7;
          if ( v65 )
          {
            if ( v65 != 1 )
              return -1073741637;
            *(_DWORD *)a4 = 8;
            *(_DWORD *)(a4 + 4) = (unsigned __int8)off_140424610[0]();
          }
          else
          {
            *(_DWORD *)a4 = 7;
            LOBYTE(v8) = off_140424618[0] != xKdEnumerateDebuggingDevices;
            *(_DWORD *)(a4 + 4) = v8;
          }
          goto LABEL_114;
        case 0x49u:
          VerifierInformation = KeBuildLogicalProcessorSystemInformation(v13, a4, Length, &Size);
          HIDWORD(Size) = VerifierInformation;
          goto LABEL_625;
        case 0x4Cu:
          SystemBasicInformation = ExpGetSystemFirmwareTableInformation((void *)a4);
          goto LABEL_624;
        case 0x4Du:
          if ( (unsigned int)ExIsRestrictedCaller(v10) )
            return -1073741790;
          KeEnterCriticalRegion();
          ExAcquireResourceExclusiveLite(&PsLoadedModuleResource, 1u);
          v47 = ExpQueryModuleInformationEx(&PsLoadedModuleList, a4, Length, &Size);
LABEL_169:
          VerifierInformation = v47;
          ExReleaseResourceLite(&PsLoadedModuleResource);
          KeLeaveCriticalRegion();
          goto LABEL_625;
        case 0x4Fu:
          SystemBasicInformation = PfQuerySuperfetchInformation(79, a4, Length, v10, (__int64)&Size);
          goto LABEL_624;
        case 0x50u:
          SystemBasicInformation = MmQueryMemoryListInformation(
                                     (ULONG_PTR **)0xFFFFFFFFFFFFFFFFLL,
                                     (_OWORD *)a4,
                                     Length,
                                     v10,
                                     &Size);
          goto LABEL_624;
        case 0x53u:
          v68 = 8 * v12;
          LODWORD(Size) = 8 * v12;
          if ( Length < 8 )
            goto LABEL_379;
          v69 = Length >> 3;
          if ( Length >= v68 )
            v69 = v12;
          VerifierInformation = Length < v68 ? 0xC0000004 : 0;
          v109 = (_QWORD *)a4;
          KeFlushProcessWriteBuffers(1);
          for ( j = v99; ; j = v96 )
          {
            v100 = v8;
            if ( (unsigned int)v8 >= v69 )
              break;
            ProcNumber.Group = j;
            ProcNumber.Number = v8;
            ProcNumber.Reserved = 0;
            v71 = *(_QWORD *)(*(_QWORD *)(KiProcessorBlock[KeGetProcessorIndexFromNumber(&ProcNumber)] + 24) + 72LL);
            v72 = v109;
            *v109 = v71;
            v109 = v72 + 1;
            LODWORD(v8) = v100 + 1;
          }
          goto LABEL_625;
        case 0x56u:
          SystemBasicInformation = ObQueryRefTraceInformation((void *)a4, Length);
          goto LABEL_624;
        case 0x57u:
          LODWORD(Size) = 8;
          if ( Length == 8 )
          {
            *(_DWORD *)a4 = MmSpecialPoolTag;
            LOBYTE(v8) = MmSpecialPoolCatchOverruns != 0;
            *(_DWORD *)(a4 + 4) = v8;
            VerifierInformation = HIDWORD(Size);
          }
          else
          {
            VerifierInformation = -1073741820;
          }
          goto LABEL_625;
        case 0x58u:
          LODWORD(Size) = 24;
          if ( Length != 24 )
          {
            VerifierInformation = -1073741820;
            goto LABEL_625;
          }
          *(_OWORD *)ProcessId = *(_OWORD *)a4;
          v121 = *(_QWORD *)(a4 + 16);
          if ( LOWORD(ProcessId[1]) || (BYTE2(ProcessId[1]) & 1) != 0 )
            return -1073741811;
          if ( v10 && WORD1(ProcessId[1]) )
          {
            if ( (v121 & 1) != 0 )
              ExRaiseDatatypeMisalignment();
            v44 = v121 + WORD1(ProcessId[1]);
            if ( v44 > 0x7FFFFFFF0000LL || v44 < v121 )
              MEMORY[0x7FFFFFFF0000] = 0;
          }
          CurrentThread = KeGetCurrentThread();
          v111 = WORD1(ProcessId[1]);
          KeEnterCriticalRegionThread((__int64)CurrentThread);
          VerifierInformation = PsLookupProcessByProcessId(ProcessId[0], &Process);
          if ( VerifierInformation < 0 )
          {
            KeLeaveCriticalRegionThread((__int64)CurrentThread);
            goto LABEL_141;
          }
          VerifierInformation = PsQueryFullProcessImageName(Process, a4 + 8, v121, &v111);
          ObfDereferenceObjectWithTag(Process, 0x746C6644u);
          KeLeaveCriticalRegionThread((__int64)CurrentThread);
          if ( VerifierInformation == -1073741820 )
            *(_WORD *)(a4 + 10) = v111;
          goto LABEL_625;
        case 0x5Au:
          LODWORD(Size) = 32;
          if ( Length < 0x14 )
          {
            if ( a6 )
              *a6 = 32;
            return -1073741820;
          }
          *(_OWORD *)a4 = ExpBootEnvironmentInformation;
          *(_DWORD *)(a4 + 16) = dword_140432490;
          if ( Length < (unsigned int)Size )
          {
LABEL_279:
            LODWORD(Size) = 20;
            VerifierInformation = HIDWORD(Size);
          }
          else
          {
            *(_QWORD *)(a4 + 24) = qword_140432498;
            VerifierInformation = HIDWORD(Size);
          }
          goto LABEL_625;
        case 0x5Bu:
          SystemBasicInformation = HvlQueryEnlightenmentInfo(a4, Length, v10, &Size);
          goto LABEL_624;
        case 0x5Cu:
          if ( Length != 40 )
          {
            if ( a6 )
              *a6 = 40;
            return -1073741820;
          }
          VerifierInformation = VfGetVerifierInformationEx(a4);
          if ( VerifierInformation >= 0 )
            LODWORD(v8) = 40;
          LODWORD(Size) = v8;
          goto LABEL_625;
        case 0x5Fu:
          if ( !v10 || !SeSinglePrivilegeCheck(SeDebugPrivilege, v10) )
            return -1073741790;
          if ( Length >= 0x40 )
          {
            SystemBasicInformation = ExpCovQueryInformation(a4, Length, &Size);
            goto LABEL_624;
          }
          if ( a6 )
            *a6 = 64;
          return -1073741820;
        case 0x62u:
          SystemBasicInformation = IoQuerySystemDeviceName(98LL, a4, Length, &Size);
          goto LABEL_624;
        case 0x63u:
          SystemBasicInformation = IoQuerySystemDeviceName(99LL, a4, Length, &Size);
          goto LABEL_624;
        case 0x64u:
          LOWORD(v133) = v13;
          GroupAffinity = KeQueryGroupAffinity(v13);
          v37 = (0x101010101010101LL
               * ((((GroupAffinity - ((GroupAffinity >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                 + (((GroupAffinity - ((GroupAffinity >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                 + ((((GroupAffinity - ((GroupAffinity >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                   + (((GroupAffinity - ((GroupAffinity >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
          VerifierInformation = PpmCapturePerformanceDistribution(
                                  0LL,
                                  0,
                                  (unsigned int)((0x101010101010101LL
                                                * ((((GroupAffinity - ((GroupAffinity >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                                  + (((GroupAffinity - ((GroupAffinity >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                                                  + ((((GroupAffinity - ((GroupAffinity >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                                    + (((GroupAffinity - ((GroupAffinity >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24,
                                  (__int64)&GroupAffinity,
                                  (int *)NumberOfBytes);
          if ( VerifierInformation != -1073741820 )
            goto LABEL_625;
          v38 = NumberOfBytes[0];
          if ( LODWORD(NumberOfBytes[0]) > Length )
          {
            VerifierInformation = -1073741820;
            goto LABEL_95;
          }
          PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, LODWORD(NumberOfBytes[0]), 0x744D5050u);
          v40 = PoolWithTag;
          v102 = (LOGICAL_PROCESSOR_RELATIONSHIP *)PoolWithTag;
          if ( PoolWithTag )
          {
            memset(PoolWithTag, 0, LODWORD(NumberOfBytes[0]));
            VerifierInformation = PpmCapturePerformanceDistribution(
                                    v40,
                                    NumberOfBytes[0],
                                    v37,
                                    (__int64)&GroupAffinity,
                                    (int *)&Size);
            if ( VerifierInformation >= 0 )
              memmove((void *)a4, v40, (unsigned int)Size);
            ExFreePoolWithTag(v40, 0x744D5050u);
          }
          else
          {
            VerifierInformation = -1073741670;
          }
          goto LABEL_625;
        case 0x65u:
          SystemBasicInformation = ExpQueryNumaProximityNode(a4, Length, &Size, v12);
          goto LABEL_624;
        case 0x66u:
          if ( Length >= 0x1B0 )
          {
            LOBYTE(v9) = 1;
            ExAcquireTimeRefreshLock(v9);
            v61 = &ExpTimeZoneInformation;
            v62 = 3LL;
            do
            {
              *(_OWORD *)a4 = *v61;
              *(_OWORD *)(a4 + 16) = v61[1];
              *(_OWORD *)(a4 + 32) = v61[2];
              *(_OWORD *)(a4 + 48) = v61[3];
              *(_OWORD *)(a4 + 64) = v61[4];
              *(_OWORD *)(a4 + 80) = v61[5];
              *(_OWORD *)(a4 + 96) = v61[6];
              a4 += 128LL;
              *(_OWORD *)(a4 - 16) = v61[7];
              v61 += 8;
              --v62;
            }
            while ( v62 );
            *(_OWORD *)a4 = *v61;
            *(_OWORD *)(a4 + 16) = v61[1];
            *(_OWORD *)(a4 + 32) = v61[2];
            ExReleaseTimeRefreshLock();
            LODWORD(Size) = 432;
            VerifierInformation = 0;
            goto LABEL_625;
          }
          if ( a6 )
            *a6 = 432;
          return -1073741820;
        case 0x67u:
          SystemBasicInformation = SeCodeIntegrityQueryInformation(a4, Length, &Size, v12);
          goto LABEL_624;
        case 0x69u:
          VerifierInformation = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, SIZE_T *))off_140426798[0])(
                                  23LL,
                                  0LL,
                                  0LL,
                                  NumberOfBytes);
          if ( VerifierInformation != -1073741820 )
            goto LABEL_415;
          v77 = LODWORD(NumberOfBytes[0]);
          if ( Length < LODWORD(NumberOfBytes[0]) || !a4 )
          {
            LODWORD(Size) = NumberOfBytes[0];
            goto LABEL_625;
          }
          if ( v10 )
          {
            PoolWithQuotaTag = (LOGICAL_PROCESSOR_RELATIONSHIP *)ExAllocatePoolWithQuotaTag(
                                                                   (POOL_TYPE)9,
                                                                   LODWORD(NumberOfBytes[0]),
                                                                   0x6F666E49u);
            v102 = PoolWithQuotaTag;
            if ( !PoolWithQuotaTag )
            {
              VerifierInformation = -1073741670;
              goto LABEL_625;
            }
            v77 = LODWORD(NumberOfBytes[0]);
          }
          else
          {
            PoolWithQuotaTag = (LOGICAL_PROCESSOR_RELATIONSHIP *)a4;
            v102 = (LOGICAL_PROCESSOR_RELATIONSHIP *)a4;
          }
          v79 = ((__int64 (__fastcall *)(__int64, __int64, LOGICAL_PROCESSOR_RELATIONSHIP *, size_t *))off_140426798[0])(
                  23LL,
                  v77,
                  PoolWithQuotaTag,
                  &Size);
          VerifierInformation = v79;
          if ( !v10 )
            goto LABEL_625;
          if ( v79 < 0 )
            goto LABEL_426;
          goto LABEL_425;
        case 0x6Au:
          VerifierInformation = -1073741821;
          goto LABEL_625;
        case 0x6Bu:
          LODWORD(Size) = Length;
          VerifierInformation = KeQueryLogicalProcessorRelationship(
                                  0LL,
                                  RelationshipType,
                                  (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)a4,
                                  (PULONG)&Size);
          HIDWORD(Size) = VerifierInformation;
          goto LABEL_625;
        case 0x6Cu:
          v75 = 8 * v12;
          LODWORD(Size) = 8 * v12;
          if ( Length < 8 )
            goto LABEL_379;
          v76 = Length >> 3;
          if ( Length >= v75 )
            v76 = v12;
          VerifierInformation = Length < v75 ? 0xC0000004 : 0;
          while ( (unsigned int)v8 < v76 )
          {
            ProcNumber.Group = v13;
            ProcNumber.Number = v8;
            ProcNumber.Reserved = 0;
            *(_QWORD *)a4 = *(_QWORD *)(KiProcessorBlock[KeGetProcessorIndexFromNumber(&ProcNumber)] + 23608);
            a4 += 8LL;
            v109 = (_QWORD *)a4;
            LODWORD(v8) = v8 + 1;
            v13 = v99;
          }
          goto LABEL_625;
        case 0x6Du:
          SystemBasicInformation = SmQueryStoreInformation(109LL, a4, Length, v10, &Size);
          goto LABEL_624;
        case 0x70u:
          SystemBasicInformation = IoQueryVhdBootInformation(112LL, a4, Length, &Size);
          goto LABEL_624;
        case 0x71u:
          SystemBasicInformation = PsQueryCpuQuotaInformation((_DWORD *)a4, Length, v10, &Size);
          goto LABEL_624;
        case 0x73u:
          if ( v18 )
          {
            VerifierInformation = -1073741820;
          }
          else
          {
            LODWORD(Size) = 8;
            if ( Length >= 8 )
            {
              *(_DWORD *)a4 = DbgkErrorPortStartTimeout;
              *(_DWORD *)(a4 + 4) = DbgkErrorPortCommTimeout;
              VerifierInformation = HIDWORD(Size);
            }
            else
            {
              VerifierInformation = -1073741820;
            }
          }
          goto LABEL_625;
        case 0x74u:
          SystemBasicInformation = IoQueryLowPriorityIoInformation(116LL, a4, Length, &Size);
          goto LABEL_624;
        case 0x75u:
          LODWORD(Size) = 1096;
          if ( Length != 1096 )
          {
            VerifierInformation = -1073741820;
            goto LABEL_625;
          }
          if ( v10 )
            return -1073741790;
          SystemBasicInformation = ExQueryBootEntropyInformation(a4);
          goto LABEL_624;
        case 0x76u:
          if ( Length >= 0x110 )
          {
LABEL_305:
            SystemBasicInformation = VfGetVerifierInformation((void *)a4, Length);
            goto LABEL_624;
          }
          if ( a6 )
            *a6 = 272;
          return -1073741820;
        case 0x79u:
          LODWORD(Size) = 4 * (unsigned __int16)KeNumberNodes;
          if ( Length >= (unsigned int)Size )
          {
            v100 = 0;
            v66 = 0;
            v67 = v106;
            while ( v66 < (unsigned __int16)KeNumberNodes )
            {
              *(_DWORD *)(a4 + 4LL * v66++) = *((_DWORD *)KeNodeDistance
                                              + (unsigned int)v8
                                              + v67 * (unsigned __int16)KeNumberNodes);
              LODWORD(v8) = v66;
              v100 = v66;
            }
            VerifierInformation = HIDWORD(Size);
          }
          else
          {
            VerifierInformation = -1073741820;
          }
          goto LABEL_625;
        case 0x7Au:
          LODWORD(Size) = 8;
          if ( Length != 8 || !a4 )
            goto LABEL_102;
          PoolWithQuotaTag = (LOGICAL_PROCESSOR_RELATIONSHIP *)ExAllocatePoolWithQuotaTag(
                                                                 (POOL_TYPE)9,
                                                                 8uLL,
                                                                 0x6F666E49u);
          v109 = PoolWithQuotaTag;
          if ( !PoolWithQuotaTag )
          {
            VerifierInformation = -1073741670;
            goto LABEL_625;
          }
          VerifierInformation = ((__int64 (__fastcall *)(__int64, __int64, LOGICAL_PROCESSOR_RELATIONSHIP *, size_t *))off_140426798[0])(
                                  26LL,
                                  8LL,
                                  PoolWithQuotaTag,
                                  &Size);
          if ( VerifierInformation >= 0 )
          {
            *(LOGICAL_PROCESSOR_RELATIONSHIP *)a4 = *PoolWithQuotaTag;
            *(_DWORD *)(a4 + 4) ^= (*(_DWORD *)(a4 + 4) ^ *((_DWORD *)PoolWithQuotaTag + 1)) & 1;
            v80 = *(_DWORD *)(a4 + 4) ^ (*((_DWORD *)PoolWithQuotaTag + 1) ^ *(_DWORD *)(a4 + 4)) & 2;
            *(_DWORD *)(a4 + 4) = v80;
            *(_DWORD *)(a4 + 4) = v80 ^ (*((_DWORD *)PoolWithQuotaTag + 1) ^ v80) & 4;
          }
          goto LABEL_426;
        case 0x7Bu:
          if ( Length != 32 )
          {
            if ( a6 )
              *a6 = 32;
            return -1073741820;
          }
          CurrentProcess = PsGetCurrentProcess();
          ProcessPartitionId = MmGetProcessPartitionId((__int64)CurrentProcess);
          *(_QWORD *)&Src[0] = MmGetAvailablePages(ProcessPartitionId);
          *((_QWORD *)&Src[0] + 1) = MmGetTotalCommittedPages(ProcessPartitionId);
          *(_QWORD *)&Src[1] = MmGetTotalCommitLimit(ProcessPartitionId);
          *((_QWORD *)&Src[1] + 1) = MmGetPeakCommitment(ProcessPartitionId);
          v31 = *((_QWORD *)&Src[1] + 1);
          if ( *((_QWORD *)&Src[1] + 1) < *((_QWORD *)&Src[0] + 1) )
            v31 = *((_QWORD *)&Src[0] + 1);
          *((_QWORD *)&Src[1] + 1) = v31;
          *(_OWORD *)a4 = Src[0];
          *(_OWORD *)(a4 + 16) = Src[1];
          LODWORD(Size) = 32;
          VerifierInformation = HIDWORD(Size);
          goto LABEL_625;
        case 0x7Cu:
          LODWORD(Size) = 12;
          if ( Length >= 4 )
          {
            v126 = *(_DWORD *)a4;
            if ( v126 == 1 )
            {
              if ( Length >= 0xC )
              {
                *(_DWORD *)(a4 + 8) = 0;
                *(_DWORD *)(a4 + 4) = 0;
                *(_DWORD *)(a4 + 8) |= 1u;
                *(_DWORD *)(a4 + 4) |= 1u;
                if ( MEMORY[0xFFFFF780000003C6] )
                  *(_DWORD *)(a4 + 4) &= ~1u;
                VerifierInformation = HIDWORD(Size);
              }
              else
              {
                VerifierInformation = -1073741820;
              }
            }
            else
            {
              VerifierInformation = -1073741637;
            }
          }
          else
          {
            VerifierInformation = -1073741820;
          }
          goto LABEL_625;
        case 0x7Du:
          if ( Length < 0x10 )
          {
            if ( a6 )
              *a6 = 16;
            return -1073741820;
          }
          v104 = *(_DWORD *)a4;
          v122 = *(volatile void **)(a4 + 8);
          v52 = *(_DWORD *)(a4 + 4);
          v113 = v52;
          if ( ((unsigned __int8)v122 & 7) != 0 )
            return -2147483646;
          if ( (unsigned int)ExIsRestrictedCaller(v10) )
            return -1073741790;
          SystemBasicInformation = ExGetSessionBigPoolInformation(v122, v52, &Size, &v104);
          goto LABEL_624;
        case 0x7Eu:
          LODWORD(Size) = 32;
          if ( Length == 32 )
          {
            VerifierInformation = BgkQueryBootGraphicsInformation(0LL, Src);
            if ( VerifierInformation >= 0 )
            {
              v81 = *(_QWORD *)&Src[0];
              if ( v10 )
                v81 = 0LL;
              *(_QWORD *)&Src[0] = v81;
              memmove((void *)a4, Src, (unsigned int)Size);
            }
          }
          else
          {
            VerifierInformation = -1073741820;
          }
          goto LABEL_625;
        case 0x80u:
          if ( v18 )
          {
            VerifierInformation = -1073741820;
          }
          else
          {
            VerifierInformation = MmEnumerateBadPages(&v124);
            v84 = v124;
            if ( v124 )
              LODWORD(v8) = 8 * *(_DWORD *)v124;
            LODWORD(Size) = v8;
            if ( Length < (unsigned int)v8 )
              VerifierInformation = -1073741820;
            if ( v124 )
            {
              if ( VerifierInformation >= 0 )
                memmove((void *)a4, (char *)v124 + 8, (unsigned int)v8);
              ExFreePoolWithTag(v84, 0);
            }
          }
          goto LABEL_625;
        case 0x85u:
          if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, v10) )
            return -1073741727;
          SystemBasicInformation = ExpGetSystemPlatformBinary(a4, Length, v10);
          goto LABEL_624;
        case 0x86u:
          LODWORD(Size) = 32;
          if ( Length != 32 )
          {
            VerifierInformation = -1073741820;
            goto LABEL_625;
          }
          SystemBasicInformation = ExHandleSPCall2(v10, a4);
          goto LABEL_624;
        case 0x87u:
          LODWORD(Size) = 8;
          if ( Length >= 8 )
          {
            if ( (unsigned int)HvlQueryActiveProcessors(&v116, 0LL) )
            {
              VerifierInformation = -1073741637;
            }
            else
            {
              VerifierInformation = HvlQueryProcessorTopologyCount(0LL, &v115);
              if ( VerifierInformation )
              {
                VerifierInformation = -1073741637;
              }
              else
              {
                *(_DWORD *)a4 = v116;
                *(_DWORD *)(a4 + 4) = v115;
              }
            }
          }
          else
          {
            VerifierInformation = -1073741820;
          }
          goto LABEL_625;
        case 0x88u:
        case 0x89u:
          if ( Length == 48 )
            return ExpGetDeviceDataInformation(v107, a4, 48LL, v12);
          if ( a6 )
            *a6 = 48;
          return -1073741820;
        case 0x8Au:
          SystemBasicInformation = ExpQueryMemoryTopologyInformation((void *)a4);
          goto LABEL_624;
        case 0x8Bu:
          SystemBasicInformation = ExpQueryChannelInformation((void *)a4);
          goto LABEL_624;
        case 0x8Cu:
          if ( a6 || Length >= 8 )
          {
            VerifierInformation = BgkQueryBootGraphicsInformation(2LL, &Size);
            if ( VerifierInformation >= 0 )
            {
              if ( (_DWORD)Size )
              {
                if ( Length >= (unsigned int)Size )
                {
                  VerifierInformation = BgkQueryBootGraphicsInformation(1LL, &P);
                  if ( VerifierInformation >= 0 )
                  {
                    v82 = P;
                    if ( P )
                    {
                      memmove((void *)a4, P, (unsigned int)Size);
                      ExFreePoolWithTag(v82, 0x4B494742u);
                    }
                    else
                    {
                      VerifierInformation = -1073741670;
                    }
                  }
                }
                else
                {
                  VerifierInformation = -1073741789;
                }
              }
              else
              {
                VerifierInformation = -1073741670;
              }
            }
          }
          else
          {
            VerifierInformation = -1073741811;
          }
          goto LABEL_625;
        case 0x8Fu:
        case 0x91u:
        case 0xABu:
        case 0xB3u:
          SystemBasicInformation = SeSecureBootQueryInformation(v7, a4, Length, &Size);
          goto LABEL_624;
        case 0x93u:
          SystemBasicInformation = ExpQueryPortableWorkspaceEfiLauncherInformation(a4, Length, &Size, v12);
          goto LABEL_624;
        case 0x95u:
          if ( Length >= 3 )
          {
            *(_BYTE *)a4 = KdpBootedNodebug == 0;
            *(_BYTE *)(a4 + 1) = (_BYTE)KdDebuggerEnabled;
            *(_BYTE *)(a4 + 2) = (_BYTE)KdDebuggerNotPresent == 0;
            LODWORD(Size) = 3;
            VerifierInformation = HIDWORD(Size);
            goto LABEL_625;
          }
          if ( a6 )
            *a6 = 3;
          return -1073741820;
        case 0x96u:
          if ( !ExBootLoaderMetadata )
          {
            LODWORD(Size) = 0;
            VerifierInformation = HIDWORD(Size);
            goto LABEL_625;
          }
          v83 = *(_DWORD *)ExBootLoaderMetadata;
          LODWORD(Size) = *(_DWORD *)ExBootLoaderMetadata;
          if ( !a4 )
            goto LABEL_60;
          if ( Length < v83 )
          {
            VerifierInformation = -1073741820;
            goto LABEL_625;
          }
          if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, v10) )
            return -1073741727;
          memmove((void *)a4, (const void *)(ExBootLoaderMetadata + 4), (unsigned int)Size);
          VerifierInformation = HIDWORD(Size);
          goto LABEL_625;
        case 0x97u:
          LODWORD(Size) = 4;
          if ( Length >= 4 )
          {
            *(_DWORD *)a4 = ExSoftRebootFlags;
            VerifierInformation = HIDWORD(Size);
            goto LABEL_625;
          }
          if ( a6 )
            *a6 = 4;
          return -1073741820;
        case 0x99u:
          if ( v18 )
          {
            VerifierInformation = -1073741820;
            goto LABEL_625;
          }
          LODWORD(Size) = 32;
          if ( Length >= 0x20 )
          {
            *(_QWORD *)a4 = PoOffCrashConfigTable;
            *(_DWORD *)(a4 + 8) = DWORD2(PoOffCrashConfigTable);
            *(_QWORD *)(a4 + 16) = xmmword_140444DD0;
            *(_DWORD *)(a4 + 24) = DWORD2(xmmword_140444DD0);
LABEL_517:
            VerifierInformation = HIDWORD(Size);
            goto LABEL_625;
          }
          if ( Length >= 0xC )
          {
            LODWORD(Size) = 12;
            *(_QWORD *)a4 = PoOffCrashConfigTable;
            *(_DWORD *)(a4 + 8) = DWORD2(PoOffCrashConfigTable);
            goto LABEL_517;
          }
          VerifierInformation = -1073741820;
          HIDWORD(Size) = -1073741820;
LABEL_625:
          if ( a6 )
            *a6 = Size;
LABEL_141:
          result = VerifierInformation;
          break;
        case 0x9Au:
          if ( Length >= 0x20 )
          {
            VerifierInformation = ExpGetSystemProcessorFeaturesInformation(a4);
            LODWORD(Size) = 32;
            goto LABEL_625;
          }
          if ( a6 )
            *a6 = 32;
          return -1073741820;
        case 0x9Cu:
          LODWORD(Size) = 128;
          if ( Length == 128 )
          {
            VerifierInformation = BgkQueryBootGraphicsInformation(3LL, Src);
            if ( VerifierInformation >= 0 )
              memmove((void *)a4, Src, (unsigned int)Size);
          }
          else
          {
            VerifierInformation = -1073741820;
          }
          goto LABEL_625;
        case 0x9Du:
          LODWORD(Size) = WORD1(qword_1404324A8) + 24;
          if ( Length >= (unsigned int)Size )
          {
            v85 = (void *)(a4 + 24);
            *(_QWORD *)a4 = 0LL;
            *(_QWORD *)(a4 + 8) = 0LL;
            *(_QWORD *)(a4 + 16) = 0LL;
            *(_DWORD *)a4 = ExpManufacturingInformation;
            *(_DWORD *)(a4 + 8) = qword_1404324A8;
            if ( (_WORD)qword_1404324A8 )
            {
              *(_QWORD *)(a4 + 16) = v85;
              memmove(v85, qword_1404324B0, WORD1(qword_1404324A8));
            }
            VerifierInformation = HIDWORD(Size);
          }
          else
          {
            VerifierInformation = -1073741820;
          }
          goto LABEL_625;
        case 0x9Eu:
          LODWORD(Size) = 1;
          if ( Length )
          {
            *(_BYTE *)a4 = PoEnergyEstimationEnabled();
            VerifierInformation = HIDWORD(Size);
            goto LABEL_625;
          }
          if ( a6 )
            *a6 = 1;
          goto LABEL_102;
        case 0x9Fu:
          SystemBasicInformation = HvlQueryDetailInfo(a4, Length, v10, &Size);
          goto LABEL_624;
        case 0xA0u:
          v86 = (_DWORD)v12 << 6;
          LODWORD(Size) = (_DWORD)v12 << 6;
          if ( Length < 0x40 )
            goto LABEL_379;
          v87 = Length >> 6;
          if ( Length >= v86 )
            v87 = v12;
          VerifierInformation = Length < v86 ? 0xC0000004 : 0;
          while ( (unsigned int)v8 < v87 )
          {
            ProcNumber.Group = v13;
            ProcNumber.Number = v8;
            ProcNumber.Reserved = 0;
            v88 = KiProcessorBlock[KeGetProcessorIndexFromNumber(&ProcNumber)];
            KeQueryCycleTimeStatsProcessor(v88, (_QWORD *)a4);
            a4 += 64LL;
            v109 = (_QWORD *)a4;
            LODWORD(v8) = v8 + 1;
            v13 = v99;
          }
          goto LABEL_625;
        case 0xA2u:
          SystemBasicInformation = SeQueryTrustedPlatformModuleInformation((int *)a4, Length, &Size);
          goto LABEL_624;
        case 0xA3u:
          if ( Length )
          {
            *(_BYTE *)a4 = KdIgnoreUmExceptions;
            LODWORD(Size) = 1;
            VerifierInformation = HIDWORD(Size);
            goto LABEL_625;
          }
          if ( a6 )
            *a6 = 1;
          return -1073741820;
        case 0xA4u:
        case 0xACu:
        case 0xBDu:
        case 0xBEu:
        case 0xC7u:
        case 0xD1u:
          SystemBasicInformation = SeCodeIntegrityQueryPolicyInformation(
                                     v7,
                                     (_DWORD)v102,
                                     v18,
                                     a4,
                                     Length,
                                     (__int64)&Size);
          goto LABEL_624;
        case 0xA5u:
          LODWORD(Size) = 16;
          if ( Length != 16 )
          {
            if ( a6 )
              *a6 = 16;
            goto LABEL_102;
          }
          LOBYTE(Src[0]) ^= (LOBYTE(Src[0]) ^ (16 * ExpFirmwarePageProtectionSupported)) & 0x10;
          if ( VslIsSecureKernelRunning() )
          {
            v97[0] = 0;
            LOBYTE(Src[0]) |= 1u;
            NestedPageProtectionFlags = VslGetNestedPageProtectionFlags();
            v90 = Src[0];
            if ( (NestedPageProtectionFlags & 2) != 0 )
            {
              v90 = LOBYTE(Src[0]) | 2;
              LOBYTE(Src[0]) |= 2u;
            }
            if ( (NestedPageProtectionFlags & 0x20) != 0 )
            {
              v90 |= 4u;
              LOBYTE(Src[0]) = v90;
            }
            if ( (NestedPageProtectionFlags & 0x10) != 0 )
              LOBYTE(Src[0]) = v90 | 8;
            if ( (NestedPageProtectionFlags & 0x200) != 0 )
              BYTE1(Src[0]) |= 2u;
            if ( v118 )
            {
              VerifierInformation = VslIsTrustletRunning(v118, v97);
              BYTE1(Src[0]) ^= (v97[0] ^ BYTE1(Src[0])) & 1;
            }
            else
            {
              VerifierInformation = HIDWORD(Size);
            }
            LOBYTE(Src[0]) ^= (LOBYTE(Src[0]) ^ (32 * ExpIsIumEncryptionKeyAvailable())) & 0x20;
          }
          else
          {
            VerifierInformation = HIDWORD(Size);
          }
          *(_OWORD *)a4 = Src[0];
          goto LABEL_625;
        case 0xA6u:
          SystemBasicInformation = SeQueryHSTIResults(a4, Length, &Size, v12);
          goto LABEL_624;
        case 0xA7u:
          SystemBasicInformation = ExpQuerySingleModuleInformation(a4, Length, v10, &Size);
          goto LABEL_624;
        case 0xA9u:
          SystemBasicInformation = HvlQueryVsmProtectionInfo(a4, Length, &Size, v12);
          goto LABEL_624;
        case 0xADu:
          result = ExCpuSetResourceManagerAccessCheck(v10);
          if ( result < 0 )
            return result;
          LODWORD(Size) = 168;
          if ( Length != 168 )
          {
            VerifierInformation = -1073741820;
            goto LABEL_625;
          }
          SystemBasicInformation = KeGetAffinitizedInterruptsInfo((_WORD *)a4);
          goto LABEL_624;
        case 0xAEu:
          SystemBasicInformation = PsRootSiloInformation(a4, Length, &Size, v12);
          goto LABEL_624;
        case 0xAFu:
          if ( Handle )
          {
            result = ObReferenceObjectByHandle(Handle, 0x1000u, (POBJECT_TYPE)PsProcessType, v10, &Object, 0LL);
            Process = (PEPROCESS)Object;
            if ( result < 0 )
              return result;
          }
          else
          {
            Process = 0LL;
          }
          VerifierInformation = KeQueryCpuSetInformation((void *)a4);
          if ( Process )
            ObfDereferenceObject(Process);
          goto LABEL_625;
        case 0xB2u:
          if ( !Length )
          {
            VerifierInformation = -1073741789;
            goto LABEL_625;
          }
          if ( v10 && !SeSinglePrivilegeCheck(SeSystemProfilePrivilege, v10) )
            return -1073741727;
          v91 = (LOGICAL_PROCESSOR_RELATIONSHIP *)ExAllocatePoolWithQuotaTag((POOL_TYPE)520, Length, 0x6F666E49u);
          PoolWithQuotaTag = v91;
          v102 = v91;
          if ( !v91 )
          {
            VerifierInformation = -1073741670;
            goto LABEL_625;
          }
          memset(v91, 0, Length);
          VerifierInformation = VslQuerySecureKernelProfileInformation(v125, (int)PoolWithQuotaTag, Length, &Size);
          if ( VerifierInformation >= 0 )
            goto LABEL_425;
          goto LABEL_426;
        case 0xB4u:
          SystemBasicInformation = ExpQueryInterruptSteeringInformation((_DWORD)v102, v18, a4, Length, (__int64)&Size);
          goto LABEL_624;
        case 0xB5u:
          if ( Handle )
          {
            result = ObReferenceObjectByHandle(Handle, 0x1000u, (POBJECT_TYPE)PsProcessType, v10, v130, 0LL);
            v8 = (__int64)v130[0];
            Process = (PEPROCESS)v130[0];
            if ( result < 0 )
              return result;
          }
          else
          {
            Process = 0LL;
          }
          VerifierInformation = PsWow64GetSupportedArchitectures((_DWORD *)a4, Length, (unsigned int *)&Size, v8);
          if ( Process )
            ObfDereferenceObject(Process);
          goto LABEL_625;
        case 0xB6u:
          if ( Length != 56 )
          {
            if ( a6 )
              *a6 = 56;
            return -1073741820;
          }
          v21 = PsGetCurrentProcess();
          v22 = MmGetProcessPartitionId((__int64)v21);
          *(_QWORD *)&Src[0] = *(_QWORD *)(*(_QWORD *)(qword_140465E88 + 8LL * v22) + 7888LL) << 12;
          *((_QWORD *)&Src[0] + 1) = MmGetAvailablePages(v22) << 12;
          *(_QWORD *)&Src[1] = MmGetResidentAvailablePages(v22) << 12;
          *((_QWORD *)&Src[1] + 1) = MmGetTotalCommittedPages(v22) << 12;
          *((_QWORD *)&Src[2] + 1) = MmGetTotalCommitLimit(v22) << 12;
          *(_QWORD *)&Src[3] = MmGetPeakCommitment(v22) << 12;
          *(_QWORD *)&Src[2] = MmGetSharedCommit() << 12;
          v23 = *(_QWORD *)&Src[0];
          if ( *(_QWORD *)&Src[0] < *((_QWORD *)&Src[0] + 1) )
            v23 = *((_QWORD *)&Src[0] + 1);
          *(_QWORD *)&Src[0] = v23;
          v24 = *((_QWORD *)&Src[2] + 1);
          if ( *((_QWORD *)&Src[2] + 1) < *((_QWORD *)&Src[1] + 1) )
            v24 = *((_QWORD *)&Src[1] + 1);
          *((_QWORD *)&Src[2] + 1) = v24;
          v25 = *(_QWORD *)&Src[3];
          if ( *(_QWORD *)&Src[3] < *((_QWORD *)&Src[1] + 1) )
            v25 = *((_QWORD *)&Src[1] + 1);
          *(_QWORD *)&Src[3] = v25;
          *(_OWORD *)a4 = Src[0];
          *(_OWORD *)(a4 + 16) = Src[1];
          *(_OWORD *)(a4 + 32) = Src[2];
          *(_QWORD *)(a4 + 48) = *(_QWORD *)&Src[3];
          LODWORD(Size) = 56;
LABEL_60:
          VerifierInformation = HIDWORD(Size);
          goto LABEL_625;
        case 0xB7u:
          if ( Length != 16 )
            return -1073741820;
          v130[1] = *(PVOID *)a4;
          v127 = *(_DWORD *)(a4 + 8);
          SystemBasicInformation = ExpQueryCodeIntegrityCertificateInfo();
          goto LABEL_624;
        case 0xB8u:
          if ( Length != 24 )
          {
            if ( a6 )
              *a6 = 24;
            return -1073741820;
          }
          v27 = PsGetCurrentProcess();
          v28 = MmGetProcessPartitionId((__int64)v27);
          *(_QWORD *)&Src[0] = *(_QWORD *)(*(_QWORD *)(qword_140465E88 + 8LL * v28) + 7888LL) << 12;
          *((_QWORD *)&Src[0] + 1) = MmGetLowestPhysicalPage(v28) << 12;
          *(_QWORD *)&Src[1] = (MmGetHighestPhysicalPage(v28) << 12) + 4095;
          *(_OWORD *)a4 = Src[0];
          *(_QWORD *)(a4 + 16) = *(_QWORD *)&Src[1];
LABEL_65:
          LODWORD(Size) = 24;
          VerifierInformation = HIDWORD(Size);
          goto LABEL_625;
        case 0xB9u:
          SystemBasicInformation = WbDispatchOperation((char *)a4, Length);
          goto LABEL_624;
        case 0xBAu:
          if ( !Length )
          {
            Data[0] = 1;
            return ZwFilterBootOption(FilterBootOptionOperationSetElement, 0x10200003u, 0x260000A0u, Data, 1u);
          }
          if ( a6 )
            *a6 = 0;
          return -1073741820;
        case 0xBCu:
          if ( Length != 8 )
            return -1073741820;
          VerifierInformation = PsQueryActivityModerationUserSettings(Src);
          if ( VerifierInformation >= 0 )
            *(_QWORD *)a4 = *(_QWORD *)&Src[0];
          goto LABEL_625;
        case 0xC0u:
          if ( Length >= 0x20 )
          {
            VerifierInformation = ExpGetSystemFlushInformation(a4);
            LODWORD(Size) = 32;
            goto LABEL_625;
          }
          if ( a6 )
            *a6 = 32;
          return -1073741820;
        case 0xC1u:
          v73 = 8 * KeQueryActiveGroupCount();
          LODWORD(Size) = v73;
          if ( Length >= v73 )
          {
            memset((void *)a4, 0, v73);
            v100 = 0;
            while ( (unsigned int)v8 < (unsigned __int16)KeNumberNodes )
            {
              v74 = KeNodeBlock[(unsigned int)v8];
              v96 = *(_WORD *)(v74 + 144);
              *(_QWORD *)(a4 + 8LL * v96) |= *(_QWORD *)(v74 + 16);
              LODWORD(v8) = ++v100;
            }
            VerifierInformation = HIDWORD(Size);
          }
          else
          {
LABEL_379:
            VerifierInformation = -1073741789;
          }
          goto LABEL_625;
        case 0xC3u:
          if ( Length < 8 )
          {
            if ( a6 )
              *a6 = 8;
            return -1073741820;
          }
          SystemBasicInformation = ExpGetSystemWriteConstraintInformation(a4);
          LODWORD(Size) = 8;
LABEL_624:
          VerifierInformation = SystemBasicInformation;
          goto LABEL_625;
        case 0xC4u:
          SystemBasicInformation = KeQueryKvaShadowInformation(a4, Length, &Size, v12);
          goto LABEL_624;
        case 0xC5u:
          LODWORD(Size) = 8;
          if ( Length >= 8 )
          {
            v93 = qword_140465720;
            *(_QWORD *)a4 = 0LL;
            *(_QWORD *)a4 = v93;
            VerifierInformation = HIDWORD(Size);
          }
          else
          {
            VerifierInformation = -1073741820;
          }
          goto LABEL_625;
        case 0xC6u:
          VerifierInformation = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, SIZE_T *))off_140426798[0])(
                                  34LL,
                                  0LL,
                                  0LL,
                                  NumberOfBytes);
          if ( VerifierInformation != -1073741820 )
            return -1073741637;
          v38 = NumberOfBytes[0];
          if ( Length < LODWORD(NumberOfBytes[0]) || !a4 )
          {
LABEL_95:
            LODWORD(Size) = v38;
            goto LABEL_625;
          }
          if ( v10 )
          {
            PoolWithQuotaTag = (LOGICAL_PROCESSOR_RELATIONSHIP *)ExAllocatePoolWithQuotaTag(
                                                                   (POOL_TYPE)9,
                                                                   LODWORD(NumberOfBytes[0]),
                                                                   0x6F666E49u);
            v102 = PoolWithQuotaTag;
            if ( !PoolWithQuotaTag )
            {
              VerifierInformation = -1073741670;
              goto LABEL_625;
            }
            v38 = NumberOfBytes[0];
          }
          else
          {
            PoolWithQuotaTag = (LOGICAL_PROCESSOR_RELATIONSHIP *)a4;
            v102 = (LOGICAL_PROCESSOR_RELATIONSHIP *)a4;
          }
          v92 = ((__int64 (__fastcall *)(__int64, _QWORD, LOGICAL_PROCESSOR_RELATIONSHIP *, size_t *))off_140426798[0])(
                  34LL,
                  v38,
                  PoolWithQuotaTag,
                  &Size);
          VerifierInformation = v92;
          if ( v10 )
          {
            if ( v92 >= 0 )
LABEL_425:
              memmove((void *)a4, PoolWithQuotaTag, (unsigned int)Size);
LABEL_426:
            ExFreePoolWithTag(PoolWithQuotaTag, 0x6F666E49u);
          }
          goto LABEL_625;
        case 0xC8u:
          SystemBasicInformation = IoQuerySystemDeviceName(200LL, a4, Length, &Size);
          goto LABEL_624;
        case 0xC9u:
          SystemBasicInformation = KeQuerySpeculationControlInformation(a4, Length, &Size, v12);
          goto LABEL_624;
        case 0xCAu:
          LODWORD(Size) = 1;
          if ( Length != 1 )
          {
            if ( a6 )
              *a6 = 1;
            goto LABEL_102;
          }
          VerifierInformation = ((__int64 (__fastcall *)(__int64, __int64, _OWORD *, int *))off_140426798[0])(
                                  47LL,
                                  1LL,
                                  Src,
                                  &v114);
          if ( VerifierInformation >= 0 && v114 == 1 )
          {
            v109 = (_QWORD *)a4;
            *(_BYTE *)a4 = Src[0];
          }
          else
          {
LABEL_415:
            VerifierInformation = -1073741637;
          }
          goto LABEL_625;
        case 0xCEu:
          if ( Length != 8 )
          {
            if ( a6 )
              *a6 = 8;
            return -1073741820;
          }
          *(_BYTE *)a4 = *(_BYTE *)ExLeapSecondData != 0;
          *(_DWORD *)(a4 + 4) = 0;
LABEL_114:
          LODWORD(Size) = 8;
          VerifierInformation = HIDWORD(Size);
          goto LABEL_625;
        case 0xCFu:
          if ( Length != 4 )
          {
            if ( a6 )
              *a6 = 4;
            return -1073741820;
          }
          *(_DWORD *)a4 = NtGlobalFlag2;
LABEL_161:
          LODWORD(Size) = 4;
          VerifierInformation = HIDWORD(Size);
          goto LABEL_625;
        case 0xD0u:
          SystemBasicInformation = SeSecurityModelQueryInformation(a4, Length, &Size, v12);
          goto LABEL_624;
        case 0xE3u:
          LODWORD(Size) = 1;
          if ( Length == 1 )
          {
            v109 = (_QWORD *)a4;
            *(_BYTE *)a4 = ExPoolIsZeroingSupportPresent();
            VerifierInformation = HIDWORD(Size);
          }
          else
          {
            if ( a6 )
              *a6 = 1;
LABEL_102:
            VerifierInformation = -1073741820;
          }
          goto LABEL_625;
        default:
          return -1073741821;
      }
      return result;
    case 0xAFu:
    case 0xB5u:
      v18 = v98;
      if ( v98 != 8 )
        return -1073741811;
      Handle = *(HANDLE *)v102;
      goto LABEL_32;
    case 0xB2u:
      v18 = v98;
      if ( v98 != 8 )
        return -1073741811;
      v125 = *(_QWORD *)v102;
      goto LABEL_32;
    default:
      goto LABEL_31;
  }
}
