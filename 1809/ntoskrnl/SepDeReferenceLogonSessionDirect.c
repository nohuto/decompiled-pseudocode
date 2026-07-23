/*
 * XREFs of SepDeReferenceLogonSessionDirect @ 0x1400140A0
 * Callers:
 *     SepLinkLogonSessions @ 0x140176F18 (SepLinkLogonSessions.c)
 *     SepStopReferencingLogonSession @ 0x1405BE9C8 (SepStopReferencingLogonSession.c)
 *     NtQueryInformationToken @ 0x14062B780 (NtQueryInformationToken.c)
 *     SeShutdownServerSilo @ 0x14089CB10 (SeShutdownServerSilo.c)
 *     SepSetServerSiloToken @ 0x14089D240 (SepSetServerSiloToken.c)
 *     SeGetLinkedToken @ 0x1408A2D50 (SeGetLinkedToken.c)
 * Callees:
 *     SepDeReferenceLogonSession @ 0x1406B4880 (SepDeReferenceLogonSession.c)
 */

signed __int64 __fastcall SepDeReferenceLogonSessionDirect(_QWORD *a1)
{
  signed __int64 result; // rax
  signed __int64 i; // rdx
  signed __int64 v3; // rtt
  __int64 v4; // rdx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  _m_prefetchw(a1 + 3);
  result = a1[3];
  for ( i = result - 1; i > 0; i = result - 1 )
  {
    v3 = result;
    result = _InterlockedCompareExchange64(a1 + 3, i, result);
    if ( v3 == result )
      return result;
  }
  if ( i )
    __fastfail(0xEu);
  v4 = a1[20];
  v5 = a1[1];
  return SepDeReferenceLogonSession(&v5, v4);
}
