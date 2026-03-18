/*
 * XREFs of NtQueryDefaultUILanguage @ 0x140749F40
 * Callers:
 *     <none>
 * Callees:
 *     NtQueryInstallUILanguage @ 0x1406E8090 (NtQueryInstallUILanguage.c)
 */

NTSTATUS __stdcall NtQueryDefaultUILanguage(LANGID *LanguageId)
{
  return NtQueryInstallUILanguage(LanguageId);
}
