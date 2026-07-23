/*
 * XREFs of ZwQueryInstallUILanguage @ 0x1401C3590
 * Callers:
 *     _RtlpMuiRegLoadInstalled @ 0x14076AD64 (_RtlpMuiRegLoadInstalled.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQueryInstallUILanguage(LANGID *LanguageId)
{
  _disable();
  __readeflags();
  return KiServiceInternal(LanguageId);
}
