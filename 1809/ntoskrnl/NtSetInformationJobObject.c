/*
 * XREFs of NtSetInformationJobObject @ 0x140601B10
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveGuardedRegionThread @ 0x1400167F4 (KeLeaveGuardedRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     KeIsEmptyAffinityEx @ 0x140062160 (KeIsEmptyAffinityEx.c)
 *     KeInitializeAffinityEx @ 0x140063A00 (KeInitializeAffinityEx.c)
 *     PspJobIsSilo @ 0x14008F4F8 (PspJobIsSilo.c)
 *     KeInitializeDpc @ 0x1400A5630 (KeInitializeDpc.c)
 *     ExAllocatePoolWithQuotaTag @ 0x1400B75B0 (ExAllocatePoolWithQuotaTag.c)
 *     KeResetEvent @ 0x1400B89E0 (KeResetEvent.c)
 *     KeQueryActiveGroupCount @ 0x1400E3C90 (KeQueryActiveGroupCount.c)
 *     PsGetCurrentProcess @ 0x1400F13B0 (PsGetCurrentProcess.c)
 *     KeSetSchedulingGroupWeights @ 0x140115D7C (KeSetSchedulingGroupWeights.c)
 *     KeSetSchedulingGroupCpuRates @ 0x140115E5C (KeSetSchedulingGroupCpuRates.c)
 *     KeSetSchedulingGroupRankBias @ 0x140116498 (KeSetSchedulingGroupRankBias.c)
 *     KeQuerySchedulingGroupReadyTime @ 0x1401265C4 (KeQuerySchedulingGroupReadyTime.c)
 *     KeFirstGroupAffinityEx @ 0x14012E300 (KeFirstGroupAffinityEx.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x14012F3D0 (ExfAcquireReleasePushLockExclusive.c)
 *     KeSetSchedulingGroupCycleNotification @ 0x140131404 (KeSetSchedulingGroupCycleNotification.c)
 *     PtrToUlong @ 0x1401349D0 (PtrToUlong.c)
 *     PspIsValidJobSessionId @ 0x14013B648 (PspIsValidJobSessionId.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     wcsnlen @ 0x1401979D0 (wcsnlen.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     KeAddGroupAffinityEx @ 0x14028E4F0 (KeAddGroupAffinityEx.c)
 *     PspHardDereferenceSiloWorker @ 0x1402E9884 (PspHardDereferenceSiloWorker.c)
 *     PspJobIsAppSilo @ 0x1402E991C (PspJobIsAppSilo.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PspGetJobLimitInformationValidFlags @ 0x140583884 (PspGetJobLimitInformationValidFlags.c)
 *     PspSetJobIoRateControl @ 0x140585F0C (PspSetJobIoRateControl.c)
 *     PspSetEnergyTrackingStateJobTree @ 0x1405BA614 (PspSetEnergyTrackingStateJobTree.c)
 *     PspIsContextAdmin @ 0x1405BA6B4 (PspIsContextAdmin.c)
 *     PsChargeSharedPoolQuota @ 0x1405CAB24 (PsChargeSharedPoolQuota.c)
 *     PsReturnSharedPoolQuota @ 0x1405CBCA8 (PsReturnSharedPoolQuota.c)
 *     SeCaptureSubjectContextEx @ 0x1405E17F0 (SeCaptureSubjectContextEx.c)
 *     SeReleaseSubjectContext @ 0x1405E2240 (SeReleaseSubjectContext.c)
 *     PsInvokeWin32Callout @ 0x1405F5E90 (PsInvokeWin32Callout.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x1405FE9F4 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspUnlockJob @ 0x1405FF0C0 (PspUnlockJob.c)
 *     PspLockJobExclusive @ 0x1405FF100 (PspLockJobExclusive.c)
 *     PspUnlockJobMemoryLimitsShared @ 0x1405FF2B4 (PspUnlockJobMemoryLimitsShared.c)
 *     PspGetJobMemoryUsageNotificationViolations @ 0x1405FF310 (PspGetJobMemoryUsageNotificationViolations.c)
 *     PspLockJobMemoryLimitsShared @ 0x1405FF360 (PspLockJobMemoryLimitsShared.c)
 *     PspUnlockJobConditionally @ 0x1405FF8B8 (PspUnlockJobConditionally.c)
 *     PspLockJobConditionally @ 0x1406016E4 (PspLockJobConditionally.c)
 *     PspRateControlLimitFlag @ 0x140601714 (PspRateControlLimitFlag.c)
 *     PspLockJobChain @ 0x1406017CC (PspLockJobChain.c)
 *     PspUnlockJobChain @ 0x140601864 (PspUnlockJobChain.c)
 *     PspNotificationLimitRateControlToleranceIntervalField @ 0x140604400 (PspNotificationLimitRateControlToleranceIntervalField.c)
 *     PspNotificationLimitRateControlToleranceField @ 0x140604428 (PspNotificationLimitRateControlToleranceField.c)
 *     PspUnlockJobMemoryLimitsExclusive @ 0x140604450 (PspUnlockJobMemoryLimitsExclusive.c)
 *     PspLockJobMemoryLimitsExclusive @ 0x1406044A4 (PspLockJobMemoryLimitsExclusive.c)
 *     PspBindProcessSessionToJob @ 0x140606480 (PspBindProcessSessionToJob.c)
 *     SeSinglePrivilegeCheck @ 0x140613160 (SeSinglePrivilegeCheck.c)
 *     SePrivilegeCheck @ 0x14062B1F0 (SePrivilegeCheck.c)
 *     ObReferenceObjectByHandleWithTag @ 0x1406726C0 (ObReferenceObjectByHandleWithTag.c)
 *     IoAllocateMiniCompletionPacket @ 0x14068B990 (IoAllocateMiniCompletionPacket.c)
 *     PspScheduleEnforcementWorker @ 0x14068DC68 (PspScheduleEnforcementWorker.c)
 *     PspSetJobIoAttribution @ 0x14068DCB8 (PspSetJobIoAttribution.c)
 *     IoFreeMiniCompletionPacket @ 0x14068FA10 (IoFreeMiniCompletionPacket.c)
 *     PspFreeRateControl @ 0x140699B74 (PspFreeRateControl.c)
 *     PspAllocateRateControl @ 0x140699BC0 (PspAllocateRateControl.c)
 *     PspAddSchedulingGroupToJobChain @ 0x140699C74 (PspAddSchedulingGroupToJobChain.c)
 *     PspLockRootJobExclusive @ 0x1406AE0D8 (PspLockRootJobExclusive.c)
 *     PspFreezeJobTree @ 0x1406AE140 (PspFreezeJobTree.c)
 *     PspSetBackgroundJobTree @ 0x1406CAFB8 (PspSetBackgroundJobTree.c)
 *     PspUpdateEnforcementTimer @ 0x1406CC264 (PspUpdateEnforcementTimer.c)
 *     PspDoesJobHierarchyPermitUILimits @ 0x1406D0F8C (PspDoesJobHierarchyPermitUILimits.c)
 *     SeCheckPrivilegedObject @ 0x14071F504 (SeCheckPrivilegedObject.c)
 *     PspAssignSiloSystemRootPath @ 0x140887DD0 (PspAssignSiloSystemRootPath.c)
 *     PspConvertSiloToServerSilo @ 0x140888064 (PspConvertSiloToServerSilo.c)
 *     PspCreateSilo @ 0x140888200 (PspCreateSilo.c)
 *     PspAddProcessToWorkingSetChangeList @ 0x14088A980 (PspAddProcessToWorkingSetChangeList.c)
 *     PspApplyWorkingSetLimits @ 0x14088AA44 (PspApplyWorkingSetLimits.c)
 *     PspSetJobMemoryPartition @ 0x14088B5E0 (PspSetJobMemoryPartition.c)
 *     PspSetJobSiloThreadImpersonationPolicy @ 0x14088B8D0 (PspSetJobSiloThreadImpersonationPolicy.c)
 *     PspSetNetRateControl @ 0x14088B94C (PspSetNetRateControl.c)
 *     EtwTraceJobSetQuery @ 0x1408B8AB8 (EtwTraceJobSetQuery.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 *     ObCreateSiloRootDirectory @ 0x1409071B0 (ObCreateSiloRootDirectory.c)
 */

