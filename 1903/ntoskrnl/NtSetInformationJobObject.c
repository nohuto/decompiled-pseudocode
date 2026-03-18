/*
 * XREFs of NtSetInformationJobObject @ 0x140613A70
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentProcess @ 0x140006530 (PsGetCurrentProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     PspJobIsSilo @ 0x1400838C0 (PspJobIsSilo.c)
 *     KeLeaveGuardedRegionThread @ 0x1400838D4 (KeLeaveGuardedRegionThread.c)
 *     PtrToUlong @ 0x1400ADD50 (PtrToUlong.c)
 *     KeInitializeDpc @ 0x1400B8D00 (KeInitializeDpc.c)
 *     KeInitializeAffinityEx @ 0x1400BE1B0 (KeInitializeAffinityEx.c)
 *     KeIsEmptyAffinityEx @ 0x1400BE2F0 (KeIsEmptyAffinityEx.c)
 *     ExAllocatePoolWithQuotaTag @ 0x1400BEF80 (ExAllocatePoolWithQuotaTag.c)
 *     PspIsValidJobSessionId @ 0x1400E6AD8 (PspIsValidJobSessionId.c)
 *     KeSetSchedulingGroupWeights @ 0x1400E7EBC (KeSetSchedulingGroupWeights.c)
 *     KeSetSchedulingGroupCpuRates @ 0x1400E7FAC (KeSetSchedulingGroupCpuRates.c)
 *     KeSetSchedulingGroupRankBias @ 0x1400E86A4 (KeSetSchedulingGroupRankBias.c)
 *     KeQueryActiveGroupCount @ 0x140106F80 (KeQueryActiveGroupCount.c)
 *     KeQuerySchedulingGroupReadyTime @ 0x140125AA0 (KeQuerySchedulingGroupReadyTime.c)
 *     KeSetSchedulingGroupCycleNotification @ 0x14012DE9C (KeSetSchedulingGroupCycleNotification.c)
 *     KeFirstGroupAffinityEx @ 0x14012F080 (KeFirstGroupAffinityEx.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     wcsnlen @ 0x1401A20E0 (wcsnlen.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     KeAddGroupAffinityEx @ 0x1402A4D70 (KeAddGroupAffinityEx.c)
 *     KeClearEvent @ 0x1402A9B4C (KeClearEvent.c)
 *     PspJobIsAppSilo @ 0x140306D0C (PspJobIsAppSilo.c)
 *     PspLockWorkingSetChangeExclusiveUnsafe @ 0x140307660 (PspLockWorkingSetChangeExclusiveUnsafe.c)
 *     PspLockUnlockWorkingSetChangeExclusiveUnsafe @ 0x140308178 (PspLockUnlockWorkingSetChangeExclusiveUnsafe.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PspSetJobIoRateControl @ 0x1405B30A0 (PspSetJobIoRateControl.c)
 *     PsReturnSharedPoolQuota @ 0x1405C866C (PsReturnSharedPoolQuota.c)
 *     SePrivilegeCheck @ 0x1405CED00 (SePrivilegeCheck.c)
 *     SeCaptureSubjectContextEx @ 0x1405D0200 (SeCaptureSubjectContextEx.c)
 *     PsChargeSharedPoolQuota @ 0x1405D6A3C (PsChargeSharedPoolQuota.c)
 *     PsInvokeWin32Callout @ 0x1405EB440 (PsInvokeWin32Callout.c)
 *     ObReferenceObjectByHandleWithTag @ 0x1405F0AB0 (ObReferenceObjectByHandleWithTag.c)
 *     SeReleaseSubjectContext @ 0x1405F3180 (SeReleaseSubjectContext.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x140611210 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspUnlockJob @ 0x140611910 (PspUnlockJob.c)
 *     PspLockJobExclusive @ 0x140611950 (PspLockJobExclusive.c)
 *     PspUnlockJobMemoryLimitsShared @ 0x140611B04 (PspUnlockJobMemoryLimitsShared.c)
 *     PspGetJobMemoryUsageNotificationViolations @ 0x140611B60 (PspGetJobMemoryUsageNotificationViolations.c)
 *     PspLockJobMemoryLimitsShared @ 0x140611BB0 (PspLockJobMemoryLimitsShared.c)
 *     PspUnlockJobConditionally @ 0x140612104 (PspUnlockJobConditionally.c)
 *     PspRateControlLimitFlag @ 0x140613370 (PspRateControlLimitFlag.c)
 *     PspLockJobConditionally @ 0x140613668 (PspLockJobConditionally.c)
 *     PspLockJobChain @ 0x14061372C (PspLockJobChain.c)
 *     PspUnlockJobChain @ 0x1406137C0 (PspUnlockJobChain.c)
 *     PspNotificationLimitRateControlToleranceIntervalField @ 0x140615388 (PspNotificationLimitRateControlToleranceIntervalField.c)
 *     PspNotificationLimitRateControlToleranceField @ 0x1406153B0 (PspNotificationLimitRateControlToleranceField.c)
 *     PspUnlockJobMemoryLimitsExclusive @ 0x140615754 (PspUnlockJobMemoryLimitsExclusive.c)
 *     PspLockJobMemoryLimitsExclusive @ 0x1406157A8 (PspLockJobMemoryLimitsExclusive.c)
 *     PspLockRootJobExclusive @ 0x140615C20 (PspLockRootJobExclusive.c)
 *     PspIsContextAdmin @ 0x14061A4B4 (PspIsContextAdmin.c)
 *     PspSetEnergyTrackingStateJobTree @ 0x14061A518 (PspSetEnergyTrackingStateJobTree.c)
 *     SeSinglePrivilegeCheck @ 0x140672D30 (SeSinglePrivilegeCheck.c)
 *     IoAllocateMiniCompletionPacket @ 0x14068E130 (IoAllocateMiniCompletionPacket.c)
 *     PspBindProcessSessionToJob @ 0x1406957F0 (PspBindProcessSessionToJob.c)
 *     PspSetJobIoAttribution @ 0x14069751C (PspSetJobIoAttribution.c)
 *     IoFreeMiniCompletionPacket @ 0x140697720 (IoFreeMiniCompletionPacket.c)
 *     PspFreeRateControl @ 0x1406988D4 (PspFreeRateControl.c)
 *     PspAllocateRateControl @ 0x140698920 (PspAllocateRateControl.c)
 *     PspAddSchedulingGroupToJobChain @ 0x1406989D4 (PspAddSchedulingGroupToJobChain.c)
 *     PspScheduleEnforcementWorker @ 0x1406AFA30 (PspScheduleEnforcementWorker.c)
 *     PspFreezeJobTree @ 0x1406DBB80 (PspFreezeJobTree.c)
 *     PspGetJobLimitInformationValidFlags @ 0x1406E4344 (PspGetJobLimitInformationValidFlags.c)
 *     PspConvertJobNotificationLimitFromV2 @ 0x1406E6480 (PspConvertJobNotificationLimitFromV2.c)
 *     PspSetBackgroundJobTree @ 0x1406E8FEC (PspSetBackgroundJobTree.c)
 *     PspUpdateEnforcementTimer @ 0x1406EA888 (PspUpdateEnforcementTimer.c)
 *     PspConvertJobNotificationLimitFromV1 @ 0x1406EE89C (PspConvertJobNotificationLimitFromV1.c)
 *     PspDoesJobHierarchyPermitUILimits @ 0x1406EEE2C (PspDoesJobHierarchyPermitUILimits.c)
 *     SeCheckPrivilegedObject @ 0x140746AB8 (SeCheckPrivilegedObject.c)
 *     PspAssignSiloSystemRootPath @ 0x1408C4F30 (PspAssignSiloSystemRootPath.c)
 *     PspBeginSiloTeardown @ 0x1408C5018 (PspBeginSiloTeardown.c)
 *     PspConvertSiloToServerSilo @ 0x1408C51D4 (PspConvertSiloToServerSilo.c)
 *     PspCreateSilo @ 0x1408C5370 (PspCreateSilo.c)
 *     PspAddProcessToWorkingSetChangeList @ 0x1408C7680 (PspAddProcessToWorkingSetChangeList.c)
 *     PspApplyWorkingSetLimits @ 0x1408C7744 (PspApplyWorkingSetLimits.c)
 *     PspSetJobMemoryPartition @ 0x1408C82D0 (PspSetJobMemoryPartition.c)
 *     PspSetJobSiloThreadImpersonationPolicy @ 0x1408C85D0 (PspSetJobSiloThreadImpersonationPolicy.c)
 *     PspSetNetRateControl @ 0x1408C864C (PspSetNetRateControl.c)
 *     PspEnumProcessesInJobHierarchy @ 0x1408CD15C (PspEnumProcessesInJobHierarchy.c)
 *     EtwTraceJobSetQuery @ 0x1408F41CC (EtwTraceJobSetQuery.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913EC0 (ExRaiseDatatypeMisalignment.c)
 *     ObCreateSiloRootDirectory @ 0x140944520 (ObCreateSiloRootDirectory.c)
 */

