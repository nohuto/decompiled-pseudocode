/*
 * XREFs of PsGetCurrentThreadTeb @ 0x14011CB80
 * Callers:
 *     EtwTraceThread @ 0x1406C3C30 (EtwTraceThread.c)
 *     EtwpPsProvTraceThread @ 0x1406C3F8C (EtwpPsProvTraceThread.c)
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
