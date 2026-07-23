/*
 * XREFs of LdrpInitializeProcess @ 0x1800D3FB4
 * Callers:
 *     _LdrpInitialize @ 0x18007875C (_LdrpInitialize.c)
 * Callees:
 *     WinSqmCheckEscalationSetString @ 0x180002A50 (WinSqmCheckEscalationSetString.c)
 *     RtlInitializeHistoryTable @ 0x18000329C (RtlInitializeHistoryTable.c)
 *     RtlImageNtHeaderEx @ 0x180007BB0 (RtlImageNtHeaderEx.c)
 *     LdrpDereferenceModule @ 0x1800099F8 (LdrpDereferenceModule.c)
 *     RtlInitUnicodeStringEx @ 0x18000C120 (RtlInitUnicodeStringEx.c)
 *     RtlAllocateHeap @ 0x18000F2A0 (RtlAllocateHeap.c)
 *     RtlLeaveCriticalSection @ 0x180014020 (RtlLeaveCriticalSection.c)
 *     RtlpEnterCriticalSectionContended @ 0x1800143C0 (RtlpEnterCriticalSectionContended.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     EtwEventRegister @ 0x180021AD0 (EtwEventRegister.c)
 *     LdrLoadDll @ 0x1800226B0 (LdrLoadDll.c)
 *     LdrpInitializeDllPath @ 0x180022848 (LdrpInitializeDllPath.c)
 *     LdrpFindLoadedDll @ 0x1800229B8 (LdrpFindLoadedDll.c)
 *     LdrpSnapKernelBaseExtensions @ 0x180022CBC (LdrpSnapKernelBaseExtensions.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x1800237A0 (RtlActivateActivationContextUnsafeFast.c)
 *     LdrpMapAndSnapDependency @ 0x18002385C (LdrpMapAndSnapDependency.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x180025950 (RtlDeactivateActivationContextUnsafeFast.c)
 *     LdrpCallTlsInitializers @ 0x180025DE4 (LdrpCallTlsInitializers.c)
 *     LdrpLogDllState @ 0x180026314 (LdrpLogDllState.c)
 *     RtlGetNtSystemRoot @ 0x180026CC0 (RtlGetNtSystemRoot.c)
 *     LdrpAllocateModuleEntry @ 0x180026E08 (LdrpAllocateModuleEntry.c)
 *     LdrpProcessMappedModule @ 0x180026F8C (LdrpProcessMappedModule.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x1800273C4 (LdrImageDirectoryEntryToLoadConfig.c)
 *     LdrpDrainWorkQueue @ 0x180028298 (LdrpDrainWorkQueue.c)
 *     LdrpInitializeGraphRecurse @ 0x1800287D4 (LdrpInitializeGraphRecurse.c)
 *     LdrpFreeLoadContextOfNode @ 0x180028BA4 (LdrpFreeLoadContextOfNode.c)
 *     LdrpPrepareModuleForExecution @ 0x1800294E4 (LdrpPrepareModuleForExecution.c)
 *     RtlAppendUnicodeStringToString @ 0x180029B40 (RtlAppendUnicodeStringToString.c)
 *     RtlFreeAnsiString @ 0x18002A5F0 (RtlFreeAnsiString.c)
 *     LdrpReleaseLoaderLock @ 0x18002AFD4 (LdrpReleaseLoaderLock.c)
 *     LdrpAcquireLoaderLock @ 0x18002B034 (LdrpAcquireLoaderLock.c)
 *     LdrpEnableParallelLoading @ 0x180031760 (LdrpEnableParallelLoading.c)
 *     LdrpInitializeTls @ 0x180035890 (LdrpInitializeTls.c)
 *     RtlSetBits @ 0x1800372B0 (RtlSetBits.c)
 *     RtlAppendUnicodeToString @ 0x180041260 (RtlAppendUnicodeToString.c)
 *     LdrpDecrementNodeLoadCountLockHeld @ 0x180042704 (LdrpDecrementNodeLoadCountLockHeld.c)
 *     LdrpCorInitialize @ 0x180054948 (LdrpCorInitialize.c)
 *     RtlpInitEnvironmentBlock @ 0x18005539C (RtlpInitEnvironmentBlock.c)
 *     LdrpUnloadNode @ 0x180055870 (LdrpUnloadNode.c)
 *     TpInitializePackage @ 0x180059DC0 (TpInitializePackage.c)
 *     RtlCreateTagHeap @ 0x180059E70 (RtlCreateTagHeap.c)
 *     RtlCreateHeap @ 0x18005F7E0 (RtlCreateHeap.c)
 *     LdrProtectMrdata @ 0x180060510 (LdrProtectMrdata.c)
 *     LdrpInitParallelLoadingSupport @ 0x1800630C4 (LdrpInitParallelLoadingSupport.c)
 *     RtlInitializeCriticalSection @ 0x18006BE00 (RtlInitializeCriticalSection.c)
 *     LdrpInitShimEngine @ 0x180070248 (LdrpInitShimEngine.c)
 *     LdrpInsertDataTableEntry @ 0x180070B38 (LdrpInsertDataTableEntry.c)
 *     LdrpReleaseDllPath @ 0x1800716E4 (LdrpReleaseDllPath.c)
 *     RtlpWakeSRWLock @ 0x180075260 (RtlpWakeSRWLock.c)
 *     RtlpInitializeThreadActivationContextStack @ 0x1800765B8 (RtlpInitializeThreadActivationContextStack.c)
 *     LdrpDropLastInProgressCount @ 0x180079EEC (LdrpDropLastInProgressCount.c)
 *     RtlpInitCurrentDir @ 0x18007BBC4 (RtlpInitCurrentDir.c)
 *     RtlSetHeapInformation @ 0x18007E6A0 (RtlSetHeapInformation.c)
 *     RtlQueryApplicationKeyOption @ 0x18007EB4C (RtlQueryApplicationKeyOption.c)
 *     LdrQueryImageFileExecutionOptions @ 0x18007EBF0 (LdrQueryImageFileExecutionOptions.c)
 *     LdrpCodeAuthzInitialize @ 0x18007FC18 (LdrpCodeAuthzInitialize.c)
 *     RtlpInitParameterBlock @ 0x180081240 (RtlpInitParameterBlock.c)
 *     SbObtainTraceHandle @ 0x1800826E0 (SbObtainTraceHandle.c)
 *     RtlImageDirectoryEntryToData @ 0x180082EE0 (RtlImageDirectoryEntryToData.c)
 *     LdrGetProcedureAddress @ 0x1800830B0 (LdrGetProcedureAddress.c)
 *     RtlSetUnhandledExceptionFilter @ 0x1800833D0 (RtlSetUnhandledExceptionFilter.c)
 *     LdrpInitializePolicy @ 0x180083408 (LdrpInitializePolicy.c)
 *     LdrpInsertModuleToIndex @ 0x1800836F0 (LdrpInsertModuleToIndex.c)
 *     RtlInitializeHeapLogging @ 0x180084D38 (RtlInitializeHeapLogging.c)
 *     LdrpInitializeImportRedirection @ 0x180084E4C (LdrpInitializeImportRedirection.c)
 *     LdrpInitializePerUserWindowsDirectory @ 0x180085AD4 (LdrpInitializePerUserWindowsDirectory.c)
 *     RtlDecodeSystemPointer @ 0x180086310 (RtlDecodeSystemPointer.c)
 *     LdrpCheckPolicy @ 0x180086338 (LdrpCheckPolicy.c)
 *     LdrpLoadWow64 @ 0x1800869B0 (LdrpLoadWow64.c)
 *     LdrpProtectAndRelocateImage @ 0x1800873B4 (LdrpProtectAndRelocateImage.c)
 *     LdrpCorProcessImports @ 0x180087A24 (LdrpCorProcessImports.c)
 *     LdrpCorValidateImage @ 0x180088074 (LdrpCorValidateImage.c)
 *     Wow64LdrpInitialize @ 0x1800890FC (Wow64LdrpInitialize.c)
 *     RtlNormalizeProcessParams @ 0x18008D8A0 (RtlNormalizeProcessParams.c)
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 *     RtlRaiseStatus @ 0x18009F6C0 (RtlRaiseStatus.c)
 *     ZwSetEvent @ 0x1800A04C0 (ZwSetEvent.c)
 *     NtClose @ 0x1800A04E0 (NtClose.c)
 *     NtQuerySystemInformation @ 0x1800A09C0 (NtQuerySystemInformation.c)
 *     ZwOpenDirectoryObject @ 0x1800A0E00 (ZwOpenDirectoryObject.c)
 *     ZwOpenSymbolicLinkObject @ 0x1800A27D0 (ZwOpenSymbolicLinkObject.c)
 *     NtQuerySymbolicLinkObject @ 0x1800A2DD0 (NtQuerySymbolicLinkObject.c)
 *     ZwSetInformationVirtualMemory @ 0x1800A35D0 (ZwSetInformationVirtualMemory.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3D00 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1800A7100 (memset.c)
 *     LdrpInitializeEnclaves @ 0x1800CF774 (LdrpInitializeEnclaves.c)
 *     LdrpLogDbgPrint @ 0x1800CFAF8 (LdrpLogDbgPrint.c)
 *     LdrpCorFixupImage @ 0x1800D05E8 (LdrpCorFixupImage.c)
 *     LdrpLogEtwEvent @ 0x1800D1238 (LdrpLogEtwEvent.c)
 *     LdrpCheckAppDirType @ 0x1800D266C (LdrpCheckAppDirType.c)
 *     LdrpDoDebuggerBreak @ 0x1800D288C (LdrpDoDebuggerBreak.c)
 *     LdrpInitializeExceptionTable @ 0x1800D3090 (LdrpInitializeExceptionTable.c)
 *     LdrpInitializeExecutionOptions @ 0x1800D30E0 (LdrpInitializeExecutionOptions.c)
 *     LdrpInitializeNlsInfo @ 0x1800D3F74 (LdrpInitializeNlsInfo.c)
 *     LdrpOverrideExportSuppression @ 0x1800D6B50 (LdrpOverrideExportSuppression.c)
 *     LdrpCaptureCriticalThunks @ 0x1800D7094 (LdrpCaptureCriticalThunks.c)
 *     AVrfInitializeVerifier @ 0x1800DACE8 (AVrfInitializeVerifier.c)
 *     RtlpInitDeferredCriticalSection @ 0x1800E980C (RtlpInitDeferredCriticalSection.c)
 *     RtlInitializeHeapManager @ 0x1800F1FC4 (RtlInitializeHeapManager.c)
 *     RtlpInitializeNonVolatileFlush @ 0x1800F7BA8 (RtlpInitializeNonVolatileFlush.c)
 *     RtlInitializeExceptionLog @ 0x1800FD0D8 (RtlInitializeExceptionLog.c)
 *     RtlControlStackTraceDataBase @ 0x1800FD8A8 (RtlControlStackTraceDataBase.c)
 *     RtlpInitWaitOnAddress @ 0x1800FF1A0 (RtlpInitWaitOnAddress.c)
 */

