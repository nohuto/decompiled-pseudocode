/*
 * XREFs of KeDetachProcess @ 0x140138580
 * Callers:
 *     <none>
 * Callees:
 *     KiDetachProcess @ 0x140043810 (KiDetachProcess.c)
 */

void KeDetachProcess(void)
{
  struct _KTHREAD *CurrentThread; // rcx

  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->ApcStateIndex )
    KiDetachProcess((struct _KTHREAD *)&CurrentThread->600, 0);
}
