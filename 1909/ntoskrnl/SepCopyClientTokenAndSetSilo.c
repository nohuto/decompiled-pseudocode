/*
 * XREFs of SepCopyClientTokenAndSetSilo @ 0x1408D9EB0
 * Callers:
 *     SepCreateClientSecurityEx @ 0x1405DE7A0 (SepCreateClientSecurityEx.c)
 *     SepUpdateSiloInClientSecurity @ 0x1408DFAB4 (SepUpdateSiloInClientSecurity.c)
 * Callees:
 *     PsGetServerSiloServiceSessionId @ 0x140002320 (PsGetServerSiloServiceSessionId.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     SeCopyClientToken @ 0x1405C4278 (SeCopyClientToken.c)
 *     SeSetSessionIdToken @ 0x1406E6D14 (SeSetSessionIdToken.c)
 *     SepSetServerSiloToken @ 0x1408DA338 (SepSetServerSiloToken.c)
 */

__int64 __fastcall SepCopyClientTokenAndSetSilo(int a1, int a2, __int64 a3, _QWORD *a4)
{
  __int64 result; // rax
  NTSTATUS v7; // ebx
  ULONG ServerSiloServiceSessionId; // eax

  result = SeCopyClientToken(a1, a2, a3, 0, 0LL, a4);
  v7 = result;
  if ( (int)result >= 0 )
  {
    ServerSiloServiceSessionId = PsGetServerSiloServiceSessionId(a3);
    if ( ServerSiloServiceSessionId != -1 )
      v7 = SeSetSessionIdToken((PACCESS_TOKEN)*a4, ServerSiloServiceSessionId);
    if ( v7 < 0 || (v7 = SepSetServerSiloToken(*a4, a3), v7 < 0) )
    {
      ObfDereferenceObject((PVOID)*a4);
      *a4 = 0LL;
    }
    return (unsigned int)v7;
  }
  return result;
}
