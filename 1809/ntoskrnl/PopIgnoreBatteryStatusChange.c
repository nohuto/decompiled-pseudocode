/*
 * XREFs of PopIgnoreBatteryStatusChange @ 0x1401424C8
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140566D74 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeCancelTimer @ 0x14001CEB0 (KeCancelTimer.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 */

char PopIgnoreBatteryStatusChange()
{
  __int32 v0; // eax

  v0 = _InterlockedExchange(&dword_1404178A0, 0);
  if ( v0 )
  {
    LOBYTE(v0) = KeCancelTimer(&stru_1404178A8);
    if ( !(_BYTE)v0 )
      LOBYTE(v0) = KeWaitForSingleObject(&stru_140417928, Executive, 0, 0, 0LL);
  }
  byte_140417940 = 1;
  return v0;
}
