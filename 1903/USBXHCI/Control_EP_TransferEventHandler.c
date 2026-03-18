/*
 * XREFs of Control_EP_TransferEventHandler @ 0x1C002A2A0
 * Callers:
 *     <none>
 * Callees:
 *     Control_ProcessTransferEventWithED0 @ 0x1C002A818 (Control_ProcessTransferEventWithED0.c)
 *     Control_ProcessTransferEventWithED1 @ 0x1C002AB34 (Control_ProcessTransferEventWithED1.c)
 */

__int64 __fastcall Control_EP_TransferEventHandler(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a1 + 12) & 4) != 0 )
    return Control_ProcessTransferEventWithED1(a1, a2);
  else
    return Control_ProcessTransferEventWithED0(a1, a2);
}
