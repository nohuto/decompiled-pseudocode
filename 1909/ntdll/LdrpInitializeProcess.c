/*
 * XREFs of LdrpInitializeProcess @ 0x1800D25F8
 * Callers:
 *     _LdrpInitialize @ 0x1800720BC (_LdrpInitialize.c)
 * Callees:
 *     RtlInitializeHeapLogging @ 0x1800098D0 (RtlInitializeHeapLogging.c)
 *     EtwEventRegister @ 0x18000A640 (EtwEventRegister.c)
 *     RtlAppendUnicodeToString @ 0x180015120 (RtlAppendUnicodeToString.c)
 *     RtlImageNtHeaderEx @ 0x18001CB40 (RtlImageNtHeaderEx.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x18001F450 (LdrImageDirectoryEntryToLoadConfig.c)
 *     LdrpProcessMappedModule @ 0x180020654 (LdrpProcessMappedModule.c)
 *     LdrLoadDll @ 0x180021600 (LdrLoadDll.c)
 *     LdrpInitializeDllPath @ 0x180021798 (LdrpInitializeDllPath.c)
 *     LdrpFindLoadedDll @ 0x180021908 (LdrpFindLoadedDll.c)
 *     LdrpSnapKernelBaseExtensions @ 0x180021B60 (LdrpSnapKernelBaseExtensions.c)
 *     LdrpMapAndSnapDependency @ 0x180022F1C (LdrpMapAndSnapDependency.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x180024DB0 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x180024F00 (RtlActivateActivationContextUnsafeFast.c)
 *     LdrpCallTlsInitializers @ 0x18002507C (LdrpCallTlsInitializers.c)
 *     LdrpLogDllState @ 0x1800255A8 (LdrpLogDllState.c)
 *     RtlAppendUnicodeStringToString @ 0x180026140 (RtlAppendUnicodeStringToString.c)
 *     RtlInitUnicodeStringEx @ 0x180028DF0 (RtlInitUnicodeStringEx.c)
 *     RtlGetNtSystemRoot @ 0x180029260 (RtlGetNtSystemRoot.c)
 *     RtlFreeAnsiString @ 0x180029BA0 (RtlFreeAnsiString.c)
 *     LdrpInsertDataTableEntry @ 0x18002A63C (LdrpInsertDataTableEntry.c)
 *     LdrpPrepareModuleForExecution @ 0x18002A958 (LdrpPrepareModuleForExecution.c)
 *     LdrpAllocateModuleEntry @ 0x18002AC94 (LdrpAllocateModuleEntry.c)
 *     LdrpReleaseLoaderLock @ 0x18002D75C (LdrpReleaseLoaderLock.c)
 *     LdrpAcquireLoaderLock @ 0x18002D7BC (LdrpAcquireLoaderLock.c)
 *     LdrpDrainWorkQueue @ 0x18002E73C (LdrpDrainWorkQueue.c)
 *     LdrUnloadDll @ 0x18002F330 (LdrUnloadDll.c)
 *     LdrProtectMrdata @ 0x180035F18 (LdrProtectMrdata.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     RtlCreateHeap @ 0x1800491A0 (RtlCreateHeap.c)
 *     LdrpInitializeTls @ 0x180055158 (LdrpInitializeTls.c)
 *     RtlSetBits @ 0x180056660 (RtlSetBits.c)
 *     RtlpInitEnvironmentBlock @ 0x18005CA28 (RtlpInitEnvironmentBlock.c)
 *     LdrpEnableParallelLoading @ 0x180062C10 (LdrpEnableParallelLoading.c)
 *     RtlInitializeCriticalSection @ 0x180063740 (RtlInitializeCriticalSection.c)
 *     LdrpFreeLoadContextOfNode @ 0x180064FC4 (LdrpFreeLoadContextOfNode.c)
 *     LdrpInitShimEngine @ 0x1800690E0 (LdrpInitShimEngine.c)
 *     LdrpInitializeGraphRecurse @ 0x1800699C8 (LdrpInitializeGraphRecurse.c)
 *     RtlpInitializeThreadActivationContextStack @ 0x18006ECE4 (RtlpInitializeThreadActivationContextStack.c)
 *     InitializeSListHead @ 0x18006F2CC (InitializeSListHead.c)
 *     LdrpDropLastInProgressCount @ 0x1800743BC (LdrpDropLastInProgressCount.c)
 *     RtlpInitCurrentDir @ 0x180076E14 (RtlpInitCurrentDir.c)
 *     RtlInitializeHistoryTable @ 0x180078164 (RtlInitializeHistoryTable.c)
 *     RtlSetHeapInformation @ 0x1800796C0 (RtlSetHeapInformation.c)
 *     RtlQueryApplicationKeyOption @ 0x180079D7C (RtlQueryApplicationKeyOption.c)
 *     LdrQueryImageFileExecutionOptions @ 0x180079E20 (LdrQueryImageFileExecutionOptions.c)
 *     LdrpCodeAuthzInitialize @ 0x18007AA5C (LdrpCodeAuthzInitialize.c)
 *     TpInitializePackage @ 0x18007CAFC (TpInitializePackage.c)
 *     RtlCreateTagHeap @ 0x18007CBA0 (RtlCreateTagHeap.c)
 *     RtlpInitParameterBlock @ 0x18007CD08 (RtlpInitParameterBlock.c)
 *     LdrpInitParallelLoadingSupport @ 0x18007D66C (LdrpInitParallelLoadingSupport.c)
 *     SbObtainTraceHandle @ 0x18007DE0C (SbObtainTraceHandle.c)
 *     LdrGetProcedureAddress @ 0x18007EBB0 (LdrGetProcedureAddress.c)
 *     RtlSetUnhandledExceptionFilter @ 0x18007F010 (RtlSetUnhandledExceptionFilter.c)
 *     RtlImageDirectoryEntryToData @ 0x18007F280 (RtlImageDirectoryEntryToData.c)
 *     LdrpInsertModuleToIndex @ 0x18007F3F0 (LdrpInsertModuleToIndex.c)
 *     LdrpInitializePolicy @ 0x18007F434 (LdrpInitializePolicy.c)
 *     LdrpInitializeImportRedirection @ 0x180080C84 (LdrpInitializeImportRedirection.c)
 *     LdrpInitializePerUserWindowsDirectory @ 0x180081390 (LdrpInitializePerUserWindowsDirectory.c)
 *     LdrpCorInitialize @ 0x180081710 (LdrpCorInitialize.c)
 *     RtlDecodeSystemPointer @ 0x180081A50 (RtlDecodeSystemPointer.c)
 *     LdrpCheckPolicy @ 0x180081EAC (LdrpCheckPolicy.c)
 *     LdrpReleaseDllPath @ 0x180081F20 (LdrpReleaseDllPath.c)
 *     LdrpLoadWow64 @ 0x1800822AC (LdrpLoadWow64.c)
 *     LdrpProtectAndRelocateImage @ 0x180082830 (LdrpProtectAndRelocateImage.c)
 *     WinSqmCheckEscalationSetString @ 0x180082FC0 (WinSqmCheckEscalationSetString.c)
 *     LdrpCorProcessImports @ 0x180083A38 (LdrpCorProcessImports.c)
 *     LdrpCorValidateImage @ 0x180084190 (LdrpCorValidateImage.c)
 *     Wow64LdrpInitialize @ 0x1800853B4 (Wow64LdrpInitialize.c)
 *     RtlNormalizeProcessParams @ 0x18008A730 (RtlNormalizeProcessParams.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     NtClose @ 0x18009D070 (NtClose.c)
 *     NtQuerySystemInformation @ 0x18009D550 (NtQuerySystemInformation.c)
 *     ZwOpenDirectoryObject @ 0x18009D990 (ZwOpenDirectoryObject.c)
 *     ZwOpenSymbolicLinkObject @ 0x18009F380 (ZwOpenSymbolicLinkObject.c)
 *     NtQuerySymbolicLinkObject @ 0x18009F980 (NtQuerySymbolicLinkObject.c)
 *     ZwSetInformationVirtualMemory @ 0x1800A0180 (ZwSetInformationVirtualMemory.c)
 *     _guard_dispatch_icall_nop @ 0x1800A08B0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1800A3DC0 (memset.c)
 *     LdrpInitializeEnclaves @ 0x1800CE040 (LdrpInitializeEnclaves.c)
 *     LdrpLogDbgPrint @ 0x1800CE3D8 (LdrpLogDbgPrint.c)
 *     LdrpCorFixupImage @ 0x1800CEEB8 (LdrpCorFixupImage.c)
 *     LdrpCheckAppDirType @ 0x1800D0E3C (LdrpCheckAppDirType.c)
 *     LdrpDoDebuggerBreak @ 0x1800D105C (LdrpDoDebuggerBreak.c)
 *     LdrpInitializeExceptionTable @ 0x1800D1760 (LdrpInitializeExceptionTable.c)
 *     LdrpInitializeExecutionOptions @ 0x1800D17B0 (LdrpInitializeExecutionOptions.c)
 *     LdrpInitializeNlsInfo @ 0x1800D25B8 (LdrpInitializeNlsInfo.c)
 *     LdrpOverrideExportSuppression @ 0x1800D49DC (LdrpOverrideExportSuppression.c)
 *     LdrpCaptureCriticalThunks @ 0x1800D4F24 (LdrpCaptureCriticalThunks.c)
 *     LdrpIsNlsUtf8Process @ 0x1800D50A0 (LdrpIsNlsUtf8Process.c)
 *     AVrfInitializeVerifier @ 0x1800D8C38 (AVrfInitializeVerifier.c)
 *     ?RtlpFlsInitialize@@YAXPEAU_RTLP_FLS_CONTEXT@@@Z @ 0x1800DE540 (-RtlpFlsInitialize@@YAXPEAU_RTLP_FLS_CONTEXT@@@Z.c)
 *     RtlpInitDeferredCriticalSection @ 0x1800E6B9C (RtlpInitDeferredCriticalSection.c)
 *     RtlInitializeHeapManager @ 0x1800EEF74 (RtlInitializeHeapManager.c)
 *     RtlpInitializeNonVolatileFlush @ 0x1800F57E8 (RtlpInitializeNonVolatileFlush.c)
 *     RtlInitializeExceptionLog @ 0x1800FA3B8 (RtlInitializeExceptionLog.c)
 *     RtlControlStackTraceDataBase @ 0x1800FAB68 (RtlControlStackTraceDataBase.c)
 *     RtlpInitWaitOnAddress @ 0x1800FC770 (RtlpInitWaitOnAddress.c)
 *     TpSetDefaultPoolCpuSets @ 0x18010EA18 (TpSetDefaultPoolCpuSets.c)
 */

