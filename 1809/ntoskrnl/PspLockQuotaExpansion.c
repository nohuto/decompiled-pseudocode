/*
 * XREFs of PspLockQuotaExpansion @ 0x14012ABCC
 * Callers:
 *     PspReturnResourceQuota @ 0x14012A86C (PspReturnResourceQuota.c)
 *     PspExpandQuota @ 0x14012A8E8 (PspExpandQuota.c)
 *     PspInsertExpansionEntry @ 0x140190D80 (PspInsertExpansionEntry.c)
 *     PspExpandLimit @ 0x1402E988C (PspExpandLimit.c)
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
