/*
 * XREFs of KeDetachProcess @ 0x140137F30
 * Callers:
 *     <none>
 * Callees:
 *     KiDetachProcess @ 0x14003A6F0 (KiDetachProcess.c)
 */

void KeDetachProcess(void)
{
  struct _KTHREAD *CurrentThread; // rcx

  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->ApcStateIndex )
    KiDetachProcess((struct _KTHREAD *)&CurrentThread->600, 0);
}
