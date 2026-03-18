/*
 * XREFs of Isoch_EP_TransferEventHandler @ 0x1C002E0E0
 * Callers:
 *     <none>
 * Callees:
 *     Isoch_ProcessTransferEventWithED0 @ 0x1C002F5E4 (Isoch_ProcessTransferEventWithED0.c)
 *     Isoch_ProcessTransferEventWithED1 @ 0x1C002F924 (Isoch_ProcessTransferEventWithED1.c)
 */

__int64 __fastcall Isoch_EP_TransferEventHandler(__int64 a1)
{
  if ( (*(_DWORD *)(a1 + 12) & 4) != 0 )
    return Isoch_ProcessTransferEventWithED1();
  else
    return Isoch_ProcessTransferEventWithED0();
}