NTSTATUS __stdcall NtSetInformationJobObject(
        HANDLE JobHandle,
        JOBOBJECTINFOCLASS JobInformationClass,
        PVOID JobInformation,
        ULONG JobInformationLength)
{
  __int64 v4; // rbx
  __int64 v5; // r13
  unsigned int v7; // ecx
  KPROCESSOR_MODE PreviousMode; // al
  __m128i *v9; // r15
  ACCESS_MASK v10; // edx
  NTSTATUS result; // eax
  int v12; // edi
  char v13; // bl
  int v14; // ebx
  __int64 MiniCompletionPacket; // rbx
  PVOID v16; // rcx
  PVOID v17; // rcx
  int v18; // eax
  __int64 v19; // r8
  int v20; // eax
  unsigned __int64 v21; // rdx
  int j; // ebx
  int *v23; // rdi
  int *v24; // r15
  PVOID v25; // rcx
  struct _SECURITY_SUBJECT_CONTEXT *v26; // rbx
  char *v27; // r15
  __int64 v28; // r8
  __int64 v29; // rdi
  int v30; // r15d
  _DWORD *v31; // r12
  _DWORD *v32; // rbx
  _DWORD *v33; // rax
  bool v34; // zf
  __int64 v35; // rcx
  _QWORD *v36; // r10
  _DWORD *v37; // rax
  int JobMemoryUsageNotificationViolations; // ebx
  unsigned int v39; // r15d
  __int64 v40; // r9
  KPROCESSOR_MODE v41; // r15
  int v42; // edx
  unsigned int v43; // edx
  bool v44; // r15
  char *v45; // r12
  _DWORD *v46; // rcx
  char v47; // bl
  __int64 v48; // r14
  PVOID v49; // rcx
  __int64 v50; // rbx
  int v51; // eax
  PETHREAD v52; // rdx
  PETHREAD v53; // r15
  struct _KPROCESS *v54; // rax
  struct _SECURITY_SUBJECT_CONTEXT *v55; // rcx
  char v56; // bl
  int v57; // ecx
  __int64 RateControl; // rdx
  _QWORD *v59; // rbx
  __int64 v60; // rcx
  PVOID v61; // r8
  __int64 v62; // r10
  unsigned int v63; // edx
  unsigned __int16 v64; // cx
  POOL_TYPE v65; // r14d
  unsigned __int64 v66; // r8
  _WORD *v67; // rbx
  wchar_t *v68; // rbx
  unsigned int v69; // ebx
  _KPROCESS *v70; // rax
  char v71; // r15
  __int64 v72; // rax
  char v73; // al
  unsigned int v74; // ecx
  unsigned int v75; // ebx
  unsigned int v76; // ebx
  char v77; // al
  int v78; // eax
  __int64 v79; // rcx
  struct _SECURITY_SUBJECT_CONTEXT *v80; // r15
  struct _KPROCESS *v81; // rax
  ULONG v82; // edx
  BOOLEAN v83; // al
  unsigned __int16 Group; // cx
  _QWORD *v85; // rax
  __int64 v86; // rcx
  __int64 v87; // rax
  _OWORD *v88; // rcx
  _QWORD *i; // rdi
  char *v90; // rcx
  void *v91; // rcx
  unsigned __int16 v92; // cx
  __m128i v93; // xmm0
  unsigned __int16 epi16; // ax
  __int64 v95; // r9
  KPROCESSOR_MODE v96; // bl
  struct _SECURITY_SUBJECT_CONTEXT *PoolWithTag; // rdi
  struct _KPROCESS *CurrentProcess; // rax
  struct _SECURITY_SUBJECT_CONTEXT *v99; // r15
  BOOLEAN v100; // al
  char *v101; // rbx
  _QWORD *v102; // rcx
  __int64 v103; // rax
  __int64 v104; // rax
  _OWORD *v105; // rcx
  int Silo; // eax
  ULONG v107; // edx
  KPROCESSOR_MODE v108; // bl
  __int64 v109; // rdx
  unsigned __int64 v110; // xmm0_8
  unsigned __int16 v111; // cx
  unsigned __int64 v112; // r8
  wchar_t *v113; // rax
  size_t v114; // rax
  __int32 v115; // ebx
  signed __int8 v116; // cf
  PVOID DeferredContext; // [rsp+40h] [rbp-B68h] BYREF
  KPROCESSOR_MODE AccessMode; // [rsp+48h] [rbp-B60h]
  char v119; // [rsp+49h] [rbp-B5Fh]
  __int32 v120; // [rsp+50h] [rbp-B58h]
  int v121; // [rsp+58h] [rbp-B50h]
  unsigned __int8 v122; // [rsp+5Ch] [rbp-B4Ch] BYREF
  bool v123[3]; // [rsp+5Dh] [rbp-B4Bh] BYREF
  size_t Size; // [rsp+60h] [rbp-B48h]
  __int64 v125; // [rsp+68h] [rbp-B40h] BYREF
  KPROCESSOR_MODE v126; // [rsp+70h] [rbp-B38h]
  unsigned __int16 v127; // [rsp+74h] [rbp-B34h]
  __int64 v128; // [rsp+78h] [rbp-B30h]
  PETHREAD Thread; // [rsp+80h] [rbp-B28h]
  PSECURITY_SUBJECT_CONTEXT v130; // [rsp+88h] [rbp-B20h]
  PVOID P; // [rsp+90h] [rbp-B18h]
  __int8 v132; // [rsp+98h] [rbp-B10h]
  __int8 v133; // [rsp+99h] [rbp-B0Fh]
  int JobLimitInformationValidFlags; // [rsp+9Ch] [rbp-B0Ch]
  unsigned int v135; // [rsp+A0h] [rbp-B08h]
  void *Src; // [rsp+A8h] [rbp-B00h]
  void *v137; // [rsp+B0h] [rbp-AF8h] BYREF
  __int64 v138; // [rsp+B8h] [rbp-AF0h] BYREF
  __int64 v139; // [rsp+C0h] [rbp-AE8h]
  void *v140[2]; // [rsp+C8h] [rbp-AE0h] BYREF
  PVOID Object; // [rsp+D8h] [rbp-AD0h] BYREF
  __int64 v142; // [rsp+E0h] [rbp-AC8h] BYREF
  __int64 v143; // [rsp+E8h] [rbp-AC0h] BYREF
  HANDLE v144; // [rsp+F0h] [rbp-AB8h]
  __int64 v145; // [rsp+F8h] [rbp-AB0h]
  _BYTE SubjectContext[40]; // [rsp+100h] [rbp-AA8h] BYREF
  unsigned int v147; // [rsp+128h] [rbp-A80h]
  __int32 v148; // [rsp+12Ch] [rbp-A7Ch]
  unsigned int v149; // [rsp+130h] [rbp-A78h] BYREF
  int v150; // [rsp+134h] [rbp-A74h]
  __int64 v151; // [rsp+138h] [rbp-A70h] BYREF
  __int64 v152; // [rsp+140h] [rbp-A68h]
  __int64 v153; // [rsp+148h] [rbp-A60h] BYREF
  wchar_t *v154; // [rsp+150h] [rbp-A58h]
  HANDLE Handle[2]; // [rsp+158h] [rbp-A50h]
  __int64 v156; // [rsp+168h] [rbp-A40h]
  PVOID PoolWithQuotaTag; // [rsp+170h] [rbp-A38h]
  PVOID v158; // [rsp+178h] [rbp-A30h] BYREF
  __int64 v159; // [rsp+180h] [rbp-A28h]
  __int64 v160; // [rsp+188h] [rbp-A20h]
  __int32 v161; // [rsp+190h] [rbp-A18h]
  __int32 v162; // [rsp+1A0h] [rbp-A08h]
  __int32 v163; // [rsp+1A4h] [rbp-A04h]
  _OWORD v164[2]; // [rsp+1A8h] [rbp-A00h] BYREF
  __int64 v165; // [rsp+1C8h] [rbp-9E0h]
  __int64 v166; // [rsp+1D0h] [rbp-9D8h]
  __int64 v167; // [rsp+1D8h] [rbp-9D0h]
  _OWORD v168[8]; // [rsp+1E0h] [rbp-9C8h] BYREF
  _QWORD v169[18]; // [rsp+260h] [rbp-948h] BYREF
  __m128i v170; // [rsp+2F0h] [rbp-8B8h] BYREF
  struct _PRIVILEGE_SET RequiredPrivileges; // [rsp+300h] [rbp-8A8h] BYREF
  __m128i v172; // [rsp+318h] [rbp-890h] BYREF
  _QWORD v173[10]; // [rsp+330h] [rbp-878h] BYREF
  _QWORD v174[20]; // [rsp+380h] [rbp-828h] BYREF
  _BYTE v175[56]; // [rsp+420h] [rbp-788h] BYREF
  _QWORD v176[203]; // [rsp+458h] [rbp-750h] BYREF
  _OWORD v177[11]; // [rsp+AB0h] [rbp-F8h] BYREF

  v4 = JobInformationLength;
  LODWORD(Size) = JobInformationLength;
  v5 = JobInformationClass;
  v144 = JobHandle;
  v120 = JobInformationClass;
  Src = JobInformation;
  memset(v177, 0, 0xA8uLL);
  Handle[0] = 0LL;
  Handle[1] = 0LL;
  v148 = 0;
  v143 = 0LL;
  v151 = 0LL;
  v147 = 0;
  v153 = 0LL;
  memset(v174, 0, 0x98uLL);
  v172 = 0uLL;
  v170 = 0uLL;
  memset(&v168[3], 0, 0x48uLL);
  memset(v169, 0, sizeof(v169));
  v119 = 0;
  memset(&v176[7], 0, 0x620uLL);
  memset(v164, 0, sizeof(v164));
  memset(SubjectContext, 0, sizeof(SubjectContext));
  memset(v173, 0, 0x48uLL);
  memset(v176, 0, 0x30uLL);
  memset(v175, 0, sizeof(v175));
  v125 = 0LL;
  memset(&RequiredPrivileges, 0, sizeof(RequiredPrivileges));
  v138 = 0LL;
  v139 = 0LL;
  memset(v168, 0, 0x28uLL);
  v140[0] = 0LL;
  v140[1] = 0LL;
  v156 = 0LL;
  PoolWithQuotaTag = 0LL;
  if ( (unsigned int)(v5 - 1) > 0x2E )
    return -1073741821;
  switch ( (_DWORD)v5 )
  {
    case 9:
      if ( (_DWORD)v4 == 144 || (_DWORD)v4 == 152 )
        goto LABEL_6;
      return -1073741820;
    case 0xC:
      if ( (_DWORD)v4 == 48 )
        goto LABEL_6;
      v34 = (_DWORD)v4 == 56;
LABEL_96:
      if ( v34 )
        goto LABEL_6;
      return -1073741820;
    case 0x1F:
      if ( (_DWORD)v4 == 48 || (_DWORD)v4 == 96 )
        goto LABEL_6;
      v34 = (_DWORD)v4 == 144;
      goto LABEL_96;
  }
  v7 = dword_140949BAC[v5];
  if ( (_DWORD)v4 != v7 && ((_DWORD)v5 != 11 && (_DWORD)v5 != 14 || (unsigned int)v4 < v7) )
    return -1073741820;
LABEL_6:
  Thread = KeGetCurrentThread();
  PreviousMode = Thread->PreviousMode;
  AccessMode = PreviousMode;
  v126 = PreviousMode;
  if ( PreviousMode )
  {
    v9 = (__m128i *)Src;
    if ( (_DWORD)v4 )
    {
      if ( ((dword_140949C6C[v5] - 1) & (unsigned int)Src) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)Src + v4 > 0x7FFFFFFF0000LL || (char *)Src + v4 < Src )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    PreviousMode = AccessMode;
  }
  else
  {
    v9 = (__m128i *)Src;
  }
  if ( !JobHandle )
    return -1073741816;
  v10 = 16;
  if ( (_DWORD)v5 != 5 )
    v10 = 2;
  result = ObReferenceObjectByHandleWithTag(
             JobHandle,
             v10,
             (POBJECT_TYPE)PsJobType,
             PreviousMode,
             0x79517350u,
             &DeferredContext,
             0LL);
  if ( result >= 0 )
  {
    v12 = 0;
    v121 = 0;
    v13 = 0;
    v119 = 0;
    --Thread->SpecialApcDisable;
    if ( (int)v5 <= 24 )
    {
      if ( (_DWORD)v5 != 24 )
      {
        if ( (int)v5 > 12 )
        {
          if ( (_DWORD)v5 != 14 )
          {
            if ( (_DWORD)v5 != 15 )
            {
              if ( (_DWORD)v5 != 16 )
              {
                if ( (_DWORD)v5 == 18 )
                {
                  v172 = *v9;
                  if ( v172.m128i_i32[0] && (v172.m128i_i32[0] & 0xFFFFFFF8) == 0 )
                  {
                    v12 = PspFreezeJobTree(DeferredContext, &v172);
                    if ( v12 >= 0 )
                      v9->m128i_i32[0] = v172.m128i_i32[0];
                    goto LABEL_33;
                  }
                  goto LABEL_417;
                }
                if ( (_DWORD)v5 != 21 )
                {
                  if ( (_DWORD)v5 != 22 )
                  {
                    if ( (_DWORD)v5 == 23 )
                    {
                      if ( v9->m128i_i8[0] != 1 )
                      {
                        v12 = -1073741811;
                        v121 = -1073741811;
                        goto LABEL_33;
                      }
                      PspEnumJobsAndProcessesInJobHierarchy(
                        DeferredContext,
                        0,
                        (int)PspEnableTimerVirtualization,
                        (int)PspEnableProcessTimerVirtualization,
                        0LL,
                        0);
LABEL_32:
                      v12 = 0;
LABEL_33:
                      KeLeaveGuardedRegionThread((__int64)Thread);
                      if ( v12 )
                      {
                        if ( (PerfGlobalGroupMask & 0x80000) != 0 )
                          EtwTraceJobSetQuery((_DWORD)DeferredContext, v5, 0, 0, v12, 1831);
                      }
                      ObfDereferenceObjectWithTag(DeferredContext, 0x79517350u);
                      return v12;
                    }
LABEL_443:
                    v12 = -1073741821;
                    goto LABEL_33;
                  }
                  v122 = v9->m128i_i8[0];
                  PspLockJobExclusive((__int64)DeferredContext, 0LL);
                  v61 = DeferredContext;
                  if ( (*((_DWORD *)DeferredContext + 326) & 0x20) != 0 )
                  {
                    v62 = *((_QWORD *)DeferredContext + 126);
                    v63 = *(_DWORD *)(v62 + 40);
                    if ( (v63 & 0x40) == 0 )
                    {
                      if ( (v63 & 1) != 0 || (v63 & 0x20) != 0 )
                      {
                        v12 = -1073741637;
                        goto LABEL_220;
                      }
                      if ( ((v63 >> 3) & 1) != (v122 != 0) )
                      {
                        *(_DWORD *)(v62 + 40) = (v122 != 0 ? 8 : 0) | v63 & 0xFFFFFFF7;
                        KeSetSchedulingGroupRankBias(*((_QWORD *)DeferredContext + 126) + 128LL, v122);
                        PspEnumProcessesInJobHierarchy(DeferredContext, PspSetProcessCacheIsolationCallback, &v122, 1LL);
                        v12 = 0;
                        v61 = DeferredContext;
LABEL_220:
                        v49 = v61;
                        goto LABEL_163;
                      }
                    }
                  }
                  v12 = -1073741811;
                  goto LABEL_220;
                }
                v132 = v9->m128i_i8[0];
                v18 = PspSetBackgroundJobTree(DeferredContext);
LABEL_62:
                v12 = v18;
                if ( v18 < 0 )
                  goto LABEL_33;
                goto LABEL_32;
              }
              v161 = v9->m128i_i32[0];
              v14 = v161;
              if ( (v161 & 0xFFFFC001) == 0 )
              {
                PspLockJobExclusive((__int64)DeferredContext, 0LL);
                PspLockJobMemoryLimitsExclusive(DeferredContext, 0LL, 0LL);
                *((_DWORD *)DeferredContext + 219) = v14;
                PspUnlockJobMemoryLimitsExclusive(DeferredContext, 0LL, 0LL);
                goto LABEL_31;
              }
LABEL_417:
              v12 = -1073741811;
              goto LABEL_33;
            }
            memmove(&v151, v9, (unsigned int)Size);
            v56 = v151;
            if ( (v151 & 0xFFFFFFE0) != 0 )
              goto LABEL_417;
            LODWORD(v125) = HIDWORD(v151);
            v120 = v151 & 1;
            if ( (v151 & 1) != 0 )
            {
              if ( (v151 & 2) != 0 )
              {
                if ( (v151 & 0x10) != 0 || (unsigned __int16)(WORD2(v151) - 1) > 8u )
                  goto LABEL_417;
              }
              else if ( (unsigned __int16)(WORD2(v151) - 1) > 0x270Fu
                     || (v151 & 0x10) != 0 && ((v151 & 4) != 0 || HIWORD(v151) < WORD2(v151) || HIWORD(v151) > 0x2710u) )
              {
                goto LABEL_417;
              }
            }
            PspLockJobChain((__int64)DeferredContext, (__int64)Thread, 0);
            v57 = *((_DWORD *)DeferredContext + 326);
            if ( v120 )
            {
              if ( (v57 & 0x20) == 0 )
              {
                RateControl = PspAllocateRateControl(2LL);
                if ( !RateControl )
                {
                  v12 = -1073741670;
                  goto LABEL_207;
                }
                *((_QWORD *)DeferredContext + 126) = RateControl;
LABEL_190:
                *(_DWORD *)(*((_QWORD *)DeferredContext + 126) + 40LL) = 0;
                *(_DWORD *)(*((_QWORD *)DeferredContext + 126) + 44LL) = v125;
                if ( v120 )
                {
                  if ( (v56 & 4) != 0 )
                  {
                    *(_DWORD *)(*((_QWORD *)DeferredContext + 126) + 40LL) |= 1u;
                    WORD1(v125) = v125;
                  }
                  if ( (v56 & 2) != 0 )
                  {
                    *(_DWORD *)(*((_QWORD *)DeferredContext + 126) + 40LL) |= 4u;
                    HIDWORD(v125) &= ~1u;
                  }
                  else
                  {
                    HIDWORD(v125) |= 1u;
                    if ( (v56 & 0x14) == 0 )
                      WORD1(v125) = 10000;
                  }
                  if ( (v56 & 8) != 0 )
                    *(_DWORD *)(*((_QWORD *)DeferredContext + 126) + 40LL) |= 2u;
                  if ( (v56 & 0x10) != 0 )
                    *(_DWORD *)(*((_QWORD *)DeferredContext + 126) + 40LL) |= 0x20u;
                  v60 = *((_QWORD *)DeferredContext + 126);
                  if ( v60 == RateControl )
                  {
                    *(_QWORD *)(v60 + 128) = v125;
                    v12 = PspAddSchedulingGroupToJobChain(*((_QWORD *)DeferredContext + 134), DeferredContext);
                    v121 = v12;
                    if ( v12 < 0 )
                    {
                      v91 = (void *)*((_QWORD *)DeferredContext + 126);
                      if ( v91 )
                      {
                        PspFreeRateControl(v91);
                        *((_QWORD *)DeferredContext + 126) = 0LL;
                      }
                      goto LABEL_207;
                    }
                    _InterlockedOr((volatile signed __int32 *)DeferredContext + 326, 0x20u);
                  }
                  else
                  {
                    v142 = v60 + 128;
                    if ( (*(_DWORD *)(*((_QWORD *)DeferredContext + 126) + 40LL) & 4) != 0 )
                      KeSetSchedulingGroupWeights(1u, (__int64)&v142, (__int64)&v125);
                    else
                      KeSetSchedulingGroupCpuRates(1LL, &v142, &v125);
                  }
                  v143 = *(_QWORD *)(*((_QWORD *)DeferredContext + 126) + 40LL);
                }
                else
                {
                  HIDWORD(v125) |= 3u;
                  LODWORD(v125) = 655370000;
                  *(_DWORD *)(*((_QWORD *)DeferredContext + 126) + 40LL) |= 0x40u;
                  *(_DWORD *)(*((_QWORD *)DeferredContext + 126) + 44LL) = v125;
                  v59 = DeferredContext;
                  v142 = *((_QWORD *)DeferredContext + 126) + 128LL;
                  v123[0] = (*(_BYTE *)(v142 + 4) & 4) != 0;
                  v59[128] += KeQuerySchedulingGroupReadyTime(v142);
                  KeSetSchedulingGroupCpuRates(1LL, &v142, &v125);
                  HIDWORD(v143) = v125;
                  if ( v123[0] )
                  {
                    v123[0] = 0;
                    PspEnumProcessesInJobHierarchy(DeferredContext, PspSetProcessCacheIsolationCallback, v123, 1LL);
                  }
                }
                v12 = 0;
                if ( (PerfGlobalGroupMask & 0x80000) != 0 )
                  EtwTraceJobSetQuery((_DWORD)DeferredContext, 15, (unsigned int)&v143, 0, 0, 1829);
LABEL_207:
                v52 = Thread;
                v49 = DeferredContext;
                goto LABEL_208;
              }
            }
            else if ( (v57 & 0x20) == 0 )
            {
              v12 = -1073741811;
              goto LABEL_207;
            }
            RateControl = 0LL;
            goto LABEL_190;
          }
LABEL_282:
          v130 = 0LL;
          P = 0LL;
          v74 = 16;
          if ( (_DWORD)v5 != 14 )
            v74 = 2;
          LODWORD(v128) = v74;
          v75 = (unsigned int)Size / v74;
          if ( (unsigned int)Size % v74 )
          {
            v12 = -1073741820;
            goto LABEL_33;
          }
          v135 = (unsigned int)Size / v74;
          KeInitializeAffinityEx(v177);
          v92 = KeQueryActiveGroupCount() - 1;
          LOWORD(Size) = v92;
          while ( v75 )
          {
            if ( (_DWORD)v5 == 14 )
            {
              v93 = *v9;
              v170 = v93;
              epi16 = _mm_extract_epi16(v93, 4);
              v170.m128i_i16[4] = epi16;
              v127 = epi16;
              v145 = v93.m128i_i64[0];
            }
            else
            {
              v127 = v9->m128i_i16[0];
              v145 = qword_140572748[v127];
              epi16 = v127;
            }
            v95 = qword_140572748[epi16];
            v152 = v95;
            if ( v127 > v92 || *((_QWORD *)v177 + epi16 + 1) || v145 != (v95 & v145) )
            {
              v12 = -1073741811;
              v121 = -1073741811;
              break;
            }
            KeAddGroupAffinityEx((unsigned __int16 *)v177, v127, v145);
            v75 = --v135;
            v9 = (__m128i *)((char *)Src + (unsigned int)v128);
            Src = v9;
            v12 = v121;
            v92 = Size;
          }
          v96 = AccessMode;
          if ( v12 < 0 )
            goto LABEL_33;
          if ( *((_QWORD *)DeferredContext + 54) )
            goto LABEL_387;
          PoolWithTag = (struct _SECURITY_SUBJECT_CONTEXT *)ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x614A7350u);
          v130 = PoolWithTag;
          if ( PoolWithTag )
          {
            CurrentProcess = PsGetCurrentProcess();
            P = (PVOID)PsChargeSharedPoolQuota(CurrentProcess, 0x28uLL, 0LL);
            if ( P )
            {
LABEL_387:
              SeCaptureSubjectContextEx(Thread, Thread->ApcState.Process, (PSECURITY_SUBJECT_CONTEXT)&SubjectContext[8]);
              v99 = (struct _SECURITY_SUBJECT_CONTEXT *)&SubjectContext[8];
              if ( v96 )
              {
                RequiredPrivileges.PrivilegeCount = 1;
                RequiredPrivileges.Control = 1;
                RequiredPrivileges.Privilege[0].Luid = SeDebugPrivilege;
                RequiredPrivileges.Privilege[0].Attributes = 0;
                v100 = SePrivilegeCheck(&RequiredPrivileges, (PSECURITY_SUBJECT_CONTEXT)&SubjectContext[8], 1);
                *(_DWORD *)SubjectContext ^= (*(_DWORD *)SubjectContext ^ v100) & 1;
              }
              else
              {
                *(_DWORD *)SubjectContext |= 1u;
              }
              PspLockJobExclusive((__int64)DeferredContext, 0LL);
              v12 = PspEnumProcessesInJobHierarchy(DeferredContext, PspSetAffinityLimitCallback, SubjectContext, 1LL);
              v121 = v12;
              v101 = (char *)P;
              if ( v12 >= 0 )
              {
                v102 = DeferredContext;
                v103 = *((_QWORD *)DeferredContext + 54);
                if ( v103 )
                {
                  v164[0] = *(_OWORD *)(v103 + 8);
                  v164[1] = *(_OWORD *)(v103 + 24);
                  v99 = (struct _SECURITY_SUBJECT_CONTEXT *)v164;
                }
                else
                {
                  *((_QWORD *)DeferredContext + 54) = v130;
                  *((_QWORD *)DeferredContext + 55) = v101;
                  v130 = 0LL;
                  v99 = 0LL;
                  v102 = DeferredContext;
                }
                v104 = v102[54];
                *(_OWORD *)v104 = *(_OWORD *)SubjectContext;
                *(_OWORD *)(v104 + 16) = *(_OWORD *)&SubjectContext[16];
                *(_QWORD *)(v104 + 32) = *(_QWORD *)&SubjectContext[32];
                v138 = (__int64)DeferredContext;
                HIDWORD(v139) = *((_DWORD *)DeferredContext + 64);
                LODWORD(v139) = -17;
                v105 = (char *)DeferredContext + 264;
                *(_OWORD *)((char *)DeferredContext + 264) = v177[0];
                v105[1] = v177[1];
                v105[2] = v177[2];
                v105[3] = v177[3];
                v105[4] = v177[4];
                v105[5] = v177[5];
                v105[6] = v177[6];
                v105 += 8;
                *(v105 - 1) = v177[7];
                *v105 = v177[8];
                v105[1] = v177[9];
                *((_QWORD *)v105 + 4) = *(_QWORD *)&v177[10];
                if ( (_DWORD)v5 == 14 && (unsigned int)KeIsEmptyAffinityEx((_WORD *)DeferredContext + 132) )
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
                  (__int64)&v138,
                  5);
                v12 = v121;
              }
              PspUnlockJob((__int64)DeferredContext, 0LL);
              if ( v99 )
                SeReleaseSubjectContext(v99);
              if ( !v130 )
                goto LABEL_33;
              ExFreePoolWithTag(v130, 0x614A7350u);
              v90 = v101;
              goto LABEL_403;
            }
            v55 = PoolWithTag;
            goto LABEL_326;
          }
LABEL_328:
          v12 = -1073741670;
          goto LABEL_33;
        }
        if ( (_DWORD)v5 != 12 )
        {
          if ( (_DWORD)v5 == 2 )
          {
LABEL_113:
            v130 = (PSECURITY_SUBJECT_CONTEXT)(unsigned int)Size;
            memmove(v174, v9, (unsigned int)Size);
            v39 = Size;
            if ( (unsigned int)Size < 0x98 )
              memset((char *)v174 + (_QWORD)v130, 0, 152LL - (_QWORD)v130);
            JobLimitInformationValidFlags = PspGetJobLimitInformationValidFlags((unsigned int)v5, v39);
            v120 = ~JobLimitInformationValidFlags;
            if ( (v174[2] & ~JobLimitInformationValidFlags) != 0 )
              goto LABEL_417;
            LODWORD(v176[39]) = v174[2];
            P = 0LL;
            v128 = 0LL;
            v130 = 0LL;
            HIDWORD(v176[39]) = (v174[2] & 8) != 0 ? LODWORD(v174[5]) : 0;
            if ( (v174[2] & 0x20) != 0 )
            {
              if ( LODWORD(v174[7]) > 6 )
                goto LABEL_417;
              v41 = AccessMode;
              if ( (unsigned int)(LODWORD(v174[7]) - 3) <= 1 )
              {
                LOBYTE(v40) = AccessMode;
                v77 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))SeCheckPrivilegedObject)(
                        SeIncreaseBasePriorityPrivilege,
                        v144,
                        2LL,
                        v40) & 1;
                v13 = 4 * v77;
                v119 = 4 * v77;
                if ( !v77 )
                  goto LABEL_413;
              }
              BYTE1(v176[116]) = v174[7];
            }
            else
            {
              BYTE1(v176[116]) = 0;
              v41 = AccessMode;
            }
            if ( SLOBYTE(v176[39]) < 0 )
            {
              v78 = HIDWORD(v174[7]);
              if ( HIDWORD(v174[7]) >= 0xA )
                goto LABEL_417;
              if ( HIDWORD(v174[7]) > 5 )
              {
                LOBYTE(v40) = v41;
                v13 ^= (v13 ^ (4
                             * ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))SeCheckPrivilegedObject)(
                                 SeIncreaseBasePriorityPrivilege,
                                 v144,
                                 2LL,
                                 v40))) & 4;
                v119 = v13;
                if ( (v13 & 4) == 0 )
                  goto LABEL_413;
                v78 = HIDWORD(v174[7]);
              }
              HIDWORD(v176[67]) = v78;
            }
            else
            {
              HIDWORD(v176[67]) = 5;
            }
            if ( (v176[39] & 2) != 0 )
            {
              if ( !v174[0] )
                goto LABEL_417;
              v176[35] = v174[0];
            }
            else
            {
              v176[35] = 0LL;
            }
            if ( (v176[39] & 4) != 0 )
            {
              if ( !v174[1] )
                goto LABEL_417;
              v176[36] = v174[1];
            }
            if ( (v176[39] & 1) == 0 )
            {
              v176[37] = 0LL;
              v176[38] = 0LL;
              goto LABEL_125;
            }
            v79 = v174[3];
            if ( !v174[3] && !v174[4] || v174[3] == -1LL && v174[4] == -1LL || v174[3] > v174[4] || v174[3] < 0x14000uLL )
              goto LABEL_417;
            if ( v174[3] <= (unsigned __int64)PspMinimumWorkingSet )
            {
LABEL_316:
              v176[37] = v79;
              v176[38] = v174[4];
LABEL_125:
              if ( (v176[39] & 0x100) != 0 )
              {
                if ( v174[14] < 0x1000uLL )
                  goto LABEL_417;
                v176[79] = v174[14] >> 12;
              }
              else
              {
                v176[79] = 0LL;
              }
              if ( (v176[39] & 0x200) != 0 )
              {
                if ( v174[15] < 0x1000uLL )
                  goto LABEL_417;
                v176[80] = v174[15] >> 12;
              }
              else
              {
                v176[80] = 0LL;
              }
              if ( (v176[39] & 0x200000) != 0 )
              {
                if ( v174[18] < 0x1000uLL )
                  goto LABEL_417;
                v176[81] = v174[18] >> 12;
              }
              else
              {
                v176[81] = 0LL;
              }
              KeInitializeAffinityEx(&v176[40]);
              if ( (v176[39] & 0x10) != 0 )
              {
                if ( (*((_DWORD *)DeferredContext + 326) & 2) != 0 || !v174[6] )
                  goto LABEL_417;
                if ( !*((_QWORD *)DeferredContext + 54) )
                {
                  v80 = (struct _SECURITY_SUBJECT_CONTEXT *)ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x614A7350u);
                  P = v80;
                  if ( !v80 )
                    goto LABEL_328;
                  v81 = PsGetCurrentProcess();
                  v128 = PsChargeSharedPoolQuota(v81, 0x28uLL, 0LL);
                  if ( !v128 )
                  {
                    v55 = v80;
LABEL_326:
                    v82 = 1632269136;
LABEL_327:
                    ExFreePoolWithTag(v55, v82);
                    goto LABEL_328;
                  }
                }
                SeCaptureSubjectContextEx(
                  Thread,
                  Thread->ApcState.Process,
                  (PSECURITY_SUBJECT_CONTEXT)&SubjectContext[8]);
                v130 = (PSECURITY_SUBJECT_CONTEXT)&SubjectContext[8];
                if ( AccessMode )
                {
                  RequiredPrivileges.PrivilegeCount = 1;
                  RequiredPrivileges.Control = 1;
                  RequiredPrivileges.Privilege[0].Luid = SeDebugPrivilege;
                  RequiredPrivileges.Privilege[0].Attributes = 0;
                  v83 = SePrivilegeCheck(&RequiredPrivileges, (PSECURITY_SUBJECT_CONTEXT)&SubjectContext[8], 1);
                  *(_DWORD *)SubjectContext ^= (*(_DWORD *)SubjectContext ^ v83) & 1;
                }
                else
                {
                  *(_DWORD *)SubjectContext |= 1u;
                }
                v13 |= 2u;
                v119 = v13;
              }
              PspLockJobExclusive((__int64)DeferredContext, 0LL);
              v42 = v176[39];
              if ( (v176[39] & 4) == 0 )
              {
                if ( (v176[39] & 0x40) != 0 )
                {
                  v42 = *((_DWORD *)DeferredContext + 64) & 4 | LODWORD(v176[39]);
                  LODWORD(v176[39]) = v42;
                  v176[36] = *((_QWORD *)DeferredContext + 29);
                }
                else
                {
                  v176[36] = 0LL;
                }
              }
              v43 = v42 & 0xFFFFFFBF;
              LODWORD(v176[39]) = v43;
              v44 = (v13 & 2) != 0;
              if ( (v13 & 2) != 0 )
              {
                if ( (*((_DWORD *)DeferredContext + 326) & 2) != 0 )
                {
                  v12 = -1073741811;
                  v121 = -1073741811;
                }
                else
                {
                  if ( (*((_DWORD *)DeferredContext + 64) & 0x10) != 0 )
                  {
                    KeFirstGroupAffinityEx(&v170, (_WORD *)DeferredContext + 132);
                    Group = v170.m128i_u16[4];
                  }
                  else
                  {
                    Group = KeGetCurrentPrcb()->Group;
                    v170.m128i_i16[4] = Group;
                  }
                  v170.m128i_i64[0] = v174[6];
                  v152 = qword_140572748[Group];
                  if ( v174[6] == (v152 & v174[6]) )
                  {
                    KeAddGroupAffinityEx((unsigned __int16 *)&v176[40], v170.m128i_u16[4], v174[6]);
                    v12 = PspEnumProcessesInJobHierarchy(
                            DeferredContext,
                            PspSetAffinityLimitCallback,
                            SubjectContext,
                            1LL);
                    v121 = v12;
                    if ( v12 >= 0 )
                    {
                      v85 = DeferredContext;
                      v86 = *((_QWORD *)DeferredContext + 54);
                      v45 = (char *)v128;
                      if ( v86 )
                      {
                        v164[0] = *(_OWORD *)(v86 + 8);
                        v164[1] = *(_OWORD *)(v86 + 24);
                        v130 = (PSECURITY_SUBJECT_CONTEXT)v164;
                      }
                      else
                      {
                        *((_QWORD *)DeferredContext + 54) = P;
                        *((_QWORD *)DeferredContext + 55) = v45;
                        P = 0LL;
                        v130 = 0LL;
                        v85 = DeferredContext;
                      }
                      v87 = v85[54];
                      *(_OWORD *)v87 = *(_OWORD *)SubjectContext;
                      *(_OWORD *)(v87 + 16) = *(_OWORD *)&SubjectContext[16];
                      *(_QWORD *)(v87 + 32) = *(_QWORD *)&SubjectContext[32];
                      v13 = v119;
                      LOBYTE(v43) = v176[39];
                      goto LABEL_138;
                    }
                  }
                  else
                  {
                    v12 = -1073741811;
                    v121 = -1073741811;
                  }
                  v13 = v119;
                }
                v45 = (char *)v128;
              }
              else
              {
                if ( (v43 & 0x4000) == 0 )
                {
                  v45 = (char *)v128;
                  goto LABEL_138;
                }
                v45 = (char *)v128;
                if ( (*((_DWORD *)DeferredContext + 326) & 2) != 0 )
                {
LABEL_138:
                  if ( (*((_DWORD *)DeferredContext + 64) & 1) != 0 && (v43 & 1) == 0 )
                    PspLockUnlockWorkingSetChangeExclusiveUnsafe();
                  v138 = (__int64)DeferredContext;
                  HIDWORD(v139) = *((_DWORD *)DeferredContext + 64);
                  *((_QWORD *)DeferredContext + 30) = v176[37];
                  *((_QWORD *)DeferredContext + 31) = v176[38];
                  *((_DWORD *)DeferredContext + 65) = HIDWORD(v176[39]);
                  if ( v44 )
                  {
                    v88 = (char *)DeferredContext + 264;
                    *(_OWORD *)((char *)DeferredContext + 264) = *(_OWORD *)&v176[40];
                    v88[1] = *(_OWORD *)&v176[42];
                    v88[2] = *(_OWORD *)&v176[44];
                    v88[3] = *(_OWORD *)&v176[46];
                    v88[4] = *(_OWORD *)&v176[48];
                    v88[5] = *(_OWORD *)&v176[50];
                    v88[6] = *(_OWORD *)&v176[52];
                    v88 += 8;
                    *(v88 - 1) = *(_OWORD *)&v176[54];
                    *v88 = *(_OWORD *)&v176[56];
                    v88[1] = *(_OWORD *)&v176[58];
                    *((_QWORD *)v88 + 4) = v176[60];
                  }
                  *((_BYTE *)DeferredContext + 873) = BYTE1(v176[116]);
                  *((_DWORD *)DeferredContext + 121) = HIDWORD(v176[67]);
                  *((_QWORD *)DeferredContext + 28) = v176[35];
                  *((_QWORD *)DeferredContext + 29) = v176[36];
                  if ( (_DWORD)v5 == 9 )
                  {
                    PspLockJobMemoryLimitsExclusive(DeferredContext, 0LL, 0LL);
                    *((_DWORD *)DeferredContext + 64) = LODWORD(v176[39]) | v120 & *((_DWORD *)DeferredContext + 64);
                    *((_QWORD *)DeferredContext + 72) = v176[79];
                    *((_QWORD *)DeferredContext + 73) = v176[80];
                    *((_QWORD *)DeferredContext + 74) = v176[81];
                    PspUnlockJobMemoryLimitsExclusive(DeferredContext, 0LL, 0LL);
                  }
                  else
                  {
                    *((_DWORD *)DeferredContext + 64) = LODWORD(v176[39]) | v120 & *((_DWORD *)DeferredContext + 64);
                  }
                  v46 = DeferredContext;
                  LODWORD(v139) = ~(HIDWORD(v139) | *((_DWORD *)DeferredContext + 64));
                  if ( (v174[2] & 4) != 0 )
                  {
                    PspEnumProcessesInJobHierarchy(
                      DeferredContext,
                      PspSetJobTimeLimitCallback,
                      (char *)DeferredContext + 232,
                      1LL);
                    *((_QWORD *)DeferredContext + 23) = 0LL;
                    *((_QWORD *)DeferredContext + 24) = 0LL;
                    KeClearEvent((PRKEVENT)DeferredContext);
                    v46 = DeferredContext;
                  }
                  if ( (v46[64] & 6) != 0 )
                  {
                    LOBYTE(v46) = 1;
                    PspUpdateEnforcementTimer(v46);
                    v46 = DeferredContext;
                  }
                  if ( (v139 & 1) == 0 )
                  {
                    v13 |= 1u;
                    v119 = v13;
                  }
                  PspEnumJobsAndProcessesInJobHierarchy(
                    v46,
                    (int)PspSetJobLimitsJobPreCallback,
                    (int)PspSetJobLimitsJobPostCallback,
                    (int)PspSetJobLimitsProcessCallback,
                    (__int64)&v138,
                    5);
                  goto LABEL_150;
                }
                v12 = -1073741811;
                v121 = -1073741811;
              }
