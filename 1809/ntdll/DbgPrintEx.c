/*
 * XREFs of DbgPrintEx @ 0x18004D290
 * Callers:
 *     RtlFindActivationContextSectionGuid @ 0x18000A540 (RtlFindActivationContextSectionGuid.c)
 *     RtlpLocateActivationContextSection @ 0x18000AE54 (RtlpLocateActivationContextSection.c)
 *     RtlpFindActivationContextSection_CheckParameters @ 0x18000AFDC (RtlpFindActivationContextSection_CheckParameters.c)
 *     sxsisol_SearchActCtxForDllName @ 0x18000B588 (sxsisol_SearchActCtxForDllName.c)
 *     RtlFindActivationContextSectionString @ 0x18000B990 (RtlFindActivationContextSectionString.c)
 *     RtlpFindUnicodeStringInSection @ 0x18000BCF4 (RtlpFindUnicodeStringInSection.c)
 *     TppCallbackCheckThreadAfterCallback @ 0x18001725C (TppCallbackCheckThreadAfterCallback.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x180025950 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlQueryInformationActivationContext @ 0x18002DE20 (RtlQueryInformationActivationContext.c)
 *     RtlQueryActivationContextApplicationSettings @ 0x180030670 (RtlQueryActivationContextApplicationSettings.c)
 *     RtlpQueryInformationActivationContextDetailedInformation @ 0x180031A58 (RtlpQueryInformationActivationContextDetailedInformation.c)
 *     RtlpCrackActivationContextStringSectionHeader @ 0x180031CB0 (RtlpCrackActivationContextStringSectionHeader.c)
 *     RtlpQueryRunLevel @ 0x1800320F8 (RtlpQueryRunLevel.c)
 *     RtlCreateActivationContext @ 0x1800324F0 (RtlCreateActivationContext.c)
 *     RtlpInitializeAssemblyStorageMap @ 0x180032658 (RtlpInitializeAssemblyStorageMap.c)
 *     RtlpValidateActivationContextData @ 0x1800326DC (RtlpValidateActivationContextData.c)
 *     RtlpAssemblyStorageMapResolutionDefaultCallback @ 0x180033050 (RtlpAssemblyStorageMapResolutionDefaultCallback.c)
 *     RtlGetAssemblyStorageRoot @ 0x1800333E4 (RtlGetAssemblyStorageRoot.c)
 *     RtlpGetActivationContextDataStorageMapAndRosterHeader @ 0x180033504 (RtlpGetActivationContextDataStorageMapAndRosterHeader.c)
 *     RtlpResolveAssemblyStorageMapEntry @ 0x180033AC8 (RtlpResolveAssemblyStorageMapEntry.c)
 *     RtlpInsertAssemblyStorageMapEntry @ 0x180033EE8 (RtlpInsertAssemblyStorageMapEntry.c)
 *     RtlpProbeAssemblyStorageRootForAssembly @ 0x180034010 (RtlpProbeAssemblyStorageRootForAssembly.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x18003E440 (LdrpLoadResourceFromAlternativeModule.c)
 *     TpCheckTerminateWorker @ 0x18005A950 (TpCheckTerminateWorker.c)
 *     RtlpWaitOnCriticalSection @ 0x18005EA34 (RtlpWaitOnCriticalSection.c)
 *     RtlAcquireResourceShared @ 0x18006DCC0 (RtlAcquireResourceShared.c)
 *     RtlAcquireResourceExclusive @ 0x18006DE00 (RtlAcquireResourceExclusive.c)
 *     RtlDeactivateActivationContext @ 0x180076700 (RtlDeactivateActivationContext.c)
 *     UninitUser32Proc @ 0x18008FBF0 (UninitUser32Proc.c)
 *     AVrfInitializeVerifier @ 0x1800DACE8 (AVrfInitializeVerifier.c)
 *     AvrfMiniLoadDll @ 0x1800DCAA8 (AvrfMiniLoadDll.c)
 *     RtlpQueryAssemblyInformationActivationContextDetailedInformation @ 0x1800E0F80 (RtlpQueryAssemblyInformationActivationContextDetailedInformation.c)
 *     RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation @ 0x1800E1210 (RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation.c)
 *     RtlpGetAssemblyStorageMapRootLocation @ 0x1800E1550 (RtlpGetAssemblyStorageMapRootLocation.c)
 *     RtlpDbgPrintCriticalSectionTimeout @ 0x1800E9768 (RtlpDbgPrintCriticalSectionTimeout.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800E9920 (RtlpNotOwnerCriticalSection.c)
 *     RtlAssert @ 0x1800ED360 (RtlAssert.c)
 *     RtlReportCriticalFailure @ 0x1800FB3FC (RtlReportCriticalFailure.c)
 *     RtlUnhandledExceptionFilter2 @ 0x1800FD160 (RtlUnhandledExceptionFilter2.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x18004F348 (vDbgPrintExWithPrefixInternal.c)
 */

ULONG DbgPrintEx(ULONG ComponentId, ULONG Level, PCSTR Format, ...)
{
  va_list va; // [rsp+58h] [rbp+20h] BYREF

  va_start(va, Format);
  return vDbgPrintExWithPrefixInternal(&Flags, ComponentId, Level, Format, (__int64 *)va, 1);
}
