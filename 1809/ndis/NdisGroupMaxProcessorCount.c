/*
 * XREFs of NdisGroupMaxProcessorCount @ 0x1C00525A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG __stdcall NdisGroupMaxProcessorCount(USHORT Group)
{
  return KeQueryMaximumProcessorCountEx(Group);
}
