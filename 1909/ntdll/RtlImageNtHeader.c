/*
 * XREFs of RtlImageNtHeader @ 0x18001B960
 * Callers:
 *     LdrpGetImageSize @ 0x18001A870 (LdrpGetImageSize.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x18001F014 (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     SbpDetermineDllContext @ 0x18002C750 (SbpDetermineDllContext.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x180059490 (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrpMapResourceFile @ 0x180059A64 (LdrpMapResourceFile.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x18005A6C4 (RtlpFileIsWin32WithRCManifest.c)
 *     TpAllocPoolInternal @ 0x180062FD4 (TpAllocPoolInternal.c)
 *     RtlCreateUserStack @ 0x180074D80 (RtlCreateUserStack.c)
 *     LdrpCorFixupImage @ 0x1800CEEB8 (LdrpCorFixupImage.c)
 *     AVrfpLoadAndInitializeProvider @ 0x1800DA090 (AVrfpLoadAndInitializeProvider.c)
 *     AvrfMiniLoadDll @ 0x1800DA9B4 (AvrfMiniLoadDll.c)
 *     RtlComputeImportTableHash @ 0x1800DF680 (RtlComputeImportTableHash.c)
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x1800E03D0 (LdrpGetAlternateResourceModuleHandleEx.c)
 *     LdrpGetMappingFromCacheEntry @ 0x1800E055C (LdrpGetMappingFromCacheEntry.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x18001CB40 (RtlImageNtHeaderEx.c)
 */

PIMAGE_NT_HEADERS __cdecl RtlImageNtHeader(PVOID BaseOfImage)
{
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+38h] [rbp+10h] BYREF

  OutHeaders = 0LL;
  RtlImageNtHeaderEx(1u, BaseOfImage, 0LL, &OutHeaders);
  return OutHeaders;
}
