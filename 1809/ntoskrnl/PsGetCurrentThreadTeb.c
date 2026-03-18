/*
 * XREFs of PsGetCurrentThreadTeb @ 0x1400A39C0
 * Callers:
 *     EtwTraceThread @ 0x1406237EC (EtwTraceThread.c)
 *     EtwpPsProvTraceThread @ 0x140623B44 (EtwpPsProvTraceThread.c)
 * Callees:
 *     <none>
 */

PVOID PsGetCurrentThreadTeb(void)
{
  struct _KTHREAD *CurrentThread; // rcx

  CurrentThread = KeGetCurrentThread();
  if ( (CurrentThread->MiscFlags & 0x400) != 0 || CurrentThread->ApcStateIndex == 1 )
    return 0LL;
  else
    return CurrentThread->Teb;
}
