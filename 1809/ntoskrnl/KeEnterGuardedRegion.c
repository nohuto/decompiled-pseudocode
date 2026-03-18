/*
 * XREFs of KeEnterGuardedRegion @ 0x140016810
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void KeEnterGuardedRegion(void)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
}
