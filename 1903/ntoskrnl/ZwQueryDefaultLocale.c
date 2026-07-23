/*
 * XREFs of ZwQueryDefaultLocale @ 0x1401C0370
 * Callers:
 *     NtInitializeNlsFiles @ 0x14067ACC0 (NtInitializeNlsFiles.c)
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
