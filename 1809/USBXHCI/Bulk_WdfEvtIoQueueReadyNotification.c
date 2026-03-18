/*
 * XREFs of Bulk_WdfEvtIoQueueReadyNotification @ 0x1C0033430
 * Callers:
 *     <none>
 * Callees:
 *     Debug_FreAssertMsg @ 0x1C0012DEC (Debug_FreAssertMsg.c)
 *     TR_AttemptStateChange @ 0x1C0023E60 (TR_AttemptStateChange.c)
 *     Bulk_MapTransfers @ 0x1C002FF50 (Bulk_MapTransfers.c)
 */

void __fastcall Bulk_WdfEvtIoQueueReadyNotification(__int64 a1, __int64 a2)
{
  KIRQL v3; // si
  unsigned __int8 CurrentIrql; // di
  bool v5; // zf
  bool v6; // bp
  __int64 v7; // rdx

  v3 = 0;
  CurrentIrql = KeGetCurrentIrql();
  v5 = CurrentIrql == 0;
  if ( !CurrentIrql )
  {
    v3 = KfRaiseIrql(2u);
    v5 = 1;
  }
  v6 = v5;
  if ( *(_DWORD *)(*(_QWORD *)(a2 + 56) + 1352LL) == 2 )
  {
    Debug_FreAssertMsg(
      (__int64)"IO Received on an endpoint that has been offloaded",
      0,
      (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\bulk.c",
      1046);
  }
  else if ( (unsigned int)TR_AttemptStateChange(a2, 2, 3) == 2
         || (_InterlockedExchange((volatile __int32 *)(a2 + 340), 1), (unsigned int)TR_AttemptStateChange(a2, 2, 3) == 2) )
  {
    LOBYTE(v7) = v6;
    Bulk_MapTransfers(a2, v7);
  }
  if ( !CurrentIrql )
    KeLowerIrql(v3);
}
