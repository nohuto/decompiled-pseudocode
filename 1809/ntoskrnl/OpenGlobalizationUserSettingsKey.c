/*
 * XREFs of OpenGlobalizationUserSettingsKey @ 0x140174AB4
 * Callers:
 *     NtSetDefaultLocale @ 0x14071A6E0 (NtSetDefaultLocale.c)
 *     ExpSetCurrentUserUILanguage @ 0x14071A914 (ExpSetCurrentUserUILanguage.c)
 *     ExpGetCurrentUserUILanguage @ 0x14071AED0 (ExpGetCurrentUserUILanguage.c)
 * Callees:
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x14031F754 (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 *     RtlIsMultiSessionSku @ 0x1406AD9E0 (RtlIsMultiSessionSku.c)
 *     RtlOpenCurrentUser @ 0x14071B0D0 (RtlOpenCurrentUser.c)
 */

NTSTATUS __fastcall OpenGlobalizationUserSettingsKey(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        PHANDLE KeyHandle)
{
  int v6; // ecx
  char IsMultiSessionSku; // al
  __int64 v9; // rcx

  if ( !KeyHandle )
    return -1073741811;
  if ( dword_1404C6490 )
  {
    v6 = dword_1404DC87C;
  }
  else
  {
    IsMultiSessionSku = RtlIsMultiSessionSku();
    v6 = dword_1404DC87C;
    dword_1404C6490 = 1;
    if ( !IsMultiSessionSku )
      v6 = 1;
    dword_1404DC87C = v6;
  }
  if ( !v6 )
    return RtlOpenCurrentUser(8u, KeyHandle);
  v9 = (unsigned int)(v6 - 1);
  if ( !(_DWORD)v9 )
    return OpenGlobalizationUserSettingsKey_ForSingleUserModel(v9, a2, a3, KeyHandle);
  v9 = (unsigned int)(v9 - 1);
  if ( !(_DWORD)v9 )
    return OpenGlobalizationUserSettingsKey_ForSingleUserModel(v9, a2, a3, KeyHandle);
  if ( (_DWORD)v9 == 1 )
    return -1073741822;
  return -1073741595;
}
