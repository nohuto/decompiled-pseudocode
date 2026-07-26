/*
 * XREFs of ndisLegacyProtocolPauseRestartHandler @ 0x1C005EAB0
 * Callers:
 *     ndisPnPNotifyBinding @ 0x1C010D39C (ndisPnPNotifyBinding.c)
 * Callees:
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     NdisWaitEvent @ 0x1C00B8130 (NdisWaitEvent.c)
 */

void __fastcall ndisLegacyProtocolPauseRestartHandler(__int64 a1, int *a2)
{
  KIRQL v4; // al
  KIRQL v5; // al
  int v6; // r14d

  if ( (unsigned __int8)byte_1C00A025C >= 4u )
    WPP_SF_qD(0x50u, &WPP_5a25d62004233057cf64a29056d8f8be_Traceguids, a1, *a2);
  if ( *a2 == 8 )
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
  else if ( *a2 == 9 )
  {
    v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 624));
    *(_DWORD *)(a1 + 640) = 2;
    *(_BYTE *)(a1 + 632) = v4;
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 624), v4);
  }
  if ( (unsigned __int8)byte_1C00A025C >= 4u )
    WPP_SF_qD(0x51u, &WPP_5a25d62004233057cf64a29056d8f8be_Traceguids, a1, *a2);
}
