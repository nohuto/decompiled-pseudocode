/*
 * XREFs of PsGetCurrentThreadTeb @ 0x14011C660
 * Callers:
 *     EtwTraceThread @ 0x1406C4A70 (EtwTraceThread.c)
 *     EtwpPsProvTraceThread @ 0x1406C4DCC (EtwpPsProvTraceThread.c)
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
