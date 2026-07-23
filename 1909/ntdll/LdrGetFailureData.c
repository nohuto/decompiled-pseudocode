/*
 * XREFs of LdrGetFailureData @ 0x1800CE720
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PLDR_FAILURE_DATA LdrGetFailureData(void)
{
  return (PLDR_FAILURE_DATA)&LdrpFailureData;
}
