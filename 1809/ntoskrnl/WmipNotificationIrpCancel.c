/*
 * XREFs of WmipNotificationIrpCancel @ 0x14010BD30
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x140018930 (KeReleaseQueuedSpinLock.c)
 *     KxAcquireQueuedSpinLock @ 0x1400AC990 (KxAcquireQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC740 (KxReleaseQueuedSpinLock.c)
 *     IofCompleteRequest @ 0x1400C10A0 (IofCompleteRequest.c)
 *     WmipClearIrpObjectList @ 0x14010C24C (WmipClearIrpObjectList.c)
 */

void __fastcall WmipNotificationIrpCancel(__int64 a1, IRP *a2, __int64 a3)
{
  volatile signed __int64 *v4[5]; // [rsp+20h] [rbp-28h] BYREF

  v4[0] = 0LL;
  v4[1] = (volatile signed __int64 *)&WmipCancelSpinLock;
  KxAcquireQueuedSpinLock((__int64)v4, (volatile __int64 *)&WmipCancelSpinLock, a3);
  WmipClearIrpObjectList(a2);
  KxReleaseQueuedSpinLock(v4);
  KeReleaseQueuedSpinLock(7uLL, a2->CancelIrql);
  a2->IoStatus.Information = 0LL;
  a2->IoStatus.Status = -1073741536;
  IofCompleteRequest(a2, 0);
}
