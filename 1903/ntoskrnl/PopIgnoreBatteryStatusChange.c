/*
 * XREFs of PopIgnoreBatteryStatusChange @ 0x14015DBD0
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140596DBC (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     KeCancelTimer @ 0x1400B2CA0 (KeCancelTimer.c)
 */

char PopIgnoreBatteryStatusChange()
{
  __int32 v0; // eax

  v0 = _InterlockedExchange(&dword_140443280, 0);
  if ( v0 )
  {
    LOBYTE(v0) = KeCancelTimer(&stru_140443288);
    if ( !(_BYTE)v0 )
      LOBYTE(v0) = KeWaitForSingleObject(&stru_140443308, Executive, 0, 0, 0LL);
  }
  byte_140443320 = 1;
  return v0;
}