NTSTATUS __stdcall NtSetInformationJobObject(
        HANDLE JobHandle,
        JOBOBJECTINFOCLASS JobInformationClass,
        PVOID JobInformation,
        ULONG JobInformationLength)
{
  size_t v4; // rbx
  ULONG v7; // ecx
  bool v8; // zf
  KPROCESSOR_MODE PreviousMode; // al
  char *v10; // rdi
  NTSTATUS result; // eax
  ACCESS_MASK v12; // edx
  int v13; // ecx
  int v14; // esi
  __int64 MiniCompletionPacket; // rbx
  PVOID v16; // rcx
  PVOID v17; // rcx
  unsigned int v18; // ebx
  PVOID v19; // rcx
  PETHREAD v20; // rdx
  unsigned int v21; // ebx
  char v22; // di
  _KPROCESS *v23; // rax
  __int64 v24; // rax
  __int64 v25; // r9
  char v26; // bl
  KPROCESSOR_MODE v27; // di
  char v28; // al
  int v29; // ecx
  unsigned int v30; // ebx
  char v31; // al
  int v32; // ecx
  unsigned __int64 v33; // rbx
  PVOID v34; // rdi
  struct _KPROCESS *v35; // rax
  void *v36; // rcx
  ULONG v37; // edx
  BOOLEAN v38; // al
  char v39; // di
  int v40; // edx
  unsigned int v41; // edx
  unsigned __int16 Group; // cx
  _QWORD *v43; // rax
  __int64 v44; // rcx
  __int64 v45; // rax
  _OWORD *v46; // rcx
  _DWORD *v47; // rcx
  char v48; // bl
  char v49; // cl
  char v50; // di
  char *v51; // rax
  char *v52; // rbx
  char *v53; // rcx
  unsigned __int64 v54; // r9
  PVOID v55; // r8
  __int64 v56; // r10
  unsigned int v57; // edx
  __int64 v58; // rdx
  int v59; // eax
  int v60; // ebx
  char v61; // bl
  int v62; // edi
  __int64 v63; // r8
  int v64; // ecx
  __int64 RateControl; // rdx
  __int64 v66; // rax
  void *v67; // rcx
  _QWORD *v68; // rbx
  unsigned int v69; // ecx
  unsigned int v70; // eax
  unsigned int v71; // edx
  unsigned int v72; // ebx
  unsigned __int16 v73; // dx
  __m128i v74; // xmm0
  unsigned __int16 epi16; // ax
  __int64 v76; // r9
  PVOID PoolWithTag; // rbx
  struct _KPROCESS *CurrentProcess; // rax
  struct _SECURITY_SUBJECT_CONTEXT *v79; // rdi
  BOOLEAN v80; // al
  PSECURITY_SUBJECT_CONTEXT v81; // r15
  _QWORD *v82; // rax
  __int64 v83; // rcx
  __int64 v84; // rax
  _OWORD *v85; // rcx
  __int64 v86; // rsi
  __int64 v87; // rdi
  int v88; // eax
  int Silo; // eax
  int v90; // ecx
  int v91; // eax
  unsigned __int64 v92; // r8
  __int64 v93; // r9
  unsigned __int64 v94; // r11
  __int64 v95; // r10
  __m128i v96; // xmm1
  __m128i v97; // xmm3
  unsigned __int64 v98; // rdx
  __m128i v99; // xmm1
  __m128i v100; // xmm3
  int i; // ebx
  int *v102; // rdi
  int *v103; // rsi
  PVOID v104; // rcx
  PVOID v105; // rbx
  struct _KPROCESS *v106; // rax
  char *v107; // rsi
  __int64 v108; // r8
  __int64 v109; // rdi
  int v110; // esi
  _DWORD *v111; // r12
  _DWORD *v112; // rbx
  _DWORD *v113; // rax
  __int64 v114; // rcx
  _QWORD *v115; // r10
  _DWORD *v116; // rax
  int JobMemoryUsageNotificationViolations; // ebx
  unsigned __int16 v118; // cx
  POOL_TYPE v119; // r15d
  unsigned __int64 v120; // r8
  struct _SECURITY_SUBJECT_CONTEXT *PoolWithQuotaTag; // rax
  struct _SECURITY_SUBJECT_CONTEXT *v122; // rsi
  PSECURITY_SUBJECT_CONTEXT v123; // rcx
  ULONG v124; // edx
  KPROCESSOR_MODE v125; // bl
  __int64 v126; // rdx
  unsigned __int64 v127; // xmm0_8
  unsigned __int16 v128; // cx
  unsigned __int64 v129; // r8
  wchar_t *v130; // rax
  const wchar_t *v131; // rbx
  size_t v132; // rax
  char v133; // bl
  PETHREAD v134; // rdi
  int v135; // ebx
  signed __int8 v136; // cf
  signed __int32 v137[8]; // [rsp+0h] [rbp-BA8h] BYREF
  PVOID DeferredContext; // [rsp+40h] [rbp-B68h] BYREF
  KPROCESSOR_MODE AccessMode; // [rsp+48h] [rbp-B60h]
  __int32 v140; // [rsp+50h] [rbp-B58h]
  int v141; // [rsp+58h] [rbp-B50h]
  char v142; // [rsp+5Ch] [rbp-B4Ch] BYREF
  _BYTE v143[3]; // [rsp+5Dh] [rbp-B4Bh] BYREF
  unsigned __int16 v144; // [rsp+60h] [rbp-B48h]
  __int64 v145; // [rsp+68h] [rbp-B40h] BYREF
  PSECURITY_SUBJECT_CONTEXT v146; // [rsp+70h] [rbp-B38h]
  int v147; // [rsp+78h] [rbp-B30h]
  PETHREAD Thread; // [rsp+80h] [rbp-B28h]
  PVOID P; // [rsp+88h] [rbp-B20h]
  char v150; // [rsp+90h] [rbp-B18h]
  char v151; // [rsp+91h] [rbp-B17h]
  int JobLimitInformationValidFlags; // [rsp+94h] [rbp-B14h]
  unsigned int v153; // [rsp+98h] [rbp-B10h]
  __int64 v154; // [rsp+A0h] [rbp-B08h]
  void *Src; // [rsp+A8h] [rbp-B00h]
  void *v156; // [rsp+B0h] [rbp-AF8h] BYREF
  __int64 v157; // [rsp+B8h] [rbp-AF0h] BYREF
  int v158; // [rsp+C0h] [rbp-AE8h]
  int v159; // [rsp+C4h] [rbp-AE4h]
  __int64 v160; // [rsp+C8h] [rbp-AE0h] BYREF
  int v161; // [rsp+D0h] [rbp-AD8h] BYREF
  int v162; // [rsp+D4h] [rbp-AD4h]
  HANDLE v163; // [rsp+D8h] [rbp-AD0h]
  __int64 v164; // [rsp+E0h] [rbp-AC8h]
  PVOID Object; // [rsp+E8h] [rbp-AC0h] BYREF
  _BYTE SubjectContext[40]; // [rsp+F0h] [rbp-AB8h] BYREF
  void *v167[2]; // [rsp+118h] [rbp-A90h] BYREF
  int v168; // [rsp+128h] [rbp-A80h]
  unsigned int v169; // [rsp+12Ch] [rbp-A7Ch] BYREF
  int v170; // [rsp+130h] [rbp-A78h] BYREF
  unsigned int v171; // [rsp+134h] [rbp-A74h]
  __int64 v172; // [rsp+138h] [rbp-A70h]
  wchar_t *v173; // [rsp+140h] [rbp-A68h]
  unsigned int v174; // [rsp+148h] [rbp-A60h]
  unsigned int v175; // [rsp+14Ch] [rbp-A5Ch]
  int v176; // [rsp+150h] [rbp-A58h]
  int v177; // [rsp+154h] [rbp-A54h]
  int v178; // [rsp+158h] [rbp-A50h]
  __int64 v179; // [rsp+160h] [rbp-A48h] BYREF
  HANDLE Handle[3]; // [rsp+168h] [rbp-A40h]
  PVOID v181; // [rsp+180h] [rbp-A28h]
  __int128 v182; // [rsp+188h] [rbp-A20h] BYREF
  __int128 v183; // [rsp+198h] [rbp-A10h]
  PVOID v184; // [rsp+1A8h] [rbp-A00h] BYREF
  int v185; // [rsp+1B0h] [rbp-9F8h]
  __int64 v186; // [rsp+1B8h] [rbp-9F0h]
  __int64 v187; // [rsp+1C0h] [rbp-9E8h]
  __int64 v188; // [rsp+1C8h] [rbp-9E0h]
  __int64 v189; // [rsp+1D0h] [rbp-9D8h]
  __int128 v190; // [rsp+1E0h] [rbp-9C8h]
  __int128 v191; // [rsp+1F0h] [rbp-9B8h]
  __int128 v192; // [rsp+200h] [rbp-9A8h]
  __int128 v193; // [rsp+210h] [rbp-998h]
  __int64 v194; // [rsp+220h] [rbp-988h]
  __int128 v195; // [rsp+230h] [rbp-978h]
  __int128 v196; // [rsp+240h] [rbp-968h]
  __int64 v197; // [rsp+250h] [rbp-958h]
  _QWORD v198[18]; // [rsp+260h] [rbp-948h] BYREF
  __m128i v199; // [rsp+2F0h] [rbp-8B8h] BYREF
  __int64 v200; // [rsp+300h] [rbp-8A8h] BYREF
  unsigned __int64 v201; // [rsp+308h] [rbp-8A0h]
  __int64 v202; // [rsp+310h] [rbp-898h]
  unsigned __int64 v203; // [rsp+318h] [rbp-890h]
  int v204; // [rsp+320h] [rbp-888h]
  int v205; // [rsp+324h] [rbp-884h]
  int v206; // [rsp+328h] [rbp-880h]
  unsigned __int64 v207; // [rsp+330h] [rbp-878h]
  struct _PRIVILEGE_SET RequiredPrivileges; // [rsp+350h] [rbp-858h] BYREF
  __int128 v209; // [rsp+368h] [rbp-840h] BYREF
  __int64 v210; // [rsp+380h] [rbp-828h] BYREF
  __int64 v211; // [rsp+388h] [rbp-820h]
  int v212; // [rsp+390h] [rbp-818h]
  unsigned __int64 v213; // [rsp+398h] [rbp-810h]
  unsigned __int64 v214; // [rsp+3A0h] [rbp-808h]
  int v215; // [rsp+3A8h] [rbp-800h]
  __int64 v216; // [rsp+3B0h] [rbp-7F8h]
  unsigned int v217; // [rsp+3B8h] [rbp-7F0h]
  unsigned int v218; // [rsp+3BCh] [rbp-7ECh]
  unsigned __int64 v219; // [rsp+3F0h] [rbp-7B8h]
  unsigned __int64 v220; // [rsp+3F8h] [rbp-7B0h]
  unsigned __int64 v221; // [rsp+410h] [rbp-798h]
  __m128i v222; // [rsp+430h] [rbp-778h]
  __int64 v223; // [rsp+450h] [rbp-758h]
  __m128i v224; // [rsp+468h] [rbp-740h]
  _QWORD v225[196]; // [rsp+490h] [rbp-718h] BYREF
  _OWORD v226[10]; // [rsp+AB0h] [rbp-F8h] BYREF
  __int64 v227; // [rsp+B50h] [rbp-58h]

  v4 = JobInformationLength;
  v163 = JobHandle;
  v140 = JobInformationClass;
  Src = JobInformation;
  if ( (unsigned int)(JobInformationClass - 1) > 0x31 )
    return -1073741821;
  switch ( JobInformationClass )
  {
    case JobObjectExtendedLimitInformation:
      if ( JobInformationLength == 144 || JobInformationLength == 152 )
        goto LABEL_14;
      return -1073741820;
    case JobObjectNotificationLimitInformation:
      v8 = ((JobInformationLength - 48) & 0xFFFFFFF7) == 0;
LABEL_13:
      if ( v8 )
        goto LABEL_14;
      return -1073741820;
    case JobObjectIoRateControlInformation:
      if ( JobInformationLength == 48 || JobInformationLength == 96 )
        goto LABEL_14;
      v8 = JobInformationLength == 144;
      goto LABEL_13;
  }
  v7 = dword_14090CA8C[JobInformationClass];
  if ( JobInformationLength != v7
    && (JobInformationClass != JobObjectGroupInformation && JobInformationClass != JobObjectGroupInformationEx
     || JobInformationLength < v7) )
  {
    return -1073741820;
  }
LABEL_14:
  Thread = KeGetCurrentThread();
  PreviousMode = Thread->PreviousMode;
  AccessMode = PreviousMode;
  v143[1] = PreviousMode;
  if ( PreviousMode )
  {
    v10 = (char *)Src;
    if ( JobInformationLength )
    {
      if ( ((dword_14090CB5C[JobInformationClass] - 1) & (unsigned int)Src) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)Src + JobInformationLength > 0x7FFFFFFF0000LL || (char *)Src + JobInformationLength < Src )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    PreviousMode = AccessMode;
  }
  else
  {
    v10 = (char *)Src;
  }
  if ( !JobHandle )
    return -1073741816;
  v12 = 16;
  if ( JobInformationClass != JobObjectSecurityLimitInformation )
    v12 = 2;
  result = ObReferenceObjectByHandleWithTag(
             JobHandle,
             v12,
             (POBJECT_TYPE)PsJobType,
             PreviousMode,
             0x79517350u,
             &DeferredContext,
             0LL);
  if ( result >= 0 )
  {
    v14 = 0;
    v141 = 0;
    LOBYTE(v13) = 0;
    v147 = v13;
    --Thread->SpecialApcDisable;
    if ( JobInformationClass <= JobObjectCycleTimeNotification )
    {
      if ( JobInformationClass != JobObjectCycleTimeNotification )
      {
        if ( JobInformationClass <= JobObjectNotificationLimitInformation )
        {
          if ( JobInformationClass != JobObjectNotificationLimitInformation )
          {
            if ( JobInformationClass == JobObjectBasicLimitInformation )
              goto LABEL_80;
            if ( JobInformationClass != JobObjectBasicUIRestrictions )
            {
              if ( JobInformationClass == JobObjectSecurityLimitInformation )
              {
                v195 = *(_OWORD *)v10;
                v196 = *((_OWORD *)v10 + 1);
                v197 = *((_QWORD *)v10 + 4);
                v14 = (v195 & 0xFFFFFFF0) != 0 ? -1073741811 : -1073741637;
                goto LABEL_462;
              }
              if ( JobInformationClass != JobObjectEndOfJobTimeInformation )
              {
                if ( JobInformationClass == JobObjectAssociateCompletionPortInformation )
                {
                  MiniCompletionPacket = 0LL;
                  *(_OWORD *)Handle = *(_OWORD *)v10;
                  if ( Handle[1] )
                  {
                    v14 = ObReferenceObjectByHandleWithTag(
                            Handle[1],
                            2u,
                            IoCompletionObjectType,
                            AccessMode,
                            0x624A7350u,
                            &Object,
                            0LL);
                    if ( v14 >= 0 )
                    {
                      if ( *((_QWORD *)DeferredContext + 125)
                        || (MiniCompletionPacket = IoAllocateMiniCompletionPacket(&PspNotificationPacketCallback)) != 0 )
                      {
                        PspLockJobExclusive((__int64)DeferredContext, 0LL);
                        v16 = DeferredContext;
                        if ( *((_QWORD *)DeferredContext + 57)
                          || (*((_DWORD *)DeferredContext + 64) & 0x2000) != 0
                          && (*((_DWORD *)DeferredContext + 326) & 1) != 0 )
                        {
                          PspUnlockJob((__int64)DeferredContext, 0LL);
                          ObfDereferenceObjectWithTag(Object, 0x624A7350u);
                          v14 = -1073741811;
                        }
                        else
                        {
                          if ( !*((_QWORD *)DeferredContext + 125) )
                          {
                            *((_QWORD *)DeferredContext + 125) = MiniCompletionPacket;
                            MiniCompletionPacket = 0LL;
                            v16 = DeferredContext;
                          }
                          PspLockJobMemoryLimitsExclusive(v16, 0LL, 0LL);
                          *((HANDLE *)DeferredContext + 58) = Handle[0];
                          *((_QWORD *)DeferredContext + 57) = Object;
                          *((_QWORD *)DeferredContext + 59) = 0LL;
                          PspUnlockJobMemoryLimitsExclusive(DeferredContext, 0LL, 0LL);
                          v17 = DeferredContext;
                          if ( (*((_DWORD *)DeferredContext + 219) & 0x40) != 0 )
                          {
                            PspEnumJobsAndProcessesInJobHierarchy(
                              DeferredContext,
                              0,
                              0,
                              (int)PspAssociateCompletionPortCallback,
                              (__int64)DeferredContext,
                              1);
                            v17 = DeferredContext;
                          }
                          PspUnlockJob((__int64)v17, 0LL);
                        }
                      }
                      else
                      {
                        v14 = -1073741670;
                      }
                    }
                    if ( MiniCompletionPacket )
                      IoFreeMiniCompletionPacket(MiniCompletionPacket);
                  }
                  else
                  {
                    PspLockJobExclusive((__int64)DeferredContext, 0LL);
                    PspLockJobMemoryLimitsExclusive(DeferredContext, 0LL, 0LL);
                    Object = (PVOID)*((_QWORD *)DeferredContext + 57);
                    *((_QWORD *)DeferredContext + 57) = 0LL;
                    PspUnlockJobMemoryLimitsExclusive(DeferredContext, 0LL, 0LL);
                    PspUnlockJob((__int64)DeferredContext, 0LL);
                    if ( Object )
                      ObfDereferenceObjectWithTag(Object, 0x624A7350u);
                  }
                  goto LABEL_462;
                }
                if ( JobInformationClass != JobObjectExtendedLimitInformation )
                {
                  if ( JobInformationClass != JobObjectGroupInformation )
                    goto LABEL_421;
LABEL_259:
                  v146 = 0LL;
                  v69 = 16;
                  if ( JobInformationClass != JobObjectGroupInformationEx )
                    v69 = 2;
                  LODWORD(P) = v69;
                  v71 = (unsigned int)v4 % v69;
                  v70 = (unsigned int)v4 / v69;
                  v72 = (unsigned int)v4 / v69;
                  if ( v71 )
                  {
                    v14 = -1073741820;
                    goto LABEL_462;
                  }
                  v153 = v70;
                  KeInitializeAffinityEx(v226);
                  v73 = KeQueryActiveGroupCount() - 1;
                  LOWORD(v147) = v73;
                  while ( v72 )
                  {
                    if ( JobInformationClass == JobObjectGroupInformationEx )
                    {
                      v74 = *(__m128i *)v10;
                      v199 = v74;
                      epi16 = _mm_extract_epi16(v74, 4);
                      v199.m128i_i16[4] = epi16;
                      v144 = epi16;
                      v164 = v74.m128i_i64[0];
                    }
                    else
                    {
                      v144 = *(_WORD *)v10;
                      v164 = qword_1405426A8[v144];
                      epi16 = v144;
                    }
                    v76 = qword_1405426A8[epi16];
                    v172 = v76;
                    if ( v144 > v73 || *((_QWORD *)v226 + epi16 + 1) || v164 != (v76 & v164) )
                    {
                      v14 = -1073741811;
                      v141 = -1073741811;
                      break;
                    }
                    KeAddGroupAffinityEx((unsigned __int16 *)v226, v144, v164);
                    v72 = --v153;
                    v10 = (char *)Src + (unsigned int)P;
                    Src = v10;
                    v14 = v141;
                    v73 = v147;
                  }
                  PoolWithTag = 0LL;
                  if ( v14 < 0 )
                    goto LABEL_462;
                  if ( !*((_QWORD *)DeferredContext + 54) )
                  {
                    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x614A7350u);
                    if ( !PoolWithTag )
                      goto LABEL_130;
                    CurrentProcess = PsGetCurrentProcess();
                    v146 = (PSECURITY_SUBJECT_CONTEXT)PsChargeSharedPoolQuota(CurrentProcess, 0x28uLL, 0LL);
                    if ( !v146 )
                    {
                      v36 = PoolWithTag;
                      goto LABEL_133;
                    }
                  }
                  SeCaptureSubjectContextEx(
                    Thread,
                    Thread->ApcState.Process,
                    (PSECURITY_SUBJECT_CONTEXT)&SubjectContext[8]);
                  v79 = (struct _SECURITY_SUBJECT_CONTEXT *)&SubjectContext[8];
                  if ( AccessMode )
                  {
                    RequiredPrivileges.PrivilegeCount = 1;
                    RequiredPrivileges.Control = 1;
                    RequiredPrivileges.Privilege[0].Luid = SeDebugPrivilege;
                    RequiredPrivileges.Privilege[0].Attributes = 0;
                    v80 = SePrivilegeCheck(&RequiredPrivileges, (PSECURITY_SUBJECT_CONTEXT)&SubjectContext[8], 1);
                    *(_DWORD *)SubjectContext ^= (*(_DWORD *)SubjectContext ^ v80) & 1;
                  }
                  else
                  {
                    *(_DWORD *)SubjectContext |= 1u;
                  }
                  PspLockJobExclusive((__int64)DeferredContext, 0LL);
                  v14 = PspEnumJobsAndProcessesInJobHierarchy(
                          DeferredContext,
                          0,
                          0,
                          (int)PspSetAffinityLimitCallback,
                          (__int64)SubjectContext,
                          1);
                  v141 = v14;
                  v81 = v146;
                  if ( v14 >= 0 )
                  {
                    v82 = DeferredContext;
                    v83 = *((_QWORD *)DeferredContext + 54);
                    if ( v83 )
                    {
                      v182 = *(_OWORD *)(v83 + 8);
                      v183 = *(_OWORD *)(v83 + 24);
                      v79 = (struct _SECURITY_SUBJECT_CONTEXT *)&v182;
                    }
                    else
                    {
                      *((_QWORD *)DeferredContext + 54) = PoolWithTag;
                      *((_QWORD *)DeferredContext + 55) = v81;
                      PoolWithTag = 0LL;
                      v79 = 0LL;
                      v82 = DeferredContext;
                    }
                    v84 = v82[54];
                    *(_OWORD *)v84 = *(_OWORD *)SubjectContext;
                    *(_OWORD *)(v84 + 16) = *(_OWORD *)&SubjectContext[16];
                    *(_QWORD *)(v84 + 32) = *(_QWORD *)&SubjectContext[32];
                    v157 = (__int64)DeferredContext;
                    v159 = *((_DWORD *)DeferredContext + 64);
                    v158 = -17;
                    v85 = (char *)DeferredContext + 264;
                    *(_OWORD *)((char *)DeferredContext + 264) = v226[0];
                    v85[1] = v226[1];
                    v85[2] = v226[2];
                    v85[3] = v226[3];
                    v85[4] = v226[4];
                    v85[5] = v226[5];
                    v85[6] = v226[6];
                    v85 += 8;
                    *(v85 - 1) = v226[7];
                    *v85 = v226[8];
                    v85[1] = v226[9];
                    *((_QWORD *)v85 + 4) = v227;
                    if ( JobInformationClass == JobObjectGroupInformationEx
                      && (unsigned int)KeIsEmptyAffinityEx((_WORD *)DeferredContext + 132) )
                    {
                      *((_DWORD *)DeferredContext + 64) &= ~0x10u;
                      _InterlockedAnd((volatile signed __int32 *)DeferredContext + 326, 0xFFFFFFFD);
                    }
                    else
                    {
                      *((_DWORD *)DeferredContext + 64) |= 0x10u;
                      _InterlockedOr((volatile signed __int32 *)DeferredContext + 326, 2u);
                    }
                    PspEnumJobsAndProcessesInJobHierarchy(
                      DeferredContext,
                      (int)PspSetJobLimitsJobPreCallback,
                      0,
                      (int)PspSetJobLimitsProcessCallback,
                      (__int64)&v157,
                      5);
                    v14 = v141;
                  }
                  PspUnlockJob((__int64)DeferredContext, 0LL);
                  if ( v79 )
                    SeReleaseSubjectContext(v79);
                  if ( !PoolWithTag )
                    goto LABEL_462;
                  ExFreePoolWithTag(PoolWithTag, 0x614A7350u);
                  v53 = (char *)v81;
LABEL_294:
                  PsReturnSharedPoolQuota(v53, 0x28uLL, 0LL);
                  goto LABEL_462;
                }
LABEL_80:
                memmove(&v210, v10, v4);
                if ( (unsigned int)v4 < 0x98 )
                  memset((char *)&v210 + v4, 0, 152 - v4);
                JobLimitInformationValidFlags = PspGetJobLimitInformationValidFlags(JobInformationClass, v4);
                v140 = ~JobLimitInformationValidFlags;
                if ( (~JobLimitInformationValidFlags & v212) != 0 )
                  goto LABEL_315;
                memset(v225, 0, sizeof(v225));
                memset(SubjectContext, 0, sizeof(SubjectContext));
                LODWORD(v225[32]) = v212;
                P = 0LL;
                v154 = 0LL;
                v146 = 0LL;
                HIDWORD(v225[32]) = (v212 & 8) != 0 ? v215 : 0;
                if ( (v212 & 0x20) != 0 )
                {
                  v26 = v217;
                  if ( v217 > 6 )
                    goto LABEL_315;
                  v27 = AccessMode;
                  if ( v217 - 3 <= 1 )
                  {
                    LOBYTE(v25) = AccessMode;
                    v28 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))SeCheckPrivilegedObject)(
                            SeIncreaseBasePriorityPrivilege,
                            v163,
                            2LL,
                            v25) & 1;
                    LOBYTE(v29) = 4 * v28;
                    v147 = v29;
                    if ( !v28 )
                      goto LABEL_311;
                  }
                  BYTE1(v225[109]) = v26;
                }
                else
                {
                  BYTE1(v225[109]) = 0;
                  v27 = AccessMode;
                }
                if ( SLOBYTE(v225[32]) >= 0 )
                {
                  HIDWORD(v225[60]) = 5;
                }
                else
                {
                  v30 = v218;
                  if ( v218 >= 0xA )
                    goto LABEL_315;
                  if ( v218 > 5 )
                  {
                    LOBYTE(v25) = v27;
                    v31 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))SeCheckPrivilegedObject)(
                            SeIncreaseBasePriorityPrivilege,
                            v163,
                            2LL,
                            v25) & 1;
                    LOBYTE(v32) = 4 * v31;
                    v147 = v32;
                    if ( !v31 )
                      goto LABEL_311;
                  }
                  HIDWORD(v225[60]) = v30;
                }
                if ( (v225[32] & 2) != 0 )
                {
                  if ( !v210 )
                    goto LABEL_315;
                  v225[28] = v210;
                }
                else
                {
                  v225[28] = 0LL;
                }
                if ( (v225[32] & 4) != 0 )
                {
                  if ( !v211 )
                    goto LABEL_315;
                  v225[29] = v211;
                }
                if ( (v225[32] & 1) == 0 )
                {
                  v225[30] = 0LL;
                  v225[31] = 0LL;
                  goto LABEL_113;
                }
                v33 = v213;
                if ( !v213 && !v214 || v213 == -1LL && v214 == -1LL || v213 > v214 || v213 < 0x14000 )
                  goto LABEL_315;
                if ( v213 <= PspMinimumWorkingSet || SeSinglePrivilegeCheck(SeIncreaseBasePriorityPrivilege, v27) )
                {
                  v225[30] = v33;
                  v225[31] = v214;
LABEL_113:
                  if ( (v225[32] & 0x100) != 0 )
                  {
                    if ( v219 < 0x1000 )
                      goto LABEL_315;
                    v225[72] = v219 >> 12;
                  }
                  else
                  {
                    v225[72] = 0LL;
                  }
                  if ( (v225[32] & 0x200) != 0 )
                  {
                    if ( v220 < 0x1000 )
                      goto LABEL_315;
                    v225[73] = v220 >> 12;
                  }
                  else
                  {
                    v225[73] = 0LL;
                  }
                  if ( (v225[32] & 0x200000) != 0 )
                  {
                    if ( v221 < 0x1000 )
                      goto LABEL_315;
                    v225[74] = v221 >> 12;
                  }
                  else
                  {
                    v225[74] = 0LL;
                  }
                  KeInitializeAffinityEx(&v225[33]);
                  if ( (v225[32] & 0x10) == 0 )
                  {
                    v39 = v147;
                    goto LABEL_140;
                  }
                  if ( (*((_DWORD *)DeferredContext + 326) & 2) == 0 && v216 )
                  {
                    if ( !*((_QWORD *)DeferredContext + 54) )
                    {
                      v34 = ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x614A7350u);
                      P = v34;
                      if ( !v34 )
                      {
LABEL_130:
                        v14 = -1073741670;
                        goto LABEL_462;
                      }
                      v35 = PsGetCurrentProcess();
                      v154 = PsChargeSharedPoolQuota(v35, 0x28uLL, 0LL);
                      if ( !v154 )
                      {
                        v36 = v34;
LABEL_133:
                        v37 = 1632269136;
LABEL_134:
                        ExFreePoolWithTag(v36, v37);
                        goto LABEL_130;
                      }
                    }
                    SeCaptureSubjectContextEx(
                      Thread,
                      Thread->ApcState.Process,
                      (PSECURITY_SUBJECT_CONTEXT)&SubjectContext[8]);
                    v146 = (PSECURITY_SUBJECT_CONTEXT)&SubjectContext[8];
                    if ( AccessMode )
                    {
                      RequiredPrivileges.PrivilegeCount = 1;
                      RequiredPrivileges.Control = 1;
                      RequiredPrivileges.Privilege[0].Luid = SeDebugPrivilege;
                      RequiredPrivileges.Privilege[0].Attributes = 0;
                      v38 = SePrivilegeCheck(&RequiredPrivileges, (PSECURITY_SUBJECT_CONTEXT)&SubjectContext[8], 1);
                      *(_DWORD *)SubjectContext ^= (*(_DWORD *)SubjectContext ^ v38) & 1;
                    }
                    else
                    {
                      *(_DWORD *)SubjectContext |= 1u;
                    }
                    v39 = v147 | 2;
LABEL_140:
                    PspLockJobExclusive((__int64)DeferredContext, 0LL);
                    v40 = v225[32];
                    if ( (v225[32] & 4) == 0 )
                    {
                      if ( (v225[32] & 0x40) != 0 )
                      {
                        v40 = *((_DWORD *)DeferredContext + 64) & 4 | LODWORD(v225[32]);
                        LODWORD(v225[32]) = v40;
                        v225[29] = *((_QWORD *)DeferredContext + 29);
                      }
                      else
                      {
                        v225[29] = 0LL;
                      }
                    }
                    v41 = v40 & 0xFFFFFFBF;
                    LODWORD(v225[32]) = v41;
                    if ( (v39 & 2) != 0 )
                    {
                      if ( (*((_DWORD *)DeferredContext + 326) & 2) == 0 )
                      {
                        if ( (*((_DWORD *)DeferredContext + 64) & 0x10) != 0 )
                        {
                          KeFirstGroupAffinityEx(&v199, (_WORD *)DeferredContext + 132);
                          Group = v199.m128i_u16[4];
                        }
                        else
                        {
                          Group = KeGetCurrentPrcb()->Group;
                          v199.m128i_i16[4] = Group;
                        }
                        v199.m128i_i64[0] = v216;
                        v172 = qword_1405426A8[Group];
                        if ( v216 == (v172 & v216) )
                        {
                          KeAddGroupAffinityEx((unsigned __int16 *)&v225[33], v199.m128i_u16[4], v216);
                          v14 = PspEnumJobsAndProcessesInJobHierarchy(
                                  DeferredContext,
                                  0,
                                  0,
                                  (int)PspSetAffinityLimitCallback,
                                  (__int64)SubjectContext,
                                  1);
                          v141 = v14;
                          if ( v14 >= 0 )
                          {
                            v43 = DeferredContext;
                            v44 = *((_QWORD *)DeferredContext + 54);
                            if ( v44 )
                            {
                              v182 = *(_OWORD *)(v44 + 8);
                              v183 = *(_OWORD *)(v44 + 24);
                              v146 = (PSECURITY_SUBJECT_CONTEXT)&v182;
                            }
                            else
                            {
                              *((_QWORD *)DeferredContext + 54) = P;
                              *((_QWORD *)DeferredContext + 55) = v154;
                              P = 0LL;
                              v146 = 0LL;
                              v43 = DeferredContext;
                            }
                            v45 = v43[54];
                            *(_OWORD *)v45 = *(_OWORD *)SubjectContext;
                            *(_OWORD *)(v45 + 16) = *(_OWORD *)&SubjectContext[16];
                            *(_QWORD *)(v45 + 32) = *(_QWORD *)&SubjectContext[32];
                            LOBYTE(v41) = v225[32];
                            goto LABEL_158;
                          }
LABEL_174:
                          v50 = v39 & 1;
                          if ( v50 )
                          {
                            ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140406830, 0LL);
                            _InterlockedOr((volatile signed __int32 *)DeferredContext + 326, 0x100u);
                            v51 = (char *)DeferredContext + 40;
                            v52 = (char *)*((_QWORD *)DeferredContext + 5);
                            while ( v52 != v51 )
                            {
                              if ( (*((_DWORD *)v52 - 92) & 1) == 0 )
                                PspAddProcessToWorkingSetChangeList(v52 - 1136);
                              v52 = *(char **)v52;
                              v51 = (char *)DeferredContext + 40;
                            }
                            v14 = v141;
                          }
                          PspUnlockJob((__int64)DeferredContext, 0LL);
                          if ( v50 )
                            PspApplyWorkingSetLimits(DeferredContext, &PspWorkingSetChangeHead);
                          if ( v146 )
                            SeReleaseSubjectContext(v146);
                          if ( !P )
                            goto LABEL_462;
                          ExFreePoolWithTag(P, 0x614A7350u);
                          v53 = (char *)v154;
                          goto LABEL_294;
                        }
                      }
                    }
                    else if ( (v41 & 0x4000) == 0 || (*((_DWORD *)DeferredContext + 326) & 2) != 0 )
                    {
LABEL_158:
                      if ( (*((_DWORD *)DeferredContext + 64) & 1) != 0 && (v41 & 1) == 0 )
                      {
                        _InterlockedOr(v137, 0);
                        if ( (qword_140406830 & 1) != 0 )
                          ExfAcquireReleasePushLockExclusive(&qword_140406830);
                        v14 = v141;
                      }
                      v157 = (__int64)DeferredContext;
                      v159 = *((_DWORD *)DeferredContext + 64);
                      *((_QWORD *)DeferredContext + 30) = v225[30];
                      *((_QWORD *)DeferredContext + 31) = v225[31];
                      *((_DWORD *)DeferredContext + 65) = HIDWORD(v225[32]);
                      if ( (v39 & 2) != 0 )
                      {
                        v46 = (char *)DeferredContext + 264;
                        *(_OWORD *)((char *)DeferredContext + 264) = *(_OWORD *)&v225[33];
                        v46[1] = *(_OWORD *)&v225[35];
                        v46[2] = *(_OWORD *)&v225[37];
                        v46[3] = *(_OWORD *)&v225[39];
                        v46[4] = *(_OWORD *)&v225[41];
                        v46[5] = *(_OWORD *)&v225[43];
                        v46[6] = *(_OWORD *)&v225[45];
                        v46 += 8;
                        *(v46 - 1) = *(_OWORD *)&v225[47];
                        *v46 = *(_OWORD *)&v225[49];
                        v46[1] = *(_OWORD *)&v225[51];
                        *((_QWORD *)v46 + 4) = v225[53];
                      }
                      *((_BYTE *)DeferredContext + 873) = BYTE1(v225[109]);
                      *((_DWORD *)DeferredContext + 121) = HIDWORD(v225[60]);
                      *((_QWORD *)DeferredContext + 28) = v225[28];
                      *((_QWORD *)DeferredContext + 29) = v225[29];
                      if ( JobInformationClass == JobObjectExtendedLimitInformation )
                      {
                        PspLockJobMemoryLimitsExclusive(DeferredContext, 0LL, 0LL);
                        *((_DWORD *)DeferredContext + 64) = LODWORD(v225[32]) | v140 & *((_DWORD *)DeferredContext + 64);
                        *((_QWORD *)DeferredContext + 72) = v225[72];
                        *((_QWORD *)DeferredContext + 73) = v225[73];
                        *((_QWORD *)DeferredContext + 74) = v225[74];
                        PspUnlockJobMemoryLimitsExclusive(DeferredContext, 0LL, 0LL);
                      }
                      else
                      {
                        *((_DWORD *)DeferredContext + 64) = LODWORD(v225[32]) | v140 & *((_DWORD *)DeferredContext + 64);
                      }
                      v47 = DeferredContext;
                      v158 = ~(v159 | *((_DWORD *)DeferredContext + 64));
                      if ( (v212 & 4) != 0 )
                      {
                        PspEnumJobsAndProcessesInJobHierarchy(
                          DeferredContext,
                          0,
                          0,
                          (int)PspSetJobTimeLimitCallback,
                          (__int64)DeferredContext + 232,
                          1);
                        *((_QWORD *)DeferredContext + 23) = 0LL;
                        *((_QWORD *)DeferredContext + 24) = 0LL;
                        KeResetEvent((PRKEVENT)DeferredContext);
                        v47 = DeferredContext;
                      }
                      if ( (v47[64] & 6) != 0 )
                      {
                        LOBYTE(v47) = 1;
                        PspUpdateEnforcementTimer(v47);
                        v47 = DeferredContext;
                      }
                      v48 = v158;
                      PspEnumJobsAndProcessesInJobHierarchy(
                        v47,
                        (int)PspSetJobLimitsJobPreCallback,
                        (int)PspSetJobLimitsJobPostCallback,
                        (int)PspSetJobLimitsProcessCallback,
                        (__int64)&v157,
                        5);
                      v49 = v39;
                      v39 |= 1u;
                      if ( (v48 & 1) != 0 )
                        v39 = v49;
                      goto LABEL_174;
                    }
                    v14 = -1073741811;
                    v141 = -1073741811;
                    goto LABEL_174;
                  }
