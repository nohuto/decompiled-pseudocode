/*
 * XREFs of NtSetDefaultUILanguage @ 0x14071A8D0
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetCurrentUserUILanguage @ 0x14071A8F4 (ExpSetCurrentUserUILanguage.c)
 */

NTSTATUS __stdcall NtSetDefaultUILanguage(LANGID LanguageId)
{
  const WCHAR *v1; // rcx

  if ( LanguageId )
    v1 = L"MUILanguagePending";
  else
    v1 = 0LL;
  return ExpSetCurrentUserUILanguage(v1);
}
