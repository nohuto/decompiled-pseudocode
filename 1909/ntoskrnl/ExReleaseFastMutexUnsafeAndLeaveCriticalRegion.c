/*
 * XREFs of ExReleaseFastMutexUnsafeAndLeaveCriticalRegion @ 0x1401126E0
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ExpReleaseFastMutexContended @ 0x1400C6530 (ExpReleaseFastMutexContended.c)
 *     KiCheckForKernelApcDelivery @ 0x1400EF3A0 (KiCheckForKernelApcDelivery.c)
 */

char __fastcall ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(ULONG_PTR BugCheckParameter2)
{
  signed __int32 v2; // eax
  $C6908ADE9723D0A04AF8EE82D8D15C40 *v3; // rax
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
    if ( ($C6908ADE9723D0A04AF8EE82D8D15C40 *)v3->ApcState.ApcListHead[0].Flink != v3
      && !CurrentThread->SpecialApcDisable )
    {
      LOBYTE(v3) = KiCheckForKernelApcDelivery((__int64)CurrentThread);
    }
  }
  return (char)v3;
}
