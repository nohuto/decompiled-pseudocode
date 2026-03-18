/*
 * XREFs of PopIgnoreBatteryStatusChange @ 0x14015E270
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140596DBC (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     KeCancelTimer @ 0x1400E2D90 (KeCancelTimer.c)
 */

char PopIgnoreBatteryStatusChange()
{
  __int32 v0; // eax

  v0 = _InterlockedExchange(&dword_140443200, 0);
  if ( v0 )
  {
    LOBYTE(v0) = KeCancelTimer(&stru_140443208);
    if ( !(_BYTE)v0 )
      LOBYTE(v0) = KeWaitForSingleObject(&stru_140443288, Executive, 0, 0, 0LL);
  }
  byte_1404432A0 = 1;
  return v0;
}
