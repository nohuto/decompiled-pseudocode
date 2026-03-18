/*
 * XREFs of RitTakeOver @ 0x1C01622EC
 * Callers:
 *     RawInputThread @ 0x1C0077DE0 (RawInputThread.c)
 * Callees:
 *     <none>
 */

__int64 RitTakeOver()
{
  if ( (int)CBaseInput::InitializeSensor(gpHidInput) >= 0 )
    CBaseInput::Read(gpHidInput);
  EtwTraceRitReEngaged();
  ZwSetEvent(ghDITRITEvent, 0LL);
  return 1LL;
}
