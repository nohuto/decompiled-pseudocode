/*
 * XREFs of PspAllocateProcess @ 0x14068E52C
 * Callers:
 *     NtCreateUserProcess @ 0x140615E10 (NtCreateUserProcess.c)
 *     PsCreateMinimalProcess @ 0x140769434 (PsCreateMinimalProcess.c)
 *     PspCreateProcess @ 0x1407853D0 (PspCreateProcess.c)
 * Callees:
 *     RtlWow64GetEquivalentMachineCHPE @ 0x140004164 (RtlWow64GetEquivalentMachineCHPE.c)
 *     KeQueryAffinityProcess @ 0x140006550 (KeQueryAffinityProcess.c)
 *     ObfReferenceObjectWithTag @ 0x14000D6B0 (ObfReferenceObjectWithTag.c)
 *     PoEnergyEstimationEnabled @ 0x14000E310 (PoEnergyEstimationEnabled.c)
 *     KeStackAttachProcess @ 0x140013AD0 (KeStackAttachProcess.c)
 *     PsIsSystemProcess @ 0x14001CDF0 (PsIsSystemProcess.c)
 *     KeUnstackDetachProcess @ 0x14003A6B0 (KeUnstackDetachProcess.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14003E330 (ObfReferenceObject.c)
 *     MmGetSessionIdEx @ 0x14003F4F0 (MmGetSessionIdEx.c)
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseRundownProtection_0 @ 0x140043820 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1400438A0 (ExAcquireRundownProtection_0.c)
 *     KeQuerySystemTimeUnsafe @ 0x140082004 (KeQuerySystemTimeUnsafe.c)
 *     ExInitializePushLock @ 0x140082020 (ExInitializePushLock.c)
 *     KeQueryMaximumGroupCount @ 0x140082030 (KeQueryMaximumGroupCount.c)
 *     KeQuerySystemTimePrecise @ 0x140082040 (KeQuerySystemTimePrecise.c)
 *     MmGetDefaultPagePriority @ 0x140097564 (MmGetDefaultPagePriority.c)
 *     PsReferencePartitionSafe @ 0x1400A0358 (PsReferencePartitionSafe.c)
 *     PsIsProtectedProcessLight @ 0x1400E2E30 (PsIsProtectedProcessLight.c)
 *     KeQueryUnbiasedInterruptTime @ 0x1400E5020 (KeQueryUnbiasedInterruptTime.c)
 *     PspLockProcessExclusive @ 0x1400E504C (PspLockProcessExclusive.c)
 *     PsIsProtectedProcess @ 0x1400E5070 (PsIsProtectedProcess.c)
 *     KeSelectNodeForAffinity @ 0x1400F90B0 (KeSelectNodeForAffinity.c)
 *     KeQueryActiveGroupCount @ 0x140106F80 (KeQueryActiveGroupCount.c)
 *     KeFirstGroupAffinityEx @ 0x14012F080 (KeFirstGroupAffinityEx.c)
 *     PspUnlockProcessExclusive @ 0x140139388 (PspUnlockProcessExclusive.c)
 *     PspWow64PickBestNtdll @ 0x1401395AC (PspWow64PickBestNtdll.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwOpenKey @ 0x1401C0310 (ZwOpenKey.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     KeSecureProcess @ 0x1402A523C (KeSecureProcess.c)
 *     PspInitializeProcessLock @ 0x140306970 (PspInitializeProcessLock.c)
 *     PsReferencePartition @ 0x140309954 (PsReferencePartition.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     PsWow64IsMachineSupported @ 0x1405C98E0 (PsWow64IsMachineSupported.c)
 *     PsWow64GetProcessMachine @ 0x1405E8D00 (PsWow64GetProcessMachine.c)
 *     SeQueryInformationToken @ 0x1405FEE00 (SeQueryInformationToken.c)
 *     ObCloseHandle @ 0x14060F280 (ObCloseHandle.c)
 *     PspUpdateCreateInfo @ 0x140617F64 (PspUpdateCreateInfo.c)
 *     SeIsTokenAssignableToProcess @ 0x14061CA40 (SeIsTokenAssignableToProcess.c)
 *     PspInitializeFullProcessImageName @ 0x140627218 (PspInitializeFullProcessImageName.c)
 *     PspAssignProcessQuotaBlock @ 0x140667248 (PspAssignProcessQuotaBlock.c)
 *     ObInitProcess @ 0x140671FD0 (ObInitProcess.c)
 *     SeSinglePrivilegeCheck @ 0x140672D30 (SeSinglePrivilegeCheck.c)
 *     PspSetupUserProcessAddressSpace @ 0x140679A54 (PspSetupUserProcessAddressSpace.c)
 *     PspPrepareSystemDllInitBlock @ 0x140679C8C (PspPrepareSystemDllInitBlock.c)
 *     PsWow64GetProcessNtdllType @ 0x140679EDC (PsWow64GetProcessNtdllType.c)
 *     PspMapSiloSharedDataView @ 0x140679EF4 (PspMapSiloSharedDataView.c)
 *     MmMapApiSetView @ 0x140679F2C (MmMapApiSetView.c)
 *     MmCreatePeb @ 0x14067A018 (MmCreatePeb.c)
 *     PspWritePebAffinityInfo @ 0x14067A7C4 (PspWritePebAffinityInfo.c)
 *     MmGetSectionInformation @ 0x14068D080 (MmGetSectionInformation.c)
 *     RtlOpenImageFileOptionsKey @ 0x14068D2E0 (RtlOpenImageFileOptionsKey.c)
 *     PspApplyWin32kFilterOptions @ 0x14068D2F8 (PspApplyWin32kFilterOptions.c)
 *     PspSetupReservedUserMappings @ 0x14068D350 (PspSetupReservedUserMappings.c)
 *     MmCreateProcessAddressSpace @ 0x14068D3A4 (MmCreateProcessAddressSpace.c)
 *     ObCreateObject @ 0x14068E010 (ObCreateObject.c)
 *     PspComputeQuantumAndPriority @ 0x14068E424 (PspComputeQuantumAndPriority.c)
 *     PspInheritMitigationOptions @ 0x14068FF9C (PspInheritMitigationOptions.c)
 *     MmNewProcessInitialized @ 0x140690074 (MmNewProcessInitialized.c)
 *     SmProcessCreateNotification @ 0x1406900C0 (SmProcessCreateNotification.c)
 *     PsQueryProcessAttributes @ 0x140691084 (PsQueryProcessAttributes.c)
 *     PspApplyMitigationOptions @ 0x140691394 (PspApplyMitigationOptions.c)
 *     PspInheritMitigationAuditOptions @ 0x140691BD4 (PspInheritMitigationAuditOptions.c)
 *     PspReadIFEOMitigationOptions @ 0x140691CA4 (PspReadIFEOMitigationOptions.c)
 *     PspReadIFEOMitigationAuditOptions @ 0x140691D24 (PspReadIFEOMitigationAuditOptions.c)
 *     PspInitializeProcessSecurity @ 0x140691E30 (PspInitializeProcessSecurity.c)
 *     KeInitializeProcess @ 0x140692038 (KeInitializeProcess.c)
 *     MmGetSessionSchedulingGroupByProcess @ 0x140692180 (MmGetSessionSchedulingGroupByProcess.c)
 *     LpcInitializeProcess @ 0x1406921AC (LpcInitializeProcess.c)
 *     MmInitializeProcessAddressSpace @ 0x1406921D8 (MmInitializeProcessAddressSpace.c)
 *     PspRundownSingleProcess @ 0x140693078 (PspRundownSingleProcess.c)
 *     MmSecureVirtualMemory @ 0x1406BEA00 (MmSecureVirtualMemory.c)
 *     SeQuerySessionIdToken @ 0x1406C5180 (SeQuerySessionIdToken.c)
 *     PspDetectComplusILImage @ 0x1406DC2B8 (PspDetectComplusILImage.c)
 *     PspReadIFEONodeOptions @ 0x1406DC38C (PspReadIFEONodeOptions.c)
 *     PspReadIFEOPerfOptions @ 0x1406DC3E4 (PspReadIFEOPerfOptions.c)
 *     RtlQueryImageFileKeyOption @ 0x1406DC5E0 (RtlQueryImageFileKeyOption.c)
 *     RtlAcquirePrivilege @ 0x1406DC974 (RtlAcquirePrivilege.c)
 *     PspSelectNodeForProcess @ 0x1406DD90C (PspSelectNodeForProcess.c)
 *     PoEnergyContextInitialize @ 0x1406E0CE4 (PoEnergyContextInitialize.c)
 *     PspHardenMitigationOptions @ 0x1406E2E18 (PspHardenMitigationOptions.c)
 *     PspInheritQuota @ 0x1406E5048 (PspInheritQuota.c)
 *     PspSetProcessPriorityClass @ 0x1406E5D18 (PspSetProcessPriorityClass.c)
 *     RtlReleasePrivilege @ 0x1406E707C (RtlReleasePrivilege.c)
 *     PspAttachSession @ 0x1406EAFC4 (PspAttachSession.c)
 *     PspDetachSession @ 0x1406EC7B8 (PspDetachSession.c)
 *     PspApplyIFEOPerfOptions @ 0x1406ECB8C (PspApplyIFEOPerfOptions.c)
 *     MmIsSessionLeaderProcess @ 0x14073AF50 (MmIsSessionLeaderProcess.c)
 *     MmInitializeHandBuiltProcess @ 0x140785DE0 (MmInitializeHandBuiltProcess.c)
 *     MmInitializeHandBuiltProcess2 @ 0x1407877B8 (MmInitializeHandBuiltProcess2.c)
 *     MmGetImageSectionBasedAddress @ 0x140887644 (MmGetImageSectionBasedAddress.c)
 *     MmGetSectionStrongImageReference @ 0x140898EE0 (MmGetSectionStrongImageReference.c)
 *     PspSetProcessAffinitySafe @ 0x1408C6F78 (PspSetProcessAffinitySafe.c)
 *     ExCreateHandle @ 0x14090B1E4 (ExCreateHandle.c)
 */

