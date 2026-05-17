/*
 * XREFs of RtlImageNtHeaderEx @ 0x18001CB40
 * Callers:
 *     LdrpGetFromMUIMemCache @ 0x18001ABAC (LdrpGetFromMUIMemCache.c)
 *     RtlImageNtHeader @ 0x18001B960 (RtlImageNtHeader.c)
 *     LdrpHandleProtectedDelayload @ 0x18001BB70 (LdrpHandleProtectedDelayload.c)
 *     LdrpGetProcedureAddress @ 0x18001C2B0 (LdrpGetProcedureAddress.c)
 *     RtlpImageDirectoryEntryToDataEx @ 0x18001C4DC (RtlpImageDirectoryEntryToDataEx.c)
 *     LdrpSnapModule @ 0x18001C610 (LdrpSnapModule.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x18001F450 (LdrImageDirectoryEntryToLoadConfig.c)
 *     LdrpFetchAddressOfSecurityCookie @ 0x180020454 (LdrpFetchAddressOfSecurityCookie.c)
 *     LdrpProcessMappedModule @ 0x180020654 (LdrpProcessMappedModule.c)
 *     LdrpValidateEntrySection @ 0x180020844 (LdrpValidateEntrySection.c)
 *     LdrpPrepareImportAddressTableForSnap @ 0x180020F00 (LdrpPrepareImportAddressTableForSnap.c)
 *     LdrpMapDllWithSectionHandle @ 0x180029EFC (LdrpMapDllWithSectionHandle.c)
 *     LdrpFindLoadedDllByMappingLockHeld @ 0x18002A75C (LdrpFindLoadedDllByMappingLockHeld.c)
 *     LdrGetDllHandleByMapping @ 0x18002DD30 (LdrGetDllHandleByMapping.c)
 *     CsrClientConnectToServer @ 0x18004BC20 (CsrClientConnectToServer.c)
 *     LdrpInitializeTls @ 0x180055158 (LdrpInitializeTls.c)
 *     LdrpUnsuppressAddressTakenIat @ 0x180055648 (LdrpUnsuppressAddressTakenIat.c)
 *     LdrpResGetResourceDirectory @ 0x180057270 (LdrpResGetResourceDirectory.c)
 *     LdrpResGetMappingSize @ 0x1800587E0 (LdrpResGetMappingSize.c)
 *     WerEscalationReadImageVersionInfoForModuleBaseSafe @ 0x18006DCAC (WerEscalationReadImageVersionInfoForModuleBaseSafe.c)
 *     WerEscalationReadImageVersionInfoForModuleBase @ 0x18006DD68 (WerEscalationReadImageVersionInfoForModuleBase.c)
 *     LdrpGetImportDescriptorForSnap @ 0x180072948 (LdrpGetImportDescriptorForSnap.c)
 *     LdrpFindLoadedDllByMappingFile @ 0x180079A68 (LdrpFindLoadedDllByMappingFile.c)
 *     LdrpCodeAuthzInitialize @ 0x18007AA5C (LdrpCodeAuthzInitialize.c)
 *     LdrpSetProtection @ 0x18008290C (LdrpSetProtection.c)
 *     LdrRelocateImageWithBias @ 0x1800837A8 (LdrRelocateImageWithBias.c)
 *     LdrVerifyImageMatchesChecksumEx @ 0x180089D30 (LdrVerifyImageMatchesChecksumEx.c)
 *     LdrpInitializeExceptionTable @ 0x1800D1760 (LdrpInitializeExceptionTable.c)
 *     LdrpInitializeProcess @ 0x1800D25F8 (LdrpInitializeProcess.c)
 *     LdrpLocateMrdata @ 0x1800D5EB0 (LdrpLocateMrdata.c)
 *     AVrfInitializeVerifier @ 0x1800D8C38 (AVrfInitializeVerifier.c)
 *     LdrVerifyMappedImageMatchesChecksum @ 0x1800F2198 (LdrVerifyMappedImageMatchesChecksum.c)
 * Callees:
 *     RtlImageNtHeaderEx_ExceptionFilter @ 0x1800F8C24 (RtlImageNtHeaderEx_ExceptionFilter.c)
 */

__int64 __fastcall RtlImageNtHeaderEx(int a1, unsigned __int64 a2, unsigned __int64 a3, _QWORD *a4)
{
  __int64 result; // rax
  _DWORD *v6; // r10
  char v7; // cl
  unsigned __int64 v8; // r8

  result = 0LL;
  v6 = 0LL;
  if ( !a4 )
    return 3221225485LL;
  *a4 = 0LL;
  if ( (a1 & 0xFFFFFFFC) != 0 || a2 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
    return 3221225485LL;
  if ( (a1 & 1) != 0 )
  {
    v7 = 0;
  }
  else
  {
    v7 = 1;
    if ( a3 < 0x40 )
      return 3221225595LL;
  }
  if ( *(_WORD *)a2 != 23117 )
  {
LABEL_16:
    result = 3221225595LL;
    goto LABEL_18;
  }
  v8 = *(unsigned int *)(a2 + 60);
  if ( v7 && (v8 >= a3 || (unsigned int)v8 >= 0xFFFFFFE7 || v8 + 24 >= a3) )
  {
    result = 3221225595LL;
    v6 = 0LL;
    goto LABEL_18;
  }
  if ( (unsigned int)v8 < 0x10000000 )
  {
    v6 = (_DWORD *)(a2 + v8);
    if ( a2 + v8 >= a2 && *v6 == 17744 )
      goto LABEL_18;
    goto LABEL_16;
  }
  result = 3221225595LL;
  v6 = 0LL;
LABEL_18:
  if ( (int)result >= 0 )
    *a4 = v6;
  return result;
}
