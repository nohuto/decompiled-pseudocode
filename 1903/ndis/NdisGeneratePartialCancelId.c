/*
 * XREFs of NdisGeneratePartialCancelId @ 0x1C003F630
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

UCHAR NdisGeneratePartialCancelId(void)
{
  return _InterlockedExchangeAdd(&ndisCancelId, 1u) + 1;
}
