/*
 * XREFs of SeCreateClientSecurity @ 0x14064A390
 * Callers:
 *     AlpcpCreateClientPort @ 0x14061606C (AlpcpCreateClientPort.c)
 *     AlpcpCreateSecurityContext @ 0x14061901C (AlpcpCreateSecurityContext.c)
 *     AlpcpImpersonateMessage @ 0x1406388C0 (AlpcpImpersonateMessage.c)
 *     EtwpStartLogger @ 0x14065A360 (EtwpStartLogger.c)
 *     NtImpersonateThread @ 0x14069BFB0 (NtImpersonateThread.c)
 *     EtwpUpdateTrace @ 0x140726D7C (EtwpUpdateTrace.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     SepReconcileTrustSidWithProcessProtection @ 0x1400AB9B0 (SepReconcileTrustSidWithProcessProtection.c)
 *     SepCreateClientSecurityEx @ 0x140632EE0 (SepCreateClientSecurityEx.c)
 *     PsReferenceEffectiveToken @ 0x14064A470 (PsReferenceEffectiveToken.c)
 */

NTSTATUS __stdcall SeCreateClientSecurity(
        PETHREAD ClientThread,
        PSECURITY_QUALITY_OF_SERVICE ClientSecurityQos,
        BOOLEAN RemoteSession,
        PSECURITY_CLIENT_CONTEXT ClientContext)
{
  __int64 v7; // rsi
  NTSTATUS ClientSecurity; // ebx
  unsigned __int8 v10; // [rsp+60h] [rbp-20h] BYREF
  char v11; // [rsp+61h] [rbp-1Fh] BYREF
  char v12; // [rsp+62h] [rbp-1Eh] BYREF
  unsigned int v13; // [rsp+64h] [rbp-1Ch] BYREF
  int v14; // [rsp+68h] [rbp-18h] BYREF
  __int64 v15; // [rsp+70h] [rbp-10h] BYREF

  v15 = 0LL;
  v10 = 0;
  v7 = PsReferenceEffectiveToken(
         (_DWORD)ClientThread,
         (unsigned int)&v14,
         (unsigned int)&v12,
         (unsigned int)&v13,
         (__int64)&v11);
  SepReconcileTrustSidWithProcessProtection(*(_QWORD *)(v7 + 1104), (__int64)&v11, &v10, &v15);
  ClientSecurity = SepCreateClientSecurityEx(
                     (_DWORD *)v7,
                     (__int64)ClientSecurityQos,
                     RemoteSession,
                     v14,
                     v12,
                     v13,
                     0,
                     0LL,
                     v10,
                     v15,
                     (__int64)ClientContext);
  if ( ClientSecurity < 0 || !ClientSecurityQos->ContextTrackingMode )
    ObfDereferenceObject((PVOID)v7);
  return ClientSecurity;
}