__int64 __fastcall PspAllocateProcess(
        __int64 a1,
        KPROCESSOR_MODE a2,
        __int64 a3,
        char a4,
        char a5,
        char a6,
        void *a7,
        void *a8,
        int a9,
        char a10,
        __int64 a11,
        int a12,
        PVOID a13,
        __int64 a14,
        PVOID *a15)
{
  __int64 v17; // r14
  unsigned int v18; // ebx
  unsigned int v19; // r15d
  __int64 MaximumGroupCount; // r13
  unsigned int v21; // r12d
  __int64 result; // rax
  _QWORD *v23; // rax
  _QWORD *v24; // rax
  _QWORD *v25; // rax
  PVOID v26; // rdx
  __int64 v27; // rcx
  char *v28; // rcx
  __int64 v29; // r12
  int v30; // ecx
  int v31; // edi
  int DefaultPagePriority; // r8d
  PVOID v33; // rdi
  PVOID v34; // r15
  int InformationToken; // edi
  char v36; // dl
  unsigned int v37; // ebx
  __int16 v38; // cx
  int v39; // eax
  __int16 EquivalentMachineCHPE; // ax
  unsigned __int16 v41; // r12
  unsigned int v42; // r15d
  int v43; // eax
  HANDLE *v44; // r15
  void *v45; // rcx
  int v46; // r15d
  ULONG v47; // edi
  KPROCESSOR_MODE v48; // al
  unsigned __int16 v49; // bx
  ULONG v50; // r9d
  char v51; // r15
  PEPROCESS v52; // rdx
  unsigned __int64 v53; // r8
  int v54; // eax
  int v55; // eax
  char v56; // di
  int v57; // r15d
  __int64 SessionSchedulingGroupByProcess; // rax
  __int64 v59; // r9
  int v60; // r8d
  int inited; // eax
  __int64 v62; // rdx
  __int64 v63; // r8
  __int64 v64; // r9
  KPROCESSOR_MODE v65; // di
  char v66; // al
  int v67; // r15d
  int v68; // eax
  int v69; // eax
  unsigned int v70; // r15d
  int v71; // eax
  unsigned int v72; // r15d
  int v73; // r12d
  PEPROCESS v74; // r15
  __int64 v75; // rdx
  PVOID v76; // r15
  int v77; // eax
  __int64 ImageSectionBasedAddress; // rax
  __int64 v79; // rdx
  PEPROCESS v80; // r12
  bool IsProtectedProcess; // al
  bool IsProtectedProcessLight; // al
  struct _KTHREAD *v83; // r13
  __int64 v84; // rax
  int v85; // r12d
  int v86; // eax
  bool v87; // sf
  int ImageFileKeyOption; // eax
  int v89; // eax
  __int16 v90; // di
  _QWORD *v91; // rcx
  __int64 v92; // rax
  int v93; // eax
  unsigned __int64 v94; // rcx
  char *v95; // rcx
  __int64 v96; // rax
  int v97; // ecx
  int SectionInformation; // eax
  int v100; // eax
  __int64 v101; // r15
  PVOID PoolWithTag; // rax
  void *v103; // rcx
  _OWORD *v104; // r15
  __int64 v105; // rcx
  __int16 v106; // ax
  unsigned __int64 *v107; // r15
  __int64 v108; // r8
  unsigned int ProcessNtdllType; // eax
  __int64 v110; // r8
  PVOID v111; // rcx
  unsigned int v112; // [rsp+20h] [rbp-468h]
  PVOID Object; // [rsp+70h] [rbp-418h] BYREF
  KPROCESSOR_MODE PreviousMode; // [rsp+78h] [rbp-410h]
  unsigned int v115; // [rsp+7Ch] [rbp-40Ch]
  char v116; // [rsp+80h] [rbp-408h] BYREF
  char v117; // [rsp+81h] [rbp-407h] BYREF
  char v118[2]; // [rsp+82h] [rbp-406h] BYREF
  unsigned int v119; // [rsp+84h] [rbp-404h]
  int v120; // [rsp+88h] [rbp-400h]
  int v121; // [rsp+8Ch] [rbp-3FCh]
  int v122; // [rsp+90h] [rbp-3F8h]
  int v123; // [rsp+94h] [rbp-3F4h]
  __int64 v124; // [rsp+98h] [rbp-3F0h] BYREF
  PEPROCESS Process; // [rsp+A0h] [rbp-3E8h]
  ULONG SessionId; // [rsp+A8h] [rbp-3E0h] BYREF
  int v127; // [rsp+ACh] [rbp-3DCh]
  __int16 v128; // [rsp+B0h] [rbp-3D8h]
  int v129; // [rsp+B4h] [rbp-3D4h]
  int v130; // [rsp+B8h] [rbp-3D0h]
  _BYTE TokenInformation[12]; // [rsp+BCh] [rbp-3CCh] BYREF
  PVOID v132; // [rsp+C8h] [rbp-3C0h]
  PVOID v133; // [rsp+D0h] [rbp-3B8h]
  __int128 v134; // [rsp+D8h] [rbp-3B0h] BYREF
  int v135; // [rsp+E8h] [rbp-3A0h]
  int v136; // [rsp+ECh] [rbp-39Ch]
  int v137; // [rsp+F0h] [rbp-398h]
  int v138; // [rsp+F4h] [rbp-394h]
  int v139; // [rsp+F8h] [rbp-390h]
  PACCESS_TOKEN Token; // [rsp+100h] [rbp-388h]
  unsigned __int64 v141; // [rsp+108h] [rbp-380h]
  __int64 v142; // [rsp+110h] [rbp-378h]
  struct _KTHREAD *CurrentThread; // [rsp+118h] [rbp-370h]
  int v144; // [rsp+120h] [rbp-368h] BYREF
  unsigned int v145; // [rsp+124h] [rbp-364h]
  PVOID v146; // [rsp+128h] [rbp-360h]
  PVOID v147; // [rsp+130h] [rbp-358h] BYREF
  PVOID ReturnedState; // [rsp+138h] [rbp-350h] BYREF
  __int64 v149; // [rsp+140h] [rbp-348h]
  HANDLE Handle; // [rsp+148h] [rbp-340h] BYREF
  HANDLE KeyHandle; // [rsp+150h] [rbp-338h] BYREF
  __int64 v152; // [rsp+158h] [rbp-330h]
  __int64 v153; // [rsp+160h] [rbp-328h]
  __int64 v154; // [rsp+168h] [rbp-320h]
  __int64 v155; // [rsp+170h] [rbp-318h]
  __int64 v156; // [rsp+180h] [rbp-308h]
  __int64 v157; // [rsp+190h] [rbp-2F8h]
  __int64 v158; // [rsp+198h] [rbp-2F0h]
  __int64 v159; // [rsp+1A0h] [rbp-2E8h] BYREF
  PVOID *v160; // [rsp+1A8h] [rbp-2E0h]
  char v161[8]; // [rsp+1B0h] [rbp-2D8h] BYREF
  OBJECT_ATTRIBUTES v162; // [rsp+1B8h] [rbp-2D0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+1E8h] [rbp-2A0h] BYREF
  __int128 v164; // [rsp+220h] [rbp-268h] BYREF
  __int128 v165; // [rsp+230h] [rbp-258h] BYREF
  __int128 v166; // [rsp+240h] [rbp-248h] BYREF
  __int128 v167; // [rsp+250h] [rbp-238h] BYREF
  __int128 v168; // [rsp+260h] [rbp-228h] BYREF
  __int128 v169; // [rsp+270h] [rbp-218h] BYREF
  _DWORD v170[20]; // [rsp+280h] [rbp-208h] BYREF
  __int64 v171; // [rsp+2D0h] [rbp-1B8h] BYREF
  __int64 v172; // [rsp+2D8h] [rbp-1B0h]
  __int128 v173; // [rsp+2E0h] [rbp-1A8h] BYREF
  __int128 v174; // [rsp+2F0h] [rbp-198h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+300h] [rbp-188h] BYREF
  _QWORD v176[4]; // [rsp+330h] [rbp-158h] BYREF
  _OWORD v177[11]; // [rsp+350h] [rbp-138h] BYREF
  ULONG Privilege[6]; // [rsp+400h] [rbp-88h] BYREF
  _WORD v179[20]; // [rsp+418h] [rbp-70h] BYREF

  v157 = a3;
  PreviousMode = a2;
  Process = (PEPROCESS)a1;
  v155 = a1;
  v132 = a7;
  Token = a8;
  v17 = a11;
  v156 = a11;
  v146 = a13;
  v158 = a14;
  v160 = a15;
  memset(&ApcState, 0, sizeof(ApcState));
  memset(&v162, 0, sizeof(v162));
  v171 = 0LL;
  v172 = 0LL;
  v134 = 0uLL;
  v141 = 0LL;
  memset(v177, 0, 0xA8uLL);
  v115 = 0;
  v173 = 0uLL;
  v174 = 0uLL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  memset(v170, 0, 0x48uLL);
  CurrentThread = KeGetCurrentThread();
  *(_QWORD *)&TokenInformation[4] = CurrentThread->ApcState.Process;
  v124 = 0LL;
  v136 = 0;
  v121 = 0;
  v133 = 0LL;
  v145 = 0;
  v130 = 0;
  v129 = 0;
  LOWORD(v120) = 0;
  v127 = 0;
  v123 = 0;
  v139 = 0;
  v154 = 0LL;
  v138 = 0;
  v153 = 0LL;
  v137 = 0;
  v152 = 0LL;
  if ( (a9 & 0x800) != 0 )
  {
    v18 = 1024;
    v115 = 1024;
    if ( (a9 & 0x2000) != 0 )
    {
      v18 = 66560;
      if ( (a9 & 0x4000) != 0 )
        v18 = 197632;
      v115 = v18;
    }
  }
  else
  {
    v18 = v115;
  }
  v142 = a1 & -(__int64)((a9 & 0x100) != 0);
  if ( a11 && (*(_DWORD *)(a11 + 4) & 0x2000) != 0 )
  {
    if ( (a1 & -(__int64)((a9 & 0x100) != 0)) != 0 )
      return 3221225520LL;
    v124 = KeNodeBlock[*(unsigned __int16 *)(a11 + 250)];
    v142 = 0LL;
  }
  else if ( a1 )
  {
    v142 = a1 & -(__int64)((a9 & 0x100) != 0);
    if ( (*(_DWORD *)(a1 + 776) & 0x200000) != 0 )
    {
      v142 = a1;
      v121 = 0x200000;
    }
  }
  if ( a11 && (*(_DWORD *)(a11 + 4) & 0x40000) != 0 )
  {
    v18 |= 0x1000u;
    v115 = v18;
  }
  memset(v176, 0, sizeof(v176));
  ReturnedState = 0LL;
  v19 = 2176;
  v119 = 0;
  v149 = 0LL;
  if ( !PsDisableDiskCounters )
  {
    v19 = 2216;
    v18 |= 0x200u;
    v115 = v18;
    v149 = 2176LL;
  }
  if ( PoEnergyEstimationEnabled() )
  {
    v119 = (v19 + 7) & 0xFFFFFFF8;
    v19 = v119 + 480;
    v18 |= 0x2000u;
    v115 = v18;
  }
  MaximumGroupCount = KeQueryMaximumGroupCount();
  v21 = 0;
  if ( (unsigned int)MaximumGroupCount > 1 )
  {
    v21 = (v19 + 7) & 0xFFFFFFF8;
    v19 = 16 * MaximumGroupCount + v21;
  }
  result = ObCreateObject(PreviousMode, PsProcessType, v157, PreviousMode, 0, v19, 0, v19, &Object);
  if ( (int)result >= 0 )
  {
    ObfReferenceObjectWithTag(Object, 0x72437350u);
    ObfDereferenceObjectWithTag(Object, 0x746C6644u);
    memset(Object, 0, v19);
    LpcInitializeProcess(Object);
    ExInitializePushLock((PKSPIN_LOCK)Object + 96);
    PspInitializeProcessLock((__int64)Object);
    v23 = (char *)Object + 1160;
    *((_QWORD *)Object + 146) = (char *)Object + 1160;
    *v23 = v23;
    v24 = (char *)Object + 1824;
    *((_QWORD *)Object + 229) = (char *)Object + 1824;
    *v24 = v24;
    v25 = (char *)Object + 2064;
    *((_QWORD *)Object + 259) = (char *)Object + 2064;
    *v25 = v25;
    *((_BYTE *)Object + 1786) = a4;
    *((_BYTE *)Object + 1784) = a5;
    *((_BYTE *)Object + 1785) = a6;
    *((_QWORD *)Object + 235) = 0LL;
    if ( ((v18 >> 10) & 1) != 0 )
      *((_DWORD *)Object + 447) |= 1u;
    if ( (a9 & 0x8000) != 0 )
      *((_DWORD *)Object + 447) |= 0x20u;
    if ( v21 )
    {
      *((_DWORD *)Object + 447) |= 0x80u;
      v95 = (char *)Object + v21;
      *((_QWORD *)Object + 249) = v95;
      *((_QWORD *)Object + 250) = &v95[8 * MaximumGroupCount];
    }
    if ( (a10 & 1) != 0 )
      *((_DWORD *)Object + 447) |= 0x1000u;
    if ( (a10 & 4) != 0 )
      *((_DWORD *)Object + 447) |= 0x800000u;
    v26 = Object;
    v27 = *(_QWORD *)(*(_QWORD *)&TokenInformation[4] + 744LL) | 2LL;
    if ( (a9 & 0x200) != 0 )
      v27 = *(_QWORD *)(*(_QWORD *)&TokenInformation[4] + 744LL);
    *((_QWORD *)Object + 126) = v27;
    if ( (v18 & 0x200) != 0 )
      *((_QWORD *)Object + 231) = (char *)Object + v149;
    if ( (v18 & 0x2000) != 0 )
    {
      v28 = (char *)Object + v119;
      *((_QWORD *)Object + 237) = v28;
      PoEnergyContextInitialize(v28, v26);
    }
    if ( v17 && (*(_DWORD *)(v17 + 4) & 0x200) != 0 )
    {
      v30 = *(_DWORD *)(v17 + 316);
      v29 = (__int64)Process;
    }
    else
    {
      v29 = (__int64)Process;
      if ( Process )
        v30 = *(_DWORD *)&Process[1].BasePriority;
      else
        v30 = 5;
    }
    *((_DWORD *)Object + 296) = v30;
    *((_DWORD *)Object + 405) = 259;
    if ( v29 )
    {
      v31 = (*(_DWORD *)(v29 + 780) >> 27) & 7;
      DefaultPagePriority = (*(_DWORD *)(v29 + 776) >> 12) & 7;
      *((_QWORD *)Object + 125) = *(_QWORD *)(v29 + 744);
    }
    else
    {
      v31 = 2;
      DefaultPagePriority = MmGetDefaultPagePriority();
    }
    *((_DWORD *)Object + 195) = *((_DWORD *)Object + 195) & 0xC7FFFFFF | (v31 << 27);
    *((_DWORD *)Object + 194) = *((_DWORD *)Object + 194) & 0xFFFF8FFF | (DefaultPagePriority << 12);
    v33 = v146;
    if ( v146 )
    {
      if ( !PsReferencePartitionSafe((__int64)v146) )
      {
        InformationToken = -1073740640;
        goto LABEL_317;
      }
    }
    else
    {
      v33 = PspSystemPartition;
      v146 = PspSystemPartition;
      PsReferencePartition((__int64)PspSystemPartition);
    }
    *((_QWORD *)Object + 267) = v33;
    v34 = v132;
    if ( ((v18 >> 10) & 1) == 0 )
    {
      v133 = v132;
      if ( v132 )
      {
        if ( (a9 & 0x1000) == 0 )
        {
          ObfReferenceObject(v132);
          goto LABEL_46;
        }
LABEL_274:
        InformationToken = -1073741776;
        goto LABEL_317;
      }
      if ( v29 )
      {
        if ( a12 )
          goto LABEL_274;
        if ( PsIsSystemProcess(v29) )
        {
          InformationToken = -1073741811;
          goto LABEL_317;
        }
        if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(v29 + 768)) )
        {
          v34 = *(PVOID *)(v29 + 960);
          v132 = v34;
          if ( v34 )
            ObfReferenceObject(v34);
          ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v29 + 768));
        }
        if ( !v34 )
        {
          InformationToken = -1073741558;
          goto LABEL_317;
        }
        v96 = *(_QWORD *)(v29 + 1064);
        if ( v96 )
        {
          v18 |= 0x4000u;
          v115 = v18;
          v120 = *(unsigned __int16 *)(v96 + 8);
          v127 = *(_DWORD *)(v96 + 12);
        }
        if ( (*(_DWORD *)(v29 + 780) & 0x20000) != 0 )
          a9 |= 8u;
      }
    }
