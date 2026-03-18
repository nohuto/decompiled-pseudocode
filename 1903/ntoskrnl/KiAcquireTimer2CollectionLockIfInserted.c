/*
 * XREFs of KiAcquireTimer2CollectionLockIfInserted @ 0x1400BF298
 * Callers:
 *     KeSetTimer2 @ 0x1400BC1F0 (KeSetTimer2.c)
 *     KeCancelTimer2 @ 0x140113E70 (KeCancelTimer2.c)
 *     KeDisableTimer2 @ 0x140113F5C (KeDisableTimer2.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400A20A0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1400A20E0 (KxAcquireSpinLock.c)
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