LABEL_315:
                  v14 = -1073741811;
                  goto LABEL_462;
                }
LABEL_311:
                v14 = -1073741727;
                goto LABEL_462;
              }
              v174 = *(_DWORD *)v10;
              v18 = v174;
              if ( v174 > 1 )
                goto LABEL_315;
              PspLockJobExclusive((__int64)DeferredContext, 0LL);
              *((_DWORD *)DeferredContext + 113) = v18;
              goto LABEL_65;
            }
            v175 = *(_DWORD *)v10;
            v21 = v175;
            if ( (v175 & 0xFFFFFF00) != 0 )
              goto LABEL_315;
            v22 = 8;
            PspLockJobChain((__int64)DeferredContext, (__int64)Thread, 0);
            if ( (unsigned __int8)PspDoesJobHierarchyPermitUILimits((__int64)DeferredContext) )
            {
              if ( *((_DWORD *)DeferredContext + 120) == -2 )
              {
                v14 = -1073741790;
              }
              else
              {
                v23 = PsGetCurrentProcess();
                PspBindProcessSessionToJob(DeferredContext, v23);
                v169 = *((_DWORD *)DeferredContext + 120);
                if ( !PspIsValidJobSessionId(v169) )
                  goto LABEL_77;
                if ( v21 == *((_DWORD *)DeferredContext + 112) )
                  goto LABEL_77;
                PspUnlockJobChain((__int64)DeferredContext, (__int64)Thread, 1);
                v22 = 0;
                v184 = DeferredContext;
                v185 = 0;
                LODWORD(v24) = PtrToUlong((const void *)v21);
                v186 = v24;
                v14 = PsInvokeWin32Callout(6, (__int64)&v184, 1, (__int64)&v169);
                v141 = v14;
                if ( v14 >= 0 )
                {
LABEL_77:
                  *((_DWORD *)DeferredContext + 112) = v21;
                  _InterlockedOr((volatile signed __int32 *)DeferredContext + 326, 0x10u);
                  v14 = v141;
                }
              }
            }
            else
            {
              v14 = -1073741637;
            }
            v20 = Thread;
            v19 = DeferredContext;
            if ( (unsigned __int8)v22 < 8u )
              goto LABEL_67;
