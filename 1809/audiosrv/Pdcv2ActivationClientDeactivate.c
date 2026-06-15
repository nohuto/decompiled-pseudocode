/*
 * XREFs of Pdcv2ActivationClientDeactivate @ 0x180040FB0
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj@VCPdcTimerActivation@@@std@@EEAAXXZ @ 0x180040DC0 (-_Destroy@-$_Ref_count_obj@VCPdcTimerActivation@@@std@@EEAAXXZ.c)
 * Callees:
 *     Pdcv2EventWrite_ACTIVATION_CLIENT_DEACTIVATE @ 0x180041234 (Pdcv2EventWrite_ACTIVATION_CLIENT_DEACTIVATE.c)
 *     memset_0 @ 0x18006158E (memset_0.c)
 */

__int64 __fastcall Pdcv2ActivationClientDeactivate(int *P)
{
  int *v2; // r15
  __int64 v3; // rbx
  int v4; // esi
  DWORD v5; // eax
  __int64 v6; // r14
  __int64 v7; // rcx
  int v8; // esi
  __int64 v9; // rcx
  _QWORD *v10; // rcx
  PVOID *v11; // rax
  DWORD CurrentThreadId; // eax
  struct _TP_TIMER *v14; // rax
  PTP_TIMER pv; // [rsp+40h] [rbp-C0h] BYREF
  int v16; // [rsp+4Ch] [rbp-B4h]
  const char *v17; // [rsp+50h] [rbp-B0h]
  DWORD CurrentProcessId; // [rsp+58h] [rbp-A8h]
  DWORD v19; // [rsp+5Ch] [rbp-A4h]
  int v20; // [rsp+60h] [rbp-A0h]
  _QWORD v21[5]; // [rsp+70h] [rbp-90h] BYREF
  int v22; // [rsp+98h] [rbp-68h]
  int v23; // [rsp+9Ch] [rbp-64h]
  int v24; // [rsp+A8h] [rbp-58h]
  __int64 v25; // [rsp+B0h] [rbp-50h]
  char v26; // [rsp+3D0h] [rbp+2D0h]
  struct _FILETIME pftDueTime; // [rsp+3D8h] [rbp+2D8h] BYREF
  __int64 v28; // [rsp+3E0h] [rbp+2E0h]

  v26 = 0;
  v2 = 0LL;
  v3 = 0LL;
  if ( P )
  {
    v2 = P;
    if ( P[4] == 1094927440 )
    {
      v3 = *((_QWORD *)P + 3);
      if ( *(_DWORD *)v3 == 843138128 )
      {
        v4 = *(_DWORD *)(v3 + 24);
        if ( ClientCallWatchdogEnabled )
        {
          memset_0(&pv, 0, 0x28uLL);
          v16 = v4;
          CurrentProcessId = GetCurrentProcessId();
          CurrentThreadId = GetCurrentThreadId();
          v20 = 1200000;
          v19 = CurrentThreadId;
          v17 = "Pdcv2ActivationClientDeactivate";
          v14 = CreateThreadpoolTimer(PdcpFireClientCallWatchdog, &pv, 0LL);
          pv = v14;
          if ( v14 )
          {
            pftDueTime.dwHighDateTime = -3;
            pftDueTime.dwLowDateTime = 884901888;
            SetThreadpoolTimer(v14, &pftDueTime, 0, 0x3E8u);
          }
          else
          {
            GetLastError();
          }
        }
        while ( 1 )
        {
          v5 = WaitForSingleObjectEx(*(HANDLE *)(v3 + 8), 0xEA60u, 0);
          if ( !v5 )
            break;
          if ( v5 == 128 )
            __fastfail(0x24u);
          if ( v5 != 258 )
            goto LABEL_27;
        }
        v26 = 1;
        if ( _InterlockedIncrement((volatile signed __int32 *)(v3 + 20)) == 1 )
          *(_DWORD *)(v3 + 16) = GetCurrentThreadId();
        if ( *(_DWORD *)(v3 + 16) != GetCurrentThreadId() )
LABEL_27:
          __fastfail(5u);
        if ( *(_DWORD *)(v3 + 4LL * P[12] + 228) )
        {
          memset_0(v21, 0, 0x320uLL);
          v25 = *((_QWORD *)P + 74);
          v22 = 13;
          v6 = *(_QWORD *)(v3 + 32);
          AcquireSRWLockShared((PSRWLOCK)(v6 + 16));
          if ( *(_QWORD *)(v6 + 8) )
          {
            memset(&v21[1], 0, 32);
            v23 = 4;
            v21[0] = 52429560LL;
            v7 = *(_QWORD *)(v6 + 8);
            v28 = 800LL;
            v8 = ZwAlpcSendWaitReceivePort(v7, 0x20000LL, v21);
            if ( v8 >= 0 )
              _InterlockedIncrement((volatile signed __int32 *)(v6 + 124));
          }
          else
          {
            v8 = -1073741816;
          }
          ReleaseSRWLockShared((PSRWLOCK)(v6 + 16));
          if ( v8 >= 0 )
          {
            v8 = v24;
            if ( v24 >= 0 )
            {
              v9 = *((_QWORD *)P + 3);
              --*(_DWORD *)(v9 + 4LL * P[12] + 228);
              --*(_DWORD *)(v9 + 224);
              P[4] = 0;
              Pdcv2EventWrite_ACTIVATION_CLIENT_DEACTIVATE(P, v3, 0LL);
              v10 = *(_QWORD **)P;
              if ( *(int **)(*(_QWORD *)P + 8LL) != P || (v11 = (PVOID *)*((_QWORD *)P + 1), *v11 != P) )
                __fastfail(3u);
              *v11 = v10;
              v10[1] = v11;
              P[4] = 0;
              RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
              v2 = 0LL;
              if ( v8 >= 0 )
                goto LABEL_18;
            }
          }
        }
        else
        {
          v8 = -1073741823;
        }
      }
      else
      {
        v8 = -1073741585;
        v2 = 0LL;
        v3 = 0LL;
      }
    }
    else
    {
      v8 = -1073741585;
      v2 = 0LL;
    }
  }
  else
  {
    v8 = -1073741585;
  }
  Pdcv2EventWrite_ACTIVATION_CLIENT_DEACTIVATE(v2, v3, (unsigned int)v8);
  if ( !v26 )
    goto LABEL_24;
LABEL_18:
  if ( !*(_QWORD *)(v3 + 8) || *(_DWORD *)(v3 + 16) != GetCurrentThreadId() || *(int *)(v3 + 20) <= 0 )
    goto LABEL_27;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 20), 0xFFFFFFFF) == 1 )
    *(_DWORD *)(v3 + 16) = 0;
  if ( !ReleaseMutex(*(HANDLE *)(v3 + 8)) )
  {
    GetLastError();
    __fastfail(0x24u);
  }
LABEL_24:
  if ( ClientCallWatchdogEnabled )
  {
    SetThreadpoolTimer(pv, 0LL, 0, 0);
    WaitForThreadpoolTimerCallbacks(pv, 0);
    CloseThreadpoolTimer(pv);
  }
  return (unsigned int)v8;
}
