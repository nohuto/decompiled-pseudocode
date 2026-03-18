/*
 * XREFs of RtlpValidateSidBuffer @ 0x14069F5B4
 * Callers:
 *     RtlEnumerateBoundaryDescriptorEntries @ 0x14069F494 (RtlEnumerateBoundaryDescriptorEntries.c)
 * Callees:
 *     RtlSubAuthorityCountSid @ 0x14000A940 (RtlSubAuthorityCountSid.c)
 *     RtlValidSid @ 0x1405C8B40 (RtlValidSid.c)
 */

BOOLEAN __fastcall RtlpValidateSidBuffer(PSID Sid, unsigned int a2)
{
  if ( a2 < 8 || a2 < 4 * (unsigned int)*RtlSubAuthorityCountSid(Sid) + 8 )
    return 0;
  else
    return RtlValidSid(Sid);
}
