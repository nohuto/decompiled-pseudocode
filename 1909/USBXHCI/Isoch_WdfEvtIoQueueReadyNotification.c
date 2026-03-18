/*
 * XREFs of Isoch_WdfEvtIoQueueReadyNotification @ 0x1C0032900
 * Callers:
 *     <none>
 * Callees:
 *     Debug_FreAssertMsg @ 0x1C00157EC (Debug_FreAssertMsg.c)
 *     TR_AttemptStateChange @ 0x1C00284E8 (TR_AttemptStateChange.c)
 *     Isoch_MapTransfers @ 0x1C002E8DC (Isoch_MapTransfers.c)
 */

void __fastcall Isoch_WdfEvtIoQueueReadyNotification(__int64 a1, __int64 a2)
{
  unsigned __int8 CurrentIrql; // di
  bool v4; // zf
  bool v5; // si
  __int64 v6; // rdx

  CurrentIrql = KeGetCurrentIrql();
  v4 = CurrentIrql == 0;
  if ( !CurrentIrql )
  {
    KfRaiseIrql(2u);
    v4 = 1;
  }
  v5 = v4;
  if ( *(_DWORD *)(*(_QWORD *)(a2 + 56) + 1352LL) == 2 )
  {
    Debug_FreAssertMsg(
      (__int64)"IO Received on an endpoint that has been offloaded",
      0,
      (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\isoch.c",
      2923);
  }
  else if ( (unsigned int)TR_AttemptStateChange(a2, 2, 3) == 2
         || (_InterlockedExchange((volatile __int32 *)(a2 + 344), 1), (unsigned int)TR_AttemptStateChange(a2, 2, 3) == 2) )
  {
    LOBYTE(v6) = v5;
    Isoch_MapTransfers(a2, v6);
  }
  if ( !CurrentIrql )
    KeLowerIrql(0);
}
