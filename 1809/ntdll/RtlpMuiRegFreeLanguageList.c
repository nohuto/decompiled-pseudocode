/*
 * XREFs of RtlpMuiRegFreeLanguageList @ 0x18003C3D8
 * Callers:
 *     RtlCleanUpTEBLangLists @ 0x18003A5D0 (RtlCleanUpTEBLangLists.c)
 *     RtlpFilterandReplaceConsoleLanguages @ 0x18003B7E8 (RtlpFilterandReplaceConsoleLanguages.c)
 *     RtlSetThreadPreferredUILanguages @ 0x18003BAA0 (RtlSetThreadPreferredUILanguages.c)
 *     InitializeTEBUserLangList @ 0x18003BEF8 (InitializeTEBUserLangList.c)
 *     LdrpMergeLangFallbackLists @ 0x18003C708 (LdrpMergeLangFallbackLists.c)
 *     RtlGetThreadPreferredUILanguages @ 0x18003CC60 (RtlGetThreadPreferredUILanguages.c)
 *     RtlpMuiRegFreeRegistryInfo @ 0x18004BA00 (RtlpMuiRegFreeRegistryInfo.c)
 *     RtlGetSystemPreferredUILanguages @ 0x18007A110 (RtlGetSystemPreferredUILanguages.c)
 *     RtlpQueryDefaultUILanguage @ 0x18007A6B0 (RtlpQueryDefaultUILanguage.c)
 *     RtlGetUserPreferredUILanguages @ 0x180080710 (RtlGetUserPreferredUILanguages.c)
 *     RtlpUpdateTEBLanguage @ 0x180080CA0 (RtlpUpdateTEBLanguage.c)
 *     RtlSetProcessPreferredUILanguages @ 0x180088CE0 (RtlSetProcessPreferredUILanguages.c)
 * Callees:
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 */

LOGICAL __fastcall RtlpMuiRegFreeLanguageList(PVOID BaseAddress)
{
  LOGICAL result; // eax

  if ( BaseAddress )
  {
    if ( (*((_BYTE *)BaseAddress + 40) & 0x40) == 0 )
      return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
  }
  return result;
}
