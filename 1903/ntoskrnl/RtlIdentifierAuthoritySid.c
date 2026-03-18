/*
 * XREFs of RtlIdentifierAuthoritySid @ 0x14061ACE4
 * Callers:
 *     SepCreateTokenEx @ 0x140086D2C (SepCreateTokenEx.c)
 * Callees:
 *     <none>
 */

PSID_IDENTIFIER_AUTHORITY __stdcall RtlIdentifierAuthoritySid(PSID Sid)
{
  return (PSID_IDENTIFIER_AUTHORITY)((char *)Sid + 2);
}