__int64 __fastcall LdrpInitializeProcess(__int64 a1, void *a2)
{
  int v2; // r12d
  struct _TEB *v4; // r13
  __int64 ProcessEnvironmentBlock; // r15
  int v6; // eax
  bool v7; // cc
  int v8; // eax
  __int64 v9; // rcx
  wchar_t *v10; // rdx
  unsigned __int16 Length; // r8
  char v12; // al
  _QWORD *v14; // rax
  __int64 v15; // rcx
  unsigned __int64 v16; // rax
  bool v17; // zf
  char v18; // al
  int v19; // r14d
  int inited; // ecx
  char v21; // al
  int WowTebOffset; // ecx
  _BYTE *v23; // rax
  unsigned int *Config; // rax
  unsigned int *v25; // r14
  ULONG v26; // r12d
  unsigned int v27; // eax
  unsigned int v28; // ecx
  unsigned int v29; // ecx
  __int64 v30; // rax
  char v31; // al
  char v32; // al
  unsigned __int64 v33; // r14
  SIZE_T SizeOfHeapReserve; // r8
  SIZE_T SizeOfHeapCommit; // r9
  PVOID Heap; // rax
  void *v37; // r14
  char v38; // al
  __int64 v39; // rcx
  __int64 v40; // r13
  const WCHAR *NtSystemRoot; // rax
  unsigned __int16 v42; // r12
  wchar_t *v43; // rax
  SIZE_T v44; // r12
  char *v45; // rax
  int v46; // edx
  NTSTATUS v47; // eax
  wchar_t *v48; // r13
  char *v49; // rax
  int v50; // edx
  __m128i v51; // xmm0
  wchar_t *v52; // xmm0_8
  PWSTR v53; // rax
  wchar_t *v54; // rdx
  unsigned __int64 v55; // r14
  SIZE_T v56; // r12
  __int64 v57; // rdx
  PVOID v58; // r12
  char *ModuleEntry; // rax
  char *v60; // r14
  _UNICODE_STRING *v61; // rcx
  __int64 v62; // rcx
  _QWORD *v63; // rax
  __int64 v64; // rcx
  char *v65; // rax
  char *v66; // r11
  __int64 v67; // rdx
  __int64 v68; // rdx
  int v69; // eax
  char v70; // r14
  int v71; // eax
  wchar_t *v72; // r9
  wchar_t *v73; // r8
  wchar_t *v74; // rax
  wchar_t *v75; // r10
  __int16 v76; // r8
  void *v77; // rcx
  void *v78; // r8
  int v79; // eax
  char v80; // cl
  char *v81; // rax
  __int64 v82; // r14
  char v83; // r12
  PVOID v84; // rcx
  __int64 v85; // r14
  char v86; // al
  unsigned int v87; // ecx
  int v88; // eax
  PVOID v89; // rbx
  __int64 v90; // rsi
  __int64 v91; // r13
  __int64 v92; // r8
  __int64 v93; // r9
  signed __int64 v94; // rax
  signed __int64 v95; // rcx
  __int64 v96; // rdx
  signed __int64 v97; // rdx
  signed __int64 v98; // rtt
  _DWORD *SharedData; // rcx
  __int64 v100; // rcx
  __int64 v101; // rdi
  unsigned __int64 Root; // rax
  unsigned __int64 v103; // rdx
  unsigned __int64 v104; // rdx
  __int64 v105; // rcx
  char v106; // al
  signed __int64 v107; // rax
  signed __int64 v108; // rcx
  __int64 v109; // rdx
  signed __int64 v110; // rdx
  signed __int64 v111; // rtt
  __int64 v112; // rdx
  _DWORD *v113; // rcx
  __int64 v114; // rcx
  __int64 v115; // rbx
  struct _TEB *v116; // rcx
  _DWORD *v117; // rcx
  __int64 v118; // rcx
  _DWORD *v119; // rcx
  __int64 v120; // rcx
  _DWORD *v121; // rcx
  __int64 v122; // rcx
  _DWORD *v123; // rcx
  __int64 v124; // rcx
  __int16 v125; // r13
  signed __int64 v126; // rdx
  __int64 v127; // r8
  __int64 v128; // r9
  signed __int64 v129; // rax
  signed __int64 v130; // rcx
  __int64 v131; // rdx
  signed __int64 v132; // rtt
  _DWORD *v133; // rcx
  __int64 v134; // rcx
  _DWORD *v135; // rcx
  __int64 v136; // rcx
  struct _TEB *v137; // rcx
  _DWORD *v138; // rcx
  __int64 v139; // rcx
  _DWORD *v140; // rcx
  __int64 v141; // rcx
  _DWORD *v142; // rcx
  _DWORD *v143; // rcx
  struct _TEB *v144; // rax
  struct _TEB *v145; // rcx
  PULONG ReturnedLength; // [rsp+28h] [rbp-420h]
  PULONG ReturnedLengtha; // [rsp+28h] [rbp-420h]
  const _UNICODE_STRING *ReturnedLengthb; // [rsp+28h] [rbp-420h]
  __int64 v149; // [rsp+30h] [rbp-418h]
  __int64 v150; // [rsp+38h] [rbp-410h]
  int ApplicationKeyOption; // [rsp+50h] [rbp-3F8h] BYREF
  char v152; // [rsp+54h] [rbp-3F4h] BYREF
  char v153; // [rsp+55h] [rbp-3F3h] BYREF
  char v154[2]; // [rsp+56h] [rbp-3F2h] BYREF
  int v155; // [rsp+58h] [rbp-3F0h]
  int v156; // [rsp+5Ch] [rbp-3ECh]
  __int64 v157; // [rsp+60h] [rbp-3E8h] BYREF
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+68h] [rbp-3E0h] BYREF
  _UNICODE_STRING v159; // [rsp+70h] [rbp-3D8h] BYREF
  _UNICODE_STRING UnicodeString; // [rsp+80h] [rbp-3C8h] BYREF
  unsigned int Buffer; // [rsp+90h] [rbp-3B8h] BYREF
  int v162; // [rsp+94h] [rbp-3B4h] BYREF
  PVOID DllHandle; // [rsp+98h] [rbp-3B0h] BYREF
  HANDLE v164; // [rsp+A0h] [rbp-3A8h] BYREF
  _UNICODE_STRING SubKey; // [rsp+A8h] [rbp-3A0h] BYREF
  HANDLE Handle; // [rsp+B8h] [rbp-390h] BYREF
  _UNICODE_STRING Destination; // [rsp+C0h] [rbp-388h] BYREF
  _UNICODE_STRING ImagePathName; // [rsp+D0h] [rbp-378h] BYREF
  ULONG v169; // [rsp+E0h] [rbp-368h] BYREF
  int VmInformation; // [rsp+E4h] [rbp-364h] BYREF
  int v171; // [rsp+E8h] [rbp-360h]
  int v172; // [rsp+ECh] [rbp-35Ch] BYREF
  int v173; // [rsp+F0h] [rbp-358h] BYREF
  __int64 v174; // [rsp+F8h] [rbp-350h]
  PIMAGE_NT_HEADERS v175; // [rsp+100h] [rbp-348h] BYREF
  PVOID BaseOfImage; // [rsp+108h] [rbp-340h]
  __int64 v177; // [rsp+110h] [rbp-338h]
  _UNICODE_STRING DestinationString; // [rsp+120h] [rbp-328h] BYREF
  struct _TEB *v179; // [rsp+130h] [rbp-318h]
  _QWORD *v180; // [rsp+138h] [rbp-310h] BYREF
  __int64 v181; // [rsp+140h] [rbp-308h]
  PVOID ProcedureAddress; // [rsp+148h] [rbp-300h] BYREF
  HANDLE LinkHandle; // [rsp+150h] [rbp-2F8h] BYREF
  int v184; // [rsp+158h] [rbp-2F0h] BYREF
  const WCHAR *v185; // [rsp+160h] [rbp-2E8h]
  ULONG Size; // [rsp+168h] [rbp-2E0h] BYREF
  char *v187; // [rsp+170h] [rbp-2D8h] BYREF
  PVOID v188; // [rsp+178h] [rbp-2D0h] BYREF
  __int64 SystemInformation; // [rsp+180h] [rbp-2C8h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+188h] [rbp-2C0h] BYREF
  _MEMORY_RANGE_ENTRY VirtualAddresses; // [rsp+1B8h] [rbp-290h] BYREF
  _QWORD v192[5]; // [rsp+1C8h] [rbp-280h] BYREF
  __int64 v193; // [rsp+1F0h] [rbp-258h] BYREF
  int v194; // [rsp+1F8h] [rbp-250h]
  _BYTE v195[56]; // [rsp+200h] [rbp-248h] BYREF
  _OWORD v196[15]; // [rsp+240h] [rbp-208h] BYREF
  _QWORD Parameters[12]; // [rsp+330h] [rbp-118h] BYREF
  __int64 v198[16]; // [rsp+390h] [rbp-B8h] BYREF

  BaseOfImage = a2;
  v177 = a1;
  v184 = 1441812;
  v185 = L"\\KnownDlls";
  RtlSetUnhandledExceptionFilter(0LL);
  v4 = NtCurrentTeb();
  v179 = v4;
  ProcessEnvironmentBlock = (__int64)v4->ProcessEnvironmentBlock;
  PebLdr = 88;
  byte_1801653C4 = 1;
  qword_1801653D8 = (__int64)&qword_1801653D0;
  qword_1801653D0 = (__int64)&qword_1801653D0;
  qword_1801653E8 = (__int64)&qword_1801653E0;
  qword_1801653E0 = (__int64)&qword_1801653E0;
  qword_1801653F8 = (__int64)&qword_1801653F0;
  qword_1801653F0 = (__int64)&qword_1801653F0;
  byte_180165408 = 0;
  qword_180165410 = 0LL;
  *(_QWORD *)(ProcessEnvironmentBlock + 24) = &PebLdr;
  LdrpInitializeNlsInfo((PUSHORT *)ProcessEnvironmentBlock);
  v6 = 0;
  v7 = *(_DWORD *)(ProcessEnvironmentBlock + 184) <= 1u;
  if ( *(_DWORD *)(ProcessEnvironmentBlock + 184) > 1u )
    v6 = 1024;
  SRWLockSpinCount = v6;
  v8 = 0;
  if ( !v7 )
    v8 = 1024;
  ConditionVariableSpinCount = v8;
  RtlpInitWaitOnAddress(ProcessEnvironmentBlock);
  RtlpInitializeNonVolatileFlush();
  v9 = *(_QWORD *)(ProcessEnvironmentBlock + 32);
  v10 = (wchar_t *)(*(_QWORD *)(v9 + 104) + v9);
  if ( (*(_BYTE *)(v9 + 8) & 1) != 0 )
    v10 = *(wchar_t **)(v9 + 104);
  SubKey.Buffer = v10;
  SubKey.Length = *(_WORD *)(v9 + 96);
  Length = SubKey.Length;
  SubKey.MaximumLength = SubKey.Length + 2;
  if ( SubKey.Length >= 8u && *v10 == 92 && v10[1] == 63 && v10[2] == 63 && v10[3] == 92 )
  {
    SubKey.Length -= 8;
    SubKey.MaximumLength = Length - 6;
    SubKey.Buffer = v10 + 4;
    *(_WORD *)(v9 + 96) -= 8;
    *(_WORD *)(v9 + 98) -= 8;
    *(_QWORD *)(v9 + 104) += 8LL;
  }
  v156 = 1;
  UseCOR = 0;
  LOBYTE(v2) = 0;
  v155 = v2;
  v162 = 0;
  RtlImageNtHeaderEx(3u, *(PVOID *)(ProcessEnvironmentBlock + 16), 0LL, &OutHeaders);
  LdrpAppHeaders = (__int64)OutHeaders;
  if ( LdrpIsSecureProcess && (OutHeaders->FileHeader.Characteristics & 0x20) == 0 )
  {
    v12 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        3780,
        "LdrpInitializeProcess",
        0,
        "Secure processes must be large address aware\n");
      v12 = LdrpDebugFlags;
    }
    if ( (v12 & 0x10) != 0 )
      __debugbreak();
    return 3221225659LL;
  }
  v14 = &LdrpHashTable;
  v15 = 32LL;
  do
  {
    v14[1] = v14;
    *v14 = v14;
    v14 += 2;
    --v15;
  }
  while ( v15 );
  LdrpInitializeExceptionTable(a2);
  LdrpCaptureCriticalThunks();
  LdrProtectMrdata(1);
  LdrpOverrideExportSuppression();
  v196[12] = LdrSystemDllInitBlock.MitigationOptionsMap;
  v16 = (_mm_srli_si128((__m128i)LdrSystemDllInitBlock.MitigationOptionsMap, 8).m128i_u64[0] >> 4) & 3;
  LdrpEnforceIntegrityContinuity = (_BYTE)v16 == 1;
  if ( (_BYTE)v16 == 1 || (v196[13] = LdrSystemDllInitBlock.MitigationOptionsMap, v17 = (_BYTE)v16 == 3, v18 = 0, v17) )
    v18 = 1;
  LdrpAuditIntegrityContinuity = v18;
  v19 = 0;
  inited = LdrpInitializeExecutionOptions(
             &SubKey.Length,
             ProcessEnvironmentBlock,
             (__int64)a2,
             &Handle,
             &v164,
             (__int64)&v157);
  ApplicationKeyOption = inited;
  if ( inited < 0 )
  {
    v21 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) == 0 )
      goto LABEL_308;
    LODWORD(ReturnedLength) = v4->ClientId.UniqueProcess;
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      3926,
      "LdrpInitializeProcess",
      0,
      "Initializing the execution options for the process %lx failed with status 0x%08lx\n",
      ReturnedLength,
      inited);
    goto LABEL_307;
  }
  if ( (*(_BYTE *)(ProcessEnvironmentBlock + 188) & 2) != 0 )
    LdrpDebugFlags |= 1u;
  if ( (LdrpDebugFlags & 5) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      3973,
      "LdrpInitializeProcess",
      2,
      "Initializing process 0x%p\n",
      v4->ClientId.UniqueProcess);
  v181 = 0LL;
  WowTebOffset = v4->WowTebOffset;
  UseWOW64 = WowTebOffset > 0;
  if ( OutHeaders )
  {
    if ( OutHeaders->OptionalHeader.Magic == 267 && WowTebOffset <= 0 )
    {
      UseCOR = 1;
      LOBYTE(v2) = 1;
      v155 = v2;
      v19 = 1;
      inited = LdrpCorFixupImage(*(void **)(ProcessEnvironmentBlock + 16));
      ApplicationKeyOption = inited;
      if ( inited < 0 )
        return (unsigned int)inited;
    }
  }
  if ( !UseWOW64 && !UseCOR )
  {
    v23 = RtlImageDirectoryEntryToData(*(PVOID *)(ProcessEnvironmentBlock + 16), 1u, 0xEu, &Size);
    if ( v23 )
    {
      UseCOR = 1;
      v2 = (unsigned __int8)v2;
      if ( (v23[16] & 1) != 0 )
        v2 = 1;
      v155 = v2;
    }
  }
  LdrpSystemDllBase = (__int64)BaseOfImage;
  if ( !UseWOW64 )
    v181 = *(_QWORD *)(ProcessEnvironmentBlock + 728);
  RtlpTimeout = *(LARGE_INTEGER *)(ProcessEnvironmentBlock + 192);
  ImagePathName = RtlNormalizeProcessParams(*(PRTL_USER_PROCESS_PARAMETERS *)(ProcessEnvironmentBlock + 32))->ImagePathName;
  Config = 0LL;
  if ( !UseWOW64 && (!UseCOR || !v19) )
    Config = LdrImageDirectoryEntryToLoadConfig(*(void **)(ProcessEnvironmentBlock + 16));
  v25 = Config;
  memset(Parameters, 0, sizeof(Parameters));
  v26 = 2;
  LODWORD(Parameters[0]) = 96;
  if ( v25 )
  {
    v27 = *v25;
    if ( *v25 >= 0x10 )
    {
      *(_DWORD *)(ProcessEnvironmentBlock + 188) &= ~v25[3];
      v27 = *v25;
    }
    if ( v27 >= 0x14 )
    {
      *(_DWORD *)(ProcessEnvironmentBlock + 188) |= v25[4];
      v27 = *v25;
    }
    if ( v27 >= 0x18 && v25[5] )
    {
      RtlpTimeout.QuadPart = -10000LL * (int)v25[5];
      v27 = *v25;
    }
    if ( v27 >= 0x4C )
    {
      v28 = v25[18];
      if ( v28 )
      {
        v29 = v28 & 0xFFFF0FFF;
        if ( v29 )
          v26 = v29;
      }
    }
    if ( v27 >= 0x20 && *((_QWORD *)v25 + 3) )
    {
      Parameters[3] = *((_QWORD *)v25 + 3);
      v27 = *v25;
    }
    if ( v27 >= 0x28 && *((_QWORD *)v25 + 4) )
    {
      Parameters[4] = *((_QWORD *)v25 + 4);
      v27 = *v25;
    }
    if ( v27 >= 0x38 && *((_QWORD *)v25 + 6) )
    {
      Parameters[5] = *((_QWORD *)v25 + 6);
      v27 = *v25;
    }
    if ( v27 >= 0x40 )
    {
      v30 = Parameters[6];
      if ( *((_QWORD *)v25 + 7) )
        v30 = *((_QWORD *)v25 + 7);
      Parameters[6] = v30;
    }
  }
  if ( (*(_BYTE *)(ProcessEnvironmentBlock + 188) & 2) != 0 )
    LdrpDebugFlags |= 1u;
  v31 = RtlpTimeoutDisable;
  if ( RtlpTimeout.QuadPart < -36000000000LL )
    v31 = 1;
  RtlpTimeoutDisable = v31;
  inited = RtlpInitDeferredCriticalSection(1LL, 0LL);
  ApplicationKeyOption = inited;
  if ( inited < 0 )
    return (unsigned int)inited;
  *(_QWORD *)(ProcessEnvironmentBlock + 824) = &FlsBitMap;
  *(_QWORD *)(ProcessEnvironmentBlock + 120) = &TlsBitMap;
  *(_QWORD *)(ProcessEnvironmentBlock + 568) = &TlsExpansionBitMap;
  FlsBitMap = 128;
  qword_180165388 = ProcessEnvironmentBlock + 832;
  *(_DWORD *)(ProcessEnvironmentBlock + 832) |= 1u;
  *(_QWORD *)(ProcessEnvironmentBlock + 816) = ProcessEnvironmentBlock + 808;
  *(_QWORD *)(ProcessEnvironmentBlock + 808) = ProcessEnvironmentBlock + 808;
  TlsBitMap = 64;
  qword_180165328 = ProcessEnvironmentBlock + 128;
  *(_DWORD *)(ProcessEnvironmentBlock + 128) |= 1u;
  TlsExpansionBitMap = 1024;
  qword_180165308 = ProcessEnvironmentBlock + 576;
  *(_DWORD *)(ProcessEnvironmentBlock + 576) |= 1u;
  if ( UseWOW64 )
    RtlSetBits(*(PRTL_BITMAP *)(ProcessEnvironmentBlock + 120), 0, 0x13u);
  RtlSetBits(*(PRTL_BITMAP *)(ProcessEnvironmentBlock + 120), 4u, 1u);
  RtlSetBits(*(PRTL_BITMAP *)(ProcessEnvironmentBlock + 120), 0x10u, 1u);
  if ( (*(_DWORD *)(ProcessEnvironmentBlock + 188) & 0x1000) != 0 || (v32 = LdrpShouldCreateStackTraceDb) != 0 )
  {
    Buffer = 24;
    if ( LdrQueryImageFileExecutionOptions(&SubKey, L"StackTraceDatabaseSizeInMb", 4u, &Buffer, 4u, 0LL) >= 0
      && Buffer >= 0x18 )
    {
      if ( Buffer <= 0x80 )
        v33 = Buffer << 20;
      else
        v33 = 0x8000000LL;
    }
    else
    {
      v33 = 25165824LL;
    }
    if ( (LdrpDebugFlags & 5) != 0 )
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        4262,
        "LdrpInitializeProcess",
        2,
        "Stack trace database size is %Id Mb\n",
        v33 >> 20);
    v192[0] = 0LL;
    v192[1] = 0LL;
    v192[2] = v33;
    ApplicationKeyOption = RtlControlStackTraceDataBase(0LL, 24LL, v192);
    v32 = LdrpShouldCreateStackTraceDb;
  }
  if ( (*(_DWORD *)(ProcessEnvironmentBlock + 188) & 0x1000) != 0 || v32 )
    RtlpForceCSDebugInfoCreation = 1;
  if ( (NtCurrentPeb()->AppCompatFlags.LowPart & 0x400000) != 0 )
  {
    RtlpForceCSDebugInfoCreation = 1;
    RtlpForceCSToUseEvents = 1;
  }
  inited = RtlInitializeCriticalSection(&FastPebLock);
  ApplicationKeyOption = inited;
  if ( inited < 0 )
    return (unsigned int)inited;
  *(_QWORD *)(ProcessEnvironmentBlock + 56) = &FastPebLock;
  inited = RtlInitializeHeapManager(&SubKey);
  ApplicationKeyOption = inited;
  if ( inited < 0 )
    return (unsigned int)inited;
  v196[14] = LdrSystemDllInitBlock.MitigationOptionsMap;
  if ( ((LdrSystemDllInitBlock.MitigationOptionsMap.Map[0] >> 12) & 3) == 1 )
    RtlSetHeapInformation(0LL, HeapEnableTerminationOnCorruption, 0LL, 0LL);
  if ( UseWOW64 || OutHeaders->OptionalHeader.Magic == 267 )
  {
    SizeOfHeapReserve = 0LL;
    SizeOfHeapCommit = 0LL;
  }
  else
  {
    if ( OutHeaders->OptionalHeader.MajorSubsystemVersion <= 3u
      && OutHeaders->OptionalHeader.MinorSubsystemVersion < 0x33u )
    {
      v26 |= 0x10000u;
    }
    SizeOfHeapReserve = OutHeaders->OptionalHeader.SizeOfHeapReserve;
    SizeOfHeapCommit = OutHeaders->OptionalHeader.SizeOfHeapCommit;
  }
  Heap = RtlCreateHeap(v26, 0LL, SizeOfHeapReserve, SizeOfHeapCommit, 0LL, Parameters);
  v37 = Heap;
  if ( !Heap )
  {
    v38 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) == 0 )
      goto LABEL_177;
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      4364,
      "LdrpInitializeProcess",
      0,
      "Creating the process heap failed\n");
    goto LABEL_176;
  }
  *(_QWORD *)(ProcessEnvironmentBlock + 48) = Heap;
  LdrpInitializeEnclaves();
  if ( (*(_DWORD *)(ProcessEnvironmentBlock + 188) & 0x800000) != 0 )
    RtlInitializeExceptionLog(50LL);
  RtlpInitializeThreadActivationContextStack((__int64)v179);
  LdrpHeap = v37;
  if ( ((unsigned __int8)&EtwpFreeRegistrationList & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  EtwpFreeRegistrationList = 0uLL;
  PrivateLoggerNotificationEntry = 0LL;
  ApplicationKeyOption = NtQuerySystemInformation(SystemHypervisorSharedPageInformation, &SystemInformation, 8u, 0LL);
  v39 = RtlpHypervisorSharedUserVa;
  if ( ApplicationKeyOption >= 0 )
    v39 = SystemInformation;
  RtlpHypervisorSharedUserVa = v39;
  NtdllBaseTag = RtlCreateTagHeap(v37, 0, (PWSTR)L"NTDLL!", (PWSTR)L"!Process");
  inited = TpInitializePackage();
  ApplicationKeyOption = inited;
  if ( inited < 0 )
    return (unsigned int)inited;
  EtwEventRegister(&PrivateLoggerNotificationGuid, 0LL, 0LL, &g_hPrivLoggerNotificationProvider);
  EtwEventRegister(&UserDiagnosticGuid, UserDiagnosticProviderCallback, 0LL, &g_hUserDiagnosticProvider);
  RtlInitializeHeapLogging();
  WinSqmCheckEscalationSetString();
  inited = RtlpInitEnvironmentBlock();
  ApplicationKeyOption = inited;
  if ( inited < 0 )
    return (unsigned int)inited;
  inited = RtlpInitParameterBlock();
  ApplicationKeyOption = inited;
  if ( inited < 0 )
    return (unsigned int)inited;
  v40 = *(_QWORD *)(ProcessEnvironmentBlock + 32);
  v174 = v40;
  ImagePathName = *(_UNICODE_STRING *)(v40 + 96);
  SubKey.Buffer = (wchar_t *)_mm_srli_si128((__m128i)ImagePathName, 8).m128i_u64[0];
  if ( Handle || v164 )
  {
    ApplicationKeyOption = RtlQueryApplicationKeyOption(
                             v164,
                             Handle,
                             (__int64)L"DebugProcessHeapOnly",
                             4LL,
                             (__int64)&v162,
                             4,
                             0LL,
                             0LL);
    if ( ApplicationKeyOption >= 0 && dword_18015F3E8 && v162 )
    {
      dword_18015F3E8 = 0;
      *RtlpDebugPageHeapTable &= ~0x400u;
    }
  }
  NtSystemRoot = RtlGetNtSystemRoot();
  RtlInitUnicodeStringEx(&DestinationString, NtSystemRoot);
  v42 = DestinationString.Length + 40;
  v43 = (wchar_t *)RtlAllocateHeap(v37, 0, (unsigned int)DestinationString.Length + 38 + 2LL);
  if ( !v43 )
    return 3221225495LL;
  Destination.Length = 0;
  Destination.MaximumLength = v42;
  Destination.Buffer = v43;
  RtlAppendUnicodeStringToString(&Destination, &DestinationString);
  RtlAppendUnicodeStringToString(&Destination, &SlashSystem32SlashString);
  if ( (*(_BYTE *)(ProcessEnvironmentBlock + 3) & 2) == 0 )
  {
    v44 = 48LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 64;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v184;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    LdrProtectMrdata(0);
    ApplicationKeyOption = ZwOpenDirectoryObject(&LdrpKnownDllDirectoryHandle, 3u, &ObjectAttributes);
    LdrProtectMrdata(1);
    inited = ApplicationKeyOption;
    if ( ApplicationKeyOption >= 0 )
    {
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = LdrpKnownDllDirectoryHandle;
      ObjectAttributes.Attributes = 64;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)&unk_180118B18;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      inited = ZwOpenSymbolicLinkObject(&LinkHandle, 1u, &ObjectAttributes);
      ApplicationKeyOption = inited;
      if ( inited >= 0 )
      {
        while ( 1 )
        {
          v48 = (wchar_t *)RtlAllocateHeap(v37, 0, v44);
          if ( !v48 )
            return 3221225495LL;
          LdrpKnownDllPath.Length = 0;
          LdrpKnownDllPath.MaximumLength = v44;
          LdrpKnownDllPath.Buffer = v48;
          v47 = NtQuerySymbolicLinkObject(LinkHandle, &LdrpKnownDllPath, &v169);
          inited = v47;
          ApplicationKeyOption = v47;
          if ( v47 >= 0 )
          {
            NtClose(LinkHandle);
            v40 = v174;
            goto LABEL_140;
          }
          if ( v47 != -1073741789 )
          {
            v21 = LdrpDebugFlags;
            if ( (LdrpDebugFlags & 3) == 0 )
              goto LABEL_308;
            v49 = "Querying the known DLL directory link object failed with status 0x%08lx\n";
            v50 = 4671;
            goto LABEL_306;
          }
          RtlFreeHeap(v37, 0, v48);
          v44 = v169;
        }
      }
      v21 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) == 0 )
        goto LABEL_308;
      LODWORD(v149) = inited;
      ReturnedLengthb = (const _UNICODE_STRING *)&unk_180118B18;
      v45 = "Failed to open %wZ with status 0x%08lx\n";
      v46 = 4636;
    }
    else
    {
      v21 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) == 0 )
        goto LABEL_308;
      LODWORD(v149) = ApplicationKeyOption;
      ReturnedLengthb = (const _UNICODE_STRING *)&v184;
      v45 = "Failed to open %wZ with status 0x%08lx\n";
      v46 = 4613;
    }
    goto LABEL_268;
  }
