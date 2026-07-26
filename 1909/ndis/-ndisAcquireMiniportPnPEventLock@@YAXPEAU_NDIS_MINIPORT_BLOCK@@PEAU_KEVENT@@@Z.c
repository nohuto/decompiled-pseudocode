/*
 * XREFs of ?ndisAcquireMiniportPnPEventLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_KEVENT@@@Z @ 0x1C001C5B0
 * Callers:
 *     ndisPnPNotifyBindingUnlocked @ 0x1C0105238 (ndisPnPNotifyBindingUnlocked.c)
 *     ndisPnPNotifyAllTransports @ 0x1C012A008 (ndisPnPNotifyAllTransports.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisAcquireMiniportPnPEventLock(struct _NDIS_MINIPORT_BLOCK *a1, struct _KEVENT *a2)
{
  KIRQL v4; // r14
  unsigned int SyncFlags; // ecx
  _KEVENT *PnPEventLockEvent; // rsi

  KeInitializeEvent(a2, NotificationEvent, 0);
  v4 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  for ( a1->MiniportThread = KeGetCurrentThread(); ; a1->MiniportThread = KeGetCurrentThread() )
  {
    SyncFlags = a1->SyncFlags;
    if ( (SyncFlags & 8) == 0 )
      break;
    PnPEventLockEvent = a1->PnPEventLockEvent;
    if ( !PnPEventLockEvent )
    {
      KeClearEvent(a2);
      a1->PnPEventLockEvent = a2;
      PnPEventLockEvent = a2;
    }
    a1->MiniportThread = 0LL;
    KeReleaseSpinLock(&a1->Lock, v4);
    KeWaitForSingleObject(PnPEventLockEvent, Executive, 0, 0, 0LL);
    v4 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  }
  a1->MiniportThread = 0LL;
  a1->SyncFlags = SyncFlags | 8;
  KeReleaseSpinLock(&a1->Lock, v4);
}
