/*
 * XREFs of NtQueryInstallUILanguage @ 0x1406E8090
 * Callers:
 *     ExpSetPendingUILanguage @ 0x14074593C (ExpSetPendingUILanguage.c)
 *     NtQueryDefaultUILanguage @ 0x140749F40 (NtQueryDefaultUILanguage.c)
 *     _RtlpMuiRegValidateInstalled @ 0x14076AA14 (_RtlpMuiRegValidateInstalled.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x140945E5C (_RtlpMuiRegPopulateBaseLanguages.c)
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
  *LanguageId = PsInstallUILanguageId;
  return 0;
}
