/*
 * XREFs of UsbhSignalPauseEvent @ 0x1C000B264
 * Callers:
 *     Usbh_PCE_psPAUSED_Action @ 0x1C000A370 (Usbh_PCE_psPAUSED_Action.c)
 *     UsbhFreePortChangeQueueObject @ 0x1C000B110 (UsbhFreePortChangeQueueObject.c)
 * Callees:
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     Log @ 0x1C0013360 (Log.c)
 */

void __fastcall UsbhSignalPauseEvent(__int64 a1, __int64 a2)
{
  int v3; // ebx
  __int64 v4; // r10
  KSPIN_LOCK *v5; // rbx
  KIRQL v6; // si

  v3 = a1;
  FdoExt(a1);
  Log(v3, 16, 1936281683, 0, *(unsigned __int16 *)(a2 + 4));
  v5 = (KSPIN_LOCK *)(v4 + 4944);
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 4944));
  if ( *(_QWORD *)(a2 + 792) )
  {
    *(_QWORD *)(a2 + 792) = 0LL;
    KeSetEvent((PRKEVENT)(a2 + 800), 0, 0);
  }
  KeReleaseSpinLock(v5, v6);
}
