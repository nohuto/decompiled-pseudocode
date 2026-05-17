/*
 * XREFs of RtlLCIDToCultureName @ 0x18003FEC0
 * Callers:
 *     RtlGetFileMUIPath @ 0x180034DB0 (RtlGetFileMUIPath.c)
 *     RtlpComputeLangListCheckSum @ 0x18003ACBC (RtlpComputeLangListCheckSum.c)
 *     LdrpMergeLangFallbackLists @ 0x18003C708 (LdrpMergeLangFallbackLists.c)
 *     GetLCIDFromLangListNodeWithLICCheck @ 0x18003F388 (GetLCIDFromLangListNodeWithLICCheck.c)
 *     GetNameFromLangListNode @ 0x18003FAB4 (GetNameFromLangListNode.c)
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x18003FB5C (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x18003FFA4 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     RtlpAddNeutralsToMergedList @ 0x1800423A4 (RtlpAddNeutralsToMergedList.c)
 *     RtlpMuiRegTryToAppendLanguageName @ 0x180077640 (RtlpMuiRegTryToAppendLanguageName.c)
 *     RtlpGetNameFromLangInfoNode @ 0x1800859F0 (RtlpGetNameFromLangInfoNode.c)
 *     RtlpVerifyAndCommitUILanguageSettings @ 0x18008EA70 (RtlpVerifyAndCommitUILanguageSettings.c)
 *     LdrpMergeParentBaseLanguagesToList @ 0x1800EE89C (LdrpMergeParentBaseLanguagesToList.c)
 *     RtlGetUILanguageInfo @ 0x1800EEC40 (RtlGetUILanguageInfo.c)
 *     RtlUnicodeStringToLcid @ 0x1800EF198 (RtlUnicodeStringToLcid.c)
 *     RtlpCleanupRegistryKeys @ 0x1800EF6F0 (RtlpCleanupRegistryKeys.c)
 *     RtlpConvertLCIDsToCultureNames @ 0x1800EFE10 (RtlpConvertLCIDsToCultureNames.c)
 *     RtlpGetDefaultLanguageBaseOrParent @ 0x1800F017C (RtlpGetDefaultLanguageBaseOrParent.c)
 *     RtlpSetInstallLanguage @ 0x1800F05E0 (RtlpSetInstallLanguage.c)
 *     RtlpSetPreferredUILanguages @ 0x1800F0D10 (RtlpSetPreferredUILanguages.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x1800FFF04 (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegGetFallbackLanguageInfoByLangId @ 0x1801005B4 (RtlpMuiRegGetFallbackLanguageInfoByLangId.c)
 *     RtlpMuiRegGetInstalledLanguageInfoByIndex @ 0x180100A2C (RtlpMuiRegGetInstalledLanguageInfoByIndex.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x180100E8C (RtlpMuiRegLangInfoMatchesSpec.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x180102A28 (_RtlpMuiRegPopulateBaseLanguages.c)
 *     _RtlpMuiRegValidateAndGetInstallFallbackBase @ 0x180102E90 (_RtlpMuiRegValidateAndGetInstallFallbackBase.c)
 *     _RtlpMuiRegValidateInstalled @ 0x180102F30 (_RtlpMuiRegValidateInstalled.c)
 * Callees:
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x18003FFA4 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     RtlInitUnicodeString @ 0x180040650 (RtlInitUnicodeString.c)
 *     RtlLcidToLocaleName @ 0x180040700 (RtlLcidToLocaleName.c)
 *     RtlStringCbCopyW @ 0x180041540 (RtlStringCbCopyW.c)
 */

char __fastcall RtlLCIDToCultureName(unsigned int a1, __int64 a2)
{
  char v2; // bl
  __int64 v6; // rcx
  __int64 v7; // rax
  unsigned __int16 Length; // si
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  __int16 v10; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  if ( a1 && a2 && a1 != 4096 )
  {
    if ( g_RegInfo
      && (int)RtlpMuiRegGetInstalledLanguageIndexByLangId(g_RegInfo, (unsigned __int16)a1, 0LL, &v10) >= 0
      && (v6 = 28LL * v10, v7 = *(_QWORD *)(*(_QWORD *)(g_RegInfo + 24) + 16LL), *(__int16 *)(v7 + v6 + 6) > 0) )
    {
      RtlInitUnicodeString(
        &DestinationString,
        (PCWSTR)(*(_QWORD *)(*(_QWORD *)(g_RegInfo + 32) + 24LL)
               + 2LL * *(__int16 *)(*(_QWORD *)(*(_QWORD *)(g_RegInfo + 32) + 16LL) + 2LL * *(__int16 *)(v7 + v6 + 6))));
      Length = DestinationString.Length;
      if ( DestinationString.Length <= *(_WORD *)(a2 + 2)
        && (int)RtlStringCbCopyW(*(_QWORD *)(a2 + 8), *(unsigned __int16 *)(a2 + 2)) >= 0 )
      {
        *(_WORD *)a2 = Length;
        return 1;
      }
    }
    else if ( (int)RtlLcidToLocaleName(a1, a2, 2LL, 0LL) >= 0 )
    {
      return 1;
    }
  }
  return v2;
}