LABEL_150:
              v47 = v13 & 1;
              if ( v47 )
              {
                PspLockWorkingSetChangeExclusiveUnsafe();
                _InterlockedOr((volatile signed __int32 *)DeferredContext + 326, 0x100u);
                for ( i = (_QWORD *)*((_QWORD *)DeferredContext + 5);
                      i != (_QWORD *)((char *)DeferredContext + 40);
                      i = (_QWORD *)*i )
                {
                  if ( (*(_DWORD *)(i - 45) & 1) == 0 )
                    PspAddProcessToWorkingSetChangeList(i - 142);
                }
                v12 = v121;
              }
              PspUnlockJob((__int64)DeferredContext, 0LL);
              if ( v47 )
                PspApplyWorkingSetLimits(DeferredContext, &PspWorkingSetChangeHead);
              if ( v130 )
                SeReleaseSubjectContext(v130);
              if ( !P )
                goto LABEL_33;
              ExFreePoolWithTag(P, 0x614A7350u);
              v90 = v45;
LABEL_403:
              PsReturnSharedPoolQuota(v90, 0x28uLL, 0LL);
              goto LABEL_33;
            }
            if ( SeSinglePrivilegeCheck(SeIncreaseBasePriorityPrivilege, v41) )
            {
              v79 = v174[3];
              goto LABEL_316;
            }