LABEL_46:
    *((_QWORD *)Object + 120) = v34;
    LOWORD(v119) = 0;
    if ( !v17 )
    {
      if ( v34 )
      {
        SectionInformation = MmGetSectionInformation((__int64)v34, 4, (__int64)v170);
        InformationToken = SectionInformation;
        if ( SectionInformation < 0 )
          goto LABEL_317;
        v18 = v18 & 0xFFFBFE7F | (32 * (HIBYTE(v170[12]) & 4 | (4 * (HIBYTE(v170[12]) & 2 | ((v170[16] & 1) << 11)))));
        v115 = v18;
        LOWORD(v119) = HIWORD(v170[11]);
        v130 = HIWORD(v170[9]);
        v129 = LOWORD(v170[9]);
        if ( !v133 )
        {
          v136 = 8;
          v18 |= 0x800u;
          v115 = v18;
        }
      }
LABEL_67:
      v46 = v136 | 0x20000;
      if ( (a9 & 8) == 0 )
        v46 = v136;
      if ( (v18 & 0x4000) != 0 )
      {
        *((_QWORD *)Object + 133) = ExAllocatePoolWithTag(NonPagedPoolNx, 0x10uLL, 0x50776F57u);
        if ( !*((_QWORD *)Object + 133) )
        {
          InformationToken = -1073741801;
          goto LABEL_317;
        }
        v89 = v127;
        v90 = v120;
        if ( !v127 )
          v89 = PspWow64PickBestNtdll(v17);
        *(_WORD *)(*((_QWORD *)Object + 133) + 8LL) = v90;
        *(_DWORD *)(*((_QWORD *)Object + 133) + 12LL) = v89;
        v91 = (_QWORD *)*((_QWORD *)Object + 133);
        if ( v91 )
          *v91 = 1LL;
      }
      InformationToken = SeQueryInformationToken(Token, TokenIsAppContainer, (PVOID *)TokenInformation);
      if ( InformationToken < 0 )
        goto LABEL_317;
      v47 = 0;
      v48 = PreviousMode;
      if ( PreviousMode )
      {
        if ( v17 && (*(_DWORD *)(v17 + 4) & 0x100) != 0 && *(_BYTE *)(v17 + 248) == 4 )
        {
          Privilege[0] = 14;
          v47 = 1;
        }
        if ( a12 )
          Privilege[v47++] = 3;
        if ( (a9 & 0x30) != 0 )
          Privilege[v47++] = 4;
        if ( (a9 & 0x80u) != 0 && !(unsigned int)MmIsSessionLeaderProcess(*(_QWORD *)&TokenInformation[4]) )
          Privilege[v47++] = 10;
        if ( (a9 & 0x8400) != 0 )
          Privilege[v47++] = 7;
        if ( v47 )
        {
          v87 = RtlAcquirePrivilege(Privilege, v47, a12 != 0, &ReturnedState) < 0;
          v48 = PreviousMode;
          if ( !v87 )
          {
            v18 |= 0x10u;
            v115 = v18;
          }
        }
        else
        {
          v48 = PreviousMode;
        }
      }
      if ( (a9 & 0x8400) != 0 && !SeSinglePrivilegeCheck(SeTcbPrivilege, v48) )
        goto LABEL_314;
      if ( v142 )
      {
        KeQueryAffinityProcess(v142, v177, 0LL, (__int64)v179);
        KeFirstGroupAffinityEx(&v171, v177);
        v92 = KeNodeBlock[(unsigned __int16)v179[(unsigned __int16)v172]];
      }
      else
      {
        if ( v124 )
        {
          v49 = *(_WORD *)(v124 + 144);
        }
        else if ( v29 )
        {
          if ( (*(_DWORD *)(v29 + 776) & 0x100000) != 0 )
          {
            v121 |= 0x100000u;
            v124 = KeNodeBlock[*(unsigned __int16 *)(v29 + 572)];
            v49 = *(_WORD *)(v124 + 144);
          }
          else
          {
            v124 = PspSelectNodeForProcess();
            v49 = *(_WORD *)(v124 + 144);
            if ( KeForceGroupAwareness && KeQueryActiveGroupCount() > 1u && !v49 )
            {
              v124 = 0LL;
              v49 = 1;
            }
          }
        }
        else
        {
          v49 = 0;
        }
        LOWORD(v172) = v49;
        v171 = qword_140572748[v49];
        if ( v124 )
        {
          v18 = v115;
          goto LABEL_91;
        }
        v92 = KeSelectNodeForAffinity((__int64)&v171);
        v18 = v115;
      }
      v124 = v92;
LABEL_91:
      *((_DWORD *)Object + 195) |= v46;
      *((_DWORD *)Object + 194) |= v121;
      if ( !v29 )
      {
        PspInheritQuota(Object, 0LL);
        *((_BYTE *)Object + 648) = 1;
        InformationToken = MmInitializeHandBuiltProcess(Object);
        if ( InformationToken < 0 )
          goto LABEL_315;
        goto LABEL_104;
      }
      v147 = 0LL;
      v50 = 0;
      SessionId = 0;
      v18 &= ~1u;
      v116 = 0;
      if ( !a12 )
      {
        v51 = v18;
        if ( v133 )
          goto LABEL_94;
        SessionId = MmGetSessionIdEx(v29);
        v93 = MmGetSessionIdEx(*(__int64 *)&TokenInformation[4]);
        v50 = SessionId;
        v18 = (SessionId != v93) | v18 & 0xFFFFFFFE;
        goto LABEL_193;
      }
      if ( SeSinglePrivilegeCheck(SeAssignPrimaryTokenPrivilege, PreviousMode) )
        v18 |= 4u;
      else
        v18 &= ~4u;
      v51 = v18;
      InformationToken = SeIsTokenAssignableToProcess((__int64)Token, &v116);
      if ( InformationToken < 0 )
        goto LABEL_315;
      if ( v116 )
      {
        v85 = v18 & 4;
      }
      else
      {
        v85 = v18 & 4;
        if ( (v18 & 4) == 0 )
          goto LABEL_314;
      }
      InformationToken = SeQuerySessionIdToken(Token, &SessionId);
      if ( InformationToken < 0 )
        goto LABEL_315;
      v86 = MmGetSessionIdEx(*(__int64 *)&TokenInformation[4]);
      v50 = SessionId;
      if ( SessionId == v86 )
      {
LABEL_94:
        if ( (v51 & 1) != 0 )
        {
          InformationToken = PspAttachSession(v50, &ApcState, &v147);
          if ( InformationToken < 0 )
          {
            LOBYTE(v18) = v51 & 0xFE;
            goto LABEL_315;
          }
          *((_DWORD *)Object + 194) |= 0x80u;
        }
        if ( !a12 || v116 )
        {
          v29 = (__int64)Process;
          v52 = Process;
          if ( v116 )
            v52 = *(PEPROCESS *)&TokenInformation[4];
          PspInheritQuota(Object, v52);
        }
        else
        {
          InformationToken = PspAssignProcessQuotaBlock(0LL, (__int64)Object, (__int64)Token);
          if ( InformationToken < 0 )
          {
            if ( (v51 & 1) != 0 )
              PspDetachSession(v147);
            goto LABEL_315;
          }
          v29 = (__int64)Process;
        }
        v53 = PspMaximumWorkingSet;
        if ( (v176[0] & 0x100000000LL) != 0 )
          v53 = v176[3];
        v54 = v18 ^ (v18 ^ (32
                          * (unsigned __int8)MmCreateProcessAddressSpace(
                                               (__int64)v146,
                                               PspMinimumWorkingSet,
                                               v53,
                                               BYTE4(v176[0]) & 1,
                                               *(unsigned __int16 *)(v124 + 146) + 1,
                                               (__int64)Object))) & 0x20;
        LOBYTE(v18) = v54;
        v115 = v54;
        if ( (v54 & 1) != 0 )
          PspDetachSession(v147);
        if ( (v18 & 0x20) == 0 )
          goto LABEL_326;
LABEL_104:
        _InterlockedOr((volatile signed __int32 *)Object + 195, 0x40000u);
        v55 = (*((_DWORD *)Object + 296) >> 2) & 1;
        v18 = v115;
        v56 = v55 | 2;
        v57 = (v115 >> 12) & 1;
        if ( !v57 )
          v56 = v55;
        SessionSchedulingGroupByProcess = MmGetSessionSchedulingGroupByProcess(Object);
        InformationToken = KeInitializeProcess(
                             (_DWORD)Object,
                             8,
                             (unsigned int)&v171,
                             v124,
                             SessionSchedulingGroupByProcess,
                             v56);
        if ( InformationToken < 0 )
          goto LABEL_315;
        if ( v17 )
        {
          v123 = *(_DWORD *)(v17 + 408);
          v139 = *(_DWORD *)(v17 + 412);
          v154 = *(_QWORD *)(v17 + 416);
          v138 = *(_DWORD *)(v17 + 424);
          v153 = *(_QWORD *)(v17 + 432);
          v137 = *(_DWORD *)(v17 + 440);
          v152 = *(_QWORD *)(v17 + 208);
        }
        v127 = (v18 >> 11) & 1;
        InformationToken = PspInitializeProcessSecurity(
                             (PEPROCESS)v29,
                             v123,
                             v127,
                             v57,
                             v139,
                             v154,
                             v138,
                             v153,
                             v137,
                             v152,
                             v158);
        if ( InformationToken < 0 )
          goto LABEL_315;
        *((_BYTE *)Object + 1119) = 2;
        if ( v29 )
        {
          if ( ((*(_BYTE *)(v29 + 1119) - 1) & 0xFB) == 0 )
            *((_BYTE *)Object + 1119) = *(_BYTE *)(v29 + 1119);
          if ( v17 )
            v59 = *(_QWORD *)(v17 + 296);
          else
            LODWORD(v59) = 0;
          v60 = v17 ? *(_DWORD *)(v17 + 292) : 0;
          inited = ObInitProcess(
                     (struct _EX_RUNDOWN_REF *)(v29 & -(__int64)((a9 & 4) != 0)),
                     (ULONG_PTR)Object,
                     v60,
                     v59);
        }
        else
        {
          *((_QWORD *)Object + 131) = *(_QWORD *)(*(_QWORD *)&TokenInformation[4] + 1048LL);
          inited = MmInitializeHandBuiltProcess2((ULONG_PTR)Object);
        }
        InformationToken = inited;
        if ( inited < 0 )
          goto LABEL_315;
        v65 = PreviousMode;
        if ( (v176[0] & 7) != 0 )
        {
          LOBYTE(v63) = PreviousMode;
          PspApplyIFEOPerfOptions(Object, v176, v63);
        }
        if ( v17 )
        {
          if ( (*(_DWORD *)(v17 + 4) & 0x100) != 0 )
          {
            LOBYTE(v64) = v65;
            LOBYTE(v62) = *(_BYTE *)(v17 + 248);
            InformationToken = PspSetProcessPriorityClass(Object, v62, 0LL, v64);
            if ( InformationToken < 0 )
              goto LABEL_315;
          }
        }
        v66 = PspComputeQuantumAndPriority((__int64)Object, 0LL, &v117, 0LL, 0LL);
        *((_BYTE *)Object + 448) = v66;
        *((_BYTE *)Object + 449) = v117;
        InformationToken = 0;
        v123 = 0;
        v173 = 0uLL;
        PspReadIFEOMitigationOptions(v17, &v173);
        v164 = v173;
        v165 = PspSystemMitigationOptions;
        PspInheritMitigationOptions(&v165, &v164, &v173);
        v174 = 0uLL;
        PspReadIFEOMitigationAuditOptions(v17, &v174);
        v166 = v174;
        v167 = PspSystemMitigationAuditOptions;
        PspInheritMitigationAuditOptions(&v167, &v166, &v174);
        v67 = (WORD3(v173) & 3) << 16;
        if ( v17 && (*(_DWORD *)(v17 + 4) & 0x10000) != 0 )
        {
          v168 = *(_OWORD *)(v17 + 360);
          v169 = v173;
          PspInheritMitigationOptions(&v169, &v168, &v173);
        }
        v68 = v67;
        if ( *(_DWORD *)TokenInformation )
        {
          v68 = v67 | 4;
          v67 |= 4u;
        }
        if ( (v68 & 4) != 0 )
        {
          v68 |= 0x100u;
          v67 = v68;
        }
        if ( (v68 & 0xFF00) != 0 )
          PspHardenMitigationOptions(&v173);
        if ( (KeFeatureBits & 0x400000000000LL) == 0 )
          *((_QWORD *)&v173 + 1) = *((_QWORD *)&v173 + 1) & 0xCFFFFFFFFFFFFFFFuLL | 0x2000000000000000LL;
        if ( (v18 & 0x80u) != 0 || (v69 = 0, (v18 & 0x100) != 0) )
          v69 = 1;
        v70 = ((v119 & 0x4000) != 0 ? 8 : 0) | ((unsigned __int16)v119 >> 4) & 2 | v69 & 0xFFFFFFF5 | v67 & 0xFFFFFFF4;
        if ( (v119 & 0x4000) != 0 && (v18 & 0x40000) != 0 )
          v71 = 32;
        else
          v71 = 0;
        v72 = v71 | v70 & 0xFFFFFFDF;
        v145 = v72;
        v73 = (v18 >> 10) & 1;
        if ( v73 )
        {
          *((_QWORD *)&v173 + 1) = *((_QWORD *)&v173 + 1) & 0xCFFFFFFFFFFFFFFCuLL | 0x2000000000000002LL;
          if ( (a10 & 2) != 0 )
            v94 = v173 & 0xFFFFFCFFFFCCFFFFuLL | 0x20000220000LL;
          else
            v94 = v173 & 0xFFFFFCFFFFCCFFFFuLL | 0x20000110000LL;
          *(_QWORD *)&v173 = v94;
        }
        if ( (v18 & 0x4000) != 0 )
          *((_QWORD *)&v173 + 1) = *((_QWORD *)&v173 + 1) & 0xCFFFFFFFFFFFFFFFuLL | 0x2000000000000000LL;
        v112 = v72;
        v74 = Process;
        PspApplyMitigationOptions((_DWORD)Object, (_DWORD)Process, (unsigned int)&v173, (unsigned int)&v174, v112);
        if ( v17 )
        {
          PspApplyWin32kFilterOptions((__int64)Object, v17);
          *(_OWORD *)(v17 + 360) = v173;
          *(_OWORD *)(v17 + 472) = v174;
        }
        PsQueryProcessAttributes(Object, 0LL, v118);
        v75 = (*(_DWORD *)TokenInformation != 0) | 2u;
        if ( (a9 & 0x20000) == 0 )
          v75 = *(_DWORD *)TokenInformation != 0;
        SmProcessCreateNotification(Object, v75);
        if ( (a9 & 0x80u) != 0
          && !(unsigned int)MmIsSessionLeaderProcess(*(_QWORD *)&TokenInformation[4])
          && !SeSinglePrivilegeCheck(SeLoadDriverPrivilege, PreviousMode) )
        {
          goto LABEL_314;
        }
        if ( v73 || v133 )
        {
          InformationToken = PspInitializeFullProcessImageName(v17, (__int64)Object);
          if ( InformationToken < 0 )
            goto LABEL_315;
          if ( (v18 & 0x10000) != 0 )
          {
            v77 = MmInitializeProcessAddressSpace((ULONG_PTR)Object, (v18 >> 17) & 1);
            v76 = v132;
          }
          else
          {
            v76 = v132;
            v77 = MmInitializeProcessAddressSpace((ULONG_PTR)Object, 0);
          }
          InformationToken = v77;
          if ( v77 < 0 )
            goto LABEL_315;
          if ( v17 )
          {
            ImageSectionBasedAddress = MmGetImageSectionBasedAddress(v76);
            v79 = *((_QWORD *)Object + 121);
            if ( ImageSectionBasedAddress != v79 )
              *(_QWORD *)(v17 + 48) += v79 - ImageSectionBasedAddress;
          }
          v123 = InformationToken;
          if ( !v73 )
            v18 |= 2u;
          v18 = ((unsigned __int8)v18 ^ (unsigned __int8)(4 * a9)) & 0x40 ^ v18 | 8;
          v115 = v18;
          v80 = Process;
LABEL_159:
          if ( (v18 & 0x10) != 0 )
            RtlReleasePrivilege(ReturnedState);
          if ( (unsigned __int16)PsWow64GetProcessMachine((__int64)Object) == 332 )
            *((_DWORD *)Object + 110) |= 1u;
          if ( (v18 & 8) != 0 )
          {
            if ( v17 )
            {
              InformationToken = PspSetupReservedUserMappings(
                                   (_KPROCESS *)Object,
                                   (struct _KTHREAD *)&ApcState,
                                   (_QWORD *)v17);
              if ( InformationToken < 0 )
                goto LABEL_317;
            }
          }
          if ( (v18 & 2) != 0 )
          {
            *((_QWORD *)&v134 + 1) = -1LL;
            BYTE3(v134) ^= (BYTE3(v134) ^ (v18 >> 6)) & 1;
            IsProtectedProcess = PsIsProtectedProcess((__int64)Object);
            BYTE3(v134) ^= (BYTE3(v134) ^ (2 * IsProtectedProcess)) & 2;
            IsProtectedProcessLight = PsIsProtectedProcessLight((__int64)Object);
            BYTE3(v134) = BYTE3(v134) & 0x8B | (4 * ((16 * IsProtectedProcessLight) | ((v18 & 0x80) != 0))) & 0xCF | (16 * ((*(_DWORD *)TokenInformation != 0 ? 2 : 0) | v118[0] & 1));
            if ( v133 )
            {
              InformationToken = MmCreatePeb(Object, (__int64)&v134, (_QWORD *)Object + 127, &v171);
              if ( InformationToken < 0 )
              {
                *((_QWORD *)Object + 127) = 0LL;
                goto LABEL_317;
              }
              if ( v171 )
              {
                _InterlockedAnd((volatile signed __int32 *)Object + 194, 0xFFCFFFFF);
                PspSetProcessAffinitySafe((_DWORD)Object, 1, 0, (unsigned int)&v171, (__int64)v161);
                v18 = v115;
              }
            }
            else
            {
              v104 = (_OWORD *)v80[1].ActiveProcessors.Bitmap[0];
              *((_QWORD *)Object + 127) = v104;
              if ( (v18 & 0x800) == 0 )
              {
                LOBYTE(v134) = 1;
                KeStackAttachProcess((PRKPROCESS)Object, &ApcState);
                if ( MmSecureVirtualMemory(v104, 0x7C8uLL, 4u) )
                  *v104 = v134;
                else
                  InformationToken = -1073741503;
                if ( InformationToken >= 0 )
                {
                  v105 = *((_QWORD *)Object + 133);
                  if ( v105 )
                  {
                    v106 = *(_WORD *)(v105 + 8);
                    if ( v106 == 332 || v106 == 452 )
                    {
                      v107 = *(unsigned __int64 **)v105;
                      if ( MmSecureVirtualMemory(*(PVOID *)v105, 0x480uLL, 4u) )
                      {
                        v141 = 0xFFFFFFFF00000001uLL;
                        BYTE3(v141) = BYTE3(v134);
                        *v107 = v141;
                      }
                      else
                      {
                        InformationToken = -1073741503;
                      }
                    }
                  }
                }
                KeUnstackDetachProcess(&ApcState);
                if ( InformationToken < 0 )
                  goto LABEL_317;
              }
            }
          }
          if ( ((v18 >> 3) & 1) != 0 && v17 )
          {
            InformationToken = PspSetupUserProcessAddressSpace(
                                 (__int64)v80,
                                 (_KPROCESS *)Object,
                                 (struct _KTHREAD *)&ApcState,
                                 v17);
          }
          else if ( (v18 & 2) != 0 && (v18 & 0x800) == 0 )
          {
            InformationToken = 0;
            KeStackAttachProcess((PRKPROCESS)Object, &ApcState);
            v83 = CurrentThread;
            PspWritePebAffinityInfo((__int64)CurrentThread, (__int64)Object);
            if ( ((v18 >> 3) & 1) != 0 )
            {
              InformationToken = MmMapApiSetView((__int64)Object);
              if ( InformationToken >= 0 )
              {
                InformationToken = PspMapSiloSharedDataView((__int64)Object);
                if ( InformationToken >= 0 )
                {
                  InformationToken = PspPrepareSystemDllInitBlock(0LL, 0LL, v108);
                  if ( InformationToken >= 0 )
                  {
                    if ( *((_QWORD *)Object + 133) )
                    {
                      ProcessNtdllType = PsWow64GetProcessNtdllType((__int64)Object);
                      InformationToken = PspPrepareSystemDllInitBlock(ProcessNtdllType, 0LL, v110);
                    }
                  }
                }
              }
            }
            KeUnstackDetachProcess(&ApcState);
LABEL_175:
            MmNewProcessInitialized((ULONG_PTR)Object);
            if ( InformationToken >= 0 )
            {
              PspLockProcessExclusive((__int64)Object, (__int64)v83);
              v84 = ExCreateHandle(PspCidTable, Object);
              *((_QWORD *)Object + 93) = v84;
              if ( !*((_QWORD *)Object + 93) )
              {
                PspUnlockProcessExclusive((__int64)Object, (__int64)v83);
                InformationToken = -1073741670;
                goto LABEL_317;
              }
              if ( (v18 & 0x1000) == 0 )
              {
LABEL_178:
                if ( KeQuerySystemTimeUnsafe() )
                  KeQuerySystemTimePrecise((__int64 *)Object + 98);
                else
                  *((_QWORD *)Object + 98) = MEMORY[0xFFFFF78000000014];
                *((_QWORD *)Object + 240) = MEMORY[0xFFFFF78000000008];
                *((_QWORD *)Object + 241) = KeQueryUnbiasedInterruptTime();
                *((_QWORD *)Object + 243) = *((_QWORD *)Object + 240);
                *v160 = Object;
                return (unsigned int)v123;
              }
              InformationToken = MmGetSectionStrongImageReference(0LL, 0LL, *((_QWORD *)Object + 120), &v159);
              v111 = Object;
              if ( InformationToken >= 0 )
              {
                InformationToken = KeSecureProcess(
                                     (_KPROCESS *)Object,
                                     **(_QWORD **)(v17 + 384),
                                     *((_QWORD *)Object + 127),
                                     *((_QWORD *)Object + 93),
                                     v159,
                                     *((_QWORD *)Object + 121),
                                     *(_QWORD *)(v17 + 384),
                                     *(unsigned int *)(v17 + 400));
                if ( InformationToken >= 0 )
                  goto LABEL_178;
                v111 = Object;
              }
              PspUnlockProcessExclusive((__int64)v111, (__int64)v83);
            }
LABEL_317:
            PspRundownSingleProcess((ULONG_PTR)Object);
            ObfDereferenceObjectWithTag(Object, 0x72437350u);
            return (unsigned int)InformationToken;
          }
          v83 = CurrentThread;
          goto LABEL_175;
        }
        v80 = v74;
        if ( !v74 )
          goto LABEL_159;
        *((_QWORD *)Object + 121) = v74[1].Affinity.Bitmap[18];
        v100 = MmInitializeProcessAddressSpace((ULONG_PTR)Object, v127);
        InformationToken = v100;
        if ( v100 >= 0 )
        {
          v18 = ((unsigned __int8)v18 ^ (unsigned __int8)(4 * a9)) & 0x40 ^ v18 | 2;
          v115 = v18;
          v101 = *(unsigned __int16 *)(v74[1].ActiveProcessors.Bitmap[14] + 2);
          PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v101 + 16, 0x61506553u);
          *((_QWORD *)Object + 141) = PoolWithTag;
          v103 = (void *)*((_QWORD *)Object + 141);
          if ( v103 )
          {
            memmove(v103, (const void *)v80[1].ActiveProcessors.Bitmap[14], v101 + 16);
            *(_QWORD *)(*((_QWORD *)Object + 141) + 8LL) = *((_QWORD *)Object + 141) + 16LL;
            *((_DWORD *)Object + 244) = v80[1].Affinity.Bitmap[19];
            if ( (a9 & 0x1000) != 0 )
            {
              *((_QWORD *)Object + 120) = 0LL;
              ObfDereferenceObject(v132);
            }
            goto LABEL_159;
          }
LABEL_326:
          InformationToken = -1073741670;
        }
LABEL_315:
        if ( (v18 & 0x10) != 0 )
          RtlReleasePrivilege(ReturnedState);
        goto LABEL_317;
      }
      if ( v85 )
      {
        if ( (a9 & 0x80u) != 0 )
        {
          InformationToken = -1073741811;
          goto LABEL_315;
        }
        v18 |= 1u;
LABEL_193:
        v51 = v18;
        goto LABEL_94;
      }
