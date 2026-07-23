/*
 * XREFs of ZwQueryDefaultLocale @ 0x1401B8590
 * Callers:
 *     NtInitializeNlsFiles @ 0x14067B5C0 (NtInitializeNlsFiles.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwQueryDefaultLocale(BOOLEAN UserProfile, PLCID DefaultLocaleId)
{
  _disable();
  __readeflags();
  return KiServiceInternal(UserProfile);
}