LABEL_79:
            PspUnlockJobChain((__int64)v19, (__int64)v20, 0);
            goto LABEL_462;
          }
LABEL_318:
          if ( (_DWORD)v4 == 48 )
          {
            v99 = *(__m128i *)v10;
            v224 = *((__m128i *)v10 + 1);
            v100 = *((__m128i *)v10 + 2);
            v91 = _mm_cvtsi128_si32(_mm_srli_si128(v100, 8));
            v206 = v91;
            v95 = v99.m128i_i64[0];
            v200 = v99.m128i_i64[0];
            v94 = _mm_srli_si128(v99, 8).m128i_u64[0];
            v201 = v94;
            v93 = v224.m128i_i64[0];
            v202 = v224.m128i_i64[0];
            v92 = _mm_srli_si128(v224, 8).m128i_u64[0];
            v203 = v92;
            v204 = _mm_cvtsi128_si32(v100);
            v205 = _mm_cvtsi128_si32(_mm_srli_si128(v100, 4));
            v90 = 459268;
            JobLimitInformationValidFlags = 459268;
          }
          else
          {
            if ( (_DWORD)v4 == 56 )
            {
              v96 = *(__m128i *)v10;
              v222 = *((__m128i *)v10 + 1);
              v97 = *((__m128i *)v10 + 2);
              v223 = *((_QWORD *)v10 + 6);
              v91 = v223;
              v206 = v223;
              v95 = v96.m128i_i64[0];
              v200 = v96.m128i_i64[0];
              v94 = _mm_srli_si128(v96, 8).m128i_u64[0];
              v201 = v94;
              v93 = v222.m128i_i64[0];
              v202 = v222.m128i_i64[0];
              v98 = _mm_srli_si128(v222, 8).m128i_u64[0];
              v207 = v98;
              v92 = v97.m128i_i64[0];
              v203 = v97.m128i_i64[0];
              v204 = _mm_cvtsi128_si32(_mm_srli_si128(v97, 8));
              v205 = _mm_cvtsi128_si32(_mm_srli_si128(v97, 12));
              v90 = 2589188;
              JobLimitInformationValidFlags = 2589188;
              goto LABEL_324;
            }
            memmove(&v200, v10, v4);
            v90 = 2064900;
            JobLimitInformationValidFlags = 2064900;
            v91 = v206;
            v92 = v203;
            v93 = v202;
            v94 = v201;
            v95 = v200;
          }
          v98 = v207;
