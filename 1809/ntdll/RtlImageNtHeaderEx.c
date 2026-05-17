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
 *     LdrpFindLoadedDllByMappingFile @ 0x180076D40 (LdrpFindLoadedDllByMappingFile.c)
 *     LdrGetDllHandleByMapping @ 0x180076EB0 (LdrGetDllHandleByMapping.c)
 *     LdrpFindLoadedDllByMappingLockHeld @ 0x180076FE4 (LdrpFindLoadedDllByMappingLockHeld.c)
 *     LdrpGetImportDescriptorForSnap @ 0x180078D00 (LdrpGetImportDescriptorForSnap.c)
 *     LdrpCodeAuthzInitialize @ 0x18007FC08 (LdrpCodeAuthzInitialize.c)
 *     LdrpSetProtection @ 0x180087480 (LdrpSetProtection.c)
 *     LdrRelocateImageWithBias @ 0x1800875E8 (LdrRelocateImageWithBias.c)
 *     LdrVerifyImageMatchesChecksumEx @ 0x18008C7B0 (LdrVerifyImageMatchesChecksumEx.c)
 *     LdrpInitializeExceptionTable @ 0x1800D3090 (LdrpInitializeExceptionTable.c)
 *     LdrpInitializeProcess @ 0x1800D3FB4 (LdrpInitializeProcess.c)
 *     LdrpLocateMrdata @ 0x1800D7BB0 (LdrpLocateMrdata.c)
 *     AVrfInitializeVerifier @ 0x1800DACE8 (AVrfInitializeVerifier.c)
 *     LdrVerifyMappedImageMatchesChecksum @ 0x1800F4DE8 (LdrVerifyMappedImageMatchesChecksum.c)
 * Callees:
 *     RtlImageNtHeaderEx_ExceptionFilter @ 0x1800FAF80 (RtlImageNtHeaderEx_ExceptionFilter.c)
 */

__int64 __fastcall RtlImageNtHeaderEx(int a1, unsigned __int64 a2, unsigned __int64 a3, _QWORD *a4)
{
  __int64 result; // rax
  _DWORD *v6; // r10
  unsigned __int64 v7; // r8

  result = 0LL;
  v6 = 0LL;
  if ( !a4 )
    return 3221225485LL;
  *a4 = 0LL;
  if ( (a1 & 0xFFFFFFFC) != 0 || a2 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
    return 3221225485LL;
  if ( (a1 & 1) == 0 && a3 < 0x40 )
    return 3221225595LL;
  if ( *(_WORD *)a2 != 23117 )
  {
LABEL_15:
    result = 3221225595LL;
    goto LABEL_17;
  }
  v7 = *(unsigned int *)(a2 + 60);
  if ( (a1 & 1) == 0 && (v7 >= a3 || (unsigned int)v7 >= 0xFFFFFFE7 || v7 + 24 >= a3) )
  {
    result = 3221225595LL;
    v6 = 0LL;
    goto LABEL_17;
  }
  if ( (unsigned int)v7 < 0x10000000 )
  {
    v6 = (_DWORD *)(a2 + v7);
    if ( a2 + v7 >= a2 && *v6 == 17744 )
      goto LABEL_17;
    goto LABEL_15;
  }
  result = 3221225595LL;
  v6 = 0LL;
LABEL_17:
  if ( (int)result >= 0 )
    *a4 = v6;
  return result;
}
