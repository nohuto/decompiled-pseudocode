/*
 * XREFs of ?ndisReleaseMiniportPnPEventLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C001C7A8
 * Callers:
 *     ndisPnPNotifyBindingUnlocked @ 0x1C0105238 (ndisPnPNotifyBindingUnlocked.c)
 *     ndisPnPNotifyAllTransports @ 0x1C012A008 (ndisPnPNotifyAllTransports.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisReleaseMiniportPnPEventLock(struct _NDIS_MINIPORT_BLOCK *a1)
{
  KIRQL v2; // al
  struct _KTHREAD *CurrentThread; // rdx
  KIRQL v4; // si
  struct _KEVENT *PnPEventLockEvent; // rcx

  v2 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  CurrentThread = KeGetCurrentThread();
  v4 = v2;
  a1->SyncFlags &= ~8u;
  PnPEventLockEvent = a1->PnPEventLockEvent;
  a1->MiniportThread = CurrentThread;
  if ( PnPEventLockEvent )
  {
    KeSetEvent(PnPEventLockEvent, 0, 0);
    a1->PnPEventLockEvent = 0LL;
  }
  a1->MiniportThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, v4);
}
