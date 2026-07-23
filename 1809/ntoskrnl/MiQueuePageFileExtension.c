/*
 * XREFs of MiQueuePageFileExtension @ 0x1402B89D4
 * Callers:
 *     MiContractPagingFiles @ 0x1400916A8 (MiContractPagingFiles.c)
 *     MiIssuePageExtendRequest @ 0x1402B855C (MiIssuePageExtendRequest.c)
 *     MiContractWsSwapPageFileWorker @ 0x1402CB8D0 (MiContractWsSwapPageFileWorker.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeReleaseSemaphoreEx @ 0x1400D29F0 (KeReleaseSemaphoreEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiQueuePageFileExtension(__int64 a1, char a2, KIRQL a3)
{
  __int64 v3; // rdi
  KIRQL v4; // si
  _QWORD *v7; // rcx
  _QWORD *v8; // rdx
  _QWORD *v9; // rdx
  __int64 v10; // r9
  struct _KPRCB *CurrentPrcb; // rcx

  v3 = *(_QWORD *)(a1 + 24);
  v4 = a3;
  if ( a3 == 17 )
    v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 1280));
  v7 = (_QWORD *)(a1 + 8);
  if ( (*(_BYTE *)(a1 + 79) & 8) != 0 )
  {
    v8 = *(_QWORD **)(v3 + 1512);
    if ( *v8 == v3 + 1504 )
    {
      *v7 = v3 + 1504;
      *(_QWORD *)(a1 + 16) = v8;
      *v8 = v7;
      *(_QWORD *)(v3 + 1512) = v7;
      goto LABEL_10;
    }
LABEL_7:
    __fastfail(3u);
  }
  v9 = *(_QWORD **)(v3 + 1528);
  if ( *v9 != v3 + 1520 )
    goto LABEL_7;
  *v7 = v3 + 1520;
  *(_QWORD *)(a1 + 16) = v9;
  *v9 = v7;
  *(_QWORD *)(v3 + 1528) = v7;
  if ( *(_QWORD *)(a1 + 32) != -1LL )
    ++*(_DWORD *)(v3 + 1804);
LABEL_10:
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 1280));
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v4 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(v4);
  return KeReleaseSemaphoreEx(v3 + 1456, 0LL, 1, v10, a2);
}
