/*
 * XREFs of NtImpersonateAnonymousToken @ 0x14061C0D0
 * Callers:
 *     <none>
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140002880 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSilo @ 0x140006560 (PsGetCurrentServerSilo.c)
 *     ObFastDereferenceObject @ 0x14003AE70 (ObFastDereferenceObject.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     SeTokenIsRestricted @ 0x140086FD0 (SeTokenIsRestricted.c)
 *     SeTokenIsWriteRestricted @ 0x140086FF0 (SeTokenIsWriteRestricted.c)
 *     ObReferenceObjectByPointer @ 0x1400870C0 (ObReferenceObjectByPointer.c)
 *     SepGetAnonymousToken @ 0x140087E6C (SepGetAnonymousToken.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     PsReferencePrimaryToken @ 0x1405D6170 (PsReferencePrimaryToken.c)
 *     SepDuplicateToken @ 0x1405D90A0 (SepDuplicateToken.c)
 *     SeCaptureSubjectContext @ 0x1405DE350 (SeCaptureSubjectContext.c)
 *     PsImpersonateClient @ 0x1405DEAE0 (PsImpersonateClient.c)
 *     SeReleaseSubjectContext @ 0x1405F3AE0 (SeReleaseSubjectContext.c)
 *     ObReferenceObjectByHandle @ 0x1405FB4B0 (ObReferenceObjectByHandle.c)
 *     SepRegQueryDwordValue @ 0x14061C3B4 (SepRegQueryDwordValue.c)
 *     SepCopyAnonymousTokenAndSetSilo @ 0x1408D9D50 (SepCopyAnonymousTokenAndSetSilo.c)
 */

NTSTATUS __stdcall NtImpersonateAnonymousToken(HANDLE ThreadHandle)
{
  KPROCESSOR_MODE PreviousMode; // r9
  NTSTATUS result; // eax
  __int64 v4; // rcx
  _DWORD *PrimaryToken; // rbx
  _DWORD *ClientToken; // rsi
  NTSTATUS AnonymousToken; // ebx
  PVOID v8; // rdi
  unsigned __int64 CurrentServerSilo; // rax
  _KPROCESS *Process; // rsi
  PACCESS_TOKEN v11; // rax
  void *v12; // rbx
  PVOID Object; // [rsp+40h] [rbp-29h] BYREF
  PVOID v14; // [rsp+48h] [rbp-21h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+50h] [rbp-19h] BYREF
  _DWORD v16[2]; // [rsp+70h] [rbp+7h] BYREF
  __int64 v17; // [rsp+78h] [rbp+Fh]
  __int64 v18; // [rsp+80h] [rbp+17h]
  int v19; // [rsp+88h] [rbp+1Fh]
  int v20; // [rsp+8Ch] [rbp+23h]
  __int128 v21; // [rsp+90h] [rbp+27h]
  int v22; // [rsp+D8h] [rbp+6Fh] BYREF
  PVOID Token; // [rsp+E0h] [rbp+77h] BYREF
  PACCESS_TOKEN v24; // [rsp+E8h] [rbp+7Fh] BYREF

  Token = 0LL;
  v16[1] = 0;
  v20 = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v24 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v14 = 0LL;
  result = ObReferenceObjectByHandle(ThreadHandle, 0x100u, (POBJECT_TYPE)PsThreadType, PreviousMode, &Object, 0LL);
  if ( result < 0 )
    return result;
  SeCaptureSubjectContext(&SubjectContext);
  PrimaryToken = SubjectContext.PrimaryToken;
  ClientToken = SubjectContext.PrimaryToken;
  if ( SubjectContext.ClientToken )
    ClientToken = SubjectContext.ClientToken;
  if ( (int)SepRegQueryDwordValue(v4, L"AnonymousAppContainerImpersonationLevelCheck", &v22) >= 0 && v22
    || ClientToken[48] == 1
    || (PrimaryToken[50] & 0x4000) == 0
    || (int)ClientToken[49] >= 2 )
  {
    if ( (ClientToken[50] & 0x4000) != 0 )
    {
      AnonymousToken = SepGetAnonymousToken((__int64)ClientToken, (__int64 **)&v24);
      if ( AnonymousToken >= 0 )
      {
        AnonymousToken = PsImpersonateClient((PETHREAD)Object, v24, 1u, 0, SecurityImpersonation);
        ObfDereferenceObject(v24);
      }
      goto LABEL_29;
    }
    if ( (int)SepRegQueryDwordValue(0x4000LL, L"EveryoneIncludesAnonymous", &v22) < 0
      || (v8 = (PVOID)SeAnonymousLogonToken, v22 != 1) )
    {
      v8 = (PVOID)SeAnonymousLogonTokenNoEveryone;
    }
    if ( PsIsCurrentThreadInServerSilo() )
    {
      CurrentServerSilo = PsGetCurrentServerSilo();
      AnonymousToken = SepCopyAnonymousTokenAndSetSilo(CurrentServerSilo, &Token);
      if ( AnonymousToken < 0 )
        goto LABEL_29;
      v8 = Token;
    }
    else if ( (ClientToken[50] & 0x380000) != 0 )
    {
      v16[0] = 48;
      v17 = 0LL;
      v19 = 0;
      v18 = 0LL;
      v21 = 0LL;
      AnonymousToken = SepDuplicateToken((__int64)v8, (int)v16, 1, 2, 2u, 0, 1, (char **)&v14);
      if ( AnonymousToken < 0 )
        goto LABEL_29;
      v8 = v14;
      *((_DWORD *)v14 + 50) |= ClientToken[50] & 0x380000;
    }
    AnonymousToken = ObReferenceObjectByPointer(
                       v8,
                       4u,
                       (POBJECT_TYPE)SeTokenObjectType,
                       KeGetCurrentThread()->PreviousMode);
    if ( AnonymousToken >= 0 )
    {
      ObfDereferenceObject(v8);
      Process = KeGetCurrentThread()->ApcState.Process;
      v11 = PsReferencePrimaryToken(Process);
      v12 = v11;
      if ( v11 )
      {
        if ( !SeTokenIsRestricted(v11) || SeTokenIsWriteRestricted(v12) )
        {
          ObFastDereferenceObject((signed __int64 *)&Process[1].Affinity.Bitmap[5], (unsigned __int64)v12);
          AnonymousToken = PsImpersonateClient((PETHREAD)Object, v8, Token == 0LL, 0, SecurityImpersonation);
        }
        else
        {
          ObfDereferenceObject(v12);
          AnonymousToken = -1073741790;
        }
      }
      else
      {
        AnonymousToken = -1073741823;
      }
    }
    goto LABEL_29;
  }
  AnonymousToken = -1073741659;
LABEL_29:
  SeReleaseSubjectContext(&SubjectContext);
  if ( Object )
    ObfDereferenceObject(Object);
  if ( Token )
    ObfDereferenceObject(Token);
  if ( v14 )
    ObfDereferenceObject(v14);
  return AnonymousToken;
}
