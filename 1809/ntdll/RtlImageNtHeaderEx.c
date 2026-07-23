/*
 * XREFs of RtlImageNtHeaderEx @ 0x180007BB0
 * Callers:
 *     RtlpImageDirectoryEntryToDataEx @ 0x180007188 (RtlpImageDirectoryEntryToDataEx.c)
 *     LdrpSnapModule @ 0x1800072B0 (LdrpSnapModule.c)
 *     LdrpHandleProtectedDelayload @ 0x180007CB0 (LdrpHandleProtectedDelayload.c)
 *     LdrpGetProcedureAddress @ 0x180009090 (LdrpGetProcedureAddress.c)
 *     LdrpGetFromMUIMemCache @ 0x180009C84 (LdrpGetFromMUIMemCache.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x18000A08C (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     LdrpGetImageSize @ 0x18000A2D4 (LdrpGetImageSize.c)
 *     LdrpMapDllWithSectionHandle @ 0x180021D1C (LdrpMapDllWithSectionHandle.c)
 *     LdrpProcessMappedModule @ 0x180026F8C (LdrpProcessMappedModule.c)
 *     LdrpValidateEntrySection @ 0x18002717C (LdrpValidateEntrySection.c)
 *     LdrpFetchAddressOfSecurityCookie @ 0x180027304 (LdrpFetchAddressOfSecurityCookie.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x1800273C4 (LdrImageDirectoryEntryToLoadConfig.c)
 *     LdrpPrepareImportAddressTableForSnap @ 0x18002769C (LdrpPrepareImportAddressTableForSnap.c)
 *     RtlImageNtHeader @ 0x180028AB0 (RtlImageNtHeader.c)
 *     LdrpInitializeTls @ 0x180035890 (LdrpInitializeTls.c)
 *     LdrpUnsuppressAddressTakenIat @ 0x180035D94 (LdrpUnsuppressAddressTakenIat.c)
 *     LdrpResGetResourceDirectory @ 0x1800381C0 (LdrpResGetResourceDirectory.c)
 *     LdrpResGetMappingSize @ 0x180039780 (LdrpResGetMappingSize.c)
 *     WerEscalationReadImageVersionInfoForModuleBaseSafe @ 0x1800560AC (WerEscalationReadImageVersionInfoForModuleBaseSafe.c)
 *     WerEscalationReadImageVersionInfoForModuleBase @ 0x180056124 (WerEscalationReadImageVersionInfoForModuleBase.c)
 *     CsrClientConnectToServer @ 0x18005D7C0 (CsrClientConnectToServer.c)
 *     LdrpFindLoadedDllByMappingFile @ 0x180076D50 (LdrpFindLoadedDllByMappingFile.c)
 *     LdrGetDllHandleByMapping @ 0x180076EC0 (LdrGetDllHandleByMapping.c)
 *     LdrpFindLoadedDllByMappingLockHeld @ 0x180076FF4 (LdrpFindLoadedDllByMappingLockHeld.c)
 *     LdrpGetImportDescriptorForSnap @ 0x180078D10 (LdrpGetImportDescriptorForSnap.c)
 *     LdrpCodeAuthzInitialize @ 0x18007FC18 (LdrpCodeAuthzInitialize.c)
 *     LdrpSetProtection @ 0x180087490 (LdrpSetProtection.c)
 *     LdrRelocateImageWithBias @ 0x1800875F8 (LdrRelocateImageWithBias.c)
 *     LdrVerifyImageMatchesChecksumEx @ 0x18008C7C0 (LdrVerifyImageMatchesChecksumEx.c)
 *     LdrpInitializeExceptionTable @ 0x1800D3090 (LdrpInitializeExceptionTable.c)
 *     LdrpInitializeProcess @ 0x1800D3FB4 (LdrpInitializeProcess.c)
 *     LdrpLocateMrdata @ 0x1800D7BB0 (LdrpLocateMrdata.c)
 *     AVrfInitializeVerifier @ 0x1800DACE8 (AVrfInitializeVerifier.c)
 *     LdrVerifyMappedImageMatchesChecksum @ 0x1800F4DE8 (LdrVerifyMappedImageMatchesChecksum.c)
 * Callees:
 *     RtlImageNtHeaderEx_ExceptionFilter @ 0x1800FAF80 (RtlImageNtHeaderEx_ExceptionFilter.c)
 */

NTSTATUS __cdecl RtlImageNtHeaderEx(ULONG Flags, PVOID BaseOfImage, ULONG64 Size, PIMAGE_NT_HEADERS *OutHeaders)
{
  NTSTATUS result; // eax
  _IMAGE_NT_HEADERS64 *v6; // r10
  ULONG64 v7; // r8

  result = 0;
  v6 = 0LL;
  if ( !OutHeaders )
    return -1073741811;
  *OutHeaders = 0LL;
  if ( (Flags & 0xFFFFFFFC) != 0 || (char *)BaseOfImage - 1 > (char *)0xFFFFFFFFFFFFFFFDLL )
    return -1073741811;
  if ( (Flags & 1) == 0 && Size < 0x40 )
    return -1073741701;
  if ( *(_WORD *)BaseOfImage != 23117 )
  {
LABEL_15:
    result = -1073741701;
    goto LABEL_17;
  }
  v7 = *((unsigned int *)BaseOfImage + 15);
  if ( (Flags & 1) == 0 && (v7 >= Size || (unsigned int)v7 >= 0xFFFFFFE7 || v7 + 24 >= Size) )
  {
    result = -1073741701;
    v6 = 0LL;
    goto LABEL_17;
  }
  if ( (unsigned int)v7 < 0x10000000 )
  {
    v6 = (_IMAGE_NT_HEADERS64 *)((char *)BaseOfImage + v7);
    if ( (char *)BaseOfImage + v7 >= BaseOfImage && v6->Signature == 17744 )
      goto LABEL_17;
    goto LABEL_15;
  }
  result = -1073741701;
  v6 = 0LL;
LABEL_17:
  if ( result >= 0 )
    *OutHeaders = v6;
  return result;
}
