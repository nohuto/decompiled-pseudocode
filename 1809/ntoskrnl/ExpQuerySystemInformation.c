/*
 * XREFs of ExpQuerySystemInformation @ 0x1406273B0
 * Callers:
 *     NtQuerySystemInformation @ 0x140627260 (NtQuerySystemInformation.c)
 *     NtQuerySystemInformationEx @ 0x1406ABB40 (NtQuerySystemInformationEx.c)
 * Callees:
 *     KeGetRecommendedSharedDataAlignment @ 0x14000E8C0 (KeGetRecommendedSharedDataAlignment.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400505F0 (ExAcquireResourceExclusiveLite.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x140051600 (KeLeaveCriticalRegionThread.c)
 *     KeEnterCriticalRegionThread @ 0x14008FA60 (KeEnterCriticalRegionThread.c)
 *     ExpGetSystemProcessorInformation @ 0x1400A5D50 (ExpGetSystemProcessorInformation.c)
 *     ExpGetSystemBasicInformation @ 0x1400A608C (ExpGetSystemBasicInformation.c)
 *     PoGetIdleTimes @ 0x1400A7260 (PoGetIdleTimes.c)
 *     KeGetProcessorIndexFromNumber @ 0x1400A73B0 (KeGetProcessorIndexFromNumber.c)
 *     KeQueryActiveProcessorCountEx @ 0x1400A7860 (KeQueryActiveProcessorCountEx.c)
 *     MmGetHighestPhysicalPage @ 0x1400A8858 (MmGetHighestPhysicalPage.c)
 *     MmQueryMemoryListInformation @ 0x1400A8910 (MmQueryMemoryListInformation.c)
 *     PoEnergyEstimationEnabled @ 0x1400ACEC0 (PoEnergyEstimationEnabled.c)
 *     ExAllocatePoolWithQuotaTag @ 0x1400B75B0 (ExAllocatePoolWithQuotaTag.c)
 *     KeEnterCriticalRegion @ 0x1400B9B40 (KeEnterCriticalRegion.c)
 *     KeQueryLogicalProcessorRelationship @ 0x1400DC030 (KeQueryLogicalProcessorRelationship.c)
 *     KeQueryActiveGroupCount @ 0x1400E3C90 (KeQueryActiveGroupCount.c)
 *     KeFlushProcessWriteBuffers @ 0x1400ED078 (KeFlushProcessWriteBuffers.c)
 *     MmGetProcessPartitionId @ 0x1400F0D4C (MmGetProcessPartitionId.c)
 *     MmGetAvailablePages @ 0x1400F0D5C (MmGetAvailablePages.c)
 *     MmGetTotalCommittedPages @ 0x1400F0D78 (MmGetTotalCommittedPages.c)
 *     MmGetTotalCommitLimit @ 0x1400F0D94 (MmGetTotalCommitLimit.c)
 *     MmGetPeakCommitment @ 0x1400F0DB0 (MmGetPeakCommitment.c)
 *     MmGetSharedCommit @ 0x1400F0E78 (MmGetSharedCommit.c)
 *     MmGetResidentAvailablePages @ 0x1400F0E88 (MmGetResidentAvailablePages.c)
 *     PsGetCurrentProcess @ 0x1400F13B0 (PsGetCurrentProcess.c)
 *     KeQueryGroupAffinity @ 0x1400F3700 (KeQueryGroupAffinity.c)
 *     PsWow64GetSupportedArchitectures @ 0x1400F5458 (PsWow64GetSupportedArchitectures.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140109DC0 (PsGetCurrentServerSiloGlobals.c)
 *     ExCpuSetResourceManagerAccessCheck @ 0x140126AB8 (ExCpuSetResourceManagerAccessCheck.c)
 *     ExpGetSystemEmulationBasicInformation @ 0x140129058 (ExpGetSystemEmulationBasicInformation.c)
 *     KeQueryBootTimeValues @ 0x140129380 (KeQueryBootTimeValues.c)
 *     KeQueryCycleTimeStatsProcessor @ 0x14012A0FC (KeQueryCycleTimeStatsProcessor.c)
 *     MmQuerySystemWorkingSetInformation @ 0x140130B04 (MmQuerySystemWorkingSetInformation.c)
 *     PoGetPerfStateAndParkingInfo @ 0x140131D74 (PoGetPerfStateAndParkingInfo.c)
 *     ExpGetSystemEmulationProcessorInformation @ 0x14013695C (ExpGetSystemEmulationProcessorInformation.c)
 *     MmGetLowestPhysicalPage @ 0x14013BB24 (MmGetLowestPhysicalPage.c)
 *     VslIsSecureKernelRunning @ 0x14013BC4C (VslIsSecureKernelRunning.c)
 *     VslGetNestedPageProtectionFlags @ 0x14018DE90 (VslGetNestedPageProtectionFlags.c)
 *     PsQueryCpuQuotaInformation @ 0x140193EE4 (PsQueryCpuQuotaInformation.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwFilterBootOption @ 0x1401B9E90 (ZwFilterBootOption.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     HvlQueryActiveProcessors @ 0x140271630 (HvlQueryActiveProcessors.c)
 *     HvlQueryProcessorTopologyCount @ 0x140271820 (HvlQueryProcessorTopologyCount.c)
 *     VslIsTrustletRunning @ 0x14027B7A8 (VslIsTrustletRunning.c)
 *     VslQuerySecureKernelProfileInformation @ 0x14027BB6C (VslQuerySecureKernelProfileInformation.c)
 *     KeGetAffinitizedInterruptsInfo @ 0x14029A89C (KeGetAffinitizedInterruptsInfo.c)
 *     MmEnumerateBadPages @ 0x1402CFFC0 (MmEnumerateBadPages.c)
 *     PpmCapturePerformanceDistribution @ 0x1402E307C (PpmCapturePerformanceDistribution.c)
 *     PsQueryActivityModerationUserSettings @ 0x1402E9D20 (PsQueryActivityModerationUserSettings.c)
 *     SeQueryTrustedPlatformModuleInformation @ 0x140300480 (SeQueryTrustedPlatformModuleInformation.c)
 *     ExpGetLookasideInformation @ 0x1403192B0 (ExpGetLookasideInformation.c)
 *     ExGetBigPoolInfo @ 0x14031A744 (ExGetBigPoolInfo.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     ExpGetProcessInformation @ 0x1405E7B60 (ExpGetProcessInformation.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     SeSinglePrivilegeCheck @ 0x140613160 (SeSinglePrivilegeCheck.c)
 *     WbDispatchOperation @ 0x140626384 (WbDispatchOperation.c)
 *     ProbeForWrite @ 0x14062AA80 (ProbeForWrite.c)
 *     PfQuerySuperfetchInformation @ 0x14062AAF0 (PfQuerySuperfetchInformation.c)
 *     PsLookupProcessByProcessId @ 0x140647C40 (PsLookupProcessByProcessId.c)
 *     ExAcquireTimeRefreshLock @ 0x1406669FC (ExAcquireTimeRefreshLock.c)
 *     ExpQueryNumaProcessorMap @ 0x14066BEF8 (ExpQueryNumaProcessorMap.c)
 *     ExpQuerySystemPerformanceInformation @ 0x14066E19C (ExpQuerySystemPerformanceInformation.c)
 *     PsQueryFullProcessImageName @ 0x14066E984 (PsQueryFullProcessImageName.c)
 *     ExpQueryModuleInformation @ 0x14067CAD0 (ExpQueryModuleInformation.c)
 *     SeCodeIntegrityQueryPolicyInformation @ 0x140690EA0 (SeCodeIntegrityQueryPolicyInformation.c)
 *     ExGetSessionPoolTagInformation @ 0x14069F774 (ExGetSessionPoolTagInformation.c)
 *     ExGetPoolTagInfo @ 0x1406A5C1C (ExGetPoolTagInfo.c)
 *     ExHandleSPCall2 @ 0x1406ABF8C (ExHandleSPCall2.c)
 *     ExIsRestrictedCaller @ 0x1406AEC8C (ExIsRestrictedCaller.c)
 *     KeBuildLogicalProcessorSystemInformation @ 0x1406B07C8 (KeBuildLogicalProcessorSystemInformation.c)
 *     ExpGetSystemFlushInformation @ 0x1406B9168 (ExpGetSystemFlushInformation.c)
 *     ExpGetSystemFirmwareTableInformation @ 0x1406B92A0 (ExpGetSystemFirmwareTableInformation.c)
 *     SeCodeIntegrityQueryInformation @ 0x1406BBA68 (SeCodeIntegrityQueryInformation.c)
 *     PfSnQueryPrefetcherInformation @ 0x1406BBADC (PfSnQueryPrefetcherInformation.c)
 *     IoQuerySystemDeviceName @ 0x1406BE830 (IoQuerySystemDeviceName.c)
 *     ExReleaseTimeRefreshLock @ 0x1406BFE98 (ExReleaseTimeRefreshLock.c)
 *     SeSecureBootQueryInformation @ 0x1406C745C (SeSecureBootQueryInformation.c)
 *     MmGetPageFileInformation @ 0x1406CC444 (MmGetPageFileInformation.c)
 *     IoQueryLowPriorityIoInformation @ 0x1406CCCD8 (IoQueryLowPriorityIoInformation.c)
 *     SmQueryStoreInformation @ 0x1406D0FDC (SmQueryStoreInformation.c)
 *     ExpReadComPlusPackage @ 0x1406D1AAC (ExpReadComPlusPackage.c)
 *     SeQueryHSTIResults @ 0x1406DCD88 (SeQueryHSTIResults.c)
 *     ExSystemExceptionFilter @ 0x1406E3A10 (ExSystemExceptionFilter.c)
 *     CmQueryRegistryQuotaInformation @ 0x140708080 (CmQueryRegistryQuotaInformation.c)
 *     IoGetConfigurationInformation @ 0x1407107C0 (IoGetConfigurationInformation.c)
 *     ExQueryBootEntropyInformation @ 0x140737B04 (ExQueryBootEntropyInformation.c)
 *     ExpQueryModuleInformationEx @ 0x140749988 (ExpQueryModuleInformationEx.c)
 *     ExpQueryMemoryTopologyInformation @ 0x14075A300 (ExpQueryMemoryTopologyInformation.c)
 *     KeQueryCpuSetInformation @ 0x14075BA04 (KeQueryCpuSetInformation.c)
 *     ExpQueryInterruptSteeringInformation @ 0x140760598 (ExpQueryInterruptSteeringInformation.c)
 *     ExpGetSystemPlatformBinary @ 0x140760DDC (ExpGetSystemPlatformBinary.c)
 *     ExpGetSystemWriteConstraintInformation @ 0x140763070 (ExpGetSystemWriteConstraintInformation.c)
 *     HvlQueryEnlightenmentInfo @ 0x1407637F0 (HvlQueryEnlightenmentInfo.c)
 *     IoQueryVhdBootInformation @ 0x140763B94 (IoQueryVhdBootInformation.c)
 *     HvlQueryDetailInfo @ 0x140818718 (HvlQueryDetailInfo.c)
 *     HvlQueryVsmProtectionInfo @ 0x140818834 (HvlQueryVsmProtectionInfo.c)
 *     KeQuerySpeculationControlInformation @ 0x140844F98 (KeQuerySpeculationControlInformation.c)
 *     KeQueryKvaShadowInformation @ 0x140845A48 (KeQueryKvaShadowInformation.c)
 *     MmGetSessionMappedViewInformation @ 0x14084D700 (MmGetSessionMappedViewInformation.c)
 *     ObQueryRefTraceInformation @ 0x140863A94 (ObQueryRefTraceInformation.c)
 *     PsRootSiloInformation @ 0x140887BC0 (PsRootSiloInformation.c)
 *     EtwQueryPerformanceTraceInformation @ 0x1408BA620 (EtwQueryPerformanceTraceInformation.c)
 *     ExGetSessionBigPoolInformation @ 0x1408CC5FC (ExGetSessionBigPoolInformation.c)
 *     ExpGetDeviceDataInformation @ 0x1408CC820 (ExpGetDeviceDataInformation.c)
 *     ExpGetHandleInformation @ 0x1408CCA1C (ExpGetHandleInformation.c)
 *     ExpGetHandleInformationEx @ 0x1408CCAB4 (ExpGetHandleInformationEx.c)
 *     ExpGetLockInformation @ 0x1408CCB4C (ExpGetLockInformation.c)
 *     ExpGetObjectInformation @ 0x1408CCBC0 (ExpGetObjectInformation.c)
 *     ExpGetSystemProcessorFeaturesInformation @ 0x1408CCC44 (ExpGetSystemProcessorFeaturesInformation.c)
 *     ExpIsIumEncryptionKeyAvailable @ 0x1408CCCA0 (ExpIsIumEncryptionKeyAvailable.c)
 *     ExpQueryChannelInformation @ 0x1408CCE70 (ExpQueryChannelInformation.c)
 *     ExpQueryCodeIntegrityCertificateInfo @ 0x1408CCFAC (ExpQueryCodeIntegrityCertificateInfo.c)
 *     ExpQueryLegacyDriverInformation @ 0x1408CD4E0 (ExpQueryLegacyDriverInformation.c)
 *     ExpQueryNumaAvailableMemory @ 0x1408CD5CC (ExpQueryNumaAvailableMemory.c)
 *     ExpQueryNumaProximityNode @ 0x1408CD770 (ExpQueryNumaProximityNode.c)
 *     ExpQueryPortableWorkspaceEfiLauncherInformation @ 0x1408CD8C4 (ExpQueryPortableWorkspaceEfiLauncherInformation.c)
 *     ExpQuerySingleModuleInformation @ 0x1408CDAD8 (ExpQuerySingleModuleInformation.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 *     ExpCovQueryInformation @ 0x1408D8C0C (ExpCovQueryInformation.c)
 *     VfGetVerifierInformation @ 0x14094B8E4 (VfGetVerifierInformation.c)
 *     VfGetVerifierInformationEx @ 0x14094B9A8 (VfGetVerifierInformationEx.c)
 *     BgkQueryBootGraphicsInformation @ 0x140950414 (BgkQueryBootGraphicsInformation.c)
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
  int v8; // r14d
  __int64 v9; // rsi
  __int64 v10; // rcx
  unsigned __int8 v11; // r12
  ULONG v12; // r8d
  __int64 v13; // r9
  unsigned __int16 v14; // r10
  LOGICAL_PROCESSOR_RELATIONSHIP v15; // edx
  USHORT v16; // cx
  ULONG ActiveProcessorCount; // eax
  int v18; // edi
  unsigned int v19; // r11d
  signed int SystemBasicInformation; // edi
  _KPROCESS *v21; // rax
  unsigned __int16 v22; // di
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rax
  _KPROCESS *v26; // rax
  unsigned __int16 v27; // di
  _KPROCESS *CurrentProcess; // rax
  unsigned __int16 ProcessPartitionId; // di
  __int64 v30; // rcx
  unsigned int v31; // edi
  unsigned int v32; // edi
  unsigned int v33; // eax
  _DWORD *v34; // r13
  int v35; // ecx
  unsigned __int64 v36; // r12
  unsigned int v37; // ecx
  _DWORD *PoolWithTag; // rax
  _DWORD *v39; // rsi
  __int64 v40; // rdi
  __int64 v41; // rcx
  unsigned __int64 v42; // rdi
  char v43; // si
  unsigned __int64 v44; // rdx
  struct _KTHREAD *CurrentThread; // rsi
  NTSTATUS result; // eax
  PCONFIGURATION_INFORMATION ConfigurationInformation; // rax
  signed int v48; // eax
  unsigned int v49; // eax
  int v50; // ecx
  int v51; // r14d
  __int64 v52; // rdx
  unsigned int v53; // ebx
  int v54; // ecx
  int v55; // edx
  __int64 *v56; // r12
  __int64 v57; // r8
  __int64 *v58; // r12
  __int64 v59; // rdx
  unsigned int i; // edi
  _DWORD *v61; // rdx
  __int64 v62; // rdi
  __int64 v63; // rcx
  _OWORD *v64; // rdi
  __int64 v65; // rcx
  _OWORD *v66; // rax
  __int64 v67; // r14
  __int64 v68; // rcx
  _OWORD *v69; // rax
  __int64 *v70; // r12
  __int64 v71; // rcx
  __int32 v72; // edx
  unsigned int v73; // r8d
  unsigned __int16 v74; // r9
  unsigned int v75; // eax
  unsigned int v76; // r13d
  unsigned __int16 j; // ax
  __int64 v78; // rcx
  _QWORD *v79; // rax
  unsigned int v80; // eax
  __int64 v81; // rcx
  unsigned int v82; // eax
  unsigned int v83; // r13d
  __int64 v84; // rdx
  _DWORD *PoolWithQuotaTag; // rsi
  int v86; // eax
  int v87; // ecx
  __int64 v88; // rax
  PVOID v89; // rsi
  unsigned int v90; // ecx
  PVOID v91; // r12
  void *v92; // rcx
  unsigned int v93; // eax
  unsigned int v94; // r13d
  __int64 v95; // rcx
  __int16 NestedPageProtectionFlags; // ax
  char v97; // cl
  _DWORD *v98; // rax
  int v99; // eax
  __int64 v100; // rax
  size_t Size; // [rsp+30h] [rbp-308h] BYREF
  _PROCESSOR_NUMBER ProcNumber; // [rsp+38h] [rbp-300h] BYREF
  unsigned __int16 v103; // [rsp+3Ch] [rbp-2FCh]
  _BYTE v104[4]; // [rsp+40h] [rbp-2F8h] BYREF
  unsigned int v105; // [rsp+44h] [rbp-2F4h]
  int v106; // [rsp+48h] [rbp-2F0h]
  int v107; // [rsp+4Ch] [rbp-2ECh]
  SIZE_T NumberOfBytes[2]; // [rsp+50h] [rbp-2E8h] BYREF
  char Data[4]; // [rsp+60h] [rbp-2D8h] BYREF
  int v110; // [rsp+64h] [rbp-2D4h] BYREF
  ULONG v111; // [rsp+68h] [rbp-2D0h]
  _DWORD *v112; // [rsp+70h] [rbp-2C8h] BYREF
  unsigned __int16 v113; // [rsp+78h] [rbp-2C0h]
  unsigned int v114; // [rsp+7Ch] [rbp-2BCh]
  int v115; // [rsp+80h] [rbp-2B8h]
  _QWORD *v116; // [rsp+88h] [rbp-2B0h]
  LOGICAL_PROCESSOR_RELATIONSHIP *v117; // [rsp+90h] [rbp-2A8h]
  PEPROCESS Process; // [rsp+98h] [rbp-2A0h] BYREF
  LOGICAL_PROCESSOR_RELATIONSHIP RelationshipType; // [rsp+A0h] [rbp-298h]
  unsigned int v120; // [rsp+A4h] [rbp-294h]
  int v121; // [rsp+A8h] [rbp-290h] BYREF
  int v122; // [rsp+ACh] [rbp-28Ch] BYREF
  unsigned int v123; // [rsp+B0h] [rbp-288h] BYREF
  int v124; // [rsp+B4h] [rbp-284h]
  __int64 v125; // [rsp+B8h] [rbp-280h]
  HANDLE Handle; // [rsp+C0h] [rbp-278h]
  HANDLE ProcessId[2]; // [rsp+C8h] [rbp-270h]
  unsigned __int64 v128; // [rsp+D8h] [rbp-260h]
  _DWORD *v129; // [rsp+E0h] [rbp-258h]
  PVOID P; // [rsp+E8h] [rbp-250h] BYREF
  PVOID v131; // [rsp+F0h] [rbp-248h] BYREF
  __int64 v132; // [rsp+F8h] [rbp-240h]
  int v133; // [rsp+104h] [rbp-234h]
  int v134; // [rsp+10Ch] [rbp-22Ch]
  unsigned __int64 v135; // [rsp+110h] [rbp-228h] BYREF
  PVOID Object; // [rsp+118h] [rbp-220h] BYREF
  PVOID v137[2]; // [rsp+120h] [rbp-218h] BYREF
  _QWORD v138[2]; // [rsp+130h] [rbp-208h] BYREF
  _OWORD Src[27]; // [rsp+140h] [rbp-1F8h] BYREF

  v105 = a3;
  v117 = a2;
  v7 = a1;
  v114 = a1;
  v8 = Length;
  NumberOfBytes[1] = (SIZE_T)a6;
  v9 = 0LL;
  Size = 0LL;
  memset(Src, 0, sizeof(Src));
  v116 = 0LL;
  v11 = KeGetCurrentThread()->$86A1A36C0FEBA810544B2F2B35F40C82::gap0[10];
  if ( v11 )
  {
    switch ( v7 )
    {
      case 0xCu:
        v12 = 8;
        break;
      case 0x23u:
      case 0x93u:
      case 0x95u:
      case 0x9Eu:
      case 0xA3u:
        v12 = 1;
        break;
      default:
        v12 = 4;
        break;
    }
    ProbeForWrite((volatile void *)a4, Length, v12);
    if ( a6 )
    {
      v10 = (__int64)a6;
      if ( (unsigned __int64)a6 >= 0x7FFFFFFF0000LL )
        v10 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v10 = *(_DWORD *)v10;
    }
  }
  LODWORD(Size) = 0;
  RelationshipType = RelationAll;
  v13 = 0LL;
  v111 = 0;
  v14 = 0;
  v106 = 0;
  v103 = 0;
  v113 = 0;
  v125 = 0LL;
  Handle = 0LL;
  v132 = 0LL;
  v15 = 9;
  v115 = 9;
  v124 = 9;
  switch ( v7 )
  {
    case 2u:
    case 0x21u:
    case 0x24u:
    case 0x41u:
      v106 = 0xFFFF;
      v103 = -1;
      v16 = -1;
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
      if ( v105 < 2 )
        return -1073741811;
      v18 = *(unsigned __int16 *)v117;
      v106 = v18;
      v103 = v18;
      if ( (unsigned __int16)v18 >= KeQueryActiveGroupCount() )
        return -1073741811;
      v16 = v18;
LABEL_12:
      ActiveProcessorCount = KeQueryActiveProcessorCountEx(v16);
      v13 = ActiveProcessorCount;
      v111 = ActiveProcessorCount;
      v14 = v106;
      v7 = v114;
      v15 = v115;
LABEL_31:
      v19 = v105;
      goto LABEL_32;
    case 0x48u:
      v19 = v105;
      if ( v105 != 4 )
        return -1073741811;
      v15 = *v117;
      v124 = *v117;
      goto LABEL_32;
    case 0x6Bu:
      v19 = v105;
      if ( v105 < 4 )
        return -1073741811;
      RelationshipType = *v117;
      goto LABEL_32;
    case 0x79u:
      v19 = v105;
      if ( v105 >= 2 )
      {
        v113 = *(_WORD *)v117;
        v10 = v113;
        if ( v113 < (unsigned __int16)KeNumberNodes )
          goto LABEL_32;
      }
      return -1073741811;
    case 0xA5u:
      v19 = v105;
      if ( v105 )
      {
        if ( v105 != 8 )
          return -1073741811;
        v125 = *(_QWORD *)v117;
      }
      else
      {
        v125 = 0LL;
      }
LABEL_32:
      switch ( v7 )
      {
        case 0u:
        case 0x72u:
          if ( Length == 64 )
          {
            SystemBasicInformation = ExpGetSystemBasicInformation(a4);
            LODWORD(Size) = 64;
            goto LABEL_618;
          }
          if ( a6 )
            *a6 = 64;
          return -1073741820;
        case 1u:
          if ( Length >= 0xC )
          {
            SystemBasicInformation = ExpGetSystemProcessorInformation(a4);
            LODWORD(Size) = 12;
            goto LABEL_618;
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
          v31 = 344;
          if ( Length <= 0x158 )
            v31 = Length;
          ExpQuerySystemPerformanceInformation((unsigned int)v13, a4, v31);
          goto LABEL_266;
        case 3u:
          if ( Length <= 0x30 )
          {
            KeQueryBootTimeValues((_QWORD *)Src + 1, (LARGE_INTEGER *)Src, &Src[2]);
            v41 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 132);
            *(_QWORD *)&Src[1] = *(_QWORD *)(v41 + 440);
            DWORD2(Src[1]) = *(_DWORD *)(v41 + 432);
            *((_QWORD *)&Src[2] + 1) = MEMORY[0xFFFFF780000003B0];
            memmove((void *)a4, Src, Length);
            goto LABEL_254;
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
          SystemBasicInformation = ExpGetProcessInformation((_DWORD *)a4, Length, (unsigned int *)&Size, 0LL, v7);
          goto LABEL_618;
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
            goto LABEL_64;
          }
          if ( a6 )
            *a6 = 24;
          return -1073741820;
        case 8u:
        case 0x8Du:
          v32 = 48;
          if ( v114 != 8 )
            v32 = 72;
          if ( Length && !(Length % v32) )
          {
            v107 = 0;
            v33 = 0;
            while ( 1 )
            {
              v115 = v33;
              if ( v33 >= (unsigned int)v13 )
                break;
              ProcNumber.Group = v14;
              ProcNumber.Number = v33;
              ProcNumber.Reserved = 0;
              v34 = (_DWORD *)KiProcessorBlock[KeGetProcessorIndexFromNumber(&ProcNumber)];
              v35 = v107;
              if ( Length < v32 + v107 )
                goto LABEL_88;
              v107 += v32;
              PoGetIdleTimes(&ProcNumber, 0LL, (__int64)Src);
              *(_QWORD *)(a4 + 16) = KeMaximumIncrement * (unsigned __int64)(unsigned int)v34[5858];
              *(_QWORD *)(a4 + 8) = KeMaximumIncrement * (unsigned __int64)DWORD1(Src[0]);
              *(_QWORD *)(a4 + 24) = KeMaximumIncrement * (unsigned __int64)(unsigned int)v34[5859];
              *(_QWORD *)(a4 + 32) = KeMaximumIncrement * (unsigned __int64)(unsigned int)v34[5860];
              *(_QWORD *)a4 = KeMaximumIncrement * (unsigned __int64)LODWORD(Src[0]);
              *(_DWORD *)(a4 + 40) = v34[5856];
              if ( v114 == 141 )
              {
                *(_QWORD *)(a4 + 48) = KeMaximumIncrement * (unsigned __int64)(unsigned int)v34[5867];
                *(_DWORD *)(a4 + 44) = 0;
                *(_QWORD *)(a4 + 56) = 0LL;
                *(_QWORD *)(a4 + 64) = 0LL;
              }
              a4 += v32;
              v33 = v115 + 1;
              LODWORD(v13) = v111;
              v14 = v106;
            }
            v35 = v107;
LABEL_88:
            LODWORD(Size) = v35;
            SystemBasicInformation = HIDWORD(Size);
            goto LABEL_618;
          }
          if ( a6 )
            *a6 = v13 * v32;
          return -1073741820;
        case 9u:
          if ( Length == 4 )
          {
            *(_DWORD *)a4 = NtGlobalFlag;
            goto LABEL_157;
          }
          if ( a6 )
            *a6 = 4;
          return -1073741820;
        case 0xBu:
          if ( (unsigned int)ExIsRestrictedCaller(v11) )
            return -1073741790;
          KeEnterCriticalRegion();
          ExAcquireResourceExclusiveLite(&PsLoadedModuleResource, 1u);
          v48 = ExpQueryModuleInformation(&PsLoadedModuleList, a4, Length, &Size);
          goto LABEL_164;
        case 0xCu:
          if ( Length < 0x38 )
          {
            if ( a6 )
              *a6 = 56;
            return -1073741820;
          }
          if ( (unsigned int)ExIsRestrictedCaller(v11) )
            return -1073741790;
          SystemBasicInformation = ExpGetLockInformation(a4, Length, &Size);
          goto LABEL_618;
        case 0xDu:
          if ( Length >= 0x128 )
            goto LABEL_176;
          if ( a6 )
            *a6 = 296;
          return -1073741820;
        case 0xEu:
        case 0xFu:
        case 0x13u:
LABEL_176:
          SystemBasicInformation = -1073741822;
          goto LABEL_618;
        case 0x10u:
          if ( Length < 0x20 )
          {
            if ( a6 )
              *a6 = 32;
            return -1073741820;
          }
          if ( (a4 & 7) != 0 )
            return -2147483646;
          if ( !(unsigned int)ExIsRestrictedCaller(v11) )
          {
            SystemBasicInformation = ExpGetHandleInformation(a4, Length, &Size);
            goto LABEL_618;
          }
          return -1073741790;
        case 0x11u:
          if ( Length < 0x40 )
          {
            if ( a6 )
              *a6 = 64;
            return -1073741820;
          }
          if ( (unsigned int)ExIsRestrictedCaller(v11) )
            return -1073741790;
          SystemBasicInformation = ExpGetObjectInformation(a4, Length, &Size);
          goto LABEL_618;
        case 0x12u:
        case 0x90u:
          v49 = 32;
          if ( v7 != 18 )
            v49 = 40;
          LODWORD(Size) = v49;
          if ( Length >= v49 )
          {
            LODWORD(Size) = 0;
            LOBYTE(v9) = v7 == 144;
            SystemBasicInformation = MmGetPageFileInformation(-1, a4, Length, v9, (__int64)&Size);
            goto LABEL_618;
          }
          if ( a6 )
            *a6 = v49;
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
          v50 = 2;
          if ( v7 == 119 )
          {
            v51 = 3;
          }
          else
          {
            if ( v7 == 120 )
              v50 = 4;
            v51 = v50;
          }
          MmQuerySystemWorkingSetInformation(v51, Src);
          *(_OWORD *)a4 = Src[0];
          *(_DWORD *)(a4 + 16) = Src[1];
          *(_QWORD *)(a4 + 24) = *((_QWORD *)&Src[1] + 1);
          *(_OWORD *)(a4 + 32) = Src[2];
          *(_OWORD *)(a4 + 48) = Src[3];
          LODWORD(Size) = 64;
          SystemBasicInformation = HIDWORD(Size);
          goto LABEL_618;
        case 0x16u:
          if ( Length >= 0x30 )
          {
            SystemBasicInformation = ExGetPoolTagInfo(a4, Length, &Size, v13);
            goto LABEL_618;
          }
          if ( a6 )
            *a6 = 48;
          return -1073741820;
        case 0x17u:
          LODWORD(Size) = 24 * v13;
          if ( Length >= 24 * (int)v13 )
          {
            for ( i = 0; i < (unsigned int)v13; ++i )
            {
              ProcNumber.Group = v14;
              ProcNumber.Number = i;
              ProcNumber.Reserved = 0;
              v61 = (_DWORD *)KiProcessorBlock[KeGetProcessorIndexFromNumber(&ProcNumber)];
              *(_DWORD *)a4 = v61[2895];
              *(_DWORD *)(a4 + 4) = v61[2951];
              *(_DWORD *)(a4 + 8) = v61[2967];
              *(_DWORD *)(a4 + 12) = KeTimeIncrement;
              *(_DWORD *)(a4 + 16) = 0;
              *(_DWORD *)(a4 + 20) = 0;
              a4 += 24LL;
              LODWORD(v13) = v111;
              v14 = v106;
            }
            goto LABEL_286;
          }
          if ( a6 )
            *a6 = 24 * v13;
          return -1073741820;
        case 0x18u:
          if ( Length == 20 )
          {
            *(_DWORD *)(a4 + 4) = KiMaximumDpcQueueDepth;
            *(_DWORD *)(a4 + 8) = KiMinimumDpcRate;
            *(_DWORD *)(a4 + 12) = KiAdjustDpcThreshold;
            *(_DWORD *)(a4 + 16) = KiIdealDpcRate;
            goto LABEL_275;
          }
          if ( a6 )
            *a6 = 20;
          return -1073741820;
        case 0x1Cu:
          if ( Length == 12 || Length == 24 )
          {
            LOBYTE(v10) = 1;
            ExAcquireTimeRefreshLock(v10);
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
            goto LABEL_254;
          }
          if ( a6 )
            *a6 = 12;
          return -1073741820;
        case 0x1Fu:
          SystemBasicInformation = EtwQueryPerformanceTraceInformation(a4, Length, v11, &Size);
          goto LABEL_618;
        case 0x21u:
          if ( Length < 0x10 )
          {
            if ( a6 )
              *a6 = 16;
            return -1073741820;
          }
          LODWORD(Size) = 16;
          v54 = 0;
          v55 = 0;
          if ( (_DWORD)v13 )
          {
            v56 = KiProcessorBlock;
            v57 = (unsigned int)v13;
            do
            {
              v54 += *(_DWORD *)(*v56 + 24632);
              v55 += *(_DWORD *)(*v56++ + 23472);
              --v57;
            }
            while ( v57 );
          }
          *(_DWORD *)a4 = v54;
          *(_DWORD *)(a4 + 4) = v55;
          *(_DWORD *)(a4 + 8) = 0;
          *(_DWORD *)(a4 + 12) = 0;
          SystemBasicInformation = HIDWORD(Size);
          goto LABEL_618;
        case 0x23u:
          if ( Length >= 2 )
          {
            *(_BYTE *)a4 = (_BYTE)KdDebuggerEnabled;
            *(_BYTE *)(a4 + 1) = (_BYTE)KdDebuggerNotPresent;
            LODWORD(Size) = 2;
            SystemBasicInformation = HIDWORD(Size);
            goto LABEL_618;
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
          if ( (_DWORD)v13 )
          {
            v58 = KiProcessorBlock;
            v59 = (unsigned int)v13;
            do
            {
              LODWORD(v9) = *(_DWORD *)(*v58++ + 11580) + v9;
              --v59;
            }
            while ( v59 );
          }
          *(_DWORD *)a4 = v9;
          *(_DWORD *)(a4 + 4) = KeThreadSwitchCounters;
          *(_DWORD *)(a4 + 8) = dword_140422DA8;
          *(_DWORD *)(a4 + 12) = dword_140422DA4;
          *(_DWORD *)(a4 + 16) = dword_140422DAC;
          *(_DWORD *)(a4 + 20) = dword_140422DB0;
          *(_DWORD *)(a4 + 24) = dword_140422DB8;
          *(_DWORD *)(a4 + 28) = dword_140422DB4;
          *(_DWORD *)(a4 + 32) = dword_140422DBC;
          *(_DWORD *)(a4 + 36) = dword_140422DC0;
          *(_DWORD *)(a4 + 40) = dword_140422DC4;
          *(_DWORD *)(a4 + 44) = dword_140422DC8;
          v31 = 48;
LABEL_266:
          LODWORD(Size) = v31;
          SystemBasicInformation = HIDWORD(Size);
          goto LABEL_618;
        case 0x25u:
          if ( Length >= 0x10 )
          {
            SystemBasicInformation = CmQueryRegistryQuotaInformation(a4);
            LODWORD(Size) = 16;
            goto LABEL_618;
          }
          if ( a6 )
            *a6 = 16;
          return -1073741820;
        case 0x2Au:
          LODWORD(Size) = 48 * v13;
          if ( Length < 48 * (int)v13 )
            goto LABEL_101;
          while ( (unsigned int)v9 < (unsigned int)v13 )
          {
            ProcNumber.Group = v14;
            ProcNumber.Number = v9;
            ProcNumber.Reserved = 0;
            PoGetIdleTimes(&ProcNumber, (__int64)Src, 0LL);
            *(_OWORD *)a4 = Src[0];
            *(_OWORD *)(a4 + 16) = Src[1];
            *(_OWORD *)(a4 + 32) = Src[2];
            a4 += 48LL;
            LODWORD(v9) = v9 + 1;
            LODWORD(v13) = v111;
            v14 = v106;
          }
          goto LABEL_59;
        case 0x2Bu:
          if ( Length >= 0x18 )
          {
            LODWORD(Size) = Length;
            SystemBasicInformation = ExpQueryLegacyDriverInformation(a4, &Size);
            goto LABEL_618;
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
          v62 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 132);
          LOBYTE(v63) = 1;
          ExAcquireTimeRefreshLock(v63);
          Src[0] = *(_OWORD *)v62;
          Src[1] = *(_OWORD *)(v62 + 16);
          Src[2] = *(_OWORD *)(v62 + 32);
          Src[3] = *(_OWORD *)(v62 + 48);
          Src[4] = *(_OWORD *)(v62 + 64);
          Src[5] = *(_OWORD *)(v62 + 80);
          Src[6] = *(_OWORD *)(v62 + 96);
          Src[7] = *(_OWORD *)(v62 + 112);
          Src[8] = *(_OWORD *)(v62 + 128);
          Src[9] = *(_OWORD *)(v62 + 144);
          *(_QWORD *)&Src[10] = *(_QWORD *)(v62 + 160);
          DWORD2(Src[10]) = *(_DWORD *)(v62 + 168);
          ExReleaseTimeRefreshLock();
          *(_OWORD *)a4 = Src[0];
          *(_OWORD *)(a4 + 16) = Src[1];
          *(_OWORD *)(a4 + 32) = Src[2];
          *(_OWORD *)(a4 + 48) = Src[3];
          *(_OWORD *)(a4 + 64) = Src[4];
          *(_OWORD *)(a4 + 80) = Src[5];
          *(_OWORD *)(a4 + 96) = Src[6];
          *(_OWORD *)(a4 + 112) = Src[7];
          *(_OWORD *)(a4 + 128) = Src[8];
          *(_OWORD *)(a4 + 144) = Src[9];
          *(_QWORD *)(a4 + 160) = *(_QWORD *)&Src[10];
          *(_DWORD *)(a4 + 168) = DWORD2(Src[10]);
          LODWORD(Size) = 172;
LABEL_286:
          SystemBasicInformation = 0;
          goto LABEL_618;
        case 0x2Du:
          SystemBasicInformation = ExpGetLookasideInformation(a4, Length, &Size);
          goto LABEL_618;
        case 0x32u:
          if ( Length == 8 )
          {
            *(_QWORD *)a4 = 0xFFFF800000000000uLL;
            goto LABEL_113;
          }
          if ( a6 )
            *a6 = 8;
          return -1073741820;
        case 0x33u:
          if ( Length >= 0x90 )
            goto LABEL_303;
          if ( a6 )
            *a6 = 144;
          return -1073741820;
        case 0x35u:
          if ( Length >= 0x10 )
          {
            v110 = *(_DWORD *)a4;
            v129 = *(_DWORD **)(a4 + 8);
            v120 = *(_DWORD *)(a4 + 4);
            ProbeForWrite(v129, v120, 4u);
            SystemBasicInformation = ExpGetProcessInformation(v129, v120, (unsigned int *)&Size, &v110, 5);
            goto LABEL_618;
          }
          if ( a6 )
            *a6 = 16;
          return -1073741820;
        case 0x37u:
          SystemBasicInformation = ExpQueryNumaProcessorMap(a4, Length, &Size, v13);
          goto LABEL_618;
        case 0x38u:
          SystemBasicInformation = PfSnQueryPrefetcherInformation(56LL, a4, Length, v11, &Size);
          goto LABEL_618;
        case 0x3Au:
          if ( Length >= 4 )
          {
            *(_DWORD *)a4 = KeGetRecommendedSharedDataAlignment();
            goto LABEL_157;
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
            result = ExpReadComPlusPackage();
            SystemBasicInformation = result;
            if ( result < 0 )
              return result;
          }
          else
          {
            SystemBasicInformation = HIDWORD(Size);
          }
          *(_DWORD *)a4 = MEMORY[0xFFFFF780000002E0];
          LODWORD(Size) = 4;
          goto LABEL_618;
        case 0x3Cu:
          SystemBasicInformation = ExpQueryNumaAvailableMemory(a4, Length, &Size, v13);
          goto LABEL_618;
        case 0x3Du:
          LODWORD(Size) = 80 * v13;
          if ( Length < 80 * (int)v13 )
            goto LABEL_101;
          while ( (unsigned int)v9 < (unsigned int)v13 )
          {
            ProcNumber.Group = v14;
            ProcNumber.Number = v9;
            ProcNumber.Reserved = 0;
            v40 = KiProcessorBlock[KeGetProcessorIndexFromNumber(&ProcNumber)];
            PoGetPerfStateAndParkingInfo(&ProcNumber, Src, 0LL, &v135);
            memset((void *)a4, 0, 0x50uLL);
            *(_QWORD *)(a4 + 40) = KeMaximumIncrement
                                 * (unsigned __int64)(unsigned int)(*(_DWORD *)(v40 + 23428) + *(_DWORD *)(v40 + 23432));
            *(_QWORD *)(a4 + 48) = KeMaximumIncrement
                                 * (unsigned __int64)*(unsigned int *)(*(_QWORD *)(v40 + 24) + 652LL);
            if ( BYTE12(Src[1]) )
            {
              *(_BYTE *)a4 = BYTE8(Src[0]);
              *(_BYTE *)(a4 + 7) = BYTE12(Src[0]);
              *(_BYTE *)(a4 + 8) = Src[1];
              *(_DWORD *)(a4 + 12) = 1;
            }
            *(_QWORD *)(a4 + 72) = v135;
            a4 += 80LL;
            v116 = (_QWORD *)a4;
            LODWORD(v9) = v9 + 1;
            LODWORD(v13) = v111;
            v14 = v106;
          }
          goto LABEL_59;
        case 0x3Eu:
          if ( Length == 64 )
          {
            SystemBasicInformation = ExpGetSystemEmulationBasicInformation(a4);
            LODWORD(Size) = 64;
            goto LABEL_618;
          }
          if ( a6 )
            *a6 = 64;
          return -1073741820;
        case 0x3Fu:
          if ( Length >= 0xC )
          {
            SystemBasicInformation = ExpGetSystemEmulationProcessorInformation(a4);
            LODWORD(Size) = 12;
            goto LABEL_618;
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
          if ( !(unsigned int)ExIsRestrictedCaller(v11) )
          {
            SystemBasicInformation = ExpGetHandleInformationEx(a4, Length, &Size);
            goto LABEL_618;
          }
          return -1073741790;
        case 0x41u:
          if ( Length < 4 )
          {
            if ( a6 )
              *a6 = 4;
            return -1073741820;
          }
          if ( (_DWORD)v13 )
          {
            v70 = KiProcessorBlock;
            v71 = (unsigned int)v13;
            do
            {
              LODWORD(v9) = *(_DWORD *)(*v70++ + 23740) + v9;
              --v71;
            }
            while ( v71 );
          }
          *(_DWORD *)a4 = v9;
          goto LABEL_157;
        case 0x42u:
          if ( Length < 0x20 )
          {
            if ( a6 )
              *a6 = 32;
            return -1073741820;
          }
          if ( (unsigned int)ExIsRestrictedCaller(v11) )
            return -1073741790;
          SystemBasicInformation = ExGetBigPoolInfo((_DWORD *)a4, Length, 1, (unsigned int *)&Size);
          goto LABEL_618;
        case 0x43u:
          if ( Length < 0x10 )
          {
            if ( a6 )
              *a6 = 16;
            return -1073741820;
          }
          v110 = *(_DWORD *)a4;
          v129 = *(_DWORD **)(a4 + 8);
          v52 = *(unsigned int *)(a4 + 4);
          v120 = *(_DWORD *)(a4 + 4);
          if ( ((unsigned __int8)v129 & 7) != 0 )
            return -2147483646;
          SystemBasicInformation = ExGetSessionPoolTagInformation(v129, v52, &Size, &v110);
          goto LABEL_618;
        case 0x44u:
          if ( Length < 0x20 )
          {
            if ( a6 )
              *a6 = 32;
            return -1073741820;
          }
          v110 = *(_DWORD *)(a4 + 8);
          if ( (a4 & 7) != 0 )
            return -2147483646;
          SystemBasicInformation = MmGetSessionMappedViewInformation(a4, Length, &Size, &v110);
          goto LABEL_618;
        case 0x45u:
          goto LABEL_617;
        case 0x46u:
          if ( Length == 4 )
          {
            *(_DWORD *)a4 = ObpObjectSecurityMode;
            goto LABEL_157;
          }
          if ( a6 )
            *a6 = 4;
          return -1073741820;
        case 0x48u:
          if ( Length != 8 )
            return -1073741811;
          v116 = (_QWORD *)a4;
          v72 = v15 - 7;
          if ( v72 )
          {
            if ( v72 != 1 )
              return -1073741637;
            *(_DWORD *)a4 = 8;
            *(_DWORD *)(a4 + 4) = (unsigned __int8)off_1403FF610[0]();
          }
          else
          {
            *(_DWORD *)a4 = 7;
            LOBYTE(v9) = off_1403FF618[0] != xKdEnumerateDebuggingDevices;
            *(_DWORD *)(a4 + 4) = v9;
          }
          goto LABEL_113;
        case 0x49u:
          SystemBasicInformation = KeBuildLogicalProcessorSystemInformation(v14, a4, Length, &Size);
          HIDWORD(Size) = SystemBasicInformation;
          goto LABEL_618;
        case 0x4Cu:
          SystemBasicInformation = ExpGetSystemFirmwareTableInformation((void *)a4);
          goto LABEL_618;
        case 0x4Du:
          if ( (unsigned int)ExIsRestrictedCaller(v11) )
            return -1073741790;
          KeEnterCriticalRegion();
          ExAcquireResourceExclusiveLite(&PsLoadedModuleResource, 1u);
          v48 = ExpQueryModuleInformationEx(&PsLoadedModuleList, a4, Length, &Size);
LABEL_164:
          SystemBasicInformation = v48;
          ExReleaseResourceLite(&PsLoadedModuleResource);
          KeLeaveCriticalRegion();
          goto LABEL_618;
        case 0x4Fu:
          SystemBasicInformation = PfQuerySuperfetchInformation(79, a4, Length, v11, (__int64)&Size);
          goto LABEL_618;
        case 0x50u:
          SystemBasicInformation = MmQueryMemoryListInformation(
                                     (ULONG_PTR **)0xFFFFFFFFFFFFFFFFLL,
                                     (_OWORD *)a4,
                                     Length,
                                     v11,
                                     &Size);
          goto LABEL_618;
        case 0x53u:
          v75 = 8 * v13;
          LODWORD(Size) = 8 * v13;
          if ( Length < 8 )
            goto LABEL_378;
          v76 = Length >> 3;
          if ( Length >= v75 )
            v76 = v13;
          SystemBasicInformation = Length < v75 ? 0xC0000004 : 0;
          v116 = (_QWORD *)a4;
          KeFlushProcessWriteBuffers(1);
          for ( j = v106; ; j = v103 )
          {
            v107 = v9;
            if ( (unsigned int)v9 >= v76 )
              break;
            ProcNumber.Group = j;
            ProcNumber.Number = v9;
            ProcNumber.Reserved = 0;
            v78 = *(_QWORD *)(*(_QWORD *)(KiProcessorBlock[KeGetProcessorIndexFromNumber(&ProcNumber)] + 24) + 72LL);
            v79 = v116;
            *v116 = v78;
            v116 = v79 + 1;
            LODWORD(v9) = v107 + 1;
          }
          goto LABEL_618;
        case 0x56u:
          SystemBasicInformation = ObQueryRefTraceInformation((void *)a4, Length);
          goto LABEL_618;
        case 0x57u:
          LODWORD(Size) = 8;
          if ( Length == 8 )
          {
            *(_DWORD *)a4 = MmSpecialPoolTag;
            LOBYTE(v9) = MmSpecialPoolCatchOverruns != 0;
            *(_DWORD *)(a4 + 4) = v9;
            SystemBasicInformation = HIDWORD(Size);
          }
          else
          {
            SystemBasicInformation = -1073741820;
          }
          goto LABEL_618;
        case 0x58u:
          LODWORD(Size) = 24;
          if ( Length != 24 )
          {
            SystemBasicInformation = -1073741820;
            goto LABEL_618;
          }
          *(_OWORD *)ProcessId = *(_OWORD *)a4;
          v128 = *(_QWORD *)(a4 + 16);
          if ( LOWORD(ProcessId[1]) || (BYTE2(ProcessId[1]) & 1) != 0 )
            return -1073741811;
          if ( v11 && WORD1(ProcessId[1]) )
          {
            if ( (v128 & 1) != 0 )
              ExRaiseDatatypeMisalignment();
            v44 = v128 + WORD1(ProcessId[1]);
            if ( v44 > 0x7FFFFFFF0000LL || v44 < v128 )
              MEMORY[0x7FFFFFFF0000] = 0;
          }
          CurrentThread = KeGetCurrentThread();
          LODWORD(v112) = WORD1(ProcessId[1]);
          KeEnterCriticalRegionThread((__int64)CurrentThread);
          SystemBasicInformation = PsLookupProcessByProcessId(ProcessId[0], &Process);
          if ( SystemBasicInformation < 0 )
          {
            KeLeaveCriticalRegionThread((__int64)CurrentThread);
            goto LABEL_138;
          }
          SystemBasicInformation = PsQueryFullProcessImageName(Process, a4 + 8, v128, &v112);
          ObfDereferenceObjectWithTag(Process, 0x746C6644u);
          KeLeaveCriticalRegionThread((__int64)CurrentThread);
          if ( SystemBasicInformation == -1073741820 )
            *(_WORD *)(a4 + 10) = (_WORD)v112;
          goto LABEL_618;
        case 0x5Au:
          LODWORD(Size) = 32;
          if ( Length < 0x14 )
          {
            if ( a6 )
              *a6 = 32;
            return -1073741820;
          }
          *(_OWORD *)a4 = ExpBootEnvironmentInformation;
          *(_DWORD *)(a4 + 16) = dword_14040ADF0;
          if ( Length < (unsigned int)Size )
          {
LABEL_275:
            LODWORD(Size) = 20;
            SystemBasicInformation = HIDWORD(Size);
          }
          else
          {
            *(_QWORD *)(a4 + 24) = qword_14040ADF8;
            SystemBasicInformation = HIDWORD(Size);
          }
          goto LABEL_618;
        case 0x5Bu:
          SystemBasicInformation = HvlQueryEnlightenmentInfo(a4, Length, v11, &Size);
          goto LABEL_618;
        case 0x5Cu:
          if ( Length != 40 )
          {
            if ( a6 )
              *a6 = 40;
            return -1073741820;
          }
          SystemBasicInformation = VfGetVerifierInformationEx(a4);
          if ( SystemBasicInformation >= 0 )
            LODWORD(v9) = 40;
          LODWORD(Size) = v9;
          goto LABEL_618;
        case 0x5Fu:
          if ( !v11 || !SeSinglePrivilegeCheck(SeDebugPrivilege, v11) )
            return -1073741790;
          if ( Length >= 0x40 )
          {
            SystemBasicInformation = ExpCovQueryInformation(a4, Length, &Size);
            goto LABEL_618;
          }
          if ( a6 )
            *a6 = 64;
          return -1073741820;
        case 0x62u:
          SystemBasicInformation = IoQuerySystemDeviceName(98LL, a4, Length, &Size);
          goto LABEL_618;
        case 0x63u:
          SystemBasicInformation = IoQuerySystemDeviceName(99LL, a4, Length, &Size);
          goto LABEL_618;
        case 0x64u:
          v138[1] = v14;
          v138[0] = KeQueryGroupAffinity(v14);
          v36 = (0x101010101010101LL
               * ((((v138[0] - ((v138[0] >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                 + (((v138[0] - ((v138[0] >> 1) & 0x5555555555555555uLL)) >> 2) & 0x3333333333333333LL)
                 + ((((v138[0] - ((v138[0] >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                   + (((v138[0] - ((v138[0] >> 1) & 0x5555555555555555uLL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
          SystemBasicInformation = PpmCapturePerformanceDistribution(
                                     0LL,
                                     0,
                                     (unsigned int)((0x101010101010101LL
                                                   * ((((v138[0] - ((v138[0] >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                                     + (((v138[0] - ((v138[0] >> 1) & 0x5555555555555555uLL)) >> 2) & 0x3333333333333333LL)
                                                     + ((((v138[0] - ((v138[0] >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                                       + (((v138[0] - ((v138[0] >> 1) & 0x5555555555555555uLL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24,
                                     (__int64)v138,
                                     (int *)NumberOfBytes);
          if ( SystemBasicInformation != -1073741820 )
            goto LABEL_618;
          v37 = NumberOfBytes[0];
          if ( LODWORD(NumberOfBytes[0]) > Length )
          {
            SystemBasicInformation = -1073741820;
            goto LABEL_94;
          }
          PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, LODWORD(NumberOfBytes[0]), 0x744D5050u);
          v39 = PoolWithTag;
          v112 = PoolWithTag;
          if ( PoolWithTag )
          {
            memset(PoolWithTag, 0, LODWORD(NumberOfBytes[0]));
            SystemBasicInformation = PpmCapturePerformanceDistribution(
                                       v39,
                                       NumberOfBytes[0],
                                       v36,
                                       (__int64)v138,
                                       (int *)&Size);
            if ( SystemBasicInformation >= 0 )
              memmove((void *)a4, v39, (unsigned int)Size);
            ExFreePoolWithTag(v39, 0x744D5050u);
          }
          else
          {
            SystemBasicInformation = -1073741670;
          }
          goto LABEL_618;
        case 0x65u:
          SystemBasicInformation = ExpQueryNumaProximityNode(a4, Length, &Size, v13);
          goto LABEL_618;
        case 0x66u:
          if ( Length >= 0x1B0 )
          {
            v64 = (_OWORD *)*((_QWORD *)PsGetCurrentServerSiloGlobals() + 132);
            LOBYTE(v65) = 1;
            ExAcquireTimeRefreshLock(v65);
            v66 = Src;
            v67 = 3LL;
            v68 = 3LL;
            do
            {
              *v66 = *v64;
              v66[1] = v64[1];
              v66[2] = v64[2];
              v66[3] = v64[3];
              v66[4] = v64[4];
              v66[5] = v64[5];
              v66[6] = v64[6];
              v66 += 8;
              *(v66 - 1) = v64[7];
              v64 += 8;
              --v68;
            }
            while ( v68 );
            *v66 = *v64;
            v66[1] = v64[1];
            v66[2] = v64[2];
            ExReleaseTimeRefreshLock();
            v69 = Src;
            do
            {
              *(_OWORD *)a4 = *v69;
              *(_OWORD *)(a4 + 16) = v69[1];
              *(_OWORD *)(a4 + 32) = v69[2];
              *(_OWORD *)(a4 + 48) = v69[3];
              *(_OWORD *)(a4 + 64) = v69[4];
              *(_OWORD *)(a4 + 80) = v69[5];
              *(_OWORD *)(a4 + 96) = v69[6];
              a4 += 128LL;
              *(_OWORD *)(a4 - 16) = v69[7];
              v69 += 8;
              --v67;
            }
            while ( v67 );
            *(_OWORD *)a4 = *v69;
            *(_OWORD *)(a4 + 16) = v69[1];
            *(_OWORD *)(a4 + 32) = v69[2];
            LODWORD(Size) = 432;
            SystemBasicInformation = 0;
            goto LABEL_618;
          }
          if ( a6 )
            *a6 = 432;
          return -1073741820;
        case 0x67u:
          SystemBasicInformation = SeCodeIntegrityQueryInformation(a4, Length, &Size, v13);
          goto LABEL_618;
        case 0x69u:
          SystemBasicInformation = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, SIZE_T *))off_140401458[0])(
                                     23LL,
                                     0LL,
                                     0LL,
                                     NumberOfBytes);
          if ( SystemBasicInformation != -1073741820 )
            goto LABEL_617;
          v84 = LODWORD(NumberOfBytes[0]);
          if ( Length < LODWORD(NumberOfBytes[0]) || !a4 )
          {
            LODWORD(Size) = NumberOfBytes[0];
            goto LABEL_618;
          }
          if ( v11 )
          {
            PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, LODWORD(NumberOfBytes[0]), 0x6F666E49u);
            v112 = PoolWithQuotaTag;
            if ( !PoolWithQuotaTag )
            {
              SystemBasicInformation = -1073741670;
              goto LABEL_618;
            }
            v84 = LODWORD(NumberOfBytes[0]);
          }
          else
          {
            PoolWithQuotaTag = (_DWORD *)a4;
            v112 = (_DWORD *)a4;
          }
          v86 = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *, size_t *))off_140401458[0])(
                  23LL,
                  v84,
                  PoolWithQuotaTag,
                  &Size);
          SystemBasicInformation = v86;
          if ( !v11 )
            goto LABEL_618;
          if ( v86 < 0 )
            goto LABEL_424;
          goto LABEL_423;
        case 0x6Au:
          SystemBasicInformation = -1073741821;
          goto LABEL_618;
        case 0x6Bu:
          LODWORD(Size) = Length;
          SystemBasicInformation = KeQueryLogicalProcessorRelationship(
                                     0LL,
                                     RelationshipType,
                                     (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)a4,
                                     (PULONG)&Size);
          HIDWORD(Size) = SystemBasicInformation;
          goto LABEL_618;
        case 0x6Cu:
          v82 = 8 * v13;
          LODWORD(Size) = 8 * v13;
          if ( Length < 8 )
            goto LABEL_378;
          v83 = Length >> 3;
          if ( Length >= v82 )
            v83 = v13;
          SystemBasicInformation = Length < v82 ? 0xC0000004 : 0;
          while ( (unsigned int)v9 < v83 )
          {
            ProcNumber.Group = v14;
            ProcNumber.Number = v9;
            ProcNumber.Reserved = 0;
            *(_QWORD *)a4 = *(_QWORD *)(KiProcessorBlock[KeGetProcessorIndexFromNumber(&ProcNumber)] + 23608);
            a4 += 8LL;
            v116 = (_QWORD *)a4;
            LODWORD(v9) = v9 + 1;
            v14 = v106;
          }
          goto LABEL_618;
        case 0x6Du:
          SystemBasicInformation = SmQueryStoreInformation(109LL, a4, Length, v11, &Size);
          goto LABEL_618;
        case 0x70u:
          SystemBasicInformation = IoQueryVhdBootInformation(112LL, a4, Length, &Size);
          goto LABEL_618;
        case 0x71u:
          SystemBasicInformation = PsQueryCpuQuotaInformation((_DWORD *)a4, Length, v11, &Size);
          goto LABEL_618;
        case 0x73u:
          if ( v19 )
          {
            SystemBasicInformation = -1073741820;
          }
          else
          {
            LODWORD(Size) = 8;
            if ( Length >= 8 )
            {
              *(_DWORD *)a4 = DbgkErrorPortStartTimeout;
              *(_DWORD *)(a4 + 4) = DbgkErrorPortCommTimeout;
              SystemBasicInformation = HIDWORD(Size);
            }
            else
            {
              SystemBasicInformation = -1073741820;
            }
          }
          goto LABEL_618;
        case 0x74u:
          SystemBasicInformation = IoQueryLowPriorityIoInformation(116LL, a4, Length, &Size);
          goto LABEL_618;
        case 0x75u:
          LODWORD(Size) = 1096;
          if ( Length != 1096 )
          {
            SystemBasicInformation = -1073741820;
            goto LABEL_618;
          }
          if ( v11 )
            return -1073741790;
          SystemBasicInformation = ExQueryBootEntropyInformation(a4);
          goto LABEL_618;
        case 0x76u:
          if ( Length >= 0x110 )
          {
LABEL_303:
            SystemBasicInformation = VfGetVerifierInformation((void *)a4, Length);
            goto LABEL_618;
          }
          if ( a6 )
            *a6 = 272;
          return -1073741820;
        case 0x79u:
          LODWORD(Size) = 4 * (unsigned __int16)KeNumberNodes;
          if ( Length >= (unsigned int)Size )
          {
            v107 = 0;
            v73 = 0;
            v74 = v113;
            while ( v73 < (unsigned __int16)KeNumberNodes )
            {
              *(_DWORD *)(a4 + 4LL * v73++) = *((_DWORD *)KeNodeDistance
                                              + (unsigned int)v9
                                              + v74 * (unsigned __int16)KeNumberNodes);
              LODWORD(v9) = v73;
              v107 = v73;
            }
            SystemBasicInformation = HIDWORD(Size);
          }
          else
          {
            SystemBasicInformation = -1073741820;
          }
          goto LABEL_618;
        case 0x7Au:
          LODWORD(Size) = 8;
          if ( Length != 8 || !a4 )
            goto LABEL_101;
          PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 8uLL, 0x6F666E49u);
          v116 = PoolWithQuotaTag;
          if ( !PoolWithQuotaTag )
          {
            SystemBasicInformation = -1073741670;
            goto LABEL_618;
          }
          SystemBasicInformation = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *, size_t *))off_140401458[0])(
                                     26LL,
                                     8LL,
                                     PoolWithQuotaTag,
                                     &Size);
          if ( SystemBasicInformation >= 0 )
          {
            *(_DWORD *)a4 = *PoolWithQuotaTag;
            *(_DWORD *)(a4 + 4) ^= (*(_DWORD *)(a4 + 4) ^ PoolWithQuotaTag[1]) & 1;
            v87 = *(_DWORD *)(a4 + 4) ^ (PoolWithQuotaTag[1] ^ *(_DWORD *)(a4 + 4)) & 2;
            *(_DWORD *)(a4 + 4) = v87;
            *(_DWORD *)(a4 + 4) = v87 ^ (PoolWithQuotaTag[1] ^ v87) & 4;
          }
          goto LABEL_424;
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
          v30 = *((_QWORD *)&Src[1] + 1);
          if ( *((_QWORD *)&Src[1] + 1) < *((_QWORD *)&Src[0] + 1) )
            v30 = *((_QWORD *)&Src[0] + 1);
          *((_QWORD *)&Src[1] + 1) = v30;
          *(_OWORD *)a4 = Src[0];
          *(_OWORD *)(a4 + 16) = Src[1];
          LODWORD(Size) = 32;
          SystemBasicInformation = HIDWORD(Size);
          goto LABEL_618;
        case 0x7Cu:
          LODWORD(Size) = 12;
          if ( Length < 4 )
          {
            SystemBasicInformation = -1073741820;
            goto LABEL_618;
          }
          v133 = *(_DWORD *)a4;
          if ( v133 != 1 )
            goto LABEL_617;
          LODWORD(Size) = 12;
          if ( Length >= 0xC )
          {
            *(_DWORD *)(a4 + 8) = 0;
            *(_DWORD *)(a4 + 4) = 0;
            *(_DWORD *)(a4 + 8) |= 1u;
            *(_DWORD *)(a4 + 4) |= 1u;
            if ( MEMORY[0xFFFFF780000003C6] )
              *(_DWORD *)(a4 + 4) &= ~1u;
            SystemBasicInformation = HIDWORD(Size);
          }
          else
          {
            SystemBasicInformation = -1073741820;
          }
          goto LABEL_618;
        case 0x7Du:
          if ( Length < 0x10 )
          {
            if ( a6 )
              *a6 = 16;
            return -1073741820;
          }
          v110 = *(_DWORD *)a4;
          v129 = *(_DWORD **)(a4 + 8);
          v53 = *(_DWORD *)(a4 + 4);
          v120 = v53;
          if ( ((unsigned __int8)v129 & 7) != 0 )
            return -2147483646;
          if ( !(unsigned int)ExIsRestrictedCaller(v11) )
          {
            SystemBasicInformation = ExGetSessionBigPoolInformation(v129, v53, &Size, &v110);
            goto LABEL_618;
          }
          return -1073741790;
        case 0x7Eu:
          LODWORD(Size) = 32;
          if ( Length == 32 )
          {
            SystemBasicInformation = BgkQueryBootGraphicsInformation(0LL, Src);
            if ( SystemBasicInformation >= 0 )
            {
              v88 = *(_QWORD *)&Src[0];
              if ( v11 )
                v88 = 0LL;
              *(_QWORD *)&Src[0] = v88;
              memmove((void *)a4, Src, (unsigned int)Size);
            }
          }
          else
          {
            SystemBasicInformation = -1073741820;
          }
          goto LABEL_618;
        case 0x80u:
          if ( v19 )
          {
            SystemBasicInformation = -1073741820;
          }
          else
          {
            SystemBasicInformation = MmEnumerateBadPages(&v131);
            v91 = v131;
            if ( v131 )
              LODWORD(v9) = 8 * *(_DWORD *)v131;
            LODWORD(Size) = v9;
            if ( Length < (unsigned int)v9 )
              SystemBasicInformation = -1073741820;
            if ( v131 )
            {
              if ( SystemBasicInformation >= 0 )
                memmove((void *)a4, (char *)v131 + 8, (unsigned int)v9);
              ExFreePoolWithTag(v91, 0);
            }
          }
          goto LABEL_618;
        case 0x85u:
          if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, v11) )
            return -1073741727;
          SystemBasicInformation = ExpGetSystemPlatformBinary(a4, Length, v11);
          goto LABEL_618;
        case 0x86u:
          LODWORD(Size) = 32;
          if ( Length == 32 )
            SystemBasicInformation = ExHandleSPCall2(v11, a4);
          else
            SystemBasicInformation = -1073741820;
          goto LABEL_618;
        case 0x87u:
          LODWORD(Size) = 8;
          if ( Length < 8 )
          {
            SystemBasicInformation = -1073741820;
            goto LABEL_618;
          }
          if ( (unsigned int)HvlQueryActiveProcessors(&v123, 0LL) )
            goto LABEL_617;
          SystemBasicInformation = HvlQueryProcessorTopologyCount(0LL, &v122);
          if ( SystemBasicInformation )
            goto LABEL_617;
          *(_DWORD *)a4 = v123;
          *(_DWORD *)(a4 + 4) = v122;
          goto LABEL_618;
        case 0x88u:
        case 0x89u:
          if ( Length == 48 )
            return ExpGetDeviceDataInformation(v114, a4, 48LL, v13);
          if ( a6 )
            *a6 = 48;
          return -1073741820;
        case 0x8Au:
          SystemBasicInformation = ExpQueryMemoryTopologyInformation((void *)a4);
          goto LABEL_618;
        case 0x8Bu:
          SystemBasicInformation = ExpQueryChannelInformation((void *)a4);
          goto LABEL_618;
        case 0x8Cu:
          if ( a6 || Length >= 8 )
          {
            SystemBasicInformation = BgkQueryBootGraphicsInformation(2LL, &Size);
            if ( SystemBasicInformation >= 0 )
            {
              if ( (_DWORD)Size )
              {
                if ( Length >= (unsigned int)Size )
                {
                  SystemBasicInformation = BgkQueryBootGraphicsInformation(1LL, &P);
                  if ( SystemBasicInformation >= 0 )
                  {
                    v89 = P;
                    if ( P )
                    {
                      memmove((void *)a4, P, (unsigned int)Size);
                      ExFreePoolWithTag(v89, 0x4B494742u);
                    }
                    else
                    {
                      SystemBasicInformation = -1073741670;
                    }
                  }
                }
                else
                {
                  SystemBasicInformation = -1073741789;
                }
              }
              else
              {
                SystemBasicInformation = -1073741670;
              }
            }
          }
          else
          {
            SystemBasicInformation = -1073741811;
          }
          goto LABEL_618;
        case 0x8Fu:
        case 0x91u:
        case 0xABu:
        case 0xB3u:
          SystemBasicInformation = SeSecureBootQueryInformation(v7, a4, Length, &Size);
          goto LABEL_618;
        case 0x93u:
          SystemBasicInformation = ExpQueryPortableWorkspaceEfiLauncherInformation(a4, Length, &Size, v13);
          goto LABEL_618;
        case 0x95u:
          if ( Length < 3 )
          {
            if ( a6 )
              *a6 = 3;
            return -1073741820;
          }
          *(_BYTE *)a4 = KdpBootedNodebug == 0;
          *(_BYTE *)(a4 + 1) = (_BYTE)KdDebuggerEnabled;
          *(_BYTE *)(a4 + 2) = (_BYTE)KdDebuggerNotPresent == 0;
          v8 = 3;
LABEL_254:
          LODWORD(Size) = v8;
          SystemBasicInformation = HIDWORD(Size);
          goto LABEL_618;
        case 0x96u:
          if ( !ExBootLoaderMetadata )
          {
            LODWORD(Size) = 0;
            SystemBasicInformation = HIDWORD(Size);
            goto LABEL_618;
          }
          v90 = *(_DWORD *)ExBootLoaderMetadata;
          LODWORD(Size) = *(_DWORD *)ExBootLoaderMetadata;
          if ( !a4 )
            goto LABEL_59;
          if ( Length < v90 )
          {
            SystemBasicInformation = -1073741820;
            goto LABEL_618;
          }
          if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, v11) )
            return -1073741727;
          memmove((void *)a4, (const void *)(ExBootLoaderMetadata + 4), (unsigned int)Size);
          SystemBasicInformation = HIDWORD(Size);
          goto LABEL_618;
        case 0x97u:
          LODWORD(Size) = 4;
          if ( Length >= 4 )
          {
            *(_DWORD *)a4 = ExSoftRebootFlags;
            SystemBasicInformation = HIDWORD(Size);
            goto LABEL_618;
          }
          if ( a6 )
            *a6 = 4;
          return -1073741820;
        case 0x99u:
          if ( v19 )
          {
            SystemBasicInformation = -1073741820;
            goto LABEL_618;
          }
          LODWORD(Size) = 32;
          if ( Length >= 0x20 )
          {
            *(_QWORD *)a4 = PoOffCrashConfigTable;
            *(_DWORD *)(a4 + 8) = DWORD2(PoOffCrashConfigTable);
            *(_QWORD *)(a4 + 16) = xmmword_14041A670;
            *(_DWORD *)(a4 + 24) = DWORD2(xmmword_14041A670);
LABEL_513:
            SystemBasicInformation = HIDWORD(Size);
            goto LABEL_618;
          }
          if ( Length >= 0xC )
          {
            LODWORD(Size) = 12;
            *(_QWORD *)a4 = PoOffCrashConfigTable;
            *(_DWORD *)(a4 + 8) = DWORD2(PoOffCrashConfigTable);
            goto LABEL_513;
          }
          SystemBasicInformation = -1073741820;
          HIDWORD(Size) = -1073741820;
LABEL_618:
          if ( a6 )
            *a6 = Size;
LABEL_138:
          result = SystemBasicInformation;
          break;
        case 0x9Au:
          if ( Length >= 0x20 )
          {
            SystemBasicInformation = ExpGetSystemProcessorFeaturesInformation(a4);
            LODWORD(Size) = 32;
            goto LABEL_618;
          }
          if ( a6 )
            *a6 = 32;
          return -1073741820;
        case 0x9Cu:
          LODWORD(Size) = 128;
          if ( Length == 128 )
          {
            SystemBasicInformation = BgkQueryBootGraphicsInformation(3LL, Src);
            if ( SystemBasicInformation >= 0 )
              memmove((void *)a4, Src, (unsigned int)Size);
          }
          else
          {
            SystemBasicInformation = -1073741820;
          }
          goto LABEL_618;
        case 0x9Du:
          LODWORD(Size) = WORD1(qword_14040AE08) + 24;
          if ( Length >= (unsigned int)Size )
          {
            v92 = (void *)(a4 + 24);
            *(_QWORD *)a4 = 0LL;
            *(_QWORD *)(a4 + 8) = 0LL;
            *(_QWORD *)(a4 + 16) = 0LL;
            *(_DWORD *)a4 = ExpManufacturingInformation;
            *(_DWORD *)(a4 + 8) = qword_14040AE08;
            if ( (_WORD)qword_14040AE08 )
            {
              *(_QWORD *)(a4 + 16) = v92;
              memmove(v92, qword_14040AE10, WORD1(qword_14040AE08));
            }
            SystemBasicInformation = HIDWORD(Size);
          }
          else
          {
            SystemBasicInformation = -1073741820;
          }
          goto LABEL_618;
        case 0x9Eu:
          LODWORD(Size) = 1;
          if ( Length )
          {
            *(_BYTE *)a4 = PoEnergyEstimationEnabled();
            SystemBasicInformation = HIDWORD(Size);
            goto LABEL_618;
          }
          if ( a6 )
            *a6 = 1;
          goto LABEL_101;
        case 0x9Fu:
          SystemBasicInformation = HvlQueryDetailInfo(a4, Length, v11, &Size);
          goto LABEL_618;
        case 0xA0u:
          v93 = (_DWORD)v13 << 6;
          LODWORD(Size) = (_DWORD)v13 << 6;
          if ( Length < 0x40 )
            goto LABEL_378;
          v94 = Length >> 6;
          if ( Length >= v93 )
            v94 = v13;
          SystemBasicInformation = Length < v93 ? 0xC0000004 : 0;
          while ( (unsigned int)v9 < v94 )
          {
            ProcNumber.Group = v14;
            ProcNumber.Number = v9;
            ProcNumber.Reserved = 0;
            v95 = KiProcessorBlock[KeGetProcessorIndexFromNumber(&ProcNumber)];
            KeQueryCycleTimeStatsProcessor(v95, (_QWORD *)a4);
            a4 += 64LL;
            v116 = (_QWORD *)a4;
            LODWORD(v9) = v9 + 1;
            v14 = v106;
          }
          goto LABEL_618;
        case 0xA2u:
          SystemBasicInformation = SeQueryTrustedPlatformModuleInformation((int *)a4, Length, &Size);
          goto LABEL_618;
        case 0xA3u:
          if ( Length )
          {
            *(_BYTE *)a4 = KdIgnoreUmExceptions;
            LODWORD(Size) = 1;
            SystemBasicInformation = HIDWORD(Size);
            goto LABEL_618;
          }
          if ( a6 )
            *a6 = 1;
          return -1073741820;
        case 0xA4u:
        case 0xACu:
        case 0xBDu:
        case 0xBEu:
        case 0xC7u:
          SystemBasicInformation = SeCodeIntegrityQueryPolicyInformation(v7, a4, Length, &Size);
          goto LABEL_618;
        case 0xA5u:
          LODWORD(Size) = 16;
          if ( Length != 16 )
          {
            if ( a6 )
              *a6 = 16;
            goto LABEL_101;
          }
          LOBYTE(Src[0]) ^= (LOBYTE(Src[0]) ^ (16 * ExpFirmwarePageProtectionSupported)) & 0x10;
          if ( VslIsSecureKernelRunning() )
          {
            v104[0] = 0;
            LOBYTE(Src[0]) |= 1u;
            NestedPageProtectionFlags = VslGetNestedPageProtectionFlags();
            v97 = Src[0];
            if ( (NestedPageProtectionFlags & 2) != 0 )
            {
              v97 = LOBYTE(Src[0]) | 2;
              LOBYTE(Src[0]) |= 2u;
            }
            if ( (NestedPageProtectionFlags & 0x20) != 0 )
            {
              v97 |= 4u;
              LOBYTE(Src[0]) = v97;
            }
            if ( (NestedPageProtectionFlags & 0x10) != 0 )
              LOBYTE(Src[0]) = v97 | 8;
            if ( (NestedPageProtectionFlags & 0x200) != 0 )
              BYTE1(Src[0]) |= 2u;
            if ( v125 )
            {
              SystemBasicInformation = VslIsTrustletRunning(v125, v104);
              BYTE1(Src[0]) ^= (v104[0] ^ BYTE1(Src[0])) & 1;
            }
            else
            {
              SystemBasicInformation = HIDWORD(Size);
            }
            LOBYTE(Src[0]) ^= (LOBYTE(Src[0]) ^ (32 * ExpIsIumEncryptionKeyAvailable())) & 0x20;
          }
          else
          {
            SystemBasicInformation = HIDWORD(Size);
          }
          *(_OWORD *)a4 = Src[0];
          goto LABEL_618;
        case 0xA6u:
          SystemBasicInformation = SeQueryHSTIResults(a4, Length, &Size, v13);
          goto LABEL_618;
        case 0xA7u:
          SystemBasicInformation = ExpQuerySingleModuleInformation(a4, Length, v11, &Size);
          goto LABEL_618;
        case 0xA9u:
          SystemBasicInformation = HvlQueryVsmProtectionInfo(a4, Length, &Size, v13);
          goto LABEL_618;
        case 0xADu:
          result = ExCpuSetResourceManagerAccessCheck(v11);
          if ( result < 0 )
            return result;
          LODWORD(Size) = 168;
          if ( Length == 168 )
            SystemBasicInformation = KeGetAffinitizedInterruptsInfo((_WORD *)a4);
          else
            SystemBasicInformation = -1073741820;
          goto LABEL_618;
        case 0xAEu:
          SystemBasicInformation = PsRootSiloInformation(a4, Length, &Size, v13);
          goto LABEL_618;
        case 0xAFu:
          if ( Handle )
          {
            result = ObReferenceObjectByHandle(Handle, 0x1000u, (POBJECT_TYPE)PsProcessType, v11, &Object, 0LL);
            Process = (PEPROCESS)Object;
            if ( result < 0 )
              return result;
          }
          else
          {
            Process = 0LL;
          }
          SystemBasicInformation = KeQueryCpuSetInformation((void *)a4);
          if ( Process )
            ObfDereferenceObject(Process);
          goto LABEL_618;
        case 0xB2u:
          if ( !Length )
          {
            SystemBasicInformation = -1073741789;
            goto LABEL_618;
          }
          if ( v11 && !SeSinglePrivilegeCheck(SeSystemProfilePrivilege, v11) )
            return -1073741727;
          v98 = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, Length, 0x6F666E49u);
          PoolWithQuotaTag = v98;
          v112 = v98;
          if ( !v98 )
          {
            SystemBasicInformation = -1073741670;
            goto LABEL_618;
          }
          memset(v98, 0, Length);
          SystemBasicInformation = VslQuerySecureKernelProfileInformation(
                                     v132,
                                     (__int64)PoolWithQuotaTag,
                                     Length,
                                     &Size);
          if ( SystemBasicInformation >= 0 )
            goto LABEL_423;
          goto LABEL_424;
        case 0xB4u:
          SystemBasicInformation = ExpQueryInterruptSteeringInformation((_DWORD)v117, v19, a4, Length, (__int64)&Size);
          goto LABEL_618;
        case 0xB5u:
          if ( Handle )
          {
            result = ObReferenceObjectByHandle(Handle, 0x1000u, (POBJECT_TYPE)PsProcessType, v11, v137, 0LL);
            v9 = (__int64)v137[0];
            Process = (PEPROCESS)v137[0];
            if ( result < 0 )
              return result;
          }
          else
          {
            Process = 0LL;
          }
          SystemBasicInformation = PsWow64GetSupportedArchitectures((_DWORD *)a4, Length, (unsigned int *)&Size, v9);
          if ( Process )
            ObfDereferenceObject(Process);
          goto LABEL_618;
        case 0xB6u:
          if ( Length != 56 )
          {
            if ( a6 )
              *a6 = 56;
            return -1073741820;
          }
          v21 = PsGetCurrentProcess();
          v22 = MmGetProcessPartitionId((__int64)v21);
          *(_QWORD *)&Src[0] = *(_QWORD *)(*(_QWORD *)(qword_14043B808 + 8LL * v22) + 7120LL) << 12;
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
LABEL_59:
          SystemBasicInformation = HIDWORD(Size);
          goto LABEL_618;
        case 0xB7u:
          if ( Length != 16 )
            return -1073741820;
          v137[1] = *(PVOID *)a4;
          v134 = *(_DWORD *)(a4 + 8);
          SystemBasicInformation = ExpQueryCodeIntegrityCertificateInfo();
          goto LABEL_618;
        case 0xB8u:
          if ( Length != 24 )
          {
            if ( a6 )
              *a6 = 24;
            return -1073741820;
          }
          v26 = PsGetCurrentProcess();
          v27 = MmGetProcessPartitionId((__int64)v26);
          *(_QWORD *)&Src[0] = *(_QWORD *)(*(_QWORD *)(qword_14043B808 + 8LL * v27) + 7120LL) << 12;
          *((_QWORD *)&Src[0] + 1) = MmGetLowestPhysicalPage(v27) << 12;
          *(_QWORD *)&Src[1] = (MmGetHighestPhysicalPage(v27) << 12) + 4095;
          *(_OWORD *)a4 = Src[0];
          *(_QWORD *)(a4 + 16) = *(_QWORD *)&Src[1];
LABEL_64:
          LODWORD(Size) = 24;
          SystemBasicInformation = HIDWORD(Size);
          goto LABEL_618;
        case 0xB9u:
          SystemBasicInformation = WbDispatchOperation((char *)a4, Length);
          goto LABEL_618;
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
          SystemBasicInformation = PsQueryActivityModerationUserSettings(Src);
          if ( SystemBasicInformation >= 0 )
            *(_QWORD *)a4 = *(_QWORD *)&Src[0];
          goto LABEL_618;
        case 0xC0u:
          if ( Length >= 0x20 )
          {
            SystemBasicInformation = ExpGetSystemFlushInformation(a4);
            LODWORD(Size) = 32;
            goto LABEL_618;
          }
          if ( a6 )
            *a6 = 32;
          return -1073741820;
        case 0xC1u:
          v80 = 8 * KeQueryActiveGroupCount();
          LODWORD(Size) = v80;
          if ( Length >= v80 )
          {
            memset((void *)a4, 0, v80);
            v107 = 0;
            while ( (unsigned int)v9 < (unsigned __int16)KeNumberNodes )
            {
              v81 = KeNodeBlock[(unsigned int)v9];
              v103 = *(_WORD *)(v81 + 144);
              *(_QWORD *)(a4 + 8LL * v103) |= *(_QWORD *)(v81 + 16);
              LODWORD(v9) = ++v107;
            }
            SystemBasicInformation = HIDWORD(Size);
          }
          else
          {
LABEL_378:
            SystemBasicInformation = -1073741789;
          }
          goto LABEL_618;
        case 0xC3u:
          if ( Length >= 8 )
          {
            SystemBasicInformation = ExpGetSystemWriteConstraintInformation(a4);
            LODWORD(Size) = 8;
            goto LABEL_618;
          }
          if ( a6 )
            *a6 = 8;
          return -1073741820;
        case 0xC4u:
          SystemBasicInformation = KeQueryKvaShadowInformation(a4, Length, &Size, v13);
          goto LABEL_618;
        case 0xC5u:
          LODWORD(Size) = 8;
          if ( Length >= 8 )
          {
            v100 = qword_14043B0C8;
            *(_QWORD *)a4 = 0LL;
            *(_QWORD *)a4 = v100;
            SystemBasicInformation = HIDWORD(Size);
          }
          else
          {
            SystemBasicInformation = -1073741820;
          }
          goto LABEL_618;
        case 0xC6u:
          SystemBasicInformation = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, SIZE_T *))off_140401458[0])(
                                     34LL,
                                     0LL,
                                     0LL,
                                     NumberOfBytes);
          if ( SystemBasicInformation != -1073741820 )
            return -1073741637;
          v37 = NumberOfBytes[0];
          if ( Length < LODWORD(NumberOfBytes[0]) || !a4 )
          {
LABEL_94:
            LODWORD(Size) = v37;
            goto LABEL_618;
          }
          if ( v11 )
          {
            PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, LODWORD(NumberOfBytes[0]), 0x6F666E49u);
            v112 = PoolWithQuotaTag;
            if ( !PoolWithQuotaTag )
            {
              SystemBasicInformation = -1073741670;
              goto LABEL_618;
            }
            v37 = NumberOfBytes[0];
          }
          else
          {
            PoolWithQuotaTag = (_DWORD *)a4;
            v112 = (_DWORD *)a4;
          }
          v99 = ((__int64 (__fastcall *)(__int64, _QWORD, _DWORD *, size_t *))off_140401458[0])(
                  34LL,
                  v37,
                  PoolWithQuotaTag,
                  &Size);
          SystemBasicInformation = v99;
          if ( v11 )
          {
            if ( v99 >= 0 )
LABEL_423:
              memmove((void *)a4, PoolWithQuotaTag, (unsigned int)Size);
LABEL_424:
            ExFreePoolWithTag(PoolWithQuotaTag, 0x6F666E49u);
          }
          goto LABEL_618;
        case 0xC8u:
          SystemBasicInformation = IoQuerySystemDeviceName(200LL, a4, Length, &Size);
          goto LABEL_618;
        case 0xC9u:
          SystemBasicInformation = KeQuerySpeculationControlInformation((void *)a4, Length);
          goto LABEL_618;
        case 0xCAu:
          LODWORD(Size) = 1;
          if ( Length == 1 )
          {
            SystemBasicInformation = ((__int64 (__fastcall *)(__int64, __int64, _OWORD *, int *))off_140401458[0])(
                                       47LL,
                                       1LL,
                                       Src,
                                       &v121);
            if ( SystemBasicInformation >= 0 && v121 == 1 )
            {
              v116 = (_QWORD *)a4;
              *(_BYTE *)a4 = Src[0];
            }
            else
            {
LABEL_617:
              SystemBasicInformation = -1073741637;
            }
          }
          else
          {
            if ( a6 )
              *a6 = 1;
LABEL_101:
            SystemBasicInformation = -1073741820;
          }
          goto LABEL_618;
        case 0xCEu:
          if ( Length != 8 )
          {
            if ( a6 )
              *a6 = 8;
            return -1073741820;
          }
          *(_BYTE *)a4 = *(_BYTE *)ExLeapSecondData != 0;
          *(_DWORD *)(a4 + 4) = 0;
LABEL_113:
          LODWORD(Size) = 8;
          SystemBasicInformation = HIDWORD(Size);
          goto LABEL_618;
        case 0xCFu:
          if ( Length != 4 )
          {
            if ( a6 )
              *a6 = 4;
            return -1073741820;
          }
          *(_DWORD *)a4 = NtGlobalFlag2;
LABEL_157:
          LODWORD(Size) = 4;
          SystemBasicInformation = HIDWORD(Size);
          goto LABEL_618;
        default:
          return -1073741821;
      }
      return result;
    case 0xAFu:
    case 0xB5u:
      v19 = v105;
      if ( v105 != 8 )
        return -1073741811;
      Handle = *(HANDLE *)v117;
      goto LABEL_32;
    case 0xB2u:
      v19 = v105;
      if ( v105 != 8 )
        return -1073741811;
      v132 = *(_QWORD *)v117;
      goto LABEL_32;
    default:
      goto LABEL_31;
  }
}
