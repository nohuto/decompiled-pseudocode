/*
 * XREFs of NdisActiveGroupCount @ 0x1C0022E50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

USHORT NdisActiveGroupCount(void)
{
  return KeQueryActiveGroupCount();
}
