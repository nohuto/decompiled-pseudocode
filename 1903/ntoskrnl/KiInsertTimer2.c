/*
 * XREFs of KiInsertTimer2 @ 0x140121DE4
 * Callers:
 *     KiExpireTimer2 @ 0x1400BF760 (KiExpireTimer2.c)
 *     KiTimer2Expiration @ 0x1400BFE90 (KiTimer2Expiration.c)
 *     KiAdjustTimer2DueTimes @ 0x140179644 (KiAdjustTimer2DueTimes.c)
 * Callees:
 *     KiHvEnlightenedGuestPriorityKick @ 0x140010048 (KiHvEnlightenedGuestPriorityKick.c)
 *     KxReleaseSpinLock @ 0x1400A20A0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1400A20E0 (KxAcquireSpinLock.c)
 *     KiInsertTimer2WithCollectionLockHeld @ 0x1400BF310 (KiInsertTimer2WithCollectionLockHeld.c)
 */

char __fastcall KiInsertTimer2(__int64 a1, char a2, _BYTE *a3)
{
  char inserted; // bl
  bool v8; // [rsp+48h] [rbp+20h] BYREF

  v8 = 0;
  KxAcquireSpinLock(&KiTimer2CollectionLock);
  inserted = KiInsertTimer2WithCollectionLockHeld(a1, a2, a3, &v8);
  KxReleaseSpinLock(&KiTimer2CollectionLock);
  if ( v8 )
    KiHvEnlightenedGuestPriorityKick(
      (__int64)KeGetCurrentPrcb(),
      KiProcessorBlock[KiClockTimerOwner],
      KiVpThreadSystemWorkPriority);
  return inserted;
}
