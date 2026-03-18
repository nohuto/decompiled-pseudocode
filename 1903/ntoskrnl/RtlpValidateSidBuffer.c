/*
 * XREFs of RtlpValidateSidBuffer @ 0x140681054
 * Callers:
 *     RtlEnumerateBoundaryDescriptorEntries @ 0x140680F34 (RtlEnumerateBoundaryDescriptorEntries.c)
 * Callees:
 *     RtlSubAuthorityCountSid @ 0x14000A8B0 (RtlSubAuthorityCountSid.c)
 *     RtlValidSid @ 0x1405C8640 (RtlValidSid.c)
 */

BOOLEAN __fastcall RtlpValidateSidBuffer(PSID Sid, unsigned int a2)
{
  if ( a2 < 8 || a2 < 4 * (unsigned int)*RtlSubAuthorityCountSid(Sid) + 8 )
    return 0;
  else
    return RtlValidSid(Sid);
}
