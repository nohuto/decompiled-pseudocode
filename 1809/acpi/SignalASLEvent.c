/*
 * XREFs of SignalASLEvent @ 0x1C0066270
 * Callers:
 *     ResetSignal @ 0x1C00664D0 (ResetSignal.c)
 * Callees:
 *     DequeueAndReadyContext @ 0x1C00293DC (DequeueAndReadyContext.c)
 */

void __fastcall SignalASLEvent(__int64 a1)
{
  KIRQL v2; // si

  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 24));
  if ( !DequeueAndReadyContext((struct _SLIST_ENTRY **)(a1 + 8)) )
    ++*(_DWORD *)a1;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 24), v2);
}
