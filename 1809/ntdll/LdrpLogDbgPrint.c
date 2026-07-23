/*
 * XREFs of LdrpLogDbgPrint @ 0x1800CFAF8
 * Callers:
 *     LdrpSnapModule @ 0x1800072B0 (LdrpSnapModule.c)
 *     LdrpHandleProtectedDelayload @ 0x180007CB0 (LdrpHandleProtectedDelayload.c)
 *     LdrpGetProcedureAddress @ 0x180009090 (LdrpGetProcedureAddress.c)
 *     LdrpNameToOrdinal @ 0x180009404 (LdrpNameToOrdinal.c)
 *     LdrpCompleteMapModule @ 0x180021B40 (LdrpCompleteMapModule.c)
 *     LdrpMinimalMapModule @ 0x180021EDC (LdrpMinimalMapModule.c)
 *     LdrpFindDllActivationContext @ 0x1800222F0 (LdrpFindDllActivationContext.c)
 *     LdrLoadDll @ 0x1800226B0 (LdrLoadDll.c)
 *     LdrpInitializeDllPath @ 0x180022848 (LdrpInitializeDllPath.c)
 *     LdrGetDllHandleEx @ 0x1800228A0 (LdrGetDllHandleEx.c)
 *     LdrpFindLoadedDllInternal @ 0x180022ADC (LdrpFindLoadedDllInternal.c)
 *     LdrpLoadDependentModule @ 0x180023AC0 (LdrpLoadDependentModule.c)
 *     LdrpCallTlsInitializers @ 0x180025DE4 (LdrpCallTlsInitializers.c)
 *     LdrpPreprocessDllName @ 0x180025FA8 (LdrpPreprocessDllName.c)
 *     LdrpLoadDllInternal @ 0x180026788 (LdrpLoadDllInternal.c)
 *     LdrpSendPostSnapNotifications @ 0x1800277F8 (LdrpSendPostSnapNotifications.c)
 *     LdrpInitializeNode @ 0x180028428 (LdrpInitializeNode.c)
 *     LdrpFindOrPrepareLoadingModule @ 0x180028D4C (LdrpFindOrPrepareLoadingModule.c)
 *     LdrpDetectDetour @ 0x180028E48 (LdrpDetectDetour.c)
 *     LdrShutdownProcess @ 0x1800290F0 (LdrShutdownProcess.c)
 *     LdrpPrepareModuleForExecution @ 0x1800294E4 (LdrpPrepareModuleForExecution.c)
 *     LdrpFindKnownDll @ 0x1800298B4 (LdrpFindKnownDll.c)
 *     LdrpResolveDllName @ 0x180029BD8 (LdrpResolveDllName.c)
 *     LdrpSearchPath @ 0x18002A61C (LdrpSearchPath.c)
 *     LdrpDynamicShimModule @ 0x18002AF68 (LdrpDynamicShimModule.c)
 *     LdrpInitializeTls @ 0x180035890 (LdrpInitializeTls.c)
 *     LdrpWriteBackProtectedDelayLoad @ 0x180035C68 (LdrpWriteBackProtectedDelayLoad.c)
 *     LdrpDoPostSnapWork @ 0x1800361E8 (LdrpDoPostSnapWork.c)
 *     LdrpAllocateTls @ 0x18003673C (LdrpAllocateTls.c)
 *     LdrResolveDelayLoadedAPI @ 0x180041E90 (LdrResolveDelayLoadedAPI.c)
 *     LdrpComputeLazyDllPath @ 0x180054250 (LdrpComputeLazyDllPath.c)
 *     LdrpUnloadNode @ 0x180055870 (LdrpUnloadNode.c)
 *     LdrpProcessDetachNode @ 0x180055D48 (LdrpProcessDetachNode.c)
 *     LdrpInitShimEngine @ 0x180070248 (LdrpInitShimEngine.c)
 *     LdrpLoadShimEngine @ 0x1800703EC (LdrpLoadShimEngine.c)
 *     LdrpInitializeShimDllDependencies @ 0x180070688 (LdrpInitializeShimDllDependencies.c)
 *     LdrpGetShimEngineInterface @ 0x1800707C8 (LdrpGetShimEngineInterface.c)
 *     LdrpProcessWork @ 0x180070CEC (LdrpProcessWork.c)
 *     LdrpReportError @ 0x180077180 (LdrpReportError.c)
 *     _LdrpInitialize @ 0x18007875C (_LdrpInitialize.c)
 *     LdrpMergeNodes @ 0x18007AD04 (LdrpMergeNodes.c)
 *     LdrpRedirectDelayloadFailure @ 0x1800847EC (LdrpRedirectDelayloadFailure.c)
 *     LdrpInitializeImportRedirection @ 0x180084E4C (LdrpInitializeImportRedirection.c)
 *     LdrpInitializePerUserWindowsDirectory @ 0x180085AD4 (LdrpInitializePerUserWindowsDirectory.c)
 *     LdrpLoadWow64 @ 0x1800869B0 (LdrpLoadWow64.c)
 *     LdrpRelocateImage @ 0x1800872D4 (LdrpRelocateImage.c)
 *     LdrpProtectAndRelocateImage @ 0x1800873B4 (LdrpProtectAndRelocateImage.c)
 *     LdrGetKnownDllSectionHandle @ 0x180087AE0 (LdrGetKnownDllSectionHandle.c)
 *     LdrInitShimEngineDynamic @ 0x1800D2560 (LdrInitShimEngineDynamic.c)
 *     LdrpGetProcApphelpCheckModule @ 0x1800D28CC (LdrpGetProcApphelpCheckModule.c)
 *     LdrpInitializationFailure @ 0x1800D2AE4 (LdrpInitializationFailure.c)
 *     LdrpInitializeApplicationVerifierPackage @ 0x1800D2B8C (LdrpInitializeApplicationVerifierPackage.c)
 *     LdrpInitializeExecutionOptions @ 0x1800D30E0 (LdrpInitializeExecutionOptions.c)
 *     LdrpInitializeProcess @ 0x1800D3FB4 (LdrpInitializeProcess.c)
 *     LdrpInitializeProcessWrapperFilter @ 0x1800D6804 (LdrpInitializeProcessWrapperFilter.c)
 *     LdrpIsSubstringFound @ 0x1800D68AC (LdrpIsSubstringFound.c)
 *     LdrpIsVerifierActivationFilterMatched @ 0x1800D6978 (LdrpIsVerifierActivationFilterMatched.c)
 *     LdrpGenericExceptionFilter @ 0x1800D7988 (LdrpGenericExceptionFilter.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x18004F348 (vDbgPrintExWithPrefixInternal.c)
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 *     StringCbPrintfA @ 0x1800CFDBC (StringCbPrintfA.c)
 */

struct _TEB *LdrpLogDbgPrint(_DWORD a1, _DWORD a2, const char *a3, int a4, char *a5, ...)
{
  struct _TEB *result; // rax
  char pszDest[256]; // [rsp+40h] [rbp-118h] BYREF
  va_list va; // [rsp+188h] [rbp+30h] BYREF

  va_start(va, a5);
  if ( (NtCurrentTeb()->SameTebFlags & 8) == 0 || (result = NtCurrentTeb(), (result->SameTebFlags & 0x20) != 0) )
  {
    StringCbPrintfA(
      pszDest,
      0x100uLL,
      "%04x:%04x @ %08d - %s - %s: ",
      LODWORD(NtCurrentTeb()->ClientId.UniqueProcess),
      LODWORD(NtCurrentTeb()->ClientId.UniqueThread),
      (MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24,
      a3,
      (&off_1801187A8)[2 * a4]);
    return (struct _TEB *)vDbgPrintExWithPrefixInternal(pszDest, 0x55u, 0, a5, va, 1);
  }
  return result;
}
