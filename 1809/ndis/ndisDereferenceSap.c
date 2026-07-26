/*
 * XREFs of ndisDereferenceSap @ 0x1C011E884
 * Callers:
 *     NdisCmDeregisterSapComplete @ 0x1C011BBD0 (NdisCmDeregisterSapComplete.c)
 *     NdisCmDispatchIncomingCall @ 0x1C011BC50 (NdisCmDispatchIncomingCall.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisDereferenceSap(KSPIN_LOCK *P)
{
  KIRQL v2; // al
  int v3; // ebx

  v2 = KeAcquireSpinLockRaiseToDpc(P + 5);
  v3 = --*((_DWORD *)P + 9);
  KeReleaseSpinLock(P + 5, v2);
  if ( !v3 )
    ExFreePoolWithTag(P, 0);
}
