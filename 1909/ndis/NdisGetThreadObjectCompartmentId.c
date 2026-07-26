/*
 * XREFs of NdisGetThreadObjectCompartmentId @ 0x1C0010D80
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z @ 0x1C003685C (-ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z.c)
 */

__int64 __fastcall NdisGetThreadObjectCompartmentId(PETHREAD Thread)
{
  unsigned int *ThreadProperty; // rax
  __int64 v3; // rcx
  unsigned int v4; // ebx
  PACCESS_TOKEN v5; // rax
  void *v6; // rsi
  unsigned int CurrentProcessSessionId; // eax
  unsigned int ThreadSessionId; // ebx
  NTSTATUS v10; // ebx
  unsigned int v11; // edi
  KIRQL v12; // al
  PVOID TokenInformation; // [rsp+20h] [rbp-28h] BYREF
  BOOLEAN EffectiveOnly; // [rsp+58h] [rbp+10h] BYREF
  BOOLEAN CopyOnOpen; // [rsp+60h] [rbp+18h] BYREF
  _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // [rsp+68h] [rbp+20h] BYREF

  ThreadProperty = (unsigned int *)PsGetThreadProperty(Thread, 0x6D43644EuLL, 0);
  if ( ThreadProperty )
  {
    v4 = *ThreadProperty;
    ObfDereferenceObject(ThreadProperty);
  }
  else
  {
    v4 = 0;
  }
  if ( v4 )
    return v4;
  TokenInformation = 0LL;
  if ( KeGetCurrentIrql() >= 2u )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v3);
  }
  else
  {
    v5 = PsReferenceImpersonationToken(Thread, &CopyOnOpen, &EffectiveOnly, &ImpersonationLevel);
    v6 = v5;
    if ( v5 )
    {
      v10 = SeQueryInformationToken(v5, TokenSessionId, &TokenInformation);
      PsDereferenceImpersonationToken(v6);
      if ( v10 >= 0 )
      {
        ThreadSessionId = (unsigned int)TokenInformation;
        goto LABEL_8;
      }
    }
    CurrentProcessSessionId = PsGetThreadSessionId(Thread);
  }
  ThreadSessionId = CurrentProcessSessionId;
LABEL_8:
  if ( ThreadSessionId == -1 )
    ThreadSessionId = ndisCmGetThreadSessionId(KeGetCurrentThread());
  if ( ThreadSessionId < ndisCmSessionCount )
  {
    v11 = 0;
    v12 = KeAcquireSpinLockRaiseToDpc(&ndisCmSessionLock);
    if ( ThreadSessionId < ndisCmSessionCount )
      v11 = *((_DWORD *)ndisCmSession + 6 * ThreadSessionId);
    KeReleaseSpinLock(&ndisCmSessionLock, v12);
    if ( !v11 )
      return 1;
    return v11;
  }
  else
  {
    return 1;
  }
}