LABEL_324:
          if ( (~v90 & v91) != 0 )
            goto LABEL_315;
          if ( (v91 & 0x8000) != 0 )
          {
            if ( v98 < 0x1000 )
              goto LABEL_315;
          }
          else
          {
            v98 = 0LL;
            v207 = 0LL;
          }
          if ( (v91 & 0x200) != 0 )
          {
            if ( v92 < 0x1000 || v92 < v98 )
              goto LABEL_315;
          }
          else
          {
            v203 = 0LL;
          }
          if ( (v91 & 4) != 0 )
          {
            if ( !v93 )
              goto LABEL_315;
          }
          else
          {
            v202 = 0LL;
          }
          if ( (v91 & 0x10000) != 0 )
          {
            if ( !v95 )
              goto LABEL_315;
          }
          else
          {
            v200 = 0LL;
          }
          if ( (v91 & 0x20000) != 0 )
          {
            if ( !v94 )
              goto LABEL_315;
          }
          else
          {
            v201 = 0LL;
          }
          for ( i = 0; i < 3; ++i )
          {
            v102 = (int *)PspNotificationLimitRateControlToleranceField(&v200, (unsigned int)i, v92);
            v103 = (int *)PspNotificationLimitRateControlToleranceIntervalField(&v200);
            if ( ((unsigned int)PspRateControlLimitFlag(i) & v206) != 0 )
            {
              if ( !*v102 || *v102 > 3 || !*v103 || *v103 > 3 )
                goto LABEL_315;
            }
            else
            {
              *v102 = 0;
              *v103 = 0;
            }
          }
          v104 = DeferredContext;
          if ( *((_QWORD *)DeferredContext + 123) )
          {
            v105 = 0LL;
            v107 = 0LL;
          }
          else
          {
            v105 = ExAllocatePoolWithTag(PagedPool, 0x88uLL, 0x624A7350u);
            if ( !v105 )
              goto LABEL_130;
            v106 = PsGetCurrentProcess();
            v107 = (char *)PsChargeSharedPoolQuota(v106, 0x88uLL, 0LL);
            v36 = v105;
            if ( !v107 )
            {
              v37 = 1649046352;
              goto LABEL_134;
            }
            memset(v105, 0, 0x88uLL);
            v104 = DeferredContext;
          }
          PspLockJobExclusive((__int64)v104, 0LL);
          if ( *((_QWORD *)DeferredContext + 123) )
          {
            if ( v105 )
            {
              ExFreePoolWithTag(v105, 0x624A7350u);
              PsReturnSharedPoolQuota(v107, 0x88uLL, 0LL);
            }
          }
          else
          {
            *((_QWORD *)DeferredContext + 123) = v105;
            *((_QWORD *)DeferredContext + 124) = v107;
          }
          v109 = *((_QWORD *)DeferredContext + 123);
          LODWORD(P) = *(_DWORD *)v109;
          *(_QWORD *)(v109 + 8) = v200;
          *(_QWORD *)(v109 + 16) = v201;
          *(_QWORD *)(v109 + 24) = v202;
          v110 = 0;
          v111 = (_DWORD *)(v109 + 60);
          do
          {
            v112 = (_DWORD *)PspNotificationLimitRateControlToleranceField(&v200, (unsigned int)v110, v108);
            v113 = (_DWORD *)PspNotificationLimitRateControlToleranceIntervalField(&v200);
            *(v111 - 3) = *v112;
            *v111 = *v113;
            ++v110;
            ++v111;
          }
          while ( v110 < 3 );
          PspLockJobMemoryLimitsExclusive(DeferredContext, 0LL, 0LL);
          *(_QWORD *)(v109 + 32) = v207 >> 12;
          *(_QWORD *)(v109 + 40) = v203 >> 12;
          **((_DWORD **)DeferredContext + 123) = v206;
          PspUnlockJobMemoryLimitsExclusive(DeferredContext, 0LL, 0LL);
          v115 = DeferredContext;
          if ( (**((_DWORD **)DeferredContext + 123) & 0xFFFF7DFF) != 0 )
          {
            LOBYTE(v114) = 1;
            PspUpdateEnforcementTimer(v114);
            v115 = DeferredContext;
          }
          if ( (_DWORD)P )
          {
            v116 = (_DWORD *)v115[123];
            if ( *v116 )
            {
LABEL_374:
              if ( (PerfGlobalGroupMask & 0x80000) != 0 )
              {
                EtwTraceJobSetQuery((_DWORD)v115, JobInformationClass, (unsigned int)&v200, 0, 0, 1829);
                v115 = DeferredContext;
              }
              PspUnlockJob((__int64)v115, 0LL);
              PspLockJobMemoryLimitsShared((__int64)DeferredContext, 0LL);
              JobMemoryUsageNotificationViolations = PspGetJobMemoryUsageNotificationViolations(
                                                       (__int64)DeferredContext,
                                                       *((_QWORD *)DeferredContext + 122),
                                                       *((_QWORD *)DeferredContext + 122)
                                                     + *((_QWORD *)DeferredContext + 165),
                                                       33280);
              PspUnlockJobMemoryLimitsShared((__int64)DeferredContext, 0LL);
              if ( JobMemoryUsageNotificationViolations )
                PspScheduleEnforcementWorker(*((_QWORD *)DeferredContext + 135));
              goto LABEL_409;
            }
          }
          else
          {
            v116 = (_DWORD *)v115[123];
            if ( !*v116 )
              goto LABEL_374;
          }
          PspEnumJobsAndProcessesInJobHierarchy(v115, (int)PspSetJobNotificationCountCallback, 0, 0, (__int64)v116, 5);
          v115 = DeferredContext;
          goto LABEL_374;
        }
        if ( JobInformationClass == JobObjectGroupInformationEx )
          goto LABEL_259;
        if ( JobInformationClass != JobObjectCpuRateControlInformation )
        {
          if ( JobInformationClass != JobObjectCompletionFilter )
          {
            if ( JobInformationClass == JobObjectFreezeInformation )
            {
              v209 = *(_OWORD *)v10;
              if ( (_DWORD)v209 && (v209 & 0xFFFFFFF8) == 0 )
              {
                v14 = PspFreezeJobTree(DeferredContext, &v209);
                if ( v14 >= 0 )
                  *(_DWORD *)v10 = v209;
                goto LABEL_462;
              }
              goto LABEL_315;
            }
            if ( JobInformationClass != JobObjectBackgroundInformation )
            {
              if ( JobInformationClass != JobObjectSchedulingRankBiasInformation )
              {
                if ( JobInformationClass == JobObjectTimerVirtualizationInformation )
                {
                  if ( *v10 != 1 )
                  {
                    v14 = -1073741811;
                    v141 = -1073741811;
                    goto LABEL_462;
                  }
                  PspEnumJobsAndProcessesInJobHierarchy(
                    DeferredContext,
                    0,
                    (int)PspEnableTimerVirtualization,
                    (int)PspEnableProcessTimerVirtualization,
                    0LL,
                    0);
LABEL_409:
                  v14 = 0;
                  goto LABEL_462;
                }
LABEL_421:
                v14 = -1073741821;
                goto LABEL_462;
              }
              v142 = *v10;
              PspLockJobExclusive((__int64)DeferredContext, 0LL);
              v55 = DeferredContext;
              if ( (*((_DWORD *)DeferredContext + 326) & 0x20) != 0 )
              {
                v56 = *((_QWORD *)DeferredContext + 126);
                v57 = *(_DWORD *)(v56 + 40);
                if ( (v57 & 0x40) == 0 )
                {
                  if ( (v57 & 1) != 0 || (v57 & 0x20) != 0 )
                  {
                    v14 = -1073741637;
                    goto LABEL_205;
                  }
                  if ( ((v57 >> 3) & 1) != (v142 != 0) )
                  {
                    LOBYTE(v54) = -v142;
                    v58 = (v142 != 0 ? 8 : 0) | v57 & 0xFFFFFFF7;
                    *(_DWORD *)(v56 + 40) = v58;
                    LOBYTE(v58) = v142;
                    KeSetSchedulingGroupRankBias(*((_QWORD *)DeferredContext + 126) + 128LL, v58, (__int64)v55, v54);
                    PspEnumJobsAndProcessesInJobHierarchy(
                      DeferredContext,
                      0,
                      0,
                      (int)PspSetProcessCacheIsolationCallback,
                      (__int64)&v142,
                      1);
                    v14 = 0;
                    v55 = DeferredContext;
LABEL_205:
                    v19 = v55;
                    goto LABEL_66;
                  }
                }
              }
              v14 = -1073741811;
              goto LABEL_205;
            }
            v150 = *v10;
            v59 = PspSetBackgroundJobTree(DeferredContext);
LABEL_207:
            v14 = v59;
            if ( v59 < 0 )
              goto LABEL_462;
            goto LABEL_409;
          }
          v176 = *(_DWORD *)v10;
          v60 = v176;
          if ( (v176 & 0xFFFFC001) != 0 )
            goto LABEL_315;
          PspLockJobExclusive((__int64)DeferredContext, 0LL);
          PspLockJobMemoryLimitsExclusive(DeferredContext, 0LL, 0LL);
          *((_DWORD *)DeferredContext + 219) = v60;
          PspUnlockJobMemoryLimitsExclusive(DeferredContext, 0LL, 0LL);
LABEL_408:
          PspUnlockJob((__int64)DeferredContext, 0LL);
          goto LABEL_409;
        }
        memmove(&v170, v10, v4);
        v61 = v170;
        if ( (v170 & 0xFFFFFFE0) != 0 )
          goto LABEL_315;
        v145 = v171;
        v62 = v170 & 1;
        if ( (v170 & 1) != 0 )
        {
          if ( (v170 & 2) != 0 )
          {
            if ( (v170 & 0x10) != 0 || (unsigned __int16)(v171 - 1) > 8u )
              goto LABEL_315;
          }
          else if ( (unsigned __int16)(v171 - 1) > 0x270Fu
                 || (v170 & 0x10) != 0
                 && ((v170 & 4) != 0 || HIWORD(v171) < (unsigned __int16)v171 || HIWORD(v171) > 0x2710u) )
          {
            goto LABEL_315;
          }
        }
        PspLockJobChain((__int64)DeferredContext, (__int64)Thread, 0);
        v64 = *((_DWORD *)DeferredContext + 326);
        if ( v62 )
        {
          if ( (v64 & 0x20) == 0 )
          {
            RateControl = PspAllocateRateControl(2LL);
            if ( !RateControl )
            {
              v14 = -1073741670;
              goto LABEL_258;
            }
            *((_QWORD *)DeferredContext + 126) = RateControl;
LABEL_234:
            *(_DWORD *)(*((_QWORD *)DeferredContext + 126) + 40LL) = 0;
            *(_DWORD *)(*((_QWORD *)DeferredContext + 126) + 44LL) = v145;
            if ( v62 )
            {
              if ( (v61 & 4) != 0 )
              {
                *(_DWORD *)(*((_QWORD *)DeferredContext + 126) + 40LL) |= 1u;
                WORD1(v145) = v145;
              }
              if ( (v61 & 2) != 0 )
              {
                *(_DWORD *)(*((_QWORD *)DeferredContext + 126) + 40LL) |= 4u;
                HIDWORD(v145) &= ~1u;
              }
              else
              {
                HIDWORD(v145) |= 1u;
                if ( (v61 & 0x14) == 0 )
                  WORD1(v145) = 10000;
              }
              if ( (v61 & 8) != 0 )
                *(_DWORD *)(*((_QWORD *)DeferredContext + 126) + 40LL) |= 2u;
              if ( (v61 & 0x10) != 0 )
                *(_DWORD *)(*((_QWORD *)DeferredContext + 126) + 40LL) |= 0x20u;
              v66 = *((_QWORD *)DeferredContext + 126);
              if ( v66 == RateControl )
              {
                *(_QWORD *)(v66 + 128) = v145;
                v14 = PspAddSchedulingGroupToJobChain(*((_QWORD *)DeferredContext + 134), DeferredContext);
                v141 = v14;
                if ( v14 < 0 )
                {
                  v67 = (void *)*((_QWORD *)DeferredContext + 126);
                  if ( v67 )
                  {
                    PspFreeRateControl(v67);
                    *((_QWORD *)DeferredContext + 126) = 0LL;
                  }
                  goto LABEL_258;
                }
                _InterlockedOr((volatile signed __int32 *)DeferredContext + 326, 0x20u);
              }
              else
              {
                v160 = v66 + 128;
                if ( (*(_DWORD *)(*((_QWORD *)DeferredContext + 126) + 40LL) & 4) != 0 )
                  KeSetSchedulingGroupWeights(1u, (__int64)&v160, (__int64)&v145);
                else
                  KeSetSchedulingGroupCpuRates(1LL, &v160, &v145);
              }
              v161 = *(_DWORD *)(*((_QWORD *)DeferredContext + 126) + 40LL);
              v162 = *(_DWORD *)(*((_QWORD *)DeferredContext + 126) + 44LL);
            }
            else
            {
              HIDWORD(v145) |= 3u;
              LODWORD(v145) = 655370000;
              *(_DWORD *)(*((_QWORD *)DeferredContext + 126) + 40LL) |= 0x40u;
              *(_DWORD *)(*((_QWORD *)DeferredContext + 126) + 44LL) = v145;
              v68 = DeferredContext;
              v160 = *((_QWORD *)DeferredContext + 126) + 128LL;
              v143[0] = (*(_DWORD *)(v160 + 4) & 4) != 0;
              v68[128] += KeQuerySchedulingGroupReadyTime(v160, RateControl, v63);
              KeSetSchedulingGroupCpuRates(1LL, &v160, &v145);
              v161 = 0;
              v162 = v145;
              if ( v143[0] )
              {
                v143[0] = 0;
                PspEnumJobsAndProcessesInJobHierarchy(
                  DeferredContext,
                  0,
                  0,
                  (int)PspSetProcessCacheIsolationCallback,
                  (__int64)v143,
                  1);
              }
            }
            v14 = 0;
            if ( (PerfGlobalGroupMask & 0x80000) != 0 )
              EtwTraceJobSetQuery((_DWORD)DeferredContext, 15, (unsigned int)&v161, 0, 0, 1829);
LABEL_258:
            v20 = Thread;
            v19 = DeferredContext;
            goto LABEL_79;
          }
        }
        else if ( (v64 & 0x20) == 0 )
        {
          v14 = -1073741811;
          goto LABEL_258;
        }
        RateControl = 0LL;
        goto LABEL_234;
      }
      v86 = *(_QWORD *)v10;
      v187 = *(_QWORD *)v10;
      PspLockJobExclusive((__int64)DeferredContext, 0LL);
      v19 = DeferredContext;
      if ( (*((_DWORD *)DeferredContext + 326) & 0x20) == 0 )
      {
        v14 = -1073741811;
        goto LABEL_66;
      }
      v87 = *((_QWORD *)DeferredContext + 126);
      v88 = *(_DWORD *)(v87 + 40);
      if ( (v88 & 0x10) == 0 )
      {
        *(_DWORD *)(v87 + 40) = v88 | 0x10;
        KeInitializeDpc((PRKDPC)(v87 + 48), (PKDEFERRED_ROUTINE)PspJobCycleTimeNotificationDpcRoutine, DeferredContext);
      }
      KeSetSchedulingGroupCycleNotification(v87 + 128, v87 + 48, v86);
