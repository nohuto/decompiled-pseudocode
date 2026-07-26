/*
 * XREFs of NdisGetSharedDataAlignment @ 0x1C009D2F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG NdisGetSharedDataAlignment(void)
{
  return KeGetRecommendedSharedDataAlignment();
}
