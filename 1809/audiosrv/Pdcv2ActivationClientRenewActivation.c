/*
 * XREFs of Pdcv2ActivationClientRenewActivation @ 0x180133790
 * Callers:
 *     ?Renew@CPdcTimerActivation@@QEAAXXZ @ 0x1800EF140 (-Renew@CPdcTimerActivation@@QEAAXXZ.c)
 * Callees:
 *     PdcCancelWatchdogAroundClientCall @ 0x180051724 (PdcCancelWatchdogAroundClientCall.c)
 *     PdcReleaseRwLockExclusive2 @ 0x180051748 (PdcReleaseRwLockExclusive2.c)
 *     RtlStringCchCopyW @ 0x180051A48 (RtlStringCchCopyW.c)
 *     PdcAcquireRwLockExclusive2 @ 0x180051B38 (PdcAcquireRwLockExclusive2.c)
 *     PdcCreateWatchdogAroundClientCall @ 0x180051BB0 (PdcCreateWatchdogAroundClientCall.c)
 *     memset_0 @ 0x18006158E (memset_0.c)
 *     PdcpResizeDiagnosticContext @ 0x180133754 (PdcpResizeDiagnosticContext.c)
 *     Pdcv2pValidateActivationParameters @ 0x180133C24 (Pdcv2pValidateActivationParameters.c)
 *     PdcPortSendMessageSynchronously @ 0x180133DC0 (PdcPortSendMessageSynchronously.c)
 *     Pdcv2EventWrite_ACTIVATION_CLIENT_RENEW_ACTIVATION @ 0x180134904 (Pdcv2EventWrite_ACTIVATION_CLIENT_RENEW_ACTIVATION.c)
 */

__int64 __fastcall Pdcv2ActivationClientRenewActivation(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v6; // r12
  __int64 v7; // rsi
  int v8; // ebx
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // r8
  char *v12; // rcx
  int v13; // eax
  _WORD *v14; // r8
  PTP_TIMER pv[6]; // [rsp+28h] [rbp-E0h] BYREF
  _BYTE v17[40]; // [rsp+58h] [rbp-B0h] BYREF
  int v18; // [rsp+80h] [rbp-88h]
  int v19; // [rsp+90h] [rbp-78h]
  int v20; // [rsp+94h] [rbp-74h]
  __int64 v21; // [rsp+98h] [rbp-70h]
  __int64 v22; // [rsp+A0h] [rbp-68h]
  int v23; // [rsp+A8h] [rbp-60h]
  _WORD v24[130]; // [rsp+ACh] [rbp-5Ch] BYREF
  unsigned int v25[114]; // [rsp+1B0h] [rbp+A8h] BYREF
  char v26; // [rsp+3B8h] [rbp+2B0h] BYREF

  v26 = 0;
  v6 = 0LL;
  v7 = 0LL;
  if ( a3 )
  {
    *a3 = 1;
    if ( a1 )
    {
      v6 = a1;
      if ( *(_DWORD *)(a1 + 16) == 1094927440 )
      {
        v7 = *(_QWORD *)(a1 + 24);
        if ( *(_DWORD *)v7 == 843138128 )
        {
          if ( (unsigned __int8)Pdcv2pValidateActivationParameters(a2) )
          {
            PdcCreateWatchdogAroundClientCall(
              pv,
              v10,
              *(_DWORD *)(v7 + 24),
              (struct _TP_TIMER *)"Pdcv2ActivationClientRenewActivation");
            PdcAcquireRwLockExclusive2(v7 + 8, &v26);
            memset_0(v17, 0, 0x320uLL);
            v11 = *(_QWORD *)(a2 + 16);
            v21 = *(_QWORD *)(a2 + 8);
            v22 = *(_QWORD *)(a1 + 592);
            v23 = *(_DWORD *)(a2 + 4);
            v18 = 11;
            if ( v11 )
              RtlStringCchCopyW(v24, 128LL, v11);
            v12 = *(char **)(a2 + 24);
            if ( v12 )
              PdcpResizeDiagnosticContext(v12, v25);
            v8 = PdcPortSendMessageSynchronously(*(_QWORD *)(v7 + 32), v17);
            if ( v8 >= 0 )
            {
              v13 = v20;
              ++*(_DWORD *)(a1 + 64);
              v8 = v19;
              *(_DWORD *)(a1 + 56) = v13;
              *(_BYTE *)(a1 + 60) = 0;
              v14 = *(_WORD **)(a2 + 16);
              *a3 = v13;
              if ( v14 )
              {
                if ( *v14 )
                  RtlStringCchCopyW((_WORD *)(a1 + 328), 128LL, (__int64)v14);
              }
            }
          }
          else
          {
            v8 = -1073741584;
          }
        }
        else
        {
          v8 = -1073741585;
          v7 = 0LL;
        }
      }
      else
      {
        v8 = -1073741585;
        v6 = 0LL;
      }
    }
    else
    {
      v8 = -1073741585;
    }
    v9 = (unsigned int)*a3;
  }
  else
  {
    v8 = -1073741583;
    v9 = 0xFFFFFFFFLL;
  }
  Pdcv2EventWrite_ACTIVATION_CLIENT_RENEW_ACTIVATION(v6, v7, v9, (unsigned int)v8);
  if ( v26 )
    PdcReleaseRwLockExclusive2(v7 + 8, &v26);
  PdcCancelWatchdogAroundClientCall(pv);
  return (unsigned int)v8;
}
