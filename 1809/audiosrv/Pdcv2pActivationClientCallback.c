/*
 * XREFs of Pdcv2pActivationClientCallback @ 0x180133AD0
 * Callers:
 *     <none>
 * Callees:
 *     PdcCancelWatchdogAroundClientCall @ 0x180051724 (PdcCancelWatchdogAroundClientCall.c)
 *     PdcReleaseRwLockExclusive2 @ 0x180051748 (PdcReleaseRwLockExclusive2.c)
 *     PdcAcquireRwLockExclusive2 @ 0x180051B38 (PdcAcquireRwLockExclusive2.c)
 *     PdcCreateWatchdogAroundClientCall @ 0x180051BB0 (PdcCreateWatchdogAroundClientCall.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     Pdcv2EventWrite_ACTIVATION_CLIENT_CALLBACK @ 0x180134658 (Pdcv2EventWrite_ACTIVATION_CLIENT_CALLBACK.c)
 */

__int64 __fastcall Pdcv2pActivationClientCallback(_DWORD *a1, __int64 a2)
{
  unsigned int v2; // ebp
  _DWORD *v4; // rsi
  unsigned int v5; // edi
  __int64 *v6; // r14
  DWORD CurrentThreadId; // eax
  __int64 v9; // rbx
  PTP_TIMER pv[6]; // [rsp+30h] [rbp-48h] BYREF
  char v11; // [rsp+80h] [rbp+8h] BYREF

  v2 = 0;
  v11 = 0;
  v4 = a1;
  if ( a1 )
  {
    if ( *a1 == 843138128 )
    {
      if ( *(_DWORD *)(a2 + 40) == 12 )
      {
        v5 = PdcCreateWatchdogAroundClientCall(pv, a2, a1[6], (struct _TP_TIMER *)"Pdcv2pActivationClientCallback");
        PdcAcquireRwLockExclusive2((__int64)(v4 + 2), &v11);
        if ( *((_BYTE *)v4 + 64) )
        {
          v6 = (__int64 *)*((_QWORD *)v4 + 9);
          v2 = *(_DWORD *)(a2 + 64);
          while ( v6 != (__int64 *)(v4 + 18) )
          {
            if ( v6[74] == *(_QWORD *)(a2 + 56) )
            {
              if ( (int)v2 >= 101 )
              {
                ++*((_DWORD *)v6 + 17);
                *((_BYTE *)v6 + 60) = 1;
              }
              Pdcv2EventWrite_ACTIVATION_CLIENT_CALLBACK(v6, v4, v2, v5);
              CurrentThreadId = GetCurrentThreadId();
              v9 = *((_QWORD *)v4 + 4);
              v4[22] = CurrentThreadId;
              *(_DWORD *)(v9 + 156) = GetCurrentThreadId();
              (*((void (__fastcall **)(__int64 *, _QWORD, _QWORD, __int64))v4 + 6))(v6, v2, *((_QWORD *)v4 + 7), v6[4]);
              *(_DWORD *)(*((_QWORD *)v4 + 4) + 156LL) = 0;
              v4[22] = 0;
              goto LABEL_14;
            }
            v6 = (__int64 *)*v6;
          }
        }
        v5 = -1073741431;
      }
      else
      {
        v5 = -1073740030;
      }
    }
    else
    {
      v5 = -1073741585;
      v4 = 0LL;
    }
  }
  else
  {
    v5 = -1073741585;
  }
  Pdcv2EventWrite_ACTIVATION_CLIENT_CALLBACK(0LL, v4, v2, v5);
LABEL_14:
  if ( v11 )
    PdcReleaseRwLockExclusive2((__int64)(v4 + 2), &v11);
  PdcCancelWatchdogAroundClientCall(pv);
  return v5;
}
