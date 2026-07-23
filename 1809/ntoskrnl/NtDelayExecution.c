/*
 * XREFs of NtDelayExecution @ 0x1405E3B80
 * Callers:
 *     LdrpInitMuiCrits @ 0x1400F44B8 (LdrpInitMuiCrits.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x14004DA20 (KeDelayExecutionThread.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtDelayExecution(BOOLEAN Alertable, LARGE_INTEGER *Interval)
{
  KPROCESSOR_MODE PreviousMode; // cl
  LARGE_INTEGER Intervala; // [rsp+40h] [rbp+18h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( ((unsigned __int8)Interval & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    Intervala = *Interval;
  }
  else
  {
    Intervala = *Interval;
  }
  return KeDelayExecutionThread(PreviousMode, Alertable, &Intervala);
}