LABEL_413:
            v12 = -1073741727;
            goto LABEL_33;
          }
          if ( (_DWORD)v5 != 4 )
          {
            if ( (_DWORD)v5 == 5 )
            {
              v168[0] = *v9;
              v168[1] = v9[1];
              *(_QWORD *)&v168[2] = v9[2].m128i_i64[0];
              v12 = (v168[0] & 0xFFFFFFF0) != 0 ? -1073741811 : -1073741637;
              goto LABEL_33;
            }
            if ( (_DWORD)v5 != 6 )
            {
              if ( (_DWORD)v5 == 7 )
              {
                MiniCompletionPacket = 0LL;
                *(__m128i *)Handle = *v9;
                if ( Handle[1] )
                {
                  v12 = ObReferenceObjectByHandleWithTag(
                          Handle[1],
                          2u,
                          IoCompletionObjectType,
                          AccessMode,
                          0x624A7350u,
                          &Object,
                          0LL);
                  if ( v12 >= 0 )
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
                        v12 = -1073741811;
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
                          PspEnumProcessesInJobHierarchy(
                            DeferredContext,
                            PspAssociateCompletionPortCallback,
                            DeferredContext,
                            1LL);
                          v17 = DeferredContext;
                        }
                        PspUnlockJob((__int64)v17, 0LL);
                      }
                    }
                    else
                    {
                      v12 = -1073741670;
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
                goto LABEL_33;
              }
              if ( (_DWORD)v5 != 9 )
              {
                if ( (_DWORD)v5 != 11 )
                  goto LABEL_443;
                goto LABEL_282;
              }
              goto LABEL_113;
            }
            v147 = v9->m128i_i32[0];
            v76 = v147;
            if ( v147 > 1 )
              goto LABEL_417;
            PspLockJobExclusive((__int64)DeferredContext, 0LL);
            *((_DWORD *)DeferredContext + 113) = v76;