LABEL_300:
      v14 = 0;
LABEL_65:
      v19 = DeferredContext;
LABEL_66:
      v20 = 0LL;
LABEL_67:
      PspUnlockJob((__int64)v19, (__int64)v20);
      goto LABEL_462;
    }
    if ( JobInformationClass > JobObjectServerSiloInitialize )
    {
      switch ( JobInformationClass )
      {
        case JobObjectServerSiloRunningState:
          v135 = *(_DWORD *)v10;
          v178 = *(_DWORD *)v10;
          if ( !PspJobIsAppSilo((__int64)DeferredContext) || v135 != 2 )
            goto LABEL_315;
          PspLockJobExclusive((__int64)DeferredContext, 0LL);
          v19 = DeferredContext;
          if ( *((_DWORD *)DeferredContext + 302) )
          {
            v14 = -1073740529;
            goto LABEL_66;
          }
          v136 = _interlockedbittestandset((volatile signed __int32 *)DeferredContext + 326, 0x1Du);
          v19 = DeferredContext;
          if ( v136 )
          {
            v14 = 255;
            goto LABEL_66;
          }
          PspHardDereferenceSiloWorker((__int64)DeferredContext);
          goto LABEL_300;
        case JobObjectIoAttribution:
          v133 = 0;
          v190 = *(_OWORD *)v10;
          v191 = *((_OWORD *)v10 + 1);
          v192 = *((_OWORD *)v10 + 2);
          v193 = *((_OWORD *)v10 + 3);
          v194 = *((_QWORD *)v10 + 8);
          if ( (v190 & 0xFFFFFFFC) != 0 || (v190 & 3) == 0 )
          {
            v14 = -1073741811;
          }
          else
          {
            v133 = 8;
            v134 = Thread;
            PspLockRootJobExclusive(DeferredContext, Thread, &v156);
            PspLockJobConditionally((__int64)DeferredContext, &v156);
            v14 = PspSetJobIoAttribution(DeferredContext);
            if ( v14 >= 0 )
            {
              PspUnlockJobConditionally((__int64)DeferredContext, &v156);
              PspUnlockJob((__int64)v156, (__int64)v134);
              v133 = 0;
            }
          }
          if ( (unsigned __int8)v133 < 8u )
            goto LABEL_462;
          PspUnlockJobConditionally((__int64)DeferredContext, &v156);
          v20 = Thread;
          v19 = v156;
          goto LABEL_67;
        case JobObjectMemoryPartitionInformation:
          v188 = *(_QWORD *)v10;
          Silo = PspSetJobMemoryPartition(DeferredContext);
          goto LABEL_379;
        case JobObjectContainerTelemetryId:
          PspLockJobExclusive((__int64)DeferredContext, 0LL);
          if ( *((int *)DeferredContext + 326) < 0 )
          {
            v14 = -1073741791;
            v19 = DeferredContext;
            goto LABEL_66;
          }
          *(_OWORD *)((char *)DeferredContext + 1240) = *(_OWORD *)v10;
          _InterlockedOr((volatile signed __int32 *)DeferredContext + 326, 0x80000000);
          goto LABEL_408;
      }
      if ( JobInformationClass != JobObjectSiloSystemRoot )
      {
        if ( JobInformationClass != JobObjectEnergyTrackingState )
        {
          if ( JobInformationClass == JobObjectThreadImpersonationInformation )
          {
            v151 = *v10;
            if ( v151 != 1 )
              goto LABEL_315;
            if ( SeSinglePrivilegeCheck(SeTcbPrivilege, AccessMode) )
            {
              if ( PspJobIsSilo((__int64)DeferredContext) )
              {
                v14 = (unsigned __int8)PspSetJobSiloThreadImpersonationPolicy(DeferredContext, 2LL) == 0
                    ? 0xC0000022
                    : 0;
                goto LABEL_462;
              }
              goto LABEL_315;
            }
            goto LABEL_311;
          }
          goto LABEL_421;
        }
        v179 = *(_QWORD *)v10;
        v59 = PspSetEnergyTrackingStateJobTree((char *)DeferredContext, &v179);
        goto LABEL_207;
      }
      if ( !PspJobIsSilo((__int64)DeferredContext) )
      {
LABEL_313:
        v14 = -1073740535;
        goto LABEL_462;
      }
      v173 = 0LL;
      *(_OWORD *)v167 = *(_OWORD *)v10;
      v127 = _mm_srli_si128(*(__m128i *)v167, 8).m128i_u64[0];
      if ( !v127
        || (v128 = (unsigned __int16)v167[0], (unsigned __int16)(LOWORD(v167[0]) - 1) > 0x206u)
        || ((__int64)v167[0] & 1) != 0 )
      {
        v14 = -1073741811;
        v141 = -1073741811;
        goto LABEL_462;
      }
      if ( AccessMode == 1 )
      {
        if ( (v127 & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v129 = v127 + LOWORD(v167[0]);
        if ( v129 > 0x7FFFFFFF0000LL || v129 < v127 )
        {
          MEMORY[0x7FFFFFFF0000] = 0;
          v128 = (unsigned __int16)v167[0];
        }
      }
      v130 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v128, 0x72537350u);
      v131 = v130;
      v173 = v130;
      if ( !v130 )
      {
        v14 = -1073741670;
        v141 = -1073741670;
        goto LABEL_462;
      }
      memmove(v130, v167[1], LOWORD(v167[0]));
      v132 = wcsnlen(v131, (unsigned __int64)LOWORD(v167[0]) >> 1);
      if ( v132 == (unsigned __int64)LOWORD(v167[0]) >> 1 )
      {
        v167[1] = (void *)v131;
        v14 = PspAssignSiloSystemRootPath(DeferredContext, v167);
      }
      else
      {
        v14 = -1073741811;
      }
      if ( !v131 )
      {
LABEL_462:
        KeLeaveGuardedRegionThread((__int64)Thread);
        if ( v14 )
        {
          if ( (PerfGlobalGroupMask & 0x80000) != 0 )
            EtwTraceJobSetQuery((_DWORD)DeferredContext, JobInformationClass, 0, 0, v14, 1831);
        }
        ObfDereferenceObjectWithTag(DeferredContext, 0x79517350u);
        return v14;
      }
      v124 = 1918071632;
      v123 = (PSECURITY_SUBJECT_CONTEXT)v131;
LABEL_405:
      ExFreePoolWithTag(v123, v124);
      goto LABEL_462;
    }
    switch ( JobInformationClass )
    {
      case JobObjectServerSiloInitialize:
        v125 = AccessMode;
        if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, AccessMode) )
          goto LABEL_311;
        if ( !PspJobIsSilo((__int64)DeferredContext) )
          goto LABEL_313;
        if ( !(unsigned __int8)PspSetJobSiloThreadImpersonationPolicy(DeferredContext, 4LL) )
          goto LABEL_315;
        v189 = *(_QWORD *)v10;
        LOBYTE(v126) = v125;
        Silo = PspConvertSiloToServerSilo(DeferredContext, v126);
        goto LABEL_379;
      case JobObjectClearEvent:
        PspLockJobExclusive((__int64)DeferredContext, 0LL);
        KeResetEvent((PRKEVENT)DeferredContext);
        goto LABEL_408;
      case JobObjectClearPeakJobMemoryUsed:
        PspLockJobMemoryLimitsExclusive(DeferredContext, 0LL, 0LL);
        *((_QWORD *)DeferredContext + 76) = 0LL;
        *((_QWORD *)DeferredContext + 75) = 0LL;
        PspUnlockJobMemoryLimitsExclusive(DeferredContext, 0LL, 0LL);
        goto LABEL_409;
    }
    if ( JobInformationClass != JobObjectIoRateControlInformation )
    {
      switch ( JobInformationClass )
      {
        case JobObjectNetRateControlInformation:
          Silo = PspSetNetRateControl(v10, (unsigned int)v4, DeferredContext);
          break;
        case JobObjectNotificationLimitInformation2:
          goto LABEL_318;
        case JobObjectCreateSilo:
          Silo = PspCreateSilo(DeferredContext);
          break;
        case JobObjectSiloRootDirectory:
          if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, AccessMode) )
            goto LABEL_311;
          if ( !PspJobIsSilo((__int64)DeferredContext) )
            goto LABEL_313;
          if ( !(unsigned __int8)PspSetJobSiloThreadImpersonationPolicy(DeferredContext, 4LL) )
            goto LABEL_315;
          v177 = *(_DWORD *)v10;
          Silo = ObCreateSiloRootDirectory(DeferredContext);
          break;
        default:
          goto LABEL_421;
      }
