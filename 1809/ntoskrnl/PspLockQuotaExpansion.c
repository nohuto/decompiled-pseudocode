/*
 * XREFs of PspLockQuotaExpansion @ 0x14012ABEC
 * Callers:
 *     PspReturnResourceQuota @ 0x14012A88C (PspReturnResourceQuota.c)
 *     PspExpandQuota @ 0x14012A908 (PspExpandQuota.c)
 *     PspInsertExpansionEntry @ 0x140190DA0 (PspInsertExpansionEntry.c)
 *     PspExpandLimit @ 0x1402E998C (PspExpandLimit.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CF40 (KeAcquireSpinLockRaiseToDpc.c)
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
