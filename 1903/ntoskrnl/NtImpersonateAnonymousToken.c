/*
 * XREFs of NtImpersonateAnonymousToken @ 0x14061A5C0
 * Callers:
 *     <none>
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140002880 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSilo @ 0x1400064D0 (PsGetCurrentServerSilo.c)
 *     ObFastDereferenceObject @ 0x14003B130 (ObFastDereferenceObject.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     SeTokenIsRestricted @ 0x140086BB0 (SeTokenIsRestricted.c)
 *     SeTokenIsWriteRestricted @ 0x140086BD0 (SeTokenIsWriteRestricted.c)
 *     ObReferenceObjectByPointer @ 0x140086CA0 (ObReferenceObjectByPointer.c)
 *     SepGetAnonymousToken @ 0x140087A4C (SepGetAnonymousToken.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     PsReferencePrimaryToken @ 0x1405D59B0 (PsReferencePrimaryToken.c)
 *     SepDuplicateToken @ 0x1405D88E0 (SepDuplicateToken.c)
 *     SeCaptureSubjectContext @ 0x1405DDBB0 (SeCaptureSubjectContext.c)
 *     PsImpersonateClient @ 0x1405DE340 (PsImpersonateClient.c)
 *     SeReleaseSubjectContext @ 0x1405F3180 (SeReleaseSubjectContext.c)
 *     ObReferenceObjectByHandle @ 0x1405FA460 (ObReferenceObjectByHandle.c)
 *     SepRegQueryDwordValue @ 0x14061A8B0 (SepRegQueryDwordValue.c)
 *     SepCopyAnonymousTokenAndSetSilo @ 0x1408DA450 (SepCopyAnonymousTokenAndSetSilo.c)
 */

NTSTATUS __stdcall NtImpersonateAnonymousToken(HANDLE ThreadHandle)
{
  KPROCESSOR_MODE PreviousMode; // r9
  NTSTATUS result; // eax
  _DWORD *PrimaryToken; // rbx
  _DWORD *ClientToken; // rsi
  NTSTATUS AnonymousToken; // ebx
  PVOID v7; // rdi
  unsigned __int64 CurrentServerSilo; // rax
  _KPROCESS *Process; // rsi
  PACCESS_TOKEN v10; // rax
  void *v11; // rbx
  PVOID Object; // [rsp+40h] [rbp-29h] BYREF
  PVOID v13; // [rsp+48h] [rbp-21h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+50h] [rbp-19h] BYREF
  _DWORD v15[2]; // [rsp+70h] [rbp+7h] BYREF
  __int64 v16; // [rsp+78h] [rbp+Fh]
  __int64 v17; // [rsp+80h] [rbp+17h]
  int v18; // [rsp+88h] [rbp+1Fh]
  int v19; // [rsp+8Ch] [rbp+23h]
  __int128 v20; // [rsp+90h] [rbp+27h]
  int v21; // [rsp+D8h] [rbp+6Fh] BYREF
  PVOID Token; // [rsp+E0h] [rbp+77h] BYREF
  PACCESS_TOKEN v23; // [rsp+E8h] [rbp+7Fh] BYREF

  Token = 0LL;
  v15[1] = 0;
  v19 = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v23 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v13 = 0LL;
  result = ObReferenceObjectByHandle(ThreadHandle, 0x100u, (POBJECT_TYPE)PsThreadType, PreviousMode, &Object, 0LL);
  if ( result < 0 )
    return result;
  SeCaptureSubjectContext(&SubjectContext);
  PrimaryToken = SubjectContext.PrimaryToken;
  ClientToken = SubjectContext.PrimaryToken;
  if ( SubjectContext.ClientToken )
    ClientToken = SubjectContext.ClientToken;
  if ( (int)SepRegQueryDwordValue(
              L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Lsa",
              L"AnonymousAppContainerImpersonationLevelCheck",
              &v21) >= 0
    && v21
    || ClientToken[48] == 1
    || (PrimaryToken[50] & 0x4000) == 0
    || (int)ClientToken[49] >= 2 )
  {
    if ( (ClientToken[50] & 0x4000) != 0 )
    {
      AnonymousToken = SepGetAnonymousToken((__int64)ClientToken, (__int64 **)&v23);
      if ( AnonymousToken >= 0 )
      {
        AnonymousToken = PsImpersonateClient((PETHREAD)Object, v23, 1u, 0, SecurityImpersonation);
        ObfDereferenceObject(v23);
      }
      goto LABEL_29;
    }
    if ( (int)SepRegQueryDwordValue(
                L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Lsa",
                L"EveryoneIncludesAnonymous",
                &v21) < 0
      || (v7 = (PVOID)SeAnonymousLogonToken, v21 != 1) )
    {
      v7 = (PVOID)SeAnonymousLogonTokenNoEveryone;
    }
    if ( PsIsCurrentThreadInServerSilo() )
    {
      CurrentServerSilo = PsGetCurrentServerSilo();
      AnonymousToken = SepCopyAnonymousTokenAndSetSilo(CurrentServerSilo, &Token);
      if ( AnonymousToken < 0 )
        goto LABEL_29;
      v7 = Token;
    }
    else if ( (ClientToken[50] & 0x380000) != 0 )
    {
      v15[0] = 48;
      v16 = 0LL;
      v18 = 0;
      v17 = 0LL;
      v20 = 0LL;
      AnonymousToken = SepDuplicateToken((__int64)v7, (int)v15, 1, 2, 2u, 0, 1, (char **)&v13);
      if ( AnonymousToken < 0 )
        goto LABEL_29;
      v7 = v13;
      *((_DWORD *)v13 + 50) |= ClientToken[50] & 0x380000;
    }
    AnonymousToken = ObReferenceObjectByPointer(
                       v7,
                       4u,
                       (POBJECT_TYPE)SeTokenObjectType,
                       KeGetCurrentThread()->PreviousMode);
    if ( AnonymousToken >= 0 )
    {
      ObfDereferenceObject(v7);
      Process = KeGetCurrentThread()->ApcState.Process;
      v10 = PsReferencePrimaryToken(Process);
      v11 = v10;
      if ( v10 )
      {
        if ( !SeTokenIsRestricted(v10) || SeTokenIsWriteRestricted(v11) )
        {
          ObFastDereferenceObject((signed __int64 *)&Process[1].Affinity.Bitmap[5], (unsigned __int64)v11);
          AnonymousToken = PsImpersonateClient((PETHREAD)Object, v7, Token == 0LL, 0, SecurityImpersonation);
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
    goto LABEL_29;
  }
  AnonymousToken = -1073741659;
LABEL_29:
  SeReleaseSubjectContext(&SubjectContext);
  if ( Object )
    ObfDereferenceObject(Object);
  if ( Token )
    ObfDereferenceObject(Token);
  if ( v13 )
    ObfDereferenceObject(v13);
  return AnonymousToken;
}
