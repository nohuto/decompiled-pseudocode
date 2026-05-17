/*
 * XREFs of _wcsicmp @ 0x18008E870
 * Callers:
 *     RtlpLangNameInMultiSzString @ 0x1800129A4 (RtlpLangNameInMultiSzString.c)
 *     RtlpAddNeutralsToMergedList @ 0x180013124 (RtlpAddNeutralsToMergedList.c)
 *     RtlpLangNameInMultiSzString_Size @ 0x1800157A4 (RtlpLangNameInMultiSzString_Size.c)
 *     RtlpMuiRegGetStringIndexInPool @ 0x180016A0C (RtlpMuiRegGetStringIndexInPool.c)
 *     LdrRscIsTypeExist @ 0x180018130 (LdrRscIsTypeExist.c)
 *     LdrpSearchResourceSection_U @ 0x180018D8C (LdrpSearchResourceSection_U.c)
 *     LdrpResSearchResourceMappedFile @ 0x180056B60 (LdrpResSearchResourceMappedFile.c)
 *     LdrpVerifyAlternateResourceModuleEx @ 0x180059CD4 (LdrpVerifyAlternateResourceModuleEx.c)
 *     RtlGetFileMUIPath @ 0x180059E30 (RtlGetFileMUIPath.c)
 *     RtlpHashStringToAtom @ 0x18005B720 (RtlpHashStringToAtom.c)
 *     RtlpConsoleFallbackNameFromLocaleName @ 0x18006AE08 (RtlpConsoleFallbackNameFromLocaleName.c)
 *     LdrRemoveLoadAsDataTable @ 0x1800739E0 (LdrRemoveLoadAsDataTable.c)
 *     AVrfpDllLoadNotificationInternal @ 0x1800D9B4C (AVrfpDllLoadNotificationInternal.c)
 *     AVrfpDllUnloadNotificationInternal @ 0x1800D9C28 (AVrfpDllUnloadNotificationInternal.c)
 *     AVrfpFindClosestThunkDuplicate @ 0x1800D9EEC (AVrfpFindClosestThunkDuplicate.c)
 *     AVrfpParseVerifierDllsString @ 0x1800DA3B8 (AVrfpParseVerifierDllsString.c)
 *     AVrfpVerifierStopInitialize @ 0x1800DA8F4 (AVrfpVerifierStopInitialize.c)
 *     RtlpCleanupRegistryKeys @ 0x1800EC3D0 (RtlpCleanupRegistryKeys.c)
 *     RtlpMuiRegAddAlternateCodePage @ 0x1800FD410 (RtlpMuiRegAddAlternateCodePage.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x1800FD7E8 (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x1800FE638 (RtlpMuiRegLangInfoMatchesSpec.c)
 *     PsspWalkHandleTable @ 0x180112680 (PsspWalkHandleTable.c)
 * Callees:
 *     <none>
 */

int __cdecl wcsicmp(const wchar_t *String1, const wchar_t *String2)
{
  const wchar_t *v2; // r10
  signed __int64 v3; // r9
  unsigned __int16 v4; // r8
  unsigned __int16 v5; // cx
  unsigned __int16 v6; // dx
  unsigned __int16 v7; // r8

  v2 = String2;
  v3 = (char *)String1 - (char *)String2;
  do
  {
    v4 = *(const wchar_t *)((char *)v2 + v3);
    v5 = *v2++;
    v6 = v4 + 32;
    if ( (unsigned __int16)(v4 - 65) > 0x19u )
      v6 = v4;
    v7 = v5 + 32;
    if ( (unsigned __int16)(v5 - 65) > 0x19u )
      v7 = v5;
  }
  while ( v6 && v6 == v7 );
  return v6 - v7;
}
