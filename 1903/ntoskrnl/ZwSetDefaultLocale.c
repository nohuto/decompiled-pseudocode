/*
 * XREFs of ZwSetDefaultLocale @ 0x1401C31D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwSetDefaultLocale(BOOLEAN UserProfile, LCID DefaultLocaleId)
{
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(UserProfile, *(_QWORD *)&DefaultLocaleId, v2);
}
