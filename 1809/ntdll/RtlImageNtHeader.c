/*
 * XREFs of RtlImageNtHeader @ 0x180028AB0
 * Callers:
 *     SbpDetermineDllContext @ 0x180028934 (SbpDetermineDllContext.c)
 *     LdrpMapResourceFile @ 0x18002A918 (LdrpMapResourceFile.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x18002B5A0 (LdrpSetAlternateResourceModuleHandle.c)
 *     TpAllocPoolInternal @ 0x180030848 (TpAllocPoolInternal.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x18003451C (RtlpFileIsWin32WithRCManifest.c)
 *     RtlCreateUserStack @ 0x180077CE0 (RtlCreateUserStack.c)
 *     LdrpCorFixupImage @ 0x1800D05E8 (LdrpCorFixupImage.c)
 *     AVrfpLoadAndInitializeProvider @ 0x1800DC17C (AVrfpLoadAndInitializeProvider.c)
 *     AvrfMiniLoadDll @ 0x1800DCAA8 (AvrfMiniLoadDll.c)
 *     RtlComputeImportTableHash @ 0x1800E1A00 (RtlComputeImportTableHash.c)
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x1800E2828 (LdrpGetAlternateResourceModuleHandleEx.c)
 *     LdrpGetMappingFromCacheEntry @ 0x1800E29B4 (LdrpGetMappingFromCacheEntry.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180007BB0 (RtlImageNtHeaderEx.c)
 */

__int64 __fastcall RtlImageNtHeader(unsigned __int64 a1)
{
  __int64 v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0LL;
  RtlImageNtHeaderEx(1, a1, 0LL, &v2);
  return v2;
}