LABEL_162:
            v49 = DeferredContext;
LABEL_163:
            v52 = 0LL;
LABEL_164:
            PspUnlockJob((__int64)v49, (__int64)v52);
            goto LABEL_33;
          }
          v148 = v9->m128i_i32[0];
          v69 = v148;
          if ( (v148 & 0xFFFFFF00) != 0 )
            goto LABEL_417;
          PspLockJobChain((__int64)DeferredContext, (__int64)Thread, 0);
          if ( (unsigned __int8)PspDoesJobHierarchyPermitUILimits((__int64)DeferredContext) )
          {
            if ( *((_DWORD *)DeferredContext + 120) != -2 )
            {
              v70 = PsGetCurrentProcess();
              PspBindProcessSessionToJob(DeferredContext, v70);
              v149 = *((_DWORD *)DeferredContext + 120);
              v71 = 8;
              if ( !PspIsValidJobSessionId(v149) )
                goto LABEL_268;
              if ( v69 == *((_DWORD *)DeferredContext + 112) )
                goto LABEL_268;
              v158 = 0LL;
              v159 = 0LL;
              v160 = 0LL;
              PspUnlockJobChain((__int64)DeferredContext, (__int64)Thread, 1);
              v158 = DeferredContext;
              LODWORD(v159) = 0;
              LODWORD(v72) = PtrToUlong((const void *)v69);
              v160 = v72;
              v12 = PsInvokeWin32Callout(6, (__int64)&v158, 1, (__int64)&v149);
              v121 = v12;
              v71 = 0;
              v73 = 0;
              if ( v12 >= 0 )
              {
LABEL_268:
                *((_DWORD *)DeferredContext + 112) = v69;
                _InterlockedOr((volatile signed __int32 *)DeferredContext + 326, 0x10u);
                v73 = v71;
                v12 = v121;
              }
LABEL_269:
              v52 = Thread;
              v49 = DeferredContext;
              if ( (unsigned __int8)v73 < 8u )
                goto LABEL_164;
LABEL_208:
              PspUnlockJobChain((__int64)v49, (__int64)v52, 0);
              goto LABEL_33;
            }
            v12 = -1073741790;
          }
          else
          {
            v12 = -1073741637;
          }
          v73 = 8;
          goto LABEL_269;
        }
