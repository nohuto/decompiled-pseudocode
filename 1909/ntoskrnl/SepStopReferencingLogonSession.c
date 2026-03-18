/*
 * XREFs of SepStopReferencingLogonSession @ 0x140623860
 * Callers:
 *     SepLinkLogonSessions @ 0x140088534 (SepLinkLogonSessions.c)
 *     SepSetLogonSessionToken @ 0x140620EF0 (SepSetLogonSessionToken.c)
 *     NtSetInformationToken @ 0x140678810 (NtSetInformationToken.c)
 * Callees:
 *     SepDeReferenceLogonSessionDirect @ 0x140079A94 (SepDeReferenceLogonSessionDirect.c)
 *     SepConvertToOwnTokenClaims @ 0x140088774 (SepConvertToOwnTokenClaims.c)
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
