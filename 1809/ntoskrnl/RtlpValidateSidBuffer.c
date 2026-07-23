/*
 * XREFs of RtlpValidateSidBuffer @ 0x140655FA4
 * Callers:
 *     RtlEnumerateBoundaryDescriptorEntries @ 0x140655E84 (RtlEnumerateBoundaryDescriptorEntries.c)
 * Callees:
 *     RtlSubAuthorityCountSid @ 0x1400DCB60 (RtlSubAuthorityCountSid.c)
 *     RtlValidSid @ 0x140632590 (RtlValidSid.c)
 */

BOOLEAN __fastcall RtlpValidateSidBuffer(PSID Sid, unsigned int a2)
{
  if ( a2 < 8 || a2 < 4 * (unsigned int)*RtlSubAuthorityCountSid(Sid) + 8 )
    return 0;
  else
    return RtlValidSid(Sid);
}
