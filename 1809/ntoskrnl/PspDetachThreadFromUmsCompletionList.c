/*
 * XREFs of PspDetachThreadFromUmsCompletionList @ 0x1402EA198
 * Callers:
 *     NtSetInformationThread @ 0x1405EAEA0 (NtSetInformationThread.c)
 * Callees:
 *     KeUnInitializeUmsThread @ 0x140846794 (KeUnInitializeUmsThread.c)
 */

__int64 __fastcall PspDetachThreadFromUmsCompletionList(struct _KTHREAD *a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = a1;
  if ( !a1 )
    CurrentThread = KeGetCurrentThread();
  if ( (CurrentThread->Header.Reserved1 & 0x80u) != 0 )
    return KeUnInitializeUmsThread();
  else
    return 3221225659LL;
}
