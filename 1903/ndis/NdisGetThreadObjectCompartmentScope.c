/*
 * XREFs of NdisGetThreadObjectCompartmentScope @ 0x1C00104C0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z @ 0x1C003686C (-ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z.c)
 */

__int64 __fastcall NdisGetThreadObjectCompartmentScope(PETHREAD Thread, _DWORD *a2, _DWORD *a3)
{
  __int64 result; // rax
  __int64 v7; // rcx
  unsigned int v8; // esi
  PACCESS_TOKEN v9; // rax
  void *v10; // r14
  unsigned int CurrentProcessSessionId; // eax
  unsigned int ThreadSessionId; // edi
  NTSTATUS v13; // edi
  KIRQL v14; // al
  _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // [rsp+20h] [rbp-28h] BYREF
  PVOID TokenInformation; // [rsp+28h] [rbp-20h] BYREF
  BOOLEAN EffectiveOnly; // [rsp+60h] [rbp+18h] BYREF
  BOOLEAN CopyOnOpen; // [rsp+68h] [rbp+20h] BYREF

  result = (__int64)PsGetThreadProperty(Thread, 0x6D43644EuLL, 0);
  v8 = 0;
  if ( result )
  {
    *a3 = *(_DWORD *)result;
    *a2 = *(_DWORD *)(result + 4);
    result = ObfDereferenceObject((PVOID)result);
  }
  else
  {
    *a3 = 0;
    *a2 = 0;
  }
  if ( *a3 )
    return result;
  TokenInformation = 0LL;
  if ( KeGetCurrentIrql() >= 2u )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v7);
  }
  else
  {
    v9 = PsReferenceImpersonationToken(Thread, &CopyOnOpen, &EffectiveOnly, &ImpersonationLevel);
    v10 = v9;
    if ( v9 )
    {
      v13 = SeQueryInformationToken(v9, TokenSessionId, &TokenInformation);
      PsDereferenceImpersonationToken(v10);
      if ( v13 >= 0 )
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
    v14 = KeAcquireSpinLockRaiseToDpc(&ndisCmSessionLock);
    if ( ThreadSessionId < ndisCmSessionCount )
      v8 = *((_DWORD *)ndisCmSession + 6 * ThreadSessionId);
    KeReleaseSpinLock(&ndisCmSessionLock, v14);
    if ( !v8 )
      v8 = 1;
    result = v8;
  }
  else
  {
    result = 1LL;
  }
  *a3 = result;
  return result;
}
