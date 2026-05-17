/*
 * XREFs of LdrpInitializeProcess @ 0x1800D3FB4
 * Callers:
 *     _LdrpInitialize @ 0x18007874C (_LdrpInitialize.c)
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
 *     RtlpWakeSRWLock @ 0x180075250 (RtlpWakeSRWLock.c)
 *     RtlpInitializeThreadActivationContextStack @ 0x1800765A8 (RtlpInitializeThreadActivationContextStack.c)
 *     LdrpDropLastInProgressCount @ 0x180079EDC (LdrpDropLastInProgressCount.c)
 *     RtlpInitCurrentDir @ 0x18007BBB4 (RtlpInitCurrentDir.c)
 *     RtlSetHeapInformation @ 0x18007E690 (RtlSetHeapInformation.c)
 *     RtlQueryApplicationKeyOption @ 0x18007EB3C (RtlQueryApplicationKeyOption.c)
 *     LdrQueryImageFileExecutionOptions @ 0x18007EBE0 (LdrQueryImageFileExecutionOptions.c)
 *     LdrpCodeAuthzInitialize @ 0x18007FC08 (LdrpCodeAuthzInitialize.c)
 *     RtlpInitParameterBlock @ 0x180081230 (RtlpInitParameterBlock.c)
 *     SbObtainTraceHandle @ 0x1800826D0 (SbObtainTraceHandle.c)
 *     RtlImageDirectoryEntryToData @ 0x180082ED0 (RtlImageDirectoryEntryToData.c)
 *     LdrGetProcedureAddress @ 0x1800830A0 (LdrGetProcedureAddress.c)
 *     RtlSetUnhandledExceptionFilter @ 0x1800833C0 (RtlSetUnhandledExceptionFilter.c)
 *     LdrpInitializePolicy @ 0x1800833F8 (LdrpInitializePolicy.c)
 *     LdrpInsertModuleToIndex @ 0x1800836E0 (LdrpInsertModuleToIndex.c)
 *     RtlInitializeHeapLogging @ 0x180084D28 (RtlInitializeHeapLogging.c)
 *     LdrpInitializeImportRedirection @ 0x180084E3C (LdrpInitializeImportRedirection.c)
 *     LdrpInitializePerUserWindowsDirectory @ 0x180085AC4 (LdrpInitializePerUserWindowsDirectory.c)
 *     RtlDecodeSystemPointer @ 0x180086300 (RtlDecodeSystemPointer.c)
 *     LdrpCheckPolicy @ 0x180086328 (LdrpCheckPolicy.c)
 *     LdrpLoadWow64 @ 0x1800869A0 (LdrpLoadWow64.c)
 *     LdrpProtectAndRelocateImage @ 0x1800873A4 (LdrpProtectAndRelocateImage.c)
 *     LdrpCorProcessImports @ 0x180087A14 (LdrpCorProcessImports.c)
 *     LdrpCorValidateImage @ 0x180088064 (LdrpCorValidateImage.c)
 *     Wow64LdrpInitialize @ 0x1800890EC (Wow64LdrpInitialize.c)
 *     RtlNormalizeProcessParams @ 0x18008D890 (RtlNormalizeProcessParams.c)
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 *     RtlRaiseStatus @ 0x18009F6A0 (RtlRaiseStatus.c)
 *     ZwSetEvent @ 0x1800A04A0 (ZwSetEvent.c)
 *     NtClose @ 0x1800A04C0 (NtClose.c)
 *     NtQuerySystemInformation @ 0x1800A09A0 (NtQuerySystemInformation.c)
 *     ZwOpenDirectoryObject @ 0x1800A0DE0 (ZwOpenDirectoryObject.c)
 *     ZwOpenSymbolicLinkObject @ 0x1800A27B0 (ZwOpenSymbolicLinkObject.c)
 *     NtQuerySymbolicLinkObject @ 0x1800A2DB0 (NtQuerySymbolicLinkObject.c)
 *     ZwSetInformationVirtualMemory @ 0x1800A35B0 (ZwSetInformationVirtualMemory.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3CE0 (_guard_dispatch_icall_nop.c)
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

__int64 __fastcall LdrpInitializeProcess(__int64 a1, __int64 a2)
{
  int v2; // r12d
  struct _TEB *v4; // r13
  __int64 ProcessEnvironmentBlock; // r15
  int v6; // eax
  bool v7; // cc
  int v8; // eax
  __int64 v9; // rcx
  _WORD *v10; // rdx
  unsigned __int16 v11; // r8
  char v12; // al
  _QWORD *v14; // rax
  __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  unsigned __int64 *v17; // r8
  __int64 v18; // r9
  unsigned __int64 v19; // rax
  bool v20; // zf
  char v21; // al
  int v22; // r14d
  int inited; // ecx
  char v24; // al
  int WowTebOffset; // ecx
  __int64 v26; // rax
  unsigned int *Config; // rax
  unsigned int *v28; // r14
  int v29; // r12d
  unsigned int v30; // eax
  unsigned int v31; // ecx
  unsigned int v32; // ecx
  __int64 v33; // rax
  char v34; // al
  char v35; // al
  unsigned __int64 v36; // r14
  unsigned __int64 *v37; // r8
  unsigned __int64 v38; // r9
  __int64 Heap; // rax
  void *v40; // r14
  char v41; // al
  __int64 v42; // rcx
  __int64 v43; // r13
  __int64 NtSystemRoot; // rax
  __int16 v45; // r12
  __int64 v46; // rax
  unsigned __int64 v47; // rdx
  unsigned __int64 *v48; // r8
  __int64 v49; // r9
  __int64 v50; // r12
  unsigned __int64 v51; // rdx
  unsigned __int64 *v52; // r8
  __int64 v53; // r9
  char *v54; // rax
  int v55; // edx
  int SymbolicLinkObject; // eax
  unsigned __int64 v57; // r13
  char *v58; // rax
  int v59; // edx
  __m128i v60; // xmm0
  wchar_t *v61; // xmm0_8
  __int64 v62; // rax
  wchar_t *Buffer; // rdx
  unsigned __int64 v64; // r14
  unsigned __int64 v65; // r12
  __int64 v66; // rdx
  __int64 v67; // r12
  unsigned __int64 ModuleEntry; // rax
  unsigned __int64 v69; // r14
  __int64 v70; // rcx
  __int64 v71; // rcx
  unsigned __int64 *v72; // r8
  __int64 v73; // r9
  _QWORD *v74; // rax
  __int64 v75; // rcx
  unsigned __int64 v76; // rax
  unsigned __int64 v77; // r11
  __int64 v78; // rdx
  __int64 v79; // rdx
  int v80; // eax
  char v81; // r14
  int v82; // eax
  _WORD *v83; // r9
  unsigned __int64 v84; // r8
  _WORD *v85; // rax
  _WORD *v86; // r10
  __int16 v87; // r8
  const void *v88; // rcx
  const void *v89; // r8
  unsigned __int64 *v90; // r8
  __int64 v91; // r9
  int v92; // eax
  char v93; // cl
  unsigned __int64 v94; // rax
  _QWORD *v95; // r14
  unsigned __int64 *v96; // r8
  __int64 v97; // r9
  char v98; // r12
  unsigned __int64 v99; // rcx
  __int64 v100; // r14
  char v101; // al
  unsigned int v102; // ecx
  int v103; // eax
  __int64 v104; // r8
  __int64 v105; // r9
  unsigned __int64 v106; // rdx
  __int64 v107; // r8
  __int64 v108; // r9
  unsigned __int64 v109; // rbx
  __int64 v110; // rsi
  __int64 v111; // r13
  signed __int64 v112; // rax
  signed __int64 v113; // rcx
  __int64 v114; // rdx
  signed __int64 v115; // rtt
  _DWORD *SharedData; // rcx
  __int64 v117; // rcx
  __int64 v118; // rdi
  unsigned __int64 v119; // rax
  __int64 v120; // rcx
  char v121; // al
  signed __int64 v122; // rax
  signed __int64 v123; // rcx
  __int64 v124; // rdx
  signed __int64 v125; // rtt
  __int64 v126; // rdx
  _DWORD *v127; // rcx
  __int64 v128; // rcx
  __int64 v129; // rbx
  struct _TEB *v130; // rcx
  _DWORD *v131; // rcx
  unsigned __int64 v132; // rdx
  __int64 v133; // rcx
  _DWORD *v134; // rcx
  __int64 v135; // rcx
  _DWORD *v136; // rcx
  __int64 v137; // rcx
  _DWORD *v138; // rcx
  __int64 v139; // rcx
  __int16 v140; // r13
  signed __int64 v141; // rdx
  __int64 v142; // r8
  __int64 v143; // r9
  signed __int64 v144; // rax
  signed __int64 v145; // rcx
  __int64 v146; // rdx
  signed __int64 v147; // rtt
  _DWORD *v148; // rcx
  __int64 v149; // rcx
  _DWORD *v150; // rcx
  __int64 v151; // rcx
  struct _TEB *v152; // rcx
  _DWORD *v153; // rcx
  unsigned __int64 v154; // rdx
  __int64 v155; // rcx
  _DWORD *v156; // rcx
  __int64 v157; // rcx
  _DWORD *v158; // rcx
  _DWORD *v159; // rcx
  struct _TEB *v160; // rax
  struct _TEB *v161; // rcx
  __int64 v162; // [rsp+28h] [rbp-420h]
  __int64 v163; // [rsp+28h] [rbp-420h]
  int *v164; // [rsp+28h] [rbp-420h]
  __int64 v165; // [rsp+30h] [rbp-418h]
  __int64 v166; // [rsp+38h] [rbp-410h]
  int ApplicationKeyOption; // [rsp+50h] [rbp-3F8h] BYREF
  char v168; // [rsp+54h] [rbp-3F4h] BYREF
  char v169; // [rsp+55h] [rbp-3F3h] BYREF
  char v170[2]; // [rsp+56h] [rbp-3F2h] BYREF
  int v171; // [rsp+58h] [rbp-3F0h]
  int v172; // [rsp+5Ch] [rbp-3ECh]
  __int64 v173; // [rsp+60h] [rbp-3E8h] BYREF
  unsigned __int64 v174; // [rsp+68h] [rbp-3E0h] BYREF
  __m128i v175; // [rsp+70h] [rbp-3D8h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+80h] [rbp-3C8h] BYREF
  unsigned int v177; // [rsp+90h] [rbp-3B8h] BYREF
  int v178; // [rsp+94h] [rbp-3B4h] BYREF
  unsigned __int64 v179; // [rsp+98h] [rbp-3B0h] BYREF
  HANDLE v180; // [rsp+A0h] [rbp-3A8h] BYREF
  unsigned __int16 v181; // [rsp+A8h] [rbp-3A0h] BYREF
  __int16 v182; // [rsp+AAh] [rbp-39Eh]
  unsigned __int64 v183; // [rsp+B0h] [rbp-398h]
  HANDLE v184; // [rsp+B8h] [rbp-390h] BYREF
  __int128 v185; // [rsp+C0h] [rbp-388h] BYREF
  __m128i v186; // [rsp+D0h] [rbp-378h] BYREF
  unsigned int v187; // [rsp+E0h] [rbp-368h]
  int v188; // [rsp+E4h] [rbp-364h]
  int v189; // [rsp+E8h] [rbp-360h]
  int v190; // [rsp+ECh] [rbp-35Ch] BYREF
  int v191; // [rsp+F0h] [rbp-358h] BYREF
  __int64 v192; // [rsp+F8h] [rbp-350h]
  unsigned __int64 v193; // [rsp+100h] [rbp-348h] BYREF
  __int64 v194; // [rsp+108h] [rbp-340h]
  __int64 v195; // [rsp+110h] [rbp-338h]
  UNICODE_STRING v196; // [rsp+120h] [rbp-328h] BYREF
  struct _TEB *v197; // [rsp+130h] [rbp-318h]
  __int64 v198; // [rsp+138h] [rbp-310h] BYREF
  __int64 v199; // [rsp+140h] [rbp-308h]
  __int64 (__fastcall *v200[2])(_BYTE *, __int64); // [rsp+148h] [rbp-300h] BYREF
  int v201; // [rsp+158h] [rbp-2F0h] BYREF
  const WCHAR *v202; // [rsp+160h] [rbp-2E8h]
  int v203; // [rsp+168h] [rbp-2E0h] BYREF
  __int64 v204; // [rsp+170h] [rbp-2D8h] BYREF
  __int64 v205; // [rsp+178h] [rbp-2D0h] BYREF
  __int64 SystemInformation; // [rsp+180h] [rbp-2C8h] BYREF
  int v207; // [rsp+188h] [rbp-2C0h]
  __int64 v208; // [rsp+190h] [rbp-2B8h]
  int *v209; // [rsp+198h] [rbp-2B0h]
  int v210; // [rsp+1A0h] [rbp-2A8h]
  __int128 v211; // [rsp+1A8h] [rbp-2A0h]
  __int64 v212; // [rsp+1B8h] [rbp-290h]
  __int64 v213; // [rsp+1C0h] [rbp-288h]
  _QWORD v214[5]; // [rsp+1C8h] [rbp-280h] BYREF
  __int64 v215; // [rsp+1F0h] [rbp-258h] BYREF
  int v216; // [rsp+1F8h] [rbp-250h]
  _BYTE v217[56]; // [rsp+200h] [rbp-248h] BYREF
  _OWORD v218[15]; // [rsp+240h] [rbp-208h] BYREF
  _QWORD v219[12]; // [rsp+330h] [rbp-118h] BYREF
  __int64 v220[16]; // [rsp+390h] [rbp-B8h] BYREF

  v194 = a2;
  v195 = a1;
  v201 = 1441812;
  v202 = L"\\KnownDlls";
  RtlSetUnhandledExceptionFilter(0LL);
  v4 = NtCurrentTeb();
  v197 = v4;
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
  LdrpInitializeNlsInfo((_QWORD *)ProcessEnvironmentBlock);
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
  v10 = (_WORD *)(*(_QWORD *)(v9 + 104) + v9);
  if ( (*(_BYTE *)(v9 + 8) & 1) != 0 )
    v10 = *(_WORD **)(v9 + 104);
  v183 = (unsigned __int64)v10;
  v181 = *(_WORD *)(v9 + 96);
  v11 = v181;
  v182 = v181 + 2;
  if ( v181 >= 8u && *v10 == 92 && v10[1] == 63 && v10[2] == 63 && v10[3] == 92 )
  {
    v181 -= 8;
    v182 = v11 - 6;
    v183 = (unsigned __int64)(v10 + 4);
    *(_WORD *)(v9 + 96) -= 8;
    *(_WORD *)(v9 + 98) -= 8;
    *(_QWORD *)(v9 + 104) += 8LL;
  }
  v172 = 1;
  UseCOR = 0;
  LOBYTE(v2) = 0;
  v171 = v2;
  v178 = 0;
  RtlImageNtHeaderEx(3, *(_QWORD *)(ProcessEnvironmentBlock + 16), 0LL, &v174);
  LdrpAppHeaders = v174;
  if ( LdrpIsSecureProcess && (*(_BYTE *)(v174 + 22) & 0x20) == 0 )
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
  LdrProtectMrdata(1, v16, v17, v18);
  LdrpOverrideExportSuppression();
  v218[12] = xmmword_180178390;
  v19 = (_mm_srli_si128((__m128i)xmmword_180178390, 8).m128i_u64[0] >> 4) & 3;
  LdrpEnforceIntegrityContinuity = (_BYTE)v19 == 1;
  if ( (_BYTE)v19 == 1 || (v218[13] = xmmword_180178390, v20 = (_BYTE)v19 == 3, v21 = 0, v20) )
    v21 = 1;
  LdrpAuditIntegrityContinuity = v21;
  v22 = 0;
  inited = LdrpInitializeExecutionOptions(&v181, ProcessEnvironmentBlock, a2, &v184, &v180, (__int64)&v173);
  ApplicationKeyOption = inited;
  if ( inited < 0 )
  {
    v24 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) == 0 )
      goto LABEL_308;
    LODWORD(v162) = v4->ClientId.UniqueProcess;
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      3926,
      "LdrpInitializeProcess",
      0,
      "Initializing the execution options for the process %lx failed with status 0x%08lx\n",
      v162,
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
  v199 = 0LL;
  WowTebOffset = v4->WowTebOffset;
  UseWOW64 = WowTebOffset > 0;
  if ( v174 )
  {
    if ( *(_WORD *)(v174 + 24) == 267 && WowTebOffset <= 0 )
    {
      UseCOR = 1;
      LOBYTE(v2) = 1;
      v171 = v2;
      v22 = 1;
      inited = LdrpCorFixupImage(*(_QWORD *)(ProcessEnvironmentBlock + 16));
      ApplicationKeyOption = inited;
      if ( inited < 0 )
        return (unsigned int)inited;
    }
  }
  if ( !UseWOW64 && !UseCOR )
  {
    v26 = RtlImageDirectoryEntryToData(*(_QWORD *)(ProcessEnvironmentBlock + 16), 1, 0xEu, &v203);
    if ( v26 )
    {
      UseCOR = 1;
      v2 = (unsigned __int8)v2;
      if ( (*(_BYTE *)(v26 + 16) & 1) != 0 )
        v2 = 1;
      v171 = v2;
    }
  }
  LdrpSystemDllBase = v194;
  if ( !UseWOW64 )
    v199 = *(_QWORD *)(ProcessEnvironmentBlock + 728);
  RtlpTimeout = *(LARGE_INTEGER *)(ProcessEnvironmentBlock + 192);
  v186 = *(__m128i *)(RtlNormalizeProcessParams(*(_QWORD *)(ProcessEnvironmentBlock + 32)) + 96);
  Config = 0LL;
  if ( !UseWOW64 && (!UseCOR || !v22) )
    Config = LdrImageDirectoryEntryToLoadConfig(*(_QWORD *)(ProcessEnvironmentBlock + 16));
  v28 = Config;
  memset(v219, 0, sizeof(v219));
  v29 = 2;
  LODWORD(v219[0]) = 96;
  if ( v28 )
  {
    v30 = *v28;
    if ( *v28 >= 0x10 )
    {
      *(_DWORD *)(ProcessEnvironmentBlock + 188) &= ~v28[3];
      v30 = *v28;
    }
    if ( v30 >= 0x14 )
    {
      *(_DWORD *)(ProcessEnvironmentBlock + 188) |= v28[4];
      v30 = *v28;
    }
    if ( v30 >= 0x18 && v28[5] )
    {
      RtlpTimeout.QuadPart = -10000LL * (int)v28[5];
      v30 = *v28;
    }
    if ( v30 >= 0x4C )
    {
      v31 = v28[18];
      if ( v31 )
      {
        v32 = v31 & 0xFFFF0FFF;
        if ( v32 )
          v29 = v32;
      }
    }
    if ( v30 >= 0x20 && *((_QWORD *)v28 + 3) )
    {
      v219[3] = *((_QWORD *)v28 + 3);
      v30 = *v28;
    }
    if ( v30 >= 0x28 && *((_QWORD *)v28 + 4) )
    {
      v219[4] = *((_QWORD *)v28 + 4);
      v30 = *v28;
    }
    if ( v30 >= 0x38 && *((_QWORD *)v28 + 6) )
    {
      v219[5] = *((_QWORD *)v28 + 6);
      v30 = *v28;
    }
    if ( v30 >= 0x40 )
    {
      v33 = v219[6];
      if ( *((_QWORD *)v28 + 7) )
        v33 = *((_QWORD *)v28 + 7);
      v219[6] = v33;
    }
  }
  if ( (*(_BYTE *)(ProcessEnvironmentBlock + 188) & 2) != 0 )
    LdrpDebugFlags |= 1u;
  v34 = RtlpTimeoutDisable;
  if ( RtlpTimeout.QuadPart < -36000000000LL )
    v34 = 1;
  RtlpTimeoutDisable = v34;
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
    RtlSetBits(*(_QWORD *)(ProcessEnvironmentBlock + 120), 0, 0x13u);
  RtlSetBits(*(_QWORD *)(ProcessEnvironmentBlock + 120), 4u, 1u);
  RtlSetBits(*(_QWORD *)(ProcessEnvironmentBlock + 120), 0x10u, 1u);
  if ( (*(_DWORD *)(ProcessEnvironmentBlock + 188) & 0x1000) != 0 || (v35 = LdrpShouldCreateStackTraceDb) != 0 )
  {
    v177 = 24;
    if ( (int)LdrQueryImageFileExecutionOptions((int)&v181, (int)L"StackTraceDatabaseSizeInMb", 4, (int)&v177, 4, 0LL) >= 0
      && v177 >= 0x18 )
    {
      if ( v177 <= 0x80 )
        v36 = v177 << 20;
      else
        v36 = 0x8000000LL;
    }
    else
    {
      v36 = 25165824LL;
    }
    if ( (LdrpDebugFlags & 5) != 0 )
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        4262,
        "LdrpInitializeProcess",
        2,
        "Stack trace database size is %Id Mb\n",
        v36 >> 20);
    v214[0] = 0LL;
    v214[1] = 0LL;
    v214[2] = v36;
    ApplicationKeyOption = RtlControlStackTraceDataBase(0LL, 24LL, v214);
    v35 = LdrpShouldCreateStackTraceDb;
  }
  if ( (*(_DWORD *)(ProcessEnvironmentBlock + 188) & 0x1000) != 0 || v35 )
    RtlpForceCSDebugInfoCreation = 1;
  if ( (NtCurrentPeb()->AppCompatFlags.LowPart & 0x400000) != 0 )
  {
    RtlpForceCSDebugInfoCreation = 1;
    RtlpForceCSToUseEvents = 1;
  }
  inited = RtlInitializeCriticalSection((__int64)&FastPebLock);
  ApplicationKeyOption = inited;
  if ( inited < 0 )
    return (unsigned int)inited;
  *(_QWORD *)(ProcessEnvironmentBlock + 56) = &FastPebLock;
  inited = RtlInitializeHeapManager(&v181);
  ApplicationKeyOption = inited;
  if ( inited < 0 )
    return (unsigned int)inited;
  v218[14] = xmmword_180178390;
  if ( (((unsigned __int64)xmmword_180178390 >> 12) & 3) == 1 )
    RtlSetHeapInformation(0LL, 1, 0LL, 0LL);
  if ( UseWOW64 || *(_WORD *)(v174 + 24) == 267 )
  {
    v37 = 0LL;
    v38 = 0LL;
  }
  else
  {
    if ( *(_WORD *)(v174 + 72) <= 3u && *(_WORD *)(v174 + 74) < 0x33u )
      v29 |= 0x10000u;
    v37 = *(unsigned __int64 **)(v174 + 112);
    v38 = *(_QWORD *)(v174 + 120);
  }
  Heap = RtlCreateHeap(v29, 0LL, v37, v38, 0LL, (__int64)v219);
  v40 = (void *)Heap;
  if ( !Heap )
  {
    v41 = LdrpDebugFlags;
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
  RtlpInitializeThreadActivationContextStack((__int64)v197);
  LdrpHeap = (__int64)v40;
  if ( ((unsigned __int8)&EtwpFreeRegistrationList & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  EtwpFreeRegistrationList = 0uLL;
  PrivateLoggerNotificationEntry = 0LL;
  ApplicationKeyOption = NtQuerySystemInformation((SYSTEM_INFORMATION_CLASS)197, &SystemInformation, 8u, 0LL);
  v42 = RtlpHypervisorSharedUserVa;
  if ( ApplicationKeyOption >= 0 )
    v42 = SystemInformation;
  RtlpHypervisorSharedUserVa = v42;
  NtdllBaseTag = RtlCreateTagHeap(v40, 0, (__int64)L"NTDLL!", L"!Process");
  inited = TpInitializePackage();
  ApplicationKeyOption = inited;
  if ( inited < 0 )
    return (unsigned int)inited;
  EtwEventRegister(&PrivateLoggerNotificationGuid, 0LL, 0LL, &g_hPrivLoggerNotificationProvider);
  EtwEventRegister(
    UserDiagnosticGuid,
    (__int64)UserDiagnosticProviderCallback,
    0LL,
    (unsigned __int64 *)&g_hUserDiagnosticProvider);
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
  v43 = *(_QWORD *)(ProcessEnvironmentBlock + 32);
  v192 = v43;
  v186 = *(__m128i *)(v43 + 96);
  v183 = _mm_srli_si128(v186, 8).m128i_u64[0];
  if ( v184 || v180 )
  {
    ApplicationKeyOption = RtlQueryApplicationKeyOption(
                             (__int64)v180,
                             (__int64)v184,
                             (__int64)L"DebugProcessHeapOnly",
                             4u,
                             (__int64)&v178,
                             4,
                             0,
                             0LL);
    if ( ApplicationKeyOption >= 0 && dword_18015F3E8 && v178 )
    {
      dword_18015F3E8 = 0;
      *(_DWORD *)RtlpDebugPageHeapTable &= ~0x400u;
    }
  }
  NtSystemRoot = RtlGetNtSystemRoot();
  RtlInitUnicodeStringEx((__int64)&v196, NtSystemRoot);
  v45 = v196.Length + 40;
  v46 = RtlAllocateHeap((__int64)v40, 0, (unsigned int)v196.Length + 38 + 2LL);
  if ( !v46 )
    return 3221225495LL;
  LOWORD(v185) = 0;
  WORD1(v185) = v45;
  *((_QWORD *)&v185 + 1) = v46;
  RtlAppendUnicodeStringToString((unsigned __int16 *)&v185, (__int16 *)&v196);
  RtlAppendUnicodeStringToString((unsigned __int16 *)&v185, SlashSystem32SlashString);
  if ( (*(_BYTE *)(ProcessEnvironmentBlock + 3) & 2) == 0 )
  {
    v50 = 48LL;
    v207 = 48;
    v208 = 0LL;
    v210 = 64;
    v209 = &v201;
    v211 = 0LL;
    LdrProtectMrdata(0, v47, v48, v49);
    ApplicationKeyOption = ZwOpenDirectoryObject();
    LdrProtectMrdata(1, v51, v52, v53);
    inited = ApplicationKeyOption;
    if ( ApplicationKeyOption >= 0 )
    {
      v207 = 48;
      v208 = LdrpKnownDllDirectoryHandle;
      v210 = 64;
      v209 = (int *)&unk_180118B18;
      v211 = 0LL;
      inited = ZwOpenSymbolicLinkObject();
      ApplicationKeyOption = inited;
      if ( inited >= 0 )
      {
        while ( 1 )
        {
          v57 = RtlAllocateHeap((__int64)v40, 0, v50);
          if ( !v57 )
            return 3221225495LL;
          LdrpKnownDllPath = 0;
          word_180164EF2 = v50;
          qword_180164EF8 = v57;
          SymbolicLinkObject = NtQuerySymbolicLinkObject();
          inited = SymbolicLinkObject;
          ApplicationKeyOption = SymbolicLinkObject;
          if ( SymbolicLinkObject >= 0 )
          {
            NtClose(v200[1]);
            v43 = v192;
            goto LABEL_140;
          }
          if ( SymbolicLinkObject != -1073741789 )
          {
            v24 = LdrpDebugFlags;
            if ( (LdrpDebugFlags & 3) == 0 )
              goto LABEL_308;
            v58 = "Querying the known DLL directory link object failed with status 0x%08lx\n";
            v59 = 4671;
            goto LABEL_306;
          }
          RtlFreeHeap((__int64)v40, 0, v57);
          v50 = v187;
        }
      }
      v24 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) == 0 )
        goto LABEL_308;
      LODWORD(v165) = inited;
      v164 = (int *)&unk_180118B18;
      v54 = "Failed to open %wZ with status 0x%08lx\n";
      v55 = 4636;
    }
    else
    {
      v24 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) == 0 )
        goto LABEL_308;
      LODWORD(v165) = ApplicationKeyOption;
      v164 = &v201;
      v54 = "Failed to open %wZ with status 0x%08lx\n";
      v55 = 4613;
    }
    goto LABEL_268;
  }
LABEL_140:
  if ( UseWOW64 || LdrpIsSecureProcess )
  {
    UnicodeString = v196;
  }
  else
  {
    v60 = *(__m128i *)(v43 + 56);
    *(_QWORD *)&UnicodeString.Length = *(_QWORD *)(v43 + 56);
    v61 = (wchar_t *)_mm_srli_si128(v60, 8).m128i_u64[0];
    UnicodeString.Buffer = v61;
    if ( !v61 || !UnicodeString.Length || !*v61 )
    {
      UnicodeString.Buffer = (wchar_t *)RtlAllocateHeap((__int64)v40, 0, 8LL);
      if ( !UnicodeString.Buffer )
      {
        v41 = LdrpDebugFlags;
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
      v172 = 0;
      v62 = RtlGetNtSystemRoot();
      Buffer = UnicodeString.Buffer;
      *(_DWORD *)UnicodeString.Buffer = *(_DWORD *)v62;
      Buffer[2] = *(_WORD *)(v62 + 4);
      UnicodeString.Buffer[3] = 0;
      *(_DWORD *)&UnicodeString.Length = 524294;
    }
  }
  LdrpInitializePolicy();
  v64 = (unsigned __int16)v185;
  if ( (*(_DWORD *)(*(_QWORD *)(ProcessEnvironmentBlock + 32) + 8LL) & 0x20000000) != 0 )
    v64 = 2LL * (unsigned __int16)v185 + 22;
  v65 = v64;
  if ( !LdrpCheckPolicy(1) )
  {
    v65 = v64 + 2 * (v196.Length + 9LL);
    if ( (*(_BYTE *)(ProcessEnvironmentBlock + 3) & 2) != 0 )
      *(_WORD *)(v43 + 80) = 0;
  }
  v175.m128i_i64[1] = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v65);
  if ( !v175.m128i_i64[1] )
  {
    v41 = LdrpDebugFlags;
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
  v175.m128i_i16[0] = 0;
  v175.m128i_i16[1] = v65;
  RtlAppendUnicodeStringToString((unsigned __int16 *)&v175, (__int16 *)&v185);
  v66 = 59LL;
  *(_WORD *)(v175.m128i_i64[1] + 2 * ((unsigned __int64)v175.m128i_u16[0] >> 1) - 2) = 59;
  RtlpSystem32Dirs = (__int128)v175;
  LdrpSystem32 = (__int128)v175;
  LOWORD(LdrpSystem32) = _mm_cvtsi128_si32(v175) - 2;
  if ( (*(_DWORD *)(*(_QWORD *)(ProcessEnvironmentBlock + 32) + 8LL) & 0x20000000) != 0 )
  {
    RtlAppendUnicodeStringToString((unsigned __int16 *)&v175, (__int16 *)&v185);
    RtlAppendUnicodeToString((unsigned __int16 *)&v175, L"forwarders;");
  }
  if ( v65 > v64 )
  {
    RtlAppendUnicodeStringToString((unsigned __int16 *)&v175, (__int16 *)&v196);
    RtlAppendUnicodeToString((unsigned __int16 *)&v175, L"\\system;");
    RtlAppendUnicodeStringToString((unsigned __int16 *)&v175, (__int16 *)&v196);
    RtlAppendUnicodeToString((unsigned __int16 *)&v175, L";");
    RtlpSystemDirs = (__int128)v175;
  }
  if ( (unsigned int)(LdrpIllegalCWDDevices - 1) <= 0xFFFFFFFD )
    LdrpCheckAppDirType((__int128 *)v186.m128i_i8, v66);
  v67 = v194;
  RtlImageNtHeaderEx(3, v194, 0LL, &v193);
  ModuleEntry = LdrpAllocateModuleEntry(0LL);
  v69 = ModuleEntry;
  if ( !ModuleEntry )
  {
    v41 = LdrpDebugFlags;
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
  LdrpNtDllDataTableEntry = ModuleEntry;
  *(_DWORD *)(*(_QWORD *)(ModuleEntry + 152) + 24LL) = -1;
  *(_WORD *)(**(_QWORD **)(LdrpNtDllDataTableEntry + 152) - 52LL) = -1;
  v70 = LdrpNtDllDataTableEntry;
  *(_DWORD *)(LdrpNtDllDataTableEntry + 104) |= 0x204u;
  *(_QWORD *)(v70 + 248) -= qword_180178300;
  v70 += 72LL;
  *(_OWORD *)v70 = v185;
  RtlAppendUnicodeStringToString((unsigned __int16 *)v70, NtDllName);
  v71 = LdrpNtDllDataTableEntry;
  *(_OWORD *)(LdrpNtDllDataTableEntry + 88) = *(_OWORD *)NtDllName;
  *(_QWORD *)(v71 + 48) = v67;
  LdrpInsertDataTableEntry(v71);
  LdrpLogDllState(*(_QWORD *)(LdrpNtDllDataTableEntry + 48), LdrpNtDllDataTableEntry + 72, 0x14A5u);
  LdrpInsertModuleToIndex(LdrpNtDllDataTableEntry, v193, v72, v73);
  inited = LdrpProcessMappedModule(LdrpNtDllDataTableEntry, 0, 1);
  ApplicationKeyOption = inited;
  if ( inited < 0 )
    return (unsigned int)inited;
  LdrpLogDllState(*(_QWORD *)(LdrpNtDllDataTableEntry + 48), LdrpNtDllDataTableEntry + 72, 0x14AEu);
  *(_DWORD *)(*(_QWORD *)(LdrpNtDllDataTableEntry + 152) + 56LL) = 9;
  RtlInitializeHistoryTable();
  v74 = (_QWORD *)(v69 + 32);
  v75 = qword_1801653F0;
  if ( *(__int64 **)(qword_1801653F0 + 8) != &qword_1801653F0 )
    __fastfail(3u);
  *v74 = qword_1801653F0;
  *(_QWORD *)(v69 + 40) = &qword_1801653F0;
  *(_QWORD *)(v75 + 8) = v74;
  qword_1801653F0 = v69 + 32;
  inited = LdrpInitParallelLoadingSupport();
  ApplicationKeyOption = inited;
  if ( inited < 0 )
  {
    v24 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) == 0 )
      goto LABEL_308;
    v58 = "Failed to initialize Parallel loader, st = 0x%x\n";
    v59 = 4987;
LABEL_306:
    LODWORD(v163) = inited;
    LdrpLogDbgPrint((unsigned int)"minkernel\\ntdll\\ldrinit.c", v59, "LdrpInitializeProcess", 0, v58, v163);
    goto LABEL_307;
  }
  LdrpDrainWorkQueue(0);
  LdrpInitializeDllPath(0LL, 0LL, v220);
  memset(v218, 0, 0xC0uLL);
  *(_QWORD *)&v218[1] = v220;
  LODWORD(v218[2]) = 512;
  v218[0] = v186;
  *((_QWORD *)&v218[2] + 1) = &ApplicationKeyOption;
  v76 = LdrpAllocateModuleEntry((__int64)v218);
  v77 = v76;
  if ( !v76 )
  {
    v41 = LdrpDebugFlags;
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
  LdrpImageEntry = v76;
  v78 = 2LL;
  do
  {
    *(_DWORD *)(*(_QWORD *)(LdrpImageEntry + 152) + 24LL) = -1;
    --v78;
  }
  while ( v78 );
  *(_WORD *)(**(_QWORD **)(LdrpImageEntry + 152) - 52LL) = -1;
  v79 = LdrpImageEntry;
  *(__m128i *)(LdrpImageEntry + 72) = v186;
  v80 = *(_DWORD *)(v79 + 104) | 4;
  *(_DWORD *)(v79 + 104) = v80;
  v81 = v171;
  if ( UseCOR )
  {
    v82 = v80 | 0x400000;
    *(_DWORD *)(v79 + 104) = v82;
    if ( v81 )
      *(_DWORD *)(v79 + 104) = v82 | 0x1000000;
  }
  if ( (*(_BYTE *)(ProcessEnvironmentBlock + 3) & 4) != 0 )
    *(_QWORD *)(v79 + 248) = 0LL;
  v83 = 0LL;
  v84 = v186.m128i_i64[1] + v186.m128i_u16[0];
  v85 = (_WORD *)v84;
  if ( v84 && v84 > v186.m128i_i64[1] )
  {
    while ( 1 )
    {
      v86 = v85--;
      if ( *v85 == 92 )
        break;
      if ( (unsigned __int64)v85 <= v186.m128i_i64[1] )
        goto LABEL_192;
    }
    v83 = v86;
  }
LABEL_192:
  if ( v83 )
  {
    v87 = v84 - (_WORD)v83;
    *(_WORD *)(v79 + 88) = v87;
    if ( v186.m128i_u16[1] - (unsigned __int64)v186.m128i_u16[0] >= 2 )
      v87 += 2;
    *(_WORD *)(v79 + 90) = v87;
    *(_QWORD *)(v79 + 96) = v83;
  }
  else
  {
    *(_OWORD *)(v79 + 88) = *(_OWORD *)(v77 + 72);
  }
  v88 = *(const void **)(ProcessEnvironmentBlock + 16);
  v89 = v88;
  if ( *(const void **)(v174 + 48) != v88 && !v81 && !UseWOW64 )
  {
    inited = LdrpProtectAndRelocateImage(v88);
    ApplicationKeyOption = inited;
    if ( inited < 0 )
      return (unsigned int)inited;
    v89 = *(const void **)(ProcessEnvironmentBlock + 16);
    v79 = LdrpImageEntry;
  }
  *(_QWORD *)(v79 + 48) = v89;
  LdrpInsertDataTableEntry(v79);
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
  LdrpInsertModuleToIndex(LdrpImageEntry, v174, v90, v91);
  inited = LdrpProcessMappedModule(LdrpImageEntry, 0, UseWOW64 == 0, v218);
  ApplicationKeyOption = inited;
  if ( inited < 0 )
    return (unsigned int)inited;
  *(_DWORD *)(*(_QWORD *)(LdrpImageEntry + 152) + 56LL) = 9;
  v92 = RtlpInitCurrentDir(&UnicodeString.Length);
  ApplicationKeyOption = v92;
  if ( v92 < 0 )
  {
    v93 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      LODWORD(v165) = v92;
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        5165,
        "LdrpInitializeProcess",
        0,
        "Initializing the current directory to \"%wZ\" failed with status 0x%08lx\n",
        &UnicodeString,
        v165);
      v93 = LdrpDebugFlags;
    }
    if ( (v93 & 0x10) != 0 )
      __debugbreak();
  }
  if ( !v172 )
    RtlFreeAnsiString(&UnicodeString);
  if ( AvrfAppVerifierMode )
  {
    v94 = LdrpAllocateModuleEntry(0LL);
    v95 = (_QWORD *)v94;
    if ( !v94 )
    {
      v41 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) == 0 )
      {
LABEL_177:
        if ( (v41 & 0x10) != 0 )
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
      v41 = LdrpDebugFlags;
      goto LABEL_177;
    }
    *(_DWORD *)(*(_QWORD *)(v94 + 152) + 24LL) = -1;
    *(_WORD *)(**(_QWORD **)(v94 + 152) - 52LL) = -1;
    *(_DWORD *)(v94 + 104) |= *(_DWORD *)(v173 + 104);
    *(_QWORD *)(v94 + 248) = *(_QWORD *)(v173 + 248);
    *(_WORD *)(v94 + 110) = 0;
    *(_OWORD *)(v94 + 72) = *(_OWORD *)(v173 + 72);
    *(_OWORD *)(v94 + 88) = *(_OWORD *)(v173 + 88);
    *(_DWORD *)(v94 + 128) = *(_DWORD *)(v173 + 128);
    *(_QWORD *)(v94 + 48) = *(_QWORD *)(v173 + 48);
    LdrpInsertDataTableEntry(v94);
    LdrpLogDllState(v95[6], (__int64)(v95 + 9), 0x14A5u);
    inited = RtlImageNtHeaderEx(3, v95[6], 0LL, &v193);
    ApplicationKeyOption = inited;
    if ( inited < 0 )
      return (unsigned int)inited;
    LdrpInsertModuleToIndex((__int64)v95, v193, v96, v97);
    inited = LdrpProcessMappedModule((__int64)v95, 0, 1);
    ApplicationKeyOption = inited;
    if ( inited < 0 )
      return (unsigned int)inited;
    v95[7] = *(_QWORD *)(v173 + 56);
    LdrpLogDllState(v95[6], (__int64)(v95 + 9), 0x14ADu);
    *(_DWORD *)(v95[19] + 56LL) = 7;
    if ( (*(_DWORD *)(ProcessEnvironmentBlock + 188) & 0x100) != 0 || (AvrfAppVerifierMode & 2) != 0 )
    {
      inited = AVrfInitializeVerifier(0, 0, 0, 1, v194, 0LL);
      ApplicationKeyOption = inited;
      if ( inited >= 0 && (AvrfAppVerifierMode & 2) != 0 )
      {
        *(_DWORD *)(v95[19] + 56LL) = 9;
        inited = ApplicationKeyOption;
      }
    }
    else
    {
      v168 = 0;
      inited = LdrpInitializeGraphRecurse(v95[19], 0LL, &v168);
      ApplicationKeyOption = inited;
    }
    if ( inited < 0 )
      return (unsigned int)inited;
  }
  LdrpDropLastInProgressCount();
  if ( !UseWOW64 )
  {
    v198 = 0LL;
    if ( UseCOR )
    {
      inited = LdrpCorInitialize(&v198);
      ApplicationKeyOption = inited;
      if ( inited < 0 )
        return (unsigned int)inited;
      v98 = v171;
      if ( (_BYTE)v171 )
      {
        inited = LdrpCorValidateImage(*(_QWORD *)(ProcessEnvironmentBlock + 16));
        ApplicationKeyOption = inited;
        if ( inited < 0 )
          return (unsigned int)inited;
      }
      if ( (v197->SameTebFlags & 0x400) != 0 )
        *(_QWORD *)(v195 + 128) = __ROR8__(LdrpCorExeMainRoutine, 64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330];
    }
    else
    {
      v98 = v171;
    }
    inited = LdrpInitializeTls();
    ApplicationKeyOption = inited;
    if ( inited < 0 )
    {
      v24 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) == 0 )
        goto LABEL_308;
      v58 = "Initializing TLS slots failed with status 0x%08lx\n";
      v59 = 5415;
      goto LABEL_306;
    }
    if ( v198 )
    {
      v169 = 0;
      inited = LdrpInitializeGraphRecurse(*(_QWORD *)(v198 + 152), 0LL, &v169);
      ApplicationKeyOption = inited;
      if ( inited < 0 )
      {
        v24 = LdrpDebugFlags;
        if ( (LdrpDebugFlags & 3) == 0 )
          goto LABEL_308;
        v58 = "DllMain of MSCOREE (or its dependents) failed with status 0x%08lx\n";
        v59 = 5434;
        goto LABEL_306;
      }
    }
    inited = LdrpInitializeImportRedirection();
    ApplicationKeyOption = inited;
    if ( inited < 0 )
    {
      v24 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) == 0 )
        goto LABEL_308;
      v58 = "Loading of import redirection module failed with status 0x%08x\n";
      v59 = 5450;
      goto LABEL_306;
    }
    v200[0] = 0LL;
    if ( (unsigned __int16)(*(_WORD *)(v174 + 92) - 2) > 1u )
    {
LABEL_281:
      LdrpDrainWorkQueue(0);
      SbObtainTraceHandle(0LL);
      v100 = v199;
      if ( v199 && *(_DWORD *)(v199 + 528) )
      {
        *(_QWORD *)(ProcessEnvironmentBlock + 736) = 0LL;
        LdrpInitShimEngine(v100);
      }
      v101 = RtlpForceCSDebugInfoCreation;
      if ( (NtCurrentPeb()->AppCompatFlags.LowPart & 0x400000) != 0 )
        v101 = 1;
      RtlpForceCSDebugInfoCreation = v101;
      if ( (NtCurrentPeb()->AppCompatFlags.LowPart & 0x10000000) != 0 )
      {
        *(_DWORD *)(v43 + 1036) = 1;
        v102 = 1;
      }
      else
      {
        v102 = *(_DWORD *)(v43 + 1036);
      }
      LdrpEnableParallelLoading(v102);
      LdrInitState = 1;
      *(_DWORD *)(*(_QWORD *)(LdrpImageEntry + 152) + 56LL) = 2;
      **((_DWORD **)&v218[2] + 1) = 0;
      if ( v98 )
      {
        v103 = LdrpCorProcessImports(LdrpImageEntry);
      }
      else
      {
        LODWORD(v218[2]) |= 1u;
        LdrpMapAndSnapDependency((__int64)v218);
        LdrpDrainWorkQueue(1);
        inited = ApplicationKeyOption;
        if ( ApplicationKeyOption < 0 )
        {
LABEL_296:
          v24 = LdrpDebugFlags;
          if ( (LdrpDebugFlags & 3) == 0 )
            goto LABEL_308;
          v58 = "Walking the import tables of the executable and its static imports failed with status 0x%08lx\n";
          v59 = 5846;
          goto LABEL_306;
        }
        v103 = LdrpPrepareModuleForExecution(LdrpImageEntry, *((__int64 *)&v218[2] + 1));
      }
      ApplicationKeyOption = v103;
      inited = v103;
      if ( v103 < 0 )
        goto LABEL_296;
      LdrInitState = 2;
      v188 = 1;
      v212 = *(_QWORD *)(LdrpImageEntry + 48);
      v213 = 4096LL;
      ZwSetInformationVirtualMemory();
      if ( *(_BYTE *)(ProcessEnvironmentBlock + 2) )
        LdrpDoDebuggerBreak();
      LdrpDropLastInProgressCount();
      if ( Kernel32ThreadInitThunkFunction )
      {
        inited = _guard_dispatch_icall_fptr();
        ApplicationKeyOption = inited;
        if ( inited < 0 )
          return (unsigned int)inited;
        inited = LdrpInitializePerUserWindowsDirectory(v200[0]);
        ApplicationKeyOption = inited;
        if ( inited < 0 )
          return (unsigned int)inited;
      }
      LdrpProcessInitContextRecord = v195;
      LdrpDrainWorkQueue(0);
      LdrpAcquireLoaderLock();
      v170[0] = 0;
      ApplicationKeyOption = LdrpInitializeGraphRecurse(
                               *(_QWORD *)(LdrpImageEntry + 152),
                               *((__int64 *)&v218[2] + 1),
                               v170);
      LdrpReleaseLoaderLock(0LL, 9, ApplicationKeyOption);
      LdrpFreeLoadContextOfNode(*(_QWORD **)(LdrpImageEntry + 152), *((__int64 *)&v218[2] + 1));
      LdrpDropLastInProgressCount();
      LdrpProcessInitContextRecord = 0LL;
      LdrpReleaseDllPath((__int64)v220);
      inited = ApplicationKeyOption;
      if ( ApplicationKeyOption < 0 )
      {
        v24 = LdrpDebugFlags;
        if ( (LdrpDebugFlags & 3) == 0 )
          goto LABEL_308;
        v58 = "Running the init routines of the executable's static imports failed with status 0x%08lx\n";
        v59 = 5988;
        goto LABEL_306;
      }
      if ( *(_WORD *)(LdrpImageEntry + 110) )
      {
        v215 = 72LL;
        v216 = 1;
        memset(v217, 0, sizeof(v217));
        RtlActivateActivationContextUnsafeFast((__int64)&v215, *(_QWORD *)(LdrpImageEntry + 136));
        LdrpCallTlsInitializers(1, LdrpImageEntry, v104, v105);
        RtlDeactivateActivationContextUnsafeFast((__int64)&v215);
      }
      if ( !g_ShimsEnabled
        || (RtlDecodeSystemPointer(g_pfnSE_InstallAfterInit), (unsigned __int8)_guard_dispatch_icall_fptr()) )
      {
LABEL_402:
        if ( *(_QWORD *)(ProcessEnvironmentBlock + 560) )
          _guard_dispatch_icall_fptr();
        goto LABEL_404;
      }
      g_ShimsEnabled = 0;
      v109 = g_pShimEngineModule;
      if ( byte_180165408 )
        goto LABEL_401;
      v110 = 0LL;
      if ( g_pShimEngineModule )
      {
        if ( g_pShimEngineModule == LdrpSystemDllBase )
        {
          v110 = LdrpNtDllDataTableEntry;
          v189 = *(_DWORD *)(*(_QWORD *)(LdrpNtDllDataTableEntry + 152) + 56LL);
        }
        else
        {
          RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpModuleDatatableLock, v106, (unsigned __int64 *)v107, v108);
          v119 = LdrpModuleBaseAddressIndex;
          if ( (qword_1801662C0 & 1) != 0 )
          {
            if ( LdrpModuleBaseAddressIndex )
            {
              v106 = (unsigned __int64)&LdrpModuleBaseAddressIndex;
              v119 = (unsigned __int64)&LdrpModuleBaseAddressIndex ^ LdrpModuleBaseAddressIndex;
            }
            else
            {
              v119 = 0LL;
            }
          }
          while ( v119 )
          {
            v106 = *(_QWORD *)(v119 - 152);
            if ( v109 < v106 )
            {
              v106 = *(_QWORD *)v119;
            }
            else
            {
              if ( v109 <= v106 )
                break;
              v106 = *(_QWORD *)(v119 + 8);
            }
            if ( (qword_1801662C0 & 1) != 0 && v106 )
              v119 ^= v106;
            else
              v119 = v106;
          }
          if ( v119 )
          {
            v110 = v119 - 200;
            v120 = *(_QWORD *)(v119 - 200 + 152);
            if ( *(_DWORD *)(v120 + 24) == -1 || (v121 = 0, (*(_BYTE *)(*(_QWORD *)v120 - 56LL) & 0x20) != 0) )
              v121 = 1;
            if ( !v121 )
            {
              _InterlockedAdd((volatile signed __int32 *)(v110 + 276), 1u);
              v120 = *(_QWORD *)(v110 + 152);
            }
            v189 = *(_DWORD *)(v120 + 56);
          }
          v122 = _InterlockedCompareExchange64(&LdrpModuleDatatableLock, 0LL, 1LL);
          if ( v122 != 1 )
          {
            v107 = -1LL;
            do
            {
              v123 = v122 & 6;
              v124 = 3LL;
              if ( v123 != 2 )
                v124 = -1LL;
              v106 = v122 + v124;
              v125 = v122;
              v122 = _InterlockedCompareExchange64(&LdrpModuleDatatableLock, v106, v122);
            }
            while ( v125 != v122 );
            if ( v123 == 2 )
              RtlpWakeSRWLock(&LdrpModuleDatatableLock, v106, 0);
          }
        }
      }
      v214[3] = v110;
      if ( !v110 )
      {
LABEL_401:
        g_pShimEngineModule = 0LL;
        goto LABEL_402;
      }
      if ( *(_DWORD *)(*(_QWORD *)(v110 + 152) + 24LL) == 1 )
      {
        v118 = 2147353476LL;
        v129 = 2147353477LL;
      }
      else
      {
        RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpModuleDatatableLock, v106, (unsigned __int64 *)v107, v108);
        v111 = *(_QWORD *)(v110 + 152);
        v172 = LdrpDecrementNodeLoadCountLockHeld(v111, 1, &v190);
        v112 = _InterlockedCompareExchange64(&LdrpModuleDatatableLock, 0LL, 1LL);
        if ( v112 != 1 )
        {
          do
          {
            v113 = v112 & 6;
            v114 = 3LL;
            if ( v113 != 2 )
              v114 = -1LL;
            v106 = v112 + v114;
            v115 = v112;
            v112 = _InterlockedCompareExchange64(&LdrpModuleDatatableLock, v106, v112);
          }
          while ( v115 != v112 );
          if ( v113 == 2 )
            RtlpWakeSRWLock(&LdrpModuleDatatableLock, v106, 0);
        }
        if ( v190 )
        {
          SharedData = NtCurrentPeb()->SharedData;
          if ( SharedData && *SharedData )
          {
            v117 = (__int64)NtCurrentPeb()->SharedData + 554;
            v118 = 2147353476LL;
          }
          else
          {
            v118 = 2147353476LL;
            v117 = 2147353476LL;
          }
          v126 = 0LL;
          if ( *(_BYTE *)v117 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
          {
            v127 = NtCurrentPeb()->SharedData;
            if ( v127 && *v127 )
            {
              v128 = (__int64)NtCurrentPeb()->SharedData + 555;
              v129 = 2147353477LL;
            }
            else
            {
              v129 = 2147353477LL;
              v128 = 2147353477LL;
            }
            if ( (*(_BYTE *)v128 & 0x20) != 0 )
              LdrpLogEtwEvent(5248, -1LL, -1, -1, 0LL, 0LL);
          }
          else
          {
            v129 = 2147353477LL;
          }
          v130 = NtCurrentTeb();
          if ( _interlockedbittestandreset(&dword_18015F5D0, 0) )
          {
            qword_18015F5D8 = (__int64)v130->ClientId.UniqueThread;
            dword_18015F5D4 = 1;
          }
          else if ( (void *)qword_18015F5D8 == v130->ClientId.UniqueThread )
          {
            ++dword_18015F5D4;
          }
          else
          {
            RtlpEnterCriticalSectionContended((__int64)&LdrpLoaderLock, v126, v107, v108);
          }
          v131 = NtCurrentPeb()->SharedData;
          v132 = 0LL;
          if ( v131 && *v131 )
            v133 = (__int64)NtCurrentPeb()->SharedData + 554;
          else
            v133 = 2147353476LL;
          if ( *(_BYTE *)v133 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
          {
            v134 = NtCurrentPeb()->SharedData;
            if ( v134 && *v134 )
              v135 = (__int64)NtCurrentPeb()->SharedData + 555;
            else
              v135 = 2147353477LL;
            if ( (*(_BYTE *)v135 & 0x20) != 0 )
              LdrpLogEtwEvent(5249, -1LL, -1, -1, 0LL, 0LL);
          }
          LdrpUnloadNode(v111, v132, (unsigned __int64 *)v107, v108);
          RtlLeaveCriticalSection((__int64)&LdrpLoaderLock);
          v136 = NtCurrentPeb()->SharedData;
          v106 = 0LL;
          if ( v136 && *v136 )
            v137 = (__int64)NtCurrentPeb()->SharedData + 554;
          else
            v137 = 2147353476LL;
          if ( *(_BYTE *)v137 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
          {
            v138 = NtCurrentPeb()->SharedData;
            if ( v138 && *v138 )
              v139 = (__int64)NtCurrentPeb()->SharedData + 555;
            else
              v139 = 2147353477LL;
            if ( (*(_BYTE *)v139 & 0x20) != 0 )
              LdrpLogEtwEvent(5282, 0LL, 0, 8, 0LL, 0LL);
          }
        }
        else
        {
          v118 = 2147353476LL;
          v129 = 2147353477LL;
        }
        if ( v172 != -1073741267 )
          goto LABEL_400;
      }
      v140 = NtCurrentTeb()->SameTebFlags & 0x1000;
      if ( !v140 )
        LdrpDrainWorkQueue(0);
      RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpModuleDatatableLock, v106, (unsigned __int64 *)v107, v108);
      v192 = *(_QWORD *)(v110 + 152);
      LdrpDecrementNodeLoadCountLockHeld(v192, 0, &v191);
      v143 = 0LL;
      v144 = _InterlockedCompareExchange64(&LdrpModuleDatatableLock, 0LL, 1LL);
      if ( v144 != 1 )
      {
        v142 = 6LL;
        do
        {
          v145 = v144 & 6;
          v146 = 3LL;
          if ( v145 != 2 )
            v146 = -1LL;
          v141 = v144 + v146;
          v147 = v144;
          v144 = _InterlockedCompareExchange64(&LdrpModuleDatatableLock, v141, v144);
        }
        while ( v147 != v144 );
        v143 = 0LL;
        if ( v145 == 2 )
        {
          RtlpWakeSRWLock(&LdrpModuleDatatableLock, v141, 0);
          v143 = 0LL;
        }
      }
      if ( v191 )
      {
        v148 = NtCurrentPeb()->SharedData;
        if ( v148 && *v148 )
          v149 = (__int64)NtCurrentPeb()->SharedData + 554;
        else
          v149 = 2147353476LL;
        if ( *(_BYTE *)v149 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
        {
          v150 = NtCurrentPeb()->SharedData;
          if ( v150 && *v150 )
            v151 = (__int64)NtCurrentPeb()->SharedData + 555;
          else
            v151 = 2147353477LL;
          if ( (*(_BYTE *)v151 & 0x20) != 0 )
            LdrpLogEtwEvent(5248, -1LL, -1, -1, 0LL, 0LL);
        }
        v152 = NtCurrentTeb();
        if ( _interlockedbittestandreset(&dword_18015F5D0, 0) )
        {
          qword_18015F5D8 = (__int64)v152->ClientId.UniqueThread;
          dword_18015F5D4 = 1;
        }
        else if ( (void *)qword_18015F5D8 == v152->ClientId.UniqueThread )
        {
          ++dword_18015F5D4;
        }
        else
        {
          RtlpEnterCriticalSectionContended((__int64)&LdrpLoaderLock, v141, v142, v143);
        }
        v153 = NtCurrentPeb()->SharedData;
        v154 = 0LL;
        if ( v153 && *v153 )
          v155 = (__int64)NtCurrentPeb()->SharedData + 554;
        else
          v155 = 2147353476LL;
        if ( *(_BYTE *)v155 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
        {
          v156 = NtCurrentPeb()->SharedData;
          if ( v156 && *v156 )
            v157 = (__int64)NtCurrentPeb()->SharedData + 555;
          else
            v157 = 2147353477LL;
          if ( (*(_BYTE *)v157 & 0x20) != 0 )
            LdrpLogEtwEvent(5249, -1LL, -1, -1, 0LL, 0LL);
        }
        LdrpUnloadNode(v192, v154, (unsigned __int64 *)v142, v143);
        RtlLeaveCriticalSection((__int64)&LdrpLoaderLock);
        v158 = NtCurrentPeb()->SharedData;
        if ( v158 && *v158 )
          v118 = (__int64)NtCurrentPeb()->SharedData + 554;
        if ( *(_BYTE *)v118 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
        {
          v159 = NtCurrentPeb()->SharedData;
          if ( v159 && *v159 )
            v129 = (__int64)NtCurrentPeb()->SharedData + 555;
          if ( (*(_BYTE *)v129 & 0x20) != 0 )
            LdrpLogEtwEvent(5282, 0LL, 0, 8, 0LL, 0LL);
        }
      }
      if ( !v140 )
      {
        v160 = NtCurrentTeb();
        v160->SameTebFlags &= ~0x1000u;
        v161 = NtCurrentTeb();
        if ( _interlockedbittestandreset(&dword_1801652A8, 0) )
        {
          qword_1801652B0 = (__int64)v161->ClientId.UniqueThread;
          dword_1801652AC = 1;
        }
        else if ( (void *)qword_1801652B0 == v161->ClientId.UniqueThread )
        {
          ++dword_1801652AC;
        }
        else
        {
          RtlpEnterCriticalSectionContended((__int64)&LdrpWorkQueueLock, v141, v142, v143);
        }
        LdrpWorkInProgress = 0;
        RtlLeaveCriticalSection((__int64)&LdrpWorkQueueLock);
        ZwSetEvent();
      }
LABEL_400:
      LdrpDereferenceModule(v110);
      goto LABEL_401;
    }
    inited = LdrLoadDll(16385LL, 0LL, (__int64)&LdrpKernel32DllName, &v179);
    ApplicationKeyOption = inited;
    if ( inited < 0 )
    {
      if ( inited != -1073741515 )
      {
        v24 = LdrpDebugFlags;
        if ( (LdrpDebugFlags & 3) == 0 )
          goto LABEL_308;
        LODWORD(v165) = inited;
        v164 = (int *)&LdrpKernel32DllName;
        v54 = "Loading Windows subsystem DLL \"%wZ\" failed with status 0x%08lx\n";
        v55 = 5608;
        goto LABEL_268;
      }
      inited = LdrLoadDll(16385LL, 0LL, (__int64)&LdrpKernelbaseDllName, &v179);
      ApplicationKeyOption = inited;
      if ( inited < 0 )
      {
        v24 = LdrpDebugFlags;
        if ( (LdrpDebugFlags & 3) == 0 )
          goto LABEL_308;
        v54 = "Loading Windows subsystem DLL \"%wZ\" failed with status 0x%08lx\n";
        v55 = 5581;
        goto LABEL_267;
      }
      inited = LdrpCodeAuthzInitialize();
      ApplicationKeyOption = inited;
      if ( (int)(inited + 0x80000000) >= 0 && inited != -1073741515 )
      {
        v24 = LdrpDebugFlags;
        if ( (LdrpDebugFlags & 3) == 0 )
          goto LABEL_308;
        v58 = "LdrpCodeAuthzInitialize failed with status 0x%08lx\n";
        v59 = 5597;
        goto LABEL_306;
      }
      ApplicationKeyOption = 0;
      v99 = v179;
      goto LABEL_274;
    }
    inited = LdrGetProcedureAddress(v179, &qword_180118B28, 0, &Kernel32ThreadInitThunkFunction);
    ApplicationKeyOption = inited;
    if ( inited < 0 )
    {
      v24 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) == 0 )
        goto LABEL_308;
      LODWORD(v166) = inited;
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        5495,
        "LdrpInitializeProcess",
        0,
        "Locating procedure \"%Z\" in Windows subsystem DLL \"%wZ\" failed with status 0x%08lx\n",
        &qword_180118B28,
        &LdrpKernel32DllName,
        v166);
      goto LABEL_307;
    }
    LdrGetProcedureAddress(v179, &qword_180118B38, 0, v200);
    inited = LdrpSnapKernelBaseExtensions();
    ApplicationKeyOption = inited;
    if ( inited >= 0 )
    {
      inited = LdrpCodeAuthzInitialize();
      ApplicationKeyOption = inited;
      if ( inited >= 0 )
      {
        inited = LdrpFindLoadedDll((__int64)&LdrpKernelbaseDllName, 0, &v204);
        ApplicationKeyOption = inited;
        if ( inited < 0 )
        {
          v24 = LdrpDebugFlags;
          if ( (LdrpDebugFlags & 3) == 0 )
            goto LABEL_308;
          v54 = "Finding \"%wZ\" failed with status 0x%08lx\n";
          v55 = 5563;
LABEL_267:
          LODWORD(v165) = inited;
          v164 = (int *)&LdrpKernelbaseDllName;
LABEL_268:
          LdrpLogDbgPrint((unsigned int)"minkernel\\ntdll\\ldrinit.c", v55, "LdrpInitializeProcess", 0, v54, v164, v165);
LABEL_307:
          inited = ApplicationKeyOption;
          v24 = LdrpDebugFlags;
LABEL_308:
          if ( (v24 & 0x10) != 0 )
            __debugbreak();
          return (unsigned int)inited;
        }
        v99 = *(_QWORD *)(v204 + 48);
        v179 = v99;
LABEL_274:
        inited = LdrGetProcedureAddress(v99, &qword_180118B58, 0, &v205);
        ApplicationKeyOption = inited;
        if ( inited < 0 )
        {
          v24 = LdrpDebugFlags;
          if ( (LdrpDebugFlags & 3) == 0 )
            goto LABEL_308;
          v58 = "Finding KernelbasePostInit failed with status 0x%08lx\n";
          v59 = 5626;
          goto LABEL_306;
        }
        inited = _guard_dispatch_icall_fptr();
        ApplicationKeyOption = inited;
        if ( inited < 0 )
        {
          v24 = LdrpDebugFlags;
          if ( (LdrpDebugFlags & 3) == 0 )
            goto LABEL_308;
          v58 = "Calling KernelbasePostInit failed with status 0x%08lx\n";
          v59 = 5634;
          goto LABEL_306;
        }
        ApplicationKeyOption = 0;
        goto LABEL_281;
      }
    }
    return (unsigned int)inited;
  }
  if ( v184 )
  {
    NtClose(v184);
    v184 = 0LL;
    if ( LdrpLargePageDllKeyHandle )
    {
      NtClose(LdrpLargePageDllKeyHandle);
      LdrpLargePageDllKeyHandle = 0LL;
    }
  }
  if ( v180 )
  {
    NtClose(v180);
    v180 = 0LL;
  }
  inited = LdrpLoadWow64((__int16 *)&v185);
  ApplicationKeyOption = inited;
  if ( inited < 0 )
    return (unsigned int)inited;
  if ( *(_BYTE *)(ProcessEnvironmentBlock + 2) )
    LdrpDoDebuggerBreak();
  LdrInitState = 3;
  _interlockedbittestandreset((volatile signed __int32 *)(ProcessEnvironmentBlock + 80), 1u);
  Wow64LdrpInitialize(v195);
LABEL_404:
  if ( v184 )
    NtClose(v184);
  if ( v180 )
    NtClose(v180);
  return 0LL;
}
