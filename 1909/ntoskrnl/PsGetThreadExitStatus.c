/*
 * XREFs of PsGetThreadExitStatus @ 0x1406EB390
 * Callers:
 *     NtQueryInformationThread @ 0x1405E5C60 (NtQueryInformationThread.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140043C20 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140043CA0 (ExAcquireRundownProtection_0.c)
 */

NTSTATUS __stdcall PsGetThreadExitStatus(PETHREAD Thread)
{
  struct _EX_RUNDOWN_REF *p_WaitStatus; // rdi

  p_WaitStatus = (struct _EX_RUNDOWN_REF *)&Thread[1].WaitStatus;
  if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&Thread[1].WaitStatus) )
    return (NTSTATUS)Thread[1].Timer.Header.WaitListHead.Blink;
  ExReleaseRundownProtection_0(p_WaitStatus);
  return 259;
}
