/*
 * XREFs of NtQueryInformationProcess @ 0x1405D17E0
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentProcess @ 0x1400065C0 (PsGetCurrentProcess.c)
 *     KeQueryAffinityProcess @ 0x1400065E0 (KeQueryAffinityProcess.c)
 *     KeQueryGroupMaskProcess @ 0x14000671C (KeQueryGroupMaskProcess.c)
 *     KeStackAttachProcess @ 0x140013D00 (KeStackAttachProcess.c)
 *     MmGetSessionId @ 0x14001D880 (MmGetSessionId.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14003E070 (ObfReferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     KeUnstackDetachProcess @ 0x1400437D0 (KeUnstackDetachProcess.c)
 *     ExReleaseRundownProtection_0 @ 0x140043C20 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140043CA0 (ExAcquireRundownProtection_0.c)
 *     KeEnterCriticalRegionThread @ 0x140053A10 (KeEnterCriticalRegionThread.c)
 *     KeQuerySystemTimePrecise @ 0x140082440 (KeQuerySystemTimePrecise.c)
 *     ExGenRandom @ 0x14009C340 (ExGenRandom.c)
 *     PsIsProtectedProcess @ 0x1400EA010 (PsIsProtectedProcess.c)
 *     ExUnlockUserBuffer @ 0x1400F4860 (ExUnlockUserBuffer.c)
 *     ExReleaseExtensionTable @ 0x1400FD838 (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x1400FD850 (ExGetExtensionTable.c)
 *     PsGetWin32KFilterSet @ 0x140116AE0 (PsGetWin32KFilterSet.c)
 *     MmQueryWorkingSetInformation @ 0x14011FEF0 (MmQueryWorkingSetInformation.c)
 *     PsQueryProcessCommandLine @ 0x14012CA00 (PsQueryProcessCommandLine.c)
 *     MmQueryCommitReleaseState @ 0x140131454 (MmQueryCommitReleaseState.c)
 *     PsGetProcessProtection @ 0x140134E50 (PsGetProcessProtection.c)
 *     PspUnlockProcessShared @ 0x14015B000 (PspUnlockProcessShared.c)
 *     PspLockProcessShared @ 0x14015BD24 (PspLockProcessShared.c)
 *     ExQueryHandleExceptionsPermanency @ 0x14015CA28 (ExQueryHandleExceptionsPermanency.c)
 *     xKdEnumerateDebuggingDevices @ 0x14019EDF0 (xKdEnumerateDebuggingDevices.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwQueryInformationJobObject @ 0x1401C34D0 (ZwQueryInformationJobObject.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     KeQueryCpuSetsProcess @ 0x1402ACAFC (KeQueryCpuSetsProcess.c)
 *     PspReadProcessSecurityDomain @ 0x140307130 (PspReadProcessSecurityDomain.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PsQueryTotalCycleTimeProcess @ 0x1405B4CC0 (PsQueryTotalCycleTimeProcess.c)
 *     ObOpenObjectByPointer @ 0x1405D0890 (ObOpenObjectByPointer.c)
 *     ObQueryDeviceMapInformation @ 0x1405D1260 (ObQueryDeviceMapInformation.c)
 *     PsQueryRuntimeProcess @ 0x1405D3D30 (PsQueryRuntimeProcess.c)
 *     PsQueryProcessEnergyValues @ 0x1405E46D0 (PsQueryProcessEnergyValues.c)
 *     ObReferenceProcessHandleTable @ 0x1405E6F94 (ObReferenceProcessHandleTable.c)
 *     ObReferenceObjectByHandleWithTag @ 0x1405F13C0 (ObReferenceObjectByHandleWithTag.c)
 *     ObReferenceObjectByHandle @ 0x1405FB4B0 (ObReferenceObjectByHandle.c)
 *     MmCopyVirtualMemory @ 0x1405FE630 (MmCopyVirtualMemory.c)
 *     ObCloseHandle @ 0x140610D90 (ObCloseHandle.c)
 *     PsQueryStatisticsProcess @ 0x140613A50 (PsQueryStatisticsProcess.c)
 *     PsReferenceProcessFilePointer @ 0x14061B380 (PsReferenceProcessFilePointer.c)
 *     IoQueryFileDosDeviceName @ 0x14062BC30 (IoQueryFileDosDeviceName.c)
 *     PsGetProcessDeepFreezeStats @ 0x140639374 (PsGetProcessDeepFreezeStats.c)
 *     PsQueryProcessAttributes @ 0x1406845F4 (PsQueryProcessAttributes.c)
 *     ExLockUserBuffer @ 0x1406A49BC (ExLockUserBuffer.c)
 *     ExEnumHandleTable @ 0x1406B6380 (ExEnumHandleTable.c)
 *     PspQueryQuotaLimits @ 0x1406C6C14 (PspQueryQuotaLimits.c)
 *     MmGetSectionInformation @ 0x1406C7100 (MmGetSectionInformation.c)
 *     EtwQueryProcessTelemetryInfo @ 0x1406C9A78 (EtwQueryProcessTelemetryInfo.c)
 *     ObGetProcessHandleCount @ 0x1406CC5B0 (ObGetProcessHandleCount.c)
 *     ObDereferenceProcessHandleTable @ 0x1406CC7E0 (ObDereferenceProcessHandleTable.c)
 *     PsQueryFullProcessImageName @ 0x1406CCCC4 (PsQueryFullProcessImageName.c)
 *     ExIsRestrictedCaller @ 0x1406D17C8 (ExIsRestrictedCaller.c)
 *     PspAllocateAndQueryProcessNotificationChannel @ 0x1406D3D30 (PspAllocateAndQueryProcessNotificationChannel.c)
 *     PsQueryProcessQuotaCounters @ 0x1406D72B0 (PsQueryProcessQuotaCounters.c)
 *     KeGetExecuteOptions @ 0x1406DE3A0 (KeGetExecuteOptions.c)
 *     PsQueryProcessSignatureMitigationPolicy @ 0x1406EC4E0 (PsQueryProcessSignatureMitigationPolicy.c)
 *     PspGetNoChildProcessRestrictedPolicy @ 0x1406F06C0 (PspGetNoChildProcessRestrictedPolicy.c)
 *     ExQueryRaiseUMExceptionOnInvalidHandleClose @ 0x14073D204 (ExQueryRaiseUMExceptionOnInvalidHandleClose.c)
 *     ExSystemExceptionFilter @ 0x140749ED0 (ExSystemExceptionFilter.c)
 *     DbgkOpenProcessDebugPort @ 0x1408472F8 (DbgkOpenProcessDebugPort.c)
 *     VslGetSecurePebAddress @ 0x140851C6C (VslGetSecurePebAddress.c)
 *     VslLiveDumpCaptureProcess @ 0x140851FCC (VslLiveDumpCaptureProcess.c)
 *     PoQueryProcessEnergyTrackingState @ 0x1408B4394 (PoQueryProcessEnergyTrackingState.c)
 *     PsGetKeepAliveCountProcess @ 0x1408C5F84 (PsGetKeepAliveCountProcess.c)
 *     PspQueryPooledQuotaLimits @ 0x1408C632C (PspQueryPooledQuotaLimits.c)
 *     PspQueryWorkingSetWatch @ 0x1408C64D4 (PspQueryWorkingSetWatch.c)
 *     PsIumGetOnDemandDebugChallenge @ 0x1408CABF4 (PsIumGetOnDemandDebugChallenge.c)
 *     EtwQueryProcessTelemetryCoverage @ 0x1408F2928 (EtwQueryProcessTelemetryCoverage.c)
 *     ExDereferenceHandleDebugInfo @ 0x14090AC64 (ExDereferenceHandleDebugInfo.c)
 *     ExQueryHandleExceptions @ 0x14090AEA0 (ExQueryHandleExceptions.c)
 *     ExQueryProcessHandleInformation @ 0x14090AEB0 (ExQueryProcessHandleInformation.c)
 *     ExReferenceHandleDebugInfo @ 0x14090B0B0 (ExReferenceHandleDebugInfo.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913920 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtQueryInformationProcess(
        HANDLE ProcessHandle,
        PROCESSINFOCLASS ProcessInformationClass,
        PVOID ProcessInformation,
        ULONG ProcessInformationLength,
        PULONG ReturnLength)
{
  size_t v5; // rdi
  unsigned __int64 v6; // rsi
  unsigned __int64 v8; // r15
  unsigned __int8 v9; // r13
  __int64 v10; // rax
  __int64 v11; // rcx
  NTSTATUS result; // eax
  int v13; // ebx
  int v14; // ebx
  _DWORD *v15; // rcx
  int v16; // eax
  HANDLE v17; // rcx
  NTSTATUS ExecuteOptions; // ebx
  unsigned int v19; // eax
  __int64 v20; // rcx
  _QWORD *v21; // rcx
  int v22; // ebx
  unsigned __int64 v23; // rdi
  ULONG v24; // r13d
  HANDLE v25; // rcx
  KPROCESSOR_MODE v26; // r9
  __int64 v27; // r14
  _QWORD *v28; // r10
  __int64 v29; // rdx
  unsigned __int64 Group; // r8
  _DWORD *v31; // rdx
  __int64 v32; // rax
  _DWORD *v33; // rcx
  unsigned int v34; // r8d
  __int16 v35; // cx
  struct _EX_RUNDOWN_REF *v36; // rcx
  void *v37; // rdi
  int v38; // r13d
  unsigned __int64 *v39; // rax
  HANDLE v40; // rbx
  _DWORD *v41; // rax
  int v42; // ecx
  int v43; // r14d
  POBJECT_NAME_INFORMATION v44; // rcx
  ULONG v45; // edx
  unsigned __int16 MaximumLength; // ax
  int SessionId; // ebx
  struct _KPRCB *CurrentPrcb; // rdi
  ULONG LowPart; // ebx
  int v50; // ecx
  unsigned __int64 v51; // rax
  __int64 v52; // rbx
  HANDLE v53; // rdi
  void *CurrentProcess; // rax
  unsigned __int64 *v55; // rcx
  __int64 v56; // rax
  __int64 v57; // rcx
  unsigned __int16 v58; // r15
  ULONG v59; // eax
  _DWORD *v60; // rdx
  int v61; // eax
  int v62; // eax
  int v63; // eax
  BOOLEAN v64; // al
  BOOL v65; // r14d
  _DWORD *v66; // rcx
  int v67; // eax
  int v68; // ecx
  int v69; // eax
  int v70; // ecx
  int v71; // eax
  __int64 v72; // rax
  _DWORD *v73; // rcx
  int v74; // eax
  int v75; // eax
  int v76; // eax
  int v77; // eax
  void *v78; // rbx
  __int64 v79; // rbx
  __int64 v80; // r14
  struct _KTHREAD *v81; // r13
  unsigned __int64 v82; // rdx
  int v83; // ecx
  unsigned int v84; // edx
  int v85; // ecx
  bool v86; // zf
  PVOID v87; // rbx
  HANDLE v88; // rcx
  int ProcessHandleCount; // ebx
  NTSTATUS ProcessTelemetryCoverage; // eax
  int v91; // edi
  int v92; // ebx
  int v93; // ebx
  __int64 v94; // rdi
  void *v95; // rax
  void *v96; // r13
  __int64 v97; // rax
  __int64 v98; // r8
  __int64 v99; // rdx
  _OWORD *v100; // rax
  __int64 v101; // r9
  int v102; // ecx
  int v103; // ecx
  int v104; // r14d
  __int64 v105; // rdx
  __int64 v106; // rcx
  unsigned int v107; // eax
  ULONG v108; // ecx
  unsigned int v109; // edx
  __int64 v110; // rax
  __int64 v111; // rax
  __int64 v112; // rdx
  __int64 v113; // rax
  __int64 v114; // rax
  ULONG v115; // ebx
  HANDLE v116; // rbx
  void *v117; // rax
  int NoChildProcessRestrictedPolicy; // eax
  int v119; // eax
  int v120; // eax
  unsigned __int64 ExtensionTable; // rbx
  HANDLE v122; // rbx
  _DWORD *v123; // rcx
  int v124; // eax
  int v125; // r14d
  ULONG v126; // ebx
  NTSTATUS v127; // edi
  _DWORD *v128; // rcx
  __int64 v129; // rcx
  PVOID *v130; // rax
  _KPROCESS *v131; // rax
  unsigned __int64 v132; // r8
  __int64 v133; // rcx
  __int64 *v134; // rdx
  int v135; // eax
  _DWORD *v136; // rdx
  int v137; // eax
  int v138; // eax
  _DWORD *v139; // rcx
  int v140; // eax
  _DWORD *v141; // rcx
  int v142; // eax
  signed __int32 v143[8]; // [rsp+0h] [rbp-9E8h] BYREF
  PVOID Object; // [rsp+40h] [rbp-9A8h] BYREF
  NTSTATUS v145; // [rsp+48h] [rbp-9A0h]
  HANDLE Handle; // [rsp+50h] [rbp-998h]
  KPROCESSOR_MODE v147; // [rsp+58h] [rbp-990h]
  unsigned __int8 v148; // [rsp+59h] [rbp-98Fh]
  unsigned int v149; // [rsp+5Ch] [rbp-98Ch] BYREF
  unsigned int GroupMaskProcess; // [rsp+60h] [rbp-988h] BYREF
  HANDLE v151; // [rsp+68h] [rbp-980h]
  char v152; // [rsp+70h] [rbp-978h] BYREF
  char v153; // [rsp+71h] [rbp-977h] BYREF
  bool v154; // [rsp+72h] [rbp-976h] BYREF
  ULONG v155; // [rsp+74h] [rbp-974h]
  int v156; // [rsp+78h] [rbp-970h]
  unsigned __int64 v157; // [rsp+80h] [rbp-968h]
  unsigned __int64 v158; // [rsp+88h] [rbp-960h]
  int v159; // [rsp+90h] [rbp-958h]
  HANDLE v160; // [rsp+98h] [rbp-950h] BYREF
  PVOID v161; // [rsp+A0h] [rbp-948h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+A8h] [rbp-940h]
  int v163; // [rsp+B0h] [rbp-938h]
  int v164[3]; // [rsp+B4h] [rbp-934h] BYREF
  __int128 v165; // [rsp+C0h] [rbp-928h]
  PVOID P; // [rsp+D0h] [rbp-918h] BYREF
  __int64 v167; // [rsp+D8h] [rbp-910h]
  PVOID v168; // [rsp+E0h] [rbp-908h]
  PULONG v169; // [rsp+E8h] [rbp-900h]
  int v170; // [rsp+F0h] [rbp-8F8h]
  _DWORD v171[3]; // [rsp+F4h] [rbp-8F4h] BYREF
  int v172; // [rsp+100h] [rbp-8E8h] BYREF
  unsigned int v173; // [rsp+104h] [rbp-8E4h] BYREF
  int v174; // [rsp+108h] [rbp-8E0h] BYREF
  POBJECT_NAME_INFORMATION ObjectNameInformation; // [rsp+110h] [rbp-8D8h] BYREF
  __int64 v176; // [rsp+118h] [rbp-8D0h] BYREF
  __int64 v177; // [rsp+120h] [rbp-8C8h] BYREF
  __int64 v178; // [rsp+128h] [rbp-8C0h]
  PVOID v179[2]; // [rsp+130h] [rbp-8B8h] BYREF
  __int128 v180; // [rsp+140h] [rbp-8A8h]
  _QWORD v181[2]; // [rsp+150h] [rbp-898h] BYREF
  __int64 v182; // [rsp+160h] [rbp-888h]
  __int64 v183; // [rsp+168h] [rbp-880h]
  __int64 v184; // [rsp+170h] [rbp-878h]
  __int64 v185; // [rsp+178h] [rbp-870h]
  __int64 v186; // [rsp+180h] [rbp-868h]
  _BYTE v187[40]; // [rsp+188h] [rbp-860h] BYREF
  int v188; // [rsp+1B0h] [rbp-838h]
  int v189; // [rsp+1B4h] [rbp-834h]
  PVOID v190; // [rsp+1B8h] [rbp-830h] BYREF
  __int64 v191; // [rsp+1C0h] [rbp-828h] BYREF
  __int64 v192; // [rsp+1C8h] [rbp-820h]
  PVOID v193; // [rsp+1D0h] [rbp-818h] BYREF
  __int64 v194; // [rsp+1D8h] [rbp-810h] BYREF
  HANDLE v195; // [rsp+1E0h] [rbp-808h] BYREF
  _OWORD v196[4]; // [rsp+1E8h] [rbp-800h] BYREF
  _QWORD v197[2]; // [rsp+228h] [rbp-7C0h] BYREF
  __int64 v198; // [rsp+238h] [rbp-7B0h] BYREF
  __int64 v199[4]; // [rsp+240h] [rbp-7A8h] BYREF
  __int64 v200; // [rsp+260h] [rbp-788h] BYREF
  __int128 v201; // [rsp+270h] [rbp-778h]
  __int128 v202; // [rsp+280h] [rbp-768h]
  __int128 v203; // [rsp+290h] [rbp-758h]
  __int128 v204; // [rsp+2A0h] [rbp-748h]
  __int128 v205; // [rsp+2B0h] [rbp-738h]
  __int128 v206; // [rsp+2C0h] [rbp-728h]
  __int128 v207; // [rsp+2D0h] [rbp-718h]
  __int128 v208; // [rsp+2E0h] [rbp-708h]
  __int128 v209; // [rsp+2F0h] [rbp-6F8h]
  __int128 v210; // [rsp+300h] [rbp-6E8h]
  _OWORD v211[2]; // [rsp+310h] [rbp-6D8h] BYREF
  __int64 v212; // [rsp+330h] [rbp-6B8h] BYREF
  int v213; // [rsp+338h] [rbp-6B0h]
  _QWORD v214[4]; // [rsp+340h] [rbp-6A8h] BYREF
  _QWORD Src[14]; // [rsp+360h] [rbp-688h] BYREF
  _QWORD JobInformation[5]; // [rsp+3D0h] [rbp-618h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+3F8h] [rbp-5F0h] BYREF
  _QWORD v218[12]; // [rsp+430h] [rbp-5B8h] BYREF
  struct _KAPC_STATE v219; // [rsp+490h] [rbp-558h] BYREF
  _QWORD v220[20]; // [rsp+4C0h] [rbp-528h] BYREF
  _BYTE v221[144]; // [rsp+560h] [rbp-488h] BYREF
  _OWORD v222[11]; // [rsp+5F0h] [rbp-3F8h] BYREF
  _OWORD v223[11]; // [rsp+6A0h] [rbp-348h] BYREF
  _BYTE v224[432]; // [rsp+750h] [rbp-298h] BYREF
  _QWORD v225[20]; // [rsp+900h] [rbp-E8h] BYREF

  v5 = ProcessInformationLength;
  v6 = (unsigned __int64)ProcessInformation;
  Handle = ProcessHandle;
  v151 = ProcessHandle;
  v168 = ProcessInformation;
  v171[1] = ProcessInformationLength;
  v169 = ReturnLength;
  memset(&ApcState, 0, sizeof(ApcState));
  memset(v223, 0, 0xA8uLL);
  memset(&v196[1], 0, 0x30uLL);
  memset(v220, 0, 0x98uLL);
  memset(v187, 0, sizeof(v187));
  v8 = 0LL;
  v158 = 0LL;
  v197[0] = 0LL;
  v197[1] = 0LL;
  memset(JobInformation, 0, sizeof(JobInformation));
  LOWORD(v155) = 0;
  DWORD1(v196[0]) = 0;
  memset(v218, 0, 0x58uLL);
  memset(Src, 0, sizeof(Src));
  v9 = KeGetCurrentThread()->$24A664F1AFBF48775CBEA2BECCC9B900::gap0[10];
  v147 = v9;
  v148 = v9;
  CurrentThread = KeGetCurrentThread();
  if ( !v9 )
    goto LABEL_24;
  if ( ProcessInformationClass == ProcessProtectionInformation )
    goto LABEL_20;
  if ( ProcessInformationClass == ProcessCommitReleaseInformation )
  {
    v10 = 7LL;
    goto LABEL_9;
  }
  if ( ((ProcessInformationClass - 70) & 0xFFFFFFFB) == 0 )
    goto LABEL_20;
  switch ( ProcessInformationClass )
  {
    case ProcessSequenceNumber:
      v10 = 7LL;
      goto LABEL_9;
    case ProcessSecurityDomainInformation:
      v10 = 7LL;
      goto LABEL_9;
    case ProcessEnableReadWriteVmLogging:
LABEL_20:
      v10 = 0LL;
      goto LABEL_9;
  }
  v10 = 3LL;
LABEL_9:
  if ( (_DWORD)v5 )
  {
    if ( (v10 & v6) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( v6 + v5 > 0x7FFFFFFF0000LL || v6 + v5 < v6 )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  if ( ReturnLength )
  {
    v11 = (__int64)ReturnLength;
    if ( (unsigned __int64)ReturnLength >= 0x7FFFFFFF0000LL )
      v11 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v11 = *(_DWORD *)v11;
  }
LABEL_24:
  if ( ProcessInformationClass != ProcessMitigationPolicy )
  {
    if ( ProcessInformationClass == ProcessTimes )
    {
      if ( (_DWORD)v5 == 32 )
      {
        result = ObReferenceObjectByHandleWithTag(
                   Handle,
                   0x1000u,
                   (POBJECT_TYPE)PsProcessType,
                   v9,
                   0x79517350u,
                   &Object,
                   0LL);
        ExecuteOptions = result;
        if ( result < 0 )
          return result;
        v19 = PsQueryRuntimeProcess(Object, &v173);
        v20 = KeMaximumIncrement;
        *(_QWORD *)(v6 + 16) = KeMaximumIncrement * (unsigned __int64)v19;
        *(_QWORD *)(v6 + 24) = v20 * v173;
        v21 = Object;
        *(_QWORD *)v6 = *((_QWORD *)Object + 98);
        *(_QWORD *)(v6 + 8) = v21[216];
        if ( ReturnLength )
          *ReturnLength = 32;
LABEL_51:
        ObfDereferenceObjectWithTag(v21, 0x79517350u);
        return ExecuteOptions;
      }
    }
    else
    {
      if ( ProcessInformationClass != ProcessDeviceMap )
      {
        switch ( ProcessInformationClass )
        {
          case ProcessBasicInformation:
            memset(v222, 0, 0xA8uLL);
            if ( (_DWORD)v5 == 64 )
            {
              v23 = v6;
              v158 = v6;
              v24 = 64;
              *(_QWORD *)v6 = 64LL;
              v25 = Handle;
              v26 = v147;
              v6 += 8LL;
            }
            else
            {
              if ( (_DWORD)v5 != 48 )
                return -1073741820;
              v23 = 0LL;
              v158 = 0LL;
              v24 = 48;
              v25 = Handle;
              v26 = v147;
            }
            v155 = v24;
            v157 = v6;
            result = ObReferenceObjectByHandleWithTag(
                       v25,
                       0x1000u,
                       (POBJECT_TYPE)PsProcessType,
                       v26,
                       0x79517350u,
                       &Object,
                       0LL);
            ExecuteOptions = result;
            v145 = result;
            if ( result < 0 )
              return result;
            v21 = Object;
            *(_DWORD *)v6 = *((_DWORD *)Object + 405);
            *(_QWORD *)(v6 + 8) = v21[127];
            if ( (v21[91] & 1) != 0 )
            {
              VslGetSecurePebAddress();
              v21 = Object;
            }
            if ( ExecuteOptions < 0 )
              goto LABEL_51;
            v27 = 0LL;
            GroupMaskProcess = KeQueryGroupMaskProcess((__int64)v21);
            v28 = Object;
            if ( ((GroupMaskProcess - 1) & GroupMaskProcess) != 0 && Object != CurrentThread->Process )
              goto LABEL_73;
            KeQueryAffinityProcess((__int64)Object, v222, &GroupMaskProcess, 0LL);
            v29 = GroupMaskProcess;
            v28 = Object;
            if ( ((GroupMaskProcess - 1) & GroupMaskProcess) != 0 )
            {
              if ( Object != CurrentThread->Process )
                goto LABEL_73;
              Group = CurrentThread->UserAffinity.Group;
              if ( !_bittest64(&v29, Group) )
                goto LABEL_73;
            }
            else
            {
              _BitScanForward((unsigned int *)&Group, GroupMaskProcess);
            }
            if ( (_DWORD)Group != 20 )
              v27 = *((_QWORD *)v222 + Group + 1);
LABEL_73:
            *(_QWORD *)(v6 + 16) = v27;
            *(_DWORD *)(v6 + 24) = *((char *)v28 + 448);
            *(_QWORD *)(v6 + 32) = v28[93];
            *(_QWORD *)(v6 + 40) = v28[125];
            if ( v23 )
            {
              *(_DWORD *)(v23 + 56) = 0;
              if ( PsIsProtectedProcess((__int64)v28) )
                *(_DWORD *)(v23 + 56) |= 1u;
              v31 = Object;
              v32 = *((_QWORD *)Object + 133);
              if ( v32 )
              {
                v35 = *(_WORD *)(v32 + 8);
                if ( v35 == 332 || v35 == 452 )
                  *(_DWORD *)(v23 + 56) |= 2u;
              }
              if ( (v31[195] & 0x40000008) != 0 )
                *(_DWORD *)(v23 + 56) |= 4u;
              v33 = Object;
              v34 = *(_DWORD *)(v23 + 56) & 0xFFFFFFF7 | ((*((_DWORD *)Object + 194) & 0x80) != 0 ? 8 : 0);
              *(_DWORD *)(v23 + 56) = v34;
              if ( v33[156] + ((v33[110] >> 3) & 1) )
              {
                v34 |= 0x10u;
                *(_DWORD *)(v23 + 56) = v34;
              }
              *(_DWORD *)(v23 + 56) = v34 & 0xFFFFFFDF | ((v31[195] & 0x100000) != 0 ? 0x20 : 0);
              PsQueryProcessAttributes(v33, &v152, 0LL);
              if ( v152 )
                *(_DWORD *)(v23 + 56) |= 0x40u;
              v28 = Object;
              if ( (*((_BYTE *)Object + 728) & 1) != 0 )
                *(_DWORD *)(v23 + 56) |= 0x80u;
              if ( v28[232] )
                *(_DWORD *)(v23 + 56) |= 0x100u;
              ExecuteOptions = v145;
            }
            if ( ReturnLength )
              *ReturnLength = v24;
            ObfDereferenceObjectWithTag(v28, 0x79517350u);
            return ExecuteOptions;
          case ProcessQuotaLimits:
            return PspQueryQuotaLimits((ULONG_PTR)Handle, (__int64)ReturnLength, v9);
          case ProcessIoCounters:
            if ( (_DWORD)v5 != 48 )
              return -1073741820;
            result = ObReferenceObjectByHandleWithTag(
                       Handle,
                       0x1000u,
                       (POBJECT_TYPE)PsProcessType,
                       v9,
                       0x79517350u,
                       &Object,
                       0LL);
            ExecuteOptions = result;
            if ( result >= 0 )
            {
              PsQueryStatisticsProcess(Object, v218);
              v196[1] = *(_OWORD *)&v218[5];
              v196[2] = *(_OWORD *)&v218[7];
              v196[3] = *(_OWORD *)&v218[9];
              ObfDereferenceObjectWithTag(Object, 0x79517350u);
              *(_OWORD *)v6 = v196[1];
              *(_OWORD *)(v6 + 16) = v196[2];
              *(_OWORD *)(v6 + 32) = v196[3];
              if ( ReturnLength )
                *ReturnLength = 48;
              return ExecuteOptions;
            }
            return result;
          case ProcessVmCounters:
            if ( (_DWORD)v5 != 88 && (_DWORD)v5 != 96 && (_DWORD)v5 != 112 )
              return -1073741820;
            result = ObReferenceObjectByHandleWithTag(
                       Handle,
                       0x1000u,
                       (POBJECT_TYPE)PsProcessType,
                       v9,
                       0x79517350u,
                       &Object,
                       0LL);
            if ( result >= 0 )
            {
              Src[0] = *((_QWORD *)Object + 103);
              Src[1] = *((_QWORD *)Object + 104);
              LODWORD(Src[2]) = *((_DWORD *)Object + 321);
              KeStackAttachProcess((PRKPROCESS)Object, &ApcState);
              v145 = MmQueryWorkingSetInformation(&Src[3], &Src[4], &Src[12], v199, &v198, v196);
              KeUnstackDetachProcess(&ApcState);
              PsQueryProcessQuotaCounters(Object, 1LL, &Src[6], &Src[5]);
              PsQueryProcessQuotaCounters(Object, 0LL, &Src[8], &Src[7]);
              Src[9] = *((_QWORD *)Object + 158) << 12;
              Src[10] = *((_QWORD *)Object + 159) << 12;
              Src[13] = *((_QWORD *)Object + 245) << 12;
              Src[11] = Src[9];
              ObfDereferenceObjectWithTag(Object, 0x79517350u);
              result = v145;
              if ( v145 >= 0 )
              {
                memmove((void *)v6, Src, v5);
                if ( ReturnLength )
                  *ReturnLength = v5;
                return 0;
              }
            }
            return result;
          case ProcessDebugPort:
            if ( (_DWORD)v5 != 8 )
              return -1073741820;
            result = ObReferenceObjectByHandleWithTag(
                       Handle,
                       0x400u,
                       (POBJECT_TYPE)PsProcessType,
                       v9,
                       0x79517350u,
                       &Object,
                       0LL);
            if ( result >= 0 )
            {
              if ( *((_QWORD *)Object + 132) )
                v160 = (HANDLE)-1LL;
              else
                v160 = 0LL;
              ObfDereferenceObjectWithTag(Object, 0x79517350u);
              *(_QWORD *)v6 = v160;
              if ( ReturnLength )
                *ReturnLength = 8;
              return 0;
            }
            return result;
          case ProcessLdtInformation:
            result = ObReferenceObjectByHandleWithTag(
                       Handle,
                       0x410u,
                       (POBJECT_TYPE)PsProcessType,
                       v9,
                       0x79517350u,
                       &Object,
                       0LL);
            if ( result >= 0 )
            {
              ProcessTelemetryCoverage = xKdEnumerateDebuggingDevices();
              goto LABEL_427;
            }
            return result;
          case ProcessDefaultHardErrorMode:
            if ( (_DWORD)v5 != 4 )
              return -1073741820;
            result = ObReferenceObjectByHandleWithTag(
                       Handle,
                       0x1000u,
                       (POBJECT_TYPE)PsProcessType,
                       v9,
                       0x79517350u,
                       &Object,
                       0LL);
            if ( result >= 0 )
            {
              v13 = *((_DWORD *)Object + 296);
              ObfDereferenceObjectWithTag(Object, 0x79517350u);
              *(_DWORD *)v6 = v13;
              if ( ReturnLength )
                *ReturnLength = 4;
              return 0;
            }
            return result;
          case ProcessPooledUsageAndLimits:
            return PspQueryPooledQuotaLimits((ULONG_PTR)Handle, v9);
          case ProcessWorkingSetWatch:
          case ProcessWorkingSetWatchEx:
            return PspQueryWorkingSetWatch((ULONG_PTR)Handle, (__int64)ReturnLength, v9);
          case ProcessPriorityClass:
            if ( (_DWORD)v5 != 2 )
              return -1073741820;
            result = ObReferenceObjectByHandleWithTag(
                       Handle,
                       0x1000u,
                       (POBJECT_TYPE)PsProcessType,
                       v9,
                       0x79517350u,
                       &Object,
                       0LL);
            if ( result >= 0 )
            {
              LOBYTE(v155) = 0;
              BYTE1(v155) = *((_BYTE *)Object + 1119);
              ObfDereferenceObjectWithTag(Object, 0x79517350u);
              *(_WORD *)v6 = v155;
              if ( ReturnLength )
                *ReturnLength = 2;
              return 0;
            }
            return result;
          case ProcessWx86Information:
            if ( (_DWORD)v5 != 4 )
              return -1073741820;
            result = ObReferenceObjectByHandleWithTag(
                       Handle,
                       0x400u,
                       (POBJECT_TYPE)PsProcessType,
                       v9,
                       0x79517350u,
                       &Object,
                       0LL);
            ExecuteOptions = result;
            if ( result >= 0 )
            {
              v65 = (*((_DWORD *)Object + 195) & 0x1000000) != 0;
              ObfDereferenceObjectWithTag(Object, 0x79517350u);
              *(_DWORD *)v6 = v65;
              if ( ReturnLength )
                *ReturnLength = 4;
              return ExecuteOptions;
            }
            return result;
          case ProcessHandleCount:
            if ( (((_DWORD)v5 - 4) & 0xFFFFFFFB) != 0 )
              return -1073741820;
            result = ObReferenceObjectByHandleWithTag(
                       Handle,
                       0x1000u,
                       (POBJECT_TYPE)PsProcessType,
                       v9,
                       0x79517350u,
                       &Object,
                       0LL);
            if ( result >= 0 )
            {
              ProcessHandleCount = ObGetProcessHandleCount(Object, &v174);
              ObfDereferenceObjectWithTag(Object, 0x79517350u);
              *(_DWORD *)v6 = ProcessHandleCount;
              if ( (_DWORD)v5 != 4 )
                *(_DWORD *)(v6 + 4) = v174;
              if ( ReturnLength )
                *ReturnLength = 4;
              return 0;
            }
            return result;
          case ProcessAffinityMask:
            if ( (((_DWORD)v5 - 8) & 0xFFFFFFF7) != 0 )
              return -1073741820;
            result = ObReferenceObjectByHandleWithTag(
                       Handle,
                       0x1000u,
                       (POBJECT_TYPE)PsProcessType,
                       v9,
                       0x79517350u,
                       &Object,
                       0LL);
            ExecuteOptions = result;
            if ( result >= 0 )
            {
              GroupMaskProcess = KeQueryGroupMaskProcess((__int64)Object);
              if ( ((GroupMaskProcess - 1) & GroupMaskProcess) != 0
                || (KeQueryAffinityProcess((__int64)Object, v223, &GroupMaskProcess, 0LL),
                    ((GroupMaskProcess - 1) & GroupMaskProcess) != 0) )
              {
                ExecuteOptions = -1073741811;
              }
              else
              {
                _BitScanForward((unsigned int *)&v105, GroupMaskProcess);
                v106 = *((_QWORD *)v223 + v105 + 1);
                if ( (_DWORD)v5 == 16 )
                  *(_WORD *)(v6 + 8) = v105;
                *(_QWORD *)v6 = v106;
                if ( ReturnLength )
                  *ReturnLength = v5;
              }
              goto LABEL_204;
            }
            return result;
          case ProcessPriorityBoost:
            if ( (_DWORD)v5 != 4 )
              return -1073741820;
            result = ObReferenceObjectByHandleWithTag(
                       Handle,
                       0x1000u,
                       (POBJECT_TYPE)PsProcessType,
                       v9,
                       0x79517350u,
                       &Object,
                       0LL);
            v91 = result;
            if ( result >= 0 )
            {
              v92 = (*((_DWORD *)Object + 110) >> 1) & 1;
              ObfDereferenceObjectWithTag(Object, 0x79517350u);
              *(_DWORD *)v6 = v92;
              if ( ReturnLength )
                *ReturnLength = 4;
              return v91;
            }
            return result;
          case ProcessSessionInformation:
            if ( (_DWORD)v5 != 4 )
              return -1073741820;
            result = ObReferenceObjectByHandleWithTag(
                       Handle,
                       0x1000u,
                       (POBJECT_TYPE)PsProcessType,
                       v9,
                       0x79517350u,
                       &Object,
                       0LL);
            if ( result >= 0 )
            {
              SessionId = MmGetSessionId((__int64)Object);
              ObfDereferenceObjectWithTag(Object, 0x79517350u);
              *(_DWORD *)v6 = SessionId;
              if ( ReturnLength )
                *ReturnLength = 4;
              return 0;
            }
            return result;
          case ProcessWow64Information:
            if ( (_DWORD)v5 != 8 )
              return -1073741820;
            result = ObReferenceObjectByHandleWithTag(
                       Handle,
                       0x1000u,
                       (POBJECT_TYPE)PsProcessType,
                       v9,
                       0x79517350u,
                       &Object,
                       0LL);
            if ( result >= 0 )
            {
              v39 = (unsigned __int64 *)*((_QWORD *)Object + 133);
              if ( v39 )
                v8 = *v39;
              ObfDereferenceObjectWithTag(Object, 0x79517350u);
              *(_QWORD *)v6 = v8;
              if ( ReturnLength )
                *ReturnLength = 8;
              return 0;
            }
            return result;
          case ProcessImageFileName:
            result = ObReferenceObjectByHandleWithTag(
                       Handle,
                       0x1000u,
                       (POBJECT_TYPE)PsProcessType,
                       v9,
                       0x79517350u,
                       &Object,
                       0LL);
            if ( result >= 0 )
            {
              if ( (unsigned int)v5 < 0x10 )
              {
                v149 = 0;
                v6 = (unsigned __int64)v197;
              }
              else
              {
                v149 = v5 - 16;
                v8 = v6 + 16;
              }
              ExecuteOptions = PsQueryFullProcessImageName(Object, v6, v8, &v149);
              ObfDereferenceObjectWithTag(Object, 0x79517350u);
              if ( ExecuteOptions >= 0 && !v8 )
                ExecuteOptions = -1073741820;
              if ( ReturnLength && ((int)(ExecuteOptions + 0x80000000) < 0 || ExecuteOptions == -1073741820) )
                *ReturnLength = v149 + 16;
              return ExecuteOptions;
            }
            return result;
          case ProcessLUIDDeviceMapsEnabled:
            if ( (_DWORD)v5 != 4 )
              return -1073741820;
            *(_DWORD *)v6 = 1;
            if ( ReturnLength )
              *ReturnLength = 4;
            return 0;
          case ProcessBreakOnTermination:
            if ( (_DWORD)v5 != 4 )
              return -1073741820;
            result = ObReferenceObjectByHandleWithTag(
                       Handle,
                       0x1000u,
                       (POBJECT_TYPE)PsProcessType,
                       v9,
                       0x79517350u,
                       &Object,
                       0LL);
            if ( result < 0 )
              return result;
            v93 = (*((_DWORD *)Object + 195) >> 13) & 1;
            ObfDereferenceObjectWithTag(Object, 0x79517350u);
            *(_DWORD *)v6 = v93;
            if ( ReturnLength )
              *ReturnLength = 4;
            return 0;
          case ProcessDebugObjectHandle:
            if ( (_DWORD)v5 != 8 )
              return -1073741820;
            result = ObReferenceObjectByHandleWithTag(
                       Handle,
                       0x400u,
                       (POBJECT_TYPE)PsProcessType,
                       v9,
                       0x79517350u,
                       &Object,
                       0LL);
            if ( result < 0 )
              return result;
            ExecuteOptions = DbgkOpenProcessDebugPort(Object, v9, &v160);
            v88 = v160;
            if ( ExecuteOptions < 0 )
              v88 = 0LL;
            v160 = v88;
            ObfDereferenceObjectWithTag(Object, 0x79517350u);
            *(_QWORD *)v6 = v160;
            if ( ReturnLength )
              *ReturnLength = 8;
            return ExecuteOptions;
          case ProcessDebugFlags:
            if ( (_DWORD)v5 != 4 )
              return -1073741820;
            result = ObReferenceObjectByHandleWithTag(
                       Handle,
                       0x400u,
                       (POBJECT_TYPE)PsProcessType,
                       v9,
                       0x79517350u,
                       &Object,
                       0LL);
            ExecuteOptions = result;
            if ( result < 0 )
              return result;
            v21 = Object;
            *(_DWORD *)v6 = (*((_DWORD *)Object + 195) & 2) == 0;
            if ( ReturnLength )
              *ReturnLength = 4;
            goto LABEL_51;
          case ProcessHandleTracing:
            if ( (unsigned int)v5 < 0x10 )
              return -1073741820;
            if ( (unsigned int)ExIsRestrictedCaller(v9) )
              return -1073741790;
            v157 = (unsigned int)(v5 - 16) / 0xA0uLL;
            v94 = v6 + 16;
            result = ObReferenceObjectByHandleWithTag(
                       Handle,
                       0x400u,
                       (POBJECT_TYPE)PsProcessType,
                       v9,
                       0x79517350u,
                       &Object,
                       0LL);
            ExecuteOptions = result;
            if ( result < 0 )
              return result;
            v95 = (void *)ObReferenceProcessHandleTable(Object);
            v96 = v95;
            P = v95;
            if ( !v95 )
              goto LABEL_459;
            v97 = ExReferenceHandleDebugInfo(v95);
            v98 = v97;
            v167 = v97;
            if ( v97 )
            {
              *(_DWORD *)(v6 + 8) = 0;
              v99 = (unsigned int)(*(_DWORD *)(v97 + 72) % *(_DWORD *)(v97 + 4));
              v163 = v99;
              while ( 1 )
              {
                v170 = v8;
                if ( (unsigned int)v8 >= *(_DWORD *)(v98 + 4) )
                  break;
                v100 = (_OWORD *)(v98 + 160 * v99);
                v201 = v100[5];
                v202 = v100[6];
                v203 = v100[7];
                v204 = v100[8];
                v205 = v100[9];
                v206 = v100[10];
                v207 = v100[11];
                v208 = v100[12];
                v209 = v100[13];
                v210 = v100[14];
                v101 = v202;
                if ( *(_QWORD *)v6 == (_QWORD)v202 || !*(_QWORD *)v6 )
                {
                  v102 = DWORD2(v202);
                  if ( DWORD2(v202) )
                  {
                    ++*(_DWORD *)(v6 + 8);
                    if ( (_DWORD)v157 )
                    {
                      v157 = (unsigned int)(v157 - 1);
                      DWORD2(v196[0]) = v157;
                      *(_QWORD *)v94 = v101;
                      *(_OWORD *)(v94 + 8) = v201;
                      *(_DWORD *)(v94 + 24) = v102;
                      *(_OWORD *)(v94 + 32) = v203;
                      *(_OWORD *)(v94 + 48) = v204;
                      *(_OWORD *)(v94 + 64) = v205;
                      *(_OWORD *)(v94 + 80) = v206;
                      *(_OWORD *)(v94 + 96) = v207;
                      *(_OWORD *)(v94 + 112) = v208;
                      *(_OWORD *)(v94 + 128) = v209;
                      *(_OWORD *)(v94 + 144) = v210;
                      v94 += 160LL;
                      v199[1] = v94;
                    }
                    else
                    {
                      ExecuteOptions = -1073741820;
                      v145 = -1073741820;
                    }
                  }
                }
                if ( !(_DWORD)v99 )
                  LODWORD(v99) = *(_DWORD *)(v98 + 4);
                v99 = (unsigned int)(v99 - 1);
                v163 = v99;
                LODWORD(v8) = v8 + 1;
              }
              if ( ReturnLength )
                *ReturnLength = v94 - v6;
              ExDereferenceHandleDebugInfo(v96, v98);
            }
            else
            {
              ExecuteOptions = -1073741811;
            }
            goto LABEL_458;
          case ProcessIoPriority:
            if ( (_DWORD)v5 != 4 )
              return -1073741820;
            result = ObReferenceObjectByHandleWithTag(
                       Handle,
                       0x1000u,
                       (POBJECT_TYPE)PsProcessType,
                       v9,
                       0x79517350u,
                       &Object,
                       0LL);
            ExecuteOptions = result;
            v145 = result;
            if ( result < 0 )
              return result;
            v21 = Object;
            *(_DWORD *)v6 = (*((_DWORD *)Object + 195) >> 27) & 7;
            if ( ReturnLength )
              *ReturnLength = 4;
            goto LABEL_51;
          case ProcessExecuteFlags:
            if ( (_DWORD)v5 != 4 )
              return -1073741820;
            v53 = Handle;
            if ( Handle == (HANDLE)-1LL )
            {
              CurrentProcess = PsGetCurrentProcess();
              Object = CurrentProcess;
            }
            else
            {
              result = ObReferenceObjectByHandleWithTag(
                         Handle,
                         0x400u,
                         (POBJECT_TYPE)PsProcessType,
                         v9,
                         0x79517350u,
                         &Object,
                         0LL);
              if ( result < 0 )
                return result;
              CurrentProcess = Object;
            }
            ExecuteOptions = KeGetExecuteOptions(CurrentProcess, v171);
            if ( v53 != (HANDLE)-1LL )
              ObfDereferenceObjectWithTag(Object, 0x79517350u);
            if ( ExecuteOptions >= 0 )
            {
              *(_DWORD *)v6 = v171[0];
              if ( ReturnLength )
                *ReturnLength = 4;
            }
            return ExecuteOptions;
          case ProcessCookie:
            v176 = 0LL;
            if ( (_DWORD)v5 != 4 )
              return -1073741820;
            v40 = Handle;
            if ( Handle == (HANDLE)-1LL )
            {
              v41 = PsGetCurrentProcess();
              Object = v41;
            }
            else
            {
              v103 = ObReferenceObjectByHandle(Handle, 0x20u, (POBJECT_TYPE)PsProcessType, v9, &v190, 0LL);
              v41 = v190;
              Object = v190;
              if ( v103 < 0 )
                return v103;
            }
            v145 = 0;
            while ( 1 )
            {
              v42 = v41[244];
              if ( v42 )
                break;
              KeQuerySystemTimePrecise(&v176);
              CurrentPrcb = KeGetCurrentPrcb();
              LowPart = KeQueryPerformanceCounter(0LL).LowPart;
              v50 = ExGenRandom(1);
              v51 = __rdtsc();
              _InterlockedCompareExchange(
                (volatile signed __int32 *)Object + 244,
                v51 ^ v50 ^ CurrentPrcb->MmPageFaultCount ^ v176 ^ HIDWORD(v176) ^ LowPart ^ CurrentPrcb->InterruptCount ^ CurrentPrcb->InterruptTime ^ CurrentPrcb->KeSystemCalls,
                0);
              LODWORD(v8) = v145;
              v41 = Object;
              v40 = Handle;
            }
            *(_DWORD *)v6 = v42;
            if ( ReturnLength )
              *ReturnLength = 4;
            if ( v40 != (HANDLE)-1LL )
              ObfDereferenceObject(v41);
            goto LABEL_140;
          case ProcessImageInformation:
            if ( (_DWORD)v5 != 64 )
              return -1073741820;
            result = ObReferenceObjectByHandleWithTag(
                       Handle,
                       0x1000u,
                       (POBJECT_TYPE)PsProcessType,
                       v9,
                       0x79517350u,
                       &Object,
                       0LL);
            ExecuteOptions = result;
            if ( result < 0 )
              return result;
            v36 = (struct _EX_RUNDOWN_REF *)Object;
            if ( Object == CurrentThread->Process )
            {
              v37 = (void *)*((_QWORD *)Object + 120);
              if ( !v37 )
                ExecuteOptions = -1073741558;
              v38 = 0;
            }
            else
            {
              v38 = 1;
              v64 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)Object + 96);
              v36 = (struct _EX_RUNDOWN_REF *)Object;
              if ( v64 )
              {
                v37 = (void *)*((_QWORD *)Object + 120);
                if ( v37 )
                {
                  ObfReferenceObject(*((PVOID *)Object + 120));
                  v36 = (struct _EX_RUNDOWN_REF *)Object;
                }
                else
                {
                  ExecuteOptions = -1073741811;
                }
                ExReleaseRundownProtection_0(v36 + 96);
                v36 = (struct _EX_RUNDOWN_REF *)Object;
              }
              else
              {
                ExecuteOptions = -1073741558;
                v37 = 0LL;
              }
            }
            ObfDereferenceObjectWithTag(v36, 0x79517350u);
            if ( ExecuteOptions >= 0 )
            {
              ExecuteOptions = MmGetSectionInformation(v37, 1LL, v6);
              if ( v38 )
                ObfDereferenceObject(v37);
              if ( ExecuteOptions >= 0 && ReturnLength )
                *ReturnLength = 64;
            }
            return ExecuteOptions;
          case ProcessCycleTime:
            if ( (_DWORD)v5 != 16 )
              return -1073741820;
            result = ObReferenceObjectByHandleWithTag(
                       Handle,
                       0x1000u,
                       (POBJECT_TYPE)PsProcessType,
                       v9,
                       0x79517350u,
                       &Object,
                       0LL);
            ExecuteOptions = result;
            if ( result < 0 )
              return result;
            *(_QWORD *)v6 = PsQueryTotalCycleTimeProcess((__int64)Object, (__int64)&v191);
            *(_QWORD *)(v6 + 8) = v191;
            if ( ReturnLength )
              *ReturnLength = 16;
            goto LABEL_204;
          case ProcessPagePriority:
            if ( (_DWORD)v5 != 4 )
              return -1073741820;
            result = ObReferenceObjectByHandleWithTag(
                       Handle,
                       0x1000u,
                       (POBJECT_TYPE)PsProcessType,
                       v9,
                       0x79517350u,
                       &Object,
                       0LL);
            ExecuteOptions = result;
            if ( result < 0 )
              return result;
            v21 = Object;
            *(_DWORD *)v6 = (*((_DWORD *)Object + 194) >> 12) & 7;
            if ( ReturnLength )
              *ReturnLength = 4;
            goto LABEL_51;
          case ProcessImageFileNameWin32:
            result = ObReferenceObjectByHandleWithTag(
                       Handle,
                       0x1000u,
                       (POBJECT_TYPE)PsProcessType,
                       v9,
                       0x79517350u,
                       &Object,
                       0LL);
            ExecuteOptions = result;
            if ( result < 0 )
              return result;
            v161 = (PVOID)*((_QWORD *)Object + 137);
            if ( v161 )
            {
              if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)Object + 96) )
              {
                ObfReferenceObject(v161);
                ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)Object + 96);
              }
              else
              {
                ExecuteOptions = -1073741558;
              }
            }
            else
            {
              ExecuteOptions = PsReferenceProcessFilePointer(Object, &v161);
            }
            ObfDereferenceObjectWithTag(Object, 0x79517350u);
            if ( ExecuteOptions < 0 )
              return ExecuteOptions;
            v43 = IoQueryFileDosDeviceName((PFILE_OBJECT)v161, &ObjectNameInformation);
            ObfDereferenceObject(v161);
            if ( v43 >= 0 )
            {
              v44 = ObjectNameInformation;
              v149 = ObjectNameInformation->Name.MaximumLength + 16;
              v45 = v149;
              if ( v149 > (unsigned int)v5 )
              {
                v43 = -1073741820;
                v145 = -1073741820;
              }
              else
              {
                *(_WORD *)v6 = ObjectNameInformation->Name.Length;
                *(_WORD *)(v6 + 2) = v44->Name.MaximumLength;
                MaximumLength = v44->Name.MaximumLength;
                if ( MaximumLength )
                {
                  v8 = v6 + 16;
                  memmove((void *)(v6 + 16), v44->Name.Buffer, MaximumLength);
                  v45 = v149;
                  v44 = ObjectNameInformation;
                }
                *(_QWORD *)(v6 + 8) = v8;
              }
              if ( ReturnLength )
                *ReturnLength = v45;
              ExFreePoolWithTag(v44, 0);
            }
            return v43;
          case ProcessImageFileMapping:
            if ( (_DWORD)v5 != 8 )
              return -1073741820;
            v78 = *(void **)v6;
            v199[2] = *(_QWORD *)v6;
            result = ObReferenceObjectByHandleWithTag(
                       Handle,
                       0x400u,
                       (POBJECT_TYPE)PsProcessType,
                       v9,
                       0x79517350u,
                       &Object,
                       0LL);
            if ( result < 0 )
              return result;
            ExecuteOptions = ObReferenceObjectByHandleWithTag(
                               v78,
                               0x100020u,
                               (POBJECT_TYPE)IoFileObjectType,
                               v9,
                               0x79517350u,
                               &v161,
                               0LL);
            v21 = Object;
            if ( ExecuteOptions < 0 )
              goto LABEL_51;
            ExecuteOptions = PsReferenceProcessFilePointer(Object, v179);
            ObfDereferenceObjectWithTag(Object, 0x79517350u);
            if ( ExecuteOptions < 0 )
            {
              ObfDereferenceObject(v161);
            }
            else
            {
              if ( *((_QWORD *)v161 + 5) == *((_QWORD *)v179[0] + 5) )
                ExecuteOptions = 0;
              else
                ExecuteOptions = -1073741823;
              ObfDereferenceObject(v161);
              ObfDereferenceObject(v179[0]);
              if ( ExecuteOptions >= 0 && ReturnLength )
                *ReturnLength = 0;
            }
            return ExecuteOptions;
          case ProcessAffinityUpdateMode:
            if ( (_DWORD)v5 != 4 )
              return -1073741820;
            result = ObReferenceObjectByHandleWithTag(
                       Handle,
                       0x1000u,
                       (POBJECT_TYPE)PsProcessType,
                       v9,
                       0x79517350u,
                       &Object,
                       0LL);
            if ( result < 0 )
              return result;
            v156 = *((_DWORD *)Object + 194);
            ObfDereferenceObjectWithTag(Object, 0x79517350u);
            v104 = 0;
            if ( (v156 & 0x80000) != 0 )
            {
              v104 = 1;
              LODWORD(v8) = 1;
            }
            if ( (v156 & 0x40000) != 0 )
              LODWORD(v8) = v104 | 2;
            *(_DWORD *)v6 = v8;
            if ( ReturnLength )
              *ReturnLength = 4;
            return 0;
          case ProcessMemoryAllocationMode:
            if ( (_DWORD)v5 != 4 )
              return -1073741820;
            result = ObReferenceObjectByHandleWithTag(
                       Handle,
                       0x1000u,
                       (POBJECT_TYPE)PsProcessType,
                       v9,
                       0x79517350u,
                       &Object,
                       0LL);
            if ( result < 0 )
              return result;
            v156 = *((_DWORD *)Object + 195);
            ObfDereferenceObjectWithTag(Object, 0x79517350u);
            if ( (v156 & 0x200000) != 0 )
              LODWORD(v8) = 1;
            *(_DWORD *)v6 = v8;
            if ( ReturnLength )
              *ReturnLength = 4;
            return 0;
          case ProcessGroupInformation:
            if ( !ReturnLength || (v5 & 1) != 0 )
              return -1073741811;
            result = ObReferenceObjectByHandleWithTag(
                       Handle,
                       0x1000u,
                       (POBJECT_TYPE)PsProcessType,
                       v9,
                       0x79517350u,
                       &Object,
                       0LL);
            if ( result < 0 )
              return result;
            v149 = 0;
            v107 = KeQueryGroupMaskProcess((__int64)Object);
            GroupMaskProcess = v107;
            v108 = v149;
            do
            {
              _BitScanForward(&v109, v107);
              v108 += 2;
              v149 = v108;
              if ( v108 <= (unsigned int)v5 )
              {
                *(_WORD *)v6 = v109;
                v6 += 2LL;
                v199[3] = v6;
                v108 = v149;
              }
              _bittestandreset((signed __int32 *)&GroupMaskProcess, v109);
              v107 = GroupMaskProcess;
            }
            while ( GroupMaskProcess );
            *ReturnLength = v108;
            ExecuteOptions = (unsigned int)v5 < v108 ? 0xC0000023 : 0;
            v145 = ExecuteOptions;
            goto LABEL_204;
          case ProcessConsoleHostProcess:
            if ( (_DWORD)v5 != 8 )
              return -1073741820;
            result = ObReferenceObjectByHandleWithTag(
                       Handle,
                       0x1000u,
                       (POBJECT_TYPE)PsProcessType,
                       v9,
                       0x79517350u,
                       &Object,
                       0LL);
            if ( result < 0 )
              return result;
            v52 = *((_QWORD *)Object + 126);
            ObfDereferenceObjectWithTag(Object, 0x79517350u);
            *(_QWORD *)v6 = v52;
            if ( ReturnLength )
              *ReturnLength = 8;
            return 0;
          case ProcessWindowInformation:
            memset(&v219, 0, sizeof(v219));
            v159 = 0;
            v165 = 0uLL;
            if ( v9 != 1 )
              return -1073741823;
            result = ObReferenceObjectByHandleWithTag(
                       Handle,
                       0x1000u,
                       (POBJECT_TYPE)PsProcessType,
                       1,
                       0x79517350u,
                       &Object,
                       0LL);
            v145 = result;
            if ( result < 0 )
              return result;
            if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)Object + 96) )
            {
LABEL_459:
              ExecuteOptions = -1073741558;
              goto LABEL_204;
            }
            KeStackAttachProcess((PRKPROCESS)Object, &v219);
            v55 = (unsigned __int64 *)*((_QWORD *)Object + 133);
            if ( v55 )
              v8 = *v55;
            if ( v8 )
            {
              v192 = *(unsigned int *)(v8 + 16);
              v159 = *(_DWORD *)(v192 + 104);
              v157 = *(_QWORD *)(v192 + 112);
              v58 = v157;
              LODWORD(v165) = v157;
              *((_QWORD *)&v165 + 1) = HIDWORD(v157);
            }
            else
            {
              v167 = *(_QWORD *)(*((_QWORD *)Object + 127) + 32LL);
              v56 = v167 + 164;
              if ( (unsigned __int64)(v167 + 164) >= 0x7FFFFFFF0000LL )
                v56 = 0x7FFFFFFF0000LL;
              v159 = *(_DWORD *)v56;
              v180 = 0uLL;
              v57 = v167 + 176;
              if ( (unsigned __int64)(v167 + 176) >= 0x7FFFFFFF0000LL )
                v57 = 0x7FFFFFFF0000LL;
              LODWORD(v180) = *(_DWORD *)v57;
              *((_QWORD *)&v180 + 1) = *(_QWORD *)(v57 + 8);
              v165 = v180;
              v58 = v180;
            }
            ExecuteOptions = v145;
            KeUnstackDetachProcess(&v219);
            if ( ExecuteOptions >= 0 )
            {
              v59 = v58 + 6;
              if ( ReturnLength )
                *ReturnLength = v59;
              if ( (unsigned int)v5 < v59 )
              {
                ExecuteOptions = -1073741820;
                v145 = -1073741820;
              }
              else
              {
                *(_DWORD *)v6 = v159;
                *(_WORD *)(v6 + 4) = v58;
              }
              if ( ExecuteOptions >= 0 && v58 )
              {
                PsGetCurrentProcess();
                ExecuteOptions = MmCopyVirtualMemory((ULONG_PTR)Object, v58, 1, (__int64)&v200);
              }
            }
            ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)Object + 96);
            v21 = Object;
            goto LABEL_51;
          case ProcessHandleInformation:
            if ( (unsigned int)v5 < 0x10 )
            {
              if ( ReturnLength )
                *ReturnLength = 16;
              return -1073741820;
            }
            result = ObReferenceObjectByHandle(Handle, 0x400u, (POBJECT_TYPE)PsProcessType, v9, &v193, 0LL);
            Object = v193;
            if ( result < 0 )
              return result;
            KeEnterCriticalRegionThread((__int64)CurrentThread);
            v110 = ObReferenceProcessHandleTable(Object);
            if ( v110 )
            {
              ExecuteOptions = ExQueryProcessHandleInformation(v110, v6, (unsigned int)v5, ReturnLength);
              ObDereferenceProcessHandleTable(Object);
            }
            else
            {
              ExecuteOptions = -1073741558;
            }
            KeLeaveCriticalRegionThread((__int64)CurrentThread);
            ObfDereferenceObject(Object);
            return ExecuteOptions;
          case ProcessHandleCheckingMode:
            if ( (_DWORD)v5 != 4 )
              return -1073741820;
            result = ObReferenceObjectByHandleWithTag(
                       Handle,
                       0x400u,
                       (POBJECT_TYPE)PsProcessType,
                       v9,
                       0x79517350u,
                       &Object,
                       0LL);
            ExecuteOptions = result;
            v145 = result;
            if ( result < 0 )
              return result;
            v111 = ObReferenceProcessHandleTable(Object);
            if ( !v111 )
              goto LABEL_459;
            LOBYTE(v8) = (unsigned __int8)ExQueryHandleExceptions(v111) != 0;
            *(_DWORD *)v6 = v8;
            goto LABEL_458;
          case ProcessKeepAliveCount:
            if ( (_DWORD)v5 != 8 )
              return -1073741820;
            result = ObReferenceObjectByHandleWithTag(
                       Handle,
                       0x400u,
                       (POBJECT_TYPE)PsProcessType,
                       v9,
                       0x79517350u,
                       &Object,
                       0LL);
            ExecuteOptions = result;
            if ( result < 0 )
              return result;
            LOBYTE(v112) = 1;
            *(_DWORD *)v6 = PsGetKeepAliveCountProcess(Object, v112);
            *(_DWORD *)(v6 + 4) = PsGetKeepAliveCountProcess(Object, 0LL);
            goto LABEL_204;
          case ProcessHandleTable:
            v177 = 0LL;
            v178 = 0LL;
            if ( (unsigned int)v5 < 4 )
              return -1073741820;
            result = ExLockUserBuffer(
                       v6,
                       (unsigned int)v5,
                       (unsigned __int8)KeGetCurrentThread()->$24A664F1AFBF48775CBEA2BECCC9B900::gap0[10],
                       1LL,
                       &v194,
                       &P);
            if ( result < 0 )
              return result;
            ExecuteOptions = ObReferenceObjectByHandleWithTag(
                               Handle,
                               0x440u,
                               (POBJECT_TYPE)PsProcessType,
                               v9,
                               0x79517350u,
                               &Object,
                               0LL);
            if ( ExecuteOptions < 0 )
            {
              ExUnlockUserBuffer((struct _MDL *)P);
              return ExecuteOptions;
            }
            v113 = ObReferenceProcessHandleTable(Object);
            if ( v113 )
            {
              v177 = v194;
              v178 = (unsigned int)v5 >> 2;
              ExEnumHandleTable(v113, PspHandleTableWalker, &v177, 0LL);
              ObDereferenceProcessHandleTable(Object);
            }
            else
            {
              LODWORD(v8) = -1073741558;
            }
            ObfDereferenceObjectWithTag(Object, 0x79517350u);
            if ( ReturnLength )
              *ReturnLength = 4 * HIDWORD(v178);
            ExUnlockUserBuffer((struct _MDL *)P);
            return v8;
          case ProcessCheckStackExtentsMode:
            if ( (_DWORD)v5 != 4 )
              return -1073741820;
            result = ObReferenceObjectByHandleWithTag(
                       Handle,
                       0x400u,
                       (POBJECT_TYPE)PsProcessType,
                       v9,
                       0x79517350u,
                       &Object,
                       0LL);
            ExecuteOptions = result;
            if ( result < 0 )
              return result;
            v21 = Object;
            *(_DWORD *)v6 = (*((_DWORD *)Object + 110) >> 5) & 1;
            goto LABEL_51;
          case ProcessCommandLineInformation:
            ExecuteOptions = ObReferenceObjectByHandleWithTag(
                               Handle,
                               0x1000u,
                               (POBJECT_TYPE)PsProcessType,
                               v9,
                               0x79517350u,
                               &Object,
                               0LL);
            if ( ExecuteOptions < 0 )
              return ExecuteOptions;
            result = PsQueryProcessCommandLine((ULONG_PTR)Object, v6, v5, v9, ReturnLength);
            ExecuteOptions = result;
            v21 = Object;
            if ( Object )
              goto LABEL_51;
            return result;
          case ProcessProtectionInformation:
            v43 = ObReferenceObjectByHandleWithTag(
                    Handle,
                    0x1000u,
                    (POBJECT_TYPE)PsProcessType,
                    v9,
                    0x79517350u,
                    &Object,
                    0LL);
            if ( v43 < 0 )
              return v43;
            if ( !(_DWORD)v5 )
            {
LABEL_527:
              v43 = -1073741820;
              goto LABEL_177;
            }
            *(_BYTE *)v6 = PsGetProcessProtection((__int64)Object);
            if ( ReturnLength )
              *ReturnLength = 1;
            goto LABEL_176;
          case ProcessTelemetryIdInformation:
            ExecuteOptions = ObReferenceObjectByHandleWithTag(
                               Handle,
                               0x1000u,
                               (POBJECT_TYPE)PsProcessType,
                               v9,
                               0x79517350u,
                               &Object,
                               0LL);
            if ( ExecuteOptions < 0 )
              return ExecuteOptions;
            result = EtwQueryProcessTelemetryInfo(
                       (ULONG_PTR)Object,
                       (void *)v6,
                       (unsigned int)v5,
                       (__int64)ReturnLength);
            ExecuteOptions = result;
            v21 = Object;
            if ( Object )
              goto LABEL_51;
            return result;
          case ProcessCommitReleaseInformation:
            memset(v211, 0, sizeof(v211));
            Object = 0LL;
            if ( (_DWORD)v5 != 32 )
              goto LABEL_527;
            v211[0] = *(_OWORD *)v6;
            v211[1] = *(_OWORD *)(v6 + 16);
            if ( LODWORD(v211[0]) == 3 )
            {
              if ( (DWORD1(v211[0]) & 0xFFFFFFF8) != 0 || *((_QWORD *)&v211[0] + 1) )
              {
                v43 = -1073741811;
              }
              else
              {
                v43 = ObReferenceObjectByHandleWithTag(
                        Handle,
                        0x1000u,
                        (POBJECT_TYPE)PsProcessType,
                        v9,
                        0x79517350u,
                        &Object,
                        0LL);
                if ( v43 >= 0 )
                {
                  MmQueryCommitReleaseState(
                    (ULONG_PTR)Object,
                    &v172,
                    (_QWORD *)v211 + 1,
                    &v211[1],
                    (_QWORD *)&v211[1] + 1);
                  DWORD1(v211[0]) ^= (BYTE4(v211[0]) ^ (unsigned __int8)v172) & 1;
                  *((_QWORD *)&v211[0] + 1) <<= 12;
                  *(_QWORD *)&v211[1] <<= 12;
                  *((_QWORD *)&v211[1] + 1) <<= 12;
                  *(_OWORD *)v6 = v211[0];
                  *(_OWORD *)(v6 + 16) = v211[1];
LABEL_176:
                  v43 = 0;
                }
              }
            }
            else
            {
              v43 = -1073741735;
            }
LABEL_177:
            if ( !Object )
              return v43;
            ObfDereferenceObjectWithTag(Object, 0x79517350u);
            return v43;
          case ProcessDefaultCpuSetsInformation:
          case ProcessAllowedCpuSetsInformation:
            if ( (v5 & 7) != 0 || (unsigned int)v5 > 0xA0 )
              return -1073741820;
            v43 = ObReferenceObjectByHandleWithTag(
                    Handle,
                    0x1000u,
                    (POBJECT_TYPE)PsProcessType,
                    v9,
                    0x79517350u,
                    &Object,
                    0LL);
            if ( v43 >= 0 )
            {
              LOBYTE(v8) = ProcessInformationClass == ProcessAllowedCpuSetsInformation;
              v115 = 8 * KeQueryCpuSetsProcess((__int64)Object, v225, 0x14u, v8);
              ObfDereferenceObjectWithTag(Object, 0x79517350u);
              if ( ReturnLength )
                *ReturnLength = v115;
              if ( v115 < (unsigned int)v5 )
                LODWORD(v5) = v115;
              memmove((void *)v6, v225, (unsigned int)v5);
            }
            return v43;
          case ProcessJobMemoryInformation:
            if ( (_DWORD)v5 != 40 )
              return -1073741820;
            result = ObReferenceObjectByHandleWithTag(
                       Handle,
                       0x1000u,
                       (POBJECT_TYPE)PsProcessType,
                       v9,
                       0x79517350u,
                       &Object,
                       0LL);
            if ( result < 0 )
              return result;
            *(_QWORD *)&v187[24] = 0LL;
            *(_QWORD *)&v187[32] = 0LL;
            if ( *((_QWORD *)Object + 119) )
            {
              KeStackAttachProcess((PRKPROCESS)Object, &ApcState);
              ZwQueryInformationJobObject(0LL, JobObjectMemoryUsageInformation, JobInformation, 0x28u, 0LL);
              ZwQueryInformationJobObject(0LL, JobObjectExtendedLimitInformation, v220, 0x98u, 0LL);
              KeUnstackDetachProcess(&ApcState);
              *(_QWORD *)&v187[8] = JobInformation[0];
              *(_QWORD *)&v187[16] = JobInformation[1];
              *(_QWORD *)v187 = JobInformation[2];
              if ( (v220[2] & 0x200000) != 0 )
                *(_QWORD *)&v187[32] = v220[18];
              if ( (v220[2] & 0x200) != 0 )
                *(_QWORD *)&v187[24] = v220[15];
              *(_OWORD *)v6 = *(_OWORD *)v187;
              *(_OWORD *)(v6 + 16) = *(_OWORD *)&v187[16];
              *(_QWORD *)(v6 + 32) = *(_QWORD *)&v187[32];
              if ( ReturnLength )
                *ReturnLength = 40;
            }
            else
            {
              LODWORD(v8) = -1073741394;
            }
            goto LABEL_230;
          case ProcessInPrivate:
            if ( (_DWORD)v5 != 1 )
              return -1073741820;
            result = ObReferenceObjectByHandleWithTag(
                       Handle,
                       0x1000u,
                       (POBJECT_TYPE)PsProcessType,
                       v9,
                       0x79517350u,
                       &Object,
                       0LL);
            ExecuteOptions = result;
            if ( result < 0 )
              return result;
            v21 = Object;
            *(_BYTE *)v6 = *((int *)Object + 194) < 0;
            goto LABEL_51;
          case ProcessRaiseUMExceptionOnInvalidHandleClose:
            if ( (_DWORD)v5 != 4 )
              return -1073741820;
            result = ObReferenceObjectByHandleWithTag(
                       Handle,
                       0x1000u,
                       (POBJECT_TYPE)PsProcessType,
                       v9,
                       0x79517350u,
                       &Object,
                       0LL);
            ExecuteOptions = result;
            v145 = result;
            if ( result < 0 )
              return result;
            v114 = ObReferenceProcessHandleTable(Object);
            if ( !v114 )
              goto LABEL_459;
            LOBYTE(v8) = (unsigned __int8)ExQueryRaiseUMExceptionOnInvalidHandleClose(v114) != 0;
            *(_DWORD *)v6 = v8;
LABEL_458:
            ObDereferenceProcessHandleTable(Object);
            goto LABEL_204;
          case ProcessIumChallengeResponse:
            return PsIumGetOnDemandDebugChallenge(Handle, v6, (unsigned int)v5, ReturnLength);
          case ProcessChildProcessInformation:
            if ( (_DWORD)v5 != 3 )
              return -1073741820;
            v116 = Handle;
            if ( Handle == (HANDLE)-1LL )
            {
              v117 = PsGetCurrentProcess();
              Object = v117;
            }
            else
            {
              result = ObReferenceObjectByHandleWithTag(
                         Handle,
                         0x400u,
                         (POBJECT_TYPE)PsProcessType,
                         v9,
                         0x79517350u,
                         &Object,
                         0LL);
              if ( result < 0 )
                return result;
              v117 = Object;
            }
            NoChildProcessRestrictedPolicy = PspGetNoChildProcessRestrictedPolicy(v117);
            *(_WORD *)v6 = 0;
            *(_BYTE *)(v6 + 2) = 0;
            v119 = NoChildProcessRestrictedPolicy - 1;
            if ( !v119 )
              goto LABEL_559;
            v120 = v119 - 1;
            if ( v120 )
            {
              if ( v120 == 1 )
                *(_BYTE *)(v6 + 2) = 1;
            }
            else
            {
              *(_BYTE *)(v6 + 1) = 1;
LABEL_559:
              *(_BYTE *)v6 = 1;
            }
            if ( ReturnLength )
              *ReturnLength = 3;
            if ( v116 != (HANDLE)-1LL )
              goto LABEL_230;
            goto LABEL_140;
          case ProcessHighGraphicsPriorityInformation:
            if ( (_DWORD)v5 != 1 )
              return -1073741820;
            result = ObReferenceObjectByHandleWithTag(
                       Handle,
                       0x1000u,
                       (POBJECT_TYPE)PsProcessType,
                       v9,
                       0x79517350u,
                       &Object,
                       0LL);
            ExecuteOptions = result;
            if ( result < 0 )
              return result;
            v21 = Object;
            *(_BYTE *)v6 = (*((_DWORD *)Object + 447) & 0x200) != 0;
            goto LABEL_51;
          case ProcessSubsystemInformation:
            if ( (_DWORD)v5 != 4 )
              return -1073741820;
            result = ObReferenceObjectByHandleWithTag(
                       Handle,
                       0x1000u,
                       (POBJECT_TYPE)PsProcessType,
                       v9,
                       0x79517350u,
                       &Object,
                       0LL);
            ExecuteOptions = result;
            if ( result < 0 )
              return result;
            v21 = Object;
            if ( *((_QWORD *)Object + 232) )
              *(_DWORD *)v6 = qword_1404369D0;
            else
              *(_DWORD *)v6 = 0;
            if ( ReturnLength )
              *ReturnLength = 4;
            goto LABEL_51;
          case ProcessEnergyValues:
            memset(v224, 0, sizeof(v224));
            result = ObReferenceObjectByHandleWithTag(
                       Handle,
                       0x1000u,
                       (POBJECT_TYPE)PsProcessType,
                       v9,
                       0x79517350u,
                       &Object,
                       0LL);
            ExecuteOptions = result;
            if ( result < 0 )
              return result;
            PsQueryProcessEnergyValues(Object, v224);
            if ( (unsigned int)v5 > 0x1B0 )
              LODWORD(v5) = 432;
            memmove((void *)v6, v224, (unsigned int)v5);
            if ( ReturnLength )
              *ReturnLength = 432;
            goto LABEL_204;
          case ProcessPowerThrottlingState:
            v212 = 0LL;
            v213 = 0;
            if ( (_DWORD)v5 != 12 )
              return -1073741820;
            ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost);
            if ( !ExtensionTable )
              return -1073741822;
            v91 = ObReferenceObjectByHandleWithTag(
                    Handle,
                    0x1000u,
                    (POBJECT_TYPE)PsProcessType,
                    v9,
                    0x79517350u,
                    &Object,
                    0LL);
            if ( v91 >= 0 )
            {
              ExecuteOptions = (*(__int64 (__fastcall **)(PVOID, __int64 *))(ExtensionTable + 16))(Object, &v212);
              if ( ExecuteOptions >= 0 )
              {
                *(_QWORD *)v6 = v212;
                *(_DWORD *)(v6 + 8) = v213;
                if ( ReturnLength )
                  *ReturnLength = 12;
                ExecuteOptions = 0;
                v145 = 0;
              }
              ObfDereferenceObjectWithTag(Object, 0x79517350u);
              ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost);
              return ExecuteOptions;
            }
            ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost);
            return v91;
          case ProcessWin32kSyscallFilterInformation:
            if ( (_DWORD)v5 != 8 )
              return -1073741820;
            v122 = Handle;
            if ( Handle == (HANDLE)-1LL )
            {
              v123 = PsGetCurrentProcess();
              Object = v123;
            }
            else
            {
              result = ObReferenceObjectByHandleWithTag(
                         Handle,
                         0x400u,
                         (POBJECT_TYPE)PsProcessType,
                         v9,
                         0x79517350u,
                         &Object,
                         0LL);
              if ( result < 0 )
                return result;
              v123 = Object;
            }
            *(_DWORD *)v6 = 0;
            v124 = v123[532];
            v125 = 0;
            if ( (v124 & 0x4000) != 0 )
            {
              v125 = 1;
              *(_DWORD *)v6 = 1;
              v124 = v123[532];
            }
            if ( (v124 & 0x8000) != 0 )
              *(_DWORD *)v6 = v125 | 2;
            *(_DWORD *)(v6 + 4) = v123[506];
            if ( ReturnLength )
              *ReturnLength = 8;
            if ( v122 == (HANDLE)-1LL )
              goto LABEL_140;
            ObfDereferenceObjectWithTag(v123, 0x79517350u);
            return 0;
          case ProcessWakeInformation:
            if ( v9 )
              return -1073741790;
            if ( (_DWORD)v5 != 48 )
              return -1073741820;
            result = ObReferenceObjectByHandleWithTag(
                       Handle,
                       0x1000u,
                       (POBJECT_TYPE)PsProcessType,
                       0,
                       0x79517350u,
                       &Object,
                       0LL);
            if ( result < 0 )
              return result;
            ExecuteOptions = PspAllocateAndQueryProcessNotificationChannel(CurrentThread, Object, v6);
            if ( ExecuteOptions >= 0 && ReturnLength )
              *ReturnLength = 48;
            goto LABEL_204;
          case ProcessEnergyTrackingState:
            v126 = 144;
            memset(v221, 0, sizeof(v221));
            if ( (unsigned int)v5 < 8 )
              return -1073741820;
            result = ObReferenceObjectByHandleWithTag(
                       Handle,
                       0x1000u,
                       (POBJECT_TYPE)PsProcessType,
                       v9,
                       0x79517350u,
                       &Object,
                       0LL);
            if ( result < 0 )
              return result;
            PoQueryProcessEnergyTrackingState(Object, v221);
            if ( (unsigned int)v5 < 0x90 )
              v126 = v5;
            memmove((void *)v6, v221, v126);
            if ( ReturnLength )
              *ReturnLength = v126;
            v145 = 0;
            goto LABEL_230;
          case ProcessCaptureTrustletLiveDump:
            if ( (_DWORD)v5 != 4 )
              return -1073741820;
            result = ObReferenceObjectByHandleWithTag(
                       Handle,
                       0x418u,
                       (POBJECT_TYPE)PsProcessType,
                       v9,
                       0x79517350u,
                       &Object,
                       0LL);
            if ( result < 0 )
              return result;
            if ( !*((_QWORD *)Object + 91) )
            {
              ObfDereferenceObjectWithTag(Object, 0x79517350u);
              return -1073741790;
            }
            ProcessTelemetryCoverage = VslLiveDumpCaptureProcess();
LABEL_427:
            ExecuteOptions = ProcessTelemetryCoverage;
LABEL_204:
            v21 = Object;
            goto LABEL_51;
          case ProcessTelemetryCoverage:
            result = ObReferenceObjectByHandleWithTag(
                       Handle,
                       0x1000u,
                       (POBJECT_TYPE)PsProcessType,
                       v9,
                       0x79517350u,
                       &Object,
                       0LL);
            if ( result < 0 )
              return result;
            ProcessTelemetryCoverage = EtwQueryProcessTelemetryCoverage(Object, v6, (unsigned int)v5, ReturnLength);
            goto LABEL_427;
          case ProcessEnableReadWriteVmLogging:
          case ProcessEnableLogging:
            if ( ProcessInformationClass == ProcessEnableReadWriteVmLogging && !(_DWORD)v5
              || ProcessInformationClass == ProcessEnableLogging && (unsigned int)v5 < 4 )
            {
              return -1073741820;
            }
            result = ObReferenceObjectByHandleWithTag(
                       Handle,
                       0x1000u,
                       (POBJECT_TYPE)PsProcessType,
                       v9,
                       0x79517350u,
                       &Object,
                       0LL);
            v127 = result;
            if ( result >= 0 )
            {
              v128 = Object;
              *(_BYTE *)v6 = HIBYTE(*((_DWORD *)Object + 194)) & 3;
              if ( ProcessInformationClass == ProcessEnableLogging )
                *(_DWORD *)v6 |= (v128[447] >> 17) & 0xC;
              ObfDereferenceObjectWithTag(v128, 0x79517350u);
              return v127;
            }
            return result;
          case ProcessUptimeInformation:
            memset(v214, 0, sizeof(v214));
            result = ObReferenceObjectByHandleWithTag(
                       Handle,
                       0x1000u,
                       (POBJECT_TYPE)PsProcessType,
                       v9,
                       0x79517350u,
                       &Object,
                       0LL);
            if ( result >= 0 )
            {
              v182 = 0LL;
              v79 = 0LL;
              v183 = 0LL;
              v80 = 0LL;
              v184 = 0LL;
              v186 = 0LL;
              v81 = CurrentThread;
              PspLockProcessShared((__int64)Object, (__int64)CurrentThread);
              v82 = *((_QWORD *)Object + 244);
              if ( (v82 >> 61) - 3 <= 1
                && (v80 = v82 & 0x1FFFFFFFFFFFFFFFLL,
                    v184 = v82 & 0x1FFFFFFFFFFFFFFFLL,
                    v182 = *((_QWORD *)Object + 243),
                    v79 = v182 - *((_QWORD *)Object + 240),
                    v183 = v79,
                    v82 >> 61 == 3) )
              {
                v83 = v186 | 0x200;
              }
              else
              {
                v83 = v186;
              }
              v84 = v83 & 0xFFFFFF00 | *((_BYTE *)Object + 1787) & 7 | (2 * (*((_BYTE *)Object + 1787) & 0x38));
              if ( (*((_DWORD *)Object + 447) & 4) != 0 )
                v85 = 256;
              else
                v85 = 0;
              LODWORD(v186) = v85 | v84 & 0xFFFFFEFF;
              PspUnlockProcessShared((__int64)Object, (__int64)v81);
              PsGetProcessDeepFreezeStats(Object, v214);
              v181[0] = v214[0];
              v181[1] = v214[1];
              v185 = v214[2];
              v86 = v79 == 0;
              v87 = Object;
              if ( v86 )
                v183 = v214[0] - *((_QWORD *)Object + 240);
              if ( !v80 )
                v184 = v214[1] - *((_QWORD *)Object + 241) - v214[2];
              if ( (unsigned int)v5 >= 0x38 )
                LODWORD(v5) = 56;
              memmove((void *)v6, v181, (unsigned int)v5);
              if ( ReturnLength )
                *ReturnLength = v5;
              v145 = 0;
              ObfDereferenceObjectWithTag(v87, 0x79517350u);
              return 0;
            }
            return result;
          case ProcessImageSection:
            if ( (_DWORD)v5 != 8 )
              return -1073741820;
            if ( v9 )
            {
              v129 = v6;
              if ( v6 >= 0x7FFFFFFF0000LL )
                v129 = 0x7FFFFFFF0000LL;
              *(_QWORD *)v129 = *(_QWORD *)v129;
            }
            v130 = (PVOID *)PsGetCurrentProcess();
            Object = v130;
            if ( Handle != (HANDLE)-1LL || v130 != (PVOID *)CurrentThread->Process )
              return -1073741790;
            result = ObOpenObjectByPointer(v130[120], 0, 0LL, 5u, MmSectionObjectType, v9, &v195);
            if ( result >= 0 )
            {
              *(_QWORD *)v6 = v195;
              if ( ReturnLength )
                *ReturnLength = 8;
            }
            return result;
          case ProcessSequenceNumber:
            if ( (_DWORD)v5 != 8 )
              return -1073741820;
            result = ObReferenceObjectByHandleWithTag(
                       Handle,
                       0x1000u,
                       (POBJECT_TYPE)PsProcessType,
                       v9,
                       0x79517350u,
                       &Object,
                       0LL);
            ExecuteOptions = result;
            if ( result < 0 )
              return result;
            v21 = Object;
            *(_QWORD *)v6 = *((_QWORD *)Object + 239);
            if ( ReturnLength )
              *ReturnLength = 8;
            goto LABEL_51;
          case ProcessSecurityDomainInformation:
            if ( (_DWORD)v5 != 8 )
              return -1073741820;
            result = ObReferenceObjectByHandleWithTag(
                       Handle,
                       0x1000u,
                       (POBJECT_TYPE)PsProcessType,
                       v9,
                       0x79517350u,
                       &Object,
                       0LL);
            v145 = result;
            if ( result < 0 )
              return result;
            if ( (*((_DWORD *)Object + 194) & 0x8000) != 0 )
            {
              _InterlockedOr(v143, 0);
              *(_QWORD *)v6 = PspReadProcessSecurityDomain((__int64)Object);
              if ( ReturnLength )
                *ReturnLength = 8;
              v145 = 0;
LABEL_230:
              ObfDereferenceObjectWithTag(Object, 0x79517350u);
              return v8;
            }
            else
            {
              ObfDereferenceObjectWithTag(Object, 0x79517350u);
              return -1073741700;
            }
          case ProcessLeapSecondInformation:
            if ( (_DWORD)v5 != 8 )
            {
              if ( ReturnLength )
                *ReturnLength = 8;
              return -1073741820;
            }
            if ( Handle != (HANDLE)-1LL )
              return -1073741811;
            v131 = PsGetCurrentProcess();
            Object = v131;
            v158 = 0LL;
            v132 = v131[1].ActiveProcessors.Bitmap[0];
            if ( v132 )
            {
              v133 = 0LL;
              v134 = (__int64 *)v131[1].ActiveProcessors.Bitmap[6];
              if ( v134 )
                v133 = *v134;
              if ( v133 )
              {
                if ( (*(_DWORD *)(v133 + 1140) & 1) != 0 )
                  LODWORD(v158) = 1;
              }
              else
              {
                v135 = v158;
                if ( (*(_BYTE *)(v132 + 1984) & 1) != 0 )
                  v135 = 1;
                LODWORD(v158) = v135;
              }
            }
            *(_QWORD *)v6 = v158;
            if ( ReturnLength )
              *ReturnLength = 8;
LABEL_140:
            result = v8;
            break;
          default:
            return -1073741821;
        }
        return result;
      }
      if ( (unsigned int)v5 >= 0x24 )
      {
        if ( (_DWORD)v5 == 48 )
        {
          v156 = *(_DWORD *)(v6 + 40);
          v22 = v156;
          if ( (v156 & 0xFFFFFFFE) != 0 )
            return -1073741811;
          goto LABEL_57;
        }
        if ( (_DWORD)v5 == 36 )
        {
          v22 = 0;
LABEL_57:
          result = ObReferenceObjectByHandleWithTag(
                     Handle,
                     0x400u,
                     (POBJECT_TYPE)PsProcessType,
                     v9,
                     0x79517350u,
                     &Object,
                     0LL);
          if ( result < 0 )
            return result;
          ExecuteOptions = ObQueryDeviceMapInformation((_KPROCESS *)Object, v6, v22);
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
          if ( ExecuteOptions >= 0 && ReturnLength )
            *ReturnLength = v5;
          return ExecuteOptions;
        }
      }
    }
    return -1073741820;
  }
  v164[0] = 0;
  if ( (_DWORD)v5 != 8 )
    return -1073741820;
  v14 = *(_DWORD *)v6;
  v189 = *(_DWORD *)v6;
  if ( Handle == (HANDLE)-1LL )
  {
    Object = PsGetCurrentProcess();
  }
  else
  {
    result = ObReferenceObjectByHandleWithTag(
               Handle,
               0x400u,
               (POBJECT_TYPE)PsProcessType,
               v9,
               0x79517350u,
               &Object,
               0LL);
    if ( result < 0 )
      return result;
  }
  if ( v14 != 7 )
  {
    switch ( v14 )
    {
      case 1:
        v145 = 0;
        *(_DWORD *)(v6 + 4) = 0;
        v66 = Object;
        v67 = *((_DWORD *)Object + 532);
        if ( (v67 & 0x40) == 0 )
        {
          *(_DWORD *)(v6 + 4) |= 1u;
          v67 = v66[532];
        }
        if ( (v67 & 0x10) != 0 )
        {
          *(_DWORD *)(v6 + 4) |= 2u;
          v67 = v66[532];
        }
        if ( (v67 & 0x20) != 0 )
        {
          *(_DWORD *)(v6 + 4) |= 4u;
          v67 = v66[532];
        }
        if ( (v67 & 8) != 0 )
          *(_DWORD *)(v6 + 4) |= 8u;
        v17 = Handle;
        goto LABEL_44;
      case 2:
        v145 = 0;
        *(_DWORD *)(v6 + 4) = 0;
        v60 = Object;
        v61 = *((_DWORD *)Object + 532);
        if ( (v61 & 0x100) != 0 )
        {
          v63 = *(_DWORD *)(v6 + 4) | 1;
        }
        else
        {
          if ( (v61 & 0x800) == 0 )
            goto LABEL_265;
          v63 = *(_DWORD *)(v6 + 4) | 8;
        }
        *(_DWORD *)(v6 + 4) = v63;
LABEL_265:
        v62 = v60[532];
        if ( (v62 & 0x200) != 0 )
        {
          *(_DWORD *)(v6 + 4) |= 2u;
          v62 = v60[532];
        }
        if ( (v62 & 0x400) != 0 )
          *(_DWORD *)(v6 + 4) |= 4u;
        v17 = Handle;
        goto LABEL_44;
      case 3:
        v145 = 0;
        v72 = ObReferenceProcessHandleTable(Object);
        if ( v72 )
        {
          ExQueryHandleExceptionsPermanency(v72, &v153, &v154);
          *(_DWORD *)(v6 + 4) = 0;
          if ( v153 )
            *(_DWORD *)(v6 + 4) |= 1u;
          if ( v154 )
            *(_DWORD *)(v6 + 4) |= 2u;
          ObDereferenceProcessHandleTable(Object);
        }
        else
        {
          v145 = -1073741558;
        }
        goto LABEL_347;
      case 4:
        v145 = 0;
        *(_DWORD *)(v6 + 4) = 0;
        v68 = *((_DWORD *)Object + 532);
        if ( (v68 & 0x1000) != 0 )
        {
          v69 = *(_DWORD *)(v6 + 4) | 1;
        }
        else
        {
          if ( (v68 & 0x2000) == 0 )
            goto LABEL_327;
          v69 = *(_DWORD *)(v6 + 4) | 2;
        }
        *(_DWORD *)(v6 + 4) = v69;
LABEL_327:
        v17 = Handle;
        goto LABEL_44;
      case 6:
        v145 = 0;
        *(_DWORD *)(v6 + 4) = 0;
        if ( (*((_DWORD *)Object + 532) & 0x80u) != 0 )
          *(_DWORD *)(v6 + 4) |= 1u;
        v17 = Handle;
        goto LABEL_44;
      case 8:
        v145 = 0;
        PsQueryProcessSignatureMitigationPolicy(Object, v164);
        *(_DWORD *)(v6 + 4) = v164[0];
        v17 = Handle;
        goto LABEL_44;
      case 9:
        v145 = 0;
        *(_DWORD *)(v6 + 4) = 0;
        v70 = *((_DWORD *)Object + 532);
        if ( (v70 & 0x10000) != 0 )
        {
          v71 = *(_DWORD *)(v6 + 4) | 1;
        }
        else
        {
          if ( (v70 & 0x20000) == 0 )
            goto LABEL_335;
          v71 = *(_DWORD *)(v6 + 4) | 2;
        }
        *(_DWORD *)(v6 + 4) = v71;
LABEL_335:
        v17 = Handle;
        goto LABEL_44;
      case 10:
        v145 = 0;
        *(_DWORD *)(v6 + 4) = 0;
        v73 = Object;
        v74 = *((_DWORD *)Object + 532);
        if ( (v74 & 0x80000) != 0 )
        {
          v75 = *(_DWORD *)(v6 + 4) | 1;
LABEL_350:
          *(_DWORD *)(v6 + 4) = v75;
          goto LABEL_351;
        }
        if ( (v74 & 0x100000) != 0 )
        {
          v75 = *(_DWORD *)(v6 + 4) | 8;
          goto LABEL_350;
        }
LABEL_351:
        v76 = v73[532];
        if ( (v76 & 0x200000) != 0 )
        {
          v77 = *(_DWORD *)(v6 + 4) | 2;
        }
        else
        {
          if ( (v76 & 0x400000) == 0 )
          {
LABEL_353:
            if ( (v73[532] & 0x40000) != 0 )
              *(_DWORD *)(v6 + 4) |= 4u;
            v17 = Handle;
            goto LABEL_44;
          }
          v77 = *(_DWORD *)(v6 + 4) | 0x10;
        }
        *(_DWORD *)(v6 + 4) = v77;
        goto LABEL_353;
      case 11:
        v145 = 0;
        *(_DWORD *)(v6 + 4) = 0;
        *(_DWORD *)(v6 + 4) = PsGetWin32KFilterSet() & 0xF | *(_DWORD *)(v6 + 4) & 0xFFFFFFF0;
        v17 = Handle;
        goto LABEL_44;
      case 12:
        v145 = 0;
        *(_DWORD *)(v6 + 4) = 0;
        v136 = Object;
        v137 = *((_DWORD *)Object + 533);
        if ( (v137 & 1) != 0 )
        {
          *(_DWORD *)(v6 + 4) |= 1u;
          v137 = v136[533];
        }
        if ( (v137 & 4) != 0 )
        {
          *(_DWORD *)(v6 + 4) |= 4u;
          v137 = v136[533];
        }
        if ( (v137 & 0x400) != 0 )
        {
          *(_DWORD *)(v6 + 4) |= 0x10u;
          v137 = v136[533];
        }
        if ( (v137 & 0x10) != 0 )
        {
          *(_DWORD *)(v6 + 4) |= 0x40u;
          v137 = v136[533];
        }
        if ( (v137 & 0x40) != 0 )
        {
          *(_DWORD *)(v6 + 4) |= 0x100u;
          v137 = v136[533];
        }
        if ( (v137 & 0x100) != 0 )
        {
          *(_DWORD *)(v6 + 4) |= 0x400u;
          v137 = v136[533];
        }
        if ( (v137 & 2) != 0 )
        {
          *(_DWORD *)(v6 + 4) |= 2u;
          v137 = v136[533];
        }
        if ( (v137 & 8) != 0 )
        {
          *(_DWORD *)(v6 + 4) |= 8u;
          v137 = v136[533];
        }
        if ( (v137 & 0x800) != 0 )
        {
          *(_DWORD *)(v6 + 4) |= 0x20u;
          v137 = v136[533];
        }
        if ( (v137 & 0x20) != 0 )
        {
          *(_DWORD *)(v6 + 4) |= 0x80u;
          v137 = v136[533];
        }
        if ( (v137 & 0x80u) != 0 )
        {
          *(_DWORD *)(v6 + 4) |= 0x200u;
          v137 = v136[533];
        }
        if ( (v137 & 0x200) != 0 )
          *(_DWORD *)(v6 + 4) |= 0x800u;
        v17 = Handle;
        goto LABEL_44;
      case 13:
        v145 = 0;
        *(_DWORD *)(v6 + 4) = 0;
        v188 = PspGetNoChildProcessRestrictedPolicy(Object);
        switch ( v188 )
        {
          case 1:
            goto LABEL_683;
          case 2:
            *(_DWORD *)(v6 + 4) |= 4u;
LABEL_683:
            v138 = *(_DWORD *)(v6 + 4) | 1;
            break;
          case 3:
            v138 = *(_DWORD *)(v6 + 4) | 2;
            break;
          default:
            goto LABEL_685;
        }
        *(_DWORD *)(v6 + 4) = v138;
LABEL_685:
        v17 = Handle;
        goto LABEL_44;
      case 14:
        v145 = 0;
        *(_DWORD *)(v6 + 4) = 0;
        v139 = Object;
        v140 = *((_DWORD *)Object + 532);
        if ( (v140 & 0x40000000) != 0 )
        {
          *(_DWORD *)(v6 + 4) |= 1u;
          v140 = v139[532];
        }
        if ( v140 < 0 )
          *(_DWORD *)(v6 + 4) |= 2u;
        v141 = Object;
        v142 = *((_DWORD *)Object + 533);
        if ( (v142 & 0x1000) != 0 )
        {
          *(_DWORD *)(v6 + 4) |= 4u;
          v142 = v141[533];
        }
        if ( (v142 & 0x2000) != 0 )
          *(_DWORD *)(v6 + 4) |= 8u;
        v17 = Handle;
        goto LABEL_44;
      default:
        v145 = -1073741637;
LABEL_347:
        v17 = Handle;
        goto LABEL_44;
    }
  }
  v145 = 0;
  *(_DWORD *)(v6 + 4) = 0;
  v15 = Object;
  v16 = *((_DWORD *)Object + 532);
  if ( (v16 & 1) != 0 )
  {
    *(_DWORD *)(v6 + 4) |= 1u;
    v16 = v15[532];
  }
  if ( (v16 & 2) != 0 )
  {
    *(_DWORD *)(v6 + 4) |= 2u;
    v16 = v15[532];
  }
  if ( (v16 & 4) != 0 )
    *(_DWORD *)(v6 + 4) |= 4u;
  v17 = Handle;
LABEL_44:
  if ( v17 != (HANDLE)-1LL )
    ObfDereferenceObjectWithTag(Object, 0x79517350u);
  return v145;
}
