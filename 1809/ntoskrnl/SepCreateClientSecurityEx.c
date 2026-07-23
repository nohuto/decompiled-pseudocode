/*
 * XREFs of SepCreateClientSecurityEx @ 0x140632EE0
 * Callers:
 *     SeCreateClientSecurityFromSubjectContextEx @ 0x140300040 (SeCreateClientSecurityFromSubjectContextEx.c)
 *     SeCreateClientSecurityEx @ 0x140632D00 (SeCreateClientSecurityEx.c)
 *     SeCreateClientSecurity @ 0x14064A390 (SeCreateClientSecurity.c)
 *     SeCreateClientSecurityFromSubjectContext @ 0x1406CC8F0 (SeCreateClientSecurityFromSubjectContext.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x14004D270 (PsGetCurrentServerSilo.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     PsIsHostSilo @ 0x1400B89C0 (PsIsHostSilo.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1400B9B60 (PsIsCurrentThreadInServerSilo.c)
 *     SepGetAnonymousToken @ 0x1400DD58C (SepGetAnonymousToken.c)
 *     PsReferencePrimaryToken @ 0x1405DE640 (PsReferencePrimaryToken.c)
 *     ObInsertObjectEx @ 0x14062E0A0 (ObInsertObjectEx.c)
 *     SeCopyClientToken @ 0x14064B034 (SeCopyClientToken.c)
 *     SeQueryServerSiloToken @ 0x1406C67A0 (SeQueryServerSiloToken.c)
 *     SepCopyClientTokenAndSetSilo @ 0x14089CF30 (SepCopyClientTokenAndSetSilo.c)
 *     SeGetTokenControlInformation @ 0x1408A2F5C (SeGetTokenControlInformation.c)
 */

__int64 __fastcall SepCreateClientSecurityEx(
        _DWORD *a1,
        __int64 a2,
        char a3,
        int a4,
        char a5,
        unsigned int a6,
        char a7,
        struct _KTHREAD *a8,
        unsigned __int8 a9,
        __int64 a10,
        __int64 a11)
{
  char v12; // cl
  unsigned int v15; // eax
  __int64 v16; // rbx
  char v17; // al
  __int64 result; // rax
  bool v19; // al
  __int64 v20; // r8
  __int64 v21; // rcx
  struct _KTHREAD *CurrentThread; // rcx
  struct _KPROCESS *Process; // rcx
  PACCESS_TOKEN v24; // rax
  __int64 v25; // rcx
  void *v26; // rdi
  int AnonymousToken; // r14d
  __int64 v28; // r14
  __int64 v29; // r8
  __int64 CurrentServerSilo; // rax
  _DWORD *v31; // [rsp+40h] [rbp-28h] BYREF
  __int64 v32[4]; // [rsp+48h] [rbp-20h] BYREF
  PVOID Object; // [rsp+78h] [rbp+10h] BYREF

  v12 = 0;
  Object = 0LL;
  if ( *(_BYTE *)(a2 + 8) >= 2u )
    return 3221225485LL;
  v15 = *(_DWORD *)(a2 + 4);
  if ( v15 > 3 )
    return 3221225637LL;
  if ( a4 == 2 )
  {
    if ( (int)v15 > (int)a6 )
    {
      if ( !a7 )
        return 3221225637LL;
      v12 = 1;
    }
    if ( a6 > 1 && (!a3 || a6 == 3) )
    {
      v19 = a5 || *(_BYTE *)(a2 + 9);
      v16 = a11;
      *(_BYTE *)(a11 + 25) = v19;
      if ( !v12 )
        goto LABEL_5;
LABEL_31:
      if ( (a1[50] & 0x4000) != 0 )
      {
        v21 = (__int64)a1;
      }
      else
      {
        if ( a8 )
        {
          CurrentThread = KeGetCurrentThread();
          if ( a8 == CurrentThread )
            Process = CurrentThread->ApcState.Process;
          else
            Process = a8->Process;
          v24 = PsReferencePrimaryToken(Process);
          v25 = 0LL;
          v26 = v24;
          if ( (*((_DWORD *)v24 + 50) & 0x4000) != 0 )
            v25 = (__int64)v24;
          AnonymousToken = SepGetAnonymousToken(v25, &Object);
          ObfDereferenceObject(v26);
LABEL_43:
          if ( AnonymousToken < 0 )
            return (unsigned int)AnonymousToken;
          a1 = Object;
          result = ObInsertObjectEx(Object, 0LL, 0LL, 0, 0, 0LL, 0LL);
          if ( (int)result >= 0 )
          {
            *(_QWORD *)v16 = 12LL;
            *(_BYTE *)(v16 + 8) = 0;
            v17 = *(_BYTE *)(a2 + 9);
            *(_BYTE *)(v16 + 24) = 0;
            goto LABEL_9;
          }
          return result;
        }
        v21 = 0LL;
      }
      AnonymousToken = SepGetAnonymousToken(v21, &Object);
      goto LABEL_43;
    }
    if ( a7 )
    {
      v16 = a11;
      goto LABEL_31;
    }
    return 3221225637LL;
  }
  v16 = a11;
  *(_BYTE *)(a11 + 25) = *(_BYTE *)(a2 + 9);
LABEL_5:
  if ( *(_BYTE *)(a2 + 8) )
  {
    *(_BYTE *)(v16 + 24) = 1;
    if ( a3 )
      SeGetTokenControlInformation(a1, v16 + 28);
LABEL_8:
    *(_DWORD *)v16 = 12;
    *(_DWORD *)(v16 + 4) = *(_DWORD *)(a2 + 4);
    *(_BYTE *)(v16 + 8) = *(_BYTE *)(a2 + 8);
    v17 = *(_BYTE *)(a2 + 9);
LABEL_9:
    *(_QWORD *)(v16 + 16) = a1;
    *(_BYTE *)(v16 + 9) = v17;
    result = 0LL;
    *(_BYTE *)(v16 + 26) = a3;
    return result;
  }
  *(_BYTE *)(v16 + 24) = 0;
  if ( PsIsCurrentThreadInServerSilo() )
  {
    v28 = *((_QWORD *)a1 + 3);
    if ( (int)SeQueryServerSiloToken(a1, v32) >= 0 && PsIsHostSilo(v32[0]) && v28 == 999 )
    {
      CurrentServerSilo = PsGetCurrentServerSilo();
      result = SepCopyClientTokenAndSetSilo(a1, *(unsigned int *)(a2 + 4), CurrentServerSilo, &v31);
    }
    else
    {
      result = SeCopyClientToken(a1, *(unsigned int *)(a2 + 4), v29, 0LL, 0LL, &v31);
    }
  }
  else
  {
    result = SeCopyClientToken(a1, *(unsigned int *)(a2 + 4), v20, a9, a10, &v31);
  }
  a1 = v31;
  if ( (int)result >= 0 )
    goto LABEL_8;
  return result;
}
