/*
 * XREFs of ZwQueryDefaultLocale @ 0x1401B8410
 * Callers:
 *     NtInitializeNlsFiles @ 0x14067A420 (NtInitializeNlsFiles.c)
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