int __fastcall LdrpInitializeProcess(__int64 a1, __int64 a2)
{
  struct _TEB *v3; // rsi
  __int64 ProcessEnvironmentBlock; // rbx
  int v5; // r15d
  int v6; // edi
  unsigned __int64 v7; // r12
  int v8; // eax
  bool v9; // cc
  int v10; // eax
  __int64 v11; // rcx
  _WORD *v12; // rdx
  unsigned __int16 v13; // r8
  char v14; // al
  int result; // eax
  unsigned int i; // ecx
  _QWORD *v17; // rax
  unsigned __int64 v18; // rax
  char v19; // cl
  int v20; // ecx
  __int64 v21; // rax
  unsigned int *Config; // rax
  unsigned int *v23; // r15
  int v24; // r13d
  unsigned int v25; // eax
  unsigned int v26; // ecx
  unsigned int v27; // ecx
  __int64 v28; // rax
  char v29; // al
  int v30; // ecx
  char v31; // al
  unsigned __int64 v32; // r9
  __int64 v33; // r8
  __int64 Heap; // rax
  void *v35; // r15
  char v36; // al
  __int64 v37; // rcx
  __int64 v38; // r13
  __int64 NtSystemRoot; // rax
  __int16 v40; // r12
  __int64 v41; // rax
  __int64 v42; // r12
  int *v43; // rax
  int v44; // edx
  __int64 v45; // r13
  __m128i v46; // xmm0
  wchar_t *v47; // xmm0_8
  __int64 v48; // rax
  wchar_t *Buffer; // rdx
  unsigned __int64 v50; // r15
  unsigned __int64 v51; // r12
  __int64 v52; // rdx
  __int64 v53; // r12
  __int64 ModuleEntry; // rax
  __int64 v55; // r15
  __int64 v56; // rcx
  __int64 v57; // rcx
  _QWORD *v58; // rax
  __int64 v59; // rcx
  __int64 v60; // rax
  __int64 v61; // r11
  __int64 v62; // rdx
  __int64 v63; // rdx
  int v64; // ecx
  char v65; // r12
  int v66; // ecx
  __int64 v67; // rdx
  unsigned __int64 v68; // r9
  _WORD *v69; // rax
  unsigned __int64 v70; // rcx
  __int16 v71; // r8
  const void *v72; // rcx
  const void *v73; // r8
  int inited; // eax
  char v75; // cl
  __int64 v76; // rax
  __int64 v77; // r15
  char v78; // r12
  unsigned __int64 v79; // rcx
  __int64 v80; // r15
  char v81; // al
  unsigned int v82; // ecx
  __int64 v83; // rcx
  unsigned __int64 v84; // r8
  unsigned __int64 v85; // r9
  __int64 v86; // [rsp+28h] [rbp-410h]
  __int64 v87; // [rsp+30h] [rbp-408h]
  __int64 v88; // [rsp+38h] [rbp-400h]
  int ImageFileExecutionOptions; // [rsp+50h] [rbp-3E8h] BYREF
  char v90; // [rsp+54h] [rbp-3E4h] BYREF
  char v91; // [rsp+55h] [rbp-3E3h] BYREF
  char v92[2]; // [rsp+56h] [rbp-3E2h] BYREF
  int v93; // [rsp+58h] [rbp-3E0h]
  __int64 v94; // [rsp+60h] [rbp-3D8h] BYREF
  __int64 v95; // [rsp+68h] [rbp-3D0h] BYREF
  __m128i v96; // [rsp+70h] [rbp-3C8h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+80h] [rbp-3B8h] BYREF
  unsigned int v98; // [rsp+90h] [rbp-3A8h] BYREF
  int v99; // [rsp+94h] [rbp-3A4h] BYREF
  int v100; // [rsp+98h] [rbp-3A0h]
  unsigned __int64 v101; // [rsp+A0h] [rbp-398h] BYREF
  HANDLE v102; // [rsp+A8h] [rbp-390h] BYREF
  unsigned __int16 v103; // [rsp+B0h] [rbp-388h] BYREF
  __int16 v104; // [rsp+B2h] [rbp-386h]
  unsigned __int64 v105; // [rsp+B8h] [rbp-380h]
  HANDLE v106; // [rsp+C0h] [rbp-378h] BYREF
  __int128 v107; // [rsp+C8h] [rbp-370h] BYREF
  __m128i v108; // [rsp+D8h] [rbp-360h] BYREF
  unsigned int v109; // [rsp+E8h] [rbp-350h]
  int v110; // [rsp+ECh] [rbp-34Ch]
  __int64 v111; // [rsp+F0h] [rbp-348h]
  __int64 v112; // [rsp+F8h] [rbp-340h] BYREF
  __int64 v113; // [rsp+100h] [rbp-338h]
  struct _TEB *v114; // [rsp+108h] [rbp-330h]
  __int64 v115; // [rsp+110h] [rbp-328h]
  UNICODE_STRING v116; // [rsp+120h] [rbp-318h] BYREF
  __int64 v117; // [rsp+130h] [rbp-308h]
  __int64 (__fastcall *v118[2])(_BYTE *, __int64); // [rsp+138h] [rbp-300h] BYREF
  __int64 v119; // [rsp+148h] [rbp-2F0h] BYREF
  int v120; // [rsp+150h] [rbp-2E8h] BYREF
  const WCHAR *v121; // [rsp+158h] [rbp-2E0h]
  __int64 v122; // [rsp+160h] [rbp-2D8h] BYREF
  __int64 v123; // [rsp+168h] [rbp-2D0h] BYREF
  __int64 SystemInformation; // [rsp+170h] [rbp-2C8h] BYREF
  int v125; // [rsp+178h] [rbp-2C0h] BYREF
  int v126; // [rsp+180h] [rbp-2B8h]
  __int64 v127; // [rsp+188h] [rbp-2B0h]
  int *v128; // [rsp+190h] [rbp-2A8h]
  int v129; // [rsp+198h] [rbp-2A0h]
  __int128 v130; // [rsp+1A0h] [rbp-298h]
  __int64 v131; // [rsp+1B0h] [rbp-288h]
  __int64 v132; // [rsp+1B8h] [rbp-280h]
  _QWORD v133[4]; // [rsp+1C0h] [rbp-278h] BYREF
  __int64 v134; // [rsp+1E0h] [rbp-258h] BYREF
  int v135; // [rsp+1E8h] [rbp-250h]
  _BYTE v136[56]; // [rsp+1F0h] [rbp-248h] BYREF
  _OWORD v137[15]; // [rsp+230h] [rbp-208h] BYREF
  _QWORD v138[12]; // [rsp+320h] [rbp-118h] BYREF
  __int64 v139[16]; // [rsp+380h] [rbp-B8h] BYREF

  v113 = a2;
  v115 = a1;
  v120 = 1441812;
  v121 = L"\\KnownDlls";
  RtlSetUnhandledExceptionFilter(0LL);
  v3 = NtCurrentTeb();
  v114 = v3;
  ProcessEnvironmentBlock = (__int64)v3->ProcessEnvironmentBlock;
  PebLdr = 88;
  v5 = 1;
  byte_1801653C4 = 1;
  qword_1801653D8 = (__int64)&qword_1801653D0;
  qword_1801653D0 = (__int64)&qword_1801653D0;
  qword_1801653E8 = (__int64)&qword_1801653E0;
  qword_1801653E0 = (__int64)&qword_1801653E0;
  qword_1801653F8 = (__int64)&qword_1801653F0;
  qword_1801653F0 = (__int64)&qword_1801653F0;
  v6 = 0;
  byte_180165408 = 0;
  qword_180165410 = 0LL;
  *(_QWORD *)(ProcessEnvironmentBlock + 24) = &PebLdr;
  v7 = 0x8000000LL;
  if ( (unsigned __int8)LdrpIsNlsUtf8Process()
    || (*(_DWORD *)(*(_QWORD *)(ProcessEnvironmentBlock + 32) + 8LL) & 0x8000000) != 0 )
  {
    *(_QWORD *)(ProcessEnvironmentBlock + 160) = 0LL;
    *(_QWORD *)(ProcessEnvironmentBlock + 168) = 0LL;
  }
  LdrpInitializeNlsInfo((_QWORD *)ProcessEnvironmentBlock);
  v8 = 0;
  v9 = *(_DWORD *)(ProcessEnvironmentBlock + 184) <= 1u;
  if ( *(_DWORD *)(ProcessEnvironmentBlock + 184) > 1u )
    v8 = 10240;
  SRWLockSpinCycleCount = v8;
  v10 = 0;
  if ( !v9 )
    v10 = 10240;
  ConditionVariableSpinCycleCount = v10;
  RtlpInitWaitOnAddress(ProcessEnvironmentBlock);
  RtlpInitializeNonVolatileFlush();
  v11 = *(_QWORD *)(ProcessEnvironmentBlock + 32);
  v12 = (_WORD *)(*(_QWORD *)(v11 + 104) + v11);
  if ( (*(_BYTE *)(v11 + 8) & 1) != 0 )
    v12 = *(_WORD **)(v11 + 104);
  v105 = (unsigned __int64)v12;
  v103 = *(_WORD *)(v11 + 96);
  v13 = v103;
  v104 = v103 + 2;
  if ( v103 >= 8u && *v12 == 92 )
  {
    if ( v12[1] == 63 && v12[2] == 63 && v12[3] == 92 )
    {
      v103 -= 8;
      v104 = v13 - 6;
      v105 = (unsigned __int64)(v12 + 4);
      *(_WORD *)(v11 + 96) -= 8;
      *(_WORD *)(v11 + 98) -= 8;
      *(_QWORD *)(v11 + 104) += 8LL;
    }
    v6 = 0;
  }
  v100 = 1;
  UseCOR = 0;
  LOBYTE(v5) = 0;
  v93 = v5;
  v99 = 0;
  RtlImageNtHeaderEx(3, *(_QWORD *)(ProcessEnvironmentBlock + 16), 0LL, &v95);
  LdrpAppHeaders = v95;
  if ( LdrpIsSecureProcess && (*(_BYTE *)(v95 + 22) & 0x20) == 0 )
  {
    v14 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        3791,
        "LdrpInitializeProcess",
        0,
        "Secure processes must be large address aware\n");
      v14 = LdrpDebugFlags;
    }
    if ( (v14 & 0x10) != 0 )
      __debugbreak();
    return -1073741637;
  }
  for ( i = 0; i < 0x20; ++i )
  {
    v17 = (_QWORD *)((char *)&LdrpHashTable + 16 * i);
    v17[1] = v17;
    *v17 = v17;
  }
  LdrpInitializeExceptionTable(a2);
  LdrpCaptureCriticalThunks();
  LdrProtectMrdata(1);
  LdrpOverrideExportSuppression();
  v137[12] = xmmword_18017A390;
  v18 = (_mm_srli_si128((__m128i)xmmword_18017A390, 8).m128i_u64[0] >> 4) & 3;
  if ( (_BYTE)v18 == 1 )
  {
    LdrpEnforceIntegrityContinuity = 1;
  }
  else
  {
    LdrpEnforceIntegrityContinuity = 0;
    v137[13] = xmmword_18017A390;
    LdrpAuditIntegrityContinuity = 0;
    if ( (_BYTE)v18 != 3 )
      goto LABEL_31;
  }
  LdrpAuditIntegrityContinuity = 1;
