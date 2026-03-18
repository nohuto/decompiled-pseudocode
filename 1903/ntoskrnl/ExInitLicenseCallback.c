/*
 * XREFs of ExInitLicenseCallback @ 0x140A22DE8
 * Callers:
 *     Phase1InitializationDiscard @ 0x140A07008 (Phase1InitializationDiscard.c)
 * Callees:
 *     ExCreateCallback @ 0x1406E9C40 (ExCreateCallback.c)
 */

NTSTATUS ExInitLicenseCallback()
{
  NTSTATUS result; // eax

  result = ExCreateCallback((PCALLBACK_OBJECT *)&CallbackObject, (POBJECT_ATTRIBUTES)&stru_1409484A0, 1u, 1u);
  if ( result < 0 )
    CallbackObject = 0LL;
  return result;
}
