/*
 * XREFs of PopIgnoreBatteryStatusChange @ 0x1401424E8
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140566D74 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeCancelTimer @ 0x14001CEB0 (KeCancelTimer.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 */

char PopIgnoreBatteryStatusChange()
{
  __int32 v0; // eax

  v0 = _InterlockedExchange(&dword_140417980, 0);
  if ( v0 )
  {
    LOBYTE(v0) = KeCancelTimer(&stru_140417988);
    if ( !(_BYTE)v0 )
      LOBYTE(v0) = KeWaitForSingleObject(&stru_140417A08, Executive, 0, 0, 0LL);
  }
  byte_140417A20 = 1;
  return v0;
}
