/*
 * XREFs of KiAcquireTimer2CollectionLockIfInserted @ 0x1400FC43C
 * Callers:
 *     KeCancelTimer2 @ 0x1400FAF70 (KeCancelTimer2.c)
 *     KeDisableTimer2 @ 0x1400FB154 (KeDisableTimer2.c)
 *     KeSetTimer2 @ 0x1400FC170 (KeSetTimer2.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140062A90 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x1400630E0 (KxReleaseSpinLock.c)
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
