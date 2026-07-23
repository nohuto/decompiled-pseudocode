/*
 * XREFs of NtSetInformationProcess @ 0x140674ED0
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentProcess @ 0x140006530 (PsGetCurrentProcess.c)
 *     KeQueryGroupMaskProcess @ 0x14000668C (KeQueryGroupMaskProcess.c)
 *     KeStackAttachProcess @ 0x140013AD0 (KeStackAttachProcess.c)
 *     MmGetSessionId @ 0x14001D490 (MmGetSessionId.c)
 *     KeUnstackDetachProcess @ 0x14003A6B0 (KeUnstackDetachProcess.c)
 *     KeDelayExecutionThread @ 0x14003B180 (KeDelayExecutionThread.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtection_0 @ 0x140043820 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1400438A0 (ExAcquireRundownProtection_0.c)
 *     KeEnterCriticalRegionThread @ 0x140053970 (KeEnterCriticalRegionThread.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x140059060 (PsReturnProcessNonPagedPoolQuota.c)
 *     PsChargeProcessNonPagedPoolQuota @ 0x140073230 (PsChargeProcessNonPagedPoolQuota.c)
 *     PsSetIoPriorityThread @ 0x14007FF38 (PsSetIoPriorityThread.c)
 *     PsSetPagePriorityThread @ 0x140080854 (PsSetPagePriorityThread.c)
 *     RtlStringCbCopyA @ 0x14008AE58 (RtlStringCbCopyA.c)
 *     MmGetDefaultPagePriority @ 0x140097564 (MmGetDefaultPagePriority.c)
 *     PtrToUlong @ 0x1400ADD50 (PtrToUlong.c)
 *     RtlRemoveDynamicFunctionTable @ 0x1400ADFF0 (RtlRemoveDynamicFunctionTable.c)
 *     RtlInsertDynamicFunctionTable @ 0x1400AE3F0 (RtlInsertDynamicFunctionTable.c)
 *     ExAllocatePoolWithQuotaTag @ 0x1400BEF80 (ExAllocatePoolWithQuotaTag.c)
 *     KeSetPriorityAndQuantumProcess @ 0x1400E40B8 (KeSetPriorityAndQuantumProcess.c)
 *     MmSetMemoryPriorityProcess @ 0x1400E46EC (MmSetMemoryPriorityProcess.c)
 *     PspLockProcessExclusive @ 0x1400E504C (PspLockProcessExclusive.c)
 *     PspWriteProcessSecurityDomain @ 0x1400E5284 (PspWriteProcessSecurityDomain.c)
 *     MiCreateSystemWsles @ 0x1400E5550 (MiCreateSystemWsles.c)
 *     RtlInterlockedSetClearBits @ 0x1400E59C0 (RtlInterlockedSetClearBits.c)
 *     IoBoostThreadIoPriority @ 0x1400E61EC (IoBoostThreadIoPriority.c)
 *     ExReleaseExtensionTable @ 0x1400FB6A8 (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x1400FB6C0 (ExGetExtensionTable.c)
 *     KeBoostPriorityThread @ 0x1401064BC (KeBoostPriorityThread.c)
 *     PspLockUnlockProcessExclusive @ 0x140109B18 (PspLockUnlockProcessExclusive.c)
 *     ExCpuSetResourceManagerAccessCheck @ 0x140128F54 (ExCpuSetResourceManagerAccessCheck.c)
 *     KeSetExecuteOptions @ 0x1401375DC (KeSetExecuteOptions.c)
 *     PspUnlockProcessExclusive @ 0x140139388 (PspUnlockProcessExclusive.c)
 *     KeSynchronizeSecurityDomain @ 0x140139958 (KeSynchronizeSecurityDomain.c)
 *     MmRemoveExecuteGrants @ 0x14013B904 (MmRemoveExecuteGrants.c)
 *     KeInitializeGate @ 0x14013C3C4 (KeInitializeGate.c)
 *     KeVerifyGroupAffinity @ 0x14015A778 (KeVerifyGroupAffinity.c)
 *     KeSetCpuSetsProcess @ 0x1401962BC (KeSetCpuSetsProcess.c)
 *     xKdEnumerateDebuggingDevices @ 0x14019E6D0 (xKdEnumerateDebuggingDevices.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     MmGetMaximumUserAddress @ 0x1401BE934 (MmGetMaximumUserAddress.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     IoRevokeHandlesForProcess @ 0x140299A00 (IoRevokeHandlesForProcess.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x1402AD014 (KeRecomputeCpuSetAffinityProcess.c)
 *     MmReleaseCommitForMemResetPages @ 0x1402BC8F4 (MmReleaseCommitForMemResetPages.c)
 *     MmSetCommitReleaseEligibility @ 0x1402BCB14 (MmSetCommitReleaseEligibility.c)
 *     PspLockProcessSharedUnsafe @ 0x14030761C (PspLockProcessSharedUnsafe.c)
 *     PspUnlockProcessSharedUnsafe @ 0x140307890 (PspUnlockProcessSharedUnsafe.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     SeCaptureSubjectContextEx @ 0x1405D0200 (SeCaptureSubjectContextEx.c)
 *     PsReferencePrimaryToken @ 0x1405D59B0 (PsReferencePrimaryToken.c)
 *     RtlIsSandboxedToken @ 0x1405D7B10 (RtlIsSandboxedToken.c)
 *     ObReferenceProcessHandleTable @ 0x1405E67C4 (ObReferenceProcessHandleTable.c)
 *     ProbeForWrite @ 0x1405F07E0 (ProbeForWrite.c)
 *     ObReferenceObjectByHandleWithTag @ 0x1405F0AB0 (ObReferenceObjectByHandleWithTag.c)
 *     SeReleaseSubjectContext @ 0x1405F3180 (SeReleaseSubjectContext.c)
 *     ObReferenceObjectByHandle @ 0x1405FA460 (ObReferenceObjectByHandle.c)
 *     LpcRequestPort @ 0x14060CC90 (LpcRequestPort.c)
 *     SeSinglePrivilegeCheck @ 0x140672D30 (SeSinglePrivilegeCheck.c)
 *     ExEnableRaiseUMExceptionOnInvalidHandleClose @ 0x140672E94 (ExEnableRaiseUMExceptionOnInvalidHandleClose.c)
 *     PspCombineSecurityDomains @ 0x140673D38 (PspCombineSecurityDomains.c)
 *     PsGetNextProcessThread @ 0x1406772C0 (PsGetNextProcessThread.c)
 *     PspSetProcessDefaultHardErrorMode @ 0x1406773C0 (PspSetProcessDefaultHardErrorMode.c)
 *     KeSetAutoAlignmentProcess @ 0x140677474 (KeSetAutoAlignmentProcess.c)
 *     MmAllocateUserStack @ 0x14067749C (MmAllocateUserStack.c)
 *     PspWritePebAffinityInfo @ 0x14067A7C4 (PspWritePebAffinityInfo.c)
 *     PsSetProcessPriorityByClass @ 0x14068E300 (PsSetProcessPriorityByClass.c)
 *     PspSetProcessForegroundBackgroundRequest @ 0x14068E330 (PspSetProcessForegroundBackgroundRequest.c)
 *     ObDereferenceProcessHandleTable @ 0x1406CD9B0 (ObDereferenceProcessHandleTable.c)
 *     EtwSetProcessTelemetryCoverage @ 0x1406D64C0 (EtwSetProcessTelemetryCoverage.c)
 *     PspSetQuotaLimits @ 0x1406D8200 (PspSetQuotaLimits.c)
 *     PoSetProcessEnergyTrackingState @ 0x1406E3AE8 (PoSetProcessEnergyTrackingState.c)
 *     PspSetProcessPriorityClass @ 0x1406E5D18 (PspSetProcessPriorityClass.c)
 *     ExEnableHandleExceptions @ 0x1406E5DCC (ExEnableHandleExceptions.c)
 *     SeSetVirtualizationToken @ 0x1406EC3B4 (SeSetVirtualizationToken.c)
 *     PspSetNoChildProcessRestrictedPolicy @ 0x1406EC7DC (PspSetNoChildProcessRestrictedPolicy.c)
 *     PsIsSystemWideMitigationOptionSet @ 0x1406EE83C (PsIsSystemWideMitigationOptionSet.c)
 *     PspGetNoChildProcessRestrictedPolicy @ 0x1406EEBD8 (PspGetNoChildProcessRestrictedPolicy.c)
 *     MmProcessWorkingSetControl @ 0x1406F54B4 (MmProcessWorkingSetControl.c)
 *     KeSetDisableBoostProcess @ 0x1406F8114 (KeSetDisableBoostProcess.c)
 *     KeSetDisableBoostThread @ 0x14071E0E4 (KeSetDisableBoostThread.c)
 *     PsSetProcessFaultInformation @ 0x14071E780 (PsSetProcessFaultInformation.c)
 *     PsQuitNextProcessThread @ 0x14071EDA0 (PsQuitNextProcessThread.c)
 *     PspSetProcessAffinityUpdateMode @ 0x14072CB94 (PspSetProcessAffinityUpdateMode.c)
 *     SeCompareSigningLevels @ 0x140737430 (SeCompareSigningLevels.c)
 *     SeCheckPrivilegedObject @ 0x140746AB8 (SeCheckPrivilegedObject.c)
 *     ExSystemExceptionFilter @ 0x140747FD0 (ExSystemExceptionFilter.c)
 *     PspAssignPrimaryToken @ 0x140780184 (PspAssignPrimaryToken.c)
 *     KeSetCheckStackExtentsProcess @ 0x14087EE38 (KeSetCheckStackExtentsProcess.c)
 *     MmValidateUserCallTarget @ 0x140898E3C (MmValidateUserCallTarget.c)
 *     ObSetProcessDeviceMap @ 0x1408A0934 (ObSetProcessDeviceMap.c)
 *     PsIsGuiThread @ 0x1408C66C4 (PsIsGuiThread.c)
 *     PsSetProcessHandleTracingInformation @ 0x1408C66D4 (PsSetProcessHandleTracingInformation.c)
 *     PspSetProcessAffinitySafe @ 0x1408C6F78 (PspSetProcessAffinitySafe.c)
 *     PspFreeUserFiberShadowStack @ 0x1408C8D64 (PspFreeUserFiberShadowStack.c)
 *     PspSetupUserFiberShadowStack @ 0x1408C90D4 (PspSetupUserFiberShadowStack.c)
 *     PsIumEnableOnDemandDebugWithResponse @ 0x1408CB284 (PsIumEnableOnDemandDebugWithResponse.c)
 *     SeCodeIntegritySetInformationProcess @ 0x1408D9D50 (SeCodeIntegritySetInformationProcess.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913EC0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtSetInformationProcess(
        HANDLE ProcessHandle,
        PROCESSINFOCLASS ProcessInformationClass,
        PVOID ProcessInformation,
        ULONG ProcessInformationLength)
{
  SIZE_T v4; // r14
  __int64 v5; // rdi
  NTSTATUS v7; // esi
  struct _KTHREAD *CurrentThread; // r15
  unsigned __int8 v9; // r13
  int v10; // eax
  unsigned int v11; // ebx
  NTSTATUS result; // eax
  PVOID v13; // rcx
  _QWORD *v14; // r15
  int v15; // r9d
  NTSTATUS v16; // ecx
  _DWORD *PoolWithQuotaTag; // r15
  __int64 v18; // r8
  unsigned int j; // edx
  _KPROCESS *v20; // rax
  _KPROCESS *v21; // r8
  __int64 v22; // rcx
  __int64 k; // rax
  __int64 v24; // rbx
  __int64 v25; // rdi
  char *v26; // rbx
  char *v27; // r14
  char *v28; // rax
  __int64 v29; // rbx
  __int64 v30; // rax
  unsigned __int64 v31; // rcx
  __int64 v32; // rdi
  unsigned __int64 v33; // rdx
  unsigned __int64 v34; // rcx
  __int64 v35; // rax
  unsigned int v36; // eax
  unsigned __int64 v37; // r8
  __int64 v38; // rcx
  signed __int64 v39; // rax
  NTSTATUS v40; // ebx
  unsigned int v41; // r8d
  __int64 v42; // rdx
  volatile void **v43; // rdi
  __int64 v44; // rcx
  signed __int64 v45; // rdx
  void *v46; // rbx
  PVOID v47; // rcx
  int v48; // ebx
  unsigned __int64 v49; // rax
  void *v50; // r12
  unsigned __int64 v51; // r12
  signed __int64 v52; // rdx
  signed __int64 *v53; // roff
  signed __int64 v54; // r12
  bool v55; // zf
  signed __int64 v56; // rax
  __int64 v57; // rbx
  int v58; // eax
  unsigned int v59; // ecx
  unsigned __int64 v60; // rax
  __int16 v61; // bx
  NTSTATUS v62; // edi
  unsigned int v63; // ebx
  int v64; // r13d
  unsigned int v65; // ebx
  volatile signed __int32 *v66; // r8
  signed __int32 v67; // eax
  signed __int32 v68; // edx
  char *v69; // rcx
  char *v70; // rdi
  int v71; // ebx
  unsigned int v72; // eax
  unsigned __int64 v73; // r14
  volatile signed __int32 *v74; // r9
  signed __int32 v75; // eax
  signed int v76; // r8d
  signed __int32 v77; // edx
  KSPIN_LOCK *v78; // rbx
  signed int v79; // esi
  char v80; // r12
  _KPROCESS *v81; // rax
  volatile signed __int32 *p_Lock; // rdi
  unsigned __int64 v83; // rdx
  int v84; // edx
  int v85; // ecx
  void *v86; // r12
  int v87; // eax
  char v88; // bl
  __int64 v89; // r8
  char v90; // bl
  unsigned __int64 v91; // rax
  __int64 v92; // rdx
  int v93; // ebx
  _KPROCESS *CurrentProcess; // rax
  NTSTATUS v95; // ebx
  unsigned __int64 v96; // rax
  __int64 v97; // rdx
  char v98; // bl
  unsigned int v99; // edx
  int v100; // r10d
  int v101; // r8d
  int v102; // r9d
  int v103; // r11d
  int v104; // edx
  int v105; // eax
  int v106; // ebx
  PACCESS_TOKEN v107; // rbx
  int v108; // ecx
  unsigned __int64 ExtensionTable; // rbx
  NTSTATUS v110; // ebx
  unsigned int v111; // ebx
  unsigned int NoChildProcessRestrictedPolicy; // eax
  __int64 v113; // r8
  int v114; // edx
  int v115; // eax
  int v116; // ebx
  PVOID v117; // rcx
  __int64 v118; // rdx
  unsigned int v119; // r14d
  int v120; // r15d
  __int16 v121; // cx
  unsigned int v122; // r14d
  int v123; // ecx
  int v124; // r15d
  int v125; // r8d
  int v126; // edx
  int v127; // ebx
  __int128 v128; // xmm1
  const char *v129; // r8
  BOOL v130; // edi
  char *v131; // rbx
  int v132; // ebx
  char v133; // di
  PVOID v134; // rcx
  char v135; // al
  PVOID v136; // rcx
  unsigned int v137; // r14d
  _KPROCESS *v138; // rdx
  unsigned __int64 v139; // rcx
  __int64 v140; // rax
  __int64 *v141; // r8
  int v142; // ebx
  _DWORD *PoolWithTag; // rax
  void *v144; // rbx
  int v145; // edi
  __int64 i; // rdx
  __int64 NextProcessThread; // rax
  __int64 v148; // rbx
  unsigned __int8 v149; // bl
  __int64 v150; // rax
  __int16 v151; // r8
  int v152; // ebx
  int v153; // r13d
  PVOID v154; // rcx
  __int64 v155; // rax
  __int64 v156; // rdx
  __int64 v157; // rbx
  int v158; // ebx
  int v159; // edx
  __int64 *v160; // rdx
  unsigned __int64 v161; // rbx
  _KPROCESS *v162; // rdi
  BOOLEAN v163; // al
  BOOLEAN v164; // al
  struct _EX_RUNDOWN_REF *v165; // rcx
  __int64 v166; // rax
  __int16 v167; // r8
  unsigned __int64 v168; // r8
  __int16 v169; // r9
  __int64 v170; // rcx
  __int64 *v171; // rdx
  unsigned __int64 v172; // r8
  __int16 v173; // r9
  char *v174; // r8
  volatile signed __int32 *v175; // rcx
  char v176; // bl
  unsigned int v177; // r14d
  int v178; // r13d
  int v179; // r14d
  _KPROCESS *v180; // rax
  bool IsSandboxedToken; // bl
  BOOLEAN v182; // al
  int v183; // r9d
  int v184; // r8d
  int v185; // r15d
  int v186; // edx
  int v187; // r9d
  int v188; // r14d
  int v189; // edx
  int v190; // edx
  int v191; // r10d
  int v192; // r9d
  int v193; // eax
  int v194; // r14d
  int v195; // eax
  int v196; // ecx
  __int64 v198; // rcx
  int v199; // eax
  int v200; // ebx
  void *v201; // rbx
  int v202; // eax
  void *v203; // rcx
  unsigned __int64 v204; // rdx
  PVOID v205; // rax
  _BOOL8 v206; // rbx
  NTSTATUS v207; // eax
  char v208; // bl
  char v209; // bl
  unsigned int v210; // ebx
  unsigned __int64 v211; // rax
  signed __int32 v212[8]; // [rsp+0h] [rbp-508h] BYREF
  PVOID Object; // [rsp+40h] [rbp-4C8h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-4C0h]
  unsigned int v215; // [rsp+50h] [rbp-4B8h]
  NTSTATUS v216; // [rsp+54h] [rbp-4B4h]
  char v217; // [rsp+58h] [rbp-4B0h]
  __int64 v218; // [rsp+60h] [rbp-4A8h]
  PVOID P; // [rsp+68h] [rbp-4A0h]
  __int16 v220; // [rsp+70h] [rbp-498h]
  int v221; // [rsp+74h] [rbp-494h]
  ULONG Alignment; // [rsp+78h] [rbp-490h]
  struct _EX_RUNDOWN_REF *v223; // [rsp+80h] [rbp-488h]
  signed __int64 v224; // [rsp+88h] [rbp-480h]
  char v225; // [rsp+90h] [rbp-478h]
  char v226; // [rsp+91h] [rbp-477h]
  char v227; // [rsp+92h] [rbp-476h]
  signed int v228; // [rsp+94h] [rbp-474h]
  unsigned int v229; // [rsp+98h] [rbp-470h]
  unsigned int v230; // [rsp+9Ch] [rbp-46Ch]
  char *v231; // [rsp+A0h] [rbp-468h]
  __int64 v232; // [rsp+A8h] [rbp-460h] BYREF
  __int64 v233; // [rsp+B0h] [rbp-458h]
  __int64 v234; // [rsp+B8h] [rbp-450h]
  __int128 v235; // [rsp+C0h] [rbp-448h]
  __int64 v236; // [rsp+D0h] [rbp-438h] BYREF
  void *Src; // [rsp+D8h] [rbp-430h]
  int v238; // [rsp+E0h] [rbp-428h]
  int v239; // [rsp+E4h] [rbp-424h]
  int v240; // [rsp+E8h] [rbp-420h] BYREF
  int v241; // [rsp+ECh] [rbp-41Ch]
  int v242; // [rsp+F0h] [rbp-418h]
  int v243; // [rsp+F4h] [rbp-414h] BYREF
  unsigned __int64 v244; // [rsp+F8h] [rbp-410h]
  PVOID v245; // [rsp+100h] [rbp-408h] BYREF
  PVOID v246; // [rsp+108h] [rbp-400h]
  __int64 v247; // [rsp+110h] [rbp-3F8h]
  PVOID BaseAddress; // [rsp+118h] [rbp-3F0h] BYREF
  PVOID v249; // [rsp+120h] [rbp-3E8h]
  NTSTRSAFE_PCSTR pszSrc[2]; // [rsp+128h] [rbp-3E0h] BYREF
  __int64 v251; // [rsp+138h] [rbp-3D0h]
  unsigned int v252; // [rsp+140h] [rbp-3C8h]
  int v253; // [rsp+144h] [rbp-3C4h]
  int v254; // [rsp+148h] [rbp-3C0h]
  int v255; // [rsp+14Ch] [rbp-3BCh]
  int v256; // [rsp+150h] [rbp-3B8h]
  int v257; // [rsp+154h] [rbp-3B4h]
  int v258; // [rsp+158h] [rbp-3B0h]
  int v259; // [rsp+160h] [rbp-3A8h]
  __int64 v260; // [rsp+168h] [rbp-3A0h]
  PVOID v261; // [rsp+170h] [rbp-398h] BYREF
  unsigned __int64 v262; // [rsp+178h] [rbp-390h]
  PVOID v263; // [rsp+180h] [rbp-388h] BYREF
  __int64 v264; // [rsp+188h] [rbp-380h]
  __int64 v265; // [rsp+190h] [rbp-378h]
  _DWORD *v266; // [rsp+198h] [rbp-370h]
  int v267; // [rsp+1A0h] [rbp-368h]
  unsigned __int64 v268; // [rsp+1A8h] [rbp-360h] BYREF
  int v269; // [rsp+1B0h] [rbp-358h]
  BOOL v270; // [rsp+1B4h] [rbp-354h]
  __int128 v271; // [rsp+1B8h] [rbp-350h]
  int v272; // [rsp+1C8h] [rbp-340h]
  _BYTE v273[40]; // [rsp+1D0h] [rbp-338h] BYREF
  __m256i v274; // [rsp+1F8h] [rbp-310h]
  _DWORD v275[2]; // [rsp+218h] [rbp-2F0h] BYREF
  __int128 v276; // [rsp+220h] [rbp-2E8h]
  __int128 v277; // [rsp+230h] [rbp-2D8h]
  __int64 v278; // [rsp+240h] [rbp-2C8h]
  __int128 v279; // [rsp+248h] [rbp-2C0h]
  __int128 v280; // [rsp+258h] [rbp-2B0h]
  __int64 *v281; // [rsp+268h] [rbp-2A0h]
  __int64 v282; // [rsp+270h] [rbp-298h]
  __int64 v283; // [rsp+278h] [rbp-290h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+290h] [rbp-278h] BYREF
  __int64 v285; // [rsp+2B0h] [rbp-258h] BYREF
  int v286; // [rsp+2B8h] [rbp-250h]
  __int128 v287; // [rsp+2C0h] [rbp-248h] BYREF
  __int128 v288; // [rsp+2D0h] [rbp-238h]
  struct _KAPC_STATE ApcState; // [rsp+2E0h] [rbp-228h] BYREF
  _BYTE v290[48]; // [rsp+310h] [rbp-1F8h] BYREF
  _BYTE v291[144]; // [rsp+340h] [rbp-1C8h] BYREF
  char v292[160]; // [rsp+3D0h] [rbp-138h] BYREF
  char pszDest[80]; // [rsp+470h] [rbp-98h] BYREF

  v4 = ProcessInformationLength;
  v5 = (__int64)ProcessInformation;
  Handle = ProcessHandle;
  P = ProcessInformation;
  Alignment = ProcessInformationLength;
  v287 = 0uLL;
  v7 = 0;
  v264 = 0LL;
  v220 = 0;
  v217 = 0;
  v265 = 0LL;
  v238 = 0;
  v242 = 0;
  v262 = 0LL;
  v230 = 0;
  v288 = 0uLL;
  v221 = 0;
  CurrentThread = KeGetCurrentThread();
  v234 = (__int64)CurrentThread;
  v9 = CurrentThread->$42514DC6747B59BF81E16C40547B231E::gap0[10];
  if ( !v9 )
    goto LABEL_39;
  switch ( ProcessInformationClass )
  {
    case ProcessBasePriority:
      goto LABEL_30;
    case ProcessEnableAlignmentFaultFixup:
      v10 = 1;
      break;
    case ProcessForegroundInformation:
      v10 = 1;
      break;
    case ProcessPriorityClass:
      v10 = 1;
      break;
    case ProcessAffinityMask:
      v10 = 8;
      break;
    case ProcessPagePriority:
    case ProcessIoPriority:
      goto LABEL_30;
    case ProcessTlsInformation:
      v10 = 8;
      break;
    case ProcessExceptionPort:
      v10 = 8;
      break;
    case ProcessInstrumentationCallback:
      v10 = 8;
      break;
    case ProcessThreadStackAllocation:
      v10 = 8;
      break;
    case ProcessFiberShadowStackAllocation:
      v10 = 8;
      break;
    case ProcessFreeFiberShadowStackAllocation:
      v10 = 8;
      break;
    case ProcessAffinityUpdateMode:
    case ProcessMemoryAllocationMode:
      goto LABEL_30;
    case ProcessConsoleHostProcess:
      v10 = 8;
      break;
    case ProcessDynamicFunctionTableInformation:
      v10 = 8;
      break;
    case ProcessRevokeFileHandles:
      v10 = 8;
      break;
    case ProcessMemoryExhaustion:
      v10 = 8;
      break;
    case ProcessCommitReleaseInformation:
      v10 = 8;
      break;
    case ProcessInPrivate:
      v10 = 1;
      break;
    case ProcessHighGraphicsPriorityInformation:
      v10 = 1;
      break;
    case ProcessManageWritesToExecutableMemory:
      v10 = 8;
      break;
    case ProcessDebugAuthInformation:
      v10 = 1;
      break;
    case ProcessSystemResourceManagement:
    case ProcessLoaderDetour:
      goto LABEL_30;
    case ProcessCombineSecurityDomainsInformation:
      v10 = 8;
      break;
    case ProcessEnableReadWriteVmLogging:
      v10 = 1;
      break;
    default:
LABEL_30:
      v10 = 4;
      break;
  }
  if ( ProcessInformationLength )
  {
    if ( ((v10 - 1) & (unsigned int)ProcessInformation) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)ProcessInformation + ProcessInformationLength > 0x7FFFFFFF0000LL
      || (char *)ProcessInformation + ProcessInformationLength < ProcessInformation )
    {
      MEMORY[0x7FFFFFFF0000] = 0;
    }
    ProcessHandle = Handle;
  }
LABEL_39:
  if ( ProcessInformationClass == ProcessDefaultHardErrorMode )
  {
    if ( ProcessInformationLength == 4 )
    {
      v11 = *(_DWORD *)ProcessInformation;
      v252 = *(_DWORD *)ProcessInformation;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result >= 0 )
      {
        PspSetProcessDefaultHardErrorMode(Object, CurrentThread, v11);
LABEL_43:
        v13 = Object;
LABEL_44:
        ObfDereferenceObjectWithTag(v13, 0x79517350u);
        return 0;
      }
      return result;
    }
    return -1073741820;
  }
  if ( ProcessInformationClass != ProcessThreadStackAllocation )
  {
    if ( ProcessInformationClass != ProcessTlsInformation )
    {
      switch ( ProcessInformationClass )
      {
        case ProcessQuotaLimits:
          return PspSetQuotaLimits(ProcessHandle);
        case ProcessBasePriority:
          if ( ProcessInformationLength != 4 )
            return -1073741820;
          v254 = *(_DWORD *)ProcessInformation;
          v132 = v254;
          if ( v254 < 0 )
          {
            v133 = 2;
            v132 = v254 & 0x7FFFFFFF;
          }
          else
          {
            v133 = 0;
          }
          if ( (unsigned int)(v132 - 1) > 0x1E )
            return -1073741811;
          result = ObReferenceObjectByHandleWithTag(
                     ProcessHandle,
                     0x200u,
                     (POBJECT_TYPE)PsProcessType,
                     v9,
                     0x79517350u,
                     &Object,
                     0LL);
          if ( result < 0 )
            return result;
          v134 = Object;
          if ( v132 > *((char *)Object + 448) )
          {
            v135 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))SeCheckPrivilegedObject)(
                     SeIncreaseBasePriorityPrivilege,
                     Handle,
                     512LL,
                     v9);
            v134 = Object;
            if ( !v135 )
              goto LABEL_491;
          }
          KeSetPriorityAndQuantumProcess((__int64)v134, (unsigned int)v132, 0, 0, 0);
          MmSetMemoryPriorityProcess((__int64)Object, v133);
          goto LABEL_43;
        case ProcessRaisePriority:
          if ( ProcessInformationLength != 4 )
            return -1073741820;
          v145 = *(_DWORD *)ProcessInformation;
          v255 = *(_DWORD *)ProcessInformation;
          result = ObReferenceObjectByHandleWithTag(
                     ProcessHandle,
                     0x200u,
                     (POBJECT_TYPE)PsProcessType,
                     v9,
                     0x79517350u,
                     &Object,
                     0LL);
          v64 = result;
          if ( result < 0 )
            return result;
          if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)Object + 96) )
            goto LABEL_498;
          for ( i = 0LL; ; i = v148 )
          {
            NextProcessThread = PsGetNextProcessThread(Object, i);
            v148 = NextProcessThread;
            if ( !NextProcessThread )
              break;
            KeBoostPriorityThread(NextProcessThread, v145);
          }
          goto LABEL_197;
        case ProcessExceptionPort:
          if ( ProcessInformationLength == 8 )
          {
            v229 = 0;
            v50 = *(void **)ProcessInformation;
            v260 = *(_QWORD *)ProcessInformation;
          }
          else
          {
            if ( ProcessInformationLength != 16 )
              return -1073741820;
            v50 = *(void **)ProcessInformation;
            v260 = *(_QWORD *)ProcessInformation;
            v229 = *((_DWORD *)ProcessInformation + 2);
            if ( (v229 & 0xFFFFFFF8) != 0 )
              return -1073741811;
          }
          if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, v9) )
            return -1073741727;
          result = ObReferenceObjectByHandle(v50, 0, LpcPortObjectType, v9, &v261, 0LL);
          v51 = (unsigned __int64)v261;
          v246 = v261;
          if ( result < 0 )
            return result;
          v40 = ObReferenceObjectByHandleWithTag(
                  Handle,
                  0x800u,
                  (POBJECT_TYPE)PsProcessType,
                  v9,
                  0x79517350u,
                  &Object,
                  0LL);
          if ( v40 < 0 )
          {
            v136 = (PVOID)v51;
LABEL_420:
            ObfDereferenceObject(v136);
            return v40;
          }
          v52 = v51 | v229;
          v224 = v52;
          v53 = (signed __int64 *)((char *)Object + 856);
          _m_prefetchw((char *)Object + 856);
          v54 = *v53;
          do
          {
            v223 = (struct _EX_RUNDOWN_REF *)v54;
            if ( (_DWORD)v4 == 16 )
            {
              *(_DWORD *)(v5 + 8) = v54 & 7;
            }
            else if ( (v54 & 7) != 0 )
            {
              ObfDereferenceObject(v246);
              v40 = -1073741811;
              goto LABEL_132;
            }
            v56 = _InterlockedCompareExchange64((volatile signed __int64 *)Object + 107, v52, v54);
            v55 = v54 == v56;
            v54 = v56;
          }
          while ( !v55 );
          if ( v56 )
          {
            v276 = 0LL;
            v277 = 0LL;
            v86 = (void *)(v56 & 0xFFFFFFFFFFFFFFF8uLL);
            v275[0] = 3145736;
            v275[1] = 13;
            v278 = *((_QWORD *)Object + 93);
            while ( 1 )
            {
              v87 = LpcRequestPort((__int64)v86, (__m256i *)v275);
              if ( v87 != -1073741801 && v87 != -1073741670 )
                break;
              KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&PspShortTime);
            }
            PspLockUnlockProcessExclusive((__int64)Object, (__int64)CurrentThread);
            ObfDereferenceObject(v86);
          }
          goto LABEL_152;
        case ProcessAccessToken:
          if ( ProcessInformationLength != 16 )
            return -1073741820;
          v282 = *(_QWORD *)ProcessInformation;
          return PspAssignPrimaryToken(CurrentThread, v9, ProcessHandle);
        case ProcessLdtInformation:
          result = ObReferenceObjectByHandleWithTag(
                     ProcessHandle,
                     0x220u,
                     (POBJECT_TYPE)PsProcessType,
                     v9,
                     0x79517350u,
                     &Object,
                     0LL);
          if ( result >= 0 )
            goto LABEL_507;
          return result;
        case ProcessLdtSize:
          result = ObReferenceObjectByHandleWithTag(
                     ProcessHandle,
                     0x220u,
                     (POBJECT_TYPE)PsProcessType,
                     v9,
                     0x79517350u,
                     &Object,
                     0LL);
          if ( result >= 0 )
            goto LABEL_507;
          return result;
        case ProcessIoPortHandlers:
          result = ObReferenceObjectByHandleWithTag(
                     ProcessHandle,
                     0x200u,
                     (POBJECT_TYPE)PsProcessType,
                     v9,
                     0x79517350u,
                     &Object,
                     0LL);
          if ( result < 0 )
            return result;
LABEL_507:
          v40 = xKdEnumerateDebuggingDevices();
          goto LABEL_132;
        case ProcessWorkingSetWatch:
        case ProcessWorkingSetWatchEx:
          result = ObReferenceObjectByHandleWithTag(
                     ProcessHandle,
                     0x200u,
                     (POBJECT_TYPE)PsProcessType,
                     v9,
                     0x79517350u,
                     &Object,
                     0LL);
          if ( result < 0 )
            return result;
          v40 = PsChargeProcessNonPagedPoolQuota((__int64)Object, 0x6028uLL);
          if ( v40 < 0 )
            goto LABEL_132;
          PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x6028uLL, 0x73577350u);
          v144 = PoolWithTag;
          if ( PoolWithTag )
          {
            PsWatchEnabled = 1;
            *PoolWithTag = 0;
            *((_QWORD *)PoolWithTag + 1) = 0LL;
            KeInitializeGate((__int64)(PoolWithTag + 4));
            if ( !_InterlockedCompareExchange64((volatile signed __int64 *)Object + 123, (signed __int64)v144, 0LL) )
            {
LABEL_152:
              v40 = 0;
              goto LABEL_132;
            }
            ExFreePoolWithTag(v144, 0);
            v40 = -1073741752;
          }
          else
          {
            v40 = -1073741801;
          }
          PsReturnProcessNonPagedPoolQuota((struct _KPROCESS *)Object, 24616LL);
          goto LABEL_132;
        case ProcessUserModeIOPL:
          if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, v9) )
            return -1073741727;
          result = ObReferenceObjectByHandleWithTag(
                     Handle,
                     0x200u,
                     (POBJECT_TYPE)PsProcessType,
                     v9,
                     0x79517350u,
                     &Object,
                     0LL);
          if ( result < 0 )
            return result;
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
          return -1073741822;
        case ProcessEnableAlignmentFaultFixup:
          if ( ProcessInformationLength != 1 )
            return -1073741820;
          v149 = *(_BYTE *)ProcessInformation;
          v225 = *(_BYTE *)ProcessInformation;
          result = ObReferenceObjectByHandleWithTag(
                     ProcessHandle,
                     0x200u,
                     (POBJECT_TYPE)PsProcessType,
                     v9,
                     0x79517350u,
                     &Object,
                     0LL);
          if ( result < 0 )
            return result;
          PspLockProcessExclusive((__int64)Object, (__int64)CurrentThread);
          if ( v149 )
            *((_DWORD *)Object + 296) |= 4u;
          else
            *((_DWORD *)Object + 296) &= ~4u;
          v150 = *((_QWORD *)Object + 133);
          if ( v150 )
          {
            v151 = *(_WORD *)(v150 + 8);
            if ( v151 == 332 || v151 == 452 )
              v149 = 1;
          }
          KeSetAutoAlignmentProcess(Object, v149);
          PspUnlockProcessExclusive((__int64)Object, (__int64)CurrentThread);
          goto LABEL_43;
        case ProcessPriorityClass:
          if ( ProcessInformationLength != 2 )
            return -1073741820;
          v61 = *(_WORD *)ProcessInformation;
          v220 = *(_WORD *)ProcessInformation;
          result = ObReferenceObjectByHandleWithTag(
                     ProcessHandle,
                     0x200u,
                     (POBJECT_TYPE)PsProcessType,
                     v9,
                     0x79517350u,
                     &Object,
                     0LL);
          if ( result < 0 )
            return result;
          v62 = PspSetProcessPriorityClass(Object, HIBYTE(v220), Handle, v9);
          if ( v62 >= 0 )
            PsSetProcessPriorityByClass(Object, (_BYTE)v61 != 0);
          goto LABEL_183;
        case ProcessWx86Information:
          if ( ProcessInformationLength != 4 )
            return -1073741820;
          v152 = *(_DWORD *)ProcessInformation;
          v256 = *(_DWORD *)ProcessInformation;
          if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, v9) )
            return -1073741727;
          v153 = ObReferenceObjectByHandleWithTag(
                   Handle,
                   0x200u,
                   (POBJECT_TYPE)PsProcessType,
                   v9,
                   0x79517350u,
                   &Object,
                   0LL);
          if ( v153 >= 0 )
          {
            v154 = Object;
            if ( *((_QWORD *)Object + 232) )
            {
              v153 = -1073741790;
            }
            else
            {
              if ( v152 )
                _InterlockedOr((volatile signed __int32 *)Object + 195, 0x1000000u);
              else
                _InterlockedAnd((volatile signed __int32 *)Object + 195, 0xFEFFFFFF);
              v154 = Object;
            }
            ObfDereferenceObjectWithTag(v154, 0x79517350u);
          }
          return v153;
        case ProcessAffinityMask:
          if ( ProcessInformationLength == 8 )
          {
            *(_QWORD *)&v287 = *(_QWORD *)ProcessInformation;
            if ( !(_QWORD)v287 )
              return -1073741811;
LABEL_539:
            result = ObReferenceObjectByHandleWithTag(
                       ProcessHandle,
                       0x200u,
                       (POBJECT_TYPE)PsProcessType,
                       v9,
                       0x79517350u,
                       &Object,
                       0LL);
            if ( result < 0 )
              return result;
            LODWORD(v155) = KeQueryGroupMaskProcess((__int64)Object);
            if ( (((_DWORD)v155 - 1) & (unsigned int)v155) == 0 )
            {
              if ( (_DWORD)v4 != 8 )
              {
LABEL_544:
                KeEnterCriticalRegionThread((__int64)CurrentThread);
                if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)Object + 96) )
                {
                  PspLockProcessSharedUnsafe((__int64)Object);
                  v64 = PspSetProcessAffinitySafe((_DWORD)Object, 0, 0, (unsigned int)&v287, (__int64)&v240);
                  PspUnlockProcessSharedUnsafe((__int64)Object);
                  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)Object + 96);
                  if ( v64 >= 0 )
                  {
                    if ( v240 )
                      PspWritePebAffinityInfo(CurrentThread, Object);
                    _InterlockedOr((volatile signed __int32 *)Object + 194, 0x200000u);
                  }
                }
                else
                {
                  v64 = -1073741558;
                }
                KeLeaveCriticalRegionThread((__int64)CurrentThread);
                goto LABEL_198;
              }
              _BitScanForward((unsigned int *)&v155, v155);
              v239 = v155;
              v156 = v287 & qword_140572748[v155];
              if ( v156 == (_QWORD)v287 )
              {
                WORD4(v287) = v239;
                *(_QWORD *)&v287 = v156;
                goto LABEL_544;
              }
            }
LABEL_549:
            v64 = -1073741811;
LABEL_198:
            ObfDereferenceObjectWithTag(Object, 0x79517350u);
            return v64;
          }
          if ( ProcessInformationLength != 16 )
            return -1073741820;
          v287 = *(_OWORD *)ProcessInformation;
          if ( KeVerifyGroupAffinity((__int64)&v287, 0) )
          {
            ProcessHandle = Handle;
            goto LABEL_539;
          }
          return -1073741811;
        case ProcessPriorityBoost:
          if ( ProcessInformationLength != 4 )
            return -1073741820;
          v257 = *(_DWORD *)ProcessInformation;
          v130 = v257 != 0;
          result = ObReferenceObjectByHandleWithTag(
                     ProcessHandle,
                     0x200u,
                     (POBJECT_TYPE)PsProcessType,
                     v9,
                     0x79517350u,
                     &Object,
                     0LL);
          v64 = result;
          if ( result < 0 )
            return result;
          if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)Object + 96) )
            goto LABEL_498;
          PspLockProcessExclusive((__int64)Object, (__int64)CurrentThread);
          KeSetDisableBoostProcess(Object, v130);
          v69 = (char *)Object;
          v131 = (char *)*((_QWORD *)Object + 145);
          while ( v131 != v69 + 1160 )
          {
            KeSetDisableBoostThread(v131 - 1720, v130);
            v131 = *(char **)v131;
            v69 = (char *)Object;
          }
          goto LABEL_196;
        case ProcessDeviceMap:
          if ( ProcessInformationLength != 8 )
            return -1073741820;
          v157 = *(_QWORD *)ProcessInformation;
          v283 = *(_QWORD *)ProcessInformation;
          if ( RtlIsSandboxedToken(0LL, v9) )
            return -1073741790;
          result = ObReferenceObjectByHandleWithTag(
                     Handle,
                     0x200u,
                     (POBJECT_TYPE)PsProcessType,
                     v9,
                     0x79517350u,
                     &Object,
                     0LL);
          if ( result < 0 )
            return result;
          v40 = ObSetProcessDeviceMap(Object, v157, v9);
          goto LABEL_132;
        case ProcessSessionInformation:
          if ( ProcessInformationLength != 4 )
            return -1073741820;
          v158 = *(_DWORD *)ProcessInformation;
          v242 = *(_DWORD *)ProcessInformation;
          if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, v9) )
            return -1073741727;
          result = ObReferenceObjectByHandleWithTag(
                     Handle,
                     0x204u,
                     (POBJECT_TYPE)PsProcessType,
                     v9,
                     0x79517350u,
                     &Object,
                     0LL);
          if ( result < 0 )
            return result;
          if ( v158 != (unsigned int)MmGetSessionId((__int64)Object) )
            v7 = -1073741790;
          goto LABEL_139;
        case ProcessForegroundInformation:
          if ( ProcessInformationLength != 1 )
            return -1073741820;
          v98 = *(_BYTE *)ProcessInformation;
          v217 = *(_BYTE *)ProcessInformation;
          result = ObReferenceObjectByHandleWithTag(
                     ProcessHandle,
                     0x2000u,
                     (POBJECT_TYPE)PsProcessType,
                     v9,
                     0x79517350u,
                     &Object,
                     0LL);
          if ( result < 0 )
            return result;
          LOBYTE(v7) = v98 != 0;
          PsSetProcessPriorityByClass(Object, (unsigned int)v7);
          goto LABEL_43;
        case ProcessBreakOnTermination:
          if ( ProcessInformationLength != 4 )
            return -1073741820;
          v127 = *(_DWORD *)ProcessInformation;
          v258 = *(_DWORD *)ProcessInformation;
          if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, v9) )
            return -1073741727;
          result = ObReferenceObjectByHandleWithTag(
                     Handle,
                     0x200u,
                     (POBJECT_TYPE)PsProcessType,
                     v9,
                     0x79517350u,
                     &Object,
                     0LL);
          if ( result < 0 )
            return result;
          if ( v127 )
            _InterlockedOr((volatile signed __int32 *)Object + 195, 0x2000u);
          else
            _InterlockedAnd((volatile signed __int32 *)Object + 195, 0xFFFFDFFF);
          goto LABEL_43;
        case ProcessDebugFlags:
          if ( ProcessInformationLength != 4 )
            return -1073741820;
          result = ObReferenceObjectByHandleWithTag(
                     ProcessHandle,
                     0x200u,
                     (POBJECT_TYPE)PsProcessType,
                     v9,
                     0x79517350u,
                     &Object,
                     0LL);
          v64 = result;
          if ( result < 0 )
            return result;
          v241 = *(_DWORD *)v5;
          if ( (v241 & 0xFFFFFFFE) != 0 )
            goto LABEL_549;
          if ( (v241 & 1) != 0 )
            _InterlockedAnd((volatile signed __int32 *)Object + 195, 0xFFFFFFFD);
          else
            _InterlockedOr((volatile signed __int32 *)Object + 195, 2u);
          goto LABEL_198;
        case ProcessHandleTracing:
          v232 = 0LL;
          if ( !ProcessInformationLength )
            goto LABEL_576;
          if ( ((ProcessInformationLength - 4) & 0xFFFFFFFB) != 0 )
            return -1073741820;
          v159 = *(_DWORD *)ProcessInformation;
          LODWORD(v232) = *(_DWORD *)ProcessInformation;
          if ( ProcessInformationLength == 8 )
            HIDWORD(v232) = *((_DWORD *)ProcessInformation + 1);
          else
            HIDWORD(v232) = 0;
          if ( v159 )
            return -1073741811;
LABEL_576:
          result = ObReferenceObjectByHandleWithTag(
                     ProcessHandle,
                     0x200u,
                     (POBJECT_TYPE)PsProcessType,
                     v9,
                     0x79517350u,
                     &Object,
                     0LL);
          if ( result < 0 )
            return result;
          if ( (_DWORD)v4 )
            v160 = &v232;
          else
            v160 = 0LL;
          v40 = PsSetProcessHandleTracingInformation(Object, v160);
          goto LABEL_132;
        case ProcessIoPriority:
          if ( ((ProcessInformationLength - 4) & 0xFFFFFFFB) != 0 )
            return -1073741820;
          if ( ProcessInformationLength == 4 )
          {
            v72 = *(_DWORD *)ProcessInformation;
            v228 = *(_DWORD *)ProcessInformation;
            LOBYTE(v73) = 0;
          }
          else
          {
            v262 = *(_QWORD *)ProcessInformation;
            v72 = v262;
            v73 = HIDWORD(v262);
            v228 = v262;
          }
          if ( v72 >= 4 )
            return -1073741811;
          if ( v72 < 3 )
            goto LABEL_204;
          if ( !(unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))SeCheckPrivilegedObject)(
                                   SeIncreaseBasePriorityPrivilege,
                                   ProcessHandle,
                                   512LL,
                                   v9) )
            return -1073741727;
          ProcessHandle = Handle;
LABEL_204:
          result = ObReferenceObjectByHandleWithTag(
                     ProcessHandle,
                     0x200u,
                     (POBJECT_TYPE)PsProcessType,
                     v9,
                     0x79517350u,
                     &Object,
                     0LL);
          v64 = result;
          if ( result < 0 )
            return result;
          if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)Object + 96) )
          {
            PspLockProcessExclusive((__int64)Object, (__int64)CurrentThread);
            v74 = (volatile signed __int32 *)Object;
            v75 = *((_DWORD *)Object + 195);
            v76 = v228 << 27;
            do
            {
              v77 = v75;
              v75 = _InterlockedCompareExchange(v74 + 195, v76 | v75 & 0xC7FFFFFF, v75);
            }
            while ( v75 != v77 );
            v69 = (char *)Object;
            v78 = (KSPIN_LOCK *)*((_QWORD *)Object + 145);
            v79 = v228;
            while ( v78 != (KSPIN_LOCK *)(v69 + 1160) )
            {
              if ( (_BYTE)v73 == 1 && ((*((_DWORD *)v78 + 10) >> 9) & 7) < v79 )
                IoBoostThreadIoPriority(v78 - 215, v79, 0);
              PsSetIoPriorityThread((__int64)(v78 - 215), v79);
              v78 = (KSPIN_LOCK *)*v78;
              v69 = (char *)Object;
            }
LABEL_196:
            PspUnlockProcessExclusive((__int64)v69, (__int64)CurrentThread);
LABEL_197:
            ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)Object + 96);
          }
          else
          {
LABEL_498:
            v64 = -1073741558;
          }
          goto LABEL_198;
        case ProcessExecuteFlags:
          if ( ProcessInformationLength != 4 )
            return -1073741820;
          if ( ProcessHandle != (HANDLE)-1LL )
            return -1073741811;
          v93 = *(_DWORD *)ProcessInformation;
          CurrentProcess = PsGetCurrentProcess();
          v62 = KeSetExecuteOptions((__int64)CurrentProcess, v93);
          if ( v62 < 0 || (v93 & 3) != 1 )
            return v62;
          MmRemoveExecuteGrants();
          return v62;
        case ProcessPagePriority:
          if ( ProcessInformationLength != 4 )
            return -1073741820;
          v230 = *(_DWORD *)ProcessInformation;
          v63 = v230;
          if ( v230 > (unsigned int)MmGetDefaultPagePriority() || v230 < (unsigned int)MiCreateSystemWsles() )
            return -1073741811;
          result = ObReferenceObjectByHandleWithTag(
                     Handle,
                     0x200u,
                     (POBJECT_TYPE)PsProcessType,
                     v9,
                     0x79517350u,
                     &Object,
                     0LL);
          v64 = result;
          if ( result < 0 )
            return result;
          if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)Object + 96) )
            goto LABEL_498;
          PspLockProcessExclusive((__int64)Object, (__int64)CurrentThread);
          v65 = v63 << 12;
          v66 = (volatile signed __int32 *)Object;
          v67 = *((_DWORD *)Object + 194);
          do
          {
            v68 = v67;
            v67 = _InterlockedCompareExchange(v66 + 194, v65 | v67 & 0xFFFF8FFF, v67);
          }
          while ( v67 != v68 );
          v69 = (char *)Object;
          v70 = (char *)*((_QWORD *)Object + 145);
          v71 = v230;
          while ( v70 != v69 + 1160 )
          {
            PsSetPagePriorityThread((__int64)(v70 - 1720), v71);
            v70 = *(char **)v70;
            v69 = (char *)Object;
          }
          goto LABEL_196;
        case ProcessInstrumentationCallback:
          memset(&ApcState, 0, sizeof(ApcState));
          if ( (((_DWORD)v4 - 8) & 0xFFFFFFF7) != 0 )
            return -1073741820;
          if ( (_DWORD)v4 == 8 )
          {
            *(_QWORD *)&v235 = 0LL;
            v161 = *(_QWORD *)v5;
            *((_QWORD *)&v235 + 1) = *(_QWORD *)v5;
          }
          else
          {
            v235 = *(_OWORD *)v5;
            v161 = *((_QWORD *)&v235 + 1);
          }
          if ( DWORD1(v235) )
            return -1073741811;
          if ( (_DWORD)v235 != DWORD1(v235) )
            return -1073741736;
          if ( v161 != (__int64)(v161 << 16) >> 16 )
            return -1073741811;
          result = ObReferenceObjectByHandleWithTag(
                     Handle,
                     0x200u,
                     (POBJECT_TYPE)PsProcessType,
                     v9,
                     0x79517350u,
                     &Object,
                     0LL);
          if ( result < 0 )
            return result;
          v162 = PsGetCurrentProcess();
          v163 = SeSinglePrivilegeCheck(SeDebugPrivilege, v9);
          v134 = Object;
          if ( v163 || Object == v162 )
          {
            v164 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)Object + 96);
            v165 = (struct _EX_RUNDOWN_REF *)Object;
            if ( !v164 )
            {
              ObfDereferenceObjectWithTag(Object, 0x79517350u);
              return -1073741558;
            }
            v166 = *((_QWORD *)Object + 133);
            if ( v166 && ((v167 = *(_WORD *)(v166 + 8), v167 == 332) || v167 == 452) )
            {
              v168 = v162[1].ActiveProcessors.Bitmap[6];
              if ( v168 )
              {
                v169 = *(_WORD *)(v168 + 8);
                if ( v169 == 332 || v169 == 452 )
                {
                  KeStackAttachProcess((PRKPROCESS)Object, &ApcState);
                  if ( v161 < MmGetMaximumUserAddress() && (unsigned int)MmValidateUserCallTarget(v161, 1LL) )
                  {
                    v170 = 0LL;
                    v171 = (__int64 *)*((_QWORD *)Object + 133);
                    if ( v171 )
                      v170 = *v171;
                    *(_DWORD *)(v170 + 1160) = DWORD2(v235);
                  }
                  else
                  {
                    v7 = -1073741811;
                  }
                  KeUnstackDetachProcess(&ApcState);
LABEL_626:
                  v165 = (struct _EX_RUNDOWN_REF *)Object;
LABEL_627:
                  ExReleaseRundownProtection_0(v165 + 96);
LABEL_139:
                  ObfDereferenceObjectWithTag(Object, 0x79517350u);
                  return v7;
                }
              }
            }
            else
            {
              v172 = v162[1].ActiveProcessors.Bitmap[6];
              if ( !v172 || (v173 = *(_WORD *)(v172 + 8), v173 != 332) && v173 != 452 )
              {
                KeStackAttachProcess((PRKPROCESS)Object, &ApcState);
                if ( !(unsigned int)MmValidateUserCallTarget(v161, 0LL) )
                  v7 = -1073741811;
                KeUnstackDetachProcess(&ApcState);
                if ( v7 >= 0 )
                {
                  PspLockProcessExclusive((__int64)Object, (__int64)CurrentThread);
                  *((_QWORD *)Object + 90) = v161;
                  v174 = (char *)Object;
                  v175 = (volatile signed __int32 *)*((_QWORD *)Object + 145);
                  while ( v175 != (volatile signed __int32 *)(v174 + 1160) )
                  {
                    if ( v161 )
                      _interlockedbittestandset(v175 - 430, 0x19u);
                    else
                      _interlockedbittestandreset(v175 - 430, 0x19u);
                    v175 = *(volatile signed __int32 **)v175;
                    v174 = (char *)Object;
                    v161 = *((_QWORD *)&v235 + 1);
                  }
                  PspUnlockProcessExclusive((__int64)v174, (__int64)CurrentThread);
                }
                goto LABEL_626;
              }
            }
            v7 = -1073741637;
            goto LABEL_627;
          }
LABEL_491:
          ObfDereferenceObjectWithTag(v134, 0x79517350u);
          return -1073741727;
        case ProcessAffinityUpdateMode:
          if ( ProcessHandle != (HANDLE)-1LL )
            return -1073741811;
          if ( ProcessInformationLength != 4 )
            return -1073741820;
          v243 = *(_DWORD *)ProcessInformation;
          if ( (v243 & 0xFFFFFFFC) != 0 )
            return -1073741811;
          return PspSetProcessAffinityUpdateMode(CurrentThread, &v243);
        case ProcessMemoryAllocationMode:
          if ( ProcessInformationLength != 4 )
            return -1073741820;
          v259 = *(_DWORD *)ProcessInformation;
          v176 = v259;
          if ( (v259 & 0xFFFFFFFE) != 0 )
            return -1073741811;
          result = ObReferenceObjectByHandleWithTag(
                     ProcessHandle,
                     0x200u,
                     (POBJECT_TYPE)PsProcessType,
                     v9,
                     0x79517350u,
                     &Object,
                     0LL);
          if ( result < 0 )
            return result;
          if ( (v176 & 1) != 0 )
            _InterlockedOr((volatile signed __int32 *)Object + 195, 0x200000u);
          else
            _InterlockedAnd((volatile signed __int32 *)Object + 195, 0xFFDFFFFF);
          goto LABEL_43;
        case ProcessTokenVirtualizationEnabled:
          if ( ProcessInformationLength != 4 )
            return -1073741820;
          v267 = *(_DWORD *)ProcessInformation;
          result = ObReferenceObjectByHandleWithTag(
                     ProcessHandle,
                     0x200u,
                     (POBJECT_TYPE)PsProcessType,
                     v9,
                     0x79517350u,
                     &Object,
                     0LL);
          if ( result < 0 )
            return result;
          v107 = PsReferencePrimaryToken((PEPROCESS)Object);
          SeSetVirtualizationToken(v107);
          ObfDereferenceObject(v107);
          goto LABEL_43;
        case ProcessConsoleHostProcess:
          if ( ProcessInformationLength != 8 )
            return -1073741820;
          if ( ProcessHandle != (HANDLE)-1LL || (*(_QWORD *)ProcessInformation & 3) != 1 )
            return -1073741811;
          v57 = *(_QWORD *)ProcessInformation;
          *(_QWORD *)&PsGetCurrentProcess()[1].ActiveProcessors.Count = v57;
          return 0;
        case ProcessMitigationPolicy:
          v80 = 0;
          if ( ProcessInformationLength != 8 )
            return -1073741820;
          v218 = *(_QWORD *)ProcessInformation;
          if ( ProcessHandle != (HANDLE)-1LL && (_DWORD)v218 != 2 )
            return -1073741811;
          v81 = PsGetCurrentProcess();
          p_Lock = &v81->Header.Lock;
          Object = v81;
          switch ( (_DWORD)v218 )
          {
            case 3:
              if ( (v218 & 0xFFFFFFFC00000000uLL) != 0 )
              {
                v40 = -1073741811;
              }
              else if ( ((HIDWORD(v218) >> 1) & 1) != 0 || (v218 & 0x100000000LL) == 0 )
              {
                if ( ((HIDWORD(v218) >> 1) & 1) == 0 || (v218 & 0x100000000LL) != 0 )
                {
                  v96 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)v81);
                  if ( v96 )
                  {
                    LOBYTE(v97) = (v218 & 0x100000000LL) != 0;
                    if ( (unsigned __int8)ExEnableHandleExceptions(v96, v97) )
                      v40 = 0;
                    else
                      v40 = -1073741790;
                    ObDereferenceProcessHandleTable(Object);
                  }
                  else
                  {
                    v40 = -1073741558;
                  }
                  goto LABEL_269;
                }
                v40 = -1073741811;
              }
              else
              {
                v40 = -1073741811;
              }
              break;
            case 9:
              if ( (v218 & 0xFFFFFFFC00000000uLL) != 0 )
              {
                v40 = -1073741811;
              }
              else if ( (v218 & 0x100000000LL) == 0 && (*(_DWORD *)&v81[2].Spare2[7] & 0x10000) != 0 )
              {
                v40 = -1073741790;
              }
              else
              {
                if ( (v218 & 0x100000000LL) != 0
                  || (v218 & 0x200000000LL) != 0
                  || (*(_DWORD *)&v81[2].Spare2[7] & 0x20000) == 0 )
                {
                  v40 = 0;
                  if ( (v218 & 0x100000000LL) != 0 )
                  {
                    RtlInterlockedSetClearBits((volatile signed __int32 *)&v81[2].Spare2[7], 0x10000, 0x20000);
                  }
                  else
                  {
                    if ( (v218 & 0x200000000LL) == 0 )
                      break;
                    RtlInterlockedSetClearBits((volatile signed __int32 *)&v81[2].Spare2[7], 0x20000, 0x10000);
                  }
LABEL_269:
                  p_Lock = (volatile signed __int32 *)Object;
                  break;
                }
                v40 = -1073741790;
              }
              break;
            case 0xA:
              v99 = HIDWORD(v218);
              if ( (v218 & 0xFFFFFFE000000000uLL) != 0 )
              {
                v40 = -1073741811;
                break;
              }
              if ( (v218 & 0x100000000LL) != 0 && (v218 & 0x800000000LL) != 0 )
                v99 = HIDWORD(v218) & 0xFFFFFFF7;
              if ( (v99 & 2) != 0 && (v99 & 0x10) != 0 )
                v99 &= ~0x10u;
              v100 = v99 & 1;
              if ( (v99 & 1) == 0 && (*(_DWORD *)&v81[2].Spare2[7] & 0x80000) != 0 )
                goto LABEL_654;
              v101 = (v99 >> 1) & 1;
              if ( !v101 && (*(_DWORD *)&v81[2].Spare2[7] & 0x200000) != 0 )
                goto LABEL_654;
              v102 = (v99 >> 2) & 1;
              if ( !v102 && (*(_DWORD *)&v81[2].Spare2[7] & 0x40000) != 0 )
              {
                v40 = -1073741790;
                break;
              }
              v103 = (v99 >> 3) & 1;
              if ( !v103 && (v99 & 1) == 0 && (*(_DWORD *)&v81[2].Spare2[7] & 0x100000) != 0 )
              {
LABEL_654:
                v40 = -1073741790;
                break;
              }
              v104 = (v99 >> 4) & 1;
              if ( v104 || v101 || (*(_DWORD *)&v81[2].Spare2[7] & 0x400000) == 0 )
              {
                v105 = 0;
                v106 = 0;
                if ( v100 )
                {
                  v105 = 0x80000;
                  v106 = 0x100000;
                }
                else if ( v103 )
                {
                  v105 = 0x100000;
                }
                if ( v101 )
                {
                  v105 |= 0x200000u;
                  v106 |= 0x400000u;
                }
                else if ( v104 )
                {
                  v105 |= 0x400000u;
                }
                if ( v102 )
                  v105 |= 0x40000u;
                RtlInterlockedSetClearBits(p_Lock + 532, v105, v106);
                v40 = 0;
                goto LABEL_269;
              }
              v40 = -1073741790;
              break;
            default:
              v83 = 0x140000000uLL;
              switch ( (int)v218 )
              {
                case 1:
                  if ( (v218 & 0xFFFFFFF000000000uLL) != 0 )
                  {
                    v40 = -1073741811;
                    goto LABEL_270;
                  }
                  v84 = (HIDWORD(v218) >> 1) & 1;
                  if ( !v84 && (*(_DWORD *)&v81[2].Spare2[7] & 0x10) != 0 )
                    goto LABEL_654;
                  if ( (v218 & 0x100000000LL) == 0 && (*(_DWORD *)&v81[2].Spare2[7] & 0x40) == 0 )
                    goto LABEL_654;
                  v85 = (HIDWORD(v218) >> 3) & 1;
                  if ( !v85 && (*(_DWORD *)&v81[2].Spare2[7] & 8) != 0 )
                    goto LABEL_654;
                  if ( v85 )
                  {
                    if ( !v84 )
                    {
                      v40 = -1073741776;
                      goto LABEL_270;
                    }
                  }
                  else if ( !v84 )
                  {
                    goto LABEL_231;
                  }
                  _InterlockedOr((volatile signed __int32 *)&v81[2].Spare2[7], 0x10u);
                  p_Lock = (volatile signed __int32 *)Object;
LABEL_231:
                  if ( (v218 & 0x100000000LL) != 0 )
                  {
                    _InterlockedAnd(p_Lock + 532, 0xFFFFFFBF);
                    p_Lock = (volatile signed __int32 *)Object;
                  }
                  if ( v85 )
                  {
                    _InterlockedOr(p_Lock + 532, 8u);
                    p_Lock = (volatile signed __int32 *)Object;
                  }
                  v40 = 0;
                  goto LABEL_270;
                case 2:
                  v119 = HIDWORD(v218);
                  if ( (v218 & 0xFFFFFFF000000000uLL) != 0 )
                  {
                    v40 = -1073741811;
                    goto LABEL_270;
                  }
                  if ( (v218 & 0x100000000LL) != 0 && (v218 & 0x800000000LL) != 0 )
                    v119 = HIDWORD(v218) & 0xFFFFFFF7;
                  v120 = v119 & 1;
                  if ( (v119 & 1) == 0 && ((v119 & 2) != 0 || (v119 & 4) != 0) )
                  {
                    v40 = -1073741811;
                    goto LABEL_270;
                  }
                  if ( (unsigned int)PsIsSystemWideMitigationOptionSet(9LL) )
                  {
                    v40 = -1073741637;
                    goto LABEL_269;
                  }
                  if ( Handle == (HANDLE)-1LL )
                  {
                    p_Lock = (volatile signed __int32 *)Object;
                  }
                  else
                  {
                    v40 = ObReferenceObjectByHandleWithTag(
                            Handle,
                            0x200u,
                            (POBJECT_TYPE)PsProcessType,
                            v9,
                            0x79517350u,
                            &Object,
                            0LL);
                    if ( v40 < 0 )
                      goto LABEL_269;
                    v80 = 1;
                    v180 = PsGetCurrentProcess();
                    p_Lock = (volatile signed __int32 *)Object;
                    if ( Object != v180 )
                    {
                      if ( (*((_DWORD *)Object + 532) & 0x100) != 0 )
                      {
                        memset(&SubjectContext, 0, sizeof(SubjectContext));
                        SeCaptureSubjectContextEx(0LL, (PEPROCESS)Object, &SubjectContext);
                        IsSandboxedToken = RtlIsSandboxedToken(&SubjectContext, 1);
                        SeReleaseSubjectContext(&SubjectContext);
                        if ( RtlIsSandboxedToken(0LL, v9)
                          || !IsSandboxedToken
                          || (p_Lock = (volatile signed __int32 *)Object, (*((_DWORD *)Object + 532) & 0x400) == 0) )
                        {
                          v182 = SeSinglePrivilegeCheck(SeDebugPrivilege, v9);
                          p_Lock = (volatile signed __int32 *)Object;
                          if ( !v182 )
                          {
                            v40 = -1073741790;
                            goto LABEL_270;
                          }
                        }
                      }
                      v183 = (v119 >> 3) & 1;
                      if ( !v183 && (v119 & 1) == 0 && (p_Lock[532] & 0x800) != 0 )
                      {
                        v40 = -1073741790;
                        goto LABEL_270;
                      }
                      v184 = !(v119 & 1) << 8;
                      v185 = v120 << 8;
                      if ( !v183 )
                        v184 |= 0x800u;
                      v186 = v185 | 0x800;
                      if ( !v183 )
                        v186 = v185;
                      if ( ((v119 >> 1) & 1) == 0 )
                        v184 |= 0x200u;
                      v187 = v186 | 0x200;
                      if ( ((v119 >> 1) & 1) == 0 )
                        v187 = v186;
                      v188 = (v119 >> 2) & 1;
                      if ( !v188 )
                        v184 |= 0x400u;
                      v189 = v187 | 0x400;
                      if ( !v188 )
                        v189 = v187;
LABEL_733:
                      RtlInterlockedSetClearBits(p_Lock + 532, v189, v184);
                      v40 = 0;
                      goto LABEL_269;
                    }
                  }
                  v190 = 256;
                  if ( (v119 & 1) != 0 || (p_Lock[532] & 0x100) == 0 )
                  {
                    v191 = (v119 >> 3) & 1;
                    if ( v191 || (v119 & 1) != 0 || (p_Lock[532] & 0x800) == 0 )
                    {
                      v192 = (v119 >> 1) & 1;
                      if ( v192 && (v193 = *((_DWORD *)p_Lock + 532), (v193 & 0x100) != 0) && (v193 & 0x200) == 0 )
                      {
                        v40 = -1073741790;
                      }
                      else
                      {
                        v194 = (v119 >> 2) & 1;
                        if ( !v194 || (v195 = *((_DWORD *)p_Lock + 532), (v195 & 0x100) == 0) || (v195 & 0x400) != 0 )
                        {
                          v184 = 0;
                          if ( v120 )
                          {
                            v184 = 2048;
                          }
                          else
                          {
                            v190 = 0;
                            if ( v191 )
                              v190 = 2048;
                          }
                          if ( !v192 )
                            v184 |= 0x200u;
                          v196 = v190 | 0x200;
                          if ( !v192 )
                            v196 = v190;
                          if ( !v194 )
                            v184 |= 0x400u;
                          v189 = v196 | 0x400;
                          if ( !v194 )
                            v189 = v196;
                          goto LABEL_733;
                        }
                        v40 = -1073741790;
                      }
                    }
                    else
                    {
                      v40 = -1073741790;
                    }
                  }
                  else
                  {
                    v40 = -1073741790;
                  }
                  goto LABEL_270;
                case 4:
                  v177 = HIDWORD(v218);
                  if ( (v218 & 0xFFFFFFFC00000000uLL) != 0 )
                  {
                    v40 = -1073741811;
                    goto LABEL_270;
                  }
                  if ( (v218 & 0x100000000LL) != 0 && (v218 & 0x200000000LL) != 0 )
                  {
                    v177 = HIDWORD(v218) & 0xFFFFFFFD;
                    HIDWORD(v218) &= ~2u;
                  }
                  v178 = v177 & 1;
                  if ( (v177 & 1) == 0 && (*(_DWORD *)&v81[2].Spare2[7] & 0x1000) != 0 )
                  {
                    v40 = -1073741790;
                    goto LABEL_270;
                  }
                  v179 = (v177 >> 1) & 1;
                  if ( v179 )
                    goto LABEL_669;
                  if ( v178 )
                    goto LABEL_671;
                  if ( (*(_DWORD *)&v81[2].Spare2[7] & 0x2000) != 0 )
                  {
                    v40 = -1073741790;
                    goto LABEL_270;
                  }
LABEL_669:
                  if ( !v178 && !v179 )
                    goto LABEL_673;
LABEL_671:
                  p_Lock = (volatile signed __int32 *)Object;
                  if ( (unsigned __int8)PsIsGuiThread(CurrentThread) )
                  {
                    v40 = -1073741431;
                    goto LABEL_270;
                  }
LABEL_673:
                  v40 = 0;
                  if ( v178 )
                  {
                    _InterlockedOr(p_Lock + 532, 0x3000u);
                    goto LABEL_269;
                  }
                  if ( !v179 )
                    goto LABEL_270;
                  _InterlockedOr(p_Lock + 532, 0x2000u);
                  goto LABEL_269;
                case 6:
                  if ( (v218 & 0xFFFFFFFE00000000uLL) != 0 )
                  {
                    v40 = -1073741811;
                    goto LABEL_270;
                  }
                  if ( (v218 & 0x100000000LL) == 0 && (*(_DWORD *)&v81[2].Spare2[7] & 0x80u) != 0 )
                  {
                    v40 = -1073741790;
                    goto LABEL_270;
                  }
                  v40 = 0;
                  if ( (v218 & 0x100000000LL) == 0 )
                    goto LABEL_270;
                  _InterlockedOr((volatile signed __int32 *)&v81[2].Spare2[7], 0x80u);
                  goto LABEL_269;
                case 7:
                  if ( (v218 & 0xFFFFFFF800000000uLL) != 0 )
                  {
                    v40 = -1073741811;
                    goto LABEL_270;
                  }
                  if ( (*(_DWORD *)&v81[2].Spare2[7] & 1) == 0 )
                  {
                    v40 = -1073741790;
                    goto LABEL_270;
                  }
                  if ( (v218 & 0x400000000LL) == 0 )
                  {
                    v40 = -1073741790;
                    goto LABEL_270;
                  }
                  _InterlockedOr((volatile signed __int32 *)&v81[2].Spare2[7], 4u);
                  v40 = 0;
                  goto LABEL_269;
                case 8:
                  v122 = HIDWORD(v218);
                  if ( (v218 & 0xFFFFFFE000000000uLL) != 0 )
                  {
                    v40 = -1073741811;
                    goto LABEL_270;
                  }
                  if ( (v218 & 0x100000000LL) != 0 && ((v218 & 0x800000000LL) != 0 || (v218 & 0x1000000000LL) != 0) )
                    v122 = HIDWORD(v218) & 0xFFFFFFE7;
                  if ( (v122 & 2) != 0 && (v122 & 0x10) != 0 )
                    v122 &= ~0x10u;
                  v123 = (v122 >> 3) & 1;
                  LODWORD(Handle) = v123;
                  if ( v123 && (v122 & 0x10) != 0 )
                  {
                    v40 = -1073741811;
                    goto LABEL_270;
                  }
                  v124 = (v122 >> 1) & 1;
                  if ( v124 + (v122 & 1) > 1 )
                  {
                    v40 = -1073741811;
                    goto LABEL_270;
                  }
                  if ( (v122 & 1) != 0 )
                    goto LABEL_347;
                  if ( LOBYTE(v81[2].ActiveProcessors.Bitmap[4]) >= 8u && BYTE1(v81[2].ActiveProcessors.Bitmap[4]) >= 8u )
                  {
                    v40 = -1073741790;
                    goto LABEL_270;
                  }
                  if ( v124 )
                    goto LABEL_347;
                  LOBYTE(v83) = 6;
                  if ( (unsigned int)SeCompareSigningLevels(LOBYTE(v81[2].ActiveProcessors.Bitmap[4]), v83) )
                  {
                    LOBYTE(v83) = 6;
                    if ( (unsigned int)SeCompareSigningLevels(*((unsigned __int8 *)Object + 1785), v83) )
                    {
                      v40 = -1073741790;
                      goto LABEL_269;
                    }
                  }
                  p_Lock = (volatile signed __int32 *)Object;
                  v123 = (int)Handle;
LABEL_347:
                  if ( (p_Lock[532] & 0x3000000) != 0 && (v122 & 0x10) == 0 && !v124 && !v123 && (v122 & 1) == 0 )
                  {
                    v40 = -1073741790;
                    goto LABEL_270;
                  }
                  v40 = 0;
                  if ( (v122 & 1) != 0 )
                  {
                    if ( *((_BYTE *)p_Lock + 1784) < 8u )
                    {
                      *((_BYTE *)p_Lock + 1784) = 8;
                      p_Lock = (volatile signed __int32 *)Object;
                    }
                    if ( *((_BYTE *)p_Lock + 1785) < 8u )
                    {
                      *((_BYTE *)p_Lock + 1785) = 8;
LABEL_353:
                      p_Lock = (volatile signed __int32 *)Object;
                    }
                  }
                  else if ( v124 )
                  {
                    LOBYTE(v83) = 6;
                    if ( !(unsigned int)SeCompareSigningLevels(*((unsigned __int8 *)p_Lock + 1784), v83) )
                    {
                      v40 = -1073741790;
                      goto LABEL_269;
                    }
                    LOBYTE(v198) = 6;
                    v199 = SeCompareSigningLevels(v198, *((unsigned __int8 *)Object + 1785));
                    v123 = (int)Handle;
                    if ( v199 )
                      *((_BYTE *)Object + 1785) = 6;
                    goto LABEL_353;
                  }
                  if ( v122 )
                    v7 = 0x800000;
                  v125 = (v123 ^ 1) << 24;
                  v126 = v7 | 0x1000000;
                  if ( !v123 )
                    v126 = v7;
                  if ( (v122 & 0x10) != 0 )
                    v126 |= 0x2000000u;
                  else
                    v125 |= 0x2000000u;
                  RtlInterlockedSetClearBits(p_Lock + 532, v126, v125);
                  goto LABEL_269;
                case 13:
                  v111 = HIDWORD(v218);
                  if ( (v218 & 0xFFFFFFF800000000uLL) == 0 )
                  {
                    if ( (v218 & 0x100000000LL) == 0 && (v218 & 0x400000000LL) != 0 )
                    {
                      v40 = -1073741811;
                      goto LABEL_270;
                    }
                    if ( (v218 & 0x100000000LL) != 0 && (v218 & 0x200000000LL) != 0 )
                      v111 = HIDWORD(v218) & 0xFFFFFFFD;
                    NoChildProcessRestrictedPolicy = PspGetNoChildProcessRestrictedPolicy(v81);
                    v113 = NoChildProcessRestrictedPolicy;
                    v114 = v111 & 1;
                    if ( (v111 & 1) == 0 && NoChildProcessRestrictedPolicy - 1 <= 1 )
                    {
                      v40 = -1073741790;
                      goto LABEL_269;
                    }
                    v115 = (v111 >> 2) & 1;
                    if ( v115 && (_DWORD)v113 == 1 )
                    {
                      v40 = -1073741790;
                      goto LABEL_269;
                    }
                    v116 = (v111 >> 1) & 1;
                    if ( !v116 )
                    {
                      if ( v114 )
                        goto LABEL_326;
                      if ( (_DWORD)v113 == 3 )
                      {
                        v40 = -1073741790;
                        goto LABEL_269;
                      }
                    }
                    if ( !v114 )
                    {
                      if ( !v116 )
                        goto LABEL_329;
                      v118 = 3LL;
                      v117 = Object;
LABEL_328:
                      PspSetNoChildProcessRestrictedPolicy(v117, v118, v113);
LABEL_329:
                      v40 = 0;
                      goto LABEL_269;
                    }
LABEL_326:
                    v117 = Object;
                    if ( v115 )
                      v118 = 2LL;
                    else
                      v118 = 1LL;
                    goto LABEL_328;
                  }
                  v40 = -1073741811;
                  break;
                case 14:
                  if ( (v218 & 0xFFFFFFF000000000uLL) != 0 )
                  {
                    v40 = -1073741811;
                    goto LABEL_270;
                  }
                  if ( (v218 & 0x100000000LL) == 0 && (*(_DWORD *)&v81[2].Spare2[7] & 0x40000000) != 0
                    || ((HIDWORD(v218) >> 1) & 1) == 0 && *(int *)&v81[2].Spare2[7] < 0
                    || ((HIDWORD(v218) >> 3) & 1) == 0 && (*(_DWORD *)&v81[2].Spare2[11] & 0x2000) != 0 )
                  {
                    goto LABEL_654;
                  }
                  v200 = (HIDWORD(v218) >> 2) & 1;
                  if ( v200 || (*(_DWORD *)&v81[2].Spare2[11] & 0x1000) == 0 )
                  {
                    if ( (v218 & 0x100000000LL) != 0 )
                    {
                      _InterlockedOr((volatile signed __int32 *)&v81[2].Spare2[7], 0x40000000u);
                      p_Lock = (volatile signed __int32 *)Object;
                    }
                    if ( ((HIDWORD(v218) >> 1) & 1) != 0 )
                    {
                      _InterlockedOr(p_Lock + 532, 0x80000000);
                      _InterlockedOr((volatile signed __int32 *)Object + 447, 0x200000u);
                      PspWriteProcessSecurityDomain((__int64)Object, _InterlockedIncrement64(&PsNextSecurityDomain), 1);
                      KeSynchronizeSecurityDomain((_KPROCESS *)Object);
                      p_Lock = (volatile signed __int32 *)Object;
                    }
                    if ( v200 )
                    {
                      _InterlockedOr(p_Lock + 533, 0x1000u);
                      p_Lock = (volatile signed __int32 *)Object;
                    }
                    if ( ((HIDWORD(v218) >> 3) & 1) != 0 )
                    {
                      _InterlockedOr(p_Lock + 533, 0x2000u);
                      p_Lock = (volatile signed __int32 *)Object;
                    }
                    v40 = 0;
                  }
                  else
                  {
                    v40 = -1073741790;
                  }
                  goto LABEL_270;
                default:
                  v40 = -1073741637;
                  goto LABEL_270;
              }
              break;
          }
LABEL_270:
          if ( v80 == 1 )
          {
            v47 = (PVOID)p_Lock;
LABEL_133:
            ObfDereferenceObjectWithTag(v47, 0x79517350u);
            return v40;
          }
          return v40;
        case ProcessDynamicFunctionTableInformation:
          if ( ProcessHandle != (HANDLE)-1LL )
            return -1073741811;
          if ( ProcessInformationLength != 16 )
            return -1073741820;
          v271 = *(_OWORD *)ProcessInformation;
          if ( BYTE8(v271) )
            return RtlRemoveDynamicFunctionTable(v271);
          else
            return RtlInsertDynamicFunctionTable(v271);
        case ProcessHandleCheckingMode:
          if ( ProcessInformationLength != 4 )
            return -1073741820;
          v269 = *(_DWORD *)ProcessInformation;
          v90 = v269;
          if ( (v269 & 0xFFFFFFFE) != 0 )
            return -1073741811;
          result = ObReferenceObjectByHandleWithTag(
                     ProcessHandle,
                     0x200u,
                     (POBJECT_TYPE)PsProcessType,
                     v9,
                     0x79517350u,
                     &Object,
                     0LL);
          if ( result < 0 )
            return result;
          v91 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)Object);
          if ( v91 )
          {
            LOBYTE(v92) = (v90 & 1) != 0;
            ExEnableHandleExceptions(v91, v92);
            ObDereferenceProcessHandleTable(Object);
          }
          else
          {
LABEL_799:
            v7 = -1073741558;
          }
          goto LABEL_139;
        case ProcessRevokeFileHandles:
          v236 = 0LL;
          Src = 0LL;
          v201 = 0LL;
          v249 = 0LL;
          if ( v9 != 1 )
            goto LABEL_813;
          if ( (unsigned __int64)ProcessInformation >= 0x7FFFFFFF0000LL )
            v5 = 0x7FFFFFFF0000LL;
          v202 = *(_DWORD *)v5;
          LODWORD(v236) = v202;
          v203 = *(void **)(v5 + 8);
          Src = v203;
          if ( !(_WORD)v202 )
            return -1073741811;
          if ( ((unsigned __int8)v203 & 1) != 0 )
            ExRaiseDatatypeMisalignment();
          v204 = (unsigned __int64)v203 + (unsigned __int16)v202;
          if ( v204 > 0x7FFFFFFF0000LL || v204 < (unsigned __int64)v203 )
            MEMORY[0x7FFFFFFF0000] = 0;
          v205 = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned __int16)v236, 0x6E497350u);
          v201 = v205;
          v249 = v205;
          if ( !v205 )
            return -1073741670;
          memmove(v205, Src, (unsigned __int16)v236);
          Src = v201;
          v5 = (__int64)&v236;
          v281 = &v236;
          ProcessHandle = Handle;
LABEL_813:
          v7 = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x2000u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
          if ( v7 < 0 )
          {
            if ( v201 )
              ExFreePoolWithTag(v201, 0);
            return v7;
          }
          v62 = IoRevokeHandlesForProcess(v5, Object);
          if ( v201 )
            ExFreePoolWithTag(v201, 0);
LABEL_183:
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
          return v62;
        case ProcessWorkingSetControl:
          return MmProcessWorkingSetControl((ULONG_PTR)ProcessHandle);
        case ProcessCheckStackExtentsMode:
          if ( ProcessInformationLength != 4 )
            return -1073741820;
          result = ObReferenceObjectByHandleWithTag(
                     ProcessHandle,
                     0x200u,
                     (POBJECT_TYPE)PsProcessType,
                     v9,
                     0x79517350u,
                     &Object,
                     0LL);
          if ( result < 0 )
            return result;
          v206 = *(_DWORD *)v5 != 0;
          v270 = *(_DWORD *)v5 != 0;
          if ( PsGetCurrentProcess() == Object )
          {
            v64 = -1073741790;
          }
          else if ( SeSinglePrivilegeCheck(SeDebugPrivilege, v9) )
          {
            v64 = 0;
            KeSetCheckStackExtentsProcess(Object, v206);
            if ( !v206 && (*((_DWORD *)Object + 194) & 0x20000) != 0 )
              _InterlockedAnd((volatile signed __int32 *)Object + 194, 0xFFFDFFFF);
          }
          else
          {
            v64 = -1073741727;
          }
          goto LABEL_198;
        case ProcessMemoryExhaustion:
          if ( ProcessInformationLength != 16 )
            return -1073741820;
          v288 = *(_OWORD *)ProcessInformation;
          if ( (_WORD)v288 != 1 || DWORD1(v288) )
            return -1073741811;
          result = ObReferenceObjectByHandleWithTag(
                     ProcessHandle,
                     0x200u,
                     (POBJECT_TYPE)PsProcessType,
                     v9,
                     0x79517350u,
                     &Object,
                     0LL);
          if ( result < 0 )
            return result;
          if ( *((_QWORD *)&v288 + 1) )
            _InterlockedOr((volatile signed __int32 *)Object + 195, 0x100u);
          else
            _InterlockedAnd((volatile signed __int32 *)Object + 195, 0xFFFFFEFF);
          goto LABEL_43;
        case ProcessFaultInformation:
          v244 = 0LL;
          if ( ProcessInformationLength != 8 )
            return -1073741820;
          result = ObReferenceObjectByHandleWithTag(
                     ProcessHandle,
                     0x200u,
                     (POBJECT_TYPE)PsProcessType,
                     v9,
                     0x79517350u,
                     &Object,
                     0LL);
          if ( result < 0 )
            return result;
          v244 = *(_QWORD *)v5;
          v40 = PsSetProcessFaultInformation((ULONG_PTR)Object);
          goto LABEL_132;
        case ProcessCommitReleaseInformation:
          if ( ProcessInformationLength != 32 )
            return -1073741820;
          result = ObReferenceObjectByHandleWithTag(
                     ProcessHandle,
                     0x2001u,
                     (POBJECT_TYPE)PsProcessType,
                     v9,
                     0x79517350u,
                     &Object,
                     0LL);
          if ( result < 0 )
            return result;
          v274 = *(__m256i *)v5;
          if ( v274.m256i_i32[0] != 3 )
          {
            ObfDereferenceObjectWithTag(Object, 0x79517350u);
            return -1073741735;
          }
          if ( (v274.m256i_i32[1] & 0xFFFFFFF8) != 0
            || *(_OWORD *)&v274.m256i_u64[1] != 0LL
            || ((((unsigned __int32)v274.m256i_i32[1] >> 1) & 1) != 0 || (v274.m256i_i8[4] & 4) != 0)
            && (v274.m256i_i8[4] & 1) == 0 )
          {
            ObfDereferenceObjectWithTag(Object, 0x79517350u);
            return -1073741811;
          }
          if ( (((unsigned __int32)v274.m256i_i32[1] >> 1) & 1) != 0 || (v274.m256i_i8[4] & 4) != 0 )
            v207 = MmReleaseCommitForMemResetPages((ULONG_PTR)Object, ((unsigned __int32)v274.m256i_i32[1] >> 2) & 1);
          else
            v207 = MmSetCommitReleaseEligibility((ULONG_PTR)Object, v274.m256i_i8[4] & 1);
          v40 = v207;
LABEL_132:
          v47 = Object;
          goto LABEL_133;
        case ProcessDefaultCpuSetsInformation:
        case ProcessAllowedCpuSetsInformation:
          if ( (ProcessInformationLength & 7) != 0 || ProcessInformationLength > 0xA0 )
            return -1073741820;
          memmove(v292, ProcessInformation, ProcessInformationLength);
          v137 = (unsigned int)v4 >> 3;
          if ( ProcessInformationClass == ProcessAllowedCpuSetsInformation )
          {
            result = ExCpuSetResourceManagerAccessCheck(v9);
            if ( result < 0 )
              return result;
          }
          result = ObReferenceObjectByHandleWithTag(
                     Handle,
                     0x2000u,
                     (POBJECT_TYPE)PsProcessType,
                     v9,
                     0x79517350u,
                     &Object,
                     0LL);
          if ( result < 0 )
            return result;
          v40 = KeSetCpuSetsProcess((__int64)Object, v137, v292);
          goto LABEL_132;
        case ProcessSubsystemProcess:
          Object = 0LL;
          if ( (PsGetCurrentProcess()[1].SecureState.SecureHandle & 0x100) == 0 )
            return -1073741727;
          v40 = ObReferenceObjectByHandle(Handle, 0x200u, (POBJECT_TYPE)PsProcessType, v9, &v263, 0LL);
          Object = v263;
          if ( v40 < 0 )
            return v40;
          _InterlockedOr((volatile signed __int32 *)v263 + 447, 0x40u);
          v136 = Object;
          goto LABEL_420;
        case ProcessInPrivate:
          result = ObReferenceObjectByHandleWithTag(
                     ProcessHandle,
                     0x200u,
                     (POBJECT_TYPE)PsProcessType,
                     v9,
                     0x79517350u,
                     &Object,
                     0LL);
          if ( result < 0 )
            return result;
          _InterlockedOr((volatile signed __int32 *)Object + 194, 0x80000000);
          goto LABEL_43;
        case ProcessRaiseUMExceptionOnInvalidHandleClose:
          if ( ProcessInformationLength != 4 )
            return -1073741820;
          v48 = *(_DWORD *)ProcessInformation;
          v253 = *(_DWORD *)ProcessInformation;
          result = ObReferenceObjectByHandleWithTag(
                     ProcessHandle,
                     0x200u,
                     (POBJECT_TYPE)PsProcessType,
                     v9,
                     0x79517350u,
                     &Object,
                     0LL);
          if ( result < 0 )
            return result;
          v49 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)Object);
          if ( !v49 )
            goto LABEL_799;
          ExEnableRaiseUMExceptionOnInvalidHandleClose(v49, v48);
          ObDereferenceProcessHandleTable(Object);
          goto LABEL_139;
        case ProcessIumChallengeResponse:
          return PsIumEnableOnDemandDebugWithResponse(ProcessHandle, ProcessInformation, ProcessInformationLength);
        case ProcessHighGraphicsPriorityInformation:
          if ( ProcessInformationLength != 1 )
            return -1073741820;
          v209 = *(_BYTE *)ProcessInformation;
          v227 = *(_BYTE *)ProcessInformation;
          if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, v9) )
            return -1073741727;
          result = ObReferenceObjectByHandleWithTag(
                     Handle,
                     0x2000u,
                     (POBJECT_TYPE)PsProcessType,
                     v9,
                     0x79517350u,
                     &Object,
                     0LL);
          if ( result < 0 )
            return result;
          if ( v209 )
            _InterlockedOr((volatile signed __int32 *)Object + 447, 0x200u);
          else
            _InterlockedAnd((volatile signed __int32 *)Object + 447, 0xFFFFFDFF);
          goto LABEL_43;
        case ProcessPowerThrottlingState:
          v285 = 0LL;
          v286 = 0;
          if ( ProcessInformationLength != 12 )
            return -1073741820;
          v285 = *(_QWORD *)ProcessInformation;
          v108 = *((_DWORD *)ProcessInformation + 2);
          v286 = v108;
          if ( (_DWORD)v285 != 1 || (v285 & 0xFFFFFFFC00000000uLL) != 0 || (~HIDWORD(v285) & v108) != 0 )
            return -1073741811;
          ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost);
          if ( !ExtensionTable )
            return -1073741822;
          v62 = ObReferenceObjectByHandleWithTag(
                  Handle,
                  0x2000u,
                  (POBJECT_TYPE)PsProcessType,
                  v9,
                  0x79517350u,
                  &Object,
                  0LL);
          if ( v62 < 0 )
          {
            ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost);
            return v62;
          }
          else
          {
            v110 = (*(__int64 (__fastcall **)(PVOID, __int64 *))(ExtensionTable + 8))(Object, &v285);
            ObfDereferenceObjectWithTag(Object, 0x79517350u);
            ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost);
            return v110;
          }
        case ProcessDisableSystemAllowedCpuSets:
          result = ExCpuSetResourceManagerAccessCheck(v9);
          if ( result < 0 )
            return result;
          if ( (_DWORD)v4 != 1 )
            return -1073741820;
          v208 = *(_BYTE *)v5;
          v226 = *(_BYTE *)v5;
          result = ObReferenceObjectByHandleWithTag(
                     Handle,
                     0x2000u,
                     (POBJECT_TYPE)PsProcessType,
                     v9,
                     0x79517350u,
                     &Object,
                     0LL);
          if ( result < 0 )
            return result;
          if ( v208 )
            _InterlockedOr((volatile signed __int32 *)Object + 194, 0x8000000u);
          else
            _InterlockedAnd((volatile signed __int32 *)Object + 194, 0xF7FFFFFF);
          KeRecomputeCpuSetAffinityProcess((__int64)Object);
          goto LABEL_43;
        case ProcessEnergyTrackingState:
          if ( ProcessInformationLength < 8 )
            return -1073741820;
          memset(v291, 0, sizeof(v291));
          if ( (unsigned int)v4 >= 0x90 )
            LODWORD(v4) = 144;
          memmove(v291, (const void *)v5, (unsigned int)v4);
          result = ObReferenceObjectByHandleWithTag(
                     Handle,
                     0x200u,
                     (POBJECT_TYPE)PsProcessType,
                     v9,
                     0x79517350u,
                     &Object,
                     0LL);
          if ( result < 0 )
            return result;
          v95 = PoSetProcessEnergyTrackingState(Object, v291);
          v13 = Object;
          if ( v95 >= 0 )
            goto LABEL_44;
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
          return v95;
        case ProcessManageWritesToExecutableMemory:
          return -1073741637;
        case ProcessTelemetryCoverage:
          if ( ProcessInformationLength != 24 )
            return -1073741820;
          memset(pszDest, 0, 0x41uLL);
          v128 = *(_OWORD *)v5;
          *(_OWORD *)pszSrc = v128;
          v251 = *(_QWORD *)(v5 + 16);
          v129 = (const char *)v128;
          if ( (unsigned __int64)(v128 + 65) > 0x7FFFFFFF0000LL || (__int64)v128 + 65 < (unsigned __int64)v128 )
          {
            MEMORY[0x7FFFFFFF0000] = 0;
            v129 = pszSrc[0];
          }
          RtlStringCbCopyA(pszDest, 0x41uLL, v129);
          result = ObReferenceObjectByHandleWithTag(
                     Handle,
                     0x220u,
                     (POBJECT_TYPE)PsProcessType,
                     v9,
                     0x79517350u,
                     &Object,
                     0LL);
          if ( result < 0 )
            return result;
          pszSrc[0] = pszDest;
          pszDest[64] = 0;
          v40 = EtwSetProcessTelemetryCoverage(Object, pszSrc);
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
          *(_DWORD *)(v5 + 12) = HIDWORD(pszSrc[1]);
          *(_DWORD *)(v5 + 16) = v251;
          return v40;
        case ProcessEnableReadWriteVmLogging:
        case ProcessEnableLogging:
          if ( !ProcessInformationLength && ProcessInformationClass == ProcessEnableReadWriteVmLogging
            || ProcessInformationClass == ProcessEnableLogging && ProcessInformationLength < 4 )
          {
            return -1073741820;
          }
          if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, v9) && !SeSinglePrivilegeCheck(SeTcbPrivilege, v9) )
            return -1073741727;
          if ( ProcessInformationClass == ProcessEnableReadWriteVmLogging )
            v58 = *(_BYTE *)v5 & 1 ^ (*(_BYTE *)v5 ^ *(_BYTE *)v5 & 1) & 2;
          else
            v58 = *(_DWORD *)v5;
          v221 = v58;
          if ( (v58 & 0xFFFFFFF0) != 0 )
            return -1073741811;
          result = ObReferenceObjectByHandleWithTag(
                     Handle,
                     0x2000u,
                     (POBJECT_TYPE)PsProcessType,
                     v9,
                     0x79517350u,
                     &Object,
                     0LL);
          if ( result < 0 )
            return result;
          _InterlockedAnd((volatile signed __int32 *)Object + 447, 0xFFE7FFFF);
          v59 = 0;
          if ( (v221 & 4) != 0 )
            v59 = 0x80000;
          if ( (v221 & 8) != 0 )
            v59 |= 0x100000u;
          _InterlockedOr((volatile signed __int32 *)Object + 447, v59);
          _InterlockedAnd((volatile signed __int32 *)Object + 194, 0xFCFFFFFF);
          if ( (v221 & 1) != 0 )
            v7 = 0x1000000;
          if ( (v221 & 2) != 0 )
            v7 |= 0x2000000u;
          _InterlockedOr((volatile signed __int32 *)Object + 194, v7);
          goto LABEL_43;
        case ProcessDebugAuthInformation:
          return SeCodeIntegritySetInformationProcess(
                   ProcessHandle,
                   (unsigned int)ProcessInformationClass,
                   ProcessInformation,
                   ProcessInformationLength);
        case ProcessSystemResourceManagement:
          if ( ProcessInformationLength != 4 )
            return -1073741820;
          v238 = *(_DWORD *)ProcessInformation;
          v88 = v238;
          if ( (v238 & 0xFFFFFFFE) != 0 )
            return -1073741811;
          if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, v9) )
            return -1073741727;
          result = ObReferenceObjectByHandleWithTag(
                     Handle,
                     0x2000u,
                     (POBJECT_TYPE)PsProcessType,
                     v9,
                     0x79517350u,
                     &Object,
                     0LL);
          if ( result < 0 )
            return result;
          LOBYTE(v89) = 1;
          PspSetProcessForegroundBackgroundRequest(Object, v88 & 1, v89);
          goto LABEL_43;
        case ProcessLoaderDetour:
          if ( ProcessInformationLength != 4 )
            return -1073741820;
          v210 = *(_DWORD *)ProcessInformation;
          v272 = *(_DWORD *)ProcessInformation;
          result = ObReferenceObjectByHandleWithTag(
                     ProcessHandle,
                     0x2000u,
                     (POBJECT_TYPE)PsProcessType,
                     v9,
                     0x79517350u,
                     &Object,
                     0LL);
          v64 = result;
          if ( result < 0 )
            return result;
          if ( Object != PsGetCurrentProcess() || !v210 )
            goto LABEL_549;
          v211 = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost);
          if ( v211 )
          {
            (*(void (__fastcall **)(PVOID, _QWORD))(v211 + 40))(Object, v210);
            ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost);
          }
          goto LABEL_198;
        case ProcessCombineSecurityDomainsInformation:
          if ( ProcessInformationLength != 8 )
            return -1073741820;
          v46 = *(void **)ProcessInformation;
          v264 = *(_QWORD *)ProcessInformation;
          result = ObReferenceObjectByHandleWithTag(
                     ProcessHandle,
                     0x2000u,
                     (POBJECT_TYPE)PsProcessType,
                     v9,
                     0x79517350u,
                     &Object,
                     0LL);
          if ( result < 0 )
            return result;
          v40 = ObReferenceObjectByHandleWithTag(v46, 0x1000u, (POBJECT_TYPE)PsProcessType, v9, 0x79517350u, &v245, 0LL);
          v47 = Object;
          if ( v40 < 0 )
            goto LABEL_133;
          v40 = PspCombineSecurityDomains((PEPROCESS)Object, (PEPROCESS)v245);
          ObfDereferenceObjectWithTag(v245, 0x79517350u);
          goto LABEL_132;
        case ProcessLeapSecondInformation:
          if ( ProcessInformationLength != 8 )
            return -1073741820;
          v265 = *(_QWORD *)ProcessInformation;
          if ( (v265 & 0xFFFFFFFE) != 0 || ProcessHandle != (HANDLE)-1LL )
            return -1073741811;
          v138 = PsGetCurrentProcess();
          Object = v138;
          v139 = v138[1].ActiveProcessors.Bitmap[0];
          if ( !v139 )
            return -1073741790;
          v140 = 0LL;
          v141 = (__int64 *)v138[1].ActiveProcessors.Bitmap[6];
          if ( v141 )
            v140 = *v141;
          v142 = v265 & 1;
          if ( (v265 & 1) != 0 )
            *(_DWORD *)(v139 + 1984) |= 1u;
          else
            *(_DWORD *)(v139 + 1984) &= ~1u;
          if ( v140 )
          {
            if ( v142 )
              *(_DWORD *)(v140 + 1140) |= 1u;
            else
              *(_DWORD *)(v140 + 1140) &= ~1u;
          }
          return v7;
        case ProcessFiberShadowStackAllocation:
          if ( ProcessHandle != (HANDLE)-1LL )
            return -1073741811;
          if ( v9 != 1 )
            return -1073741823;
          if ( ProcessInformationLength != 32 )
            return -1073741820;
          if ( (KeFeatureBits & 0x400000000000LL) == 0 || (KeGetCurrentThread()->MiscFlags & 0x100000) == 0 )
            return -1073741637;
          v279 = *(_OWORD *)ProcessInformation;
          v280 = *((_OWORD *)ProcessInformation + 1);
          result = PspSetupUserFiberShadowStack(v279, *((_QWORD *)&v279 + 1), (unsigned int)v280, &BaseAddress);
          v16 = result;
          if ( result < 0 )
            return result;
          *(_QWORD *)(v5 + 24) = BaseAddress;
          return v16;
        case ProcessFreeFiberShadowStackAllocation:
          if ( ProcessHandle != (HANDLE)-1LL )
            return -1073741811;
          if ( v9 != 1 )
            return -1073741823;
          if ( ProcessInformationLength != 8 )
            return -1073741820;
          if ( (KeFeatureBits & 0x400000000000LL) != 0 && (KeGetCurrentThread()->MiscFlags & 0x100000) != 0 )
            return PspFreeUserFiberShadowStack(*(PVOID *)ProcessInformation);
          else
            return -1073741637;
        default:
          return -1073741821;
      }
    }
    memset(v290, 0, 0x28uLL);
    if ( Handle == (HANDLE)-1LL )
    {
      if ( v9 != 1 )
        return -1073741823;
      if ( (unsigned int)v4 < 0x28 || (unsigned int)(v4 - 16) % 0x18uLL )
        return -1073741820;
      if ( (_DWORD)v4 == 40 )
      {
        PoolWithQuotaTag = v290;
        P = v290;
      }
      else
      {
        PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, v4, 0x736C5450u);
        P = PoolWithQuotaTag;
        if ( !PoolWithQuotaTag )
          return -1073741670;
      }
      v266 = PoolWithQuotaTag;
      memmove(PoolWithQuotaTag, (const void *)v5, v4);
      if ( PoolWithQuotaTag[1] < 2u
        && (*PoolWithQuotaTag & 0xFFFFFFFE) == 0
        && (v18 = (unsigned int)PoolWithQuotaTag[2], (_DWORD)v18)
        && (unsigned int)(v4 - 16) / 0x18uLL == v18 )
      {
        for ( j = 0; ; ++j )
        {
          v215 = j;
          if ( j >= (unsigned int)v18 )
            break;
          if ( PoolWithQuotaTag[6 * j + 4] )
            goto LABEL_178;
        }
        v20 = PsGetCurrentProcess();
        v21 = v20;
        Object = v20;
        LODWORD(Handle) = 0;
        if ( (*PoolWithQuotaTag & 1) != 0 )
        {
          v60 = v20[1].ActiveProcessors.Bitmap[6];
          if ( !v60 || (v121 = *(_WORD *)(v60 + 8), v121 != 332) && v121 != 452 )
          {
LABEL_178:
            v40 = -1073741811;
            goto LABEL_108;
          }
          LODWORD(Handle) = 1;
        }
        v22 = (unsigned int)Handle ^ 1;
        Alignment = 4 * v22 + 4;
        v234 = 4 * v22 + 4;
        v224 = v5;
        v215 = 0;
        v216 = 0;
        for ( k = PsGetNextProcessThread(v21, 0LL); ; k = PsGetNextProcessThread(Object, v223) )
        {
          v223 = (struct _EX_RUNDOWN_REF *)k;
          v24 = k;
          if ( !k || v215 >= PoolWithQuotaTag[2] )
            break;
          if ( (*(_DWORD *)(k + 116) & 0x400) == 0 && ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(k + 1736)) )
          {
            v25 = *(_QWORD *)(v24 + 240);
            v247 = v25;
            if ( (_DWORD)Handle )
            {
              v26 = (char *)(v25 + 8236);
              v233 = v25 + 8236;
              LODWORD(v28) = PtrToUlong((const void *)*(unsigned int *)(v25 + 8236));
              v27 = v28;
              v231 = v28;
            }
            else
            {
              v26 = (char *)(v25 + 88);
              v233 = v25 + 88;
              v27 = *(char **)(v25 + 88);
              v231 = v27;
            }
            if ( v27 )
            {
              if ( PoolWithQuotaTag[1] == 1 )
              {
                if ( v27 == v26 )
                {
                  v231 = 0LL;
                }
                else
                {
                  v41 = PoolWithQuotaTag[3];
                  v42 = v234 * v41;
                  if ( v42 )
                  {
                    if ( ((Alignment - 1) & (unsigned int)v27) != 0 )
                      ExRaiseDatatypeMisalignment();
                    if ( (unsigned __int64)&v27[v42] > 0x7FFFFFFF0000LL || &v27[v42] < v27 )
                    {
                      MEMORY[0x7FFFFFFF0000] = 0;
                      v41 = v266[3];
                    }
                  }
                  v43 = (volatile void **)&PoolWithQuotaTag[6 * v215 + 6];
                  ProbeForWrite(*v43, v234 * v41, Alignment);
                  memmove((void *)*v43, v27, v234 * (unsigned int)PoolWithQuotaTag[3]);
                  _InterlockedOr(v212, 0);
                  v25 = v247;
                }
                v44 = 6LL * v215;
                *(_DWORD *)(v224 + v44 * 4 + 16) |= 1u;
                if ( (_DWORD)Handle )
                  *(_DWORD *)(v25 + 8236) = PtrToUlong(*(const void **)&PoolWithQuotaTag[v44 + 6]);
                else
                  *(_QWORD *)(v25 + 88) = *(_QWORD *)&PoolWithQuotaTag[v44 + 6];
                v45 = v224 + 24LL * v215;
                *(struct _EX_RUNDOWN_REF *)(v45 + 32) = v223[202];
                *(_QWORD *)(v45 + 24) = v231;
                *(_DWORD *)(v45 + 16) ^= 3u;
                ++v215;
              }
              else
              {
                v29 = 6LL * v215;
                *(_DWORD *)(v224 + v29 * 4 + 16) |= 1u;
                v30 = (unsigned int)PoolWithQuotaTag[3];
                if ( (_DWORD)Handle )
                {
                  v34 = (unsigned __int64)&v27[4 * v30];
                  if ( v34 >= 0x7FFFFFFF0000LL )
                    v34 = 0x7FFFFFFF0000LL;
                  LODWORD(v35) = PtrToUlong((const void *)*(unsigned int *)v34);
                  v32 = v35;
                  v233 = v35;
                  v36 = PtrToUlong(*(const void **)&PoolWithQuotaTag[v29 + 6]);
                  v37 = (unsigned __int64)&v231[4 * PoolWithQuotaTag[3]];
                  if ( v37 >= 0x7FFFFFFF0000LL )
                    v37 = 0x7FFFFFFF0000LL;
                  *(_DWORD *)v37 = v36;
                }
                else
                {
                  v31 = (unsigned __int64)&v27[8 * v30];
                  if ( v31 >= 0x7FFFFFFF0000LL )
                    v31 = 0x7FFFFFFF0000LL;
                  v32 = *(_QWORD *)v31;
                  v233 = *(_QWORD *)v31;
                  v33 = (unsigned __int64)&v231[8 * PoolWithQuotaTag[3]];
                  if ( v33 >= 0x7FFFFFFF0000LL )
                    v33 = 0x7FFFFFFF0000LL;
                  *(_QWORD *)v33 = *(_QWORD *)&PoolWithQuotaTag[v29 + 6];
                }
                v38 = 3LL * v215;
                v39 = v224;
                *(_QWORD *)(v224 + 8 * v38 + 24) = v32;
                *(_DWORD *)(v39 + 8 * v38 + 16) ^= 3u;
                ++v215;
              }
            }
            ExReleaseRundownProtection_0(v223 + 217);
          }
        }
        if ( v223 )
          PsQuitNextProcessThread(v223);
        v40 = v216;
      }
      else
      {
        v40 = -1073741820;
      }
LABEL_108:
      if ( PoolWithQuotaTag != (_DWORD *)v290 )
        ExFreePoolWithTag(PoolWithQuotaTag, 0);
      return v40;
    }
    return -1073741811;
  }
  memset(v273, 0, sizeof(v273));
  if ( Handle != (HANDLE)-1LL )
    return -1073741811;
  v14 = 0LL;
  if ( (_DWORD)v4 == 40 )
  {
    if ( v9 )
    {
      *(_OWORD *)v273 = *(_OWORD *)v5;
      *(_OWORD *)&v273[16] = *(_OWORD *)(v5 + 16);
      *(_QWORD *)&v273[32] = *(_QWORD *)(v5 + 32);
      v14 = (_QWORD *)(v5 + 32);
      v5 = (__int64)v273;
    }
    v15 = *(_DWORD *)v5;
    if ( *(_DWORD *)v5 > 0x40u || *(_DWORD *)(v5 + 4) | *(_DWORD *)(v5 + 8) | *(_DWORD *)(v5 + 12) )
      return -1073741811;
    v5 += 16LL;
  }
  else
  {
    if ( (_DWORD)v4 != 24 )
      return -1073741820;
    v15 = 0;
    if ( v9 )
    {
      *(_OWORD *)&v273[16] = *(_OWORD *)v5;
      v14 = (_QWORD *)(v5 + 16);
      v5 = (__int64)&v273[16];
    }
  }
  if ( !*(_QWORD *)v5 )
    return -1073741811;
  v268 = *(_QWORD *)v5;
  *(_QWORD *)(v5 + 16) = 0LL;
  result = MmAllocateUserStack((int)v5 + 16, *(_QWORD *)(v5 + 8), (unsigned int)&v268, v15, 0);
  v16 = result;
  if ( result >= 0 )
  {
    if ( v9 )
      *v14 = *(_QWORD *)(v5 + 16);
    return v16;
  }
  return result;
}
