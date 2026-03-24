/*
 * XREFs of KiInsertTimer2 @ 0x1400FC800
 * Callers:
 *     KiTimer2Expiration @ 0x1400FB3F0 (KiTimer2Expiration.c)
 *     KiExpireTimer2 @ 0x1400FB900 (KiExpireTimer2.c)
 *     KiAdjustTimer2DueTimes @ 0x14016FE34 (KiAdjustTimer2DueTimes.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140062A90 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x1400630E0 (KxReleaseSpinLock.c)
 *     KiHvEnlightenedGuestPriorityKick @ 0x1400CFD98 (KiHvEnlightenedGuestPriorityKick.c)
 *     KiInsertTimer2WithCollectionLockHeld @ 0x1400FC4C0 (KiInsertTimer2WithCollectionLockHeld.c)
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
