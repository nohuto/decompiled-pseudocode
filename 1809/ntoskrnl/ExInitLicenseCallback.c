/*
 * XREFs of ExInitLicenseCallback @ 0x1409E0480
 * Callers:
 *     Phase1InitializationDiscard @ 0x1409B4E10 (Phase1InitializationDiscard.c)
 * Callees:
 *     ExCreateCallback @ 0x1406CB620 (ExCreateCallback.c)
 */

NTSTATUS ExInitLicenseCallback()
{
  NTSTATUS result; // eax

  result = ExCreateCallback((PCALLBACK_OBJECT *)&CallbackObject, (POBJECT_ATTRIBUTES)&stru_14090B080, 1u, 1u);
  if ( result < 0 )
    CallbackObject = 0LL;
  return result;
}
