/*
 * XREFs of PspAllocateProcess @ 0x14064CE78
 * Callers:
 *     NtCreateUserProcess @ 0x14060B950 (NtCreateUserProcess.c)
 *     PsCreateMinimalProcess @ 0x14075871C (PsCreateMinimalProcess.c)
 *     PspCreateProcess @ 0x14075F000 (PspCreateProcess.c)
 * Callees:
 *     KiStackAttachProcess @ 0x140016DB0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14004D320 (ExAcquireRundownProtection_0.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14004E220 (ObfReferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x140051600 (KeLeaveCriticalRegionThread.c)
 *     MiSectionControlArea @ 0x140075E60 (MiSectionControlArea.c)
 *     KeQuerySystemTimeUnsafe @ 0x14008A3B4 (KeQuerySystemTimeUnsafe.c)
 *     ExInitializePushLock @ 0x14008A3F0 (ExInitializePushLock.c)
 *     KeQueryMaximumGroupCount @ 0x14008A410 (KeQueryMaximumGroupCount.c)
 *     KeQuerySystemTimePrecise @ 0x14008A4E0 (KeQuerySystemTimePrecise.c)
 *     KiQueryUnbiasedInterruptTime @ 0x14008CE50 (KiQueryUnbiasedInterruptTime.c)
 *     PsReferencePartitionSafe @ 0x140090C28 (PsReferencePartitionSafe.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     ObfReferenceObjectWithTag @ 0x1400ACD30 (ObfReferenceObjectWithTag.c)
 *     PoEnergyEstimationEnabled @ 0x1400ACEC0 (PoEnergyEstimationEnabled.c)
 *     MmGetDefaultPagePriority @ 0x1400E221C (MmGetDefaultPagePriority.c)
 *     KeQueryActiveGroupCount @ 0x1400E3C90 (KeQueryActiveGroupCount.c)
 *     KeQueryAffinityProcess @ 0x1400F1260 (KeQueryAffinityProcess.c)
 *     PspWow64PickBestNtdll @ 0x1400F53F4 (PspWow64PickBestNtdll.c)
 *     RtlWow64GetEquivalentMachineCHPE @ 0x1400F55CC (RtlWow64GetEquivalentMachineCHPE.c)
 *     KeSelectNodeForAffinity @ 0x1401157D8 (KeSelectNodeForAffinity.c)
 *     MmDetachSession @ 0x14011A630 (MmDetachSession.c)
 *     KeFirstGroupAffinityEx @ 0x14012E300 (KeFirstGroupAffinityEx.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwOpenKey @ 0x1401B8530 (ZwOpenKey.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     KeSecureProcess @ 0x14028E968 (KeSecureProcess.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     MmNewProcessInitialized @ 0x140583398 (MmNewProcessInitialized.c)
 *     ExCreateHandleEx @ 0x1405D2380 (ExCreateHandleEx.c)
 *     ObCreateObjectEx @ 0x1405E15E0 (ObCreateObjectEx.c)
 *     ObCloseHandle @ 0x1405F6700 (ObCloseHandle.c)
 *     MmSecureVirtualMemoryEx @ 0x1405F6CB0 (MmSecureVirtualMemoryEx.c)
 *     PspRundownSingleProcess @ 0x140604A48 (PspRundownSingleProcess.c)
 *     ObInitProcess @ 0x14060A2E4 (ObInitProcess.c)
 *     PspUpdateCreateInfo @ 0x14060E104 (PspUpdateCreateInfo.c)
 *     SeSinglePrivilegeCheck @ 0x140613160 (SeSinglePrivilegeCheck.c)
 *     PsQueryProcessAttributes @ 0x14062691C (PsQueryProcessAttributes.c)
 *     SeQueryInformationToken @ 0x14063D370 (SeQueryInformationToken.c)
 *     PspComputeQuantumAndPriority @ 0x14064C430 (PspComputeQuantumAndPriority.c)
 *     KeInitializeProcess @ 0x14064CD20 (KeInitializeProcess.c)
 *     PspInheritMitigationOptions @ 0x14064EE78 (PspInheritMitigationOptions.c)
 *     PspApplyMitigationOptions @ 0x14064EF50 (PspApplyMitigationOptions.c)
 *     PspInheritMitigationAuditOptions @ 0x14064F790 (PspInheritMitigationAuditOptions.c)
 *     PspReadIFEOMitigationOptions @ 0x14064F860 (PspReadIFEOMitigationOptions.c)
 *     PspReadIFEOMitigationAuditOptions @ 0x14064F8D4 (PspReadIFEOMitigationAuditOptions.c)
 *     PspInitializeProcessSecurity @ 0x14064F9D4 (PspInitializeProcessSecurity.c)
 *     MmGetSessionSchedulingGroupByProcess @ 0x14064FBE0 (MmGetSessionSchedulingGroupByProcess.c)
 *     PspAssignProcessQuotaBlock @ 0x14065B2F4 (PspAssignProcessQuotaBlock.c)
 *     PspInitializeFullProcessImageName @ 0x14065FCD4 (PspInitializeFullProcessImageName.c)
 *     SmpKeyedStoreCreate @ 0x14066C7B8 (SmpKeyedStoreCreate.c)
 *     PspWritePebAffinityInfo @ 0x14066DFD0 (PspWritePebAffinityInfo.c)
 *     MmGetSectionInformation @ 0x14066EA10 (MmGetSectionInformation.c)
 *     PspSetupUserProcessAddressSpace @ 0x14067912C (PspSetupUserProcessAddressSpace.c)
 *     PspPrepareSystemDllInitBlock @ 0x140679364 (PspPrepareSystemDllInitBlock.c)
 *     PsWow64GetProcessNtdllType @ 0x1406795B4 (PsWow64GetProcessNtdllType.c)
 *     PspMapSiloSharedDataView @ 0x1406795CC (PspMapSiloSharedDataView.c)
 *     MmMapApiSetView @ 0x140679604 (MmMapApiSetView.c)
 *     MmCreatePeb @ 0x1406796F0 (MmCreatePeb.c)
 *     MmInitializeProcessAddressSpace @ 0x14067AA78 (MmInitializeProcessAddressSpace.c)
 *     PsWow64IsMachineSupported @ 0x140683230 (PsWow64IsMachineSupported.c)
 *     SeQuerySessionIdToken @ 0x14069F720 (SeQuerySessionIdToken.c)
 *     PspAttachSession @ 0x14069FA88 (PspAttachSession.c)
 *     RtlpOpenImageFileOptionsKeyEx @ 0x1406B2BC4 (RtlpOpenImageFileOptionsKeyEx.c)
 *     SeIsTokenAssignableToProcess @ 0x1406BA398 (SeIsTokenAssignableToProcess.c)
 *     RtlAcquirePrivilege @ 0x1406BBE6C (RtlAcquirePrivilege.c)
 *     PspDetectComplusILImage @ 0x1406BC1FC (PspDetectComplusILImage.c)
 *     PspReadIFEONodeOptions @ 0x1406BC2D0 (PspReadIFEONodeOptions.c)
 *     PspReadIFEOPerfOptions @ 0x1406BC450 (PspReadIFEOPerfOptions.c)
 *     RtlQueryImageFileKeyOption @ 0x1406BC640 (RtlQueryImageFileKeyOption.c)
 *     PspSelectNodeForProcess @ 0x1406BED88 (PspSelectNodeForProcess.c)
 *     PoEnergyContextInitialize @ 0x1406C1608 (PoEnergyContextInitialize.c)
 *     PspSetupReservedUserMappings @ 0x1406C32A0 (PspSetupReservedUserMappings.c)
 *     PspHardenMitigationOptions @ 0x1406C4928 (PspHardenMitigationOptions.c)
 *     PspInheritQuota @ 0x1406C52AC (PspInheritQuota.c)
 *     PspApplyWin32kFilterOptions @ 0x1406C6FDC (PspApplyWin32kFilterOptions.c)
 *     RtlReleasePrivilege @ 0x1406C7804 (RtlReleasePrivilege.c)
 *     PspSetProcessPriorityClass @ 0x1406C9468 (PspSetProcessPriorityClass.c)
 *     PspApplyIFEOPerfOptions @ 0x1406CD1D8 (PspApplyIFEOPerfOptions.c)
 *     MmCreateProcessAddressSpace @ 0x1406D2B38 (MmCreateProcessAddressSpace.c)
 *     MmIsSessionLeaderProcess @ 0x1407175E0 (MmIsSessionLeaderProcess.c)
 *     MmInitializeHandBuiltProcess @ 0x14075FA5C (MmInitializeHandBuiltProcess.c)
 *     MmInitializeHandBuiltProcess2 @ 0x140761810 (MmInitializeHandBuiltProcess2.c)
 *     MmGetSectionStrongImageReference @ 0x14085D5A8 (MmGetSectionStrongImageReference.c)
 *     PspSetProcessAffinitySafe @ 0x14088A2B4 (PspSetProcessAffinitySafe.c)
 */

