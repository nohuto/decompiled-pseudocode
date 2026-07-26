/*
 * XREFs of NdisMaxGroupCount @ 0x1C0081450
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

USHORT NdisMaxGroupCount(void)
{
  return KeQueryMaximumGroupCount();
}
