/*
 * XREFs of PopIgnoreBatteryStatusChange @ 0x1401425E8
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140567D74 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeCancelTimer @ 0x14001CEB0 (KeCancelTimer.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 */

char PopIgnoreBatteryStatusChange()
{
  __int32 v0; // eax

  v0 = _InterlockedExchange(&dword_140418A20, 0);
  if ( v0 )
  {
    LOBYTE(v0) = KeCancelTimer(&stru_140418A28);
    if ( !(_BYTE)v0 )
      LOBYTE(v0) = KeWaitForSingleObject(&stru_140418AA8, Executive, 0, 0, 0LL);
  }
  byte_140418AC0 = 1;
  return v0;
}