LABEL_31:
  result = LdrpInitializeExecutionOptions(&v103, ProcessEnvironmentBlock, a2, &v106, &v102, (__int64)&v94);
  ImageFileExecutionOptions = result;
  if ( result < 0 )
  {
    v19 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        3937,
        "LdrpInitializeProcess",
        0,
        "Initializing the execution options for the process %lx failed with status 0x%08lx\n",
        LODWORD(v3->ClientId.UniqueProcess),
        result);
      result = ImageFileExecutionOptions;
      v19 = LdrpDebugFlags;
    }
    goto LABEL_34;
  }
  if ( (*(_BYTE *)(ProcessEnvironmentBlock + 188) & 2) != 0 )
    LdrpDebugFlags |= 1u;
  if ( (LdrpDebugFlags & 5) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      3984,
      "LdrpInitializeProcess",
      2,
      "Initializing process 0x%p\n",
      v3->ClientId.UniqueProcess);
  v117 = 0LL;
  if ( v114->WowTebOffset <= 0 )
  {
    UseWOW64 = 0;
    v20 = 0;
  }
  else
  {
    UseWOW64 = 1;
    v20 = 1;
  }
  if ( v95 )
  {
    if ( *(_WORD *)(v95 + 24) == 267 && !v20 )
    {
      UseCOR = 1;
      LOBYTE(v5) = 1;
      v93 = v5;
      v6 = 1;
      result = LdrpCorFixupImage(*(_QWORD *)(ProcessEnvironmentBlock + 16));
      ImageFileExecutionOptions = result;
      if ( result < 0 )
        return result;
    }
  }
  if ( !UseWOW64 && !UseCOR )
  {
    v21 = RtlImageDirectoryEntryToData(*(_QWORD *)(ProcessEnvironmentBlock + 16), 1, 0xEu, &v125);
    if ( v21 )
    {
      UseCOR = 1;
      v5 = (unsigned __int8)v5;
      if ( (*(_BYTE *)(v21 + 16) & 1) != 0 )
        v5 = 1;
      v93 = v5;
    }
  }
  LdrpSystemDllBase = v113;
  if ( !UseWOW64 )
    v117 = *(_QWORD *)(ProcessEnvironmentBlock + 728);
  RtlpTimeout = *(_QWORD *)(ProcessEnvironmentBlock + 192);
  v111 = RtlNormalizeProcessParams(*(_QWORD *)(ProcessEnvironmentBlock + 32));
  v108 = *(__m128i *)(v111 + 96);
  Config = 0LL;
  if ( !UseWOW64 && (!UseCOR || !v6) )
    Config = LdrImageDirectoryEntryToLoadConfig(*(_QWORD *)(ProcessEnvironmentBlock + 16));
  v23 = Config;
  memset((char *)v138 + 4, 0, 0x5CuLL);
  v24 = 2;
  LODWORD(v138[0]) = 96;
  if ( v23 )
  {
    v25 = *v23;
    if ( *v23 >= 0x10 )
    {
      *(_DWORD *)(ProcessEnvironmentBlock + 188) &= ~v23[3];
      v25 = *v23;
    }
    if ( v25 >= 0x14 )
    {
      *(_DWORD *)(ProcessEnvironmentBlock + 188) |= v23[4];
      v25 = *v23;
    }
    if ( v25 >= 0x18 && v23[5] )
    {
      RtlpTimeout = -10000LL * (int)v23[5];
      v25 = *v23;
    }
    if ( v25 >= 0x4C )
    {
      v26 = v23[18];
      if ( v26 )
      {
        v27 = v26 & 0xFFFF0FFF;
        if ( v27 )
          v24 = v27;
      }
    }
    if ( v25 >= 0x20 && *((_QWORD *)v23 + 3) )
    {
      v138[3] = *((_QWORD *)v23 + 3);
      v25 = *v23;
    }
    if ( v25 >= 0x28 && *((_QWORD *)v23 + 4) )
    {
      v138[4] = *((_QWORD *)v23 + 4);
      v25 = *v23;
    }
    if ( v25 >= 0x38 && *((_QWORD *)v23 + 6) )
    {
      v138[5] = *((_QWORD *)v23 + 6);
      v25 = *v23;
    }
    if ( v25 >= 0x40 )
    {
      v28 = v138[6];
      if ( *((_QWORD *)v23 + 7) )
        v28 = *((_QWORD *)v23 + 7);
      v138[6] = v28;
    }
  }
  if ( (*(_BYTE *)(ProcessEnvironmentBlock + 188) & 2) != 0 )
    LdrpDebugFlags |= 1u;
  v29 = RtlpTimeoutDisable;
  if ( RtlpTimeout < -36000000000LL )
    v29 = 1;
  RtlpTimeoutDisable = v29;
  result = RtlpInitDeferredCriticalSection();
  ImageFileExecutionOptions = result;
  if ( result < 0 )
    return result;
  *(_QWORD *)(ProcessEnvironmentBlock + 120) = &TlsBitMap;
  *(_QWORD *)(ProcessEnvironmentBlock + 568) = &TlsExpansionBitMap;
  RtlpFlsInitialize((struct _RTLP_FLS_CONTEXT *)&RtlpFlsContext);
  TlsBitMap = 64;
  qword_180165348 = ProcessEnvironmentBlock + 128;
  *(_DWORD *)(ProcessEnvironmentBlock + 128) |= 1u;
  TlsExpansionBitMap = 1024;
  qword_180165328 = ProcessEnvironmentBlock + 576;
  *(_DWORD *)(ProcessEnvironmentBlock + 576) |= 1u;
  if ( UseWOW64 )
    RtlSetBits(*(_QWORD *)(ProcessEnvironmentBlock + 120), 0, 0x13u);
  RtlSetBits(*(_QWORD *)(ProcessEnvironmentBlock + 120), 4u, 1u);
  RtlSetBits(*(_QWORD *)(ProcessEnvironmentBlock + 120), 0x10u, 1u);
  v30 = *(_DWORD *)(ProcessEnvironmentBlock + 188);
  if ( (v30 & 0x1000) != 0 || (v31 = LdrpShouldCreateStackTraceDb) != 0 )
  {
    v98 = 24;
    ImageFileExecutionOptions = LdrQueryImageFileExecutionOptions(
                                  (int)&v103,
                                  (int)L"StackTraceDatabaseSizeInMb",
                                  4,
                                  (int)&v98,
                                  4,
                                  0LL);
    if ( ImageFileExecutionOptions >= 0 && v98 >= 0x18 )
    {
      if ( v98 <= 0x80 )
        v7 = v98 << 20;
    }
    else
    {
      v7 = 25165824LL;
    }
    if ( (LdrpDebugFlags & 5) != 0 )
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        4270,
        "LdrpInitializeProcess",
        2,
        "Stack trace database size is %Id Mb\n",
        v7 >> 20);
    v133[0] = 0LL;
    v133[1] = 0LL;
    v133[2] = v7;
    RtlControlStackTraceDataBase(0LL, 24LL, v133);
    v30 = *(_DWORD *)(ProcessEnvironmentBlock + 188);
    v31 = LdrpShouldCreateStackTraceDb;
  }
  if ( (v30 & 0x1000) != 0 || v31 )
    RtlpForceCSDebugInfoCreation = 1;
  if ( (NtCurrentPeb()->AppCompatFlags.LowPart & 0x400000) != 0 )
  {
    RtlpForceCSDebugInfoCreation = 1;
    RtlpForceCSToUseEvents = 1;
  }
  result = RtlInitializeCriticalSection((__int64)&FastPebLock);
  ImageFileExecutionOptions = result;
  if ( result < 0 )
    return result;
  *(_QWORD *)(ProcessEnvironmentBlock + 56) = &FastPebLock;
  result = RtlInitializeHeapManager(&v103);
  ImageFileExecutionOptions = result;
  if ( result < 0 )
    return result;
  v137[14] = xmmword_18017A390;
  if ( (((unsigned __int64)xmmword_18017A390 >> 12) & 3) == 1 )
    RtlSetHeapInformation(0LL, 1, 0LL, 0LL);
  if ( UseWOW64 || *(_WORD *)(v95 + 24) == 267 )
  {
    v32 = 0LL;
    v33 = 0LL;
  }
  else
  {
    if ( *(_WORD *)(v95 + 72) <= 3u && *(_WORD *)(v95 + 74) < 0x33u )
      v24 |= 0x10000u;
    v32 = *(_QWORD *)(v95 + 120);
    v33 = *(_QWORD *)(v95 + 112);
  }
  Heap = RtlCreateHeap(v24, 0LL, v33, v32, 0LL, (__int64)v138);
  v35 = (void *)Heap;
  if ( !Heap )
  {
    v36 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) == 0 )
      goto LABEL_121;
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      4372,
      "LdrpInitializeProcess",
      0,
      "Creating the process heap failed\n");
    goto LABEL_120;
  }
  *(_QWORD *)(ProcessEnvironmentBlock + 48) = Heap;
  LdrpInitializeEnclaves();
  if ( (*(_DWORD *)(ProcessEnvironmentBlock + 188) & 0x800000) != 0 )
    RtlInitializeExceptionLog(50LL);
  RtlpInitializeThreadActivationContextStack((__int64)v114);
  LdrpHeap = (__int64)v35;
  InitializeSListHead(&EtwpFreeRegistrationList);
  PrivateLoggerNotificationEntry = 0LL;
  ImageFileExecutionOptions = NtQuerySystemInformation(
                                SystemHypervisorSharedPageInformation,
                                &SystemInformation,
                                8u,
                                0LL);
  v37 = RtlpHypervisorSharedUserVa;
  if ( ImageFileExecutionOptions >= 0 )
    v37 = SystemInformation;
  RtlpHypervisorSharedUserVa = v37;
  NtdllBaseTag = RtlCreateTagHeap(v35, 0, (__int64)L"NTDLL!", L"!Process");
  result = TpInitializePackage();
  ImageFileExecutionOptions = result;
  if ( result < 0 )
    return result;
  if ( *(_DWORD *)(v111 + 1080) )
    TpSetDefaultPoolCpuSets(*(void **)(v111 + 1072));
  EtwEventRegister((int)&PrivateLoggerNotificationGuid, 0LL, 0LL, (__int64)&g_hPrivLoggerNotificationProvider);
  EtwEventRegister(
    (int)&UserDiagnosticGuid,
    (__int64)UserDiagnosticProviderCallback,
    0LL,
    (__int64)&g_hUserDiagnosticProvider);
  RtlInitializeHeapLogging();
  WinSqmCheckEscalationSetString();
  result = RtlpInitEnvironmentBlock();
  ImageFileExecutionOptions = result;
  if ( result < 0 )
    return result;
  result = RtlpInitParameterBlock();
  ImageFileExecutionOptions = result;
  if ( result < 0 )
    return result;
  v38 = *(_QWORD *)(ProcessEnvironmentBlock + 32);
  v111 = v38;
  v108 = *(__m128i *)(v38 + 96);
  v105 = _mm_srli_si128(v108, 8).m128i_u64[0];
  if ( v106 || v102 )
  {
    ImageFileExecutionOptions = RtlQueryApplicationKeyOption(
                                  (__int64)v102,
                                  (__int64)v106,
                                  (__int64)L"DebugProcessHeapOnly",
                                  4u,
                                  (__int64)&v99,
                                  4,
                                  0,
                                  0LL);
    if ( ImageFileExecutionOptions >= 0 && dword_18015F9B8 && v99 )
    {
      dword_18015F9B8 = 0;
      *(_DWORD *)RtlpDebugPageHeapTable &= ~0x400u;
    }
  }
  NtSystemRoot = RtlGetNtSystemRoot();
  RtlInitUnicodeStringEx((__int64)&v116, NtSystemRoot);
  v40 = v116.Length + 40;
  v41 = RtlAllocateHeap((__int64)v35, 0, (unsigned int)v116.Length + 38 + 2LL);
  if ( !v41 )
    return -1073741801;
  LOWORD(v107) = 0;
  WORD1(v107) = v40;
  *((_QWORD *)&v107 + 1) = v41;
  RtlAppendUnicodeStringToString((unsigned __int16 *)&v107, (__int16 *)&v116);
  RtlAppendUnicodeStringToString((unsigned __int16 *)&v107, SlashSystem32SlashString);
  if ( (*(_BYTE *)(ProcessEnvironmentBlock + 3) & 0x42) != 2 )
  {
    v42 = 48LL;
    v126 = 48;
    v127 = 0LL;
    v129 = 64;
    v128 = &v120;
    v130 = 0LL;
    result = ZwOpenDirectoryObject();
    ImageFileExecutionOptions = result;
    if ( result != -1073741772 || (*(_BYTE *)(ProcessEnvironmentBlock + 3) & 0x40) == 0 )
    {
      if ( result >= 0 )
      {
        v126 = 48;
        v127 = LdrpKnownDllDirectoryHandle;
        v129 = 64;
        v128 = (int *)&unk_1801192D0;
        v130 = 0LL;
        result = ZwOpenSymbolicLinkObject();
        ImageFileExecutionOptions = result;
        if ( result >= 0 )
        {
          while ( 1 )
          {
            v45 = RtlAllocateHeap((__int64)v35, 0, v42);
            if ( !v45 )
              return -1073741801;
            LdrpKnownDllPath = 0;
            word_180164F12 = v42;
            qword_180164F18 = v45;
            result = NtQuerySymbolicLinkObject();
            ImageFileExecutionOptions = result;
            if ( result >= 0 )
            {
              NtClose(v118[1]);
              v38 = v111;
              goto LABEL_161;
            }
            if ( result != -1073741789 )
            {
              v19 = LdrpDebugFlags;
              if ( (LdrpDebugFlags & 3) == 0 )
                goto LABEL_34;
              LODWORD(v86) = result;
              LdrpLogDbgPrint(
                (unsigned int)"minkernel\\ntdll\\ldrinit.c",
                4695,
                "LdrpInitializeProcess",
                0,
                "Querying the known DLL directory link object failed with status 0x%08lx\n",
                v86);
              goto LABEL_150;
            }
            RtlFreeHeap((__int64)v35, 0, v45);
            v42 = v109;
          }
        }
        v19 = LdrpDebugFlags;
        if ( (LdrpDebugFlags & 3) == 0 )
          goto LABEL_34;
        LODWORD(v87) = result;
        v43 = (int *)&unk_1801192D0;
        v44 = 4660;
      }
      else
      {
        v19 = LdrpDebugFlags;
        if ( (LdrpDebugFlags & 3) == 0 )
          goto LABEL_34;
        LODWORD(v87) = result;
        v43 = &v120;
        v44 = 4637;
      }
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        v44,
        "LdrpInitializeProcess",
        0,
        "Failed to open %wZ with status 0x%08lx\n",
        v43,
        v87);
LABEL_150:
      result = ImageFileExecutionOptions;
      v19 = LdrpDebugFlags;
      goto LABEL_34;
    }
    if ( (LdrpDebugFlags & 5) != 0 )
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        4627,
        "LdrpInitializeProcess",
        2,
        "KnownDLL directory does not yet exist.  SMSS will create it.\n");
    ImageFileExecutionOptions = 0;
  }