LABEL_140:
  if ( UseWOW64 || LdrpIsSecureProcess )
  {
    UnicodeString = DestinationString;
  }
  else
  {
    v51 = *(__m128i *)(v40 + 56);
    *(_QWORD *)&UnicodeString.Length = *(_QWORD *)(v40 + 56);
    v52 = (wchar_t *)_mm_srli_si128(v51, 8).m128i_u64[0];
    UnicodeString.Buffer = v52;
    if ( !v52 || !UnicodeString.Length || !*v52 )
    {
      UnicodeString.Buffer = (wchar_t *)RtlAllocateHeap(v37, 0, 8uLL);
      if ( !UnicodeString.Buffer )
      {
        v38 = LdrpDebugFlags;
        if ( (LdrpDebugFlags & 3) == 0 )
          goto LABEL_177;
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          4718,
          "LdrpInitializeProcess",
          0,
          "Allocating a buffer to hold the current working directory failed\n");
        goto LABEL_176;
      }
      v156 = 0;
      v53 = RtlGetNtSystemRoot();
      v54 = UnicodeString.Buffer;
      *(_DWORD *)UnicodeString.Buffer = *(_DWORD *)v53;
      v54[2] = v53[2];
      UnicodeString.Buffer[3] = 0;
      *(_DWORD *)&UnicodeString.Length = 524294;
    }
  }
  LdrpInitializePolicy();
  v55 = Destination.Length;
  if ( (*(_DWORD *)(*(_QWORD *)(ProcessEnvironmentBlock + 32) + 8LL) & 0x20000000) != 0 )
    v55 = 2LL * Destination.Length + 22;
  v56 = v55;
  if ( !LdrpCheckPolicy(1) )
  {
    v56 = v55 + 2 * (DestinationString.Length + 9LL);
    if ( (*(_BYTE *)(ProcessEnvironmentBlock + 3) & 2) != 0 )
      *(_WORD *)(v40 + 80) = 0;
  }
  v159.Buffer = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v56);
  if ( !v159.Buffer )
  {
    v38 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) == 0 )
      goto LABEL_177;
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      4801,
      "LdrpInitializeProcess",
      0,
      "Failed to allocate the system dirs string!\n");
    goto LABEL_176;
  }
  v159.Length = 0;
  v159.MaximumLength = v56;
  RtlAppendUnicodeStringToString(&v159, &Destination);
  v57 = 59LL;
  v159.Buffer[((unsigned __int64)v159.Length >> 1) - 1] = 59;
  RtlpSystem32Dirs = (__int128)v159;
  LdrpSystem32 = (__int128)v159;
  LOWORD(LdrpSystem32) = _mm_cvtsi128_si32((__m128i)v159) - 2;
  if ( (*(_DWORD *)(*(_QWORD *)(ProcessEnvironmentBlock + 32) + 8LL) & 0x20000000) != 0 )
  {
    RtlAppendUnicodeStringToString(&v159, &Destination);
    RtlAppendUnicodeToString(&v159, L"forwarders;");
  }
  if ( v56 > v55 )
  {
    RtlAppendUnicodeStringToString(&v159, &DestinationString);
    RtlAppendUnicodeToString(&v159, L"\\system;");
    RtlAppendUnicodeStringToString(&v159, &DestinationString);
    RtlAppendUnicodeToString(&v159, L";");
    RtlpSystemDirs = v159;
  }
  if ( (unsigned int)(LdrpIllegalCWDDevices - 1) <= 0xFFFFFFFD )
    LdrpCheckAppDirType(&ImagePathName, v57);
  v58 = BaseOfImage;
  RtlImageNtHeaderEx(3u, BaseOfImage, 0LL, &v175);
  ModuleEntry = LdrpAllocateModuleEntry(0LL);
  v60 = ModuleEntry;
  if ( !ModuleEntry )
  {
    v38 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) == 0 )
      goto LABEL_177;
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      4908,
      "LdrpInitializeProcess",
      0,
      "Allocating a data table entry for the system DLL failed\n");
    goto LABEL_176;
  }
  LdrpNtDllDataTableEntry = (__int64)ModuleEntry;
  *(_DWORD *)(*((_QWORD *)ModuleEntry + 19) + 24LL) = -1;
  *(_WORD *)(**(_QWORD **)(LdrpNtDllDataTableEntry + 152) - 52LL) = -1;
  v61 = (_UNICODE_STRING *)LdrpNtDllDataTableEntry;
  *(_DWORD *)(LdrpNtDllDataTableEntry + 104) |= 0x204u;
  v61[15].Buffer = (wchar_t *)((char *)v61[15].Buffer - LdrSystemDllInitBlock.SystemDllNativeRelocation);
  v61 = (_UNICODE_STRING *)((char *)v61 + 72);
  *v61 = Destination;
  RtlAppendUnicodeStringToString(v61, &NtDllName);
  v62 = LdrpNtDllDataTableEntry;
  *(UNICODE_STRING *)(LdrpNtDllDataTableEntry + 88) = NtDllName;
  *(_QWORD *)(v62 + 48) = v58;
  LdrpInsertDataTableEntry(v62);
  LdrpLogDllState(*(_QWORD *)(LdrpNtDllDataTableEntry + 48), LdrpNtDllDataTableEntry + 72, 0x14A5u);
  LdrpInsertModuleToIndex(LdrpNtDllDataTableEntry, (__int64)v175);
  inited = LdrpProcessMappedModule(LdrpNtDllDataTableEntry, 0, 1);
  ApplicationKeyOption = inited;
  if ( inited < 0 )
    return (unsigned int)inited;
  LdrpLogDllState(*(_QWORD *)(LdrpNtDllDataTableEntry + 48), LdrpNtDllDataTableEntry + 72, 0x14AEu);
  *(_DWORD *)(*(_QWORD *)(LdrpNtDllDataTableEntry + 152) + 56LL) = 9;
  RtlInitializeHistoryTable();
  v63 = v60 + 32;
  v64 = qword_1801653F0;
  if ( *(__int64 **)(qword_1801653F0 + 8) != &qword_1801653F0 )
    __fastfail(3u);
  *v63 = qword_1801653F0;
  *((_QWORD *)v60 + 5) = &qword_1801653F0;
  *(_QWORD *)(v64 + 8) = v63;
  qword_1801653F0 = (__int64)(v60 + 32);
  inited = LdrpInitParallelLoadingSupport();
  ApplicationKeyOption = inited;
  if ( inited < 0 )
  {
    v21 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) == 0 )
      goto LABEL_308;
    v49 = "Failed to initialize Parallel loader, st = 0x%x\n";
    v50 = 4987;
