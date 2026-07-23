/*
 * XREFs of OpenGlobalizationUserSettingsKey @ 0x18004C444
 * Callers:
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x18004B7A8 (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 *     RtlpLoadLanguageConfigList @ 0x18004BC10 (RtlpLoadLanguageConfigList.c)
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x18004BE14 (RtlpMuiRegLoadPreferredUILanguages.c)
 *     RtlpLoadUserUIByPolicy @ 0x18004C4C0 (RtlpLoadUserUIByPolicy.c)
 *     RtlpSetInstallLanguage @ 0x1800F05E0 (RtlpSetInstallLanguage.c)
 *     RtlpSetMachineUILanguagesImmediate @ 0x1800F0B3C (RtlpSetMachineUILanguagesImmediate.c)
 *     RtlpSetPreferredUILanguages @ 0x1800F0D10 (RtlpSetPreferredUILanguages.c)
 *     RtlpGetLocaleDataKey @ 0x1800F9318 (RtlpGetLocaleDataKey.c)
 *     RtlpGetUserOrMachineUILanguage4NLS @ 0x1800FF570 (RtlpGetUserOrMachineUILanguage4NLS.c)
 * Callees:
 *     RtlOpenCurrentUser @ 0x1800297E0 (RtlOpenCurrentUser.c)
 *     RtlIsMultiSessionSku @ 0x18004AA60 (RtlIsMultiSessionSku.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x180116C24 (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 */

NTSTATUS __fastcall OpenGlobalizationUserSettingsKey(
        ACCESS_MASK DesiredAccess,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        PHANDLE CurrentUserKey)
{
  int v6; // ecx
  BOOLEAN IsMultiSessionSku; // al
  int v9; // ecx
  int v10; // ecx

  if ( !CurrentUserKey )
    return -1073741811;
  if ( dword_1801660CC )
  {
    v6 = dword_180166538;
  }
  else
  {
    IsMultiSessionSku = RtlIsMultiSessionSku();
    v6 = dword_180166538;
    dword_1801660CC = 1;
    if ( !IsMultiSessionSku )
      v6 = 1;
    dword_180166538 = v6;
  }
  if ( !v6 )
    return RtlOpenCurrentUser(DesiredAccess, CurrentUserKey);
  v9 = v6 - 1;
  if ( !v9 )
    return OpenGlobalizationUserSettingsKey_ForSingleUserModel(DesiredAccess);
  v10 = v9 - 1;
  if ( !v10 )
    return OpenGlobalizationUserSettingsKey_ForSingleUserModel(DesiredAccess);
  if ( v10 == 1 )
    return -1073741822;
  return -1073741595;
}