LABEL_161:
  if ( UseWOW64 || LdrpIsSecureProcess )
  {
    UnicodeString = v116;
  }
  else
  {
    v46 = *(__m128i *)(v38 + 56);
    *(_QWORD *)&UnicodeString.Length = *(_QWORD *)(v38 + 56);
    v47 = (wchar_t *)_mm_srli_si128(v46, 8).m128i_u64[0];
    UnicodeString.Buffer = v47;
    if ( !v47 || !UnicodeString.Length || !*v47 )
    {
      UnicodeString.Buffer = (wchar_t *)RtlAllocateHeap((__int64)v35, 0, 8LL);
      if ( !UnicodeString.Buffer )
      {
        v36 = LdrpDebugFlags;
        if ( (LdrpDebugFlags & 3) != 0 )
        {
          LdrpLogDbgPrint(
            (unsigned int)"minkernel\\ntdll\\ldrinit.c",
            4743,
            "LdrpInitializeProcess",
            0,
            "Allocating a buffer to hold the current working directory failed\n");
LABEL_120:
          v36 = LdrpDebugFlags;
          goto LABEL_121;
        }
        goto LABEL_121;
      }
      v100 = 0;
      v48 = RtlGetNtSystemRoot();
      Buffer = UnicodeString.Buffer;
      *(_DWORD *)UnicodeString.Buffer = *(_DWORD *)v48;
      Buffer[2] = *(_WORD *)(v48 + 4);
      UnicodeString.Buffer[3] = 0;
      *(_DWORD *)&UnicodeString.Length = 524294;
    }
  }
  LdrpInitializePolicy();
  v50 = (unsigned __int16)v107;
  if ( (*(_DWORD *)(*(_QWORD *)(ProcessEnvironmentBlock + 32) + 8LL) & 0x20000000) != 0 )
    v50 = 2LL * (unsigned __int16)v107 + 22;
  v51 = v50;
  if ( !LdrpCheckPolicy(1) )
  {
    v51 = v50 + 2 * (v116.Length + 9LL);
    if ( (*(_BYTE *)(ProcessEnvironmentBlock + 3) & 2) != 0 )
      *(_WORD *)(v38 + 80) = 0;
  }
  v96.m128i_i64[1] = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v51);
  if ( !v96.m128i_i64[1] )
  {
    v36 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        4826,
        "LdrpInitializeProcess",
        0,
        "Failed to allocate the system dirs string!\n");
      goto LABEL_120;
    }
