/*
 * XREFs of PspLockQuotaExpansion @ 0x14012D5EC
 * Callers:
 *     PspReturnResourceQuota @ 0x14012D294 (PspReturnResourceQuota.c)
 *     PspExpandQuota @ 0x14012D310 (PspExpandQuota.c)
 *     PspInsertExpansionEntry @ 0x14019B490 (PspInsertExpansionEntry.c)
 *     PspExpandLimit @ 0x140306A10 (PspExpandLimit.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008590 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
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
