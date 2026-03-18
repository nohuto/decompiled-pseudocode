/*
 * XREFs of ExReleaseFastMutexUnsafeAndLeaveCriticalRegion @ 0x1401130F0
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14009B920 (KiCheckForKernelApcDelivery.c)
 *     ExpReleaseFastMutexContended @ 0x14009E6F0 (ExpReleaseFastMutexContended.c)
 */

char __fastcall ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(ULONG_PTR BugCheckParameter2)
{
  signed __int32 v2; // eax
  $6EAC78A6FCFADE0A5FA44F358736B38F *v3; // rax
  struct _KTHREAD *CurrentThread; // rcx

  *(_QWORD *)(BugCheckParameter2 + 8) = 0LL;
  v2 = _InterlockedCompareExchange((volatile signed __int32 *)BugCheckParameter2, 1, 0);
  if ( v2 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)BugCheckParameter2, v2);
  LOBYTE(v3) = KeAbPostRelease(BugCheckParameter2);
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->KernelApcDisable++ == -1 )
  {
    v3 = &CurrentThread->152;
    if ( ($6EAC78A6FCFADE0A5FA44F358736B38F *)v3->ApcState.ApcListHead[0].Flink != v3
      && !CurrentThread->SpecialApcDisable )
    {
      LOBYTE(v3) = KiCheckForKernelApcDelivery((__int64)CurrentThread);
    }
  }
  return (char)v3;
}
