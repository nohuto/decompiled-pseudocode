/*
 * XREFs of PspLockQuotaExpansion @ 0x14012CB1C
 * Callers:
 *     PspReturnResourceQuota @ 0x14012C7C4 (PspReturnResourceQuota.c)
 *     PspExpandQuota @ 0x14012C840 (PspExpandQuota.c)
 *     PspInsertExpansionEntry @ 0x14019AE30 (PspInsertExpansionEntry.c)
 *     PspExpandLimit @ 0x140306F60 (PspExpandLimit.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008500 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall PspLockQuotaExpansion(__int64 a1, KIRQL *a2)
{
  struct _KTHREAD *CurrentThread; // rax

  if ( *(_DWORD *)a1 )
  {
    *a2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 16));
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    *a2 = 0;
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(a1 + 16, 0LL);
  }
}
