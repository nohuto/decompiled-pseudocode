/*
 * XREFs of RitTakeOver @ 0x1C0113294
 * Callers:
 *     RawInputThread @ 0x1C001CA60 (RawInputThread.c)
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
