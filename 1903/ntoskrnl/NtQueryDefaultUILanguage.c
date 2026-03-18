/*
 * XREFs of NtQueryDefaultUILanguage @ 0x140748040
 * Callers:
 *     <none>
 * Callees:
 *     NtQueryInstallUILanguage @ 0x1406E6F90 (NtQueryInstallUILanguage.c)
 */

NTSTATUS __stdcall NtQueryDefaultUILanguage(LANGID *LanguageId)
{
  return NtQueryInstallUILanguage(LanguageId);
}
