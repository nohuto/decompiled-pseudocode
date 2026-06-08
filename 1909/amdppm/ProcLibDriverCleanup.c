/*
 * XREFs of ProcLibDriverCleanup @ 0x1C0020174
 * Callers:
 *     EvtDriverUnload @ 0x1C0020160 (EvtDriverUnload.c)
 *     DriverEntry @ 0x1C003526C (DriverEntry.c)
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
    dword_1C0013068 = 0;
    result = EtwUnregister((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Flink);
    ProcLibEtwRegistered = 0;
  }
  return result;
}
