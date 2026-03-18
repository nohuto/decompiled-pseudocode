/*
 * XREFs of SepStopReferencingLogonSession @ 0x1405BD9C8
 * Callers:
 *     SepLinkLogonSessions @ 0x140176DF8 (SepLinkLogonSessions.c)
 *     NtSetInformationToken @ 0x1405BDAA0 (NtSetInformationToken.c)
 *     SepSetLogonSessionToken @ 0x1406D0210 (SepSetLogonSessionToken.c)
 * Callees:
 *     SepDeReferenceLogonSessionDirect @ 0x1400140A0 (SepDeReferenceLogonSessionDirect.c)
 *     SepConvertToOwnTokenClaims @ 0x1400140D8 (SepConvertToOwnTokenClaims.c)
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