LABEL_64:
        if ( (_DWORD)Size == 56 )
        {
          *(__m128i *)v175 = *v9;
          *(__m128i *)&v175[16] = v9[1];
          *(__m128i *)&v175[32] = v9[2];
          *(_QWORD *)&v175[48] = v9[3].m128i_i64[0];
          PspConvertJobNotificationLimitFromV2(v175, v173);
          v20 = 2589188;
        }
        else if ( (_DWORD)Size == 48 )
        {
          *(__m128i *)v176 = *v9;
          *(__m128i *)&v176[2] = v9[1];
          *(__m128i *)&v176[4] = v9[2];
          PspConvertJobNotificationLimitFromV1(v176, v173);
          v20 = 459268;
        }
        else
        {
          memmove(v173, v9, (unsigned int)Size);
          v20 = 2064900;
        }
        JobLimitInformationValidFlags = v20;
        if ( (~v20 & v173[5]) != 0 )
          goto LABEL_417;
        if ( (v173[5] & 0x8000) != 0 )
        {
          v21 = v173[6];
          if ( v173[6] < 0x1000uLL )
            goto LABEL_417;
        }
        else
        {
          v21 = 0LL;
          v173[6] = 0LL;
        }
        if ( (v173[5] & 0x200) != 0 )
        {
          if ( v173[3] < 0x1000uLL || v173[3] < v21 )
            goto LABEL_417;
        }
        else
        {
          v173[3] = 0LL;
        }
        if ( (v173[5] & 4) != 0 )
        {
          if ( !v173[2] )
            goto LABEL_417;
        }
        else
        {
          v173[2] = 0LL;
        }
        if ( (v173[5] & 0x10000) != 0 )
        {
          if ( !v173[0] )
            goto LABEL_417;
        }
        else
        {
          v173[0] = 0LL;
        }
        if ( (v173[5] & 0x20000) != 0 )
        {
          if ( !v173[1] )
            goto LABEL_417;
        }
        else
        {
          v173[1] = 0LL;
        }
        for ( j = 0; j < 3; ++j )
        {
          v23 = (int *)PspNotificationLimitRateControlToleranceField(v173, (unsigned int)j, v19);
          v24 = (int *)PspNotificationLimitRateControlToleranceIntervalField(v173);
          if ( ((unsigned int)PspRateControlLimitFlag(j) & v173[5]) != 0 )
          {
            if ( !*v23 || *v23 > 3 || !*v24 || *v24 > 3 )
              goto LABEL_417;
          }
          else
          {
            *v23 = 0;
            *v24 = 0;
          }
        }
        v25 = DeferredContext;
        if ( *((_QWORD *)DeferredContext + 123) )
        {
          v26 = 0LL;
          v27 = 0LL;
        }
        else
        {
          v26 = (struct _SECURITY_SUBJECT_CONTEXT *)ExAllocatePoolWithTag(PagedPool, 0x88uLL, 0x624A7350u);
          if ( !v26 )
            goto LABEL_328;
          v54 = PsGetCurrentProcess();
          v27 = (char *)PsChargeSharedPoolQuota(v54, 0x88uLL, 0LL);
          v55 = v26;
          if ( !v27 )
          {
            v82 = 1649046352;
            goto LABEL_327;
          }
          memset(v26, 0, 0x88uLL);
          v25 = DeferredContext;
        }
        PspLockJobExclusive((__int64)v25, 0LL);
        if ( *((_QWORD *)DeferredContext + 123) )
        {
          if ( v26 )
          {
            ExFreePoolWithTag(v26, 0x624A7350u);
            PsReturnSharedPoolQuota(v27, 0x88uLL, 0LL);
          }
        }
        else
        {
          *((_QWORD *)DeferredContext + 123) = v26;
          *((_QWORD *)DeferredContext + 124) = v27;
        }
        v29 = *((_QWORD *)DeferredContext + 123);
        LODWORD(v128) = *(_DWORD *)v29;
        *(_QWORD *)(v29 + 8) = v173[0];
        *(_QWORD *)(v29 + 16) = v173[1];
        *(_QWORD *)(v29 + 24) = v173[2];
        v30 = 0;
        v31 = (_DWORD *)(v29 + 60);
        while ( v30 < 3 )
        {
          v32 = (_DWORD *)PspNotificationLimitRateControlToleranceField(v173, (unsigned int)v30, v28);
          v33 = (_DWORD *)PspNotificationLimitRateControlToleranceIntervalField(v173);
          *(v31 - 3) = *v32;
          *v31 = *v33;
          ++v30;
          ++v31;
        }
        PspLockJobMemoryLimitsExclusive(DeferredContext, 0LL, 0LL);
        *(_QWORD *)(v29 + 32) = v173[6] >> 12;
        *(_QWORD *)(v29 + 40) = v173[3] >> 12;
        **((_DWORD **)DeferredContext + 123) = v173[5];
        PspUnlockJobMemoryLimitsExclusive(DeferredContext, 0LL, 0LL);
        v36 = DeferredContext;
        if ( (**((_DWORD **)DeferredContext + 123) & 0xFFFF7DFF) != 0 )
        {
          LOBYTE(v35) = 1;
          PspUpdateEnforcementTimer(v35);
          v36 = DeferredContext;
        }
        if ( (_DWORD)v128 )
        {
          v37 = (_DWORD *)v36[123];
          if ( *v37 )
          {
LABEL_102:
            if ( (PerfGlobalGroupMask & 0x80000) != 0 )
            {
              EtwTraceJobSetQuery((_DWORD)v36, v5, (unsigned int)v173, 0, 0, 1829);
              v36 = DeferredContext;
            }
            PspUnlockJob((__int64)v36, 0LL);
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
            goto LABEL_32;
          }
        }
        else
        {
          v37 = (_DWORD *)v36[123];
          if ( !*v37 )
            goto LABEL_102;
        }
        PspEnumJobsAndProcessesInJobHierarchy(v36, (int)PspSetJobNotificationCountCallback, 0, 0, (__int64)v37, 5);
        v36 = DeferredContext;
        goto LABEL_102;
      }
      v48 = v9->m128i_i64[0];
      v165 = v9->m128i_i64[0];
      PspLockJobExclusive((__int64)DeferredContext, 0LL);
      v49 = DeferredContext;
      if ( (*((_DWORD *)DeferredContext + 326) & 0x20) == 0 )
      {
        v12 = -1073741811;
        goto LABEL_163;
      }
      v50 = *((_QWORD *)DeferredContext + 126);
      v51 = *(_DWORD *)(v50 + 40);
      if ( (v51 & 0x10) == 0 )
      {
        *(_DWORD *)(v50 + 40) = v51 | 0x10;
        KeInitializeDpc((PRKDPC)(v50 + 48), (PKDEFERRED_ROUTINE)PspJobCycleTimeNotificationDpcRoutine, DeferredContext);
      }
      KeSetSchedulingGroupCycleNotification(v50 + 128, v50 + 48, v48);
