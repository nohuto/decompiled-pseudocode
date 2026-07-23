/*
 * XREFs of ExReleaseFastMutexUnsafeAndLeaveCriticalRegion @ 0x14010ED30
 * Callers:
 *     <none>
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x140005A50 (KiCheckForKernelApcDelivery.c)
 *     ExpReleaseFastMutexContended @ 0x140023F40 (ExpReleaseFastMutexContended.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 */

$FFD56A4B518EFE5E17FDE2C5CC486782 *__fastcall ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(
        ULONG_PTR BugCheckParameter2)
{
  signed __int32 v2; // eax
  $FFD56A4B518EFE5E17FDE2C5CC486782 *result; // rax
  struct _KTHREAD *CurrentThread; // rcx

  *(_QWORD *)(BugCheckParameter2 + 8) = 0LL;
  v2 = _InterlockedCompareExchange((volatile signed __int32 *)BugCheckParameter2, 1, 0);
  if ( v2 )
    ExpReleaseFastMutexContended(BugCheckParameter2, v2);
  result = ($FFD56A4B518EFE5E17FDE2C5CC486782 *)KeAbPostRelease(BugCheckParameter2);
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->KernelApcDisable++ == -1 )
  {
    result = &CurrentThread->152;
    if ( ($FFD56A4B518EFE5E17FDE2C5CC486782 *)result->ApcState.ApcListHead[0].Flink != result
      && !CurrentThread->SpecialApcDisable )
    {
      return ($FFD56A4B518EFE5E17FDE2C5CC486782 *)KiCheckForKernelApcDelivery((__int64)CurrentThread);
    }
  }
  return result;
}
