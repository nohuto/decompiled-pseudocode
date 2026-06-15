/*
 * XREFs of Pdcv2ActivationClientUnregister @ 0x18013396C
 * Callers:
 *     ??1CPowerReferenceManager@@QEAA@XZ @ 0x1800AF93C (--1CPowerReferenceManager@@QEAA@XZ.c)
 *     ??1CPdcActivationClient@@QEAA@XZ @ 0x1800EEED4 (--1CPdcActivationClient@@QEAA@XZ.c)
 * Callees:
 *     PdcCancelWatchdogAroundClientCall @ 0x180051724 (PdcCancelWatchdogAroundClientCall.c)
 *     PdcReleaseRwLockExclusive2 @ 0x180051748 (PdcReleaseRwLockExclusive2.c)
 *     PdcAcquireRwLockExclusive2 @ 0x180051B38 (PdcAcquireRwLockExclusive2.c)
 *     PdcCreateWatchdogAroundClientCall @ 0x180051BB0 (PdcCreateWatchdogAroundClientCall.c)
 *     TraceLoggingUnregister @ 0x1800AEF4C (TraceLoggingUnregister.c)
 *     McGenEventUnregister @ 0x18010508C (McGenEventUnregister.c)
 *     PdcPortClose @ 0x180133CB4 (PdcPortClose.c)
 *     PdcRwLockUninitialize2 @ 0x1801341E0 (PdcRwLockUninitialize2.c)
 *     Pdcv2EventWrite_ACTIVATION_CLIENT_UNREGISTER @ 0x180134A5C (Pdcv2EventWrite_ACTIVATION_CLIENT_UNREGISTER.c)
 */

__int64 __fastcall Pdcv2ActivationClientUnregister(_DWORD *P, __int64 a2)
{
  unsigned int v2; // edi
  __int64 v4; // rcx
  void **v5; // rsi
  void ***v6; // r8
  void **v7; // rax
  void **v8; // rcx
  PTP_TIMER v10[7]; // [rsp+20h] [rbp-38h] BYREF
  char v11; // [rsp+60h] [rbp+8h] BYREF

  v2 = 0;
  if ( P && *P == 843138128 )
  {
    PdcCreateWatchdogAroundClientCall(v10, a2, P[6], (struct _TP_TIMER *)"Pdcv2ActivationClientUnregister");
    PdcAcquireRwLockExclusive2((__int64)(P + 2), &v11);
    v4 = *((_QWORD *)P + 4);
    *((_BYTE *)P + 64) = 0;
    PdcPortClose(v4);
    v5 = (void **)(P + 18);
    while ( 1 )
    {
      v6 = (void ***)*v5;
      if ( *v5 == v5 )
        break;
      if ( v6[1] != v5 || (v7 = *v6, (*v6)[1] != v6) )
        __fastfail(3u);
      *v5 = v7;
      v7[1] = v5;
      v8 = v6[3];
      --*((_DWORD *)v8 + *((int *)v6 + 12) + 57);
      --*((_DWORD *)v8 + 56);
      *((_DWORD *)v6 + 4) = 0;
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v6);
    }
    *((_QWORD *)P + 4) = 0LL;
    *P = 0;
    Pdcv2EventWrite_ACTIVATION_CLIENT_UNREGISTER(P, 0LL);
    PdcReleaseRwLockExclusive2((__int64)(P + 2), &v11);
    PdcRwLockUninitialize2(P + 2);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
    if ( _InterlockedExchangeAdd(&g_RegistrationCount, 0xFFFFFFFF) == 1 )
    {
      TraceLoggingUnregister((TraceLoggingHProvider)&dword_1801B14F8);
      McGenEventUnregister(PDC_EVENT_PROVIDER_Context);
    }
  }
  else
  {
    Pdcv2EventWrite_ACTIVATION_CLIENT_UNREGISTER(0LL, 3221225711LL);
    v2 = -1073741585;
  }
  PdcCancelWatchdogAroundClientCall(v10);
  return v2;
}
