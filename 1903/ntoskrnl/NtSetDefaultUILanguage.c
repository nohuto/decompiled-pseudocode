/*
 * XREFs of NtSetDefaultUILanguage @ 0x140743800
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetPendingUILanguage @ 0x140743A3C (ExpSetPendingUILanguage.c)
 */

NTSTATUS __stdcall NtSetDefaultUILanguage(LANGID LanguageId)
{
  if ( LanguageId )
    return 0;
  else
    return ExpSetPendingUILanguage();
}
