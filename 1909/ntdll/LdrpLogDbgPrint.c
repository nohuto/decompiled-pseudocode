/*
 * XREFs of LdrpLogDbgPrint @ 0x1800CE3D8
 * Callers:
 *     LdrResolveDelayLoadedAPI @ 0x1800187C0 (LdrResolveDelayLoadedAPI.c)
 *     LdrpHandleProtectedDelayload @ 0x18001BB70 (LdrpHandleProtectedDelayload.c)
 *     LdrpGetProcedureAddress @ 0x18001C2B0 (LdrpGetProcedureAddress.c)
 *     LdrpSnapModule @ 0x18001C610 (LdrpSnapModule.c)
 *     LdrLoadDll @ 0x180021600 (LdrLoadDll.c)
 *     LdrpInitializeDllPath @ 0x180021798 (LdrpInitializeDllPath.c)
 *     LdrGetDllHandleEx @ 0x1800217F0 (LdrGetDllHandleEx.c)
 *     LdrpFindLoadedDllInternal @ 0x1800219E8 (LdrpFindLoadedDllInternal.c)
 *     LdrpLoadDllInternal @ 0x180022378 (LdrpLoadDllInternal.c)
 *     LdrpLoadDependentModule @ 0x180023170 (LdrpLoadDependentModule.c)
 *     LdrpCallTlsInitializers @ 0x18002507C (LdrpCallTlsInitializers.c)
 *     LdrpPreprocessDllName @ 0x180025240 (LdrpPreprocessDllName.c)
 *     LdrpFindKnownDll @ 0x18002934C (LdrpFindKnownDll.c)
 *     LdrpResolveDllName @ 0x180029CEC (LdrpResolveDllName.c)
 *     LdrpMinimalMapModule @ 0x18002A0B0 (LdrpMinimalMapModule.c)
 *     LdrpCompleteMapModule @ 0x18002A370 (LdrpCompleteMapModule.c)
 *     LdrpPrepareModuleForExecution @ 0x18002A958 (LdrpPrepareModuleForExecution.c)
 *     LdrpFindOrPrepareLoadingModule @ 0x18002AA74 (LdrpFindOrPrepareLoadingModule.c)
 *     LdrpDynamicShimModule @ 0x18002C6E4 (LdrpDynamicShimModule.c)
 *     LdrpSendPostSnapNotifications @ 0x18002C944 (LdrpSendPostSnapNotifications.c)
 *     LdrpSearchPath @ 0x18002D8FC (LdrpSearchPath.c)
 *     LdrpProcessWork @ 0x18002E26C (LdrpProcessWork.c)
 *     LdrpComputeLazyDllPath @ 0x18002E8CC (LdrpComputeLazyDllPath.c)
 *     LdrpUnloadNode @ 0x18002ECFC (LdrpUnloadNode.c)
 *     LdrpInitializeTls @ 0x180055158 (LdrpInitializeTls.c)
 *     LdrpWriteBackProtectedDelayLoad @ 0x18005551C (LdrpWriteBackProtectedDelayLoad.c)
 *     LdrpDoPostSnapWork @ 0x1800558D0 (LdrpDoPostSnapWork.c)
 *     LdrpAllocateTls @ 0x180055E24 (LdrpAllocateTls.c)
 *     LdrpDetectDetour @ 0x1800635CC (LdrpDetectDetour.c)
 *     LdrpInitShimEngine @ 0x1800690E0 (LdrpInitShimEngine.c)
 *     LdrpLoadShimEngine @ 0x180069284 (LdrpLoadShimEngine.c)
 *     LdrpInitializeShimDllDependencies @ 0x180069520 (LdrpInitializeShimDllDependencies.c)
 *     LdrpGetShimEngineInterface @ 0x180069660 (LdrpGetShimEngineInterface.c)
 *     LdrpInitializeNode @ 0x180069AA4 (LdrpInitializeNode.c)
 *     LdrShutdownProcess @ 0x18006B220 (LdrShutdownProcess.c)
 *     LdrpMergeNodes @ 0x18006CA78 (LdrpMergeNodes.c)
 *     LdrpProcessDetachNode @ 0x18006D950 (LdrpProcessDetachNode.c)
 *     LdrpFindDllActivationContext @ 0x18006F4D4 (LdrpFindDllActivationContext.c)
 *     LdrpReportError @ 0x18006F5D8 (LdrpReportError.c)
 *     _LdrpInitialize @ 0x1800720BC (_LdrpInitialize.c)
 *     LdrpRedirectDelayloadFailure @ 0x18007FAFC (LdrpRedirectDelayloadFailure.c)
 *     LdrpInitializeImportRedirection @ 0x180080C84 (LdrpInitializeImportRedirection.c)
 *     LdrpInitializePerUserWindowsDirectory @ 0x180081390 (LdrpInitializePerUserWindowsDirectory.c)
 *     LdrpLoadWow64 @ 0x1800822AC (LdrpLoadWow64.c)
 *     LdrpRelocateImage @ 0x180082750 (LdrpRelocateImage.c)
 *     LdrpProtectAndRelocateImage @ 0x180082830 (LdrpProtectAndRelocateImage.c)
 *     LdrGetKnownDllSectionHandle @ 0x180083980 (LdrGetKnownDllSectionHandle.c)
 *     LdrpInitializationFailure @ 0x1800897F0 (LdrpInitializationFailure.c)
 *     LdrInitShimEngineDynamic @ 0x1800D0D30 (LdrInitShimEngineDynamic.c)
 *     LdrpGetProcApphelpCheckModule @ 0x1800D109C (LdrpGetProcApphelpCheckModule.c)
 *     LdrpInitializeApplicationVerifierPackage @ 0x1800D12B4 (LdrpInitializeApplicationVerifierPackage.c)
 *     LdrpInitializeExecutionOptions @ 0x1800D17B0 (LdrpInitializeExecutionOptions.c)
 *     LdrpInitializeProcess @ 0x1800D25F8 (LdrpInitializeProcess.c)
 *     LdrpInitializeProcessWrapperFilter @ 0x1800D4690 (LdrpInitializeProcessWrapperFilter.c)
 *     LdrpIsSubstringFound @ 0x1800D4738 (LdrpIsSubstringFound.c)
 *     LdrpIsVerifierActivationFilterMatched @ 0x1800D4804 (LdrpIsVerifierActivationFilterMatched.c)
 *     LdrpGenericExceptionFilter @ 0x1800D5908 (LdrpGenericExceptionFilter.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x180053E88 (vDbgPrintExWithPrefixInternal.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     StringCbPrintfA @ 0x1800CE69C (StringCbPrintfA.c)
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
      (&off_1801184C8)[2 * a4]);
    return (struct _TEB *)vDbgPrintExWithPrefixInternal(pszDest, 0x55u, 0, a5, va, 1);
  }
  return result;
}