LABEL_314:
      InformationToken = -1073741727;
      goto LABEL_315;
    }
    *((_QWORD *)Object + 222) = *(_QWORD *)(v17 + 456);
    InformationToken = MmGetSectionInformation((__int64)v34, 4, v17 + 48);
    if ( InformationToken < 0 )
      goto LABEL_317;
    v36 = *(_BYTE *)(v17 + 99);
    v37 = v18 & 0xFFFBFE7F | (32 * (v36 & 4 | (4 * (v36 & 2 | ((*(_DWORD *)(v17 + 112) & 1) << 11)))));
    v130 = *(unsigned __int16 *)(v17 + 86);
    v129 = *(unsigned __int16 *)(v17 + 84);
    v38 = *(_WORD *)(v17 + 96);
    if ( (v37 & 0x100) != 0 && v38 == 332 && (v36 & 1) != 0 )
      v39 = 0x8000;
    else
      v39 = 0;
    v18 = v39 | v37 & 0xFFFF7FFF;
    v115 = v18;
    EquivalentMachineCHPE = RtlWow64GetEquivalentMachineCHPE(v38);
    v41 = EquivalentMachineCHPE;
    if ( (*(_WORD *)(v17 + 92) & *(_WORD *)(v17 + 10)) != 0 )
    {
      v97 = 3;
      goto LABEL_289;
    }
    v42 = v18;
    if ( (v18 & 0x8000) == 0 && (unsigned int)PsWow64IsMachineSupported(EquivalentMachineCHPE) )
    {
      v18 |= 0x4000u;
      v115 = v18;
      LOWORD(v120) = v41;
      v42 = v18;
    }
    if ( (v42 & 0x8000) == 0
      && (v41 < MEMORY[0xFFFFF7800000002C] || v41 > MEMORY[0xFFFFF7800000002E])
      && (v42 & 0x4000) == 0 )
    {
      v97 = 4;
LABEL_289:
      InformationToken = -1073741701;
LABEL_291:
      PspUpdateCreateInfo(v97, v17, 0LL);
      goto LABEL_317;
    }
    if ( !v133 )
    {
LABEL_66:
      v29 = (__int64)Process;
      goto LABEL_67;
    }
    LOWORD(v119) = *(_WORD *)(v17 + 94);
    v43 = RtlOpenImageFileOptionsKey(v17 + 232, 0LL, v17 + 192);
    if ( v43 < 0 )
    {
      if ( v43 == -1073741772 )
        *(_BYTE *)(v17 + 8) |= 0x40u;
      *(_QWORD *)(v17 + 192) = 0LL;
    }
    ObfReferenceObjectWithTag(*(PVOID *)(v17 + 176), 0x72437350u);
    *((_QWORD *)Object + 137) = *(_QWORD *)(v17 + 176);
    if ( (v42 & 0x4000) == 0 )
    {
      InformationToken = PspDetectComplusILImage(v17, &a9);
      if ( InformationToken < 0 )
        goto LABEL_317;
      if ( v41 == 332 && (a9 & 8) == 0 )
      {
        if ( (unsigned int)PsWow64IsMachineSupported(332) )
        {
          v120 = 332;
LABEL_296:
          v18 = v42 | 0x4000;
          v115 = v42 | 0x4000;
          goto LABEL_65;
        }
        if ( (unsigned int)PsWow64IsMachineSupported(452) )
        {
          LOWORD(v120) = 452;
          goto LABEL_296;
        }
        a9 |= 8u;
      }
    }
