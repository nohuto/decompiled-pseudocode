/*
 * XREFs of NtdllpAllocateStringRoutine @ 0x18006D908
 * Callers:
 *     RtlpQueryRegistryDirect @ 0x180003C3C (RtlpQueryRegistryDirect.c)
 *     RtlpGetRegistryHandle @ 0x180003D40 (RtlpGetRegistryHandle.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x180009998 (RtlpGetPolicyValueForSystemCapability.c)
 *     RtlpGetTokenNamedObjectPath @ 0x18000BCF8 (RtlpGetTokenNamedObjectPath.c)
 *     RtlUpcaseUnicodeString @ 0x18000E4A0 (RtlUpcaseUnicodeString.c)
 *     RtlFormatCurrentUserKeyPath @ 0x180013800 (RtlFormatCurrentUserKeyPath.c)
 *     LdrpSnapKernelBaseExtensions @ 0x180021B60 (LdrpSnapKernelBaseExtensions.c)
 *     LdrpLoadDependentModule @ 0x180023170 (LdrpLoadDependentModule.c)
 *     RtlAnsiStringToUnicodeString @ 0x180024B70 (RtlAnsiStringToUnicodeString.c)
 *     LdrpAllocateFileNameBufferIfNeeded @ 0x18002580C (LdrpAllocateFileNameBufferIfNeeded.c)
 *     RtlDosSearchPath_Ustr @ 0x180025850 (RtlDosSearchPath_Ustr.c)
 *     RtlGetFullPathName_UstrEx @ 0x180028E40 (RtlGetFullPathName_UstrEx.c)
 *     LdrpGetFullPath @ 0x180029974 (LdrpGetFullPath.c)
 *     LdrpAllocateUnicodeString @ 0x180029E90 (LdrpAllocateUnicodeString.c)
 *     RtlCreateUnicodeString @ 0x18002BE80 (RtlCreateUnicodeString.c)
 *     RtlUpcaseUnicodeStringToOemString @ 0x180061BD0 (RtlUpcaseUnicodeStringToOemString.c)
 *     RtlUnicodeStringToOemString @ 0x180061CC0 (RtlUnicodeStringToOemString.c)
 *     RtlOemStringToUnicodeString @ 0x180061D80 (RtlOemStringToUnicodeString.c)
 *     RtlUnicodeStringToAnsiString @ 0x1800623D0 (RtlUnicodeStringToAnsiString.c)
 *     RtlStringFromGUIDEx @ 0x18006A4B0 (RtlStringFromGUIDEx.c)
 *     RtlDowncaseUnicodeString @ 0x180070C80 (RtlDowncaseUnicodeString.c)
 *     RtlpGetActivationContextDataStorageMapAndRosterHeader @ 0x180070E78 (RtlpGetActivationContextDataStorageMapAndRosterHeader.c)
 *     RtlpResolveAssemblyStorageMapEntry @ 0x180071438 (RtlpResolveAssemblyStorageMapEntry.c)
 *     RtlpProbeAssemblyStorageRootForAssembly @ 0x180071980 (RtlpProbeAssemblyStorageRootForAssembly.c)
 *     RtlDuplicateUnicodeString @ 0x180077F10 (RtlDuplicateUnicodeString.c)
 *     RtlpEnsureBufferSize @ 0x18007FA50 (RtlpEnsureBufferSize.c)
 *     RtlComputePrivatizedDllName_U @ 0x1800D5A80 (RtlComputePrivatizedDllName_U.c)
 *     LdrUpdatePackageSearchPath @ 0x1800DDBC0 (LdrUpdatePackageSearchPath.c)
 *     RtlpGetAssemblyStorageMapRootLocation @ 0x1800DF1D4 (RtlpGetAssemblyStorageMapRootLocation.c)
 *     RtlUnicodeStringToCountedOemString @ 0x1800E8AE0 (RtlUnicodeStringToCountedOemString.c)
 *     RtlUpcaseUnicodeStringToAnsiString @ 0x1800E8C10 (RtlUpcaseUnicodeStringToAnsiString.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x1800E8D20 (RtlUpcaseUnicodeStringToCountedOemString.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall NtdllpAllocateStringRoutine(SIZE_T a1)
{
  return RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
}
