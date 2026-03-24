/*
 * XREFs of RtlpValidateSidBuffer @ 0x140654DE4
 * Callers:
 *     RtlEnumerateBoundaryDescriptorEntries @ 0x140654CC4 (RtlEnumerateBoundaryDescriptorEntries.c)
 * Callees:
 *     RtlSubAuthorityCountSid @ 0x1400DCAE0 (RtlSubAuthorityCountSid.c)
 *     RtlValidSid @ 0x140631570 (RtlValidSid.c)
 */

BOOLEAN __fastcall RtlpValidateSidBuffer(PSID Sid, unsigned int a2)
{
  if ( a2 < 8 || a2 < 4 * (unsigned int)*RtlSubAuthorityCountSid(Sid) + 8 )
    return 0;
  else
    return RtlValidSid(Sid);
}
