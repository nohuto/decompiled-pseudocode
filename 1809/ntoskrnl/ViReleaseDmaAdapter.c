/*
 * XREFs of ViReleaseDmaAdapter @ 0x14092E59C
 * Callers:
 *     VfGetDmaAdapter @ 0x14092B140 (VfGetDmaAdapter.c)
 *     VfPutDmaAdapter @ 0x14092BE70 (VfPutDmaAdapter.c)
 *     VfIoDeleteDevice @ 0x140934128 (VfIoDeleteDevice.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     KxReleaseSpinLock @ 0x1400630E0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CF40 (KeAcquireSpinLockRaiseToDpc.c)
 *     MmFreeContiguousMemory @ 0x140122FC0 (MmFreeContiguousMemory.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AF8 (KiRemoveSystemWorkPriorityKick.c)
 *     VfReportIssueWithOptions @ 0x14030AE18 (VfReportIssueWithOptions.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     ViHalPreprocessOptions @ 0x14092DD28 (ViHalPreprocessOptions.c)
 */

void __fastcall ViReleaseDmaAdapter(ULONG_PTR a1)
{
  _QWORD *v1; // r14
  KSPIN_LOCK *v2; // rbx
  KIRQL v4; // al
  PVOID *v5; // rbp
  KIRQL v6; // si
  struct _KPRCB *CurrentPrcb; // rcx
  PVOID *v8; // rbx
  __int64 v9; // rsi
  LONG_PTR v10; // rax
  ULONG_PTR v11; // rbx

  v1 = *(_QWORD **)(a1 + 16);
  v2 = (KSPIN_LOCK *)(a1 + 280);
  v1[1] = *(_QWORD *)(a1 + 48);
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 280));
  v5 = *(PVOID **)(a1 + 264);
  *(_QWORD *)(a1 + 264) = 0LL;
  v6 = v4;
  KxReleaseSpinLock(v2);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v6 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(v6);
  if ( v5 )
  {
    v8 = v5;
    v9 = 32LL;
    do
    {
      if ( *v8 )
        MmFreeContiguousMemory(*v8);
      ++v8;
      --v9;
    }
    while ( v9 );
    ExFreePoolWithTag(v5, 0);
  }
  v10 = ObfDereferenceObject(v1);
  v11 = v10;
  if ( *(int *)(a1 + 36) > 0 && v10 && (v10 != 1 || !*(_BYTE *)(a1 + 34)) )
  {
    ViHalPreprocessOptions(
      byte_1404054E8,
      "Too many outstanding reference counts (%x) for adapter %p",
      17LL,
      v10,
      (__int64)v1,
      a1);
    VfReportIssueWithOptions(0xE6u, 0x11uLL, v11, (ULONG_PTR)v1, a1, byte_1404054E8);
  }
  ExFreePoolWithTag((PVOID)a1, 0);
}