__int64 __fastcall PspAllocateProcess(
        __int64 a1,
        char a2,
        volatile signed __int32 *a3,
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
        _QWORD *a15)
{
  int v16; // r15d
  __int64 v17; // r13
  unsigned int v18; // ebx
  __int64 result; // rax
  unsigned int v20; // esi
  int MaximumGroupCount; // eax
  unsigned int v22; // r12d
  char *v23; // r15
  int v24; // r9d
  int v25; // esi
  char *v26; // rcx
  int v27; // r8d
  __int64 Flink; // rcx
  unsigned int v29; // eax
  PEPROCESS v30; // r10
  int v31; // edx
  int DefaultPagePriority; // r8d
  int SectionInformation; // esi
  PVOID v34; // rdx
  PVOID v35; // rdi
  struct _EX_RUNDOWN_REF *p_Blink; // rdi
  void *v37; // rax
  unsigned __int64 v38; // rax
  unsigned int v39; // ebx
  __int16 v40; // cx
  int v41; // eax
  unsigned __int16 EquivalentMachineCHPE; // ax
  __int64 v43; // rdx
  __int64 v44; // r8
  unsigned __int16 v45; // r12
  int v46; // ecx
  unsigned int v47; // edi
  int v48; // eax
  int v49; // esi
  HANDLE *v50; // rdi
  void *v51; // rcx
  int ImageFileKeyOption; // eax
  int v53; // ecx
  _WORD *PoolWithTag; // r10
  int v55; // eax
  __int16 v56; // r11
  _QWORD *v57; // rax
  ULONG v58; // edi
  KPROCESSOR_MODE v59; // al
  __int16 v60; // si
  bool v61; // sf
  unsigned __int16 v62; // bx
  __int64 v63; // rax
  volatile signed __int32 *v64; // rdi
  void *v65; // r12
  ULONG v66; // esi
  int v67; // eax
  int v68; // edx
  PEPROCESS v69; // rdx
  int v70; // r8d
  int v71; // eax
  __int64 SessionSchedulingGroupByProcess; // rax
  __int64 v73; // rcx
  char v74; // r8
  PEPROCESS v75; // rdi
  char v76; // al
  __int64 v77; // r9
  int v78; // r8d
  int inited; // eax
  __int64 v80; // rdx
  __int64 v81; // r8
  __int64 v82; // r9
  int v83; // edi
  int v84; // r10d
  int v85; // r9d
  int v86; // ecx
  int v87; // eax
  int v88; // edi
  unsigned __int64 v89; // rcx
  int v90; // r12d
  int v91; // edx
  __int16 v92; // di
  __int64 v93; // r12
  PVOID v94; // rax
  size_t v95; // r8
  PEPROCESS v96; // r12
  __int64 v97; // rax
  unsigned __int8 v98; // r12
  int v99; // eax
  __int64 v100; // rdx
  __int64 v101; // rax
  PEPROCESS v102; // rcx
  __int64 v103; // rax
  __int16 v104; // cx
  unsigned int ProcessNtdllType; // eax
  struct _KTHREAD *v106; // rsi
  volatile signed __int64 *v107; // r12
  __int64 v108; // rax
  __int64 UnbiasedInterruptTime; // rax
  _QWORD *v110; // rcx
  __int64 v111; // [rsp+20h] [rbp-478h]
  unsigned int v113; // [rsp+74h] [rbp-424h]
  char v114[4]; // [rsp+78h] [rbp-420h] BYREF
  int v115; // [rsp+7Ch] [rbp-41Ch]
  PEPROCESS Process; // [rsp+80h] [rbp-418h]
  char v117; // [rsp+88h] [rbp-410h] BYREF
  char v118[7]; // [rsp+89h] [rbp-40Fh] BYREF
  PVOID Object; // [rsp+90h] [rbp-408h] BYREF
  unsigned int v120; // [rsp+98h] [rbp-400h]
  int v121; // [rsp+9Ch] [rbp-3FCh]
  __int64 v122; // [rsp+A0h] [rbp-3F8h] BYREF
  int v123; // [rsp+A8h] [rbp-3F0h]
  int v124; // [rsp+ACh] [rbp-3ECh]
  int v125; // [rsp+B0h] [rbp-3E8h]
  int v126; // [rsp+B4h] [rbp-3E4h]
  PVOID TokenInformation; // [rsp+B8h] [rbp-3E0h] BYREF
  ULONG SessionId; // [rsp+C0h] [rbp-3D8h] BYREF
  __int64 v129; // [rsp+C8h] [rbp-3D0h]
  _KPROCESS *v130; // [rsp+D0h] [rbp-3C8h]
  PVOID v131; // [rsp+D8h] [rbp-3C0h]
  PVOID v132; // [rsp+E0h] [rbp-3B8h]
  int v133; // [rsp+E8h] [rbp-3B0h]
  int v134; // [rsp+ECh] [rbp-3ACh]
  int v135; // [rsp+F0h] [rbp-3A8h]
  int v136; // [rsp+F4h] [rbp-3A4h]
  int v137; // [rsp+F8h] [rbp-3A0h]
  int v138; // [rsp+FCh] [rbp-39Ch]
  PACCESS_TOKEN Token; // [rsp+100h] [rbp-398h]
  __int64 v140; // [rsp+108h] [rbp-390h]
  __int64 v141; // [rsp+110h] [rbp-388h]
  __int64 v142; // [rsp+118h] [rbp-380h] BYREF
  __int64 v143; // [rsp+120h] [rbp-378h]
  PVOID v144; // [rsp+128h] [rbp-370h]
  unsigned __int64 v145; // [rsp+130h] [rbp-368h]
  volatile signed __int32 *v146; // [rsp+138h] [rbp-360h]
  struct _KTHREAD *CurrentThread; // [rsp+140h] [rbp-358h]
  __int64 v148; // [rsp+148h] [rbp-350h] BYREF
  _BYTE *v149; // [rsp+150h] [rbp-348h]
  PVOID ReturnedState; // [rsp+158h] [rbp-340h] BYREF
  __int128 v151; // [rsp+160h] [rbp-338h] BYREF
  __int128 v152; // [rsp+170h] [rbp-328h] BYREF
  HANDLE KeyHandle; // [rsp+180h] [rbp-318h] BYREF
  HANDLE Handle; // [rsp+188h] [rbp-310h] BYREF
  void *v155; // [rsp+190h] [rbp-308h] BYREF
  __int64 v156; // [rsp+198h] [rbp-300h]
  __int64 v157; // [rsp+1A0h] [rbp-2F8h]
  __int64 v158; // [rsp+1A8h] [rbp-2F0h]
  __int64 v159; // [rsp+1B0h] [rbp-2E8h]
  _QWORD *v160; // [rsp+1C0h] [rbp-2D8h]
  __int64 v161; // [rsp+1C8h] [rbp-2D0h] BYREF
  _QWORD *v162; // [rsp+1D0h] [rbp-2C8h]
  char v163[8]; // [rsp+1D8h] [rbp-2C0h] BYREF
  char *v164; // [rsp+1E0h] [rbp-2B8h]
  __int64 v165; // [rsp+1E8h] [rbp-2B0h]
  __int128 v166; // [rsp+1F0h] [rbp-2A8h] BYREF
  __int128 v167; // [rsp+200h] [rbp-298h] BYREF
  __int128 v168; // [rsp+210h] [rbp-288h] BYREF
  __int128 v169; // [rsp+220h] [rbp-278h] BYREF
  __int128 v170; // [rsp+230h] [rbp-268h] BYREF
  __int128 v171; // [rsp+240h] [rbp-258h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+250h] [rbp-248h] BYREF
  OBJECT_ATTRIBUTES v173; // [rsp+280h] [rbp-218h] BYREF
  char v174[46]; // [rsp+2B0h] [rbp-1E8h] BYREF
  __int16 v175; // [rsp+2DEh] [rbp-1BAh]
  char v176; // [rsp+2E3h] [rbp-1B5h]
  int v177; // [rsp+2F0h] [rbp-1A8h]
  __int128 v178; // [rsp+300h] [rbp-198h] BYREF
  _QWORD v179[4]; // [rsp+310h] [rbp-188h] BYREF
  _BYTE v180[48]; // [rsp+330h] [rbp-168h] BYREF
  _OWORD v181[11]; // [rsp+360h] [rbp-138h] BYREF
  ULONG Privilege[6]; // [rsp+410h] [rbp-88h] BYREF
  _WORD v183[20]; // [rsp+428h] [rbp-70h] BYREF

  v16 = (int)a3;
  v146 = a3;
  Process = (PEPROCESS)a1;
  v158 = a1;
  v131 = a7;
  Token = a8;
  v17 = a11;
  v159 = a11;
  v144 = a13;
  v165 = a14;
  v162 = a15;
  v113 = 0;
  CurrentThread = KeGetCurrentThread();
  v130 = CurrentThread->ApcState.Process;
  v122 = 0LL;
  v134 = 0;
  v126 = 0;
  v132 = 0LL;
  LOWORD(v121) = 0;
  v135 = 0;
  v124 = 0;
  v138 = 0;
  v140 = 0LL;
  v137 = 0;
  v157 = 0LL;
  v136 = 0;
  v156 = 0LL;
  v115 = a9;
  if ( (a9 & 0x800) != 0 )
  {
    v18 = 1024;
    v113 = 1024;
    if ( (a9 & 0x2000) != 0 )
    {
      v18 = 66560;
      if ( (a9 & 0x4000) != 0 )
        v18 = 197632;
      v113 = v18;
    }
  }
  else
  {
    v18 = 0;
  }
  v141 = a1 & -(__int64)((a9 & 0x100) != 0);
  if ( a11 && (*(_DWORD *)(a11 + 4) & 0x2000) != 0 )
  {
    if ( (a1 & -(__int64)((a9 & 0x100) != 0)) != 0 )
      return 3221225520LL;
    v122 = KeNodeBlock[*(unsigned __int16 *)(a11 + 250)];
    v141 = 0LL;
  }
  else if ( a1 )
  {
    v141 = a1 & -(__int64)((a9 & 0x100) != 0);
    if ( (*(_DWORD *)(a1 + 768) & 0x200000) != 0 )
    {
      v141 = a1;
      v126 = 0x200000;
    }
  }
  if ( a11 && (*(_DWORD *)(a11 + 4) & 0x40000) != 0 )
  {
    v18 |= 0x1000u;
    v113 = v18;
  }
  memset(v179, 0, sizeof(v179));
  ReturnedState = 0LL;
  v20 = 2136;
  v120 = 0;
  v129 = 0LL;
  if ( !PsDisableDiskCounters )
  {
    v20 = 2176;
    v18 |= 0x200u;
    v113 = v18;
    v129 = 2136LL;
  }
  if ( PoEnergyEstimationEnabled() )
  {
    v120 = (v20 + 7) & 0xFFFFFFF8;
    v20 = v120 + 480;
    v18 |= 0x2000u;
    v113 = v18;
    v16 = (int)v146;
  }
  MaximumGroupCount = KeQueryMaximumGroupCount();
  v125 = MaximumGroupCount;
  v22 = 0;
  if ( (unsigned __int16)MaximumGroupCount > 1u )
  {
    v22 = (v20 + 7) & 0xFFFFFFF8;
    v20 = 16 * (unsigned __int16)MaximumGroupCount + v22;
  }
  result = ObCreateObjectEx(a2, PsProcessType, v16, a2, v111, v20, 0, v20, &Object, 0LL);
  if ( (int)result >= 0 )
  {
    v23 = (char *)Object;
    ObfReferenceObjectWithTag(Object, 0x72437350u);
    ObfDereferenceObjectWithTag(v23, 0x746C6644u);
    memset(v23, 0, v20);
    memset(v23 + 1616, 0, 0x20uLL);
    *((_QWORD *)v23 + 202) = 0LL;
    *((_QWORD *)v23 + 204) = v23 + 1624;
    *((_QWORD *)v23 + 203) = v23 + 1624;
    ExInitializePushLock((PKSPIN_LOCK)v23 + 95);
    *((_QWORD *)v23 + 91) = 0LL;
    *((_QWORD *)v23 + 146) = v23 + 1160;
    *((_QWORD *)v23 + 145) = v23 + 1160;
    *((_QWORD *)v23 + 223) = v23 + 1776;
    *((_QWORD *)v23 + 222) = v23 + 1776;
    *((_QWORD *)v23 + 253) = v23 + 2016;
    *((_QWORD *)v23 + 252) = v23 + 2016;
    v149 = v23 + 1738;
    v23[1738] = a4;
    v23[1736] = a5;
    v23[1737] = a6;
    *((_QWORD *)v23 + 229) = 0LL;
    v24 = (v18 >> 10) & 1;
    if ( v24 )
      *((_DWORD *)v23 + 435) |= 1u;
    v25 = v115;
    if ( (v115 & 0x8000) != 0 )
      *((_DWORD *)v23 + 435) |= 0x20u;
    if ( v22 )
    {
      *((_DWORD *)v23 + 435) |= 0x80u;
      v26 = &v23[v22];
      *((_QWORD *)v23 + 243) = v26;
      *((_QWORD *)v23 + 244) = &v26[8 * v125];
    }
    if ( (a10 & 1) != 0 )
      *((_DWORD *)v23 + 435) |= 0x1000u;
    if ( (a10 & 4) != 0 )
      *((_DWORD *)v23 + 435) |= 0x800000u;
    v27 = 512;
    Flink = (__int64)v130[1].Header.WaitListHead.Flink | 2;
    if ( (v25 & 0x200) != 0 )
      Flink = (__int64)v130[1].Header.WaitListHead.Flink;
    *((_QWORD *)v23 + 126) = Flink;
    if ( (v18 & 0x200) != 0 )
      *((_QWORD *)v23 + 225) = &v23[v129];
    if ( (v18 & 0x2000) != 0 )
    {
      *((_QWORD *)v23 + 231) = &v23[v120];
      PoEnergyContextInitialize();
    }
    if ( v17 && (v27 & *(_DWORD *)(v17 + 4)) != 0 )
    {
      v29 = *(_DWORD *)(v17 + 316);
      v30 = Process;
    }
    else
    {
      v30 = Process;
      if ( Process )
        v29 = Process[1].ThreadSeed[2];
      else
        v29 = 5;
    }
    v164 = v23 + 1184;
    *((_DWORD *)v23 + 296) = v29;
    *((_DWORD *)v23 + 393) = 259;
    if ( v30 )
    {
      v31 = (HIDWORD(v30[1].DirectoryTableBase) >> 27) & 7;
      DefaultPagePriority = (LODWORD(v30[1].DirectoryTableBase) >> 12) & 7;
      *((_QWORD *)v23 + 124) = v30[1].Header.WaitListHead.Flink;
    }
    else
    {
      DefaultPagePriority = MmGetDefaultPagePriority();
    }
    v146 = (volatile signed __int32 *)(v23 + 772);
    *((_DWORD *)v23 + 193) = *((_DWORD *)v23 + 193) & 0xC7FFFFFF | (v31 << 27);
    v129 = (__int64)(v23 + 768);
    *((_DWORD *)v23 + 192) = (DefaultPagePriority << 12) | *((_DWORD *)v23 + 192) & 0xFFFF8FFF;
    if ( v144 )
    {
      if ( !PsReferencePartitionSafe((__int64)v144) )
      {
        SectionInformation = -1073740640;
        goto LABEL_173;
      }
      v34 = v144;
    }
    else
    {
      v34 = PspSystemPartition;
      v144 = PspSystemPartition;
      if ( _InterlockedIncrement64((volatile signed __int64 *)PspSystemPartition + 3) <= 1 )
        __fastfail(0xEu);
      v25 = a9;
      v23 = (char *)Object;
      v18 = v113;
      v115 = a9;
    }
    *((_QWORD *)v23 + 261) = v34;
    v35 = v131;
    if ( !v24 )
    {
      v132 = v131;
      if ( v131 )
      {
        if ( (v25 & 0x1000) != 0 )
        {
LABEL_60:
          SectionInformation = -1073741776;
          goto LABEL_173;
        }
        ObfReferenceObject(v131);
      }
      else if ( v30 )
      {
        if ( a12 )
          goto LABEL_60;
        if ( (v30[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
        {
          SectionInformation = -1073741811;
          goto LABEL_173;
        }
        p_Blink = (struct _EX_RUNDOWN_REF *)&v30[1].ProfileListHead.Blink;
        if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&v30[1].ProfileListHead.Blink) )
        {
          v37 = (void *)Process[1].Affinity.Bitmap[17];
          v131 = v37;
          if ( v37 )
            ObfReferenceObject(v37);
          ExReleaseRundownProtection_0(p_Blink);
        }
        v35 = v131;
        if ( !v131 )
        {
          SectionInformation = -1073741558;
          goto LABEL_173;
        }
        v38 = Process[1].ActiveProcessors.Bitmap[7];
        if ( v38 )
        {
          v18 |= 0x4000u;
          v113 = v18;
          v121 = *(unsigned __int16 *)(v38 + 8);
          v135 = *(_DWORD *)(v38 + 12);
        }
        if ( (Process[1].DirectoryTableBase & 0x2000000000000LL) != 0 )
        {
          v115 = v25 | 8;
          a9 = v25 | 8;
        }
      }
    }
    v160 = v23 + 952;
    *((_QWORD *)v23 + 119) = v35;
    LOWORD(v120) = 0;
    if ( v17 )
    {
      *((_QWORD *)v23 + 216) = *(_QWORD *)(v17 + 456);
      SectionInformation = MmGetSectionInformation(v35, 4LL, v17 + 48);
      if ( SectionInformation < 0 )
        goto LABEL_173;
      v39 = v18 & 0xFFFBFE7F | (32
                              * (*(_BYTE *)(v17 + 99) & 4 | (4
                                                           * (*(_BYTE *)(v17 + 99) & 2 | ((*(_DWORD *)(v17 + 112) & 1) << 11)))));
      v40 = *(_WORD *)(v17 + 96);
      if ( (v39 & 0x100) != 0 && v40 == 332 && (*(_BYTE *)(v17 + 99) & 1) != 0 )
        v41 = 0x8000;
      else
        v41 = 0;
      v18 = v41 | v39 & 0xFFFF7FFF;
      v113 = v18;
      EquivalentMachineCHPE = RtlWow64GetEquivalentMachineCHPE(v40);
      v45 = EquivalentMachineCHPE;
      if ( (*(_WORD *)(v17 + 92) & *(_WORD *)(v17 + 10)) != 0 )
      {
        v46 = 3;
LABEL_85:
        SectionInformation = -1073741701;
LABEL_86:
        PspUpdateCreateInfo(v46, v17, 0LL);
        goto LABEL_173;
      }
      v47 = v18;
      if ( (v18 & 0x8000) == 0 && (unsigned int)PsWow64IsMachineSupported(EquivalentMachineCHPE) )
      {
        v18 |= 0x4000u;
        v113 = v18;
        LOWORD(v121) = v45;
        v47 = v18;
      }
      if ( (v47 & 0x8000) == 0
        && (v45 < MEMORY[0xFFFFF7800000002C] || v45 > MEMORY[0xFFFFF7800000002E])
        && (v47 & 0x4000) == 0 )
      {
        v46 = 4;
        goto LABEL_85;
      }
      if ( v132 )
      {
        LOWORD(v120) = *(_WORD *)(v17 + 94);
        v48 = RtlpOpenImageFileOptionsKeyEx(v17 + 232, v43, v44, v17 + 192);
        if ( v48 < 0 )
        {
          if ( v48 == -1073741772 )
            *(_BYTE *)(v17 + 8) |= 0x40u;
          *(_QWORD *)(v17 + 192) = 0LL;
        }
        ObfReferenceObjectWithTag(*(PVOID *)(v17 + 176), 0x72437350u);
        *((_QWORD *)v23 + 137) = *(_QWORD *)(v17 + 176);
        if ( (v47 & 0x4000) != 0 )
        {
          v49 = v115;
        }
        else
        {
          SectionInformation = PspDetectComplusILImage(v17, &a9);
          if ( SectionInformation < 0 )
            goto LABEL_173;
          v49 = a9;
          v115 = a9;
          if ( v45 == 332 && (a9 & 8) == 0 )
          {
            if ( (unsigned int)PsWow64IsMachineSupported(332LL) )
            {
              v121 = 332;
LABEL_108:
              v18 = v47 | 0x4000;
              v113 = v47 | 0x4000;
              goto LABEL_111;
            }
            if ( (unsigned int)PsWow64IsMachineSupported(452LL) )
            {
              LOWORD(v121) = 452;
              goto LABEL_108;
            }
            v49 |= 8u;
            v115 = v49;
            a9 = v49;
          }
        }
LABEL_111:
        v50 = (HANDLE *)(v17 + 192);
        v51 = *(void **)(v17 + 192);
        if ( v51 )
        {
          if ( *(char *)(v17 + 8) >= 0 )
          {
            ImageFileKeyOption = RtlQueryImageFileKeyOption(v51, 2, (__int64)&v148);
            if ( ImageFileKeyOption == -2147483643
              || ImageFileKeyOption >= 0 && (_DWORD)v148 == 2 && WORD2(TokenInformation) )
            {
              SectionInformation = -1073741767;
              v46 = 5;
              goto LABEL_86;
            }
          }
          v123 = 0;
          if ( (int)RtlQueryImageFileKeyOption(*v50, 4, 0LL) >= 0 )
          {
            if ( v123 )
            {
              v49 |= 0x10u;
              v115 = v49;
              a9 = v49;
              if ( (v18 & 0x4000) == 0 )
              {
                ObjectAttributes.Length = 48;
                ObjectAttributes.RootDirectory = *v50;
                ObjectAttributes.Attributes = 576;
                ObjectAttributes.ObjectName = (PUNICODE_STRING)&PspLargePageDLLKeyName;
                *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
                if ( ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes) >= 0 )
                {
                  v123 = 0;
                  if ( (int)RtlQueryImageFileKeyOption(KeyHandle, 4, 0LL) >= 0 && v123 )
                  {
                    v49 |= 0x20u;
                    v115 = v49;
                    a9 = v49;
                  }
                  ObCloseHandle(KeyHandle, 0);
                }
              }
            }
          }
          if ( !v141 )
            PspReadIFEONodeOptions(v23, *v50, &v122);
          v133 = 0;
          if ( (int)RtlQueryImageFileKeyOption(*v50, 4, 0LL) >= 0 && v133 )
            v126 |= 0x40u;
          v173.Length = 48;
          v173.RootDirectory = *v50;
          v173.Attributes = 576;
          v173.ObjectName = (PUNICODE_STRING)&PspPerfOptionsKeyName;
          *(_OWORD *)&v173.SecurityDescriptor = 0LL;
          if ( ZwOpenKey(&Handle, 1u, &v173) >= 0 )
          {
            PspReadIFEOPerfOptions(Handle);
            ObCloseHandle(Handle, 0);
          }
        }
LABEL_139:
        v53 = v134 | 0x20000;
        if ( (v49 & 8) == 0 )
          v53 = v134;
        v125 = v53;
        if ( (v18 & 0x4000) != 0 )
        {
          PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x10uLL, 0x50776F57u);
          *((_QWORD *)v23 + 133) = PoolWithTag;
          if ( !PoolWithTag )
          {
            SectionInformation = -1073741801;
            goto LABEL_173;
          }
          v55 = v135;
          v56 = v121;
          if ( !v135 )
            v55 = PspWow64PickBestNtdll(v17);
          PoolWithTag[4] = v56;
          *(_DWORD *)(*((_QWORD *)v23 + 133) + 12LL) = v55;
          v57 = (_QWORD *)*((_QWORD *)v23 + 133);
          if ( v57 )
            *v57 = 1LL;
        }
        SectionInformation = SeQueryInformationToken(Token, TokenIsAppContainer, &TokenInformation);
        if ( SectionInformation < 0 )
          goto LABEL_173;
        v58 = 0;
        v59 = a2;
        if ( a2 )
        {
          if ( v17 && (*(_DWORD *)(v17 + 4) & 0x100) != 0 && *(_BYTE *)(v17 + 248) == 4 )
          {
            Privilege[0] = 14;
            v58 = 1;
          }
          if ( a12 )
            Privilege[v58++] = 3;
          v60 = v115;
          if ( (v115 & 0x30) != 0 )
            Privilege[v58++] = 4;
          if ( (v60 & 0x80u) != 0 && !(unsigned int)MmIsSessionLeaderProcess(v130) )
            Privilege[v58++] = 10;
          if ( (v60 & 0x8400) != 0 )
            Privilege[v58++] = 7;
          if ( v58 )
          {
            v61 = RtlAcquirePrivilege(Privilege, v58, a12 != 0, &ReturnedState) < 0;
            v59 = a2;
            if ( !v61 )
            {
              v18 |= 0x10u;
              v113 = v18;
            }
          }
          else
          {
            v59 = a2;
          }
        }
        else
        {
          v60 = v115;
        }
        if ( (v60 & 0x8400) != 0 && !SeSinglePrivilegeCheck(SeTcbPrivilege, v59) )
          goto LABEL_170;
        if ( v141 )
        {
          KeQueryAffinityProcess(v141, v181, 0LL, (__int64)v183);
          KeFirstGroupAffinityEx(&v142, v181);
          v63 = KeNodeBlock[(unsigned __int16)v183[(unsigned __int16)v143]];
        }
        else
        {
          if ( v122 )
          {
            v62 = *(_WORD *)(v122 + 144);
          }
          else if ( Process )
          {
            if ( (Process[1].DirectoryTableBase & 0x100000) != 0 )
            {
              _InterlockedOr((volatile signed __int32 *)v129, 0x100000u);
              v122 = KeNodeBlock[Process->IdealGlobalNode];
              v62 = *(_WORD *)(v122 + 144);
            }
            else
            {
              v122 = PspSelectNodeForProcess();
              v62 = *(_WORD *)(v122 + 144);
              if ( KeForceGroupAwareness && KeQueryActiveGroupCount() > 1u && !v62 )
              {
                v122 = 0LL;
                v62 = 1;
              }
            }
          }
          else
          {
            v62 = 0;
          }
          v143 = v62;
          v142 = qword_1405426A8[v62];
          if ( v122 )
          {
            v115 = a9;
            v18 = v113;
            v23 = (char *)Object;
            goto LABEL_192;
          }
          v63 = KeSelectNodeForAffinity((__int64)&v142);
          v115 = a9;
          v18 = v113;
          v23 = (char *)Object;
        }
        v122 = v63;
LABEL_192:
        v64 = v146;
        *v146 |= v125;
        *(_DWORD *)v129 |= v126;
        if ( Process )
        {
          v65 = 0LL;
          v155 = 0LL;
          v66 = 0;
          SessionId = 0;
          v18 &= ~1u;
          v114[0] = 0;
          if ( a12 )
          {
            if ( SeSinglePrivilegeCheck(SeAssignPrimaryTokenPrivilege, a2) )
              v18 |= 4u;
            else
              v18 &= ~4u;
            SectionInformation = SeIsTokenAssignableToProcess(Token, v114);
            if ( SectionInformation < 0 )
              goto LABEL_171;
            if ( !v114[0] && (v18 & 4) == 0 )
              goto LABEL_170;
            SectionInformation = SeQuerySessionIdToken(Token, &SessionId);
            if ( SectionInformation < 0 )
              goto LABEL_171;
            v67 = MmGetSessionIdEx((__int64)v130);
            v66 = SessionId;
            if ( SessionId != v67 )
            {
              if ( (v18 & 4) == 0 )
              {
LABEL_170:
                SectionInformation = -1073741727;
                goto LABEL_171;
              }
              if ( (v115 & 0x80u) != 0 )
              {
                SectionInformation = -1073741811;
                goto LABEL_171;
              }
              v18 |= 1u;
            }
          }
          else if ( !v132 )
          {
            v66 = MmGetSessionIdEx((__int64)Process);
            SessionId = v66;
            v18 = v18 & 0xFFFFFFFE | (v66 != (unsigned int)MmGetSessionIdEx((__int64)v130));
          }
          if ( (v18 & 1) != 0 )
          {
            SectionInformation = PspAttachSession(v66, v180, &v155);
            if ( SectionInformation < 0 )
            {
              LOBYTE(v18) = v18 & 0xFE;
              goto LABEL_171;
            }
            *(_DWORD *)v129 |= 0x80u;
            v65 = v155;
          }
          if ( !a12 || v114[0] )
          {
            v69 = Process;
            if ( v114[0] )
              v69 = v130;
            PspInheritQuota(v23, v69);
          }
          else
          {
            SectionInformation = PspAssignProcessQuotaBlock(0LL, v23, Token);
            if ( SectionInformation < 0 )
            {
              if ( (v18 & 1) != 0 )
              {
                MmDetachSession((__int64)v65, (__int64)v180);
                ObfDereferenceObject(v65);
              }
              goto LABEL_171;
            }
          }
          v70 = PspMaximumWorkingSet;
          if ( (v179[0] & 0x100000000LL) != 0 )
            v70 = v179[3];
          v71 = v18 ^ (v18 ^ (32
                            * (unsigned __int8)MmCreateProcessAddressSpace(
                                                 (_DWORD)v144,
                                                 v68,
                                                 v70,
                                                 BYTE4(v179[0]) & 1,
                                                 (unsigned int)*(unsigned __int16 *)(v122 + 146) + 1,
                                                 (__int64)v23))) & 0x20;
          LOBYTE(v18) = v71;
          v113 = v71;
          if ( (v71 & 1) != 0 )
          {
            MmDetachSession((__int64)v65, (__int64)v180);
            ObfDereferenceObject(v65);
          }
          if ( (v18 & 0x20) == 0 )
            goto LABEL_225;
          v64 = v146;
        }
        else
        {
          PspInheritQuota(v23, 0LL);
          v23[640] = 1;
          SectionInformation = MmInitializeHandBuiltProcess();
          if ( SectionInformation < 0 )
            goto LABEL_171;
        }
        _InterlockedOr(v64, 0x40000u);
        v18 = v113;
        v23 = (char *)Object;
        SessionSchedulingGroupByProcess = MmGetSessionSchedulingGroupByProcess(Object);
        SectionInformation = KeInitializeProcess(v73, 8, &v142, v122, SessionSchedulingGroupByProcess, v74);
        if ( SectionInformation < 0 )
          goto LABEL_171;
        if ( v17 )
        {
          v124 = *(_DWORD *)(v17 + 408);
          v138 = *(_DWORD *)(v17 + 412);
          v140 = *(_QWORD *)(v17 + 416);
          v137 = *(_DWORD *)(v17 + 424);
          v157 = *(_QWORD *)(v17 + 432);
          v136 = *(_DWORD *)(v17 + 440);
          v156 = *(_QWORD *)(v17 + 208);
        }
        v125 = (v113 >> 11) & 1;
        v75 = Process;
        SectionInformation = PspInitializeProcessSecurity(
                               Process,
                               v124,
                               v125,
                               (v113 >> 12) & 1,
                               v138,
                               v140,
                               v137,
                               v157,
                               v136,
                               v156,
                               v165);
        if ( SectionInformation < 0 )
          goto LABEL_171;
        v23[1119] = 2;
        if ( v75 )
        {
          v76 = v23[1119];
          if ( ((HIBYTE(v75[1].ActiveProcessors.Bitmap[13]) - 1) & 0xFB) == 0 )
            v76 = HIBYTE(v75[1].ActiveProcessors.Bitmap[13]);
          v23[1119] = v76;
          if ( v17 )
            v77 = *(_QWORD *)(v17 + 296);
          else
            LODWORD(v77) = 0;
          v78 = v17 ? *(_DWORD *)(v17 + 292) : 0;
          inited = ObInitProcess(
                     (struct _EX_RUNDOWN_REF *)((unsigned __int64)v75 & -(__int64)((a9 & 4) != 0)),
                     (__int64)v23,
                     v78,
                     v77);
        }
        else
        {
          *((_QWORD *)v23 + 131) = v130[1].ActiveProcessors.Bitmap[5];
          inited = MmInitializeHandBuiltProcess2((ULONG_PTR)v23);
        }
        SectionInformation = inited;
        if ( inited < 0 )
          goto LABEL_171;
        if ( (v179[0] & 7) != 0 )
        {
          LOBYTE(v81) = a2;
          PspApplyIFEOPerfOptions(v23, v179, v81);
        }
        if ( v17 )
        {
          if ( (*(_DWORD *)(v17 + 4) & 0x100) != 0 )
          {
            LOBYTE(v82) = a2;
            LOBYTE(v80) = *(_BYTE *)(v17 + 248);
            SectionInformation = PspSetProcessPriorityClass(v23, v80, 0LL, v82);
            if ( SectionInformation < 0 )
              goto LABEL_171;
          }
        }
        v23[444] = PspComputeQuantumAndPriority((__int64)v23, 0LL, &v117, 0LL, 0LL);
        v23[445] = v117;
        SectionInformation = 0;
        v124 = 0;
        v178 = 0uLL;
        PspReadIFEOMitigationOptions(v17, &v178);
        v166 = v178;
        v167 = PspSystemMitigationOptions;
        PspInheritMitigationOptions(&v167, &v166, &v178);
        v152 = 0uLL;
        PspReadIFEOMitigationAuditOptions(v17, &v152);
        v168 = v152;
        v169 = PspSystemMitigationAuditOptions;
        PspInheritMitigationAuditOptions(&v169, &v168, &v152);
        v83 = (WORD3(v178) & 3) << 16;
        if ( v17 && (*(_DWORD *)(v17 + 4) & 0x10000) != 0 )
        {
          v170 = *(_OWORD *)(v17 + 360);
          v171 = v178;
          PspInheritMitigationOptions(&v171, &v170, &v178);
        }
        if ( (_DWORD)TokenInformation )
          v83 |= 4u;
        v84 = v83 | 0x100;
        if ( (v83 & 4) == 0 )
          v84 = v83;
        if ( (v84 & 0xFF00) != 0 )
          PspHardenMitigationOptions(&v178);
        if ( (KeFeatureBits & 0x400000000000LL) == 0 )
          *((_QWORD *)&v178 + 1) = *((_QWORD *)&v178 + 1) & 0xCFFFFFFFFFFFFFFFuLL | 0x2000000000000000LL;
        if ( (v113 & 0x80u) != 0 || (v85 = 0, (v113 & 0x100) != 0) )
          v85 = 1;
        if ( (v120 & 0x4000) != 0 && (v113 & 0x40000) != 0 )
          v86 = 32;
        else
          v86 = 0;
        v87 = v86 | v85 | v84 | ((v120 & 0x4000) != 0 ? 8 : 0) | ((unsigned __int16)v120 >> 4) & 2;
        v88 = (v113 >> 10) & 1;
        if ( v88 )
        {
          *((_QWORD *)&v178 + 1) = *((_QWORD *)&v178 + 1) & 0xCFFFFFFFFFFFFFFCuLL | 0x2000000000000002LL;
          if ( (a10 & 2) != 0 )
            v89 = v178 & 0xFFFFFCFFFFCCFFFFuLL | 0x20000220000LL;
          else
            v89 = v178 & 0xFFFFFCFFFFCCFFFFuLL | 0x20000110000LL;
          *(_QWORD *)&v178 = v89;
        }
        if ( (v113 & 0x4000) != 0 )
          *((_QWORD *)&v178 + 1) = *((_QWORD *)&v178 + 1) & 0xCFFFFFFFFFFFFFFFuLL | 0x2000000000000000LL;
        PspApplyMitigationOptions((_DWORD)v23, (_DWORD)Process, (unsigned int)&v178, (unsigned int)&v152, v87);
        if ( v17 )
        {
          PspApplyWin32kFilterOptions(v23, v17);
          *(_OWORD *)(v17 + 360) = v178;
          *(_OWORD *)(v17 + 472) = v152;
        }
        PsQueryProcessAttributes((struct _KPROCESS *)v23, 0LL, (__int64)v118);
        v90 = (int)TokenInformation;
        v91 = ((_DWORD)TokenInformation != 0) | 2;
        if ( (a9 & 0x20000) == 0 )
          v91 = (_DWORD)TokenInformation != 0;
        if ( (dword_14055C180 & 0xC) != 0 && !*((_WORD *)v23 + 727) && v91 )
          SmpKeyedStoreCreate((ULONG_PTR)&qword_14055C188);
        if ( (a9 & 0x80u) != 0
          && !(unsigned int)MmIsSessionLeaderProcess(v130)
          && !SeSinglePrivilegeCheck(SeLoadDriverPrivilege, a2) )
        {
          goto LABEL_170;
        }
        if ( v88 || v132 )
        {
          SectionInformation = PspInitializeFullProcessImageName(v17, v23);
          if ( SectionInformation < 0 )
            goto LABEL_171;
          v99 = (v113 & 0x10000) != 0
              ? MmInitializeProcessAddressSpace((ULONG_PTR)v23, (v113 >> 17) & 1)
              : MmInitializeProcessAddressSpace((ULONG_PTR)v23, 0);
          SectionInformation = v99;
          if ( v99 < 0 )
            goto LABEL_171;
          if ( v17 )
          {
            v100 = *(_QWORD *)(*(_QWORD *)MiSectionControlArea((__int64)v131) + 32LL);
            v101 = *((_QWORD *)v23 + 120);
            if ( v100 != v101 )
              *(_QWORD *)(v17 + 48) += v101 - v100;
          }
          v124 = SectionInformation;
          if ( !v88 )
            v18 = v113 | 2;
          v18 = ((unsigned __int8)v18 ^ (unsigned __int8)(4 * a9)) & 0x40 ^ v18 | 8;
          v113 = v18;
          goto LABEL_294;
        }
        if ( !Process )
          goto LABEL_294;
        *((_QWORD *)v23 + 120) = Process[1].Affinity.Bitmap[18];
        SectionInformation = MmInitializeProcessAddressSpace((ULONG_PTR)v23, v125);
        if ( SectionInformation >= 0 )
        {
          v92 = a9;
          v18 = ((unsigned __int8)v113 ^ (unsigned __int8)(4 * a9)) & 0x40 ^ v113 | 2;
          v113 = v18;
          v93 = *(unsigned __int16 *)(Process[1].ActiveProcessors.Bitmap[15] + 2);
          v94 = ExAllocatePoolWithTag(NonPagedPoolNx, v93 + 16, 0x61506553u);
          *((_QWORD *)v23 + 141) = v94;
          if ( !v94 )
          {
LABEL_225:
            SectionInformation = -1073741670;
            goto LABEL_171;
          }
          v95 = v93 + 16;
          v96 = Process;
          memmove(v94, (const void *)Process[1].ActiveProcessors.Bitmap[15], v95);
          *(_QWORD *)(*((_QWORD *)v23 + 141) + 8LL) = *((_QWORD *)v23 + 141) + 16LL;
          *((_DWORD *)v23 + 242) = v96[1].Affinity.Bitmap[19];
          if ( (v92 & 0x1000) != 0 )
          {
            *v160 = 0LL;
            ObfDereferenceObject(v131);
          }
          v90 = (int)TokenInformation;
LABEL_294:
          if ( (v18 & 0x10) != 0 )
            RtlReleasePrivilege(ReturnedState);
          v97 = *((_QWORD *)v23 + 133);
          if ( v97 && *(_WORD *)(v97 + 8) == 332 )
            *((_DWORD *)v23 + 110) |= 1u;
          if ( (v18 & 8) != 0 )
          {
            if ( v17 )
            {
              SectionInformation = PspSetupReservedUserMappings(v23, v180, v17);
              if ( SectionInformation < 0 )
                goto LABEL_173;
            }
          }
          if ( (v18 & 2) != 0 )
          {
            *(_QWORD *)&v151 = 0LL;
            *((_QWORD *)&v151 + 1) = -1LL;
            v98 = (4 * (((*v149 & 7) != 1 ? 0 : 0x10) | ((v18 & 0x80) != 0))) & 0xCF | ((*v149 & 7) != 0 ? 2 : 0) | ((v18 & 0x40) != 0) | (16 * ((v90 != 0 ? 2 : 0) | v118[0] & 1));
            *(_DWORD *)((char *)&v151 + 3) = v98;
            if ( v132 )
            {
              SectionInformation = MmCreatePeb(v23, &v151, v23 + 1016, &v142);
              if ( SectionInformation < 0 )
              {
                *((_QWORD *)v23 + 127) = 0LL;
                goto LABEL_173;
              }
              if ( v142 )
              {
                _InterlockedAnd((volatile signed __int32 *)v129, 0xFFCFFFFF);
                v23 = (char *)Object;
                PspSetProcessAffinitySafe((_DWORD)Object, 1, 0, (unsigned int)&v142, (__int64)v163);
                v18 = v113;
              }
            }
            else
            {
              v102 = Process;
              v140 = Process[1].ActiveProcessors.Bitmap[1];
              *((_QWORD *)v23 + 127) = v140;
              if ( (v18 & 0x800) != 0 )
              {
LABEL_332:
                if ( ((v18 >> 3) & 1) != 0 && v17 )
                {
                  SectionInformation = PspSetupUserProcessAddressSpace(v102, v23, v180, v17);
                }
                else if ( (v18 & 2) != 0 && (v18 & 0x800) == 0 )
                {
                  SectionInformation = 0;
                  KiStackAttachProcess((_KPROCESS *)v23, 0LL, (__int64)v180);
                  PspWritePebAffinityInfo(CurrentThread, v23);
                  if ( ((v18 >> 3) & 1) != 0 )
                  {
                    SectionInformation = MmMapApiSetView(v23);
                    if ( SectionInformation >= 0 )
                    {
                      SectionInformation = PspMapSiloSharedDataView(v23);
                      if ( SectionInformation >= 0 )
                      {
                        SectionInformation = PspPrepareSystemDllInitBlock(0LL, 0LL);
                        if ( SectionInformation >= 0 )
                        {
                          if ( *((_QWORD *)v23 + 133) )
                          {
                            ProcessNtdllType = PsWow64GetProcessNtdllType(v23);
                            SectionInformation = PspPrepareSystemDllInitBlock(ProcessNtdllType, 0LL);
                          }
                        }
                      }
                    }
                  }
                  KiUnstackDetachProcess((__int64)v180, 0LL);
                }
                MmNewProcessInitialized((__int64)v23);
                if ( SectionInformation >= 0 )
                {
                  v106 = CurrentThread;
                  --CurrentThread->KernelApcDisable;
                  v107 = (volatile signed __int64 *)(v23 + 728);
                  ExAcquirePushLockExclusiveEx((ULONG_PTR)(v23 + 728), 0LL);
                  v108 = ExCreateHandleEx(PspCidTable, (__int64)v23, 0, 0, 0LL);
                  *((_QWORD *)v23 + 92) = v108;
                  if ( v108 )
                  {
                    if ( (v18 & 0x1000) == 0
                      || (SectionInformation = MmGetSectionStrongImageReference(0LL, 0LL, *((_QWORD *)v23 + 119), &v161),
                          SectionInformation >= 0)
                      && (SectionInformation = KeSecureProcess(
                                                 (_KPROCESS *)v23,
                                                 **(_QWORD **)(v17 + 384),
                                                 *((_QWORD *)v23 + 127),
                                                 *((_QWORD *)v23 + 92),
                                                 v161,
                                                 *((_QWORD *)v23 + 120),
                                                 *(_QWORD *)(v17 + 384),
                                                 *(unsigned int *)(v17 + 400)),
                          SectionInformation >= 0) )
                    {
                      if ( KeQuerySystemTimeUnsafe() )
                      {
                        KeQuerySystemTimePrecise((LARGE_INTEGER *)v23 + 97);
                      }
                      else
                      {
                        v23 = (char *)Object;
                        *((_QWORD *)Object + 97) = MEMORY[0xFFFFF78000000014];
                      }
                      *((_QWORD *)v23 + 234) = MEMORY[0xFFFFF78000000008];
                      UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
                      v110 = Object;
                      *((_QWORD *)Object + 235) = UnbiasedInterruptTime;
                      v110[237] = *((_QWORD *)v23 + 234);
                      *v162 = v110;
                      return (unsigned int)v124;
                    }
                    if ( (_InterlockedExchangeAdd64(v107, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                      ExfTryToWakePushLock((volatile signed __int64 *)v23 + 91);
                    KeAbPostRelease((ULONG_PTR)(v23 + 728));
                    KeLeaveCriticalRegionThread((__int64)CurrentThread);
                  }
                  else
                  {
                    if ( (_InterlockedExchangeAdd64(v107, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                      ExfTryToWakePushLock((volatile signed __int64 *)v23 + 91);
                    KeAbPostRelease((ULONG_PTR)(v23 + 728));
                    KeLeaveCriticalRegionThread((__int64)v106);
                    SectionInformation = -1073741670;
                  }
                  v23 = (char *)Object;
                }
LABEL_173:
                PspRundownSingleProcess((__int64)v23, 0);
                ObfDereferenceObjectWithTag(v23, 0x72437350u);
                return (unsigned int)SectionInformation;
              }
              LOBYTE(v151) = 1;
              KiStackAttachProcess((_KPROCESS *)v23, 0LL, (__int64)v180);
              if ( MmSecureVirtualMemoryEx(v140, 1992LL, 4, 0) )
                *(_OWORD *)v140 = v151;
              else
                SectionInformation = -1073741503;
              if ( SectionInformation >= 0 )
              {
                v103 = *((_QWORD *)v23 + 133);
                if ( v103 )
                {
                  v104 = *(_WORD *)(v103 + 8);
                  if ( v104 == 332 || v104 == 452 )
                  {
                    v149 = *(_BYTE **)v103;
                    if ( MmSecureVirtualMemoryEx((unsigned __int64)v149, 1152LL, 4, 0) )
                    {
                      v145 = 0xFFFFFFFF00000001uLL;
                      BYTE3(v145) = v98;
                      *(_QWORD *)v149 = v145;
                    }
                    else
                    {
                      SectionInformation = -1073741503;
                    }
                  }
                }
              }
              KiUnstackDetachProcess((__int64)v180, 0LL);
              if ( SectionInformation < 0 )
                goto LABEL_173;
            }
          }
          v102 = Process;
          goto LABEL_332;
        }
LABEL_171:
        if ( (v18 & 0x10) != 0 )
          RtlReleasePrivilege(ReturnedState);
        goto LABEL_173;
      }
    }
    else if ( v35 )
    {
      SectionInformation = MmGetSectionInformation(v35, 4LL, v174);
      if ( SectionInformation < 0 )
        goto LABEL_173;
      v18 = v18 & 0xFFFBFE7F | (32 * (v176 & 4 | (4 * (v176 & 2 | ((v177 & 1) << 11)))));
      v113 = v18;
      LOWORD(v120) = v175;
      if ( !v132 )
      {
        v134 = 8;
        v18 |= 0x800u;
        v113 = v18;
      }
    }
    LOBYTE(v49) = v115;
    goto LABEL_139;
  }
  return result;
}