LABEL_306:
    LODWORD(ReturnedLengtha) = inited;
    LdrpLogDbgPrint((unsigned int)"minkernel\\ntdll\\ldrinit.c", v50, "LdrpInitializeProcess", 0, v49, ReturnedLengtha);
    goto LABEL_307;
  }
  LdrpDrainWorkQueue(0);
  LdrpInitializeDllPath(0LL, 0LL, v198);
  memset(v196, 0, 0xC0uLL);
  *(_QWORD *)&v196[1] = v198;
  LODWORD(v196[2]) = 512;
  v196[0] = ImagePathName;
  *((_QWORD *)&v196[2] + 1) = &ApplicationKeyOption;
  v65 = LdrpAllocateModuleEntry((__int64)v196);
  v66 = v65;
  if ( !v65 )
  {
    v38 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) == 0 )
      goto LABEL_177;
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      5008,
      "LdrpInitializeProcess",
      0,
      "Allocating a data table entry for the executable failed\n");
    goto LABEL_176;
  }
  LdrpImageEntry = (__int64)v65;
  v67 = 2LL;
  do
  {
    *(_DWORD *)(*(_QWORD *)(LdrpImageEntry + 152) + 24LL) = -1;
    --v67;
  }
  while ( v67 );
  *(_WORD *)(**(_QWORD **)(LdrpImageEntry + 152) - 52LL) = -1;
  v68 = LdrpImageEntry;
  *(_UNICODE_STRING *)(LdrpImageEntry + 72) = ImagePathName;
  v69 = *(_DWORD *)(v68 + 104) | 4;
  *(_DWORD *)(v68 + 104) = v69;
  v70 = v155;
  if ( UseCOR )
  {
    v71 = v69 | 0x400000;
    *(_DWORD *)(v68 + 104) = v71;
    if ( v70 )
      *(_DWORD *)(v68 + 104) = v71 | 0x1000000;
  }
  if ( (*(_BYTE *)(ProcessEnvironmentBlock + 3) & 4) != 0 )
    *(_QWORD *)(v68 + 248) = 0LL;
  v72 = 0LL;
  v73 = (wchar_t *)((char *)ImagePathName.Buffer + ImagePathName.Length);
  v74 = v73;
  if ( v73 && v73 > ImagePathName.Buffer )
  {
    while ( 1 )
    {
      v75 = v74--;
      if ( *v74 == 92 )
        break;
      if ( v74 <= ImagePathName.Buffer )
        goto LABEL_192;
    }
    v72 = v75;
  }
