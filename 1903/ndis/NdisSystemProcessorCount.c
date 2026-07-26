/*
 * XREFs of NdisSystemProcessorCount @ 0x1C0081B10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

CCHAR NdisSystemProcessorCount(void)
{
  return KeQueryMaximumProcessorCountEx(0);
}
