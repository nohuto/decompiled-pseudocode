/*
 * XREFs of ZwQueryInstallUILanguage @ 0x1401C2A10
 * Callers:
 *     _RtlpMuiRegLoadInstalled @ 0x140766264 (_RtlpMuiRegLoadInstalled.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQueryInstallUILanguage(LANGID *LanguageId)
{
  __int64 v1; // rdx
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(LanguageId, v1, v2);
}
