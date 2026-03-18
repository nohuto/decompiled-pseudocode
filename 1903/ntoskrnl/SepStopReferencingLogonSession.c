/*
 * XREFs of SepStopReferencingLogonSession @ 0x1406E9E68
 * Callers:
 *     SepLinkLogonSessions @ 0x140139E20 (SepLinkLogonSessions.c)
 *     SepSetLogonSessionToken @ 0x14061F3D0 (SepSetLogonSessionToken.c)
 *     NtSetInformationToken @ 0x140673100 (NtSetInformationToken.c)
 * Callees:
 *     SepDeReferenceLogonSessionDirect @ 0x1400796D4 (SepDeReferenceLogonSessionDirect.c)
 *     SepConvertToOwnTokenClaims @ 0x14013A060 (SepConvertToOwnTokenClaims.c)
 */

__int64 __fastcall SepStopReferencingLogonSession(__int64 a1)
{
  __int64 result; // rax
  unsigned int v3; // edi

  result = SepConvertToOwnTokenClaims(a1);
  v3 = result;
  if ( (int)result >= 0 )
  {
    SepDeReferenceLogonSessionDirect(*(_QWORD **)(a1 + 216));
    *(_DWORD *)(a1 + 200) |= 0x20u;
    return v3;
  }
  return result;
}
