/*
 * XREFs of FsRtlPostStackOverflow @ 0x140270900
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlpPostStackOverflow @ 0x140270994 (FsRtlpPostStackOverflow.c)
 */

void __stdcall FsRtlPostStackOverflow(PVOID Context, PKEVENT Event, PFSRTL_STACK_OVERFLOW_ROUTINE StackOverflowRoutine)
{
  FsRtlpPostStackOverflow(Context, Event, StackOverflowRoutine, 0LL);
}
