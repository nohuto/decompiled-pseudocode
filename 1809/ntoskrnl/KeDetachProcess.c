/*
 * XREFs of KeDetachProcess @ 0x140135BA0
 * Callers:
 *     <none>
 * Callees:
 *     KiDetachProcess @ 0x1400B9CA0 (KiDetachProcess.c)
 */

void KeDetachProcess(void)
{
  __int64 v0; // r8
  struct _KTHREAD *CurrentThread; // rcx

  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->ApcStateIndex )
    KiDetachProcess((__int64 *)&CurrentThread->600, 0LL, v0);
}
