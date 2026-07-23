/*
 * XREFs of RtlGetActiveConsoleId @ 0x140001C60
 * Callers:
 *     PopGetConsoleDisplayRequestCount @ 0x1400D5B9C (PopGetConsoleDisplayRequestCount.c)
 *     PopPowerButtonWorkCallback @ 0x140301080 (PopPowerButtonWorkCallback.c)
 *     IopParseDevice @ 0x1406018D0 (IopParseDevice.c)
 *     PoBlockConsoleSwitch @ 0x1406EF198 (PoBlockConsoleSwitch.c)
 *     PopNotifyConsoleUserPresent @ 0x140720410 (PopNotifyConsoleUserPresent.c)
 *     PfpProcessScenarioPhase @ 0x140746420 (PfpProcessScenarioPhase.c)
 *     PiCMQueryRemove @ 0x140872914 (PiCMQueryRemove.c)
 *     TtmpDisplayBurstPowerSettingCallback @ 0x1408BDFF0 (TtmpDisplayBurstPowerSettingCallback.c)
 * Callees:
 *     PsGetThreadServerSilo @ 0x1400024F0 (PsGetThreadServerSilo.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140002880 (PsIsCurrentThreadInServerSilo.c)
 */

ULONG RtlGetActiveConsoleId(void)
{
  __int64 ThreadServerSilo; // rax
  _QWORD *v2; // rax

  if ( !(unsigned __int8)PsIsCurrentThreadInServerSilo() )
    return MEMORY[0xFFFFF780000002D8];
  ThreadServerSilo = PsGetThreadServerSilo(KeGetCurrentThread());
  if ( ThreadServerSilo )
    v2 = *(_QWORD **)(ThreadServerSilo + 1256);
  else
    v2 = &PspHostSiloGlobals;
  return *(_DWORD *)(v2[138] + 4LL);
}
