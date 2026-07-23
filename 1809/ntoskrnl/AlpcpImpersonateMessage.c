/*
 * XREFs of AlpcpImpersonateMessage @ 0x1406388C0
 * Callers:
 *     NtAlpcImpersonateClientOfPort @ 0x140638760 (NtAlpcImpersonateClientOfPort.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     SeCreateClientSecurityEx @ 0x140632D00 (SeCreateClientSecurityEx.c)
 *     PsImpersonateClient @ 0x140638B90 (PsImpersonateClient.c)
 *     SeCreateClientSecurity @ 0x14064A390 (SeCreateClientSecurity.c)
 *     AlpcpReferenceConnectedPort @ 0x14068FEF4 (AlpcpReferenceConnectedPort.c)
 */

__int64 __fastcall AlpcpImpersonateMessage(__int64 a1, __int64 a2, int a3, int a4, SECURITY_IMPERSONATION_LEVEL a5)
{
  int v5; // r15d
  void *v9; // r14
  struct _SECURITY_CLIENT_CONTEXT *p_ClientContext; // rbx
  __int64 v11; // rdx
  __int64 v12; // rsi
  SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // ebp
  _DWORD *v14; // rax
  struct _KTHREAD *v15; // rcx
  struct _SECURITY_QUALITY_OF_SERVICE *v16; // rdx
  int ClientSecurity; // eax
  unsigned int v18; // edi
  BOOLEAN v19; // ah
  _DWORD *ClientToken; // rcx
  int v22; // eax
  PACCESS_TOKEN Token[2]; // [rsp+40h] [rbp-D8h]
  struct _SECURITY_CLIENT_CONTEXT ClientContext; // [rsp+80h] [rbp-98h] BYREF

  v5 = 0;
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
  ImpersonationLevel = a5;
  if ( !v12 )
  {
    v14 = (_DWORD *)AlpcpReferenceConnectedPort(a1);
    v9 = v14;
    if ( v14 )
    {
      if ( (v14[64] & 0x10000) != 0 )
      {
        if ( (v14[104] & 0x400) == 0 )
        {
          p_ClientContext = (struct _SECURITY_CLIENT_CONTEXT *)(v14 + 16);
          goto LABEL_16;
        }
        v15 = *(struct _KTHREAD **)(a2 + 32);
        if ( v15 )
        {
          if ( a4 && v14[66] < a5 )
          {
            v18 = -1073741790;
            goto LABEL_21;
          }
          v16 = (struct _SECURITY_QUALITY_OF_SERVICE *)(v14 + 65);
          if ( a3 )
            ClientSecurity = SeCreateClientSecurityEx((__int64)v15, (int)v16, 0, (__int64)&ClientContext);
          else
            ClientSecurity = SeCreateClientSecurity(v15, v16, 0, &ClientContext);
          v18 = ClientSecurity;
          if ( ClientSecurity < 0 )
            goto LABEL_21;
          p_ClientContext = &ClientContext;
          v5 = 1;
LABEL_16:
          *(_OWORD *)Token = *(_OWORD *)&p_ClientContext->ClientToken;
          if ( a4 )
          {
            if ( a5 > p_ClientContext->SecurityQos.ImpersonationLevel )
            {
              v18 = -1073741790;
              goto LABEL_21;
            }
          }
          else
          {
            ImpersonationLevel = SHIDWORD(*(_QWORD *)&p_ClientContext->SecurityQos.Length);
          }
          if ( LOBYTE(Token[1]) )
            v19 = BYTE1(*(_QWORD *)&p_ClientContext->DirectlyAccessClientToken);
          else
            v19 = BYTE1(*(_QWORD *)&p_ClientContext->SecurityQos.ContextTrackingMode);
          v18 = PsImpersonateClient(KeGetCurrentThread(), Token[0], 1u, v19, ImpersonationLevel);
          goto LABEL_21;
        }
        v18 = -1073741790;
      }
      else
      {
        v18 = -1073741790;
      }
LABEL_21:
      if ( v9 )
        ObfDereferenceObject(v9);
      if ( v5 )
      {
        ClientToken = p_ClientContext->ClientToken;
        if ( ClientToken[48] == 1 || ClientToken )
          ObfDereferenceObject(ClientToken);
      }
      return v18;
    }
    return (unsigned int)-1073741790;
  }
  ExAcquirePushLockExclusiveEx(v12 - 16, 0LL);
  v22 = *(_DWORD *)(v12 + 104);
  if ( (v22 & 1) == 0 )
  {
    *(_DWORD *)(v12 + 104) = v22 | 2;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v12 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v12 - 16));
    KeAbPostRelease(v12 - 16);
    p_ClientContext = (struct _SECURITY_CLIENT_CONTEXT *)(v12 + 32);
    goto LABEL_16;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v12 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(v12 - 16));
  KeAbPostRelease(v12 - 16);
  return 3221225506LL;
}
