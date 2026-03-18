/*
 * XREFs of NtQueryInstallUILanguage @ 0x1406C53D0
 * Callers:
 *     ExpSetCurrentUserUILanguage @ 0x14071A914 (ExpSetCurrentUserUILanguage.c)
 *     _RtlpMuiRegValidateInstalled @ 0x14073E4D0 (_RtlpMuiRegValidateInstalled.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x140907D58 (_RtlpMuiRegPopulateBaseLanguages.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall NtQueryInstallUILanguage(LANGID *LanguageId)
{
  __int64 v2; // rcx

  if ( KeGetCurrentThread()->PreviousMode )
  {
    v2 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)LanguageId < 0x7FFFFFFF0000LL )
      v2 = (__int64)LanguageId;
    *(_WORD *)v2 = *(_WORD *)v2;
  }
  *LanguageId = WORD1(NlsMbCodePageTag);
  return 0;
}
