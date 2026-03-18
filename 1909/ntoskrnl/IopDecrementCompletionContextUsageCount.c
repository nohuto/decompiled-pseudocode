/*
 * XREFs of IopDecrementCompletionContextUsageCount @ 0x1401BEAB8
 * Callers:
 *     IopCompleteRequest @ 0x140065750 (IopCompleteRequest.c)
 *     NtLockFile @ 0x1405D4D30 (NtLockFile.c)
 *     IopXxxControlFile @ 0x1405F25A0 (IopXxxControlFile.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140008320 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008590 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 */

void __fastcall IopDecrementCompletionContextUsageCount(ULONG_PTR BugCheckParameter1)
{
  KSPIN_LOCK *v1; // rbx
  KIRQL v3; // al
  __int64 v4; // r8
  signed __int64 BugCheckParameter4; // rsi

  v1 = (KSPIN_LOCK *)(BugCheckParameter1 + 184);
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(BugCheckParameter1 + 184));
  v4 = *(_QWORD *)(BugCheckParameter1 + 176);
  BugCheckParameter4 = *(_QWORD *)(v4 + 16);
  *(_QWORD *)(v4 + 16) = BugCheckParameter4 - 1;
  KeReleaseSpinLock(v1, v3);
  if ( BugCheckParameter4 <= 0 )
    KeBugCheckEx(0x18u, BugCheckParameter1, *(_QWORD *)(BugCheckParameter1 + 176), 0x82uLL, BugCheckParameter4);
}
