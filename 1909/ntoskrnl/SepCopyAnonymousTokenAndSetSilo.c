/*
 * XREFs of SepCopyAnonymousTokenAndSetSilo @ 0x1408D9D50
 * Callers:
 *     NtImpersonateAnonymousToken @ 0x14061C0D0 (NtImpersonateAnonymousToken.c)
 * Callees:
 *     PsGetServerSiloServiceSessionId @ 0x140002320 (PsGetServerSiloServiceSessionId.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     SepGetAnonymousToken @ 0x140087E6C (SepGetAnonymousToken.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     SepAppendAceToTokenObjectAcl @ 0x1405C72C0 (SepAppendAceToTokenObjectAcl.c)
 *     SeCreateAccessState @ 0x1405D3E00 (SeCreateAccessState.c)
 *     ObInsertObjectEx @ 0x1405D9D60 (ObInsertObjectEx.c)
 *     SeSetSessionIdToken @ 0x1406E6D14 (SeSetSessionIdToken.c)
 *     SepSetServerSiloToken @ 0x1408DA338 (SepSetServerSiloToken.c)
 */

__int64 __fastcall SepCopyAnonymousTokenAndSetSilo(__int64 a1, PVOID *a2)
{
  int AnonymousToken; // ebx
  _QWORD *v5; // rsi
  ULONG ServerSiloServiceSessionId; // eax
  PACCESS_TOKEN Token; // [rsp+40h] [rbp-1B8h] BYREF
  struct _ACCESS_STATE AccessState; // [rsp+50h] [rbp-1A8h] BYREF
  _QWORD v10[28]; // [rsp+F0h] [rbp-108h] BYREF

  memset(&AccessState, 0, sizeof(AccessState));
  memset(v10, 0, sizeof(v10));
  AnonymousToken = SepGetAnonymousToken(0LL, (__int64 **)&Token);
  if ( AnonymousToken < 0 )
    goto LABEL_8;
  v5 = Token;
  SeCreateAccessState(
    &AccessState,
    v10,
    0,
    (GENERIC_MAPPING *)(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*((char *)Token - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Token - 48) >> 8)]
                      + 76));
  AccessState.SubjectSecurityContext.PrimaryToken = (PACCESS_TOKEN)SeAnonymousLogonTokenNoEveryone;
  AnonymousToken = ObInsertObjectEx(v5, &AccessState, 0, 0, 0, 0LL, 0LL);
  if ( AnonymousToken < 0 )
    goto LABEL_8;
  SepAppendAceToTokenObjectAcl((__int64)v5, 8u, SeAliasAdminsSid);
  *a2 = v5;
  ServerSiloServiceSessionId = PsGetServerSiloServiceSessionId(a1);
  if ( ServerSiloServiceSessionId != -1 )
    AnonymousToken = SeSetSessionIdToken(v5, ServerSiloServiceSessionId);
  if ( AnonymousToken < 0 || (AnonymousToken = SepSetServerSiloToken(*a2, a1), AnonymousToken < 0) )
  {
    ObfDereferenceObject(*a2);
LABEL_8:
    *a2 = 0LL;
  }
  return (unsigned int)AnonymousToken;
}
