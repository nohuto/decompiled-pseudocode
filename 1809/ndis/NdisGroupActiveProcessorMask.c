/*
 * XREFs of NdisGroupActiveProcessorMask @ 0x1C0052580
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

KAFFINITY __stdcall NdisGroupActiveProcessorMask(USHORT Group)
{
  return KeQueryGroupAffinity(Group);
}
