/*
 * XREFs of SepCopyAnonymousTokenAndSetSilo @ 0x1405838D0
 * Callers:
 *     NtImpersonateAnonymousToken @ 0x1405BA710 (NtImpersonateAnonymousToken.c)
 * Callees:
 *     PsGetServerSiloServiceSessionId @ 0x1400067D0 (PsGetServerSiloServiceSessionId.c)
 *     ObFastDereferenceObject @ 0x14004D9D0 (ObFastDereferenceObject.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14004E220 (ObfReferenceObject.c)
 *     SepGetAnonymousToken @ 0x1400DD58C (SepGetAnonymousToken.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     SepFinalizeTokenAcls @ 0x140583ABC (SepFinalizeTokenAcls.c)
 *     SeSetSessionIdToken @ 0x1405BD45C (SeSetSessionIdToken.c)
 *     SeDeleteAccessState @ 0x1405BE870 (SeDeleteAccessState.c)
 *     SeCreateAccessState @ 0x140613230 (SeCreateAccessState.c)
 *     ObInsertObject @ 0x14061C280 (ObInsertObject.c)
 *     SepSetServerSiloToken @ 0x14089D240 (SepSetServerSiloToken.c)
 */

__int64 __fastcall SepCopyAnonymousTokenAndSetSilo(__int64 a1, PVOID *a2)
{
  int AnonymousToken; // ebx
  PVOID v5; // rsi
  ULONG ServerSiloServiceSessionId; // eax
  PVOID Object[2]; // [rsp+30h] [rbp-1B8h] BYREF
  struct _ACCESS_STATE PassedAccessState; // [rsp+40h] [rbp-1A8h] BYREF
  _BYTE v10[224]; // [rsp+E0h] [rbp-108h] BYREF

  AnonymousToken = SepGetAnonymousToken(0LL, Object);
  if ( AnonymousToken < 0 )
    goto LABEL_8;
  SeCreateAccessState(
    &PassedAccessState,
    v10,
    0LL,
    ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *((unsigned __int8 *)Object[0] - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(LOWORD(Object[0]) - 48) >> 8)]
  + 76);
  ObFastDereferenceObject(
    (signed __int64 *)&KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[5],
    (unsigned __int64)PassedAccessState.SubjectSecurityContext.PrimaryToken);
  ObfReferenceObject(SeAnonymousLogonTokenNoEveryone);
  v5 = Object[0];
  PassedAccessState.SubjectSecurityContext.PrimaryToken = SeAnonymousLogonTokenNoEveryone;
  AnonymousToken = ObInsertObject(Object[0], &PassedAccessState, 0, 0, 0LL, 0LL);
  SeDeleteAccessState(&PassedAccessState);
  if ( AnonymousToken < 0 )
    goto LABEL_8;
  SepFinalizeTokenAcls(v5);
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
