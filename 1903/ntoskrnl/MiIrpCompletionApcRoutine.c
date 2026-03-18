/*
 * XREFs of MiIrpCompletionApcRoutine @ 0x1402CE6B0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 */

void __fastcall MiIrpCompletionApcRoutine(struct _KEVENT *ApcContext, PIO_STATUS_BLOCK IoStatusBlock, ULONG Reserved)
{
  KeSetEvent(ApcContext, 0, 0);
}
