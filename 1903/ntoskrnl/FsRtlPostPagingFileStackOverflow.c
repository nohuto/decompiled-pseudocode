/*
 * XREFs of FsRtlPostPagingFileStackOverflow @ 0x1402846E0
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlpPostStackOverflow @ 0x140284794 (FsRtlpPostStackOverflow.c)
 */

void __stdcall FsRtlPostPagingFileStackOverflow(
        PVOID Context,
        PKEVENT Event,
        PFSRTL_STACK_OVERFLOW_ROUTINE StackOverflowRoutine)
{
  char v3; // r9

  v3 = 1;
  FsRtlpPostStackOverflow(Context, Event, StackOverflowRoutine, v3);
}