LABEL_161:
      v12 = 0;
      goto LABEL_162;
    }
    if ( (int)v5 > 40 )
    {
      if ( (_DWORD)v5 == 41 )
      {
        v115 = v9->m128i_i32[0];
        v162 = v9->m128i_i32[0];
        if ( !PspJobIsAppSilo((__int64)DeferredContext) || v115 != 2 )
          goto LABEL_417;
        PspLockJobExclusive((__int64)DeferredContext, 0LL);
        v49 = DeferredContext;
        if ( *((_DWORD *)DeferredContext + 302) )
        {
          v12 = -1073740529;
          goto LABEL_163;
        }
        v116 = _interlockedbittestandset((volatile signed __int32 *)DeferredContext + 326, 0x1Du);
        v49 = DeferredContext;
        if ( v116 )
        {
          v12 = 255;
          goto LABEL_163;
        }
        PspBeginSiloTeardown(DeferredContext);
        goto LABEL_161;
      }
      if ( (_DWORD)v5 == 42 )
      {
        v168[3] = *v9;
        v168[4] = v9[1];
        v168[5] = v9[2];
        v168[6] = v9[3];
        *(_QWORD *)&v168[7] = v9[4].m128i_i64[0];
        if ( (v168[3] & 0xFFFFFFFC) != 0 || (v168[3] & 3) == 0 )
        {
          v12 = -1073741811;
        }
        else
        {
          v13 = 8;
          v53 = Thread;
          PspLockRootJobExclusive(DeferredContext, Thread, &v137);
          PspLockJobConditionally((__int64)DeferredContext, &v137);
          v12 = PspSetJobIoAttribution(DeferredContext);
          if ( v12 >= 0 )
          {
            PspUnlockJobConditionally((__int64)DeferredContext, &v137);
            PspUnlockJob((__int64)v137, (__int64)v53);
            v13 = 0;
          }
        }
        if ( (v13 & 8) == 0 )
          goto LABEL_33;
        PspUnlockJobConditionally((__int64)DeferredContext, &v137);
        v52 = Thread;
        v49 = v137;
        goto LABEL_164;
      }
      if ( (_DWORD)v5 != 43 )
      {
        if ( (_DWORD)v5 == 44 )
        {
          PspLockJobExclusive((__int64)DeferredContext, 0LL);
          if ( *((int *)DeferredContext + 326) < 0 )
          {
            v12 = -1073741791;
            v49 = DeferredContext;
            goto LABEL_163;
          }
          *(__m128i *)((char *)DeferredContext + 1240) = *v9;
          _InterlockedOr((volatile signed __int32 *)DeferredContext + 326, 0x80000000);
LABEL_31:
          PspUnlockJob((__int64)DeferredContext, 0LL);
          goto LABEL_32;
        }
        if ( (_DWORD)v5 != 45 )
        {
          if ( (_DWORD)v5 == 46 )
          {
            v153 = v9->m128i_i64[0];
            v18 = PspSetEnergyTrackingStateJobTree(DeferredContext, (__int64)&v153);
            goto LABEL_62;
          }
          if ( (_DWORD)v5 != 47 )
            goto LABEL_443;
          v133 = v9->m128i_i8[0];
          if ( v133 != 1 )
            goto LABEL_417;
          if ( SeSinglePrivilegeCheck(SeTcbPrivilege, AccessMode) )
          {
            if ( PspJobIsSilo((__int64)DeferredContext) )
            {
              v12 = (unsigned __int8)PspSetJobSiloThreadImpersonationPolicy(DeferredContext, 2LL) == 0 ? 0xC0000022 : 0;
              goto LABEL_33;
            }
            goto LABEL_417;
          }
          goto LABEL_413;
        }
        if ( PspJobIsSilo((__int64)DeferredContext) )
        {
          v154 = 0LL;
          *(__m128i *)v140 = *v9;
          v110 = _mm_srli_si128(*(__m128i *)v140, 8).m128i_u64[0];
          if ( !v110
            || (v111 = (unsigned __int16)v140[0], (unsigned __int16)(LOWORD(v140[0]) - 1) > 0x206u)
            || ((__int64)v140[0] & 1) != 0 )
          {
            v12 = -1073741811;
            v121 = -1073741811;
            goto LABEL_33;
          }
          if ( AccessMode == 1 )
          {
            if ( (v110 & 1) != 0 )
              ExRaiseDatatypeMisalignment();
            v112 = v110 + LOWORD(v140[0]);
            if ( v112 > 0x7FFFFFFF0000LL || v112 < v110 )
            {
              MEMORY[0x7FFFFFFF0000] = 0;
              v111 = (unsigned __int16)v140[0];
            }
          }
          v113 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v111, 0x72537350u);
          v68 = v113;
          v154 = v113;
          if ( !v113 )
          {
            v12 = -1073741670;
            v121 = -1073741670;
            goto LABEL_33;
          }
          memmove(v113, v140[1], LOWORD(v140[0]));
          v114 = wcsnlen(v68, (unsigned __int64)LOWORD(v140[0]) >> 1);
          if ( v114 == (unsigned __int64)LOWORD(v140[0]) >> 1 )
          {
            v140[1] = v68;
            v12 = PspAssignSiloSystemRootPath(DeferredContext, v140);
          }
          else
          {
            v12 = -1073741811;
          }
          if ( !v68 )
            goto LABEL_33;
          v107 = 1918071632;
          goto LABEL_432;
        }
LABEL_414:
        v12 = -1073740535;
        goto LABEL_33;
      }
      v167 = v9->m128i_i64[0];
      Silo = PspSetJobMemoryPartition(DeferredContext);
