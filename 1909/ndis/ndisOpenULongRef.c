/*
 * XREFs of ndisOpenULongRef @ 0x1C0095F98
 * Callers:
 *     ndisReinitializeMiniportBlock @ 0x1C013AC78 (ndisReinitializeMiniportBlock.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisOpenULongRef(PKSPIN_LOCK SpinLock)
{
  KIRQL v2; // al

  v2 = KeAcquireSpinLockRaiseToDpc(SpinLock);
  *((_BYTE *)SpinLock + 12) = 0;
  KeReleaseSpinLock(SpinLock, v2);
}