LABEL_192:
  if ( v72 )
  {
    v76 = (_WORD)v73 - (_WORD)v72;
    *(_WORD *)(v68 + 88) = v76;
    if ( ImagePathName.MaximumLength - (unsigned __int64)ImagePathName.Length >= 2 )
      v76 += 2;
    *(_WORD *)(v68 + 90) = v76;
    *(_QWORD *)(v68 + 96) = v72;
  }
  else
  {
    *(_OWORD *)(v68 + 88) = *(_OWORD *)(v66 + 72);
  }
  v77 = *(void **)(ProcessEnvironmentBlock + 16);
  v78 = v77;
  if ( (void *)OutHeaders->OptionalHeader.ImageBase != v77 && !v70 && !UseWOW64 )
  {
    inited = LdrpProtectAndRelocateImage(v77);
    ApplicationKeyOption = inited;
    if ( inited < 0 )
      return (unsigned int)inited;
    v78 = *(void **)(ProcessEnvironmentBlock + 16);
    v68 = LdrpImageEntry;
  }
  *(_QWORD *)(v68 + 48) = v78;
  LdrpInsertDataTableEntry(v68);
  if ( (LdrpDebugFlags & 5) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      5128,
      "LdrpInitializeProcess",
      2,
      "Beginning execution of %wZ (%wZ)\n\tCurrent directory: %wZ\n\tPackage directories: %wZ\n",
      LdrpImageEntry + 88,
      LdrpImageEntry + 72,
      &UnicodeString,
      &LdrpAppPackagesPath);
  LdrpLogDllState(*(_QWORD *)(LdrpImageEntry + 48), LdrpImageEntry + 72, 0x14A5u);
  LdrpInsertModuleToIndex(LdrpImageEntry, (__int64)OutHeaders);
  inited = LdrpProcessMappedModule(LdrpImageEntry, 0, UseWOW64 == 0, v196);
  ApplicationKeyOption = inited;
  if ( inited < 0 )
    return (unsigned int)inited;
  *(_DWORD *)(*(_QWORD *)(LdrpImageEntry + 152) + 56LL) = 9;
  v79 = RtlpInitCurrentDir(&UnicodeString.Length);
  ApplicationKeyOption = v79;
  if ( v79 < 0 )
  {
    v80 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      LODWORD(v149) = v79;
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        5165,
        "LdrpInitializeProcess",
        0,
        "Initializing the current directory to \"%wZ\" failed with status 0x%08lx\n",
        &UnicodeString,
        v149);
      v80 = LdrpDebugFlags;
    }
    if ( (v80 & 0x10) != 0 )
      __debugbreak();
  }
  if ( !v156 )
    RtlFreeAnsiString(&UnicodeString);
  if ( AvrfAppVerifierMode )
  {
    v81 = LdrpAllocateModuleEntry(0LL);
    v82 = (__int64)v81;
    if ( !v81 )
    {
      v38 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) == 0 )
      {
LABEL_177:
        if ( (v38 & 0x10) != 0 )
          __debugbreak();
        return 3221225495LL;
      }
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        5188,
        "LdrpInitializeProcess",
        0,
        "Allocating a data table entry for the application verifier DLL failed\n");