LABEL_65:
    v44 = (HANDLE *)(v17 + 192);
    v45 = *(void **)(v17 + 192);
    if ( v45 )
    {
      if ( *(char *)(v17 + 8) >= 0 )
      {
        ImageFileKeyOption = RtlQueryImageFileKeyOption(v45, 2, (__int64)&v144);
        if ( ImageFileKeyOption == -2147483643 || ImageFileKeyOption >= 0 && v144 == 2 && v128 )
        {
          InformationToken = -1073741767;
          v97 = 5;
          goto LABEL_291;
        }
      }
      v122 = 0;
      if ( (int)RtlQueryImageFileKeyOption(*v44, 4, 0LL) >= 0 )
      {
        if ( v122 )
        {
          a9 |= 0x10u;
          if ( (v18 & 0x4000) == 0 )
          {
            v162.Length = 48;
            v162.RootDirectory = *v44;
            v162.Attributes = 576;
            v162.ObjectName = (PUNICODE_STRING)&PspLargePageDLLKeyName;
            *(_OWORD *)&v162.SecurityDescriptor = 0LL;
            if ( ZwOpenKey(&Handle, 1u, &v162) >= 0 )
            {
              v122 = 0;
              if ( (int)RtlQueryImageFileKeyOption(Handle, 4, 0LL) >= 0 && v122 )
                a9 |= 0x20u;
              ObCloseHandle(Handle, 0);
            }
          }
        }
      }
      if ( !v142 )
        PspReadIFEONodeOptions(Object, *v44, &v124);
      v135 = 0;
      if ( (int)RtlQueryImageFileKeyOption(*v44, 4, 0LL) >= 0 && v135 )
        v121 |= 0x40u;
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = *v44;
      ObjectAttributes.Attributes = 576;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)&PspPerfOptionsKeyName;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes) >= 0 )
      {
        PspReadIFEOPerfOptions(KeyHandle);
        ObCloseHandle(KeyHandle, 0);
      }
    }
    goto LABEL_66;
  }
  return result;
}
