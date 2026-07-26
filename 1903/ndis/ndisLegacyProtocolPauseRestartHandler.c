/*
 * XREFs of ndisLegacyProtocolPauseRestartHandler @ 0x1C00938D4
 * Callers:
 *     ndisPnPNotifyBinding @ 0x1C012B048 (ndisPnPNotifyBinding.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     NdisWaitEvent @ 0x1C003DFA0 (NdisWaitEvent.c)
 */

void __fastcall ndisLegacyProtocolPauseRestartHandler(__int64 a1, _DWORD *a2)
{
  _DWORD *v2; // rsi
  KIRQL v4; // al
  KIRQL v5; // al
  int v6; // r14d
  char v7[4]; // [rsp+30h] [rbp-28h]

  v2 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v7 = *a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      13,
      80,
      (struct _GUID *)&WPP_8eff094606dc365e3cd879b7a6c5bbc9_Traceguids,
      a1,
      v7[0]);
  }
  if ( *v2 == 8 )
  {
    v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 624));
    v6 = *(_DWORD *)(a1 + 644);
    *(_BYTE *)(a1 + 632) = v5;
    *(_DWORD *)(a1 + 640) = 1;
    if ( v6 )
      KeClearEvent((PRKEVENT)(a1 + 648));
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 624), *(_BYTE *)(a1 + 632));
    if ( v6 )
      NdisWaitEvent((PNDIS_EVENT)(a1 + 648), 0);
  }
  else if ( *v2 == 9 )
  {
    v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 624));
    *(_DWORD *)(a1 + 640) = 2;
    *(_BYTE *)(a1 + 632) = v4;
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 624), v4);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      13,
      81,
      (struct _GUID *)&WPP_8eff094606dc365e3cd879b7a6c5bbc9_Traceguids,
      a1,
      *v2);
  }
}
