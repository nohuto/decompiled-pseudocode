/*
 * XREFs of ZwQueryInstallUILanguage @ 0x1401C2A10
 * Callers:
 *     _RtlpMuiRegLoadInstalled @ 0x140766264 (_RtlpMuiRegLoadInstalled.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQueryInstallUILanguage(LANGID *LanguageId)
{
  _disable();
  __readeflags();
  return KiServiceInternal(LanguageId);
}