LABEL_379:
      v14 = Silo;
      goto LABEL_462;
    }
    v146 = 0LL;
    v181 = 0LL;
    memset(v198, 0, sizeof(v198));
    memmove(v198, v10, v4);
    if ( v198[3] )
    {
      v118 = v198[5];
      v119 = PagedPool;
      if ( !LOWORD(v198[5]) )
        goto LABEL_393;
      if ( (v198[3] & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v120 = v198[3] + LOWORD(v198[5]);
      if ( v120 > 0x7FFFFFFF0000LL || v120 < v198[3] )
      {
        MEMORY[0x7FFFFFFF0000] = 0;
        v118 = v198[5];
      }
      if ( !v118 || (v118 & 1) != 0 )
      {
LABEL_393:
        v14 = -1073741811;
        v141 = -1073741811;
        v123 = 0LL;
        goto LABEL_403;
      }
      v168 = 1;
      if ( AccessMode == 1 )
        v119 = 9;
      v168 = v119;
      PoolWithQuotaTag = (struct _SECURITY_SUBJECT_CONTEXT *)ExAllocatePoolWithQuotaTag(v119, v118 + 2LL, 0x624A7350u);
      v122 = PoolWithQuotaTag;
      v146 = PoolWithQuotaTag;
      v181 = PoolWithQuotaTag;
      if ( !PoolWithQuotaTag )
      {
        v14 = -1073741801;
        v141 = -1073741801;
        v123 = 0LL;
LABEL_403:
        if ( !v123 )
          goto LABEL_462;
        v124 = 0;
        goto LABEL_405;
      }
      memmove(PoolWithQuotaTag, (const void *)v198[3], LOWORD(v198[5]));
      *((_WORD *)&v122->ClientToken + ((unsigned __int64)LOWORD(v198[5]) >> 1)) = 0;
      v198[3] = v122;
    }
    if ( (v198[4] & 0xFFFFFFF000000000uLL) != 0 )
    {
      v14 = -1073741811;
    }
    else if ( (v198[7] || v198[2] || v198[10]) && !PspIsContextAdmin() )
    {
      v14 = -1073741790;
    }
    else
    {
      v14 = PspSetJobIoRateControl((volatile signed __int64 *)DeferredContext, (__int64)v198);
    }
    v123 = v146;
    goto LABEL_403;
  }
  return result;
}
