/*
 * XREFs of NtQueryInformationProcess @ 0x14066ED30
 * Callers:
 *     <none>
 * Callees:
 *     KeStackAttachProcess @ 0x140016610 (KeStackAttachProcess.c)
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14004D320 (ExAcquireRundownProtection_0.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14004E220 (ObfReferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x140051600 (KeLeaveCriticalRegionThread.c)
 *     ExGenRandom @ 0x1400627E0 (ExGenRandom.c)
 *     MmGetSessionId @ 0x1400897A0 (MmGetSessionId.c)
 *     KeQuerySystemTimePrecise @ 0x14008A4E0 (KeQuerySystemTimePrecise.c)
 *     KeEnterCriticalRegionThread @ 0x14008FA60 (KeEnterCriticalRegionThread.c)
 *     PsGetWin32KFilterSet @ 0x1400EF460 (PsGetWin32KFilterSet.c)
 *     KeUnstackDetachProcess @ 0x1400F1110 (KeUnstackDetachProcess.c)
 *     PsIsProtectedProcess @ 0x1400F1150 (PsIsProtectedProcess.c)
 *     MmQueryWorkingSetInformation @ 0x1400F1168 (MmQueryWorkingSetInformation.c)
 *     KeQueryGroupMaskProcess @ 0x1400F123C (KeQueryGroupMaskProcess.c)
 *     KeQueryAffinityProcess @ 0x1400F1260 (KeQueryAffinityProcess.c)
 *     PsGetCurrentProcess @ 0x1400F13B0 (PsGetCurrentProcess.c)
 *     ExReleaseExtensionTable @ 0x14010DC6C (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x14010DC84 (ExGetExtensionTable.c)
 *     ExUnlockUserBuffer @ 0x14011A788 (ExUnlockUserBuffer.c)
 *     VslpEnterIumSecureMode @ 0x140129D80 (VslpEnterIumSecureMode.c)
 *     PsQueryProcessCommandLine @ 0x14012A330 (PsQueryProcessCommandLine.c)
 *     MmQueryCommitReleaseState @ 0x140130A24 (MmQueryCommitReleaseState.c)
 *     PsGetProcessProtection @ 0x140134370 (PsGetProcessProtection.c)
 *     ExQueryHandleExceptionsPermanency @ 0x140160874 (ExQueryHandleExceptionsPermanency.c)
 *     PspUnlockProcessShared @ 0x140161004 (PspUnlockProcessShared.c)
 *     PspLockProcessShared @ 0x14016107C (PspLockProcessShared.c)
 *     xKdEnumerateDebuggingDevices @ 0x140194120 (xKdEnumerateDebuggingDevices.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwQueryInformationJobObject @ 0x1401BAB50 (ZwQueryInformationJobObject.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     KeQueryCpuSetsProcess @ 0x1402967B4 (KeQueryCpuSetsProcess.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PspGetRedirectionTrustPolicy @ 0x1405837D4 (PspGetRedirectionTrustPolicy.c)
 *     PsQueryTotalCycleTimeProcess @ 0x140586280 (PsQueryTotalCycleTimeProcess.c)
 *     PsGetProcessDeepFreezeStats @ 0x1405B3334 (PsGetProcessDeepFreezeStats.c)
 *     ObGetProcessHandleCount @ 0x1405B4960 (ObGetProcessHandleCount.c)
 *     ObReferenceProcessHandleTable @ 0x1405D2160 (ObReferenceProcessHandleTable.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x1405F6700 (ObCloseHandle.c)
 *     PsQueryStatisticsProcess @ 0x1405FF700 (PsQueryStatisticsProcess.c)
 *     PsReferenceProcessFilePointer @ 0x14061DB90 (PsReferenceProcessFilePointer.c)
 *     PsQueryProcessAttributes @ 0x14062691C (PsQueryProcessAttributes.c)
 *     PsQueryProcessEnergyValues @ 0x1406382C0 (PsQueryProcessEnergyValues.c)
 *     MmCopyVirtualMemory @ 0x1406457B0 (MmCopyVirtualMemory.c)
 *     ObOpenObjectByPointer @ 0x1406480E0 (ObOpenObjectByPointer.c)
 *     PspAllocateAndQueryProcessNotificationChannel @ 0x14065262C (PspAllocateAndQueryProcessNotificationChannel.c)
 *     IoQueryFileDosDeviceName @ 0x140660770 (IoQueryFileDosDeviceName.c)
 *     PspQueryQuotaLimits @ 0x14066E798 (PspQueryQuotaLimits.c)
 *     PsQueryProcessQuotaCounters @ 0x14066E958 (PsQueryProcessQuotaCounters.c)
 *     PsQueryFullProcessImageName @ 0x14066E984 (PsQueryFullProcessImageName.c)
 *     MmGetSectionInformation @ 0x14066EA10 (MmGetSectionInformation.c)
 *     PsQueryRuntimeProcess @ 0x14066EC60 (PsQueryRuntimeProcess.c)
 *     ObReferenceObjectByHandleWithTag @ 0x1406726C0 (ObReferenceObjectByHandleWithTag.c)
 *     ObQueryDeviceMapInformation @ 0x140672700 (ObQueryDeviceMapInformation.c)
 *     ExEnumHandleTable @ 0x140690C90 (ExEnumHandleTable.c)
 *     ExLockUserBuffer @ 0x14069FBD8 (ExLockUserBuffer.c)
 *     EtwQueryProcessTelemetryInfo @ 0x1406A5F20 (EtwQueryProcessTelemetryInfo.c)
 *     ExIsRestrictedCaller @ 0x1406AEC8C (ExIsRestrictedCaller.c)
 *     KeGetExecuteOptions @ 0x1406CB134 (KeGetExecuteOptions.c)
 *     PsQueryProcessSignatureMitigationPolicy @ 0x1406CC740 (PsQueryProcessSignatureMitigationPolicy.c)
 *     PspGetNoChildProcessRestrictedPolicy @ 0x1406D0F00 (PspGetNoChildProcessRestrictedPolicy.c)
 *     ExSystemExceptionFilter @ 0x1406E3A10 (ExSystemExceptionFilter.c)
 *     ExQueryRaiseUMExceptionOnInvalidHandleClose @ 0x140710A20 (ExQueryRaiseUMExceptionOnInvalidHandleClose.c)
 *     DbgkOpenProcessDebugPort @ 0x14080F598 (DbgkOpenProcessDebugPort.c)
 *     VslGetSecurePebAddress @ 0x1408199F0 (VslGetSecurePebAddress.c)
 *     PoQueryProcessEnergyTrackingState @ 0x140878C54 (PoQueryProcessEnergyTrackingState.c)
 *     PspQueryPooledQuotaLimits @ 0x140889DA8 (PspQueryPooledQuotaLimits.c)
 *     PspQueryWorkingSetWatch @ 0x140889F38 (PspQueryWorkingSetWatch.c)
 *     PsIumGetOnDemandDebugChallenge @ 0x14088E0A0 (PsIumGetOnDemandDebugChallenge.c)
 *     EtwQueryProcessTelemetryCoverage @ 0x1408B7930 (EtwQueryProcessTelemetryCoverage.c)
 *     ExDereferenceHandleDebugInfo @ 0x1408CEED4 (ExDereferenceHandleDebugInfo.c)
 *     ExQueryHandleExceptions @ 0x1408CF120 (ExQueryHandleExceptions.c)
 *     ExQueryProcessHandleInformation @ 0x1408CF130 (ExQueryProcessHandleInformation.c)
 *     ExReferenceHandleDebugInfo @ 0x1408CF318 (ExReferenceHandleDebugInfo.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtQueryInformationProcess(
        HANDLE ProcessHandle,
        PROCESSINFOCLASS ProcessInformationClass,
        PVOID ProcessInformation,
        ULONG ProcessInformationLength,
        PULONG ReturnLength)
{
  size_t v5; // rdi
  char *v6; // rsi
  unsigned __int8 v9; // bl
  __int64 v10; // rax
  unsigned int *v11; // r14
  __int64 v12; // rcx
  NTSTATUS result; // eax
  unsigned int v14; // ecx
  NTSTATUS DeviceMapInformation; // ebx
  int v16; // r12d
  POBJECT_NAME_INFORMATION v17; // rcx
  ULONG v18; // edx
  unsigned __int16 MaximumLength; // ax
  _DWORD *v20; // rdi
  ULONG v21; // r13d
  _QWORD *v22; // rcx
  _QWORD *v23; // r10
  struct _KTHREAD *v24; // r12
  __int64 v25; // r8
  unsigned __int64 Group; // rdx
  __int64 v27; // rax
  _DWORD *v28; // rdx
  __int64 v29; // rax
  __int16 v30; // cx
  struct _KPROCESS *v31; // r9
  unsigned int v32; // r8d
  int v33; // ebx
  unsigned int v34; // eax
  __int64 v35; // rcx
  HANDLE v36; // rcx
  int ProcessHandleCount; // ebx
  NTSTATUS ProcessTelemetryCoverage; // eax
  NTSTATUS ProcessNotificationChannel; // ebx
  int v40; // edi
  int v41; // ebx
  int v42; // ebx
  unsigned int v43; // r13d
  int SessionId; // ebx
  unsigned int **v45; // rax
  int v46; // ebx
  unsigned int v47; // r13d
  char *v48; // rdi
  void *v49; // rax
  __int64 v50; // rax
  __int64 v51; // r8
  __int64 v52; // rdx
  _OWORD *v53; // rax
  __int64 v54; // rcx
  int v55; // eax
  void *CurrentProcess; // rax
  _DWORD *v57; // rax
  int v58; // ecx
  int v59; // ecx
  struct _KPRCB *CurrentPrcb; // rdi
  ULONG LowPart; // ebx
  int v62; // ecx
  unsigned __int64 v63; // rax
  struct _EX_RUNDOWN_REF *v64; // rcx
  int v65; // r12d
  BOOLEAN v66; // al
  void *v67; // rdi
  __int64 v68; // rax
  __int64 v69; // rax
  void *v70; // rdi
  NTSTATUS ProcessHandleInformation; // ebx
  PVOID v72; // rcx
  __int64 v73; // rdi
  __int64 v74; // rbx
  NTSTATUS v75; // esi
  int v76; // ecx
  __int64 v77; // rdx
  __int64 v78; // rcx
  unsigned int v79; // eax
  ULONG v80; // ecx
  unsigned int v81; // edx
  __int64 v82; // rbx
  unsigned int **v83; // rax
  unsigned __int16 v84; // r14
  __int64 v85; // rax
  __int64 v86; // rcx
  ULONG v87; // eax
  _KPROCESS *v88; // rax
  unsigned __int64 v89; // rax
  int v90; // edi
  _DWORD *v91; // rcx
  int v92; // eax
  unsigned __int64 v93; // rax
  int v94; // ecx
  int v95; // eax
  _DWORD *v96; // rcx
  int v97; // eax
  int v98; // eax
  int v99; // eax
  _DWORD *v100; // rcx
  int v101; // eax
  int v102; // ecx
  int v103; // eax
  _DWORD *v104; // rcx
  int v105; // eax
  int v106; // eax
  int v107; // eax
  int v108; // eax
  _DWORD *v109; // rcx
  int v110; // eax
  int v111; // eax
  int RedirectionTrustPolicy; // eax
  int v113; // eax
  int v114; // eax
  _DWORD *v115; // rcx
  int v116; // eax
  _DWORD *v117; // rcx
  int v118; // eax
  unsigned __int64 v119; // rax
  int v120; // ebx
  unsigned __int64 v121; // rax
  int ProcessCommandLine; // eax
  _DWORD *v123; // rcx
  bool v124; // zf
  unsigned __int64 v125; // rax
  ULONG v126; // ebx
  void *v127; // rax
  int NoChildProcessRestrictedPolicy; // eax
  int v129; // eax
  int v130; // eax
  unsigned __int64 ExtensionTable; // rdi
  int v132; // ebx
  int v133; // eax
  int v134; // r13d
  ULONG v135; // ebx
  __int64 v136; // rcx
  PVOID *v137; // rax
  __int64 v138; // rbx
  __int64 v139; // r13
  struct _KTHREAD *v140; // r12
  unsigned __int64 v141; // rdx
  int v142; // ecx
  PVOID v143; // rbx
  ULONG v144; // r12d
  _KPROCESS *v145; // rax
  unsigned __int64 v146; // r8
  __int64 v147; // rcx
  __int64 *v148; // rdx
  int v149; // eax
  signed __int32 v150[8]; // [rsp+0h] [rbp-A08h] BYREF
  PVOID Object; // [rsp+40h] [rbp-9C8h] BYREF
  NTSTATUS v152; // [rsp+48h] [rbp-9C0h]
  unsigned __int8 v153; // [rsp+4Ch] [rbp-9BCh]
  HANDLE v154; // [rsp+50h] [rbp-9B8h]
  ULONG v155; // [rsp+58h] [rbp-9B0h] BYREF
  unsigned int GroupMaskProcess; // [rsp+5Ch] [rbp-9ACh] BYREF
  char v157; // [rsp+60h] [rbp-9A8h] BYREF
  _BYTE v158[3]; // [rsp+61h] [rbp-9A7h] BYREF
  ULONG v159; // [rsp+64h] [rbp-9A4h] BYREF
  unsigned int v160; // [rsp+68h] [rbp-9A0h]
  PVOID v161; // [rsp+70h] [rbp-998h]
  int v162; // [rsp+78h] [rbp-990h]
  struct _KTHREAD *CurrentThread; // [rsp+80h] [rbp-988h]
  PVOID v164; // [rsp+88h] [rbp-980h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp-978h] BYREF
  char *v166; // [rsp+98h] [rbp-970h]
  int v167; // [rsp+A0h] [rbp-968h]
  PVOID v168; // [rsp+A8h] [rbp-960h]
  PVOID P[2]; // [rsp+B0h] [rbp-958h] BYREF
  __int128 v170; // [rsp+C0h] [rbp-948h]
  PULONG v171; // [rsp+D0h] [rbp-938h]
  unsigned int v172; // [rsp+D8h] [rbp-930h] BYREF
  _DWORD v173[2]; // [rsp+DCh] [rbp-92Ch] BYREF
  _DWORD v174[3]; // [rsp+E4h] [rbp-924h] BYREF
  int v175; // [rsp+F0h] [rbp-918h] BYREF
  int v176; // [rsp+F4h] [rbp-914h] BYREF
  POBJECT_NAME_INFORMATION ObjectNameInformation; // [rsp+F8h] [rbp-910h] BYREF
  __int128 v178; // [rsp+100h] [rbp-908h]
  __int128 v179; // [rsp+110h] [rbp-8F8h]
  __int128 v180; // [rsp+120h] [rbp-8E8h]
  __int128 v181; // [rsp+130h] [rbp-8D8h]
  __int64 v182; // [rsp+140h] [rbp-8C8h] BYREF
  __int64 v183; // [rsp+148h] [rbp-8C0h]
  LARGE_INTEGER v184; // [rsp+150h] [rbp-8B8h] BYREF
  PVOID v185; // [rsp+158h] [rbp-8B0h] BYREF
  __int64 v186; // [rsp+160h] [rbp-8A8h]
  __int64 v187; // [rsp+168h] [rbp-8A0h] BYREF
  __int64 v188; // [rsp+170h] [rbp-898h]
  __int64 v189; // [rsp+178h] [rbp-890h]
  __int64 v190; // [rsp+180h] [rbp-888h]
  __int64 v191; // [rsp+188h] [rbp-880h]
  __int64 v192; // [rsp+190h] [rbp-878h]
  __int64 v193; // [rsp+198h] [rbp-870h]
  _DWORD v194[3]; // [rsp+1A0h] [rbp-868h] BYREF
  int v195; // [rsp+1ACh] [rbp-85Ch]
  PVOID v196; // [rsp+1B0h] [rbp-858h] BYREF
  __int64 v197; // [rsp+1B8h] [rbp-850h] BYREF
  __int64 v198; // [rsp+1C0h] [rbp-848h]
  PVOID v199; // [rsp+1C8h] [rbp-840h] BYREF
  __int64 v200; // [rsp+1D0h] [rbp-838h] BYREF
  HANDLE v201[2]; // [rsp+1D8h] [rbp-830h] BYREF
  __int64 v202; // [rsp+1E8h] [rbp-820h] BYREF
  __int64 v203; // [rsp+1F0h] [rbp-818h] BYREF
  _QWORD v204[3]; // [rsp+1F8h] [rbp-810h] BYREF
  __int128 v205; // [rsp+210h] [rbp-7F8h]
  __int128 v206; // [rsp+220h] [rbp-7E8h]
  __int128 v207; // [rsp+230h] [rbp-7D8h]
  __int128 v208; // [rsp+240h] [rbp-7C8h]
  __int128 v209; // [rsp+250h] [rbp-7B8h]
  __int128 v210; // [rsp+260h] [rbp-7A8h]
  __int128 v211; // [rsp+270h] [rbp-798h]
  __int128 v212; // [rsp+280h] [rbp-788h]
  __int128 v213; // [rsp+290h] [rbp-778h]
  __int128 v214; // [rsp+2A0h] [rbp-768h]
  char v215; // [rsp+2B0h] [rbp-758h] BYREF
  __int128 v216; // [rsp+2C0h] [rbp-748h] BYREF
  __int128 v217; // [rsp+2D0h] [rbp-738h] BYREF
  __int64 v218; // [rsp+2E0h] [rbp-728h] BYREF
  int v219; // [rsp+2E8h] [rbp-720h]
  _QWORD Src[14]; // [rsp+2F0h] [rbp-718h] BYREF
  __int64 v221; // [rsp+360h] [rbp-6A8h] BYREF
  __int64 v222; // [rsp+368h] [rbp-6A0h]
  __int64 v223; // [rsp+370h] [rbp-698h]
  _QWORD JobInformation[5]; // [rsp+380h] [rbp-688h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+3A8h] [rbp-660h] BYREF
  _QWORD v226[5]; // [rsp+3E0h] [rbp-628h] BYREF
  __int128 v227; // [rsp+408h] [rbp-600h]
  __int128 v228; // [rsp+418h] [rbp-5F0h]
  __int128 v229; // [rsp+428h] [rbp-5E0h]
  struct _KAPC_STATE v230; // [rsp+440h] [rbp-5C8h] BYREF
  _BYTE v231[16]; // [rsp+470h] [rbp-598h] BYREF
  int v232; // [rsp+480h] [rbp-588h]
  __int64 v233; // [rsp+4E8h] [rbp-520h]
  __int64 v234; // [rsp+500h] [rbp-508h]
  _BYTE v235[8]; // [rsp+510h] [rbp-4F8h] BYREF
  __int64 v236; // [rsp+518h] [rbp-4F0h]
  _BYTE v237[144]; // [rsp+580h] [rbp-488h] BYREF
  _OWORD v238[11]; // [rsp+610h] [rbp-3F8h] BYREF
  _OWORD v239[11]; // [rsp+6C0h] [rbp-348h] BYREF
  _OWORD v240[27]; // [rsp+770h] [rbp-298h] BYREF
  _QWORD v241[20]; // [rsp+920h] [rbp-E8h] BYREF

  v5 = ProcessInformationLength;
  v6 = (char *)ProcessInformation;
  v154 = ProcessHandle;
  v168 = ProcessInformation;
  *(_QWORD *)&v181 = ProcessInformation;
  v174[1] = ProcessInformationLength;
  v171 = ReturnLength;
  v9 = KeGetCurrentThread()->$86A1A36C0FEBA810544B2F2B35F40C82::gap0[10];
  v153 = v9;
  CurrentThread = KeGetCurrentThread();
  if ( v9 )
  {
    if ( ProcessInformationClass != ProcessProtectionInformation )
    {
      if ( ProcessInformationClass == ProcessCommitReleaseInformation )
      {
        v10 = 7LL;
        v11 = 0LL;
LABEL_14:
        if ( ProcessInformationLength )
        {
          if ( (v10 & (unsigned __int64)ProcessInformation) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( (unsigned __int64)ProcessInformation + ProcessInformationLength > 0x7FFFFFFF0000LL
            || (char *)ProcessInformation + ProcessInformationLength < ProcessInformation )
          {
            MEMORY[0x7FFFFFFF0000] = 0;
          }
        }
        if ( ReturnLength )
        {
          v12 = (__int64)ReturnLength;
          if ( (unsigned __int64)ReturnLength >= 0x7FFFFFFF0000LL )
            v12 = 0x7FFFFFFF0000LL;
          *(_DWORD *)v12 = *(_DWORD *)v12;
        }
        goto LABEL_25;
      }
      if ( ((ProcessInformationClass - 70) & 0xFFFFFFFB) != 0 )
      {
        v11 = 0LL;
        if ( ProcessInformationClass == ProcessSequenceNumber )
        {
          v10 = 7LL;
        }
        else if ( ProcessInformationClass == ProcessSecurityDomainInformation )
        {
          v10 = 7LL;
        }
        else
        {
          v10 = 3LL;
          if ( ProcessInformationClass == ProcessEnableReadWriteVmLogging )
            v10 = 0LL;
        }
        goto LABEL_14;
      }
    }
    v11 = 0LL;
    v10 = 0LL;
    goto LABEL_14;
  }
  v11 = 0LL;
LABEL_25:
  switch ( ProcessInformationClass )
  {
    case ProcessBasicInformation:
      if ( ProcessInformationLength == 64 )
      {
        v20 = ProcessInformation;
        v161 = ProcessInformation;
        v21 = 64;
        *(_QWORD *)ProcessInformation = 64LL;
        v6 = (char *)ProcessInformation + 8;
      }
      else
      {
        if ( ProcessInformationLength != 48 )
          return -1073741820;
        v20 = 0LL;
        v161 = 0LL;
        v21 = 48;
      }
      v159 = v21;
      v166 = v6;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      DeviceMapInformation = result;
      v152 = result;
      if ( result < 0 )
        return result;
      v22 = Object;
      *(_DWORD *)v6 = *((_DWORD *)Object + 393);
      *((_QWORD *)v6 + 1) = v22[127];
      if ( (v22[90] & 1) != 0 )
      {
        VslGetSecurePebAddress();
        v22 = Object;
      }
      if ( DeviceMapInformation < 0 )
        goto LABEL_65;
      GroupMaskProcess = KeQueryGroupMaskProcess((__int64)v22);
      v23 = Object;
      v24 = CurrentThread;
      if ( ((GroupMaskProcess - 1) & GroupMaskProcess) != 0 && Object != CurrentThread->Process )
        goto LABEL_75;
      KeQueryAffinityProcess((__int64)Object, v238, (int *)&GroupMaskProcess, 0LL);
      v25 = GroupMaskProcess;
      v23 = Object;
      if ( ((GroupMaskProcess - 1) & GroupMaskProcess) != 0 )
      {
        if ( Object != v24->Process )
          goto LABEL_75;
        Group = v24->UserAffinity.Group;
        if ( !_bittest64(&v25, Group) )
          goto LABEL_75;
      }
      else
      {
        _BitScanForward((unsigned int *)&Group, GroupMaskProcess);
      }
      if ( (_DWORD)Group != 20 )
      {
        v27 = *((_QWORD *)v238 + Group + 1);
        goto LABEL_76;
      }
LABEL_75:
      v27 = 0LL;
LABEL_76:
      *((_QWORD *)v6 + 2) = v27;
      *((_DWORD *)v6 + 6) = *((char *)v23 + 444);
      *((_QWORD *)v6 + 4) = v23[92];
      *((_QWORD *)v6 + 5) = v23[124];
      if ( v20 )
      {
        v20[14] = 0;
        if ( PsIsProtectedProcess((__int64)v23) )
          v20[14] |= 1u;
        v28 = Object;
        v29 = *((_QWORD *)Object + 133);
        if ( v29 )
        {
          v30 = *(_WORD *)(v29 + 8);
          if ( v30 == 332 || v30 == 452 )
            v20[14] |= 2u;
        }
        if ( (v28[193] & 0x40000008) != 0 )
          v20[14] |= 4u;
        v31 = (struct _KPROCESS *)Object;
        v32 = v20[14] & 0xFFFFFFF7 | ((*((_DWORD *)Object + 192) & 0x80) != 0 ? 8 : 0);
        v20[14] = v32;
        if ( v31->FreezeCount + ((*(_DWORD *)&v31->0 >> 3) & 1) )
        {
          v32 |= 0x10u;
          v20[14] = v32;
        }
        v20[14] = v32 & 0xFFFFFFDF | ((v28[193] & 0x100000) != 0 ? 0x20 : 0);
        PsQueryProcessAttributes(v31, (__int64)&v157, 0LL);
        if ( v157 )
          v20[14] |= 0x40u;
        v23 = Object;
        if ( (*((_BYTE *)Object + 720) & 1) != 0 )
          v20[14] |= 0x80u;
        if ( v23[226] )
          v20[14] |= 0x100u;
        DeviceMapInformation = v152;
      }
      if ( ReturnLength )
        *ReturnLength = v21;
      ObfDereferenceObjectWithTag(v23, 0x79517350u);
      return DeviceMapInformation;
    case ProcessQuotaLimits:
      return PspQueryQuotaLimits(
               (ULONG_PTR)ProcessHandle,
               1LL,
               ProcessInformation,
               ProcessInformationLength,
               ReturnLength,
               v9);
    case ProcessIoCounters:
      if ( ProcessInformationLength != 48 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      DeviceMapInformation = result;
      if ( result >= 0 )
      {
        PsQueryStatisticsProcess((__int64)Object, v226);
        v178 = v227;
        v179 = v228;
        v180 = v229;
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        *(_OWORD *)v6 = v178;
        *((_OWORD *)v6 + 1) = v179;
        *((_OWORD *)v6 + 2) = v180;
        if ( ReturnLength )
          *ReturnLength = 48;
        return DeviceMapInformation;
      }
      return result;
    case ProcessVmCounters:
      if ( ((ProcessInformationLength - 88) & 0xFFFFFFE7) != 0 || ProcessInformationLength == 104 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result >= 0 )
      {
        memset(Src, 0, sizeof(Src));
        Src[0] = *((_QWORD *)Object + 102);
        Src[1] = *((_QWORD *)Object + 103);
        LODWORD(Src[2]) = *((_DWORD *)Object + 321);
        KeStackAttachProcess((PRKPROCESS)Object, &ApcState);
        v152 = MmQueryWorkingSetInformation(&Src[3], &Src[4], &Src[12], v204, &v203, v194);
        KeUnstackDetachProcess(&ApcState);
        PsQueryProcessQuotaCounters((__int64)Object, 1, &Src[6], &Src[5]);
        PsQueryProcessQuotaCounters((__int64)Object, 0, &Src[8], &Src[7]);
        Src[9] = *((_QWORD *)Object + 158) << 12;
        Src[10] = *((_QWORD *)Object + 159) << 12;
        Src[13] = *((_QWORD *)Object + 239) << 12;
        Src[11] = Src[9];
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        result = v152;
        if ( v152 >= 0 )
        {
          memmove(v6, Src, v5);
          if ( ReturnLength )
            *ReturnLength = v5;
          return 0;
        }
      }
      return result;
    case ProcessTimes:
      if ( ProcessInformationLength != 32 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      DeviceMapInformation = result;
      if ( result >= 0 )
      {
        v34 = PsQueryRuntimeProcess((__int64)Object, &v172);
        v35 = KeMaximumIncrement;
        *((_QWORD *)v6 + 2) = KeMaximumIncrement * (unsigned __int64)v34;
        *((_QWORD *)v6 + 3) = v35 * v172;
        v22 = Object;
        *(_QWORD *)v6 = *((_QWORD *)Object + 97);
        *((_QWORD *)v6 + 1) = v22[210];
        if ( ReturnLength )
          *ReturnLength = 32;
        goto LABEL_65;
      }
      return result;
    case ProcessDebugPort:
      if ( ProcessInformationLength != 8 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x400u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result >= 0 )
      {
        Handle = (HANDLE)((unsigned __int128)-(__int128)*((unsigned __int64 *)Object + 132) >> 64);
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        *(_QWORD *)v6 = Handle;
        if ( ReturnLength )
          *ReturnLength = 8;
        return 0;
      }
      return result;
    case ProcessLdtInformation:
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x410u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result >= 0 )
      {
        ProcessTelemetryCoverage = xKdEnumerateDebuggingDevices();
        goto LABEL_152;
      }
      return result;
    case ProcessDefaultHardErrorMode:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result >= 0 )
      {
        v33 = *((_DWORD *)Object + 296);
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        *(_DWORD *)v6 = v33;
        if ( ReturnLength )
          *ReturnLength = 4;
        return 0;
      }
      return result;
    case ProcessPooledUsageAndLimits:
      return PspQueryPooledQuotaLimits(
               (_DWORD)ProcessHandle,
               (_DWORD)ProcessInformation,
               ProcessInformationLength,
               (_DWORD)ReturnLength,
               v9);
    case ProcessWorkingSetWatch:
    case ProcessWorkingSetWatchEx:
      return PspQueryWorkingSetWatch((ULONG_PTR)ProcessHandle, (__int64)ReturnLength, v9);
    case ProcessPriorityClass:
      if ( ProcessInformationLength != 2 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result >= 0 )
      {
        LOBYTE(v159) = 0;
        BYTE1(v159) = *((_BYTE *)Object + 1119);
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        *(_WORD *)v6 = v159;
        if ( ReturnLength )
          *ReturnLength = 2;
        return 0;
      }
      return result;
    case ProcessWx86Information:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v40 = ObReferenceObjectByHandleWithTag(
              ProcessHandle,
              0x400u,
              (POBJECT_TYPE)PsProcessType,
              v9,
              0x79517350u,
              &Object,
              0LL);
      if ( v40 >= 0 )
      {
        v41 = *((_BYTE *)Object + 775) & 1;
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        *(_DWORD *)v6 = v41;
        if ( ReturnLength )
          *ReturnLength = 4;
      }
      return v40;
    case ProcessHandleCount:
      if ( ((ProcessInformationLength - 4) & 0xFFFFFFFB) != 0 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      ProcessHandleCount = ObGetProcessHandleCount((struct _EX_RUNDOWN_REF *)Object, v173);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      *(_DWORD *)v6 = ProcessHandleCount;
      if ( (_DWORD)v5 != 4 )
        *((_DWORD *)v6 + 1) = v173[0];
      if ( ReturnLength )
        *ReturnLength = 4;
      return 0;
    case ProcessAffinityMask:
      if ( ((ProcessInformationLength - 8) & 0xFFFFFFF7) != 0 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      ProcessNotificationChannel = result;
      if ( result < 0 )
        return result;
      GroupMaskProcess = KeQueryGroupMaskProcess((__int64)Object);
      if ( ((GroupMaskProcess - 1) & GroupMaskProcess) != 0
        || (KeQueryAffinityProcess((__int64)Object, v239, (int *)&GroupMaskProcess, 0LL),
            ((GroupMaskProcess - 1) & GroupMaskProcess) != 0) )
      {
        ProcessNotificationChannel = -1073741811;
      }
      else
      {
        _BitScanForward((unsigned int *)&v77, GroupMaskProcess);
        v78 = *((_QWORD *)v239 + v77 + 1);
        if ( (_DWORD)v5 == 16 )
          *((_WORD *)v6 + 4) = v77;
        *(_QWORD *)v6 = v78;
        if ( ReturnLength )
          *ReturnLength = v5;
      }
      goto LABEL_153;
    case ProcessPriorityBoost:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v40 = ObReferenceObjectByHandleWithTag(
              ProcessHandle,
              0x1000u,
              (POBJECT_TYPE)PsProcessType,
              v9,
              0x79517350u,
              &Object,
              0LL);
      if ( v40 >= 0 )
      {
        v42 = (*((_DWORD *)Object + 110) >> 1) & 1;
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        *(_DWORD *)v6 = v42;
        if ( ReturnLength )
          *ReturnLength = 4;
      }
      return v40;
    case ProcessDeviceMap:
      if ( ProcessInformationLength < 0x24 )
        return -1073741820;
      if ( ProcessInformationLength == 48 )
      {
        v160 = *((_DWORD *)ProcessInformation + 10);
        v43 = v160;
        if ( (v160 & 0xFFFFFFFE) != 0 )
          return -1073741811;
      }
      else
      {
        if ( ProcessInformationLength != 36 )
          return -1073741820;
        v43 = 0;
      }
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x400u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      DeviceMapInformation = ObQueryDeviceMapInformation(Object, v6, v43);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      if ( DeviceMapInformation >= 0 && ReturnLength )
        *ReturnLength = v5;
      return DeviceMapInformation;
    case ProcessSessionInformation:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      SessionId = MmGetSessionId((__int64)Object);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      *(_DWORD *)v6 = SessionId;
      if ( ReturnLength )
        *ReturnLength = 4;
      return 0;
    case ProcessWow64Information:
      if ( ProcessInformationLength != 8 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v45 = (unsigned int **)*((_QWORD *)Object + 133);
      if ( v45 )
        v11 = *v45;
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      *(_QWORD *)v6 = v11;
      if ( ReturnLength )
        *ReturnLength = 8;
      return 0;
    case ProcessImageFileName:
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      if ( (unsigned int)v5 >= 0x10 )
      {
        v14 = v5 - 16;
      }
      else
      {
        v6 = &v215;
        v14 = 0;
      }
      if ( (unsigned int)v5 >= 0x10 )
        v11 = (unsigned int *)(v181 + 16);
      v155 = v14;
      DeviceMapInformation = PsQueryFullProcessImageName((__int64)Object, v6, v11, &v155);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      if ( DeviceMapInformation >= 0 && !v11 )
        DeviceMapInformation = -1073741820;
      if ( ReturnLength && ((int)(DeviceMapInformation + 0x80000000) < 0 || DeviceMapInformation == -1073741820) )
        *ReturnLength = v155 + 16;
      return DeviceMapInformation;
    case ProcessLUIDDeviceMapsEnabled:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      *(_DWORD *)ProcessInformation = 1;
      if ( ReturnLength )
        *ReturnLength = 4;
      return 0;
    case ProcessBreakOnTermination:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v46 = (*((_DWORD *)Object + 193) >> 13) & 1;
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      *(_DWORD *)v6 = v46;
      if ( ReturnLength )
        *ReturnLength = 4;
      return 0;
    case ProcessDebugObjectHandle:
      if ( ProcessInformationLength != 8 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x400u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      DeviceMapInformation = DbgkOpenProcessDebugPort(Object, v9, &Handle);
      v36 = Handle;
      if ( DeviceMapInformation < 0 )
        v36 = 0LL;
      Handle = v36;
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      *(_QWORD *)v6 = Handle;
      if ( ReturnLength )
        *ReturnLength = 8;
      return DeviceMapInformation;
    case ProcessDebugFlags:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x400u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      DeviceMapInformation = result;
      if ( result < 0 )
        return result;
      v22 = Object;
      *(_DWORD *)v6 = (*((_DWORD *)Object + 193) & 2) == 0;
      if ( ReturnLength )
        *ReturnLength = 4;
      goto LABEL_65;
    case ProcessHandleTracing:
      if ( ProcessInformationLength < 0x10 )
        return -1073741820;
      if ( (unsigned int)ExIsRestrictedCaller(v9) )
        return -1073741790;
      v47 = ((int)v5 - 16) / 0xA0u;
      v48 = v6 + 16;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x400u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      ProcessNotificationChannel = result;
      if ( result < 0 )
        return result;
      v49 = (void *)ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)Object);
      P[0] = v49;
      if ( !v49 )
        goto LABEL_221;
      v50 = ExReferenceHandleDebugInfo(v49);
      v51 = v50;
      *(_QWORD *)&v181 = v50;
      if ( v50 )
      {
        *((_DWORD *)v6 + 2) = 0;
        v52 = (unsigned int)(*(_DWORD *)(v50 + 72) % *(_DWORD *)(v50 + 4));
        v167 = v52;
        while ( 1 )
        {
          v173[1] = (_DWORD)v11;
          if ( (unsigned int)v11 >= *(_DWORD *)(v51 + 4) )
            break;
          v53 = (_OWORD *)(v51 + 160 * v52);
          v205 = v53[5];
          v206 = v53[6];
          v207 = v53[7];
          v208 = v53[8];
          v209 = v53[9];
          v210 = v53[10];
          v211 = v53[11];
          v212 = v53[12];
          v213 = v53[13];
          v214 = v53[14];
          v54 = v206;
          if ( *(_QWORD *)v6 == (_QWORD)v206 || !*(_QWORD *)v6 )
          {
            v55 = DWORD2(v206);
            if ( DWORD2(v206) )
            {
              ++*((_DWORD *)v6 + 2);
              if ( v47 )
              {
                v194[1] = --v47;
                *(_QWORD *)v48 = v54;
                *(_OWORD *)(v48 + 8) = v205;
                *((_DWORD *)v48 + 6) = v55;
                *((_OWORD *)v48 + 2) = v207;
                *((_OWORD *)v48 + 3) = v208;
                *((_OWORD *)v48 + 4) = v209;
                *((_OWORD *)v48 + 5) = v210;
                *((_OWORD *)v48 + 6) = v211;
                *((_OWORD *)v48 + 7) = v212;
                *((_OWORD *)v48 + 8) = v213;
                *((_OWORD *)v48 + 9) = v214;
                v48 += 160;
                v204[1] = v48;
              }
              else
              {
                ProcessNotificationChannel = -1073741820;
                v152 = -1073741820;
              }
            }
          }
          if ( !(_DWORD)v52 )
            LODWORD(v52) = *(_DWORD *)(v51 + 4);
          v52 = (unsigned int)(v52 - 1);
          v167 = v52;
          LODWORD(v11) = (_DWORD)v11 + 1;
        }
        if ( ReturnLength )
          *ReturnLength = (_DWORD)v48 - (_DWORD)v6;
        ExDereferenceHandleDebugInfo(P[0], v51);
      }
      else
      {
        ProcessNotificationChannel = -1073741811;
      }
      goto LABEL_220;
    case ProcessIoPriority:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      DeviceMapInformation = result;
      v152 = result;
      if ( result < 0 )
        return result;
      v22 = Object;
      *(_DWORD *)v6 = (*((_DWORD *)Object + 193) >> 27) & 7;
      if ( ReturnLength )
        *ReturnLength = 4;
      goto LABEL_65;
    case ProcessExecuteFlags:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      if ( ProcessHandle == (HANDLE)-1LL )
      {
        CurrentProcess = PsGetCurrentProcess();
        Object = CurrentProcess;
      }
      else
      {
        result = ObReferenceObjectByHandleWithTag(
                   ProcessHandle,
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
      DeviceMapInformation = KeGetExecuteOptions(CurrentProcess, v174);
      if ( ProcessHandle != (HANDLE)-1LL )
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
      if ( DeviceMapInformation >= 0 )
      {
        *(_DWORD *)v6 = v174[0];
        if ( ReturnLength )
          *ReturnLength = 4;
      }
      return DeviceMapInformation;
    case ProcessCookie:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      if ( ProcessHandle == (HANDLE)-1LL )
      {
        v57 = PsGetCurrentProcess();
        Object = v57;
      }
      else
      {
        v58 = ObReferenceObjectByHandle(ProcessHandle, 0x20u, (POBJECT_TYPE)PsProcessType, v9, &v196, 0LL);
        v57 = v196;
        Object = v196;
        if ( v58 < 0 )
          return v58;
      }
      v152 = 0;
      while ( 1 )
      {
        v59 = v57[242];
        if ( v59 )
          break;
        KeQuerySystemTimePrecise(&v184);
        CurrentPrcb = KeGetCurrentPrcb();
        LowPart = KeQueryPerformanceCounter(0LL).LowPart;
        v62 = ExGenRandom(1);
        v63 = __rdtsc();
        _InterlockedCompareExchange(
          (volatile signed __int32 *)Object + 242,
          v184.LowPart ^ v184.HighPart ^ LowPart ^ v63 ^ v62 ^ CurrentPrcb->MmPageFaultCount ^ CurrentPrcb->InterruptCount ^ CurrentPrcb->InterruptTime ^ CurrentPrcb->KeSystemCalls,
          0);
        LODWORD(v11) = v152;
        v57 = Object;
      }
      *(_DWORD *)v6 = v59;
      if ( ReturnLength )
        *ReturnLength = 4;
      if ( ProcessHandle != (HANDLE)-1LL )
        ObfDereferenceObject(v57);
      return (int)v11;
    case ProcessImageInformation:
      if ( ProcessInformationLength != 64 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      DeviceMapInformation = result;
      if ( result < 0 )
        return result;
      v64 = (struct _EX_RUNDOWN_REF *)Object;
      if ( Object == CurrentThread->Process )
      {
        v67 = (void *)*((_QWORD *)Object + 119);
        if ( !v67 )
          result = -1073741558;
        DeviceMapInformation = result;
        v65 = 0;
      }
      else
      {
        v65 = 1;
        v66 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)Object + 95);
        v64 = (struct _EX_RUNDOWN_REF *)Object;
        if ( v66 )
        {
          v67 = (void *)*((_QWORD *)Object + 119);
          if ( v67 )
          {
            ObfReferenceObject(*((PVOID *)Object + 119));
            v64 = (struct _EX_RUNDOWN_REF *)Object;
          }
          else
          {
            DeviceMapInformation = -1073741811;
          }
          ExReleaseRundownProtection_0(v64 + 95);
          v64 = (struct _EX_RUNDOWN_REF *)Object;
        }
        else
        {
          DeviceMapInformation = -1073741558;
          v67 = 0LL;
        }
      }
      ObfDereferenceObjectWithTag(v64, 0x79517350u);
      if ( DeviceMapInformation >= 0 )
      {
        DeviceMapInformation = MmGetSectionInformation((__int64)v67, 1);
        if ( v65 )
          ObfDereferenceObject(v67);
        if ( DeviceMapInformation >= 0 && ReturnLength )
          *ReturnLength = 64;
      }
      return DeviceMapInformation;
    case ProcessCycleTime:
      if ( ProcessInformationLength != 16 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      ProcessNotificationChannel = result;
      if ( result < 0 )
        return result;
      *(_QWORD *)v6 = PsQueryTotalCycleTimeProcess((__int64)Object, (__int64)&v197);
      *((_QWORD *)v6 + 1) = v197;
      if ( ReturnLength )
        *ReturnLength = 16;
      goto LABEL_153;
    case ProcessPagePriority:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      DeviceMapInformation = result;
      if ( result < 0 )
        return result;
      v22 = Object;
      *(_DWORD *)v6 = (*((_DWORD *)Object + 192) >> 12) & 7;
      if ( ReturnLength )
        *ReturnLength = 4;
      goto LABEL_65;
    case ProcessImageFileNameWin32:
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      DeviceMapInformation = result;
      if ( result < 0 )
        return result;
      v164 = (PVOID)*((_QWORD *)Object + 137);
      if ( v164 )
      {
        if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)Object + 95) )
        {
          ObfReferenceObject(v164);
          ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)Object + 95);
        }
        else
        {
          DeviceMapInformation = -1073741558;
        }
      }
      else
      {
        DeviceMapInformation = PsReferenceProcessFilePointer((struct _EX_RUNDOWN_REF *)Object, (ULONG_PTR *)&v164);
      }
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      if ( DeviceMapInformation < 0 )
        return DeviceMapInformation;
      v16 = IoQueryFileDosDeviceName((PFILE_OBJECT)v164, &ObjectNameInformation);
      ObfDereferenceObject(v164);
      if ( v16 >= 0 )
      {
        v17 = ObjectNameInformation;
        v155 = ObjectNameInformation->Name.MaximumLength + 16;
        v18 = v155;
        if ( v155 <= (unsigned int)v5 )
        {
          *(_WORD *)v6 = ObjectNameInformation->Name.Length;
          *((_WORD *)v6 + 1) = v17->Name.MaximumLength;
          MaximumLength = v17->Name.MaximumLength;
          if ( MaximumLength )
          {
            v11 = (unsigned int *)(v6 + 16);
            memmove(v6 + 16, v17->Name.Buffer, MaximumLength);
            v18 = v155;
            v17 = ObjectNameInformation;
          }
          *((_QWORD *)v6 + 1) = v11;
        }
        else
        {
          v16 = -1073741820;
          v152 = -1073741820;
        }
        if ( ReturnLength )
          *ReturnLength = v18;
        ExFreePoolWithTag(v17, 0);
      }
      return v16;
    case ProcessImageFileMapping:
      if ( ProcessInformationLength != 8 )
        return -1073741820;
      v70 = *(void **)ProcessInformation;
      v204[2] = *(_QWORD *)ProcessInformation;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x400u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      DeviceMapInformation = ObReferenceObjectByHandleWithTag(
                               v70,
                               0x100020u,
                               (POBJECT_TYPE)IoFileObjectType,
                               v9,
                               0x79517350u,
                               &v164,
                               0LL);
      v22 = Object;
      if ( DeviceMapInformation < 0 )
        goto LABEL_65;
      ProcessHandleInformation = PsReferenceProcessFilePointer((struct _EX_RUNDOWN_REF *)Object, (ULONG_PTR *)&v185);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      v72 = v164;
      if ( ProcessHandleInformation < 0 )
        goto LABEL_365;
      v73 = *((_QWORD *)v164 + 5);
      v74 = *((_QWORD *)v185 + 5);
      v75 = 0;
      if ( v73 != v74 )
        v75 = -1073741823;
      ObfDereferenceObject(v164);
      ObfDereferenceObject(v185);
      result = v75;
      if ( v73 == v74 && ReturnLength )
        *ReturnLength = 0;
      return result;
    case ProcessAffinityUpdateMode:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v160 = *((_DWORD *)Object + 192);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      v76 = (v160 >> 19) & 1 | 2;
      if ( (v160 & 0x40000) == 0 )
        v76 = (v160 >> 19) & 1;
      *(_DWORD *)v6 = v76;
      if ( ReturnLength )
        *ReturnLength = 4;
      return 0;
    case ProcessMemoryAllocationMode:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v160 = *((_DWORD *)Object + 193);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      LOBYTE(v11) = (v160 & 0x200000) != 0;
      *(_DWORD *)v6 = (_DWORD)v11;
      if ( ReturnLength )
        *ReturnLength = 4;
      return 0;
    case ProcessGroupInformation:
      if ( !ReturnLength || (ProcessInformationLength & 1) != 0 )
        return -1073741811;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v155 = 0;
      v79 = KeQueryGroupMaskProcess((__int64)Object);
      GroupMaskProcess = v79;
      v80 = v155;
      do
      {
        _BitScanForward(&v81, v79);
        v80 += 2;
        v155 = v80;
        if ( v80 <= (unsigned int)v5 )
        {
          *(_WORD *)v6 = v81;
          v6 += 2;
          v201[1] = v6;
          v80 = v155;
        }
        _bittestandreset((signed __int32 *)&GroupMaskProcess, v81);
        v79 = GroupMaskProcess;
      }
      while ( GroupMaskProcess );
      *ReturnLength = v80;
      ProcessNotificationChannel = (unsigned int)v5 < v80 ? 0xC0000023 : 0;
      v152 = ProcessNotificationChannel;
      goto LABEL_153;
    case ProcessConsoleHostProcess:
      if ( ProcessInformationLength != 8 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v82 = *((_QWORD *)Object + 126);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      *(_QWORD *)v6 = v82;
      if ( ReturnLength )
        *ReturnLength = 8;
      return 0;
    case ProcessWindowInformation:
      v162 = 0;
      v170 = 0uLL;
      if ( v9 != 1 )
        return -1073741823;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 1,
                 0x79517350u,
                 &Object,
                 0LL);
      v152 = result;
      if ( result < 0 )
        return result;
      if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)Object + 95) )
      {
        KeStackAttachProcess((PRKPROCESS)Object, &v230);
        v83 = (unsigned int **)*((_QWORD *)Object + 133);
        if ( v83 )
          v11 = *v83;
        if ( v11 )
        {
          v198 = v11[4];
          v162 = *(_DWORD *)(v198 + 104);
          v166 = *(char **)(v198 + 112);
          v84 = (unsigned __int16)v166;
          LODWORD(v170) = (_DWORD)v166;
          *((_QWORD *)&v170 + 1) = HIDWORD(v166);
        }
        else
        {
          v186 = *(_QWORD *)(*((_QWORD *)Object + 127) + 32LL);
          v85 = v186 + 164;
          if ( (unsigned __int64)(v186 + 164) >= 0x7FFFFFFF0000LL )
            v85 = 0x7FFFFFFF0000LL;
          v162 = *(_DWORD *)v85;
          v86 = v186 + 176;
          if ( (unsigned __int64)(v186 + 176) >= 0x7FFFFFFF0000LL )
            v86 = 0x7FFFFFFF0000LL;
          LODWORD(v181) = *(_DWORD *)v86;
          *((_QWORD *)&v181 + 1) = *(_QWORD *)(v86 + 8);
          v170 = v181;
          v84 = v181;
        }
        ProcessNotificationChannel = v152;
        KeUnstackDetachProcess(&v230);
        if ( ProcessNotificationChannel >= 0 )
        {
          v87 = v84 + 6;
          if ( ReturnLength )
            *ReturnLength = v87;
          if ( (unsigned int)v5 >= v87 )
          {
            *(_DWORD *)v6 = v162;
            *((_WORD *)v6 + 2) = v84;
          }
          else
          {
            ProcessNotificationChannel = -1073741820;
            v152 = -1073741820;
          }
          if ( ProcessNotificationChannel >= 0 && v84 )
          {
            v88 = PsGetCurrentProcess();
            ProcessNotificationChannel = MmCopyVirtualMemory(
                                           (_KPROCESS *)Object,
                                           *((char **)&v170 + 1),
                                           v88,
                                           (unsigned __int64)(v6 + 6),
                                           v84,
                                           1,
                                           (unsigned __int64 *)&v202);
          }
        }
LABEL_220:
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)Object + 95);
      }
      else
      {
LABEL_221:
        ProcessNotificationChannel = -1073741558;
      }
      goto LABEL_153;
    case ProcessHandleInformation:
      if ( ProcessInformationLength < 0x10 )
      {
        if ( ReturnLength )
          *ReturnLength = 16;
        return -1073741820;
      }
      result = ObReferenceObjectByHandle(ProcessHandle, 0x400u, (POBJECT_TYPE)PsProcessType, v9, &v199, 0LL);
      Object = v199;
      if ( result >= 0 )
      {
        KeEnterCriticalRegionThread((__int64)CurrentThread);
        v89 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)Object);
        if ( v89 )
        {
          ProcessHandleInformation = ExQueryProcessHandleInformation(v89, v6, (unsigned int)v5, ReturnLength);
          ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)Object + 95);
        }
        else
        {
          ProcessHandleInformation = -1073741558;
        }
        KeLeaveCriticalRegionThread((__int64)CurrentThread);
        v72 = Object;
LABEL_365:
        ObfDereferenceObject(v72);
        return ProcessHandleInformation;
      }
      return result;
    case ProcessMitigationPolicy:
      if ( ProcessInformationLength != 8 )
        return -1073741820;
      v90 = *(_DWORD *)ProcessInformation;
      v194[2] = *(_DWORD *)ProcessInformation;
      if ( ProcessHandle == (HANDLE)-1LL )
      {
        Object = PsGetCurrentProcess();
      }
      else
      {
        result = ObReferenceObjectByHandleWithTag(
                   ProcessHandle,
                   0x400u,
                   (POBJECT_TYPE)PsProcessType,
                   v9,
                   0x79517350u,
                   &Object,
                   0LL);
        if ( result < 0 )
          return result;
      }
      break;
    case ProcessHandleCheckingMode:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x400u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      ProcessNotificationChannel = result;
      v152 = result;
      if ( result < 0 )
        return result;
      v119 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)Object);
      if ( !v119 )
        goto LABEL_221;
      LOBYTE(v11) = (unsigned __int8)ExQueryHandleExceptions(v119) != 0;
      *(_DWORD *)v6 = (_DWORD)v11;
      goto LABEL_220;
    case ProcessKeepAliveCount:
      if ( ProcessInformationLength != 8 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x400u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      DeviceMapInformation = result;
      if ( result < 0 )
        return result;
      v22 = Object;
      *(_DWORD *)v6 = *((_DWORD *)Object + 511) & 0x7FFFFFFF;
      *((_DWORD *)v6 + 1) = *((_DWORD *)v22 + 519) & 0x7FFFFFFF;
      goto LABEL_65;
    case ProcessHandleTable:
      if ( ProcessInformationLength < 4 )
        return -1073741820;
      result = ExLockUserBuffer(
                 ProcessInformation,
                 ProcessInformationLength,
                 (unsigned __int8)KeGetCurrentThread()->$86A1A36C0FEBA810544B2F2B35F40C82::gap0[10],
                 1LL,
                 &v200,
                 P);
      if ( result >= 0 )
      {
        v120 = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x440u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
        if ( v120 >= 0 )
        {
          v182 = 0LL;
          v183 = 0LL;
          v121 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)Object);
          if ( v121 )
          {
            v182 = v200;
            v183 = (unsigned int)v5 >> 2;
            ExEnumHandleTable(v121, PspHandleTableWalker, &v182, 0LL);
            ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)Object + 95);
          }
          else
          {
            LODWORD(v11) = -1073741558;
          }
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
          if ( ReturnLength )
            *ReturnLength = 4 * HIDWORD(v183);
          ExUnlockUserBuffer((struct _MDL *)P[0]);
          return (int)v11;
        }
        else
        {
          ExUnlockUserBuffer((struct _MDL *)P[0]);
          return v120;
        }
      }
      return result;
    case ProcessCheckStackExtentsMode:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x400u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      DeviceMapInformation = result;
      if ( result < 0 )
        return result;
      v22 = Object;
      *(_DWORD *)v6 = (*((_DWORD *)Object + 110) >> 5) & 1;
      goto LABEL_65;
    case ProcessCommandLineInformation:
      LODWORD(v11) = ObReferenceObjectByHandleWithTag(
                       ProcessHandle,
                       0x1000u,
                       (POBJECT_TYPE)PsProcessType,
                       v9,
                       0x79517350u,
                       &Object,
                       0LL);
      if ( (int)v11 < 0 )
        return (int)v11;
      ProcessCommandLine = PsQueryProcessCommandLine((ULONG_PTR)Object, (__int64)v6, v5, v9, ReturnLength);
      goto LABEL_506;
    case ProcessProtectionInformation:
      v16 = ObReferenceObjectByHandleWithTag(
              ProcessHandle,
              0x1000u,
              (POBJECT_TYPE)PsProcessType,
              v9,
              0x79517350u,
              &Object,
              0LL);
      if ( v16 < 0 )
        return v16;
      if ( !(_DWORD)v5 )
      {
LABEL_514:
        v16 = -1073741820;
        goto LABEL_515;
      }
      *v6 = PsGetProcessProtection((__int64)Object);
      if ( ReturnLength )
        *ReturnLength = 1;
      goto LABEL_513;
    case ProcessTelemetryIdInformation:
      LODWORD(v11) = ObReferenceObjectByHandleWithTag(
                       ProcessHandle,
                       0x1000u,
                       (POBJECT_TYPE)PsProcessType,
                       v9,
                       0x79517350u,
                       &Object,
                       0LL);
      if ( (int)v11 < 0 )
        return (int)v11;
      ProcessCommandLine = EtwQueryProcessTelemetryInfo((ULONG_PTR)Object, v6, (unsigned int)v5, (__int64)ReturnLength);
LABEL_506:
      LODWORD(v11) = ProcessCommandLine;
      v123 = Object;
      v124 = Object == 0LL;
      goto LABEL_507;
    case ProcessCommitReleaseInformation:
      Object = 0LL;
      if ( ProcessInformationLength != 32 )
        goto LABEL_514;
      v216 = *(_OWORD *)ProcessInformation;
      v217 = *((_OWORD *)ProcessInformation + 1);
      if ( (_DWORD)v216 == 3 )
      {
        if ( (DWORD1(v216) & 0xFFFFFFF8) != 0 || *((_QWORD *)&v216 + 1) )
        {
          v16 = -1073741811;
        }
        else
        {
          v16 = ObReferenceObjectByHandleWithTag(
                  ProcessHandle,
                  0x1000u,
                  (POBJECT_TYPE)PsProcessType,
                  v9,
                  0x79517350u,
                  &Object,
                  0LL);
          if ( v16 >= 0 )
          {
            MmQueryCommitReleaseState((ULONG_PTR)Object, &v176, (_QWORD *)&v216 + 1, &v217, (_QWORD *)&v217 + 1);
            DWORD1(v216) ^= (BYTE4(v216) ^ (unsigned __int8)v176) & 1;
            *((_QWORD *)&v216 + 1) <<= 12;
            *(_QWORD *)&v217 = (_QWORD)v217 << 12;
            *((_QWORD *)&v217 + 1) <<= 12;
            *(_OWORD *)v6 = v216;
            *((_OWORD *)v6 + 1) = v217;
LABEL_513:
            v16 = 0;
          }
        }
      }
      else
      {
        v16 = -1073741735;
      }
LABEL_515:
      if ( !Object )
        return v16;
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      return v16;
    case ProcessDefaultCpuSetsInformation:
    case ProcessAllowedCpuSetsInformation:
      if ( (ProcessInformationLength & 7) != 0 || ProcessInformationLength > 0xA0 )
        return -1073741820;
      v16 = ObReferenceObjectByHandleWithTag(
              ProcessHandle,
              0x1000u,
              (POBJECT_TYPE)PsProcessType,
              v9,
              0x79517350u,
              &Object,
              0LL);
      if ( v16 >= 0 )
      {
        LOBYTE(v11) = ProcessInformationClass == ProcessAllowedCpuSetsInformation;
        v126 = 8 * KeQueryCpuSetsProcess((__int64)Object, v241, 0x14u, (int)v11);
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        if ( ReturnLength )
          *ReturnLength = v126;
        if ( v126 < (unsigned int)v5 )
          LODWORD(v5) = v126;
        memmove(v6, v241, (unsigned int)v5);
      }
      return v16;
    case ProcessJobMemoryInformation:
      if ( ProcessInformationLength != 40 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result >= 0 )
      {
        v178 = 0uLL;
        v179 = 0uLL;
        *(_QWORD *)&v180 = 0LL;
        if ( *((_QWORD *)Object + 118) )
        {
          KeStackAttachProcess((PRKPROCESS)Object, &ApcState);
          ZwQueryInformationJobObject(0LL, JobObjectMemoryUsageInformation, JobInformation, 0x28u, 0LL);
          ZwQueryInformationJobObject(0LL, JobObjectExtendedLimitInformation, v231, 0x98u, 0LL);
          KeUnstackDetachProcess(&ApcState);
          *((_QWORD *)&v178 + 1) = JobInformation[0];
          *(_QWORD *)&v179 = JobInformation[1];
          *(_QWORD *)&v178 = JobInformation[2];
          v68 = v180;
          if ( (v232 & 0x200000) != 0 )
            v68 = v234;
          *(_QWORD *)&v180 = v68;
          v69 = *((_QWORD *)&v179 + 1);
          if ( (v232 & 0x200) != 0 )
            v69 = v233;
          *((_QWORD *)&v179 + 1) = v69;
          *(_OWORD *)v6 = v178;
          *((_OWORD *)v6 + 1) = v179;
          *((_QWORD *)v6 + 4) = v180;
          if ( ReturnLength )
            *ReturnLength = 40;
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
          return 0;
        }
        else
        {
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
          return -1073741394;
        }
      }
      return result;
    case ProcessInPrivate:
      if ( ProcessInformationLength != 1 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      DeviceMapInformation = result;
      if ( result < 0 )
        return result;
      v22 = Object;
      *v6 = *((int *)Object + 192) < 0;
      goto LABEL_65;
    case ProcessRaiseUMExceptionOnInvalidHandleClose:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      ProcessNotificationChannel = result;
      v152 = result;
      if ( result < 0 )
        return result;
      v125 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)Object);
      if ( !v125 )
        goto LABEL_221;
      LOBYTE(v11) = (unsigned __int8)ExQueryRaiseUMExceptionOnInvalidHandleClose(v125) != 0;
      *(_DWORD *)v6 = (_DWORD)v11;
      goto LABEL_220;
    case ProcessIumChallengeResponse:
      return PsIumGetOnDemandDebugChallenge(ProcessHandle, ProcessInformation, ProcessInformationLength, ReturnLength);
    case ProcessChildProcessInformation:
      if ( ProcessInformationLength != 3 )
        return -1073741820;
      if ( ProcessHandle == (HANDLE)-1LL )
      {
        v127 = PsGetCurrentProcess();
        Object = v127;
      }
      else
      {
        result = ObReferenceObjectByHandleWithTag(
                   ProcessHandle,
                   0x400u,
                   (POBJECT_TYPE)PsProcessType,
                   v9,
                   0x79517350u,
                   &Object,
                   0LL);
        if ( result < 0 )
          return result;
        v127 = Object;
      }
      NoChildProcessRestrictedPolicy = PspGetNoChildProcessRestrictedPolicy(v127);
      *(_WORD *)v6 = 0;
      v6[2] = 0;
      v129 = NoChildProcessRestrictedPolicy - 1;
      if ( !v129 )
        goto LABEL_556;
      v130 = v129 - 1;
      if ( v130 )
      {
        if ( v130 == 1 )
          v6[2] = 1;
      }
      else
      {
        v6[1] = 1;
LABEL_556:
        *v6 = 1;
      }
      if ( ReturnLength )
        *ReturnLength = 3;
      if ( ProcessHandle != (HANDLE)-1LL )
        goto LABEL_560;
      return (int)v11;
    case ProcessHighGraphicsPriorityInformation:
      if ( ProcessInformationLength != 1 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      DeviceMapInformation = result;
      if ( result < 0 )
        return result;
      v22 = Object;
      *v6 = (*((_DWORD *)Object + 435) & 0x200) != 0;
      goto LABEL_65;
    case ProcessSubsystemInformation:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      DeviceMapInformation = result;
      if ( result < 0 )
        return result;
      v22 = Object;
      if ( *((_QWORD *)Object + 226) )
        LODWORD(v11) = qword_14040F370;
      *(_DWORD *)v6 = (_DWORD)v11;
      if ( ReturnLength )
        *ReturnLength = 4;
      goto LABEL_65;
    case ProcessEnergyValues:
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      ProcessNotificationChannel = result;
      if ( result < 0 )
        return result;
      PsQueryProcessEnergyValues(Object, v240);
      if ( (unsigned int)v5 > 0x1B0 )
        LODWORD(v5) = 432;
      memmove(v6, v240, (unsigned int)v5);
      if ( ReturnLength )
        *ReturnLength = 432;
      goto LABEL_153;
    case ProcessPowerThrottlingState:
      if ( ProcessInformationLength != 12 )
        return -1073741820;
      ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost);
      if ( !ExtensionTable )
        return -1073741822;
      v132 = ObReferenceObjectByHandleWithTag(
               ProcessHandle,
               0x1000u,
               (POBJECT_TYPE)PsProcessType,
               v9,
               0x79517350u,
               &Object,
               0LL);
      if ( v132 >= 0 )
      {
        v132 = (*(__int64 (__fastcall **)(PVOID, __int64 *))(ExtensionTable + 16))(Object, &v218);
        if ( v132 >= 0 )
        {
          *(_QWORD *)v6 = v218;
          *((_DWORD *)v6 + 2) = v219;
          if ( ReturnLength )
            *ReturnLength = 12;
          v132 = 0;
          v152 = 0;
        }
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
      }
      ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost);
      return v132;
    case ProcessWin32kSyscallFilterInformation:
      if ( ProcessInformationLength != 8 )
        return -1073741820;
      if ( ProcessHandle == (HANDLE)-1LL )
      {
        v123 = PsGetCurrentProcess();
        Object = v123;
      }
      else
      {
        result = ObReferenceObjectByHandleWithTag(
                   ProcessHandle,
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
      v133 = v123[520];
      v134 = 0;
      if ( (v133 & 0x4000) != 0 )
      {
        v134 = 1;
        *(_DWORD *)v6 = 1;
        v133 = v123[520];
      }
      if ( (v133 & 0x8000) != 0 )
        *(_DWORD *)v6 = v134 | 2;
      *((_DWORD *)v6 + 1) = v123[494];
      if ( ReturnLength )
        *ReturnLength = 8;
      v124 = (char *)ProcessHandle + 1 == 0LL;
LABEL_507:
      if ( !v124 )
      {
        ObfDereferenceObjectWithTag(v123, 0x79517350u);
        return (int)v11;
      }
      return (int)v11;
    case ProcessWakeInformation:
      if ( v9 )
        return -1073741790;
      if ( ProcessInformationLength != 48 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 0,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      ProcessNotificationChannel = PspAllocateAndQueryProcessNotificationChannel(
                                     (__int64)CurrentThread,
                                     (__int64)Object,
                                     (__int64)v6);
      if ( ProcessNotificationChannel >= 0 && ReturnLength )
        *ReturnLength = 48;
      goto LABEL_153;
    case ProcessEnergyTrackingState:
      if ( ProcessInformationLength < 8 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      PoQueryProcessEnergyTrackingState(Object, v237);
      v135 = 144;
      if ( (unsigned int)v5 < 0x90 )
        v135 = v5;
      memmove(v6, v237, v135);
      if ( ReturnLength )
        *ReturnLength = v135;
      v152 = 0;
      goto LABEL_560;
    case ProcessCaptureTrustletLiveDump:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x418u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      if ( *((_QWORD *)Object + 90) )
      {
        v236 = *((_QWORD *)Object + 90);
        ProcessTelemetryCoverage = VslpEnterIumSecureMode(2u, 54LL, 0, (__int64)v235);
LABEL_152:
        ProcessNotificationChannel = ProcessTelemetryCoverage;
LABEL_153:
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        return ProcessNotificationChannel;
      }
      else
      {
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        return -1073741790;
      }
    case ProcessTelemetryCoverage:
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      ProcessTelemetryCoverage = EtwQueryProcessTelemetryCoverage(Object, v6, (unsigned int)v5, ReturnLength);
      goto LABEL_152;
    case ProcessEnableReadWriteVmLogging:
    case ProcessEnableLogging:
      if ( ProcessInformationClass == ProcessEnableReadWriteVmLogging && !ProcessInformationLength
        || ProcessInformationClass == ProcessEnableLogging && ProcessInformationLength < 4 )
      {
        return -1073741820;
      }
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      DeviceMapInformation = result;
      if ( result < 0 )
        return result;
      v22 = Object;
      *v6 = HIBYTE(*((_DWORD *)Object + 192)) & 3;
      if ( ProcessInformationClass == ProcessEnableLogging )
        *(_DWORD *)v6 |= (*((_DWORD *)v22 + 435) >> 17) & 0xC;
      goto LABEL_65;
    case ProcessUptimeInformation:
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result >= 0 )
      {
        v138 = 0LL;
        v187 = 0LL;
        v188 = 0LL;
        v189 = 0LL;
        v190 = 0LL;
        v139 = 0LL;
        v191 = 0LL;
        v192 = 0LL;
        v193 = 0LL;
        v140 = CurrentThread;
        PspLockProcessShared((__int64)Object, (__int64)CurrentThread);
        v141 = *((_QWORD *)Object + 238);
        if ( (v141 >> 61) - 3 <= 1
          && (v139 = v141 & 0x1FFFFFFFFFFFFFFFLL,
              v191 = v141 & 0x1FFFFFFFFFFFFFFFLL,
              v189 = *((_QWORD *)Object + 237),
              v138 = v189 - *((_QWORD *)Object + 234),
              v190 = v138,
              v141 >> 61 == 3) )
        {
          v142 = v193 | 0x200;
        }
        else
        {
          v142 = v193;
        }
        LODWORD(v193) = v142 & 0xFFFFFE00 | *((_BYTE *)Object + 1739) & 7 | (2
                                                                           * (*((_BYTE *)Object + 1739) & 0x38 | (32 * (*((_DWORD *)Object + 435) & 4))));
        PspUnlockProcessShared((__int64)Object, (__int64)v140);
        PsGetProcessDeepFreezeStats((signed __int64 *)Object, &v221);
        v187 = v221;
        v188 = v222;
        v192 = v223;
        v124 = v138 == 0;
        v143 = Object;
        if ( v124 )
          v190 = v221 - *((_QWORD *)Object + 234);
        if ( !v139 )
          v191 = v222 - *((_QWORD *)Object + 235) - v223;
        v144 = 56;
        if ( (unsigned int)v5 < 0x38 )
          v144 = v5;
        memmove(v6, &v187, v144);
        if ( ReturnLength )
          *ReturnLength = v144;
        v152 = 0;
        ObfDereferenceObjectWithTag(v143, 0x79517350u);
        return 0;
      }
      return result;
    case ProcessImageSection:
      if ( ProcessInformationLength != 8 )
        return -1073741820;
      if ( v9 )
      {
        v136 = (__int64)ProcessInformation;
        if ( (unsigned __int64)ProcessInformation >= 0x7FFFFFFF0000LL )
          v136 = 0x7FFFFFFF0000LL;
        *(_QWORD *)v136 = *(_QWORD *)v136;
      }
      v137 = (PVOID *)PsGetCurrentProcess();
      Object = v137;
      if ( ProcessHandle != (HANDLE)-1LL || v137 != (PVOID *)CurrentThread->Process )
        return -1073741790;
      result = ObOpenObjectByPointer(v137[119], 0, 0LL, 5u, MmSectionObjectType, v9, v201);
      if ( result >= 0 )
      {
        *(HANDLE *)v6 = v201[0];
        if ( ReturnLength )
          *ReturnLength = 8;
      }
      return result;
    case ProcessSequenceNumber:
      if ( ProcessInformationLength != 8 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      DeviceMapInformation = result;
      if ( result < 0 )
        return result;
      v22 = Object;
      *(_QWORD *)v6 = *((_QWORD *)Object + 233);
      if ( ReturnLength )
        *ReturnLength = 8;
LABEL_65:
      ObfDereferenceObjectWithTag(v22, 0x79517350u);
      return DeviceMapInformation;
    case ProcessSecurityDomainInformation:
      if ( ProcessInformationLength != 8 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      v152 = result;
      if ( result < 0 )
        return result;
      if ( (*((_DWORD *)Object + 192) & 0x8000) != 0 )
      {
        _InterlockedOr(v150, 0);
        *(_QWORD *)v6 = *((_QWORD *)Object + 262);
        if ( ReturnLength )
          *ReturnLength = 8;
        v152 = 0;
LABEL_560:
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        return 0;
      }
      else
      {
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        return -1073741700;
      }
    case ProcessLeapSecondInformation:
      if ( ProcessInformationLength == 8 )
      {
        if ( ProcessHandle == (HANDLE)-1LL )
        {
          v145 = PsGetCurrentProcess();
          Object = v145;
          v161 = 0LL;
          v146 = v145[1].ActiveProcessors.Bitmap[1];
          if ( v146 )
          {
            v147 = 0LL;
            v148 = (__int64 *)v145[1].ActiveProcessors.Bitmap[7];
            if ( v148 )
              v147 = *v148;
            if ( v147 )
              v149 = *(_DWORD *)(v147 + 1140);
            else
              v149 = *(_DWORD *)(v146 + 1984);
            if ( (v149 & 1) != 0 )
              LODWORD(v161) = (unsigned int)v161 | 1;
          }
          *(_QWORD *)v6 = v161;
          if ( ReturnLength )
            *ReturnLength = 8;
          return (int)v11;
        }
        else
        {
          return -1073741811;
        }
      }
      else
      {
        if ( ReturnLength )
          *ReturnLength = 8;
        return -1073741820;
      }
    default:
      return -1073741821;
  }
  switch ( v90 )
  {
    case 1:
      v152 = 0;
      *((_DWORD *)v6 + 1) = 0;
      v91 = Object;
      v92 = *((_DWORD *)Object + 520);
      if ( (v92 & 0x40) == 0 )
      {
        *((_DWORD *)v6 + 1) |= 1u;
        v92 = v91[520];
      }
      if ( (v92 & 0x10) != 0 )
      {
        *((_DWORD *)v6 + 1) |= 2u;
        v92 = v91[520];
      }
      if ( (v92 & 0x20) != 0 )
      {
        *((_DWORD *)v6 + 1) |= 4u;
        v92 = v91[520];
      }
      if ( (v92 & 8) != 0 )
        *((_DWORD *)v6 + 1) |= 8u;
      goto LABEL_484;
    case 2:
      v152 = 0;
      *((_DWORD *)v6 + 1) = 0;
      v96 = Object;
      v97 = *((_DWORD *)Object + 520);
      if ( (v97 & 0x100) != 0 )
      {
        v98 = *((_DWORD *)v6 + 1) | 1;
      }
      else
      {
        if ( (v97 & 0x800) == 0 )
          goto LABEL_399;
        v98 = *((_DWORD *)v6 + 1) | 8;
      }
      *((_DWORD *)v6 + 1) = v98;
LABEL_399:
      v99 = v96[520];
      if ( (v99 & 0x200) != 0 )
      {
        *((_DWORD *)v6 + 1) |= 2u;
        v99 = v96[520];
      }
      if ( (v99 & 0x400) != 0 )
        *((_DWORD *)v6 + 1) |= 4u;
      goto LABEL_484;
    case 3:
      v152 = 0;
      v93 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)Object);
      if ( v93 )
      {
        ExQueryHandleExceptionsPermanency(v93, v158, (bool *)&v159);
        *((_DWORD *)v6 + 1) = 0;
        if ( v158[0] )
          *((_DWORD *)v6 + 1) |= 1u;
        if ( (_BYTE)v159 )
          *((_DWORD *)v6 + 1) |= 2u;
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)Object + 95);
      }
      else
      {
        v152 = -1073741558;
      }
      goto LABEL_484;
    case 4:
      v152 = 0;
      *((_DWORD *)v6 + 1) = 0;
      v94 = *((_DWORD *)Object + 520);
      if ( (v94 & 0x1000) != 0 )
      {
        v95 = *((_DWORD *)v6 + 1) | 1;
      }
      else
      {
        if ( (v94 & 0x2000) == 0 )
          goto LABEL_484;
        v95 = *((_DWORD *)v6 + 1) | 2;
      }
      *((_DWORD *)v6 + 1) = v95;
      goto LABEL_484;
    case 6:
      v152 = 0;
      *((_DWORD *)v6 + 1) = 0;
      if ( (*((_DWORD *)Object + 520) & 0x80u) != 0 )
        *((_DWORD *)v6 + 1) |= 1u;
      goto LABEL_484;
    case 7:
      v152 = 0;
      *((_DWORD *)v6 + 1) = 0;
      v100 = Object;
      v101 = *((_DWORD *)Object + 520);
      if ( (v101 & 1) != 0 )
      {
        *((_DWORD *)v6 + 1) |= 1u;
        v101 = v100[520];
      }
      if ( (v101 & 2) != 0 )
      {
        *((_DWORD *)v6 + 1) |= 2u;
        v101 = v100[520];
      }
      if ( (v101 & 4) != 0 )
        *((_DWORD *)v6 + 1) |= 4u;
      goto LABEL_484;
    case 8:
      v152 = 0;
      PsQueryProcessSignatureMitigationPolicy(Object, &v175);
      *((_DWORD *)v6 + 1) = v175;
      goto LABEL_484;
    case 9:
      v152 = 0;
      *((_DWORD *)v6 + 1) = 0;
      v102 = *((_DWORD *)Object + 520);
      if ( (v102 & 0x10000) != 0 )
      {
        v103 = *((_DWORD *)v6 + 1) | 1;
      }
      else
      {
        if ( (v102 & 0x20000) == 0 )
          goto LABEL_484;
        v103 = *((_DWORD *)v6 + 1) | 2;
      }
      *((_DWORD *)v6 + 1) = v103;
      goto LABEL_484;
    case 10:
      v152 = 0;
      *((_DWORD *)v6 + 1) = 0;
      v104 = Object;
      v105 = *((_DWORD *)Object + 520);
      if ( (v105 & 0x80000) != 0 )
      {
        v106 = *((_DWORD *)v6 + 1) | 1;
      }
      else
      {
        if ( (v105 & 0x100000) == 0 )
          goto LABEL_426;
        v106 = *((_DWORD *)v6 + 1) | 8;
      }
      *((_DWORD *)v6 + 1) = v106;
LABEL_426:
      v107 = v104[520];
      if ( (v107 & 0x200000) != 0 )
      {
        v108 = *((_DWORD *)v6 + 1) | 2;
      }
      else
      {
        if ( (v107 & 0x400000) == 0 )
          goto LABEL_431;
        v108 = *((_DWORD *)v6 + 1) | 0x10;
      }
      *((_DWORD *)v6 + 1) = v108;
LABEL_431:
      if ( (v104[520] & 0x40000) != 0 )
        *((_DWORD *)v6 + 1) |= 4u;
      goto LABEL_484;
    case 11:
      v152 = 0;
      *((_DWORD *)v6 + 1) = 0;
      *((_DWORD *)v6 + 1) = PsGetWin32KFilterSet() & 0xF | *((_DWORD *)v6 + 1) & 0xFFFFFFF0;
      goto LABEL_484;
    case 12:
      v152 = 0;
      *((_DWORD *)v6 + 1) = 0;
      v109 = Object;
      v110 = *((_DWORD *)Object + 521);
      if ( (v110 & 1) != 0 )
      {
        *((_DWORD *)v6 + 1) |= 1u;
        v110 = v109[521];
      }
      if ( (v110 & 4) != 0 )
      {
        *((_DWORD *)v6 + 1) |= 4u;
        v110 = v109[521];
      }
      if ( (v110 & 0x400) != 0 )
      {
        *((_DWORD *)v6 + 1) |= 0x10u;
        v110 = v109[521];
      }
      if ( (v110 & 0x10) != 0 )
      {
        *((_DWORD *)v6 + 1) |= 0x40u;
        v110 = v109[521];
      }
      if ( (v110 & 0x40) != 0 )
      {
        *((_DWORD *)v6 + 1) |= 0x100u;
        v110 = v109[521];
      }
      if ( (v110 & 0x100) != 0 )
      {
        *((_DWORD *)v6 + 1) |= 0x400u;
        v110 = v109[521];
      }
      if ( (v110 & 2) != 0 )
      {
        *((_DWORD *)v6 + 1) |= 2u;
        v110 = v109[521];
      }
      if ( (v110 & 8) != 0 )
      {
        *((_DWORD *)v6 + 1) |= 8u;
        v110 = v109[521];
      }
      if ( (v110 & 0x800) != 0 )
      {
        *((_DWORD *)v6 + 1) |= 0x20u;
        v110 = v109[521];
      }
      if ( (v110 & 0x20) != 0 )
      {
        *((_DWORD *)v6 + 1) |= 0x80u;
        v110 = v109[521];
      }
      if ( (v110 & 0x80u) != 0 )
      {
        *((_DWORD *)v6 + 1) |= 0x200u;
        v110 = v109[521];
      }
      if ( (v110 & 0x200) != 0 )
        *((_DWORD *)v6 + 1) |= 0x800u;
      goto LABEL_484;
    case 13:
      v152 = 0;
      *((_DWORD *)v6 + 1) = 0;
      v195 = PspGetNoChildProcessRestrictedPolicy(Object);
      switch ( v195 )
      {
        case 1:
          goto LABEL_465;
        case 2:
          *((_DWORD *)v6 + 1) |= 4u;
LABEL_465:
          v111 = *((_DWORD *)v6 + 1) | 1;
          break;
        case 3:
          v111 = *((_DWORD *)v6 + 1) | 2;
          break;
        default:
          goto LABEL_484;
      }
      *((_DWORD *)v6 + 1) = v111;
      goto LABEL_484;
    case 14:
      v152 = 0;
      *((_DWORD *)v6 + 1) = 0;
      v115 = Object;
      v116 = *((_DWORD *)Object + 520);
      if ( (v116 & 0x40000000) != 0 )
      {
        *((_DWORD *)v6 + 1) |= 1u;
        v116 = v115[520];
      }
      if ( v116 < 0 )
        *((_DWORD *)v6 + 1) |= 2u;
      v117 = Object;
      v118 = *((_DWORD *)Object + 521);
      if ( (v118 & 0x1000) != 0 )
      {
        *((_DWORD *)v6 + 1) |= 4u;
        v118 = v117[521];
      }
      if ( (v118 & 0x2000) != 0 )
        *((_DWORD *)v6 + 1) |= 8u;
      goto LABEL_484;
    case 16:
      v152 = 0;
      RedirectionTrustPolicy = PspGetRedirectionTrustPolicy((struct _KPROCESS *)Object);
      *((_DWORD *)v6 + 1) = 0;
      v113 = RedirectionTrustPolicy - 1;
      if ( v113 )
      {
        if ( v113 != 1 )
          goto LABEL_484;
        v114 = *((_DWORD *)v6 + 1) | 2;
      }
      else
      {
        v114 = *((_DWORD *)v6 + 1) | 1;
      }
      *((_DWORD *)v6 + 1) = v114;
LABEL_484:
      if ( ProcessHandle != (HANDLE)-1LL )
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
      return v152;
    default:
      v152 = -1073741637;
      goto LABEL_484;
  }
}