LABEL_430:
      v12 = Silo;
      goto LABEL_33;
    }
    switch ( (_DWORD)v5 )
    {
      case 0x28:
        v108 = AccessMode;
        if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, AccessMode) )
          goto LABEL_413;
        if ( !PspJobIsSilo((__int64)DeferredContext) )
          goto LABEL_414;
        if ( !(unsigned __int8)PspSetJobSiloThreadImpersonationPolicy(DeferredContext, 4LL) )
          goto LABEL_417;
        v166 = v9->m128i_i64[0];
        LOBYTE(v109) = v108;
        Silo = PspConvertSiloToServerSilo(DeferredContext, v109);
        goto LABEL_430;
      case 0x19:
        PspLockJobExclusive((__int64)DeferredContext, 0LL);
        KeClearEvent((PRKEVENT)DeferredContext);
        goto LABEL_31;
      case 0x1B:
        PspLockJobMemoryLimitsExclusive(DeferredContext, 0LL, 0LL);
        *((_QWORD *)DeferredContext + 76) = 0LL;
        *((_QWORD *)DeferredContext + 75) = 0LL;
        PspUnlockJobMemoryLimitsExclusive(DeferredContext, 0LL, 0LL);
        goto LABEL_32;
    }
    if ( (_DWORD)v5 != 31 )
    {
      switch ( (_DWORD)v5 )
      {
        case ' ':
          Silo = PspSetNetRateControl(v9, (unsigned int)Size, DeferredContext);
          break;
        case '!':
          goto LABEL_64;
        case '#':
          Silo = PspCreateSilo(DeferredContext);
          break;
        case '%':
          if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, AccessMode) )
            goto LABEL_413;
          if ( !PspJobIsSilo((__int64)DeferredContext) )
            goto LABEL_414;
          if ( !(unsigned __int8)PspSetJobSiloThreadImpersonationPolicy(DeferredContext, 4LL) )
            goto LABEL_417;
          v163 = v9->m128i_i32[0];
          Silo = ObCreateSiloRootDirectory(DeferredContext);
          break;
        default:
          goto LABEL_443;
      }
      goto LABEL_430;
    }
    memmove(v169, v9, (unsigned int)Size);
    if ( v169[3] )
    {
      v64 = v169[5];
      v65 = PagedPool;
      if ( !LOWORD(v169[5]) )
        goto LABEL_254;
      if ( (v169[3] & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v66 = v169[3] + LOWORD(v169[5]);
      if ( v66 > 0x7FFFFFFF0000LL || v66 < v169[3] )
      {
        MEMORY[0x7FFFFFFF0000] = 0;
        v64 = v169[5];
      }
      if ( !v64 || (v64 & 1) != 0 )
      {
LABEL_254:
        v12 = -1073741811;
        v121 = -1073741811;
        goto LABEL_260;
      }
      v150 = 1;
      if ( AccessMode == 1 )
        v65 = 9;
      v150 = v65;
      PoolWithQuotaTag = ExAllocatePoolWithQuotaTag(v65, v64 + 2LL, 0x624A7350u);
      if ( !PoolWithQuotaTag )
      {
        v12 = -1073741801;
        v121 = -1073741801;
LABEL_260:
        v68 = (wchar_t *)PoolWithQuotaTag;
        if ( !PoolWithQuotaTag )
          goto LABEL_33;
        v107 = 0;
LABEL_432:
        ExFreePoolWithTag(v68, v107);
        goto LABEL_33;
      }
      v67 = PoolWithQuotaTag;
      memmove(PoolWithQuotaTag, (const void *)v169[3], LOWORD(v169[5]));
      v67[(unsigned __int64)LOWORD(v169[5]) >> 1] = 0;
      v169[3] = v67;
    }
    if ( (v169[4] & 0xFFFFFFF000000000uLL) != 0 )
    {
      v12 = -1073741811;
    }
    else if ( (v169[10] || v169[7] || v169[2]) && !(unsigned __int8)PspIsContextAdmin() )
    {
      v12 = -1073741790;
    }
    else
    {
      v12 = PspSetJobIoRateControl((volatile signed __int64 *)DeferredContext, (__int64)v169);
    }
    goto LABEL_260;
  }
  return result;
}
