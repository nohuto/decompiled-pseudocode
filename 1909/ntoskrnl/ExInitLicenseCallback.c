/*
 * XREFs of ExInitLicenseCallback @ 0x140A22EC8
 * Callers:
 *     Phase1InitializationDiscard @ 0x140A07524 (Phase1InitializationDiscard.c)
 * Callees:
 *     ExCreateCallback @ 0x1406EAE20 (ExCreateCallback.c)
 */

NTSTATUS ExInitLicenseCallback()
{
  NTSTATUS result; // eax

  result = ExCreateCallback((PCALLBACK_OBJECT *)&CallbackObject, (POBJECT_ATTRIBUTES)&stru_140947F10, 1u, 1u);
  if ( result < 0 )
    CallbackObject = 0LL;
  return result;
}
