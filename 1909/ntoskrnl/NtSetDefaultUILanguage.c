/*
 * XREFs of NtSetDefaultUILanguage @ 0x140745700
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetPendingUILanguage @ 0x14074593C (ExpSetPendingUILanguage.c)
 */

NTSTATUS __stdcall NtSetDefaultUILanguage(LANGID LanguageId)
{
  if ( LanguageId )
    return 0;
  else
    return ExpSetPendingUILanguage();
}
