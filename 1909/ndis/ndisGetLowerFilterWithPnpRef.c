/*
 * XREFs of ndisGetLowerFilterWithPnpRef @ 0x1C001BB10
 * Callers:
 *     ?ndisFDevicePnPEventNotifyInternal@@YAXPEAX@Z @ 0x1C0014B60 (-ndisFDevicePnPEventNotifyInternal@@YAXPEAX@Z.c)
 *     ndisDevicePnPEventNotifyMiniport @ 0x1C001B984 (ndisDevicePnPEventNotifyMiniport.c)
 * Callees:
 *     ndisReferenceRefEx @ 0x1C001B320 (ndisReferenceRefEx.c)
 */

KSPIN_LOCK __fastcall ndisGetLowerFilterWithPnpRef(KSPIN_LOCK *a1, KSPIN_LOCK i, unsigned __int8 a3)
{
  KIRQL v6; // bp
  int v8; // [rsp+40h] [rbp+8h] BYREF

  v6 = KeAcquireSpinLockRaiseToDpc(a1 + 12);
  a1[65] = (KSPIN_LOCK)KeGetCurrentThread();
  if ( i )
    goto LABEL_6;
  for ( i = a1[256]; i && !ndisReferenceRefEx((PKSPIN_LOCK)(i + 312), a3, &v8); i = *(_QWORD *)(i + 112) )
LABEL_6:
    ;
  a1[65] = 0LL;
  KeReleaseSpinLock(a1 + 12, v6);
  return i;
}
