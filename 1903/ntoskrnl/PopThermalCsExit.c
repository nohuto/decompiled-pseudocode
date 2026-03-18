/*
 * XREFs of PopThermalCsExit @ 0x1402F7F68
 * Callers:
 *     PopConnectedStandbySettingCallback @ 0x14073B180 (PopConnectedStandbySettingCallback.c)
 * Callees:
 *     PopThermalStandbyEndTracking @ 0x140167DB8 (PopThermalStandbyEndTracking.c)
 *     PopQueueWorkItem @ 0x140177880 (PopQueueWorkItem.c)
 *     PopThermalStandbyNotify @ 0x1402F7FCC (PopThermalStandbyNotify.c)
 */

char __fastcall PopThermalCsExit(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rcx

  PopThermalStandbyEndTracking(1LL, a2, a3);
  LOBYTE(PopSystemThermalInfo) = 1;
  if ( dword_140442A44 )
  {
    LOBYTE(v3) = 1;
    PopThermalStandbyNotify(v3);
    PopSystemThermalInfo = 256;
  }
  else if ( HIBYTE(PopSystemThermalInfo) )
  {
    PopThermalStandbyNotify(0LL);
    HIBYTE(PopSystemThermalInfo) = 0;
  }
  return PopQueueWorkItem((__int64)&unk_140442AE8, DelayedWorkQueue);
}