LABEL_121:
    if ( (v36 & 0x10) != 0 )
      __debugbreak();
    return -1073741801;
  }
  v96.m128i_i16[0] = 0;
  v96.m128i_i16[1] = v51;
  RtlAppendUnicodeStringToString((unsigned __int16 *)&v96, (__int16 *)&v107);
  v52 = 59LL;
  *(_WORD *)(v96.m128i_i64[1] + 2 * ((unsigned __int64)v96.m128i_u16[0] >> 1) - 2) = 59;
  RtlpSystem32Dirs = (__int128)v96;
  LdrpSystem32 = (__int128)v96;
  LOWORD(LdrpSystem32) = _mm_cvtsi128_si32(v96) - 2;
  if ( (*(_DWORD *)(*(_QWORD *)(ProcessEnvironmentBlock + 32) + 8LL) & 0x20000000) != 0 )
  {
    RtlAppendUnicodeStringToString((unsigned __int16 *)&v96, (__int16 *)&v107);
    RtlAppendUnicodeToString((unsigned __int16 *)&v96, L"forwarders;");
  }
  if ( v51 > v50 )
  {
    RtlAppendUnicodeStringToString((unsigned __int16 *)&v96, (__int16 *)&v116);
    RtlAppendUnicodeToString((unsigned __int16 *)&v96, L"\\system;");
    RtlAppendUnicodeStringToString((unsigned __int16 *)&v96, (__int16 *)&v116);
    RtlAppendUnicodeToString((unsigned __int16 *)&v96, L";");
    RtlpSystemDirs = (__int128)v96;
  }
  if ( (unsigned int)(LdrpIllegalCWDDevices - 1) <= 0xFFFFFFFD )
    LdrpCheckAppDirType(&v108, v52);
  v53 = v113;
  RtlImageNtHeaderEx(3, v113, 0LL, &v112);
  ModuleEntry = LdrpAllocateModuleEntry(0LL);
  v55 = ModuleEntry;
  if ( !ModuleEntry )
  {
    v36 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        4933,
        "LdrpInitializeProcess",
        0,
        "Allocating a data table entry for the system DLL failed\n");
      goto LABEL_120;
    }
    goto LABEL_121;
  }
  LdrpNtDllDataTableEntry = ModuleEntry;
  *(_DWORD *)(*(_QWORD *)(ModuleEntry + 152) + 24LL) = -1;
  *(_WORD *)(**(_QWORD **)(LdrpNtDllDataTableEntry + 152) - 52LL) = -1;
  v56 = LdrpNtDllDataTableEntry;
  *(_DWORD *)(LdrpNtDllDataTableEntry + 104) |= 0x204u;
  *(_QWORD *)(v56 + 248) -= qword_18017A300;
  v56 += 72LL;
  *(_OWORD *)v56 = v107;
  RtlAppendUnicodeStringToString((unsigned __int16 *)v56, NtDllName);
  v57 = LdrpNtDllDataTableEntry;
  *(_OWORD *)(LdrpNtDllDataTableEntry + 88) = *(_OWORD *)NtDllName;
  *(_QWORD *)(v57 + 48) = v53;
  LdrpInsertDataTableEntry(v57);
  LdrpLogDllState(*(_QWORD *)(LdrpNtDllDataTableEntry + 48), LdrpNtDllDataTableEntry + 72, 0x14A5u);
  LdrpInsertModuleToIndex(LdrpNtDllDataTableEntry, v112);
  result = LdrpProcessMappedModule(LdrpNtDllDataTableEntry, 0, 1);
  ImageFileExecutionOptions = result;
  if ( result < 0 )
    return result;
  LdrpLogDllState(*(_QWORD *)(LdrpNtDllDataTableEntry + 48), LdrpNtDllDataTableEntry + 72, 0x14AEu);
  *(_DWORD *)(*(_QWORD *)(LdrpNtDllDataTableEntry + 152) + 56LL) = 9;
  RtlInitializeHistoryTable();
  v58 = (_QWORD *)(v55 + 32);
  v59 = qword_1801653F0;
  if ( *(__int64 **)(qword_1801653F0 + 8) != &qword_1801653F0 )
    __fastfail(3u);
  *v58 = qword_1801653F0;
  *(_QWORD *)(v55 + 40) = &qword_1801653F0;
  *(_QWORD *)(v59 + 8) = v58;
  qword_1801653F0 = v55 + 32;
  result = LdrpInitParallelLoadingSupport();
  ImageFileExecutionOptions = result;
  if ( result < 0 )
  {
    v19 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      LODWORD(v86) = result;
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        5012,
        "LdrpInitializeProcess",
        0,
        "Failed to initialize Parallel loader, st = 0x%x\n",
        v86);
      goto LABEL_150;
    }
