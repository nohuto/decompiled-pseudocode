/*
 * XREFs of OpenGlobalizationUserSettingsKey @ 0x180009204
 * Callers:
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x1800085C8 (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 *     RtlpLoadLanguageConfigList @ 0x180008A20 (RtlpLoadLanguageConfigList.c)
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x180008C14 (RtlpMuiRegLoadPreferredUILanguages.c)
 *     RtlpLoadUserUIByPolicy @ 0x180009270 (RtlpLoadUserUIByPolicy.c)
 *     RtlpSetInstallLanguage @ 0x1800ED610 (RtlpSetInstallLanguage.c)
 *     RtlpSetMachineUILanguagesImmediate @ 0x1800EDAF8 (RtlpSetMachineUILanguagesImmediate.c)
 *     RtlpSetPreferredUILanguages @ 0x1800EDCD0 (RtlpSetPreferredUILanguages.c)
 *     RtlpGetLocaleDataKey @ 0x1800F6F50 (RtlpGetLocaleDataKey.c)
 *     RtlpGetUserOrMachineUILanguage4NLS @ 0x1800FCE60 (RtlpGetUserOrMachineUILanguage4NLS.c)
 * Callees:
 *     RtlIsMultiSessionSku @ 0x18000BCD0 (RtlIsMultiSessionSku.c)
 *     RtlOpenCurrentUser @ 0x180029AC0 (RtlOpenCurrentUser.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x180115E78 (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x1801160B8 (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 */

__int64 __fastcall OpenGlobalizationUserSettingsKey(unsigned int a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // ecx
  unsigned int v6; // ecx
  unsigned int v8; // ecx
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = a2;
  if ( !a3 )
    return 3221225485LL;
  v5 = dword_18016608C;
  if ( !dword_18016608C )
  {
    if ( (unsigned __int8)RtlIsMultiSessionSku() )
      v5 = 1;
    else
      v5 = (MEMORY[0x7FFE02F0] & 0x200 | 0x400u) >> 9;
    dword_18016608C = v5;
  }
  v6 = v5 - 1;
  if ( !v6 )
    return RtlOpenCurrentUser(a1, a3);
  v8 = v6 - 1;
  if ( !v8 )
    return OpenGlobalizationUserSettingsKey_ForSingleUserModel(a1, a3);
  if ( v8 == 1 )
    return OpenGlobalizationUserSettingsKey_ForMua(a1, a2, a3, &v9);
  return 3221225701LL;
}
