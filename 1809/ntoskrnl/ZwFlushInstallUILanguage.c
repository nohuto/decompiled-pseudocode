/*
 * XREFs of ZwFlushInstallUILanguage @ 0x1401B9F10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwFlushInstallUILanguage(LANGID InstallUILanguage, ULONG SetComittedFlag)
{
  _disable();
  __readeflags();
  return KiServiceInternal(InstallUILanguage);
}
