/*
 * XREFs of RtlInitUnicodeStringEx @ 0x180028DF0
 * Callers:
 *     RtlQueryImageMitigationPolicy @ 0x180001140 (RtlQueryImageMitigationPolicy.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x180017900 (LdrLoadAlternateResourceModuleEx.c)
 *     RtlpComputeLangListCheckSum @ 0x180018A84 (RtlpComputeLangListCheckSum.c)
 *     RtlpDosPathNameToRelativeNtPathName_U @ 0x180025F70 (RtlpDosPathNameToRelativeNtPathName_U.c)
 *     RtlGetFullPathName_UEx @ 0x1800291D0 (RtlGetFullPathName_UEx.c)
 *     RtlIsDosDeviceName_U @ 0x1800292C0 (RtlIsDosDeviceName_U.c)
 *     LdrpFindKnownDll @ 0x18002934C (LdrpFindKnownDll.c)
 *     CompatCachepLookupCdb @ 0x18002946C (CompatCachepLookupCdb.c)
 *     LdrpResolveDllName @ 0x180029CEC (LdrpResolveDllName.c)
 *     RtlDoesFileExists_UEx @ 0x18005A68C (RtlDoesFileExists_UEx.c)
 *     WerpGlobalFlagsForProcess @ 0x18006B88C (WerpGlobalFlagsForProcess.c)
 *     RtlpOpenImageFileOptionsKeyEx @ 0x1800736F0 (RtlpOpenImageFileOptionsKeyEx.c)
 *     RtlpProcessIFEOKeyFilter @ 0x180073914 (RtlpProcessIFEOKeyFilter.c)
 *     RtlQueryImageFileKeyOption @ 0x180079F00 (RtlQueryImageFileKeyOption.c)
 *     LdrGetKnownDllSectionHandle @ 0x180083980 (LdrGetKnownDllSectionHandle.c)
 *     RtlDosSearchPath_U @ 0x18008A850 (RtlDosSearchPath_U.c)
 *     LdrpInitializeApplicationVerifierPackage @ 0x1800D12B4 (LdrpInitializeApplicationVerifierPackage.c)
 *     LdrpInitializeExecutionOptions @ 0x1800D17B0 (LdrpInitializeExecutionOptions.c)
 *     LdrpInitializeProcess @ 0x1800D25F8 (LdrpInitializeProcess.c)
 *     LdrpQueryIllegalCWDDevices @ 0x1800D4C10 (LdrpQueryIllegalCWDDevices.c)
 *     LdrpAddRedirectedFunction @ 0x1800D5124 (LdrpAddRedirectedFunction.c)
 *     AVrfInitializeVerifier @ 0x1800D8C38 (AVrfInitializeVerifier.c)
 *     RtlSetImageMitigationPolicy @ 0x1800E0C90 (RtlSetImageMitigationPolicy.c)
 *     RtlpIsEmptyImageFileOptionsKey @ 0x1800E1D08 (RtlpIsEmptyImageFileOptionsKey.c)
 *     RtlpQueryEafPlusModuleList @ 0x1800E1EE8 (RtlpQueryEafPlusModuleList.c)
 *     SbpResolveBasedOnName @ 0x1801101A8 (SbpResolveBasedOnName.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlInitUnicodeStringEx(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  __int16 v3; // ax

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = a2;
  if ( !a2 )
    return 0LL;
  v2 = -1LL;
  do
    ++v2;
  while ( *(_WORD *)(a2 + 2 * v2) );
  if ( v2 <= 0x7FFE )
  {
    v3 = 2 * v2;
    *(_WORD *)a1 = v3;
    *(_WORD *)(a1 + 2) = v3 + 2;
    return 0LL;
  }
  return 3221225734LL;
}
