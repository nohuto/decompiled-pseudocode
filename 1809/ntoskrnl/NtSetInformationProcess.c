/*
 * XREFs of NtSetInformationProcess @ 0x140672E00
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCbCopyA @ 0x140011EF8 (RtlStringCbCopyA.c)
 *     KeStackAttachProcess @ 0x140016610 (KeStackAttachProcess.c)
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14004D320 (ExAcquireRundownProtection_0.c)
 *     KeDelayExecutionThread @ 0x14004DA20 (KeDelayExecutionThread.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x140051600 (KeLeaveCriticalRegionThread.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x140068560 (PsReturnProcessNonPagedPoolQuota.c)
 *     PsChargeProcessNonPagedPoolQuota @ 0x140076C00 (PsChargeProcessNonPagedPoolQuota.c)
 *     MmGetSessionId @ 0x1400897A0 (MmGetSessionId.c)
 *     RtlInterlockedSetClearBits @ 0x14008F800 (RtlInterlockedSetClearBits.c)
 *     KeEnterCriticalRegionThread @ 0x14008FA60 (KeEnterCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     ExAllocatePoolWithQuotaTag @ 0x1400B75B0 (ExAllocatePoolWithQuotaTag.c)
 *     KeSetPriorityAndQuantumProcess @ 0x1400D6A04 (KeSetPriorityAndQuantumProcess.c)
 *     MmSetMemoryPriorityProcess @ 0x1400D7AA4 (MmSetMemoryPriorityProcess.c)
 *     PsSetPagePriorityThread @ 0x1400DEF80 (PsSetPagePriorityThread.c)
 *     PsSetIoPriorityThread @ 0x1400DEFD8 (PsSetIoPriorityThread.c)
 *     MmGetDefaultPagePriority @ 0x1400E221C (MmGetDefaultPagePriority.c)
 *     KeBoostPriorityThread @ 0x1400E3400 (KeBoostPriorityThread.c)
 *     KeUnstackDetachProcess @ 0x1400F1110 (KeUnstackDetachProcess.c)
 *     KeQueryGroupMaskProcess @ 0x1400F123C (KeQueryGroupMaskProcess.c)
 *     PsGetCurrentProcess @ 0x1400F13B0 (PsGetCurrentProcess.c)
 *     MiCreateSystemWsles @ 0x1400F3224 (MiCreateSystemWsles.c)
 *     IoBoostThreadIoPriority @ 0x1401086DC (IoBoostThreadIoPriority.c)
 *     ExReleaseExtensionTable @ 0x14010DC6C (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x14010DC84 (ExGetExtensionTable.c)
 *     RtlInsertDynamicFunctionTable @ 0x140113DC0 (RtlInsertDynamicFunctionTable.c)
 *     RtlRemoveDynamicFunctionTable @ 0x14011934C (RtlRemoveDynamicFunctionTable.c)
 *     ExCpuSetResourceManagerAccessCheck @ 0x140126AB8 (ExCpuSetResourceManagerAccessCheck.c)
 *     PspLockUnlockProcessExclusive @ 0x14012F390 (PspLockUnlockProcessExclusive.c)
 *     PtrToUlong @ 0x1401349D0 (PtrToUlong.c)
 *     KeSetExecuteOptions @ 0x140135D7C (KeSetExecuteOptions.c)
 *     PspLockProcessExclusive @ 0x14013973C (PspLockProcessExclusive.c)
 *     PspUnlockProcessExclusive @ 0x140139B10 (PspUnlockProcessExclusive.c)
 *     MmRemoveExecuteGrants @ 0x14013A0A4 (MmRemoveExecuteGrants.c)
 *     KeInitializeGate @ 0x14013A474 (KeInitializeGate.c)
 *     KeVerifyGroupAffinity @ 0x14016B82C (KeVerifyGroupAffinity.c)
 *     KeSetCpuSetsProcess @ 0x14018C794 (KeSetCpuSetsProcess.c)
 *     xKdEnumerateDebuggingDevices @ 0x140194120 (xKdEnumerateDebuggingDevices.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     IoRevokeHandlesForProcess @ 0x1402848B0 (IoRevokeHandlesForProcess.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x140296A2C (KeRecomputeCpuSetAffinityProcess.c)
 *     MmGetMaximumUserAddress @ 0x1402A5754 (MmGetMaximumUserAddress.c)
 *     MmReleaseCommitForMemResetPages @ 0x1402A5774 (MmReleaseCommitForMemResetPages.c)
 *     MmSetCommitReleaseEligibility @ 0x1402A5988 (MmSetCommitReleaseEligibility.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PspGetRedirectionTrustPolicy @ 0x1405837D4 (PspGetRedirectionTrustPolicy.c)
 *     PspSetRedirectionTrustPolicy @ 0x140583834 (PspSetRedirectionTrustPolicy.c)
 *     ObReferenceProcessHandleTable @ 0x1405D2160 (ObReferenceProcessHandleTable.c)
 *     PsReferencePrimaryToken @ 0x1405DE640 (PsReferencePrimaryToken.c)
 *     SeCaptureSubjectContextEx @ 0x1405E17F0 (SeCaptureSubjectContextEx.c)
 *     SeReleaseSubjectContext @ 0x1405E2240 (SeReleaseSubjectContext.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     PspCombineSecurityDomains @ 0x14061204C (PspCombineSecurityDomains.c)
 *     SeSinglePrivilegeCheck @ 0x140613160 (SeSinglePrivilegeCheck.c)
 *     ProbeForWrite @ 0x14062AA80 (ProbeForWrite.c)
 *     RtlIsSandboxedToken @ 0x14064B4F0 (RtlIsSandboxedToken.c)
 *     PspSetProcessForegroundBackgroundRequest @ 0x14064CBCC (PspSetProcessForegroundBackgroundRequest.c)
 *     PsSetProcessPriorityByClass @ 0x14064CCF0 (PsSetProcessPriorityByClass.c)
 *     PspWritePebAffinityInfo @ 0x14066DFD0 (PspWritePebAffinityInfo.c)
 *     ObReferenceObjectByHandleWithTag @ 0x1406726C0 (ObReferenceObjectByHandleWithTag.c)
 *     PsGetNextProcessThread @ 0x140676AA0 (PsGetNextProcessThread.c)
 *     PspSetProcessDefaultHardErrorMode @ 0x140676BA0 (PspSetProcessDefaultHardErrorMode.c)
 *     MmAllocateUserStack @ 0x140676C58 (MmAllocateUserStack.c)
 *     KeSetAutoAlignmentProcess @ 0x1406772AC (KeSetAutoAlignmentProcess.c)
 *     LpcRequestPort @ 0x1406A2F10 (LpcRequestPort.c)
 *     EtwSetProcessTelemetryCoverage @ 0x1406B5220 (EtwSetProcessTelemetryCoverage.c)
 *     ExEnableRaiseUMExceptionOnInvalidHandleClose @ 0x1406B8918 (ExEnableRaiseUMExceptionOnInvalidHandleClose.c)
 *     PoSetProcessEnergyTrackingState @ 0x1406C4CC4 (PoSetProcessEnergyTrackingState.c)
 *     ExEnableHandleExceptions @ 0x1406C5E28 (ExEnableHandleExceptions.c)
 *     PspSetProcessPriorityClass @ 0x1406C9468 (PspSetProcessPriorityClass.c)
 *     SeSetVirtualizationToken @ 0x1406CD994 (SeSetVirtualizationToken.c)
 *     PspSetNoChildProcessRestrictedPolicy @ 0x1406CE568 (PspSetNoChildProcessRestrictedPolicy.c)
 *     PsIsSystemWideMitigationOptionSet @ 0x1406D09E8 (PsIsSystemWideMitigationOptionSet.c)
 *     PspGetNoChildProcessRestrictedPolicy @ 0x1406D0F00 (PspGetNoChildProcessRestrictedPolicy.c)
 *     PspSetQuotaLimits @ 0x1406D2398 (PspSetQuotaLimits.c)
 *     KeSetDisableBoostProcess @ 0x1406D7E2C (KeSetDisableBoostProcess.c)
 *     KeSetDisableBoostThread @ 0x1406DCC10 (KeSetDisableBoostThread.c)
 *     PsSetProcessFaultInformation @ 0x1406E3040 (PsSetProcessFaultInformation.c)
 *     ExSystemExceptionFilter @ 0x1406E3A10 (ExSystemExceptionFilter.c)
 *     PspSetProcessAffinityUpdateMode @ 0x140706788 (PspSetProcessAffinityUpdateMode.c)
 *     SeCompareSigningLevels @ 0x14071AC50 (SeCompareSigningLevels.c)
 *     SeCheckPrivilegedObject @ 0x14071F504 (SeCheckPrivilegedObject.c)
 *     PspAssignPrimaryToken @ 0x140749B58 (PspAssignPrimaryToken.c)
 *     KeSetCheckStackExtentsProcess @ 0x140844618 (KeSetCheckStackExtentsProcess.c)
 *     MmValidateUserCallTarget @ 0x14085D4E8 (MmValidateUserCallTarget.c)
 *     MmProcessWorkingSetControl @ 0x14085FFE0 (MmProcessWorkingSetControl.c)
 *     ObSetProcessDeviceMap @ 0x140865090 (ObSetProcessDeviceMap.c)
 *     PsIsGuiThread @ 0x1408899A4 (PsIsGuiThread.c)
 *     PsSetProcessHandleTracingInformation @ 0x1408899B4 (PsSetProcessHandleTracingInformation.c)
 *     PspSetProcessAffinitySafe @ 0x14088A2B4 (PspSetProcessAffinitySafe.c)
 *     PsIumEnableOnDemandDebugWithResponse @ 0x14088E010 (PsIumEnableOnDemandDebugWithResponse.c)
 *     SeCodeIntegritySetInformationProcess @ 0x14089C830 (SeCodeIntegritySetInformationProcess.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtSetInformationProcess(
        HANDLE ProcessHandle,
        PROCESSINFOCLASS ProcessInformationClass,
        PVOID ProcessInformation,
        ULONG ProcessInformationLength)
{
  size_t v4; // rdi
  __int64 v5; // rbx
  struct _KTHREAD *CurrentThread; // rcx
  unsigned __int8 v8; // r15
  int v9; // eax
  NTSTATUS result; // eax
  NTSTATUS v11; // ebx
  _DWORD *PoolWithTag; // rax
  void *v13; // rbx
  PVOID v14; // rcx
  PVOID v15; // rcx
  int v16; // ebx
  unsigned int v17; // eax
  char v18; // di
  PVOID v19; // rcx
  char v20; // al
  __int16 v21; // bx
  int v22; // r14d
  NTSTATUS v23; // edi
  char v24; // bl
  int v25; // r14d
  unsigned int v26; // edi
  int v27; // esi
  __int64 i; // rbx
  __int64 v29; // r8
  unsigned int v30; // ebx
  unsigned int v31; // r12d
  int v32; // esi
  unsigned __int64 v33; // rdx
  signed __int64 *v34; // roff
  signed __int64 v35; // r15
  signed __int64 v36; // rax
  void *v37; // r15
  int v38; // eax
  unsigned __int8 v39; // bl
  __int64 v40; // rdi
  __int64 v41; // rax
  __int16 v42; // r8
  int v43; // ebx
  unsigned int GroupMaskProcess; // eax
  __int64 v45; // rdx
  __int64 v46; // rdi
  signed __int64 *v47; // rbx
  _BOOL8 v48; // r12
  __int64 v49; // rdi
  PVOID v50; // rcx
  _QWORD *j; // rbx
  HANDLE v52; // rbx
  int v53; // ebx
  NTSTATUS v54; // r14d
  int v55; // ebx
  int v56; // ecx
  unsigned int v57; // eax
  unsigned __int64 v58; // r12
  volatile signed __int32 *v59; // r8
  signed __int32 v60; // eax
  signed int v61; // r9d
  signed __int32 v62; // edx
  KSPIN_LOCK *v63; // rbx
  signed int v64; // r15d
  int v65; // ebx
  _KPROCESS *CurrentProcess; // rax
  unsigned int v67; // ebx
  volatile signed __int32 *v68; // r8
  signed __int32 v69; // eax
  unsigned int v70; // r9d
  signed __int32 v71; // edx
  _QWORD *v72; // r14
  int v73; // ebx
  struct _KTHREAD *PoolWithQuotaTag; // r15
  __int64 Flink_low; // r8
  unsigned int v76; // edx
  _KPROCESS *v77; // rax
  _KPROCESS *v78; // r8
  unsigned __int64 v79; // rax
  __int16 v80; // cx
  __int64 v81; // rcx
  HANDLE v82; // rdx
  PVOID k; // rcx
  _QWORD *v84; // rbx
  __int64 v85; // rdi
  char *v86; // rbx
  char *v87; // rax
  char *v88; // r13
  __int64 Flink_high; // rdx
  __int64 v90; // r8
  volatile void **v91; // rdi
  __int64 v92; // rdx
  const void *v93; // rdx
  __int64 v94; // rdx
  __int64 v95; // rdi
  __int64 v96; // rcx
  unsigned __int64 v97; // rax
  __int64 v98; // rax
  __int64 v99; // rbx
  unsigned int v100; // eax
  unsigned __int64 v101; // r8
  unsigned __int64 v102; // rax
  unsigned __int64 v103; // rdx
  __int64 v104; // rcx
  __int64 v105; // rax
  unsigned __int64 v106; // rbx
  _KPROCESS *v107; // rdi
  BOOLEAN v108; // al
  BOOLEAN v109; // al
  struct _EX_RUNDOWN_REF *v110; // rcx
  __int64 v111; // rax
  __int16 v112; // r8
  bool v113; // r9
  unsigned __int64 v114; // r8
  __int16 v115; // r9
  __int64 v116; // rdi
  PVOID v117; // r8
  volatile signed __int32 *v118; // rcx
  __int16 v119; // r9
  __int64 v120; // rcx
  __int64 *v121; // rdx
  char *v122; // rsi
  __int64 v123; // r9
  int v124; // ebx
  PACCESS_TOKEN v125; // rbx
  unsigned __int64 v126; // rbx
  char v127; // r13
  __int64 v128; // rdx
  __int64 v129; // r8
  unsigned __int8 *v130; // r9
  int v131; // edx
  int v132; // ecx
  unsigned __int64 v133; // rax
  unsigned int v134; // ebx
  int v135; // r15d
  int v136; // ebx
  char IsGuiThread; // al
  unsigned int v138; // ebx
  int v139; // edi
  _KPROCESS *v140; // rax
  bool IsSandboxedToken; // si
  BOOLEAN v142; // al
  int v143; // ecx
  int v144; // r8d
  int v145; // edi
  int v146; // edx
  int v147; // eax
  int v148; // edx
  bool v149; // zf
  int v150; // ebx
  int v151; // ecx
  int v152; // r11d
  int v153; // edx
  int v154; // eax
  int v155; // eax
  unsigned int v156; // ebx
  int v157; // r12d
  int v158; // edi
  int v159; // r14d
  __int64 v160; // rcx
  int v161; // r8d
  int v162; // ecx
  int v163; // ebx
  int v164; // edx
  unsigned int v165; // ecx
  int v166; // edi
  int v167; // r8d
  int v168; // edx
  int v169; // ebx
  int v170; // r11d
  int v171; // ecx
  int v172; // eax
  int v173; // edx
  unsigned int v174; // ebx
  unsigned int NoChildProcessRestrictedPolicy; // eax
  __int64 v176; // r8
  int v177; // edx
  int v178; // eax
  int v179; // ebx
  unsigned int v180; // ebx
  int RedirectionTrustPolicy; // eax
  int v182; // ecx
  int v183; // ebx
  int v184; // edx
  int v185; // ebx
  unsigned __int64 v186; // rax
  void *v187; // rdi
  int v188; // eax
  void *v189; // rcx
  unsigned __int64 v190; // rdx
  PVOID v191; // rax
  _BOOL8 v192; // rdi
  unsigned int v193; // edi
  char v194; // bl
  unsigned int v195; // ebx
  unsigned __int64 v196; // rax
  char v197; // bl
  int v198; // ecx
  unsigned __int64 ExtensionTable; // rbx
  int v200; // edi
  NTSTATUS v201; // ebx
  unsigned int v202; // r14d
  NTSTATUS v203; // ebx
  __int128 v204; // xmm1
  const char *v205; // r8
  int v206; // eax
  unsigned int v207; // ecx
  unsigned int v208; // ecx
  int v209; // ebx
  unsigned int v210; // ebx
  unsigned __int64 v211; // rax
  HANDLE v212; // rbx
  HANDLE v213; // rbx
  _KPROCESS *v214; // rax
  unsigned __int64 v215; // rdx
  __int64 v216; // rcx
  __int64 *v217; // r8
  int v218; // ebx
  int v219; // eax
  unsigned int v220; // eax
  int v221; // eax
  unsigned int v222; // eax
  signed __int32 v223[8]; // [rsp+0h] [rbp-4E8h] BYREF
  PVOID Object; // [rsp+40h] [rbp-4A8h] BYREF
  unsigned int v225; // [rsp+48h] [rbp-4A0h]
  struct _KTHREAD *v226; // [rsp+50h] [rbp-498h]
  int v227; // [rsp+58h] [rbp-490h]
  HANDLE v228; // [rsp+60h] [rbp-488h]
  ULONG v229; // [rsp+68h] [rbp-480h]
  HANDLE Handle; // [rsp+70h] [rbp-478h]
  ULONG Alignment; // [rsp+78h] [rbp-470h]
  unsigned int v232; // [rsp+7Ch] [rbp-46Ch]
  char v233; // [rsp+80h] [rbp-468h]
  char v234; // [rsp+81h] [rbp-467h]
  char v235; // [rsp+82h] [rbp-466h]
  __int16 v236; // [rsp+84h] [rbp-464h]
  signed int v237; // [rsp+88h] [rbp-460h]
  char v238; // [rsp+8Ch] [rbp-45Ch]
  __int64 v239; // [rsp+90h] [rbp-458h]
  unsigned int v240; // [rsp+98h] [rbp-450h]
  char *v241; // [rsp+A0h] [rbp-448h]
  __int64 v242; // [rsp+A8h] [rbp-440h]
  __int64 v243; // [rsp+B0h] [rbp-438h]
  _DWORD *v244; // [rsp+B8h] [rbp-430h]
  __int128 v245; // [rsp+C0h] [rbp-428h]
  unsigned int v246; // [rsp+D0h] [rbp-418h]
  unsigned int v247; // [rsp+D4h] [rbp-414h]
  int v248; // [rsp+D8h] [rbp-410h] BYREF
  int v249; // [rsp+DCh] [rbp-40Ch]
  int v250; // [rsp+E0h] [rbp-408h] BYREF
  PVOID v251; // [rsp+E8h] [rbp-400h] BYREF
  int v252; // [rsp+F0h] [rbp-3F8h] BYREF
  int v253; // [rsp+F4h] [rbp-3F4h]
  __int64 v254; // [rsp+F8h] [rbp-3F0h]
  int v255; // [rsp+100h] [rbp-3E8h] BYREF
  void *Src; // [rsp+108h] [rbp-3E0h]
  PVOID v257; // [rsp+110h] [rbp-3D8h]
  PVOID v258; // [rsp+118h] [rbp-3D0h]
  PVOID v259; // [rsp+120h] [rbp-3C8h] BYREF
  NTSTRSAFE_PCSTR pszSrc[2]; // [rsp+128h] [rbp-3C0h] BYREF
  __int64 v261; // [rsp+138h] [rbp-3B0h]
  int v262; // [rsp+140h] [rbp-3A8h]
  int v263; // [rsp+144h] [rbp-3A4h]
  BOOL v264; // [rsp+148h] [rbp-3A0h]
  int v265; // [rsp+14Ch] [rbp-39Ch]
  int v266; // [rsp+150h] [rbp-398h]
  int v267; // [rsp+154h] [rbp-394h]
  int v268; // [rsp+158h] [rbp-390h]
  int v269; // [rsp+15Ch] [rbp-38Ch]
  int v270; // [rsp+160h] [rbp-388h]
  int v271; // [rsp+164h] [rbp-384h]
  int v272; // [rsp+168h] [rbp-380h]
  HANDLE v273; // [rsp+170h] [rbp-378h]
  LONG *p_LockNV; // [rsp+178h] [rbp-370h]
  int v275; // [rsp+180h] [rbp-368h]
  __int64 v276; // [rsp+188h] [rbp-360h] BYREF
  __int64 v277; // [rsp+190h] [rbp-358h] BYREF
  PVOID v278; // [rsp+198h] [rbp-350h] BYREF
  int v279; // [rsp+1A0h] [rbp-348h]
  int v280; // [rsp+1A4h] [rbp-344h]
  int v281; // [rsp+1A8h] [rbp-340h]
  __int128 v282; // [rsp+1B0h] [rbp-338h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+1C0h] [rbp-328h] BYREF
  __m256i v284; // [rsp+1E0h] [rbp-308h]
  __int128 v285; // [rsp+200h] [rbp-2E8h] BYREF
  __int128 v286; // [rsp+210h] [rbp-2D8h] BYREF
  __int64 v287; // [rsp+220h] [rbp-2C8h]
  HANDLE v288; // [rsp+228h] [rbp-2C0h]
  HANDLE v289; // [rsp+230h] [rbp-2B8h]
  HANDLE v290; // [rsp+238h] [rbp-2B0h]
  HANDLE v291; // [rsp+240h] [rbp-2A8h]
  unsigned __int64 v292; // [rsp+248h] [rbp-2A0h]
  unsigned __int64 v293; // [rsp+250h] [rbp-298h]
  int *v294; // [rsp+258h] [rbp-290h]
  _DWORD v295[10]; // [rsp+260h] [rbp-288h] BYREF
  __int64 v296; // [rsp+288h] [rbp-260h]
  __int128 v297; // [rsp+290h] [rbp-258h] BYREF
  HANDLE v298; // [rsp+2A0h] [rbp-248h] BYREF
  int v299; // [rsp+2A8h] [rbp-240h]
  __int128 v300; // [rsp+2B0h] [rbp-238h]
  struct _KAPC_STATE ApcState; // [rsp+2C0h] [rbp-228h] BYREF
  _BYTE P[48]; // [rsp+2F0h] [rbp-1F8h] BYREF
  _BYTE v303[144]; // [rsp+320h] [rbp-1C8h] BYREF
  char v304[160]; // [rsp+3B0h] [rbp-138h] BYREF
  char pszDest[8]; // [rsp+450h] [rbp-98h] BYREF
  __int64 v306; // [rsp+458h] [rbp-90h]
  __int64 v307; // [rsp+460h] [rbp-88h]
  __int64 v308; // [rsp+468h] [rbp-80h]
  __int64 v309; // [rsp+470h] [rbp-78h]
  __int64 v310; // [rsp+478h] [rbp-70h]
  __int64 v311; // [rsp+480h] [rbp-68h]
  __int64 v312; // [rsp+488h] [rbp-60h]
  char v313; // [rsp+490h] [rbp-58h]

  v4 = ProcessInformationLength;
  v5 = (__int64)ProcessInformation;
  Alignment = ProcessInformationClass;
  v243 = (__int64)ProcessInformation;
  v229 = ProcessInformationLength;
  CurrentThread = KeGetCurrentThread();
  v226 = CurrentThread;
  v8 = CurrentThread->$86A1A36C0FEBA810544B2F2B35F40C82::gap0[10];
  if ( v8 )
  {
    switch ( ProcessInformationClass )
    {
      case ProcessBasePriority:
        v9 = 4;
        break;
      case ProcessEnableAlignmentFaultFixup:
        v9 = 1;
        break;
      case ProcessForegroundInformation:
        v9 = 1;
        break;
      case ProcessPriorityClass:
        v9 = 1;
        break;
      case ProcessAffinityMask:
        v9 = 8;
        break;
      case ProcessIoPriority:
        v9 = 4;
        break;
      case ProcessPagePriority:
        v9 = 4;
        break;
      case ProcessTlsInformation:
        v9 = 8;
        break;
      case ProcessExceptionPort:
        v9 = 8;
        break;
      case ProcessInstrumentationCallback:
        v9 = 8;
        break;
      case ProcessThreadStackAllocation:
        v9 = 8;
        break;
      case ProcessAffinityUpdateMode:
        v9 = 4;
        break;
      case ProcessMemoryAllocationMode:
        v9 = 4;
        break;
      case ProcessConsoleHostProcess:
        v9 = 8;
        break;
      case ProcessDynamicFunctionTableInformation:
        v9 = 8;
        break;
      case ProcessRevokeFileHandles:
        v9 = 8;
        break;
      case ProcessMemoryExhaustion:
        v9 = 8;
        break;
      case ProcessCommitReleaseInformation:
        v9 = 8;
        break;
      case ProcessInPrivate:
        v9 = 1;
        break;
      case ProcessHighGraphicsPriorityInformation:
        v9 = 1;
        break;
      case ProcessManageWritesToExecutableMemory:
        v9 = 4;
        break;
      case ProcessDebugAuthInformation:
        v9 = 1;
        break;
      case ProcessSystemResourceManagement:
        v9 = 4;
        break;
      case ProcessLoaderDetour:
        v9 = 4;
        break;
      case ProcessCombineSecurityDomainsInformation:
        v9 = 8;
        break;
      default:
        v9 = 4;
        if ( ProcessInformationClass == ProcessEnableReadWriteVmLogging )
          v9 = 1;
        break;
    }
    if ( ProcessInformationLength )
    {
      if ( ((v9 - 1) & (unsigned int)ProcessInformation) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)ProcessInformation + ProcessInformationLength > 0x7FFFFFFF0000LL
        || (char *)ProcessInformation + ProcessInformationLength < ProcessInformation )
      {
        MEMORY[0x7FFFFFFF0000] = 0;
      }
      CurrentThread = v226;
    }
  }
  switch ( ProcessInformationClass )
  {
    case ProcessQuotaLimits:
      return PspSetQuotaLimits((ULONG_PTR)ProcessHandle);
    case ProcessBasePriority:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v16 = *(_DWORD *)ProcessInformation;
      v265 = v16;
      v17 = v16 & 0x80000000;
      if ( v16 < 0 )
        v16 &= ~0x80000000;
      v18 = v17 != 0 ? 2 : 0;
      if ( (unsigned int)(v16 - 1) > 0x1E )
        return -1073741811;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v8,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result >= 0 )
      {
        v19 = Object;
        if ( v16 <= *((char *)Object + 444)
          || (v20 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))SeCheckPrivilegedObject)(
                      SeIncreaseBasePriorityPrivilege,
                      ProcessHandle,
                      512LL,
                      v8),
              v19 = Object,
              v20) )
        {
          KeSetPriorityAndQuantumProcess((__int64)v19, (unsigned int)v16, 0, 0, 0);
          MmSetMemoryPriorityProcess((__int64)Object, v18);
          goto LABEL_80;
        }
        goto LABEL_89;
      }
      return result;
    case ProcessRaisePriority:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v26 = *(_DWORD *)ProcessInformation;
      v266 = *(_DWORD *)ProcessInformation;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v8,
                 0x79517350u,
                 &Object,
                 0LL);
      v27 = result;
      if ( result >= 0 )
      {
        if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)Object + 95) )
          goto LABEL_107;
        for ( i = PsGetNextProcessThread(Object, 0LL); i; i = PsGetNextProcessThread(Object, i) )
          KeBoostPriorityThread(i, v26, v29);
        goto LABEL_106;
      }
      return result;
    case ProcessExceptionPort:
      if ( ProcessInformationLength == 8 )
      {
        v31 = 0;
        v246 = 0;
        Handle = *(HANDLE *)ProcessInformation;
        v273 = Handle;
      }
      else
      {
        if ( ProcessInformationLength != 16 )
          return -1073741820;
        Handle = *(HANDLE *)ProcessInformation;
        v273 = Handle;
        v246 = *((_DWORD *)ProcessInformation + 2);
        v31 = v246;
        if ( (v246 & 0xFFFFFFF8) != 0 )
          return -1073741811;
      }
      if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, v8) )
        return -1073741727;
      result = ObReferenceObjectByHandle(Handle, 0, LpcPortObjectType, v8, &v251, 0LL);
      v257 = v251;
      if ( result >= 0 )
      {
        v32 = ObReferenceObjectByHandleWithTag(
                ProcessHandle,
                0x800u,
                (POBJECT_TYPE)PsProcessType,
                v8,
                0x79517350u,
                &Object,
                0LL);
        if ( v32 >= 0 )
        {
          v33 = (unsigned __int64)v251 | v31;
          v244 = (_DWORD *)v33;
          v34 = (signed __int64 *)((char *)Object + 848);
          _m_prefetchw((char *)Object + 848);
          v35 = *v34;
          do
          {
            Handle = (HANDLE)v35;
            if ( (_DWORD)v4 == 16 )
            {
              *(_DWORD *)(v5 + 8) = v35 & 7;
            }
            else if ( (v35 & 7) != 0 )
            {
              ObfDereferenceObject(v257);
              goto LABEL_127;
            }
            v36 = _InterlockedCompareExchange64((volatile signed __int64 *)Object + 106, v33, v35);
            v149 = v35 == v36;
            v35 = v36;
          }
          while ( !v149 );
          if ( v36 )
          {
            v37 = (void *)(v36 & 0xFFFFFFFFFFFFFFF8uLL);
            v295[0] = 3145736;
            v295[1] = 13;
            v296 = *((_QWORD *)Object + 92);
            while ( 1 )
            {
              v38 = LpcRequestPort(v37, v295);
              if ( v38 != -1073741801 && v38 != -1073741670 )
                break;
              KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&PspShortTime);
            }
            PspLockUnlockProcessExclusive((__int64)Object, (__int64)v226);
            ObfDereferenceObject(v37);
          }
          v27 = 0;
          goto LABEL_108;
        }
        ObfDereferenceObject(v251);
        return v32;
      }
      return result;
    case ProcessAccessToken:
      if ( ProcessInformationLength != 16 )
        return -1073741820;
      v288 = *(HANDLE *)ProcessInformation;
      return PspAssignPrimaryToken(CurrentThread, v8, ProcessHandle);
    case ProcessLdtInformation:
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x220u,
                 (POBJECT_TYPE)PsProcessType,
                 v8,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result >= 0 )
        goto LABEL_143;
      return result;
    case ProcessLdtSize:
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x220u,
                 (POBJECT_TYPE)PsProcessType,
                 v8,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result >= 0 )
        goto LABEL_143;
      return result;
    case ProcessDefaultHardErrorMode:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v30 = *(_DWORD *)ProcessInformation;
      v267 = *(_DWORD *)ProcessInformation;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v8,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result >= 0 )
      {
        PspSetProcessDefaultHardErrorMode(Object, v226, v30);
        goto LABEL_80;
      }
      return result;
    case ProcessIoPortHandlers:
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v8,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result >= 0 )
      {
LABEL_143:
        v11 = xKdEnumerateDebuggingDevices();
        goto LABEL_70;
      }
      return result;
    case ProcessWorkingSetWatch:
    case ProcessWorkingSetWatchEx:
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v8,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result >= 0 )
      {
        v11 = PsChargeProcessNonPagedPoolQuota((__int64)Object, 0x6028uLL);
        if ( v11 < 0 )
          goto LABEL_70;
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x6028uLL, 0x73577350u);
        v13 = PoolWithTag;
        if ( PoolWithTag )
        {
          PsWatchEnabled = 1;
          *PoolWithTag = 0;
          *((_QWORD *)PoolWithTag + 1) = 0LL;
          KeInitializeGate((__int64)(PoolWithTag + 4));
          if ( !_InterlockedCompareExchange64((volatile signed __int64 *)Object + 122, (signed __int64)v13, 0LL) )
          {
            v11 = 0;
            goto LABEL_70;
          }
          ExFreePoolWithTag(v13, 0);
          v11 = -1073741752;
        }
        else
        {
          v11 = -1073741801;
        }
        PsReturnProcessNonPagedPoolQuota((struct _KPROCESS *)Object, 24616LL);
        goto LABEL_70;
      }
      return result;
    case ProcessUserModeIOPL:
      if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, v8) )
        return -1073741727;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v8,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result >= 0 )
      {
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        return -1073741822;
      }
      return result;
    case ProcessEnableAlignmentFaultFixup:
      if ( ProcessInformationLength != 1 )
        return -1073741820;
      v39 = *(_BYTE *)ProcessInformation;
      v233 = *(_BYTE *)ProcessInformation;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v8,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result >= 0 )
      {
        v40 = (__int64)v226;
        PspLockProcessExclusive((__int64)Object, (__int64)v226);
        if ( v39 )
          *((_DWORD *)Object + 296) |= 4u;
        else
          *((_DWORD *)Object + 296) &= ~4u;
        v41 = *((_QWORD *)Object + 133);
        if ( v41 )
        {
          v42 = *(_WORD *)(v41 + 8);
          if ( v42 == 332 || v42 == 452 )
            v39 = 1;
        }
        KeSetAutoAlignmentProcess(Object, v39);
        PspUnlockProcessExclusive((__int64)Object, v40);
        goto LABEL_80;
      }
      return result;
    case ProcessPriorityClass:
      if ( ProcessInformationLength != 2 )
        return -1073741820;
      v21 = *(_WORD *)ProcessInformation;
      v236 = *(_WORD *)ProcessInformation;
      v22 = 0;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v8,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result >= 0 )
      {
        v23 = PspSetProcessPriorityClass(Object, HIBYTE(v236), ProcessHandle, v8);
        if ( v23 >= 0 )
        {
          LOBYTE(v22) = (_BYTE)v21 != 0;
          PsSetProcessPriorityByClass((__int64)Object, v22);
        }
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        return v23;
      }
      return result;
    case ProcessWx86Information:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v43 = *(_DWORD *)ProcessInformation;
      v268 = *(_DWORD *)ProcessInformation;
      if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, v8) )
        return -1073741727;
      v27 = ObReferenceObjectByHandleWithTag(
              ProcessHandle,
              0x200u,
              (POBJECT_TYPE)PsProcessType,
              v8,
              0x79517350u,
              &Object,
              0LL);
      if ( v27 < 0 )
        return v27;
      if ( !*((_QWORD *)Object + 226) )
      {
        if ( v43 )
          _InterlockedOr((volatile signed __int32 *)Object + 193, 0x1000000u);
        else
          _InterlockedAnd((volatile signed __int32 *)Object + 193, 0xFEFFFFFF);
        goto LABEL_108;
      }
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      return -1073741790;
    case ProcessAffinityMask:
      if ( ProcessInformationLength == 8 )
      {
        v297 = 0uLL;
        *(_QWORD *)&v297 = *(_QWORD *)ProcessInformation;
        if ( !(_QWORD)v297 )
          return -1073741811;
      }
      else
      {
        if ( ProcessInformationLength != 16 )
          return -1073741820;
        v297 = *(_OWORD *)ProcessInformation;
        if ( !KeVerifyGroupAffinity((__int64)&v297, 0) )
          return -1073741811;
      }
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v8,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result >= 0 )
      {
        GroupMaskProcess = KeQueryGroupMaskProcess((__int64)Object);
        if ( ((GroupMaskProcess - 1) & GroupMaskProcess) != 0 )
          goto LABEL_127;
        if ( (_DWORD)v4 == 8 )
        {
          _BitScanForward(&GroupMaskProcess, GroupMaskProcess);
          v247 = GroupMaskProcess;
          v45 = v297 & qword_1405426A8[GroupMaskProcess];
          if ( v45 != (_QWORD)v297 )
            goto LABEL_127;
          WORD4(v297) = v247;
          *(_QWORD *)&v297 = v45;
        }
        v46 = (__int64)v226;
        KeEnterCriticalRegionThread((__int64)v226);
        if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)Object + 95) )
        {
          ExAcquirePushLockSharedEx((ULONG_PTR)Object + 728, 0LL);
          v27 = PspSetProcessAffinitySafe((_DWORD)Object, 0, 0, (unsigned int)&v297, (__int64)&v250);
          v47 = (signed __int64 *)Object;
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)Object + 91, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared(v47 + 91);
          KeAbPostRelease((ULONG_PTR)(v47 + 91));
          ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)Object + 95);
          if ( v27 >= 0 )
          {
            if ( v250 )
              PspWritePebAffinityInfo(v46, (__int64)Object);
            _InterlockedOr((volatile signed __int32 *)Object + 192, 0x200000u);
            KeLeaveCriticalRegionThread(v46);
LABEL_108:
            ObfDereferenceObjectWithTag(Object, 0x79517350u);
            return v27;
          }
        }
        else
        {
          v27 = -1073741558;
        }
        KeLeaveCriticalRegionThread(v46);
        goto LABEL_108;
      }
      return result;
    case ProcessPriorityBoost:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v269 = *(_DWORD *)ProcessInformation;
      v48 = v269 != 0;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v8,
                 0x79517350u,
                 &Object,
                 0LL);
      v27 = result;
      if ( result < 0 )
        return result;
      if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)Object + 95) )
        goto LABEL_107;
      v49 = (__int64)v226;
      PspLockProcessExclusive((__int64)Object, (__int64)v226);
      KeSetDisableBoostProcess(Object, v48);
      v50 = Object;
      for ( j = (_QWORD *)*((_QWORD *)Object + 145); j != (_QWORD *)((char *)Object + 1160); v50 = Object )
      {
        KeSetDisableBoostThread(j - 213, v48);
        j = (_QWORD *)*j;
      }
      goto LABEL_258;
    case ProcessDeviceMap:
      if ( ProcessInformationLength != 8 )
        return -1073741820;
      v52 = *(HANDLE *)ProcessInformation;
      v291 = *(HANDLE *)ProcessInformation;
      if ( RtlIsSandboxedToken(0LL, v8) )
        return -1073741790;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v8,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v11 = ObSetProcessDeviceMap(Object, v52, v8);
      goto LABEL_70;
    case ProcessSessionInformation:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v53 = *(_DWORD *)ProcessInformation;
      v270 = *(_DWORD *)ProcessInformation;
      if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, v8) )
        return -1073741727;
      v54 = 0;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x204u,
                 (POBJECT_TYPE)PsProcessType,
                 v8,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      if ( v53 != (unsigned int)MmGetSessionId((__int64)Object) )
        v54 = -1073741790;
      goto LABEL_206;
    case ProcessForegroundInformation:
      if ( ProcessInformationLength != 1 )
        return -1073741820;
      v24 = *(_BYTE *)ProcessInformation;
      v238 = *(_BYTE *)ProcessInformation;
      v25 = 0;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x2000u,
                 (POBJECT_TYPE)PsProcessType,
                 v8,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      LOBYTE(v25) = v24 != 0;
      PsSetProcessPriorityByClass((__int64)Object, v25);
      goto LABEL_80;
    case ProcessBreakOnTermination:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v55 = *(_DWORD *)ProcessInformation;
      v271 = *(_DWORD *)ProcessInformation;
      if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, v8) )
        return -1073741727;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v8,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      if ( v55 )
        _InterlockedOr((volatile signed __int32 *)Object + 193, 0x2000u);
      else
        _InterlockedAnd((volatile signed __int32 *)Object + 193, 0xFFFFDFFF);
      goto LABEL_80;
    case ProcessDebugFlags:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v8,
                 0x79517350u,
                 &Object,
                 0LL);
      v27 = result;
      if ( result < 0 )
        return result;
      v249 = *(_DWORD *)v5;
      if ( (v249 & 0xFFFFFFFE) != 0 )
        goto LABEL_127;
      if ( (v249 & 1) != 0 )
        _InterlockedAnd((volatile signed __int32 *)Object + 193, 0xFFFFFFFD);
      else
        _InterlockedOr((volatile signed __int32 *)Object + 193, 2u);
      goto LABEL_108;
    case ProcessHandleTracing:
      if ( !ProcessInformationLength )
        goto LABEL_221;
      if ( ((ProcessInformationLength - 4) & 0xFFFFFFFB) != 0 )
        return -1073741820;
      v56 = *(_DWORD *)ProcessInformation;
      v252 = *(_DWORD *)ProcessInformation;
      if ( ProcessInformationLength == 8 )
        v253 = *((_DWORD *)ProcessInformation + 1);
      else
        v253 = 0;
      if ( v56 )
        return -1073741811;
LABEL_221:
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v8,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      if ( (_DWORD)v4 )
        v11 = PsSetProcessHandleTracingInformation(Object, &v252);
      else
        v11 = PsSetProcessHandleTracingInformation(Object, 0LL);
      goto LABEL_70;
    case ProcessIoPriority:
      if ( ((ProcessInformationLength - 4) & 0xFFFFFFFB) != 0 )
        return -1073741820;
      if ( ProcessInformationLength == 4 )
      {
        v57 = *(_DWORD *)ProcessInformation;
        v237 = *(_DWORD *)ProcessInformation;
        LOBYTE(v58) = 0;
      }
      else
      {
        v292 = *(_QWORD *)ProcessInformation;
        v57 = v292;
        v58 = HIDWORD(v292);
        v237 = v292;
      }
      if ( v57 >= 4 )
        return -1073741811;
      if ( v57 >= 3
        && !(unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))SeCheckPrivilegedObject)(
                               SeIncreaseBasePriorityPrivilege,
                               ProcessHandle,
                               512LL,
                               v8) )
      {
        return -1073741727;
      }
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v8,
                 0x79517350u,
                 &Object,
                 0LL);
      v27 = result;
      if ( result < 0 )
        return result;
      if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)Object + 95) )
      {
        v49 = (__int64)v226;
        PspLockProcessExclusive((__int64)Object, (__int64)v226);
        v59 = (volatile signed __int32 *)Object;
        v60 = *((_DWORD *)Object + 193);
        v61 = v237 << 27;
        do
        {
          v62 = v60;
          v60 = _InterlockedCompareExchange(v59 + 193, v61 | v60 & 0xC7FFFFFF, v60);
        }
        while ( v60 != v62 );
        v50 = Object;
        v63 = (KSPIN_LOCK *)*((_QWORD *)Object + 145);
        if ( v63 != (KSPIN_LOCK *)((char *)Object + 1160) )
        {
          v64 = v237;
          do
          {
            if ( (_BYTE)v58 == 1 && ((*((_DWORD *)v63 + 10) >> 9) & 7) < v64 )
              IoBoostThreadIoPriority(v63 - 213, v64, 0);
            PsSetIoPriorityThread((__int64)(v63 - 213), v64);
            v63 = (KSPIN_LOCK *)*v63;
            v50 = Object;
          }
          while ( v63 != (KSPIN_LOCK *)((char *)Object + 1160) );
        }
LABEL_258:
        PspUnlockProcessExclusive((__int64)v50, v49);
LABEL_106:
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)Object + 95);
      }
      else
      {
LABEL_107:
        v27 = -1073741558;
      }
      goto LABEL_108;
    case ProcessExecuteFlags:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      if ( ProcessHandle != (HANDLE)-1LL )
        return -1073741811;
      v65 = *(_DWORD *)ProcessInformation;
      v272 = v65;
      CurrentProcess = PsGetCurrentProcess();
      v23 = KeSetExecuteOptions((__int64)CurrentProcess, v65);
      if ( v23 < 0 || (v65 & 3) != 1 )
        return v23;
      MmRemoveExecuteGrants();
      return v23;
    case ProcessTlsInformation:
      if ( ProcessHandle != (HANDLE)-1LL )
        return -1073741811;
      if ( v8 != 1 )
        return -1073741823;
      if ( ProcessInformationLength < 0x28 || (ProcessInformationLength - 16) % 0x18uLL )
        return -1073741820;
      if ( ProcessInformationLength == 40 )
      {
        PoolWithQuotaTag = (struct _KTHREAD *)P;
        v226 = (struct _KTHREAD *)P;
      }
      else
      {
        PoolWithQuotaTag = (struct _KTHREAD *)ExAllocatePoolWithQuotaTag(
                                                (POOL_TYPE)9,
                                                ProcessInformationLength,
                                                0x736C5450u);
        v226 = PoolWithQuotaTag;
        if ( !PoolWithQuotaTag )
          return -1073741670;
      }
      p_LockNV = &PoolWithQuotaTag->Header.LockNV;
      v244 = &PoolWithQuotaTag->Header.LockNV;
      memmove(PoolWithQuotaTag, (const void *)v5, v4);
      if ( PoolWithQuotaTag->Header.SignalState < 2u
        && (PoolWithQuotaTag->Header.LockNV & 0xFFFFFFFE) == 0
        && (Flink_low = LODWORD(PoolWithQuotaTag->Header.WaitListHead.Flink), (_DWORD)Flink_low)
        && (unsigned int)(v4 - 16) / 0x18uLL == Flink_low )
      {
        v76 = 0;
        v225 = 0;
        do
        {
          if ( *((_DWORD *)&PoolWithQuotaTag->Header.WaitListHead.Blink + 6 * v76) )
            goto LABEL_287;
          v225 = ++v76;
        }
        while ( v76 < (unsigned int)Flink_low );
        v77 = PsGetCurrentProcess();
        v78 = v77;
        Object = v77;
        v229 = 0;
        if ( (PoolWithQuotaTag->Header.LockNV & 1) != 0 )
        {
          v79 = v77[1].ActiveProcessors.Bitmap[7];
          if ( !v79 || (v80 = *(_WORD *)(v79 + 8), v80 != 332) && v80 != 452 )
          {
LABEL_287:
            v27 = -1073741811;
            goto LABEL_320;
          }
          v229 = 1;
        }
        v81 = v229 ^ 1;
        Alignment = 4 * v81 + 4;
        v243 = 4 * v81 + 4;
        v239 = v5;
        v225 = 0;
        v27 = 0;
        v227 = 0;
        v82 = 0LL;
        for ( k = v78; ; k = Object )
        {
          Handle = (HANDLE)PsGetNextProcessThread(k, v82);
          v84 = Handle;
          if ( !Handle || v225 >= LODWORD(PoolWithQuotaTag->Header.WaitListHead.Flink) )
            break;
          if ( (*((_DWORD *)Handle + 29) & 0x400) == 0 && ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)Handle + 215) )
          {
            v85 = v84[30];
            v254 = v85;
            if ( v229 )
            {
              v86 = (char *)(v85 + 8236);
              v242 = v85 + 8236;
              LODWORD(v87) = PtrToUlong((const void *)*(unsigned int *)(v85 + 8236));
              v88 = v87;
              v241 = v87;
            }
            else
            {
              v86 = (char *)(v85 + 88);
              v242 = v85 + 88;
              v88 = *(char **)(v85 + 88);
              v241 = v88;
            }
            if ( v88 )
            {
              if ( PoolWithQuotaTag->Header.SignalState == 1 )
              {
                if ( v88 == v86 )
                {
                  v241 = 0LL;
                }
                else
                {
                  Flink_high = HIDWORD(PoolWithQuotaTag->Header.WaitListHead.Flink);
                  v90 = v243 * Flink_high;
                  if ( v243 * Flink_high )
                  {
                    if ( ((Alignment - 1) & (unsigned int)v88) != 0 )
                      ExRaiseDatatypeMisalignment();
                    if ( (unsigned __int64)&v88[v90] > 0x7FFFFFFF0000LL || &v88[v90] < v88 )
                    {
                      MEMORY[0x7FFFFFFF0000] = 0;
                      Flink_high = (unsigned int)p_LockNV[3];
                    }
                  }
                  v91 = (volatile void **)(&PoolWithQuotaTag->SListFaultAddress + 3 * v225);
                  ProbeForWrite(*v91, v243 * Flink_high, Alignment);
                  memmove((void *)*v91, v88, v243 * HIDWORD(PoolWithQuotaTag->Header.WaitListHead.Flink));
                  _InterlockedOr(v223, 0);
                  v85 = v254;
                }
                v92 = v225;
                *(_DWORD *)(v239 + 24LL * v225 + 16) |= 1u;
                v93 = *(const void **)&v244[6 * v92 + 6];
                if ( v229 )
                  *(_DWORD *)(v85 + 8236) = PtrToUlong(v93);
                else
                  *(_QWORD *)(v85 + 88) = v93;
                v94 = v239 + 24LL * v225;
                *(_QWORD *)(v94 + 32) = *((_QWORD *)Handle + 200);
                *(_QWORD *)(v94 + 24) = v241;
                *(_DWORD *)(v94 + 16) ^= 3u;
                ++v225;
              }
              else
              {
                v95 = 24LL * v225;
                *(_DWORD *)(v239 + v95 + 16) |= 1u;
                v96 = (unsigned int)v244[3];
                if ( v229 )
                {
                  v97 = (unsigned __int64)&v88[4 * v96];
                  if ( v97 >= 0x7FFFFFFF0000LL )
                    v97 = 0x7FFFFFFF0000LL;
                  LODWORD(v98) = PtrToUlong((const void *)*(unsigned int *)v97);
                  v99 = v98;
                  v242 = v98;
                  v100 = PtrToUlong(*(const void **)((char *)&PoolWithQuotaTag->SListFaultAddress + v95));
                  v101 = (unsigned __int64)&v241[4 * HIDWORD(PoolWithQuotaTag->Header.WaitListHead.Flink)];
                  if ( v101 >= 0x7FFFFFFF0000LL )
                    v101 = 0x7FFFFFFF0000LL;
                  *(_DWORD *)v101 = v100;
                }
                else
                {
                  v102 = (unsigned __int64)&v88[8 * v96];
                  if ( v102 >= 0x7FFFFFFF0000LL )
                    v102 = 0x7FFFFFFF0000LL;
                  v99 = *(_QWORD *)v102;
                  v242 = *(_QWORD *)v102;
                  v103 = (unsigned __int64)&v241[8 * HIDWORD(PoolWithQuotaTag->Header.WaitListHead.Flink)];
                  if ( v103 >= 0x7FFFFFFF0000LL )
                    v103 = 0x7FFFFFFF0000LL;
                  *(_QWORD *)v103 = *(void **)((char *)&PoolWithQuotaTag->SListFaultAddress + v95);
                }
                v104 = 3LL * v225;
                v105 = v239;
                *(_QWORD *)(v239 + 8 * v104 + 24) = v99;
                *(_DWORD *)(v105 + 8 * v104 + 16) ^= 3u;
                ++v225;
              }
            }
            ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)Handle + 215);
          }
          v82 = Handle;
        }
        if ( Handle )
          ObfDereferenceObjectWithTag(Handle, 0x6E457350u);
      }
      else
      {
        v27 = -1073741820;
      }
LABEL_320:
      if ( PoolWithQuotaTag == (struct _KTHREAD *)P )
        return v27;
      ExFreePoolWithTag(PoolWithQuotaTag, 0);
      return v27;
    case ProcessPagePriority:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v67 = *(_DWORD *)ProcessInformation;
      v240 = v67;
      if ( v67 > (unsigned int)MmGetDefaultPagePriority() || v67 < (unsigned int)MiCreateSystemWsles() )
        return -1073741811;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v8,
                 0x79517350u,
                 &Object,
                 0LL);
      v27 = result;
      if ( result < 0 )
        return result;
      if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)Object + 95) )
        goto LABEL_107;
      v49 = (__int64)v226;
      PspLockProcessExclusive((__int64)Object, (__int64)v226);
      v68 = (volatile signed __int32 *)Object;
      v69 = *((_DWORD *)Object + 192);
      v70 = v240 << 12;
      do
      {
        v71 = v69;
        v69 = _InterlockedCompareExchange(v68 + 192, v70 | v69 & 0xFFFF8FFF, v69);
      }
      while ( v69 != v71 );
      v50 = Object;
      v72 = (_QWORD *)*((_QWORD *)Object + 145);
      if ( v72 != (_QWORD *)((char *)Object + 1160) )
      {
        v73 = v240;
        do
        {
          PsSetPagePriorityThread((__int64)(v72 - 213), v73);
          v72 = (_QWORD *)*v72;
          v50 = Object;
        }
        while ( v72 != (_QWORD *)((char *)Object + 1160) );
      }
      goto LABEL_258;
    case ProcessInstrumentationCallback:
      if ( ((ProcessInformationLength - 8) & 0xFFFFFFF7) != 0 )
        return -1073741820;
      v54 = 0;
      if ( ProcessInformationLength == 8 )
      {
        *(_QWORD *)&v245 = 0LL;
        v106 = *(_QWORD *)ProcessInformation;
        *((_QWORD *)&v245 + 1) = *(_QWORD *)ProcessInformation;
      }
      else
      {
        v245 = *(_OWORD *)ProcessInformation;
        v106 = *((_QWORD *)&v245 + 1);
      }
      if ( DWORD1(v245) )
        return -1073741811;
      if ( (_DWORD)v245 != DWORD1(v245) )
        return -1073741736;
      if ( v106 != (__int64)(v106 << 16) >> 16 )
        return -1073741811;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v8,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result >= 0 )
      {
        v107 = PsGetCurrentProcess();
        v108 = SeSinglePrivilegeCheck(SeDebugPrivilege, v8);
        v19 = Object;
        if ( v108 || Object == v107 )
        {
          v109 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)Object + 95);
          v110 = (struct _EX_RUNDOWN_REF *)Object;
          if ( !v109 )
          {
            ObfDereferenceObjectWithTag(Object, 0x79517350u);
            return -1073741558;
          }
          v111 = *((_QWORD *)Object + 133);
          v113 = 0;
          if ( v111 )
          {
            v112 = *(_WORD *)(v111 + 8);
            if ( v112 == 332 || v112 == 452 )
              v113 = 1;
          }
          v114 = v107[1].ActiveProcessors.Bitmap[7];
          if ( v113 )
          {
            if ( v114 )
            {
              v119 = *(_WORD *)(v114 + 8);
              if ( v119 == 332 || v119 == 452 )
              {
                KeStackAttachProcess((PRKPROCESS)Object, &ApcState);
                if ( v106 < MmGetMaximumUserAddress() && (unsigned int)MmValidateUserCallTarget(v106, 1LL) )
                {
                  v120 = 0LL;
                  v121 = (__int64 *)*((_QWORD *)Object + 133);
                  if ( v121 )
                    v120 = *v121;
                  *(_DWORD *)(v120 + 1160) = DWORD2(v245);
                  KeUnstackDetachProcess(&ApcState);
                  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)Object + 95);
                }
                else
                {
                  v54 = -1073741811;
                  KeUnstackDetachProcess(&ApcState);
                  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)Object + 95);
                }
                goto LABEL_206;
              }
            }
          }
          else if ( !v114 || (v115 = *(_WORD *)(v114 + 8), v115 != 332) && v115 != 452 )
          {
            KeStackAttachProcess((PRKPROCESS)Object, &ApcState);
            if ( !(unsigned int)MmValidateUserCallTarget(v106, 0LL) )
              v54 = -1073741811;
            KeUnstackDetachProcess(&ApcState);
            v110 = (struct _EX_RUNDOWN_REF *)Object;
            if ( v54 >= 0 )
            {
              v116 = (__int64)v226;
              PspLockProcessExclusive((__int64)Object, (__int64)v226);
              *((_QWORD *)Object + 89) = v106;
              v117 = Object;
              v118 = (volatile signed __int32 *)*((_QWORD *)Object + 145);
              if ( v118 != (volatile signed __int32 *)((char *)Object + 1160) )
              {
                while ( 1 )
                {
                  if ( v106 )
                    _interlockedbittestandset(v118 - 426, 0x19u);
                  else
                    _interlockedbittestandreset(v118 - 426, 0x19u);
                  v118 = *(volatile signed __int32 **)v118;
                  v117 = Object;
                  if ( v118 == (volatile signed __int32 *)((char *)Object + 1160) )
                    break;
                  v106 = *((_QWORD *)&v245 + 1);
                }
              }
              PspUnlockProcessExclusive((__int64)v117, v116);
              ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)Object + 95);
              goto LABEL_206;
            }
LABEL_364:
            ExReleaseRundownProtection_0(v110 + 95);
LABEL_206:
            ObfDereferenceObjectWithTag(Object, 0x79517350u);
            return v54;
          }
          v54 = -1073741637;
          goto LABEL_364;
        }
LABEL_89:
        ObfDereferenceObjectWithTag(v19, 0x79517350u);
        return -1073741727;
      }
      return result;
    case ProcessThreadStackAllocation:
      if ( ProcessHandle != (HANDLE)-1LL )
        return -1073741811;
      v122 = 0LL;
      if ( ProcessInformationLength == 40 )
      {
        if ( v8 )
        {
          v285 = *(_OWORD *)ProcessInformation;
          v286 = *((_OWORD *)ProcessInformation + 1);
          v287 = *((_QWORD *)ProcessInformation + 4);
          v122 = (char *)ProcessInformation + 32;
          v5 = (__int64)&v285;
        }
        v123 = *(unsigned int *)v5;
        if ( (unsigned int)v123 > 0x40 || *(_DWORD *)(v5 + 4) | *(_DWORD *)(v5 + 8) | *(_DWORD *)(v5 + 12) )
          return -1073741811;
        v5 += 16LL;
      }
      else
      {
        if ( ProcessInformationLength != 24 )
          return -1073741820;
        v123 = 0LL;
        if ( v8 )
        {
          v286 = *(_OWORD *)ProcessInformation;
          v122 = (char *)ProcessInformation + 16;
          v5 = (__int64)&v286;
        }
      }
      if ( !*(_QWORD *)v5 )
        return -1073741811;
      v276 = *(_QWORD *)v5;
      *(_QWORD *)(v5 + 16) = 0LL;
      result = MmAllocateUserStack(v5 + 16, *(_QWORD *)(v5 + 8), &v276, v123, 0);
      if ( result >= 0 && v8 )
        *(_QWORD *)v122 = *(_QWORD *)(v5 + 16);
      return result;
    case ProcessAffinityUpdateMode:
      if ( ProcessHandle != (HANDLE)-1LL )
        return -1073741811;
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v248 = *(_DWORD *)ProcessInformation;
      if ( (v248 & 0xFFFFFFFC) != 0 )
        return -1073741811;
      return PspSetProcessAffinityUpdateMode(CurrentThread, &v248);
    case ProcessMemoryAllocationMode:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v124 = *(_DWORD *)ProcessInformation;
      v275 = v124;
      if ( (v124 & 0xFFFFFFFE) != 0 )
        return -1073741811;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v8,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      if ( (v124 & 1) != 0 )
        _InterlockedOr((volatile signed __int32 *)Object + 193, 0x200000u);
      else
        _InterlockedAnd((volatile signed __int32 *)Object + 193, 0xFFDFFFFF);
      goto LABEL_80;
    case ProcessTokenVirtualizationEnabled:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v279 = *(_DWORD *)ProcessInformation;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v8,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v125 = PsReferencePrimaryToken((PEPROCESS)Object);
      SeSetVirtualizationToken(v125);
      ObfDereferenceObject(v125);
      goto LABEL_80;
    case ProcessConsoleHostProcess:
      if ( ProcessInformationLength != 8 )
        return -1073741820;
      if ( ProcessHandle != (HANDLE)-1LL )
        return -1073741811;
      v126 = *(_QWORD *)ProcessInformation;
      v293 = v126;
      if ( (v126 & 3) != 1 )
        return -1073741811;
      PsGetCurrentProcess()[1].ActiveProcessors.Bitmap[0] = v126;
      return 0;
    case ProcessMitigationPolicy:
      v127 = 0;
      if ( ProcessInformationLength != 8 )
        return -1073741820;
      v228 = *(HANDLE *)ProcessInformation;
      if ( ProcessHandle != (HANDLE)-1LL && (_DWORD)v228 != 2 )
        return -1073741811;
      break;
    case ProcessDynamicFunctionTableInformation:
      if ( ProcessHandle != (HANDLE)-1LL )
        return -1073741811;
      if ( ProcessInformationLength != 16 )
        return -1073741820;
      v282 = *(_OWORD *)ProcessInformation;
      if ( BYTE8(v282) )
        return RtlRemoveDynamicFunctionTable(v282);
      else
        return RtlInsertDynamicFunctionTable(v282);
    case ProcessHandleCheckingMode:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v185 = *(_DWORD *)ProcessInformation;
      v280 = v185;
      if ( (v185 & 0xFFFFFFFE) != 0 )
        return -1073741811;
      v54 = 0;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v8,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v186 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)Object);
      if ( v186 )
      {
        ExEnableHandleExceptions(v186, v185 & 1);
LABEL_685:
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)Object + 95);
      }
      else
      {
LABEL_686:
        v54 = -1073741558;
      }
      goto LABEL_206;
    case ProcessRevokeFileHandles:
      v187 = 0LL;
      v258 = 0LL;
      if ( v8 != 1 )
        goto LABEL_699;
      if ( (unsigned __int64)ProcessInformation >= 0x7FFFFFFF0000LL )
        v5 = 0x7FFFFFFF0000LL;
      v188 = *(_DWORD *)v5;
      v255 = v188;
      v189 = *(void **)(v5 + 8);
      Src = v189;
      if ( !(_WORD)v188 )
        return -1073741811;
      if ( ((unsigned __int8)v189 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v190 = (unsigned __int64)v189 + (unsigned __int16)v188;
      if ( v190 > 0x7FFFFFFF0000LL || v190 < (unsigned __int64)v189 )
        MEMORY[0x7FFFFFFF0000] = 0;
      v191 = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned __int16)v255, 0x6E497350u);
      v187 = v191;
      v258 = v191;
      if ( !v191 )
        return -1073741670;
      memmove(v191, Src, (unsigned __int16)v255);
      Src = v187;
      v5 = (__int64)&v255;
      v294 = &v255;
LABEL_699:
      v27 = ObReferenceObjectByHandleWithTag(
              ProcessHandle,
              0x2000u,
              (POBJECT_TYPE)PsProcessType,
              v8,
              0x79517350u,
              &Object,
              0LL);
      if ( v27 >= 0 )
      {
        v11 = IoRevokeHandlesForProcess(v5, Object);
        if ( v187 )
          ExFreePoolWithTag(v187, 0);
        goto LABEL_70;
      }
      if ( !v187 )
        return v27;
      ExFreePoolWithTag(v187, 0);
      return v27;
    case ProcessWorkingSetControl:
      return MmProcessWorkingSetControl((ULONG_PTR)ProcessHandle);
    case ProcessCheckStackExtentsMode:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v8,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v192 = *(_DWORD *)v5 != 0;
      v264 = *(_DWORD *)v5 != 0;
      if ( PsGetCurrentProcess() == Object )
      {
        v27 = -1073741790;
      }
      else if ( SeSinglePrivilegeCheck(SeDebugPrivilege, v8) )
      {
        v27 = 0;
        KeSetCheckStackExtentsProcess(Object, v192);
        if ( !v192 && (*((_DWORD *)Object + 192) & 0x20000) != 0 )
          _InterlockedAnd((volatile signed __int32 *)Object + 192, 0xFFFDFFFF);
      }
      else
      {
        v27 = -1073741727;
      }
      goto LABEL_108;
    case ProcessMemoryExhaustion:
      if ( ProcessInformationLength != 16 )
        return -1073741820;
      v300 = *(_OWORD *)ProcessInformation;
      if ( (_WORD)v300 != 1 || DWORD1(v300) )
        return -1073741811;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v8,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      if ( *((_QWORD *)&v300 + 1) )
        _InterlockedOr((volatile signed __int32 *)Object + 193, 0x100u);
      else
        _InterlockedAnd((volatile signed __int32 *)Object + 193, 0xFFFFFEFF);
      goto LABEL_80;
    case ProcessFaultInformation:
      if ( ProcessInformationLength != 8 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v8,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v277 = *(_QWORD *)v5;
      v11 = PsSetProcessFaultInformation(Object, &v277);
      goto LABEL_70;
    case ProcessCommitReleaseInformation:
      if ( ProcessInformationLength != 32 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x2001u,
                 (POBJECT_TYPE)PsProcessType,
                 v8,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v284 = *(__m256i *)v5;
      if ( v284.m256i_i32[0] != 3 )
      {
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        return -1073741735;
      }
      if ( (v284.m256i_i32[1] & 0xFFFFFFF8) != 0
        || *(_OWORD *)&v284.m256i_u64[1] != 0LL
        || ((((unsigned __int32)v284.m256i_i32[1] >> 1) & 1) != 0 || (v284.m256i_i8[4] & 4) != 0)
        && (v284.m256i_i8[4] & 1) == 0 )
      {
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        return -1073741811;
      }
      if ( (((unsigned __int32)v284.m256i_i32[1] >> 1) & 1) != 0 || (v284.m256i_i8[4] & 4) != 0 )
        v11 = MmReleaseCommitForMemResetPages(
                (volatile signed __int32 *)Object,
                ((unsigned __int32)v284.m256i_i32[1] >> 2) & 1);
      else
        v11 = MmSetCommitReleaseEligibility((__int64)Object, v284.m256i_i8[4] & 1);
LABEL_70:
      v14 = Object;
LABEL_71:
      ObfDereferenceObjectWithTag(v14, 0x79517350u);
      return v11;
    case ProcessDefaultCpuSetsInformation:
    case ProcessAllowedCpuSetsInformation:
      if ( (ProcessInformationLength & 7) != 0 || ProcessInformationLength > 0xA0 )
        return -1073741820;
      memmove(v304, ProcessInformation, ProcessInformationLength);
      v193 = (unsigned int)v4 >> 3;
      if ( Alignment == 67 )
      {
        result = ExCpuSetResourceManagerAccessCheck(v8);
        if ( result < 0 )
          return result;
      }
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x2000u,
                 (POBJECT_TYPE)PsProcessType,
                 v8,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v11 = KeSetCpuSetsProcess((__int64)Object, v193, v304);
      goto LABEL_70;
    case ProcessSubsystemProcess:
      Object = 0LL;
      if ( (BYTE1(PsGetCurrentProcess()[2].Header.WaitListHead.Flink) & 1) == 0 )
        return -1073741727;
      v11 = ObReferenceObjectByHandle(ProcessHandle, 0x200u, (POBJECT_TYPE)PsProcessType, v8, &v278, 0LL);
      Object = v278;
      if ( v11 < 0 )
        return v11;
      _InterlockedOr((volatile signed __int32 *)v278 + 435, 0x40u);
      ObfDereferenceObject(Object);
      return v11;
    case ProcessInPrivate:
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v8,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      _InterlockedOr((volatile signed __int32 *)Object + 192, 0x80000000);
      goto LABEL_80;
    case ProcessRaiseUMExceptionOnInvalidHandleClose:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v195 = *(_DWORD *)ProcessInformation;
      v281 = *(_DWORD *)ProcessInformation;
      v54 = 0;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v8,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v196 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)Object);
      if ( !v196 )
        goto LABEL_686;
      ExEnableRaiseUMExceptionOnInvalidHandleClose(v196, v195);
      goto LABEL_685;
    case ProcessIumChallengeResponse:
      return PsIumEnableOnDemandDebugWithResponse(ProcessHandle, ProcessInformation, ProcessInformationLength);
    case ProcessHighGraphicsPriorityInformation:
      if ( ProcessInformationLength != 1 )
        return -1073741820;
      v197 = *(_BYTE *)ProcessInformation;
      v235 = *(_BYTE *)ProcessInformation;
      if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, v8) )
        return -1073741727;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x2000u,
                 (POBJECT_TYPE)PsProcessType,
                 v8,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      if ( v197 )
        _InterlockedOr((volatile signed __int32 *)Object + 435, 0x200u);
      else
        _InterlockedAnd((volatile signed __int32 *)Object + 435, 0xFFFFFDFF);
      goto LABEL_80;
    case ProcessPowerThrottlingState:
      if ( ProcessInformationLength != 12 )
        return -1073741820;
      v298 = *(HANDLE *)ProcessInformation;
      v198 = *((_DWORD *)ProcessInformation + 2);
      v299 = v198;
      if ( (_DWORD)v298 != 1 || (HIDWORD(v298) & 0xFFFFFFFC) != 0 || (~HIDWORD(v298) & v198) != 0 )
        return -1073741811;
      ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost);
      if ( !ExtensionTable )
        return -1073741822;
      v200 = ObReferenceObjectByHandleWithTag(
               ProcessHandle,
               0x2000u,
               (POBJECT_TYPE)PsProcessType,
               v8,
               0x79517350u,
               &Object,
               0LL);
      if ( v200 >= 0 )
      {
        v201 = (*(__int64 (__fastcall **)(PVOID, HANDLE *))(ExtensionTable + 8))(Object, &v298);
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost);
        return v201;
      }
      else
      {
        ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost);
        return v200;
      }
    case ProcessDisableSystemAllowedCpuSets:
      result = ExCpuSetResourceManagerAccessCheck(v8);
      if ( result < 0 )
        return result;
      if ( (_DWORD)v4 != 1 )
        return -1073741820;
      v194 = *(_BYTE *)v5;
      v234 = v194;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x2000u,
                 (POBJECT_TYPE)PsProcessType,
                 v8,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      if ( v194 )
        _InterlockedOr((volatile signed __int32 *)Object + 192, 0x8000000u);
      else
        _InterlockedAnd((volatile signed __int32 *)Object + 192, 0xF7FFFFFF);
      KeRecomputeCpuSetAffinityProcess((__int64)Object);
      goto LABEL_80;
    case ProcessEnergyTrackingState:
      if ( ProcessInformationLength < 8 )
        return -1073741820;
      v202 = 144;
      memset(v303, 0, sizeof(v303));
      if ( (unsigned int)v4 < 0x90 )
        v202 = v4;
      memmove(v303, (const void *)v5, v202);
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v8,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v203 = PoSetProcessEnergyTrackingState(Object, v303);
      v15 = Object;
      if ( v203 >= 0 )
        goto LABEL_81;
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      return v203;
    case ProcessManageWritesToExecutableMemory:
      return -1073741637;
    case ProcessTelemetryCoverage:
      if ( ProcessInformationLength != 24 )
        return -1073741820;
      *(_QWORD *)pszDest = 0LL;
      v306 = 0LL;
      v307 = 0LL;
      v308 = 0LL;
      v309 = 0LL;
      v310 = 0LL;
      v311 = 0LL;
      v312 = 0LL;
      v313 = 0;
      v204 = *(_OWORD *)ProcessInformation;
      *(_OWORD *)pszSrc = v204;
      v261 = *((_QWORD *)ProcessInformation + 2);
      v205 = (const char *)v204;
      if ( (unsigned __int64)(v204 + 65) > 0x7FFFFFFF0000LL || (__int64)v204 + 65 < (unsigned __int64)v204 )
      {
        MEMORY[0x7FFFFFFF0000] = 0;
        v205 = pszSrc[0];
      }
      RtlStringCbCopyA(pszDest, 0x41uLL, v205);
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x220u,
                 (POBJECT_TYPE)PsProcessType,
                 v8,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      pszSrc[0] = pszDest;
      v313 = 0;
      v23 = EtwSetProcessTelemetryCoverage(Object, pszSrc);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      *(_DWORD *)(v5 + 12) = HIDWORD(pszSrc[1]);
      *(_DWORD *)(v5 + 16) = v261;
      return v23;
    case ProcessEnableReadWriteVmLogging:
    case ProcessEnableLogging:
      if ( ProcessInformationClass == ProcessEnableReadWriteVmLogging && !ProcessInformationLength
        || ProcessInformationClass == ProcessEnableLogging && ProcessInformationLength < 4 )
      {
        return -1073741820;
      }
      if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, v8) && !SeSinglePrivilegeCheck(SeTcbPrivilege, v8) )
        return -1073741727;
      if ( Alignment == 87 )
        v206 = *(_BYTE *)v5 & 1 ^ (*(_BYTE *)v5 & 1 ^ *(_BYTE *)v5) & 2;
      else
        v206 = *(_DWORD *)v5;
      v232 = v206;
      if ( (v206 & 0xFFFFFFF0) != 0 )
        return -1073741811;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x2000u,
                 (POBJECT_TYPE)PsProcessType,
                 v8,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      _InterlockedAnd((volatile signed __int32 *)Object + 435, 0xFFE7FFFF);
      v207 = (((v232 >> 2) & 1) << 19) | 0x100000;
      if ( (v232 & 8) == 0 )
        v207 = ((v232 >> 2) & 1) << 19;
      _InterlockedOr((volatile signed __int32 *)Object + 435, v207);
      _InterlockedAnd((volatile signed __int32 *)Object + 192, 0xFCFFFFFF);
      v208 = ((v232 & 1) << 24) | 0x2000000;
      if ( (v232 & 2) == 0 )
        v208 = (v232 & 1) << 24;
      _InterlockedOr((volatile signed __int32 *)Object + 192, v208);
      goto LABEL_80;
    case ProcessDebugAuthInformation:
      return SeCodeIntegritySetInformationProcess(
               ProcessHandle,
               (unsigned int)ProcessInformationClass,
               ProcessInformation,
               ProcessInformationLength);
    case ProcessSystemResourceManagement:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v209 = *(_DWORD *)ProcessInformation;
      v262 = v209;
      if ( (v209 & 0xFFFFFFFE) != 0 )
        return -1073741811;
      if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, v8) )
        return -1073741727;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x2000u,
                 (POBJECT_TYPE)PsProcessType,
                 v8,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      PspSetProcessForegroundBackgroundRequest((__int64)Object, v209 & 1, 1);
LABEL_80:
      v15 = Object;
LABEL_81:
      ObfDereferenceObjectWithTag(v15, 0x79517350u);
      return 0;
    case ProcessLoaderDetour:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v210 = *(_DWORD *)ProcessInformation;
      v263 = *(_DWORD *)ProcessInformation;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x2000u,
                 (POBJECT_TYPE)PsProcessType,
                 v8,
                 0x79517350u,
                 &Object,
                 0LL);
      v27 = result;
      if ( result < 0 )
        return result;
      if ( Object == PsGetCurrentProcess() && v210 )
      {
        v211 = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost);
        if ( v211 )
        {
          (*(void (__fastcall **)(PVOID, _QWORD))(v211 + 40))(Object, v210);
          ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost);
        }
      }
      else
      {
LABEL_127:
        v27 = -1073741811;
      }
      goto LABEL_108;
    case ProcessCombineSecurityDomainsInformation:
      if ( ProcessInformationLength != 8 )
        return -1073741820;
      v212 = *(HANDLE *)ProcessInformation;
      v289 = *(HANDLE *)ProcessInformation;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x2000u,
                 (POBJECT_TYPE)PsProcessType,
                 v8,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v11 = ObReferenceObjectByHandleWithTag(v212, 0x1000u, (POBJECT_TYPE)PsProcessType, v8, 0x79517350u, &v259, 0LL);
      v14 = Object;
      if ( v11 < 0 )
        goto LABEL_71;
      v11 = PspCombineSecurityDomains(Object, v259);
      ObfDereferenceObjectWithTag(v259, 0x79517350u);
      goto LABEL_70;
    case ProcessLeapSecondInformation:
      if ( ProcessInformationLength != 8 )
        return -1073741820;
      v213 = *(HANDLE *)ProcessInformation;
      v290 = v213;
      if ( ((unsigned int)v213 & 0xFFFFFFFE) != 0 || ProcessHandle != (HANDLE)-1LL )
        return -1073741811;
      v214 = PsGetCurrentProcess();
      Object = v214;
      v215 = v214[1].ActiveProcessors.Bitmap[1];
      if ( !v215 )
        return -1073741790;
      v54 = 0;
      v216 = 0LL;
      v217 = (__int64 *)v214[1].ActiveProcessors.Bitmap[7];
      if ( v217 )
        v216 = *v217;
      v218 = (unsigned __int8)v213 & 1;
      v219 = *(_DWORD *)(v215 + 1984);
      if ( v218 )
        v220 = v219 | 1;
      else
        v220 = v219 & 0xFFFFFFFE;
      *(_DWORD *)(v215 + 1984) = v220;
      if ( v216 )
      {
        v221 = *(_DWORD *)(v216 + 1140);
        if ( v218 )
          v222 = v221 | 1;
        else
          v222 = v221 & 0xFFFFFFFE;
        *(_DWORD *)(v216 + 1140) = v222;
      }
      return v54;
    default:
      return -1073741821;
  }
  v130 = (unsigned __int8 *)PsGetCurrentProcess();
  Object = v130;
  switch ( (int)v228 )
  {
    case 1:
      if ( (HIDWORD(v228) & 0xFFFFFFF0) != 0 )
      {
        v27 = -1073741811;
        goto LABEL_466;
      }
      v131 = (HIDWORD(v228) >> 1) & 1;
      if ( !v131 && (*((_DWORD *)v130 + 520) & 0x10) != 0 )
        goto LABEL_409;
      if ( (BYTE4(v228) & 1) == 0 && (*((_DWORD *)v130 + 520) & 0x40) == 0 )
        goto LABEL_409;
      v132 = (HIDWORD(v228) >> 3) & 1;
      if ( !v132 && (*((_DWORD *)v130 + 520) & 8) != 0 )
        goto LABEL_409;
      if ( v132 )
      {
        if ( !v131 )
        {
          v27 = -1073741776;
          goto LABEL_466;
        }
      }
      else if ( !v131 )
      {
        goto LABEL_415;
      }
      _InterlockedOr((volatile signed __int32 *)v130 + 520, 0x10u);
      v130 = (unsigned __int8 *)Object;
LABEL_415:
      if ( (BYTE4(v228) & 1) != 0 )
      {
        _InterlockedAnd((volatile signed __int32 *)v130 + 520, 0xFFFFFFBF);
        v130 = (unsigned __int8 *)Object;
      }
      if ( v132 )
      {
        _InterlockedOr((volatile signed __int32 *)v130 + 520, 8u);
        v130 = (unsigned __int8 *)Object;
      }
      v27 = 0;
      goto LABEL_466;
    case 2:
      v138 = HIDWORD(v228);
      if ( (HIDWORD(v228) & 0xFFFFFFF0) != 0 )
      {
        v27 = -1073741811;
        goto LABEL_466;
      }
      if ( (BYTE4(v228) & 1) != 0 && (BYTE4(v228) & 8) != 0 )
        v138 = HIDWORD(v228) & 0xFFFFFFF7;
      v139 = v138 & 1;
      if ( (v138 & 1) == 0 && ((v138 & 2) != 0 || (v138 & 4) != 0) )
      {
        v27 = -1073741811;
        goto LABEL_466;
      }
      if ( (unsigned int)PsIsSystemWideMitigationOptionSet(9LL) )
      {
        v130 = (unsigned __int8 *)Object;
        goto LABEL_465;
      }
      if ( ProcessHandle == (HANDLE)-1LL )
      {
        v130 = (unsigned __int8 *)Object;
      }
      else
      {
        v27 = ObReferenceObjectByHandleWithTag(
                ProcessHandle,
                0x200u,
                (POBJECT_TYPE)PsProcessType,
                v8,
                0x79517350u,
                &Object,
                0LL);
        if ( v27 < 0 )
          goto LABEL_430;
        v127 = 1;
        v140 = PsGetCurrentProcess();
        v130 = (unsigned __int8 *)Object;
        if ( Object != v140 )
        {
          if ( (*((_DWORD *)Object + 520) & 0x100) != 0 )
          {
            memset(&SubjectContext, 0, sizeof(SubjectContext));
            SeCaptureSubjectContextEx(0LL, (PEPROCESS)Object, &SubjectContext);
            IsSandboxedToken = RtlIsSandboxedToken(&SubjectContext, 1);
            SeReleaseSubjectContext(&SubjectContext);
            if ( RtlIsSandboxedToken(0LL, v8)
              || !IsSandboxedToken
              || (v130 = (unsigned __int8 *)Object, (*((_DWORD *)Object + 520) & 0x400) == 0) )
            {
              v142 = SeSinglePrivilegeCheck(SeDebugPrivilege, v8);
              v130 = (unsigned __int8 *)Object;
              if ( !v142 )
              {
                v27 = -1073741790;
                goto LABEL_466;
              }
            }
          }
          v143 = (v138 >> 3) & 1;
          if ( !v143 && (v138 & 1) == 0 && (*((_DWORD *)v130 + 520) & 0x800) != 0 )
          {
            v27 = -1073741790;
            goto LABEL_466;
          }
          v144 = !(v138 & 1) << 8;
          v145 = v139 << 8;
          if ( !v143 )
            v144 |= 0x800u;
          v146 = v145 | 0x800;
          if ( !v143 )
            v146 = v145;
          if ( ((v138 >> 1) & 1) == 0 )
            v144 |= 0x200u;
          v147 = v146 | 0x200;
          if ( ((v138 >> 1) & 1) == 0 )
            v147 = v146;
          v148 = v147 | 0x400;
          v150 = (v138 >> 2) & 1;
          v149 = v150 == 0;
          goto LABEL_515;
        }
      }
      v151 = 256;
      if ( (v138 & 1) == 0 && (*((_DWORD *)v130 + 520) & 0x100) != 0 )
      {
        v27 = -1073741790;
        goto LABEL_466;
      }
      v152 = (v138 >> 3) & 1;
      if ( !v152 && (v138 & 1) == 0 && (*((_DWORD *)v130 + 520) & 0x800) != 0 )
      {
        v27 = -1073741790;
        goto LABEL_466;
      }
      v153 = (v138 >> 1) & 1;
      if ( v153 )
      {
        v154 = *((_DWORD *)v130 + 520);
        if ( (v154 & 0x100) != 0 && (v154 & 0x200) == 0 )
        {
          v27 = -1073741790;
          goto LABEL_466;
        }
      }
      v150 = (v138 >> 2) & 1;
      if ( v150 )
      {
        v155 = *((_DWORD *)v130 + 520);
        if ( (v155 & 0x100) != 0 && (v155 & 0x400) == 0 )
        {
          v27 = -1073741790;
          goto LABEL_466;
        }
      }
      v144 = 0;
      if ( v139 )
      {
        v144 = 2048;
      }
      else
      {
        v151 = 0;
        if ( v152 )
          v151 = 2048;
      }
      if ( !v153 )
        v144 |= 0x200u;
      v147 = v151 | 0x200;
      if ( !v153 )
        v147 = v151;
      v148 = v147 | 0x400;
      v149 = v150 == 0;
LABEL_515:
      if ( v149 )
        v148 = v147;
      if ( !v150 )
        v144 |= 0x400u;
      RtlInterlockedSetClearBits((volatile signed __int32 *)v130 + 520, v148, v144);
      v27 = 0;
      v130 = (unsigned __int8 *)Object;
      goto LABEL_466;
    case 3:
      if ( (HIDWORD(v228) & 0xFFFFFFFC) != 0 )
      {
        v27 = -1073741811;
      }
      else if ( ((HIDWORD(v228) >> 1) & 1) != 0 || (BYTE4(v228) & 1) == 0 )
      {
        if ( ((HIDWORD(v228) >> 1) & 1) == 0 || (BYTE4(v228) & 1) != 0 )
        {
          v133 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)v130);
          if ( v133 )
          {
            v27 = -1073741790;
            if ( (unsigned __int8)ExEnableHandleExceptions(v133, BYTE4(v228) & 1) )
              v27 = 0;
            ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)Object + 95);
            v130 = (unsigned __int8 *)Object;
          }
          else
          {
            v27 = -1073741558;
LABEL_430:
            v130 = (unsigned __int8 *)Object;
          }
        }
        else
        {
          v27 = -1073741811;
        }
      }
      else
      {
        v27 = -1073741811;
      }
      goto LABEL_466;
    case 4:
      v134 = HIDWORD(v228);
      if ( (HIDWORD(v228) & 0xFFFFFFFC) != 0 )
      {
        v27 = -1073741811;
        goto LABEL_466;
      }
      if ( (BYTE4(v228) & 1) != 0 && (BYTE4(v228) & 2) != 0 )
      {
        v134 = HIDWORD(v228) & 0xFFFFFFFD;
        HIDWORD(v228) &= ~2u;
      }
      v135 = v134 & 1;
      if ( (v134 & 1) == 0 && (*((_DWORD *)v130 + 520) & 0x1000) != 0 )
      {
        v27 = -1073741790;
        goto LABEL_466;
      }
      v136 = (v134 >> 1) & 1;
      if ( v136 )
        goto LABEL_446;
      if ( v135 )
        goto LABEL_448;
      if ( (*((_DWORD *)v130 + 520) & 0x2000) != 0 )
      {
        v27 = -1073741790;
        goto LABEL_466;
      }
LABEL_446:
      if ( !v135 && !v136 )
        goto LABEL_450;
LABEL_448:
      IsGuiThread = PsIsGuiThread(v226, v128, v129, v130);
      v130 = (unsigned __int8 *)Object;
      if ( IsGuiThread )
      {
        v27 = -1073741431;
      }
      else
      {
LABEL_450:
        v27 = 0;
        if ( v135 )
        {
          _InterlockedOr((volatile signed __int32 *)v130 + 520, 0x3000u);
          v130 = (unsigned __int8 *)Object;
        }
        else if ( v136 )
        {
          _InterlockedOr((volatile signed __int32 *)v130 + 520, 0x2000u);
          v130 = (unsigned __int8 *)Object;
        }
      }
      goto LABEL_466;
    case 6:
      if ( (HIDWORD(v228) & 0xFFFFFFFE) != 0 )
      {
        v27 = -1073741811;
      }
      else if ( (BYTE4(v228) & 1) != 0 || (*((_DWORD *)v130 + 520) & 0x80u) == 0 )
      {
        v27 = 0;
        if ( (BYTE4(v228) & 1) != 0 )
        {
          _InterlockedOr((volatile signed __int32 *)v130 + 520, 0x80u);
          v130 = (unsigned __int8 *)Object;
        }
      }
      else
      {
        v27 = -1073741790;
      }
      goto LABEL_466;
    case 7:
      if ( (HIDWORD(v228) & 0xFFFFFFF8) != 0 )
      {
        v27 = -1073741811;
      }
      else if ( (*((_DWORD *)v130 + 520) & 1) != 0 )
      {
        if ( (BYTE4(v228) & 4) != 0 )
        {
          _InterlockedOr((volatile signed __int32 *)v130 + 520, 4u);
          v27 = 0;
          v130 = (unsigned __int8 *)Object;
        }
        else
        {
          v27 = -1073741790;
        }
      }
      else
      {
        v27 = -1073741790;
      }
      goto LABEL_466;
    case 8:
      v156 = HIDWORD(v228);
      if ( (HIDWORD(v228) & 0xFFFFFFE0) != 0 )
      {
        v27 = -1073741811;
        goto LABEL_466;
      }
      if ( (BYTE4(v228) & 1) != 0 && ((BYTE4(v228) & 8) != 0 || (BYTE4(v228) & 0x10) != 0) )
        v156 = HIDWORD(v228) & 0xFFFFFFE7;
      if ( (v156 & 2) != 0 && (v156 & 0x10) != 0 )
        v156 &= ~0x10u;
      v157 = (v156 >> 3) & 1;
      if ( v157 && (v156 & 0x10) != 0 )
      {
        v27 = -1073741811;
        goto LABEL_466;
      }
      v158 = (v156 >> 1) & 1;
      if ( (v156 & 1) + v158 > 1 )
      {
        v27 = -1073741811;
        goto LABEL_466;
      }
      if ( (v156 & 1) != 0 )
        goto LABEL_557;
      if ( v130[1736] >= 8u && v130[1737] >= 8u )
      {
        v27 = -1073741790;
        goto LABEL_466;
      }
      if ( v158 )
        goto LABEL_557;
      LOBYTE(v128) = 6;
      if ( (unsigned int)SeCompareSigningLevels(v130[1736], v128) )
      {
        LOBYTE(v128) = 6;
        if ( (unsigned int)SeCompareSigningLevels(*((unsigned __int8 *)Object + 1737), v128) )
        {
          v27 = -1073741790;
          v130 = (unsigned __int8 *)Object;
          goto LABEL_466;
        }
      }
      v130 = (unsigned __int8 *)Object;
LABEL_557:
      if ( (*((_DWORD *)v130 + 520) & 0x3000000) != 0 && (v156 & 0x10) == 0 && !v158 && !v157 && (v156 & 1) == 0 )
      {
        v27 = -1073741790;
        goto LABEL_466;
      }
      v159 = 0;
      v27 = 0;
      if ( (v156 & 1) == 0 )
      {
        if ( !v158 )
          goto LABEL_574;
        LOBYTE(v128) = 6;
        if ( !(unsigned int)SeCompareSigningLevels(v130[1736], v128) )
        {
          v27 = -1073741790;
          v130 = (unsigned __int8 *)Object;
          goto LABEL_466;
        }
        LOBYTE(v160) = 6;
        if ( (unsigned int)SeCompareSigningLevels(v160, *((unsigned __int8 *)Object + 1737)) )
          *((_BYTE *)Object + 1737) = 6;
        goto LABEL_573;
      }
      if ( v130[1736] < 8u )
      {
        v130[1736] = 8;
        v130 = (unsigned __int8 *)Object;
      }
      if ( v130[1737] < 8u )
      {
        v130[1737] = 8;
LABEL_573:
        v130 = (unsigned __int8 *)Object;
      }
LABEL_574:
      if ( v156 )
        v159 = 0x800000;
      v161 = ((v156 & 8) == 0) << 24;
      v162 = v159 | 0x1000000;
      if ( !v157 )
        v162 = v159;
      v163 = (v156 >> 4) & 1;
      if ( !v163 )
        v161 |= 0x2000000u;
      v164 = v162 | 0x2000000;
      if ( !v163 )
        v164 = v162;
      RtlInterlockedSetClearBits((volatile signed __int32 *)v130 + 520, v164, v161);
      v130 = (unsigned __int8 *)Object;
      goto LABEL_466;
    case 9:
      if ( (HIDWORD(v228) & 0xFFFFFFFC) != 0 )
      {
        v27 = -1073741811;
      }
      else if ( (BYTE4(v228) & 1) != 0 || (*((_DWORD *)v130 + 520) & 0x10000) == 0 )
      {
        if ( (BYTE4(v228) & 1) != 0 || (BYTE4(v228) & 2) != 0 || (*((_DWORD *)v130 + 520) & 0x20000) == 0 )
        {
          v27 = 0;
          if ( (BYTE4(v228) & 1) != 0 )
          {
            RtlInterlockedSetClearBits((volatile signed __int32 *)v130 + 520, 0x10000, 0x20000);
            v130 = (unsigned __int8 *)Object;
          }
          else if ( (BYTE4(v228) & 2) != 0 )
          {
            RtlInterlockedSetClearBits((volatile signed __int32 *)v130 + 520, 0x20000, 0x10000);
            v130 = (unsigned __int8 *)Object;
          }
        }
        else
        {
          v27 = -1073741790;
        }
      }
      else
      {
        v27 = -1073741790;
      }
      goto LABEL_466;
    case 10:
      v165 = HIDWORD(v228);
      if ( (HIDWORD(v228) & 0xFFFFFFE0) == 0 )
      {
        if ( (BYTE4(v228) & 1) != 0 && (BYTE4(v228) & 8) != 0 )
          v165 = HIDWORD(v228) & 0xFFFFFFF7;
        if ( (v165 & 2) != 0 && (v165 & 0x10) != 0 )
          v165 &= ~0x10u;
        v166 = v165 & 1;
        v167 = 0x80000;
        if ( (v165 & 1) != 0 || (*((_DWORD *)v130 + 520) & 0x80000) == 0 )
        {
          v168 = (v165 >> 1) & 1;
          if ( v168 || (*((_DWORD *)v130 + 520) & 0x200000) == 0 )
          {
            v169 = (v165 >> 2) & 1;
            if ( !v169 && (*((_DWORD *)v130 + 520) & 0x40000) != 0 )
            {
              v27 = -1073741790;
              goto LABEL_466;
            }
            v170 = (v165 >> 3) & 1;
            if ( v170 || (v165 & 1) != 0 || (*((_DWORD *)v130 + 520) & 0x100000) == 0 )
            {
              v171 = (v165 >> 4) & 1;
              if ( v171 || v168 || (*((_DWORD *)v130 + 520) & 0x400000) == 0 )
              {
                v172 = 0;
                if ( v166 )
                {
                  v172 = 0x100000;
                }
                else
                {
                  v167 = 0;
                  if ( v170 )
                    v167 = 0x100000;
                }
                if ( v168 )
                {
                  v167 |= 0x200000u;
                  v172 |= 0x400000u;
                }
                else if ( v171 )
                {
                  v167 |= 0x400000u;
                }
                v173 = v167 | 0x40000;
                if ( !v169 )
                  v173 = v167;
                RtlInterlockedSetClearBits((volatile signed __int32 *)v130 + 520, v173, v172);
                v27 = 0;
                v130 = (unsigned __int8 *)Object;
              }
              else
              {
                v27 = -1073741790;
              }
              goto LABEL_466;
            }
          }
        }
LABEL_409:
        v27 = -1073741790;
        goto LABEL_466;
      }
      v27 = -1073741811;
LABEL_466:
      if ( v127 != 1 )
        return v27;
      ObfDereferenceObjectWithTag(v130, 0x79517350u);
      return v27;
    case 13:
      v174 = HIDWORD(v228);
      if ( (HIDWORD(v228) & 0xFFFFFFF8) != 0 )
      {
        v27 = -1073741811;
        goto LABEL_466;
      }
      if ( (BYTE4(v228) & 1) == 0 && (BYTE4(v228) & 4) != 0 )
      {
        v27 = -1073741811;
        goto LABEL_466;
      }
      if ( (BYTE4(v228) & 1) != 0 && (BYTE4(v228) & 2) != 0 )
        v174 = HIDWORD(v228) & 0xFFFFFFFD;
      NoChildProcessRestrictedPolicy = PspGetNoChildProcessRestrictedPolicy(v130);
      v176 = NoChildProcessRestrictedPolicy;
      v177 = v174 & 1;
      if ( (v174 & 1) == 0 && NoChildProcessRestrictedPolicy - 1 <= 1 )
      {
        v27 = -1073741790;
        v130 = (unsigned __int8 *)Object;
        goto LABEL_466;
      }
      v178 = (v174 >> 2) & 1;
      if ( v178 && (_DWORD)v176 == 1 )
      {
        v27 = -1073741790;
        v130 = (unsigned __int8 *)Object;
        goto LABEL_466;
      }
      v179 = (v174 >> 1) & 1;
      if ( v179 )
        goto LABEL_647;
      if ( v177 )
        goto LABEL_648;
      if ( (_DWORD)v176 == 3 )
      {
        v27 = -1073741790;
        v130 = (unsigned __int8 *)Object;
      }
      else
      {
LABEL_647:
        if ( !v177 )
        {
          if ( v179 )
            PspSetNoChildProcessRestrictedPolicy(Object, 3LL, v176);
          goto LABEL_654;
        }
LABEL_648:
        if ( v178 )
          PspSetNoChildProcessRestrictedPolicy(Object, 2LL, v176);
        else
          PspSetNoChildProcessRestrictedPolicy(Object, 1LL, v176);
        v27 = 0;
        v130 = (unsigned __int8 *)Object;
      }
      goto LABEL_466;
    case 14:
      v180 = HIDWORD(v228);
      if ( (HIDWORD(v228) & 0xFFFFFFF0) == 0 )
        goto LABEL_658;
      v27 = -1073741811;
      goto LABEL_466;
    case 16:
      v180 = HIDWORD(v228);
LABEL_658:
      if ( (v180 & 0xFFFFFFFC) != 0 )
      {
        v27 = -1073741811;
        goto LABEL_466;
      }
      if ( (v180 & 1) != 0 && (v180 & 2) != 0 )
        v180 &= ~2u;
      RedirectionTrustPolicy = PspGetRedirectionTrustPolicy((struct _KPROCESS *)v130);
      v182 = v180 & 1;
      if ( (v180 & 1) == 0 && RedirectionTrustPolicy == 1 )
      {
        v27 = -1073741790;
        v130 = (unsigned __int8 *)Object;
        goto LABEL_466;
      }
      v183 = (v180 >> 1) & 1;
      if ( v183 )
        goto LABEL_670;
      if ( v182 )
        goto LABEL_671;
      if ( RedirectionTrustPolicy == 2 )
      {
        v27 = -1073741790;
        v130 = (unsigned __int8 *)Object;
      }
      else
      {
LABEL_670:
        if ( v182 )
        {
LABEL_671:
          v184 = 1;
        }
        else
        {
          if ( !v183 )
          {
LABEL_654:
            v27 = 0;
            v130 = (unsigned __int8 *)Object;
            goto LABEL_466;
          }
          v184 = 2;
        }
        PspSetRedirectionTrustPolicy((struct _KPROCESS *)Object, v184);
        v27 = 0;
        v130 = (unsigned __int8 *)Object;
      }
      goto LABEL_466;
    default:
LABEL_465:
      v27 = -1073741637;
      goto LABEL_466;
  }
}
