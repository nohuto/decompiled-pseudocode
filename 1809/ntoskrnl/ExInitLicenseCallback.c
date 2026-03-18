/*
 * XREFs of ExInitLicenseCallback @ 0x1409DF480
 * Callers:
 *     Phase1InitializationDiscard @ 0x1409B3E10 (Phase1InitializationDiscard.c)
 * Callees:
 *     ExCreateCallback @ 0x1406CA3A0 (ExCreateCallback.c)
 */

NTSTATUS ExInitLicenseCallback()
{
  NTSTATUS result; // eax

  result = ExCreateCallback((PCALLBACK_OBJECT *)&CallbackObject, (POBJECT_ATTRIBUTES)&stru_140909D80, 1u, 1u);
  if ( result < 0 )
    CallbackObject = 0LL;
  return result;
}
