/*
 * XREFs of KiInsertTimer2 @ 0x140122C34
 * Callers:
 *     KiExpireTimer2 @ 0x14009F5E0 (KiExpireTimer2.c)
 *     KiTimer2Expiration @ 0x14009FD10 (KiTimer2Expiration.c)
 *     KiAdjustTimer2DueTimes @ 0x140179D34 (KiAdjustTimer2DueTimes.c)
 * Callees:
 *     KiHvEnlightenedGuestPriorityKick @ 0x140010278 (KiHvEnlightenedGuestPriorityKick.c)
 *     KxReleaseSpinLock @ 0x1400916D0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x140091710 (KxAcquireSpinLock.c)
 *     KiInsertTimer2WithCollectionLockHeld @ 0x14009F190 (KiInsertTimer2WithCollectionLockHeld.c)
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
