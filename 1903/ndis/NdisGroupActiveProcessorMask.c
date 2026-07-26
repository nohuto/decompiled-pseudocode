/*
 * XREFs of NdisGroupActiveProcessorMask @ 0x1C0081280
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

KAFFINITY __stdcall NdisGroupActiveProcessorMask(USHORT Group)
{
  return KeQueryGroupAffinity(Group);
}
