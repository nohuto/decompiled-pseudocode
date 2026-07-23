/*
 * XREFs of RtlLengthRequiredSid @ 0x18007D170
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG __cdecl RtlLengthRequiredSid(ULONG SubAuthorityCount)
{
  if ( SubAuthorityCount > 0x3FFFFFF7 )
    return -1;
  else
    return 4 * SubAuthorityCount + 8;
}
