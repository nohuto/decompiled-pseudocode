/*
 * XREFs of ZwQueryInstallUILanguage @ 0x1401BAC10
 * Callers:
 *     _RtlpMuiRegLoadInstalled @ 0x14073F178 (_RtlpMuiRegLoadInstalled.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQueryInstallUILanguage(LANGID *LanguageId)
{
  _disable();
  __readeflags();
  return KiServiceInternal(LanguageId);
}
