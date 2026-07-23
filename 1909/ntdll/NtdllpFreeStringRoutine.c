/*
 * XREFs of NtdllpFreeStringRoutine @ 0x18006D930
 * Callers:
 *     RtlpGetRegistryHandle @ 0x180003D40 (RtlpGetRegistryHandle.c)
 *     RtlUpcaseUnicodeString @ 0x18000E4A0 (RtlUpcaseUnicodeString.c)
 *     LdrpFindLoadedDll @ 0x180021908 (LdrpFindLoadedDll.c)
 *     LdrpFindLoadedDllInternal @ 0x1800219E8 (LdrpFindLoadedDllInternal.c)
 *     LdrpLoadForwardedDll @ 0x180021EC0 (LdrpLoadForwardedDll.c)
 *     LdrpLoadDll @ 0x180022180 (LdrpLoadDll.c)
 *     LdrpLoadDependentModule @ 0x180023170 (LdrpLoadDependentModule.c)
 *     RtlAnsiStringToUnicodeString @ 0x180024B70 (RtlAnsiStringToUnicodeString.c)
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x1800263C0 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 *     sxsisol_CanonicalizeFullPathFileName @ 0x180027528 (sxsisol_CanonicalizeFullPathFileName.c)
 *     RtlGetFullPathName_UstrEx @ 0x180028E40 (RtlGetFullPathName_UstrEx.c)
 *     LdrpGetFullPath @ 0x180029974 (LdrpGetFullPath.c)
 *     RtlFreeAnsiString @ 0x180029BA0 (RtlFreeAnsiString.c)
 *     LdrpGetNtPathFromDosPath @ 0x180029C14 (LdrpGetNtPathFromDosPath.c)
 *     RtlCreateUnicodeString @ 0x18002BE80 (RtlCreateUnicodeString.c)
 *     LdrpMapDllSearchPath @ 0x18002DEC8 (LdrpMapDllSearchPath.c)
 *     LdrpFreeUnicodeString @ 0x18002E1A4 (LdrpFreeUnicodeString.c)
 *     LdrpMapDllFullPath @ 0x18002E4A8 (LdrpMapDllFullPath.c)
 *     RtlUpcaseUnicodeStringToOemString @ 0x180061BD0 (RtlUpcaseUnicodeStringToOemString.c)
 *     RtlUnicodeStringToOemString @ 0x180061CC0 (RtlUnicodeStringToOemString.c)
 *     RtlOemStringToUnicodeString @ 0x180061D80 (RtlOemStringToUnicodeString.c)
 *     RtlUnicodeStringToAnsiString @ 0x1800623D0 (RtlUnicodeStringToAnsiString.c)
 *     LdrpInitShimEngine @ 0x1800690E0 (LdrpInitShimEngine.c)
 *     LdrpMapDllRetry @ 0x1800709A8 (LdrpMapDllRetry.c)
 *     RtlDowncaseUnicodeString @ 0x180070C80 (RtlDowncaseUnicodeString.c)
 *     RtlpResolveAssemblyStorageMapEntry @ 0x180071438 (RtlpResolveAssemblyStorageMapEntry.c)
 *     RtlpProbeAssemblyStorageRootForAssembly @ 0x180071980 (RtlpProbeAssemblyStorageRootForAssembly.c)
 *     RtlDuplicateUnicodeString @ 0x180077F10 (RtlDuplicateUnicodeString.c)
 *     RtlpEnsureBufferSize @ 0x18007FA50 (RtlpEnsureBufferSize.c)
 *     LdrpCorInitialize @ 0x180081710 (LdrpCorInitialize.c)
 *     RtlFreeOemString @ 0x18008A1A0 (RtlFreeOemString.c)
 *     LdrpEnclaveAddDependentModule @ 0x1800CDD10 (LdrpEnclaveAddDependentModule.c)
 *     LdrpGetProcApphelpCheckModule @ 0x1800D109C (LdrpGetProcApphelpCheckModule.c)
 *     LdrpAddRedirectedFunction @ 0x1800D5124 (LdrpAddRedirectedFunction.c)
 *     LdrUpdatePackageSearchPath @ 0x1800DDBC0 (LdrUpdatePackageSearchPath.c)
 *     RtlUnicodeStringToCountedOemString @ 0x1800E8AE0 (RtlUnicodeStringToCountedOemString.c)
 *     RtlUpcaseUnicodeStringToAnsiString @ 0x1800E8C10 (RtlUpcaseUnicodeStringToAnsiString.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x1800E8D20 (RtlUpcaseUnicodeStringToCountedOemString.c)
 * Callees:
 *     <none>
 */

LOGICAL __fastcall NtdllpFreeStringRoutine(void *a1)
{
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
}
