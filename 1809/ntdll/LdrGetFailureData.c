/*
 * XREFs of LdrGetFailureData @ 0x1800CFE40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PLDR_FAILURE_DATA LdrGetFailureData(void)
{
  return (PLDR_FAILURE_DATA)&LdrpFailureData;
}
