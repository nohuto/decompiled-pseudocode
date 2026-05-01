/*
 * XREFs of Pdcv2ActivationClientDeactivate @ 0x180039A1C
 * Callers:
 *     ?HampSystemActivationClientDeactivate@@YAXPEAX@Z @ 0x180039618 (-HampSystemActivationClientDeactivate@@YAXPEAX@Z.c)
 * Callees:
 *     PdcCancelWatchdogAroundClientCall @ 0x180039BA4 (PdcCancelWatchdogAroundClientCall.c)
 *     PdcReleaseRwLockExclusive2 @ 0x180039BC8 (PdcReleaseRwLockExclusive2.c)
 *     Pdcv2EventWrite_ACTIVATION_CLIENT_DEACTIVATE @ 0x180039C3C (Pdcv2EventWrite_ACTIVATION_CLIENT_DEACTIVATE.c)
 *     PdcPortSendMessageSynchronously @ 0x180039EA0 (PdcPortSendMessageSynchronously.c)
 *     PdcAcquireRwLockExclusive2 @ 0x180039F4C (PdcAcquireRwLockExclusive2.c)
 *     PdcCreateWatchdogAroundClientCall @ 0x180039FC0 (PdcCreateWatchdogAroundClientCall.c)
 *     memset_0 @ 0x180049A1A (memset_0.c)
 */

__int64 __fastcall Pdcv2ActivationClientDeactivate(int *P)
{
  int *v1; // rbp
  __int64 v2; // rsi
  int v3; // ebx
  __int64 v4; // rcx
  _QWORD *v5; // rcx
  PVOID *v6; // rax
  _BYTE pv[48]; // [rsp+20h] [rbp-358h] BYREF
  _BYTE v9[40]; // [rsp+50h] [rbp-328h] BYREF
  int v10; // [rsp+78h] [rbp-300h]
  int v11; // [rsp+88h] [rbp-2F0h]
  __int64 v12; // [rsp+90h] [rbp-2E8h]
  char v13; // [rsp+380h] [rbp+8h] BYREF

  v1 = 0LL;
  v13 = 0;
  v2 = 0LL;
  if ( !P )
  {
    v3 = -1073741585;
    goto LABEL_11;
  }
  v1 = P;
  if ( P[4] != 1094927440 )
  {
    v3 = -1073741585;
LABEL_10:
    v1 = 0LL;
    goto LABEL_11;
  }
  v2 = *((_QWORD *)P + 3);
  if ( *(_DWORD *)v2 != 843138128 )
  {
    v1 = 0LL;
    v3 = -1073741585;
    v2 = 0LL;
    goto LABEL_11;
  }
  PdcCreateWatchdogAroundClientCall(pv);
  PdcAcquireRwLockExclusive2(v2 + 8, &v13);
  if ( !*(_DWORD *)(v2 + 4LL * v1[12] + 228) )
  {
    v3 = -1073741823;
LABEL_11:
    if ( v3 >= 0 )
      goto LABEL_12;
    goto LABEL_20;
  }
  memset_0(v9, 0, 0x320uLL);
  v12 = *((_QWORD *)v1 + 74);
  v10 = 13;
  v3 = PdcPortSendMessageSynchronously(*(_QWORD *)(v2 + 32), v9);
  if ( v3 < 0 )
    goto LABEL_11;
  v3 = v11;
  if ( v11 >= 0 )
  {
    v4 = *((_QWORD *)v1 + 3);
    --*(_DWORD *)(v4 + 4LL * v1[12] + 228);
    --*(_DWORD *)(v4 + 224);
    v1[4] = 0;
    Pdcv2EventWrite_ACTIVATION_CLIENT_DEACTIVATE(v1, v2, 0LL);
    v5 = *(_QWORD **)v1;
    if ( *(int **)(*(_QWORD *)v1 + 8LL) != v1 || (v6 = (PVOID *)*((_QWORD *)v1 + 1), *v6 != v1) )
      __fastfail(3u);
    *v6 = v5;
    v5[1] = v6;
    v1[4] = 0;
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v1);
    goto LABEL_10;
  }
LABEL_20:
  Pdcv2EventWrite_ACTIVATION_CLIENT_DEACTIVATE(v1, v2, (unsigned int)v3);
LABEL_12:
  if ( v13 )
    PdcReleaseRwLockExclusive2(v2 + 8, &v13);
  PdcCancelWatchdogAroundClientCall(pv);
  return (unsigned int)v3;
}
