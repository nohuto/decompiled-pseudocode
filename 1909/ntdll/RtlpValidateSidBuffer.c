/*
 * XREFs of RtlpValidateSidBuffer @ 0x18007D5B0
 * Callers:
 *     RtlEnumerateBoundaryDescriptorEntries @ 0x18007D4DC (RtlEnumerateBoundaryDescriptorEntries.c)
 * Callees:
 *     <none>
 */

bool __fastcall RtlpValidateSidBuffer(_BYTE *a1, unsigned int a2)
{
  return a2 >= 8 && a2 >= 4 * (unsigned int)(unsigned __int8)a1[1] + 8 && RtlValidSid(a1);
}
