/*
 * XREFs of ndisGetHigherFilterWithPnpRef @ 0x1C0014018
 * Callers:
 *     ndisDevicePnPEventNotifyFiltersAndAllTransports @ 0x1C0013D24 (ndisDevicePnPEventNotifyFiltersAndAllTransports.c)
 *     ?ndisFNetPnPEventInternal@@YAXPEAX@Z @ 0x1C0013EA0 (-ndisFNetPnPEventInternal@@YAXPEAX@Z.c)
 * Callees:
 *     ndisReferenceRefEx @ 0x1C001B320 (ndisReferenceRefEx.c)
 */

KSPIN_LOCK __fastcall ndisGetHigherFilterWithPnpRef(KSPIN_LOCK *a1, KSPIN_LOCK a2)
{
  KIRQL v4; // bp

  v4 = KeAcquireSpinLockRaiseToDpc(a1 + 12);
  a1[65] = (KSPIN_LOCK)KeGetCurrentThread();
  if ( !a2 )
  {
    a2 = a1[255];
    goto LABEL_3;
  }
  do
  {
    a2 = *(_QWORD *)(a2 + 120);
LABEL_3:
    ;
  }
  while ( a2 && !(unsigned __int8)ndisReferenceRefEx((PKSPIN_LOCK)(a2 + 312)) );
  a1[65] = 0LL;
  KeReleaseSpinLock(a1 + 12, v4);
  return a2;
}