LABEL_176:
      v38 = LdrpDebugFlags;
      goto LABEL_177;
    }
    *(_DWORD *)(*((_QWORD *)v81 + 19) + 24LL) = -1;
    *(_WORD *)(**((_QWORD **)v81 + 19) - 52LL) = -1;
    *((_DWORD *)v81 + 26) |= *(_DWORD *)(v157 + 104);
    *((_QWORD *)v81 + 31) = *(_QWORD *)(v157 + 248);
    *((_WORD *)v81 + 55) = 0;
    *(_OWORD *)(v81 + 72) = *(_OWORD *)(v157 + 72);
    *(_OWORD *)(v81 + 88) = *(_OWORD *)(v157 + 88);
    *((_DWORD *)v81 + 32) = *(_DWORD *)(v157 + 128);
    *((_QWORD *)v81 + 6) = *(_QWORD *)(v157 + 48);
    LdrpInsertDataTableEntry((__int64)v81);
    LdrpLogDllState(*(_QWORD *)(v82 + 48), v82 + 72, 0x14A5u);
    inited = RtlImageNtHeaderEx(3u, *(PVOID *)(v82 + 48), 0LL, &v175);
    ApplicationKeyOption = inited;
    if ( inited < 0 )
      return (unsigned int)inited;
    LdrpInsertModuleToIndex(v82, (__int64)v175);
    inited = LdrpProcessMappedModule(v82, 0, 1);
    ApplicationKeyOption = inited;
    if ( inited < 0 )
      return (unsigned int)inited;
    *(_QWORD *)(v82 + 56) = *(_QWORD *)(v157 + 56);
    LdrpLogDllState(*(_QWORD *)(v82 + 48), v82 + 72, 0x14ADu);
    *(_DWORD *)(*(_QWORD *)(v82 + 152) + 56LL) = 7;
    if ( (*(_DWORD *)(ProcessEnvironmentBlock + 188) & 0x100) != 0 || (AvrfAppVerifierMode & 2) != 0 )
    {
      inited = AVrfInitializeVerifier(0, 0, 0, 1, (__int64)BaseOfImage, 0LL);
      ApplicationKeyOption = inited;
      if ( inited >= 0 && (AvrfAppVerifierMode & 2) != 0 )
      {
        *(_DWORD *)(*(_QWORD *)(v82 + 152) + 56LL) = 9;
        inited = ApplicationKeyOption;
      }
    }
    else
    {
      v152 = 0;
      inited = LdrpInitializeGraphRecurse(*(_QWORD *)(v82 + 152), 0LL, &v152);
      ApplicationKeyOption = inited;
    }
    if ( inited < 0 )
      return (unsigned int)inited;
  }
  LdrpDropLastInProgressCount();
  if ( !UseWOW64 )
  {
    v180 = 0LL;
    if ( UseCOR )
    {
      inited = LdrpCorInitialize((PVOID *)&v180);
      ApplicationKeyOption = inited;
      if ( inited < 0 )
        return (unsigned int)inited;
      v83 = v155;
      if ( (_BYTE)v155 )
      {
        inited = LdrpCorValidateImage(*(_QWORD *)(ProcessEnvironmentBlock + 16));
        ApplicationKeyOption = inited;
        if ( inited < 0 )
          return (unsigned int)inited;
      }
      if ( (v179->SameTebFlags & 0x400) != 0 )
        *(_QWORD *)(v177 + 128) = __ROR8__(LdrpCorExeMainRoutine, 64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330];
    }
    else
    {
      v83 = v155;
    }
    inited = LdrpInitializeTls();
    ApplicationKeyOption = inited;
    if ( inited < 0 )
    {
      v21 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) == 0 )
        goto LABEL_308;
      v49 = "Initializing TLS slots failed with status 0x%08lx\n";
      v50 = 5415;
      goto LABEL_306;
    }
    if ( v180 )
    {
      v153 = 0;
      inited = LdrpInitializeGraphRecurse(v180[19], 0LL, &v153);
      ApplicationKeyOption = inited;
      if ( inited < 0 )
      {
        v21 = LdrpDebugFlags;
        if ( (LdrpDebugFlags & 3) == 0 )
          goto LABEL_308;
        v49 = "DllMain of MSCOREE (or its dependents) failed with status 0x%08lx\n";
        v50 = 5434;
        goto LABEL_306;
      }
    }
    inited = LdrpInitializeImportRedirection();
    ApplicationKeyOption = inited;
    if ( inited < 0 )
    {
      v21 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) == 0 )
        goto LABEL_308;
      v49 = "Loading of import redirection module failed with status 0x%08x\n";
      v50 = 5450;
      goto LABEL_306;
    }
    ProcedureAddress = 0LL;
    if ( (unsigned __int16)(OutHeaders->OptionalHeader.Subsystem - 2) > 1u )
    {
LABEL_281:
      LdrpDrainWorkQueue(0);
      SbObtainTraceHandle(0LL);
      v85 = v181;
      if ( v181 && *(_DWORD *)(v181 + 528) )
      {
        *(_QWORD *)(ProcessEnvironmentBlock + 736) = 0LL;
        LdrpInitShimEngine(v85);
      }
      v86 = RtlpForceCSDebugInfoCreation;
      if ( (NtCurrentPeb()->AppCompatFlags.LowPart & 0x400000) != 0 )
        v86 = 1;
      RtlpForceCSDebugInfoCreation = v86;
      if ( (NtCurrentPeb()->AppCompatFlags.LowPart & 0x10000000) != 0 )
      {
        *(_DWORD *)(v40 + 1036) = 1;
        v87 = 1;
      }
      else
      {
        v87 = *(_DWORD *)(v40 + 1036);
      }
      LdrpEnableParallelLoading(v87);
      LdrInitState = 1;
      *(_DWORD *)(*(_QWORD *)(LdrpImageEntry + 152) + 56LL) = 2;
      **((_DWORD **)&v196[2] + 1) = 0;
      if ( v83 )
      {
        v88 = LdrpCorProcessImports(LdrpImageEntry);
      }
      else
      {
        LODWORD(v196[2]) |= 1u;
        LdrpMapAndSnapDependency((__int64)v196);
        LdrpDrainWorkQueue(1);
        inited = ApplicationKeyOption;
        if ( ApplicationKeyOption < 0 )
        {
LABEL_296:
          v21 = LdrpDebugFlags;
          if ( (LdrpDebugFlags & 3) == 0 )
            goto LABEL_308;
          v49 = "Walking the import tables of the executable and its static imports failed with status 0x%08lx\n";
          v50 = 5846;
          goto LABEL_306;
        }
        v88 = LdrpPrepareModuleForExecution(LdrpImageEntry, *((__int64 *)&v196[2] + 1));
      }
      ApplicationKeyOption = v88;
      inited = v88;
      if ( v88 < 0 )
        goto LABEL_296;
      LdrInitState = 2;
      VmInformation = 1;
      VirtualAddresses.VirtualAddress = *(PVOID *)(LdrpImageEntry + 48);
      VirtualAddresses.NumberOfBytes = 4096LL;
      ZwSetInformationVirtualMemory(
        (HANDLE)0xFFFFFFFFFFFFFFFFLL,
        VmImageHotPatchInformation,
        1uLL,
        &VirtualAddresses,
        &VmInformation,
        4u);
      if ( *(_BYTE *)(ProcessEnvironmentBlock + 2) )
        LdrpDoDebuggerBreak();
      LdrpDropLastInProgressCount();
      if ( Kernel32ThreadInitThunkFunction )
      {
        inited = _guard_dispatch_icall_fptr();
        ApplicationKeyOption = inited;
        if ( inited < 0 )
          return (unsigned int)inited;
        inited = LdrpInitializePerUserWindowsDirectory((__int64 (__fastcall *)(_BYTE *, __int64))ProcedureAddress);
        ApplicationKeyOption = inited;
        if ( inited < 0 )
          return (unsigned int)inited;
      }
      LdrpProcessInitContextRecord = v177;
      LdrpDrainWorkQueue(0);
      LdrpAcquireLoaderLock();
      v154[0] = 0;
      ApplicationKeyOption = LdrpInitializeGraphRecurse(
                               *(_QWORD *)(LdrpImageEntry + 152),
                               *((__int64 *)&v196[2] + 1),
                               v154);
      LdrpReleaseLoaderLock(0LL, 9, ApplicationKeyOption);
      LdrpFreeLoadContextOfNode(*(_QWORD **)(LdrpImageEntry + 152), *((__int64 *)&v196[2] + 1));
      LdrpDropLastInProgressCount();
      LdrpProcessInitContextRecord = 0LL;
      LdrpReleaseDllPath((__int64)v198);
      inited = ApplicationKeyOption;
      if ( ApplicationKeyOption < 0 )
      {
        v21 = LdrpDebugFlags;
        if ( (LdrpDebugFlags & 3) == 0 )
          goto LABEL_308;
        v49 = "Running the init routines of the executable's static imports failed with status 0x%08lx\n";
        v50 = 5988;
        goto LABEL_306;
      }
      if ( *(_WORD *)(LdrpImageEntry + 110) )
      {
        v193 = 72LL;
        v194 = 1;
        memset(v195, 0, sizeof(v195));
        RtlActivateActivationContextUnsafeFast((__int64)&v193, *(_QWORD *)(LdrpImageEntry + 136));
        LdrpCallTlsInitializers(1, LdrpImageEntry);
        RtlDeactivateActivationContextUnsafeFast((__int64)&v193);
      }
      if ( !g_ShimsEnabled
        || (RtlDecodeSystemPointer(g_pfnSE_InstallAfterInit), (unsigned __int8)_guard_dispatch_icall_fptr()) )
      {
LABEL_401:
        if ( *(_QWORD *)(ProcessEnvironmentBlock + 560) )
          _guard_dispatch_icall_fptr();
        goto LABEL_403;
      }
      g_ShimsEnabled = 0;
      v89 = g_pShimEngineModule;
      if ( byte_180165408 )
        goto LABEL_400;
      v90 = 0LL;
      if ( g_pShimEngineModule )
      {
        if ( g_pShimEngineModule == (PVOID)LdrpSystemDllBase )
        {
          v90 = LdrpNtDllDataTableEntry;
          v171 = *(_DWORD *)(*(_QWORD *)(LdrpNtDllDataTableEntry + 152) + 56LL);
        }
        else
        {
          RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
          Root = (unsigned __int64)LdrpModuleBaseAddressIndex.Root;
          if ( (*(_BYTE *)&LdrpModuleBaseAddressIndex.0 & 1) != 0 )
          {
            if ( LdrpModuleBaseAddressIndex.Root )
              Root = (unsigned __int64)&LdrpModuleBaseAddressIndex ^ (unsigned __int64)LdrpModuleBaseAddressIndex.Root;
            else
              Root = 0LL;
          }
          while ( Root )
          {
            v103 = *(_QWORD *)(Root - 152);
            if ( (unsigned __int64)v89 < v103 )
            {
              v104 = *(_QWORD *)Root;
            }
            else
            {
              if ( (unsigned __int64)v89 <= v103 )
                break;
              v104 = *(_QWORD *)(Root + 8);
            }
            if ( (*(_BYTE *)&LdrpModuleBaseAddressIndex.0 & 1) != 0 && v104 )
              Root ^= v104;
            else
              Root = v104;
          }
          if ( Root )
          {
            v90 = Root - 200;
            v105 = *(_QWORD *)(Root - 200 + 152);
            if ( *(_DWORD *)(v105 + 24) == -1 || (v106 = 0, (*(_BYTE *)(*(_QWORD *)v105 - 56LL) & 0x20) != 0) )
              v106 = 1;
            if ( !v106 )
            {
              _InterlockedAdd((volatile signed __int32 *)(v90 + 276), 1u);
              v105 = *(_QWORD *)(v90 + 152);
            }
            v171 = *(_DWORD *)(v105 + 56);
          }
          v107 = _InterlockedCompareExchange64((volatile signed __int64 *)&LdrpModuleDatatableLock, 0LL, 1LL);
          if ( v107 != 1 )
          {
            do
            {
              v108 = v107 & 6;
              v109 = 3LL;
              if ( v108 != 2 )
                v109 = -1LL;
              v110 = v107 + v109;
              v111 = v107;
              v107 = _InterlockedCompareExchange64((volatile signed __int64 *)&LdrpModuleDatatableLock, v110, v107);
            }
            while ( v111 != v107 );
            if ( v108 == 2 )
              RtlpWakeSRWLock((volatile signed __int64 *)&LdrpModuleDatatableLock, v110, 0);
          }
        }
      }
      v192[3] = v90;
      if ( !v90 )
      {
LABEL_400:
        g_pShimEngineModule = 0LL;
        goto LABEL_401;
      }
      if ( *(_DWORD *)(*(_QWORD *)(v90 + 152) + 24LL) == 1 )
      {
        v101 = 2147353476LL;
        v115 = 2147353477LL;
      }
      else
      {
        RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
        v91 = *(_QWORD *)(v90 + 152);
        v156 = LdrpDecrementNodeLoadCountLockHeld(v91, 1, &v172);
        v94 = _InterlockedCompareExchange64((volatile signed __int64 *)&LdrpModuleDatatableLock, 0LL, 1LL);
        if ( v94 != 1 )
        {
          do
          {
            v95 = v94 & 6;
            v96 = 3LL;
            if ( v95 != 2 )
              v96 = -1LL;
            v97 = v94 + v96;
            v98 = v94;
            v94 = _InterlockedCompareExchange64((volatile signed __int64 *)&LdrpModuleDatatableLock, v97, v94);
          }
          while ( v98 != v94 );
          if ( v95 == 2 )
            RtlpWakeSRWLock((volatile signed __int64 *)&LdrpModuleDatatableLock, v97, 0);
        }
        if ( v172 )
        {
          SharedData = NtCurrentPeb()->SharedData;
          if ( SharedData && *SharedData )
          {
            v100 = (__int64)NtCurrentPeb()->SharedData + 554;
            v101 = 2147353476LL;
          }
          else
          {
            v101 = 2147353476LL;
            v100 = 2147353476LL;
          }
          v112 = 0LL;
          if ( *(_BYTE *)v100 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
          {
            v113 = NtCurrentPeb()->SharedData;
            if ( v113 && *v113 )
            {
              v114 = (__int64)NtCurrentPeb()->SharedData + 555;
              v115 = 2147353477LL;
            }
            else
            {
              v115 = 2147353477LL;
              v114 = 2147353477LL;
            }
            if ( (*(_BYTE *)v114 & 0x20) != 0 )
              LdrpLogEtwEvent(5248, -1LL, -1, -1, 0LL, 0LL);
          }
          else
          {
            v115 = 2147353477LL;
          }
          v116 = NtCurrentTeb();
          if ( _interlockedbittestandreset(&LdrpLoaderLock.LockCount, 0) )
          {
            LdrpLoaderLock.OwningThread = v116->ClientId.UniqueThread;
            LdrpLoaderLock.RecursionCount = 1;
          }
          else if ( LdrpLoaderLock.OwningThread == v116->ClientId.UniqueThread )
          {
            ++LdrpLoaderLock.RecursionCount;
          }
          else
          {
            RtlpEnterCriticalSectionContended((__int64)&LdrpLoaderLock, v112, v92, v93);
          }
          v117 = NtCurrentPeb()->SharedData;
          if ( v117 && *v117 )
            v118 = (__int64)NtCurrentPeb()->SharedData + 554;
          else
            v118 = 2147353476LL;
          if ( *(_BYTE *)v118 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
          {
            v119 = NtCurrentPeb()->SharedData;
            if ( v119 && *v119 )
              v120 = (__int64)NtCurrentPeb()->SharedData + 555;
            else
              v120 = 2147353477LL;
            if ( (*(_BYTE *)v120 & 0x20) != 0 )
              LdrpLogEtwEvent(5249, -1LL, -1, -1, 0LL, 0LL);
          }
          LdrpUnloadNode(v91);
          RtlLeaveCriticalSection(&LdrpLoaderLock);
          v121 = NtCurrentPeb()->SharedData;
          if ( v121 && *v121 )
            v122 = (__int64)NtCurrentPeb()->SharedData + 554;
          else
            v122 = 2147353476LL;
          if ( *(_BYTE *)v122 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
          {
            v123 = NtCurrentPeb()->SharedData;
            if ( v123 && *v123 )
              v124 = (__int64)NtCurrentPeb()->SharedData + 555;
            else
              v124 = 2147353477LL;
            if ( (*(_BYTE *)v124 & 0x20) != 0 )
              LdrpLogEtwEvent(5282, 0LL, 0, 8, 0LL, 0LL);
          }
        }
        else
        {
          v101 = 2147353476LL;
          v115 = 2147353477LL;
        }
        if ( v156 != -1073741267 )
          goto LABEL_399;
      }
      v125 = NtCurrentTeb()->SameTebFlags & 0x1000;
      if ( !v125 )
        LdrpDrainWorkQueue(0);
      RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
      v174 = *(_QWORD *)(v90 + 152);
      LdrpDecrementNodeLoadCountLockHeld(v174, 0, &v173);
      v128 = 0LL;
      v129 = _InterlockedCompareExchange64((volatile signed __int64 *)&LdrpModuleDatatableLock, 0LL, 1LL);
      if ( v129 != 1 )
      {
        v127 = 6LL;
        do
        {
          v130 = v129 & 6;
          v131 = 3LL;
          if ( v130 != 2 )
            v131 = -1LL;
          v126 = v129 + v131;
          v132 = v129;
          v129 = _InterlockedCompareExchange64((volatile signed __int64 *)&LdrpModuleDatatableLock, v126, v129);
        }
        while ( v132 != v129 );
        v128 = 0LL;
        if ( v130 == 2 )
        {
          RtlpWakeSRWLock((volatile signed __int64 *)&LdrpModuleDatatableLock, v126, 0);
          v128 = 0LL;
        }
      }
      if ( v173 )
      {
        v133 = NtCurrentPeb()->SharedData;
        if ( v133 && *v133 )
          v134 = (__int64)NtCurrentPeb()->SharedData + 554;
        else
          v134 = 2147353476LL;
        if ( *(_BYTE *)v134 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
        {
          v135 = NtCurrentPeb()->SharedData;
          if ( v135 && *v135 )
            v136 = (__int64)NtCurrentPeb()->SharedData + 555;
          else
            v136 = 2147353477LL;
          if ( (*(_BYTE *)v136 & 0x20) != 0 )
            LdrpLogEtwEvent(5248, -1LL, -1, -1, 0LL, 0LL);
        }
        v137 = NtCurrentTeb();
        if ( _interlockedbittestandreset(&LdrpLoaderLock.LockCount, 0) )
        {
          LdrpLoaderLock.OwningThread = v137->ClientId.UniqueThread;
          LdrpLoaderLock.RecursionCount = 1;
        }
        else if ( LdrpLoaderLock.OwningThread == v137->ClientId.UniqueThread )
        {
          ++LdrpLoaderLock.RecursionCount;
        }
        else
        {
          RtlpEnterCriticalSectionContended((__int64)&LdrpLoaderLock, v126, v127, v128);
        }
        v138 = NtCurrentPeb()->SharedData;
        if ( v138 && *v138 )
          v139 = (__int64)NtCurrentPeb()->SharedData + 554;
        else
          v139 = 2147353476LL;
        if ( *(_BYTE *)v139 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
        {
          v140 = NtCurrentPeb()->SharedData;
          if ( v140 && *v140 )
            v141 = (__int64)NtCurrentPeb()->SharedData + 555;
          else
            v141 = 2147353477LL;
          if ( (*(_BYTE *)v141 & 0x20) != 0 )
            LdrpLogEtwEvent(5249, -1LL, -1, -1, 0LL, 0LL);
        }
        LdrpUnloadNode(v174);
        RtlLeaveCriticalSection(&LdrpLoaderLock);
        v142 = NtCurrentPeb()->SharedData;
        if ( v142 && *v142 )
          v101 = (__int64)NtCurrentPeb()->SharedData + 554;
        if ( *(_BYTE *)v101 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
        {
          v143 = NtCurrentPeb()->SharedData;
          if ( v143 && *v143 )
            v115 = (__int64)NtCurrentPeb()->SharedData + 555;
          if ( (*(_BYTE *)v115 & 0x20) != 0 )
            LdrpLogEtwEvent(5282, 0LL, 0, 8, 0LL, 0LL);
        }
      }
      if ( !v125 )
      {
        v144 = NtCurrentTeb();
        v144->SameTebFlags &= ~0x1000u;
        v145 = NtCurrentTeb();
        if ( _interlockedbittestandreset(&LdrpWorkQueueLock.LockCount, 0) )
        {
          LdrpWorkQueueLock.OwningThread = v145->ClientId.UniqueThread;
          LdrpWorkQueueLock.RecursionCount = 1;
        }
        else if ( LdrpWorkQueueLock.OwningThread == v145->ClientId.UniqueThread )
        {
          ++LdrpWorkQueueLock.RecursionCount;
        }
        else
        {
          RtlpEnterCriticalSectionContended((__int64)&LdrpWorkQueueLock, v126, v127, v128);
        }
        LdrpWorkInProgress = 0;
        RtlLeaveCriticalSection(&LdrpWorkQueueLock);
        ZwSetEvent(LdrpLoadCompleteEvent, 0LL);
      }
LABEL_399:
      LdrpDereferenceModule((char *)v90);
      goto LABEL_400;
    }
    inited = LdrLoadDll((PWSTR)0x4001, 0LL, (PUNICODE_STRING)&LdrpKernel32DllName, &DllHandle);
    ApplicationKeyOption = inited;
    if ( inited < 0 )
    {
      if ( inited != -1073741515 )
      {
        v21 = LdrpDebugFlags;
        if ( (LdrpDebugFlags & 3) == 0 )
          goto LABEL_308;
        LODWORD(v149) = inited;
        ReturnedLengthb = &LdrpKernel32DllName;
        v45 = "Loading Windows subsystem DLL \"%wZ\" failed with status 0x%08lx\n";
        v46 = 5608;
        goto LABEL_268;
      }
      inited = LdrLoadDll((PWSTR)0x4001, 0LL, (PUNICODE_STRING)&LdrpKernelbaseDllName, &DllHandle);
      ApplicationKeyOption = inited;
      if ( inited < 0 )
      {
        v21 = LdrpDebugFlags;
        if ( (LdrpDebugFlags & 3) == 0 )
          goto LABEL_308;
        v45 = "Loading Windows subsystem DLL \"%wZ\" failed with status 0x%08lx\n";
        v46 = 5581;
        goto LABEL_267;
      }
      inited = LdrpCodeAuthzInitialize();
      ApplicationKeyOption = inited;
      if ( (int)(inited + 0x80000000) >= 0 && inited != -1073741515 )
      {
        v21 = LdrpDebugFlags;
        if ( (LdrpDebugFlags & 3) == 0 )
          goto LABEL_308;
        v49 = "LdrpCodeAuthzInitialize failed with status 0x%08lx\n";
        v50 = 5597;
        goto LABEL_306;
      }
      ApplicationKeyOption = 0;
      v84 = DllHandle;
      goto LABEL_274;
    }
    inited = LdrGetProcedureAddress(DllHandle, (PANSI_STRING)&stru_180118B28, 0, &Kernel32ThreadInitThunkFunction);
    ApplicationKeyOption = inited;
    if ( inited < 0 )
    {
      v21 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) == 0 )
        goto LABEL_308;
      LODWORD(v150) = inited;
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        5495,
        "LdrpInitializeProcess",
        0,
        "Locating procedure \"%Z\" in Windows subsystem DLL \"%wZ\" failed with status 0x%08lx\n",
        &stru_180118B28,
        &LdrpKernel32DllName,
        v150);
      goto LABEL_307;
    }
    LdrGetProcedureAddress(DllHandle, (PANSI_STRING)&stru_180118B38, 0, &ProcedureAddress);
    inited = LdrpSnapKernelBaseExtensions();
    ApplicationKeyOption = inited;
    if ( inited >= 0 )
    {
      inited = LdrpCodeAuthzInitialize();
      ApplicationKeyOption = inited;
      if ( inited >= 0 )
      {
        inited = LdrpFindLoadedDll((__int64)&LdrpKernelbaseDllName, 0LL, &v187);
        ApplicationKeyOption = inited;
        if ( inited < 0 )
        {
          v21 = LdrpDebugFlags;
          if ( (LdrpDebugFlags & 3) == 0 )
            goto LABEL_308;
          v45 = "Finding \"%wZ\" failed with status 0x%08lx\n";
          v46 = 5563;
LABEL_267:
          LODWORD(v149) = inited;
          ReturnedLengthb = &LdrpKernelbaseDllName;
LABEL_268:
          LdrpLogDbgPrint(
            (unsigned int)"minkernel\\ntdll\\ldrinit.c",
            v46,
            "LdrpInitializeProcess",
            0,
            v45,
            ReturnedLengthb,
            v149);
LABEL_307:
          inited = ApplicationKeyOption;
          v21 = LdrpDebugFlags;
LABEL_308:
          if ( (v21 & 0x10) != 0 )
            __debugbreak();
          return (unsigned int)inited;
        }
        v84 = (PVOID)*((_QWORD *)v187 + 6);
        DllHandle = v84;
LABEL_274:
        inited = LdrGetProcedureAddress(v84, (PANSI_STRING)&stru_180118B58, 0, &v188);
        ApplicationKeyOption = inited;
        if ( inited < 0 )
        {
          v21 = LdrpDebugFlags;
          if ( (LdrpDebugFlags & 3) == 0 )
            goto LABEL_308;
          v49 = "Finding KernelbasePostInit failed with status 0x%08lx\n";
          v50 = 5626;
          goto LABEL_306;
        }
        inited = _guard_dispatch_icall_fptr();
        ApplicationKeyOption = inited;
        if ( inited < 0 )
        {
          v21 = LdrpDebugFlags;
          if ( (LdrpDebugFlags & 3) == 0 )
            goto LABEL_308;
          v49 = "Calling KernelbasePostInit failed with status 0x%08lx\n";
          v50 = 5634;
          goto LABEL_306;
        }
        ApplicationKeyOption = 0;
        goto LABEL_281;
      }
    }
    return (unsigned int)inited;
  }
  if ( Handle )
  {
    NtClose(Handle);
    Handle = 0LL;
    if ( LdrpLargePageDllKeyHandle )
    {
      NtClose(LdrpLargePageDllKeyHandle);
      LdrpLargePageDllKeyHandle = 0LL;
    }
  }
  if ( v164 )
  {
    NtClose(v164);
    v164 = 0LL;
  }
  inited = LdrpLoadWow64(&Destination);
  ApplicationKeyOption = inited;
  if ( inited < 0 )
    return (unsigned int)inited;
  if ( *(_BYTE *)(ProcessEnvironmentBlock + 2) )
    LdrpDoDebuggerBreak();
  LdrInitState = 3;
  _interlockedbittestandreset((volatile signed __int32 *)(ProcessEnvironmentBlock + 80), 1u);
  Wow64LdrpInitialize(v177);
LABEL_403:
  if ( Handle )
    NtClose(Handle);
  if ( v164 )
    NtClose(v164);
  return 0LL;
}
