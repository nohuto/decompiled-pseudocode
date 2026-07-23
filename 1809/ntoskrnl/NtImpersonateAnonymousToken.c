/*
 * XREFs of NtImpersonateAnonymousToken @ 0x1405BA710
 * Callers:
 *     <none>
 * Callees:
 *     SeTokenIsRestricted @ 0x140013360 (SeTokenIsRestricted.c)
 *     SeTokenIsWriteRestricted @ 0x140013380 (SeTokenIsWriteRestricted.c)
 *     ObReferenceObjectByPointer @ 0x140013530 (ObReferenceObjectByPointer.c)
 *     PsGetCurrentServerSilo @ 0x14004D270 (PsGetCurrentServerSilo.c)
 *     ObFastDereferenceObject @ 0x14004D9D0 (ObFastDereferenceObject.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1400B9B60 (PsIsCurrentThreadInServerSilo.c)
 *     SepGetAnonymousToken @ 0x1400DD58C (SepGetAnonymousToken.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     SepCopyAnonymousTokenAndSetSilo @ 0x1405838D0 (SepCopyAnonymousTokenAndSetSilo.c)
 *     SepRegQueryDwordValue @ 0x1405BA9BC (SepRegQueryDwordValue.c)
 *     PsReferencePrimaryToken @ 0x1405DE640 (PsReferencePrimaryToken.c)
 *     SeReleaseSubjectContext @ 0x1405E2240 (SeReleaseSubjectContext.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     SeCaptureSubjectContext @ 0x140632AA0 (SeCaptureSubjectContext.c)
 *     PsImpersonateClient @ 0x140638B90 (PsImpersonateClient.c)
 *     SepDuplicateToken @ 0x14064A640 (SepDuplicateToken.c)
 */

NTSTATUS __stdcall NtImpersonateAnonymousToken(HANDLE ThreadHandle)
{
  KPROCESSOR_MODE PreviousMode; // r9
  NTSTATUS result; // eax
  _DWORD *ClientToken; // rsi
  PVOID v5; // rdi
  int v6; // r8d
  __int64 CurrentServerSilo; // rax
  NTSTATUS AnonymousToken; // ebx
  _KPROCESS *Process; // rsi
  PACCESS_TOKEN v10; // rax
  void *v11; // rbx
  PVOID Object; // [rsp+40h] [rbp-19h] BYREF
  PVOID v13; // [rsp+48h] [rbp-11h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+50h] [rbp-9h] BYREF
  int v15; // [rsp+70h] [rbp+17h] BYREF
  __int64 v16; // [rsp+78h] [rbp+1Fh]
  __int64 v17; // [rsp+80h] [rbp+27h]
  int v18; // [rsp+88h] [rbp+2Fh]
  __int128 v19; // [rsp+90h] [rbp+37h]
  int v20; // [rsp+C8h] [rbp+6Fh] BYREF
  PVOID Token; // [rsp+D0h] [rbp+77h] BYREF
  PACCESS_TOKEN v22; // [rsp+D8h] [rbp+7Fh] BYREF

  Token = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v22 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v13 = 0LL;
  result = ObReferenceObjectByHandle(ThreadHandle, 0x100u, (POBJECT_TYPE)PsThreadType, PreviousMode, &Object, 0LL);
  if ( result < 0 )
    return result;
  SeCaptureSubjectContext(&SubjectContext);
  ClientToken = SubjectContext.ClientToken;
  if ( !SubjectContext.ClientToken
    || (*((_DWORD *)SubjectContext.PrimaryToken + 50) & 0x4000) != 0
    && SubjectContext.ImpersonationLevel < SecurityImpersonation )
  {
    ClientToken = SubjectContext.PrimaryToken;
  }
  if ( (ClientToken[50] & 0x4000) != 0 )
  {
    AnonymousToken = SepGetAnonymousToken((__int64)ClientToken, &v22);
    if ( AnonymousToken >= 0 )
    {
      AnonymousToken = PsImpersonateClient((PETHREAD)Object, v22, 1u, 0, SecurityImpersonation);
      ObfDereferenceObject(v22);
    }
    goto LABEL_25;
  }
  if ( (int)SepRegQueryDwordValue(SubjectContext.PrimaryToken, 0x4000LL, &v20) < 0
    || (v5 = (PVOID)SeAnonymousLogonToken, v20 != 1) )
  {
    v5 = SeAnonymousLogonTokenNoEveryone;
  }
  if ( !PsIsCurrentThreadInServerSilo() )
  {
    if ( (ClientToken[50] & 0x380000) != 0 )
    {
      v16 = 0LL;
      v18 = 0;
      v17 = 0LL;
      LOBYTE(v6) = 1;
      v15 = 48;
      v19 = 0LL;
      AnonymousToken = SepDuplicateToken((_DWORD)v5, (unsigned int)&v15, v6, 2, 2, 0, 1, (__int64)&v13);
      if ( AnonymousToken < 0 )
        goto LABEL_25;
      v5 = v13;
      *((_DWORD *)v13 + 50) |= ClientToken[50] & 0x380000;
    }
LABEL_16:
    AnonymousToken = ObReferenceObjectByPointer(
                       v5,
                       4u,
                       (POBJECT_TYPE)SeTokenObjectType,
                       KeGetCurrentThread()->PreviousMode);
    if ( AnonymousToken >= 0 )
    {
      ObfDereferenceObject(v5);
      Process = KeGetCurrentThread()->ApcState.Process;
      v10 = PsReferencePrimaryToken(Process);
      v11 = v10;
      if ( v10 )
      {
        if ( !SeTokenIsRestricted(v10) || SeTokenIsWriteRestricted(v11) )
        {
          ObFastDereferenceObject((signed __int64 *)&Process[1].Affinity.Bitmap[5], (unsigned __int64)v11);
          AnonymousToken = PsImpersonateClient((PETHREAD)Object, v5, Token == 0LL, 0, SecurityImpersonation);
        }
        else
        {
          ObfDereferenceObject(v11);
          AnonymousToken = -1073741790;
        }
      }
      else
      {
        AnonymousToken = -1073741823;
      }
    }
    goto LABEL_25;
  }
  CurrentServerSilo = PsGetCurrentServerSilo();
  AnonymousToken = SepCopyAnonymousTokenAndSetSilo(CurrentServerSilo, &Token);
  if ( AnonymousToken >= 0 )
  {
    v5 = Token;
    goto LABEL_16;
  }
LABEL_25:
  SeReleaseSubjectContext(&SubjectContext);
  if ( Object )
    ObfDereferenceObject(Object);
  if ( Token )
    ObfDereferenceObject(Token);
  if ( v13 )
    ObfDereferenceObject(v13);
  return AnonymousToken;
}
