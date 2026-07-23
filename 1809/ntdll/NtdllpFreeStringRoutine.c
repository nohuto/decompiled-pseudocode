/*
 * XREFs of NtdllpFreeStringRoutine @ 0x1800178B0
 * Callers:
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x18000B060 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 *     LdrpFindLoadedDll @ 0x1800229B8 (LdrpFindLoadedDll.c)
 *     LdrpFindLoadedDllInternal @ 0x180022ADC (LdrpFindLoadedDllInternal.c)
 *     LdrpLoadForwardedDll @ 0x180022F00 (LdrpLoadForwardedDll.c)
 *     LdrpLoadDll @ 0x180023190 (LdrpLoadDll.c)
 *     LdrpLoadDependentModule @ 0x180023AC0 (LdrpLoadDependentModule.c)
 *     RtlAnsiStringToUnicodeString @ 0x180025AA0 (RtlAnsiStringToUnicodeString.c)
 *     LdrpGetFullPath @ 0x180028FE4 (LdrpGetFullPath.c)
 *     LdrpGetNtPathFromDosPath @ 0x180029D7C (LdrpGetNtPathFromDosPath.c)
 *     RtlFreeAnsiString @ 0x18002A5F0 (RtlFreeAnsiString.c)
 *     RtlGetFullPathName_UstrEx @ 0x18002B310 (RtlGetFullPathName_UstrEx.c)
 *     RtlpResolveAssemblyStorageMapEntry @ 0x180033AC8 (RtlpResolveAssemblyStorageMapEntry.c)
 *     RtlpProbeAssemblyStorageRootForAssembly @ 0x180034010 (RtlpProbeAssemblyStorageRootForAssembly.c)
 *     RtlUpcaseUnicodeString @ 0x18003AFF0 (RtlUpcaseUnicodeString.c)
 *     RtlCreateUnicodeString @ 0x1800427A0 (RtlCreateUnicodeString.c)
 *     RtlpGetRegistryHandle @ 0x180053FCC (RtlpGetRegistryHandle.c)
 *     LdrpCorInitialize @ 0x180054948 (LdrpCorInitialize.c)
 *     RtlOemStringToUnicodeString @ 0x18006A2D0 (RtlOemStringToUnicodeString.c)
 *     RtlUpcaseUnicodeStringToOemString @ 0x18006A470 (RtlUpcaseUnicodeStringToOemString.c)
 *     RtlUnicodeStringToOemString @ 0x18006A560 (RtlUnicodeStringToOemString.c)
 *     RtlUnicodeStringToAnsiString @ 0x18006A800 (RtlUnicodeStringToAnsiString.c)
 *     LdrpInitShimEngine @ 0x180070248 (LdrpInitShimEngine.c)
 *     LdrpMapDllFullPath @ 0x180070F28 (LdrpMapDllFullPath.c)
 *     LdrpMapDllSearchPath @ 0x180071120 (LdrpMapDllSearchPath.c)
 *     LdrpFreeUnicodeString @ 0x1800713F4 (LdrpFreeUnicodeString.c)
 *     LdrpMapDllRetry @ 0x180071958 (LdrpMapDllRetry.c)
 *     RtlpEnsureBufferSize @ 0x180075A40 (RtlpEnsureBufferSize.c)
 *     RtlDowncaseUnicodeString @ 0x180078220 (RtlDowncaseUnicodeString.c)
 *     RtlDuplicateUnicodeString @ 0x18007E1D0 (RtlDuplicateUnicodeString.c)
 *     RtlFreeOemString @ 0x18008D4F0 (RtlFreeOemString.c)
 *     LdrpEnclaveAddDependentModule @ 0x1800CF448 (LdrpEnclaveAddDependentModule.c)
 *     LdrpGetProcApphelpCheckModule @ 0x1800D28CC (LdrpGetProcApphelpCheckModule.c)
 *     LdrpAddRedirectedFunction @ 0x1800D7210 (LdrpAddRedirectedFunction.c)
 *     LdrUpdatePackageSearchPath @ 0x1800E0310 (LdrUpdatePackageSearchPath.c)
 *     RtlUnicodeStringToCountedOemString @ 0x1800EBD60 (RtlUnicodeStringToCountedOemString.c)
 *     RtlUpcaseUnicodeStringToAnsiString @ 0x1800EBE90 (RtlUpcaseUnicodeStringToAnsiString.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x1800EBFA0 (RtlUpcaseUnicodeStringToCountedOemString.c)
 * Callees:
 *     <none>
 */

LOGICAL __fastcall NtdllpFreeStringRoutine(void *a1)
{
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
}