LABEL_34:
    if ( (v19 & 0x10) != 0 )
      __debugbreak();
    return result;
  }
  LdrpDrainWorkQueue(0);
  LdrpInitializeDllPath(0LL, 0LL, v139);
  memset(v137, 0, 0xC0uLL);
  *(_QWORD *)&v137[1] = v139;
  LODWORD(v137[2]) = 512;
  v137[0] = v108;
  *((_QWORD *)&v137[2] + 1) = &ImageFileExecutionOptions;
  v60 = LdrpAllocateModuleEntry((__int64)v137);
  v61 = v60;
  if ( !v60 )
  {
    v36 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        5033,
        "LdrpInitializeProcess",
        0,
        "Allocating a data table entry for the executable failed\n");
      goto LABEL_120;
    }
    goto LABEL_121;
  }
  LdrpImageEntry = v60;
  v62 = 2LL;
  do
  {
    *(_DWORD *)(*(_QWORD *)(LdrpImageEntry + 152) + 24LL) = -1;
    --v62;
  }
  while ( v62 );
  *(_WORD *)(**(_QWORD **)(LdrpImageEntry + 152) - 52LL) = -1;
  v63 = LdrpImageEntry;
  *(__m128i *)(LdrpImageEntry + 72) = v108;
  *(_DWORD *)(v63 + 104) |= 4u;
  v64 = *(_DWORD *)(v63 + 104);
  if ( (NtCurrentPeb()->BitField & 0x10) != 0 )
  {
    v64 |= 1u;
    *(_DWORD *)(v63 + 104) = v64;
  }
  v65 = v93;
  if ( UseCOR )
  {
    v66 = v64 | 0x400000;
    *(_DWORD *)(v63 + 104) = v66;
    if ( v65 )
      *(_DWORD *)(v63 + 104) = v66 | 0x1000000;
  }
  v67 = LdrpImageEntry;
  if ( (*(_BYTE *)(ProcessEnvironmentBlock + 3) & 4) != 0 )
    *(_QWORD *)(LdrpImageEntry + 248) = 0LL;
  v68 = 0LL;
  v69 = (_WORD *)(v108.m128i_i64[1] + v108.m128i_u16[0]);
  if ( v69 )
  {
    while ( 1 )
    {
      v70 = (unsigned __int64)v69--;
      if ( v70 <= v108.m128i_i64[1] )
        break;
      if ( *v69 == 92 )
      {
        v68 = v70;
        break;
      }
    }
  }
  if ( v68 )
  {
    v71 = v108.m128i_i16[4] + v108.m128i_i16[0] - v68;
    *(_WORD *)(v67 + 88) = v71;
    if ( v108.m128i_u16[1] - (unsigned __int64)v108.m128i_u16[0] >= 2 )
      v71 += 2;
    *(_WORD *)(v67 + 90) = v71;
    *(_QWORD *)(v67 + 96) = v68;
  }
  else
  {
    *(_OWORD *)(v67 + 88) = *(_OWORD *)(v61 + 72);
  }
  v72 = *(const void **)(ProcessEnvironmentBlock + 16);
  v73 = v72;
  if ( *(const void **)(v95 + 48) != v72 && !v65 && !UseWOW64 )
  {
    result = LdrpProtectAndRelocateImage(v72);
    ImageFileExecutionOptions = result;
    if ( result < 0 )
      return result;
    v73 = *(const void **)(ProcessEnvironmentBlock + 16);
    v67 = LdrpImageEntry;
  }
  *(_QWORD *)(v67 + 48) = v73;
  LdrpInsertDataTableEntry(v67);
  if ( (LdrpDebugFlags & 5) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      5156,
      "LdrpInitializeProcess",
      2,
      "Beginning execution of %wZ (%wZ)\n\tCurrent directory: %wZ\n\tPackage directories: %wZ\n",
      LdrpImageEntry + 88,
      LdrpImageEntry + 72,
      &UnicodeString,
      &LdrpAppPackagesPath);
  LdrpLogDllState(*(_QWORD *)(LdrpImageEntry + 48), LdrpImageEntry + 72, 0x14A5u);
  LdrpInsertModuleToIndex(LdrpImageEntry, v95);
  result = LdrpProcessMappedModule(LdrpImageEntry, 0, UseWOW64 == 0, v137);
  ImageFileExecutionOptions = result;
  if ( result < 0 )
    return result;
  *(_DWORD *)(*(_QWORD *)(LdrpImageEntry + 152) + 56LL) = 9;
  inited = RtlpInitCurrentDir(&UnicodeString.Length);
  ImageFileExecutionOptions = inited;
  if ( inited < 0 )
  {
    v75 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      LODWORD(v87) = inited;
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        5193,
        "LdrpInitializeProcess",
        0,
        "Initializing the current directory to \"%wZ\" failed with status 0x%08lx\n",
        &UnicodeString,
        v87);
      v75 = LdrpDebugFlags;
    }
    if ( (v75 & 0x10) != 0 )
      __debugbreak();
  }
  if ( !v100 )
    RtlFreeAnsiString(&UnicodeString);
  if ( AvrfAppVerifierMode )
  {
    v76 = LdrpAllocateModuleEntry(0LL);
    v77 = v76;
    if ( !v76 )
    {
      v36 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) != 0 )
      {
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          5216,
          "LdrpInitializeProcess",
          0,
          "Allocating a data table entry for the application verifier DLL failed\n");
        goto LABEL_120;
      }
      goto LABEL_121;
    }
    *(_DWORD *)(*(_QWORD *)(v76 + 152) + 24LL) = -1;
    *(_WORD *)(**(_QWORD **)(v76 + 152) - 52LL) = -1;
    *(_DWORD *)(v76 + 104) |= *(_DWORD *)(v94 + 104);
    *(_QWORD *)(v76 + 248) = *(_QWORD *)(v94 + 248);
    *(_WORD *)(v76 + 110) = 0;
    *(_OWORD *)(v76 + 72) = *(_OWORD *)(v94 + 72);
    *(_OWORD *)(v76 + 88) = *(_OWORD *)(v94 + 88);
    *(_DWORD *)(v76 + 128) = *(_DWORD *)(v94 + 128);
    *(_QWORD *)(v76 + 48) = *(_QWORD *)(v94 + 48);
    LdrpInsertDataTableEntry(v76);
    LdrpLogDllState(*(_QWORD *)(v77 + 48), v77 + 72, 0x14A5u);
    result = RtlImageNtHeaderEx(3, *(_QWORD *)(v77 + 48), 0LL, &v112);
    ImageFileExecutionOptions = result;
    if ( result < 0 )
      return result;
    LdrpInsertModuleToIndex(v77, v112);
    result = LdrpProcessMappedModule(v77, 0, 1);
    ImageFileExecutionOptions = result;
    if ( result < 0 )
      return result;
    *(_QWORD *)(v77 + 56) = *(_QWORD *)(v94 + 56);
    LdrpLogDllState(*(_QWORD *)(v77 + 48), v77 + 72, 0x14ADu);
    *(_DWORD *)(*(_QWORD *)(v77 + 152) + 56LL) = 7;
    if ( (*(_DWORD *)(ProcessEnvironmentBlock + 188) & 0x100) == 0 && (AvrfAppVerifierMode & 2) == 0 )
    {
      v90 = 0;
      result = LdrpInitializeGraphRecurse(*(__int64 **)(v77 + 152), 0LL, &v90);
      ImageFileExecutionOptions = result;
    }
    else
    {
      result = AVrfInitializeVerifier(0, 0, 0, 1, v113, 0LL);
      ImageFileExecutionOptions = result;
      if ( result >= 0 && (AvrfAppVerifierMode & 2) != 0 )
      {
        *(_DWORD *)(*(_QWORD *)(v77 + 152) + 56LL) = 9;
        result = ImageFileExecutionOptions;
      }
    }
    if ( result < 0 )
      return result;
  }
  LdrpDropLastInProgressCount();
  if ( UseWOW64 )
  {
    if ( v106 )
    {
      NtClose(v106);
      v106 = 0LL;
      if ( LdrpLargePageDllKeyHandle )
      {
        NtClose(LdrpLargePageDllKeyHandle);
        LdrpLargePageDllKeyHandle = 0LL;
      }
    }
    if ( v102 )
    {
      NtClose(v102);
      v102 = 0LL;
    }
    result = LdrpLoadWow64((__int16 *)&v107);
    ImageFileExecutionOptions = result;
    if ( result >= 0 )
    {
      if ( *(_BYTE *)(ProcessEnvironmentBlock + 2) )
        LdrpDoDebuggerBreak();
      LdrInitState = 3;
      _interlockedbittestandreset((volatile signed __int32 *)(ProcessEnvironmentBlock + 80), 1u);
      Wow64LdrpInitialize(v115);
LABEL_328:
      if ( v106 )
        NtClose(v106);
      if ( v102 )
        NtClose(v102);
      return 0;
    }
    return result;
  }
  v119 = 0LL;
  if ( UseCOR )
  {
    result = LdrpCorInitialize(&v119);
    ImageFileExecutionOptions = result;
    if ( result < 0 )
      return result;
    v78 = v93;
    if ( (_BYTE)v93 )
    {
      result = LdrpCorValidateImage(*(_QWORD *)(ProcessEnvironmentBlock + 16));
      ImageFileExecutionOptions = result;
      if ( result < 0 )
        return result;
    }
    if ( (v114->SameTebFlags & 0x400) != 0 )
      *(_QWORD *)(v115 + 128) = __ROR8__(LdrpCorExeMainRoutine, 64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330];
  }
  else
  {
    v78 = v93;
  }
  result = LdrpInitializeTls();
  ImageFileExecutionOptions = result;
  if ( result < 0 )
  {
    v19 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      LODWORD(v86) = result;
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        5443,
        "LdrpInitializeProcess",
        0,
        "Initializing TLS slots failed with status 0x%08lx\n",
        v86);
      goto LABEL_150;
    }
    goto LABEL_34;
  }
  if ( v119 )
  {
    v91 = 0;
    result = LdrpInitializeGraphRecurse(*(__int64 **)(v119 + 152), 0LL, &v91);
    ImageFileExecutionOptions = result;
    if ( result < 0 )
    {
      v19 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) != 0 )
      {
        LODWORD(v86) = result;
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          5462,
          "LdrpInitializeProcess",
          0,
          "DllMain of MSCOREE (or its dependents) failed with status 0x%08lx\n",
          v86);
        goto LABEL_150;
      }
      goto LABEL_34;
    }
  }
  result = LdrpInitializeImportRedirection();
  ImageFileExecutionOptions = result;
  if ( result < 0 )
  {
    v19 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      LODWORD(v86) = result;
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        5478,
        "LdrpInitializeProcess",
        0,
        "Loading of import redirection module failed with status 0x%08x\n",
        v86);
      goto LABEL_150;
    }
    goto LABEL_34;
  }
  v118[0] = 0LL;
  if ( (unsigned __int16)(*(_WORD *)(v95 + 92) - 2) <= 1u )
  {
    result = LdrLoadDll(16385LL, 0LL, (__int64)LdrpKernel32DllName, &v101);
    ImageFileExecutionOptions = result;
    if ( result < 0 )
    {
      if ( result != -1073741515 )
      {
        v19 = LdrpDebugFlags;
        if ( (LdrpDebugFlags & 3) != 0 )
        {
          LODWORD(v87) = result;
          LdrpLogDbgPrint(
            (unsigned int)"minkernel\\ntdll\\ldrinit.c",
            5636,
            "LdrpInitializeProcess",
            0,
            "Loading Windows subsystem DLL \"%wZ\" failed with status 0x%08lx\n",
            LdrpKernel32DllName,
            v87);
          goto LABEL_150;
        }
        goto LABEL_34;
      }
      result = LdrLoadDll(16385LL, 0LL, (__int64)&LdrpKernelbaseDllName, &v101);
      ImageFileExecutionOptions = result;
      if ( result < 0 )
      {
        v19 = LdrpDebugFlags;
        if ( (LdrpDebugFlags & 3) != 0 )
        {
          LODWORD(v87) = result;
          LdrpLogDbgPrint(
            (unsigned int)"minkernel\\ntdll\\ldrinit.c",
            5609,
            "LdrpInitializeProcess",
            0,
            "Loading Windows subsystem DLL \"%wZ\" failed with status 0x%08lx\n",
            &LdrpKernelbaseDllName,
            v87);
          goto LABEL_150;
        }
        goto LABEL_34;
      }
      result = LdrpCodeAuthzInitialize();
      ImageFileExecutionOptions = result;
      if ( (int)(result + 0x80000000) >= 0 && result != -1073741515 )
      {
        v19 = LdrpDebugFlags;
        if ( (LdrpDebugFlags & 3) != 0 )
        {
          LODWORD(v86) = result;
          LdrpLogDbgPrint(
            (unsigned int)"minkernel\\ntdll\\ldrinit.c",
            5625,
            "LdrpInitializeProcess",
            0,
            "LdrpCodeAuthzInitialize failed with status 0x%08lx\n",
            v86);
          goto LABEL_150;
        }
        goto LABEL_34;
      }
      ImageFileExecutionOptions = 0;
      v79 = v101;
    }
    else
    {
      result = LdrGetProcedureAddress(v101, &qword_180119330, 0, &Kernel32ThreadInitThunkFunction);
      ImageFileExecutionOptions = result;
      if ( result < 0 )
      {
        v19 = LdrpDebugFlags;
        if ( (LdrpDebugFlags & 3) != 0 )
        {
          LODWORD(v88) = result;
          LdrpLogDbgPrint(
            (unsigned int)"minkernel\\ntdll\\ldrinit.c",
            5523,
            "LdrpInitializeProcess",
            0,
            "Locating procedure \"%Z\" in Windows subsystem DLL \"%wZ\" failed with status 0x%08lx\n",
            &qword_180119330,
            LdrpKernel32DllName,
            v88);
          goto LABEL_150;
        }
        goto LABEL_34;
      }
      LdrGetProcedureAddress(v101, &qword_180119350, 0, v118);
      result = LdrpSnapKernelBaseExtensions();
      ImageFileExecutionOptions = result;
      if ( result < 0 )
        return result;
      result = LdrpCodeAuthzInitialize();
      ImageFileExecutionOptions = result;
      if ( result < 0 )
        return result;
      result = LdrpFindLoadedDll((__int64)&LdrpKernelbaseDllName, 0, &v122);
      ImageFileExecutionOptions = result;
      if ( result < 0 )
      {
        v19 = LdrpDebugFlags;
        if ( (LdrpDebugFlags & 3) != 0 )
        {
          LODWORD(v87) = result;
          LdrpLogDbgPrint(
            (unsigned int)"minkernel\\ntdll\\ldrinit.c",
            5591,
            "LdrpInitializeProcess",
            0,
            "Finding \"%wZ\" failed with status 0x%08lx\n",
            &LdrpKernelbaseDllName,
            v87);
          goto LABEL_150;
        }
        goto LABEL_34;
      }
      v79 = *(_QWORD *)(v122 + 48);
      v101 = v79;
    }
    result = LdrGetProcedureAddress(v79, &qword_1801193B0, 0, &v123);
    ImageFileExecutionOptions = result;
    if ( result < 0 )
    {
      v19 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) != 0 )
      {
        LODWORD(v86) = result;
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          5654,
          "LdrpInitializeProcess",
          0,
          "Finding KernelbasePostInit failed with status 0x%08lx\n",
          v86);
        goto LABEL_150;
      }
      goto LABEL_34;
    }
    result = _guard_dispatch_icall_fptr();
    ImageFileExecutionOptions = result;
    if ( result < 0 )
    {
      v19 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) != 0 )
      {
        LODWORD(v86) = result;
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          5662,
          "LdrpInitializeProcess",
          0,
          "Calling KernelbasePostInit failed with status 0x%08lx\n",
          v86);
        goto LABEL_150;
      }
      goto LABEL_34;
    }
    ImageFileExecutionOptions = 0;
  }
  LdrpDrainWorkQueue(0);
  SbObtainTraceHandle(0LL);
  v80 = v117;
  if ( v117 && *(_DWORD *)(v117 + 528) )
  {
    *(_QWORD *)(ProcessEnvironmentBlock + 736) = 0LL;
    LdrpInitShimEngine(v80);
  }
  v81 = RtlpForceCSDebugInfoCreation;
  if ( (NtCurrentPeb()->AppCompatFlags.LowPart & 0x400000) != 0 )
    v81 = 1;
  RtlpForceCSDebugInfoCreation = v81;
  if ( (NtCurrentPeb()->AppCompatFlags.LowPart & 0x10000000) != 0 )
  {
    *(_DWORD *)(v38 + 1036) = 1;
    v82 = 1;
  }
  else
  {
    v82 = *(_DWORD *)(v38 + 1036);
  }
  LdrpEnableParallelLoading(v82);
  LdrInitState = 1;
  *(_DWORD *)(*(_QWORD *)(LdrpImageEntry + 152) + 56LL) = 2;
  **((_DWORD **)&v137[2] + 1) = 0;
  if ( v78 )
  {
    result = LdrpCorProcessImports(LdrpImageEntry);
  }
  else
  {
    LODWORD(v137[2]) |= 1u;
    LdrpMapAndSnapDependency((__int64)v137);
    LdrpDrainWorkQueue(1);
    result = ImageFileExecutionOptions;
    if ( ImageFileExecutionOptions < 0 )
      goto LABEL_311;
    result = LdrpPrepareModuleForExecution(LdrpImageEntry, *((__int64 *)&v137[2] + 1));
  }
  ImageFileExecutionOptions = result;
  if ( result < 0 )
  {
LABEL_311:
    v19 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      LODWORD(v86) = result;
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        5874,
        "LdrpInitializeProcess",
        0,
        "Walking the import tables of the executable and its static imports failed with status 0x%08lx\n",
        v86);
      goto LABEL_150;
    }
    goto LABEL_34;
  }
  LdrInitState = 2;
  v110 = 1;
  v131 = *(_QWORD *)(LdrpImageEntry + 48);
  v132 = 4096LL;
  ZwSetInformationVirtualMemory();
  if ( *(_BYTE *)(ProcessEnvironmentBlock + 2) )
    LdrpDoDebuggerBreak();
  LdrpDropLastInProgressCount();
  if ( !Kernel32ThreadInitThunkFunction
    || (result = _guard_dispatch_icall_fptr(), ImageFileExecutionOptions = result, result >= 0)
    && (result = LdrpInitializePerUserWindowsDirectory(v118[0]), ImageFileExecutionOptions = result, result >= 0) )
  {
    LdrpProcessInitContextRecord = v115;
    LdrpDrainWorkQueue(0);
    LdrpAcquireLoaderLock(v83);
    v92[0] = 0;
    ImageFileExecutionOptions = LdrpInitializeGraphRecurse(
                                  *(__int64 **)(LdrpImageEntry + 152),
                                  *((__int64 *)&v137[2] + 1),
                                  v92);
    LdrpReleaseLoaderLock(0LL, 9, ImageFileExecutionOptions);
    LdrpFreeLoadContextOfNode(*(_QWORD **)(LdrpImageEntry + 152), *((__int64 *)&v137[2] + 1));
    LdrpDropLastInProgressCount();
    LdrpProcessInitContextRecord = 0LL;
    LdrpReleaseDllPath((__int64)v139);
    result = ImageFileExecutionOptions;
    if ( ImageFileExecutionOptions < 0 )
    {
      v19 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) != 0 )
      {
        LODWORD(v86) = ImageFileExecutionOptions;
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          6016,
          "LdrpInitializeProcess",
          0,
          "Running the init routines of the executable's static imports failed with status 0x%08lx\n",
          v86);
        goto LABEL_150;
      }
      goto LABEL_34;
    }
    if ( *(_WORD *)(LdrpImageEntry + 110) )
    {
      v134 = 72LL;
      v135 = 1;
      memset(v136, 0, sizeof(v136));
      RtlActivateActivationContextUnsafeFast((__int64)&v134, *(_QWORD *)(LdrpImageEntry + 136));
      LdrpCallTlsInitializers(1, LdrpImageEntry, v84, v85);
      RtlDeactivateActivationContextUnsafeFast((__int64)&v134);
    }
    if ( g_ShimsEnabled )
    {
      RtlDecodeSystemPointer(g_pfnSE_InstallAfterInit);
      if ( !(unsigned __int8)_guard_dispatch_icall_fptr() )
      {
        g_ShimsEnabled = 0;
        LdrUnloadDll(g_pShimEngineModule);
        g_pShimEngineModule = 0LL;
      }
    }
    if ( *(_QWORD *)(ProcessEnvironmentBlock + 560) )
      _guard_dispatch_icall_fptr();
    goto LABEL_328;
  }
  return result;
}
