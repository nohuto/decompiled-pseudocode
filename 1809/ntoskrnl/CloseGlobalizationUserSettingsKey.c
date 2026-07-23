/*
 * XREFs of CloseGlobalizationUserSettingsKey @ 0x140174BB0
 * Callers:
 *     NtSetDefaultLocale @ 0x14071B960 (NtSetDefaultLocale.c)
 *     ExpSetCurrentUserUILanguage @ 0x14071BB94 (ExpSetCurrentUserUILanguage.c)
 *     ExpGetCurrentUserUILanguage @ 0x14071C150 (ExpGetCurrentUserUILanguage.c)
 * Callees:
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 */

__int64 __fastcall CloseGlobalizationUserSettingsKey(char *a1)
{
  unsigned int v1; // edx

  v1 = 0;
  if ( (unsigned __int64)(a1 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    return (unsigned int)ZwClose(a1);
  return v1;
}
