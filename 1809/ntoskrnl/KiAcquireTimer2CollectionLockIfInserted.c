/*
 * XREFs of KiAcquireTimer2CollectionLockIfInserted @ 0x1400FC4BC
 * Callers:
 *     KeCancelTimer2 @ 0x1400FAFF0 (KeCancelTimer2.c)
 *     KeDisableTimer2 @ 0x1400FB1D4 (KeDisableTimer2.c)
 *     KeSetTimer2 @ 0x1400FC1F0 (KeSetTimer2.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140062A90 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 */

char __fastcall KiAcquireTimer2CollectionLockIfInserted(__int64 a1)
{
  char v1; // bl

  v1 = 0;
  if ( (*(_BYTE *)(a1 + 1) & 1) != 0 )
  {
    KxAcquireSpinLock(&KiTimer2CollectionLock);
    if ( (*(_BYTE *)(a1 + 1) & 1) != 0 )
      return 1;
    else
      KxReleaseSpinLock(&KiTimer2CollectionLock);
  }
  return v1;
}
