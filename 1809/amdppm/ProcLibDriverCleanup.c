/*
 * XREFs of ProcLibDriverCleanup @ 0x1C001C454
 * Callers:
 *     EvtDriverUnload @ 0x1C001C440 (EvtDriverUnload.c)
 *     DriverEntry @ 0x1C0032168 (DriverEntry.c)
 * Callees:
 *     <none>
 */

NTSTATUS ProcLibDriverCleanup()
{
  NTSTATUS result; // eax

  if ( ProcLibEtwRegistered )
  {
    EtwUnregister(RegHandle);
    RegHandle = 0LL;
    dword_1C0011060 = 0;
    result = EtwUnregister(ProcLibEtwHandle);
    ProcLibEtwRegistered = 0;
  }
  return result;
}
