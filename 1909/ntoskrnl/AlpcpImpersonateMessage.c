/*
 * XREFs of AlpcpImpersonateMessage @ 0x1405E4D40
 * Callers:
 *     NtAlpcImpersonateClientOfPort @ 0x1405E4B60 (NtAlpcImpersonateClientOfPort.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     SeCreateClientSecurityEx @ 0x1405DE5B0 (SeCreateClientSecurityEx.c)
 *     SeImpersonateClientEx @ 0x1405E5000 (SeImpersonateClientEx.c)
 *     AlpcpReferenceConnectedPort @ 0x1405E5150 (AlpcpReferenceConnectedPort.c)
 *     SeCreateClientSecurity @ 0x1405E5240 (SeCreateClientSecurity.c)
 *     AlpcpUnlockCommunicationInfoExclusive @ 0x140884BC4 (AlpcpUnlockCommunicationInfoExclusive.c)
 */

__int64 __fastcall AlpcpImpersonateMessage(__int64 a1, __int64 a2, int a3, int a4, SECURITY_IMPERSONATION_LEVEL a5)
{
  int v8; // r15d
  void *v9; // r14
  struct _SECURITY_CLIENT_CONTEXT *p_ClientContext; // rbx
  __int64 v11; // rcx
  __int64 v12; // rbp
  _DWORD *v13; // rax
  struct _KTHREAD *v14; // rcx
  struct _SECURITY_QUALITY_OF_SERVICE *v15; // rdx
  int ClientSecurity; // eax
  unsigned int v17; // edi
  __int128 v18; // xmm1
  __int128 v19; // xmm1
  _DWORD *ClientToken; // rcx
  int v22; // eax
  struct _SECURITY_CLIENT_CONTEXT v24; // [rsp+30h] [rbp-E8h] BYREF
  struct _SECURITY_CLIENT_CONTEXT ClientContext; // [rsp+80h] [rbp-98h] BYREF

  memset(&ClientContext, 0, sizeof(ClientContext));
  v8 = 0;
  v9 = 0LL;
  p_ClientContext = 0LL;
  if ( (*(_BYTE *)(a2 + 40) & 7) != 3 )
    return (unsigned int)-1073741790;
  if ( (*(_WORD *)(a2 + 244) & 0x4000) != 0 )
    return (unsigned int)-1073741790;
  v11 = *(_QWORD *)(a2 + 16);
  if ( v11 != a1 && ((*(_BYTE *)(a1 + 416) & 6) != 6 || v11 != **(_QWORD **)(a1 + 16)) )
    return (unsigned int)-1073741790;
  v12 = *(_QWORD *)(a2 + 136);
  if ( !v12 )
  {
    v13 = (_DWORD *)AlpcpReferenceConnectedPort(a1);
    v9 = v13;
    if ( v13 )
    {
      if ( (v13[64] & 0x10000) == 0 )
      {
        v17 = -1073741790;
        goto LABEL_18;
      }
      if ( (v13[104] & 0x400) != 0 )
      {
        v14 = *(struct _KTHREAD **)(a2 + 32);
        if ( !v14 )
        {
          v17 = -1073741790;
          goto LABEL_18;
        }
        if ( a4 && v13[66] < a5 )
        {
          v17 = -1073741790;
          goto LABEL_18;
        }
        v15 = (struct _SECURITY_QUALITY_OF_SERVICE *)(v13 + 65);
        if ( a3 )
          ClientSecurity = SeCreateClientSecurityEx((__int64)v14, (int)v15, 0, (__int64)&ClientContext);
        else
          ClientSecurity = SeCreateClientSecurity(v14, v15, 0, &ClientContext);
        v17 = ClientSecurity;
        if ( ClientSecurity < 0 )
          goto LABEL_18;
        p_ClientContext = &ClientContext;
        v8 = 1;
      }
      else
      {
        p_ClientContext = (struct _SECURITY_CLIENT_CONTEXT *)(v13 + 16);
      }
LABEL_16:
      v18 = *(_OWORD *)&p_ClientContext->ClientToken;
      *(_OWORD *)&v24.SecurityQos.Length = *(_OWORD *)&p_ClientContext->SecurityQos.Length;
      *(_OWORD *)&v24.ClientToken = v18;
      v19 = *(_OWORD *)&p_ClientContext->ClientTokenControl.ModifiedId.HighPart;
      *(_OWORD *)&v24.ClientTokenControl.TokenId.HighPart = *(_OWORD *)&p_ClientContext->ClientTokenControl.TokenId.HighPart;
      *(_QWORD *)&v24.ClientTokenControl.TokenSource.SourceIdentifier.HighPart = *(_QWORD *)&p_ClientContext->ClientTokenControl.TokenSource.SourceIdentifier.HighPart;
      *(_OWORD *)&v24.ClientTokenControl.ModifiedId.HighPart = v19;
      if ( a4 )
      {
        if ( a5 > p_ClientContext->SecurityQos.ImpersonationLevel )
        {
          v17 = -1073741790;
          goto LABEL_18;
        }
        v24.SecurityQos.ImpersonationLevel = a5;
      }
      v17 = SeImpersonateClientEx(&v24, 0LL);
LABEL_18:
      if ( v9 )
        ObfDereferenceObject(v9);
      if ( v8 )
      {
        ClientToken = p_ClientContext->ClientToken;
        if ( ClientToken[48] == 1 || ClientToken )
          ObfDereferenceObject(ClientToken);
      }
      return v17;
    }
    return (unsigned int)-1073741790;
  }
  ExAcquirePushLockExclusiveEx(v12 - 16, 0LL);
  v22 = *(_DWORD *)(v12 + 104);
  if ( (v22 & 1) == 0 )
  {
    *(_DWORD *)(v12 + 104) = v22 | 2;
    AlpcpUnlockCommunicationInfoExclusive(v12);
    p_ClientContext = (struct _SECURITY_CLIENT_CONTEXT *)(v12 + 32);
    goto LABEL_16;
  }
  AlpcpUnlockCommunicationInfoExclusive(v12);
  return 3221225506LL;
}
