/*
 * XREFs of ZwQueryDefaultLocale @ 0x1401C0EF0
 * Callers:
 *     NtInitializeNlsFiles @ 0x1406D3450 (NtInitializeNlsFiles.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwQueryDefaultLocale(BOOLEAN UserProfile, PLCID DefaultLocaleId)
{
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(UserProfile, DefaultLocaleId, v2);
}
