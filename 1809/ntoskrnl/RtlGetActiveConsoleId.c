/*
 * XREFs of RtlGetActiveConsoleId @ 0x140010890
 * Callers:
 *     PopGetConsoleDisplayRequestCount @ 0x1400108EC (PopGetConsoleDisplayRequestCount.c)
 *     PopPowerButtonWorkCallback @ 0x1402E4990 (PopPowerButtonWorkCallback.c)
 *     IopParseDevice @ 0x14063DD00 (IopParseDevice.c)
 *     PopNotifyConsoleUserPresent @ 0x1406DCE64 (PopNotifyConsoleUserPresent.c)
 *     PoBlockConsoleSwitch @ 0x1406DEEB0 (PoBlockConsoleSwitch.c)
 *     PfpProcessScenarioPhase @ 0x14071CE5C (PfpProcessScenarioPhase.c)
 *     TtmpDisplayBurstPowerSettingCallback @ 0x140762810 (TtmpDisplayBurstPowerSettingCallback.c)
 *     PiCMQueryRemove @ 0x140839894 (PiCMQueryRemove.c)
 * Callees:
 *     PsGetThreadServerSilo @ 0x14007E5D0 (PsGetThreadServerSilo.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1400B9B60 (PsIsCurrentThreadInServerSilo.c)
 *     KeIsExecutingInArbitraryThreadContext @ 0x1401B442C (KeIsExecutingInArbitraryThreadContext.c)
 */

ULONG RtlGetActiveConsoleId(void)
{
  __int64 ThreadServerSilo; // rax
  _QWORD *v2; // rax

  if ( !(unsigned __int8)PsIsCurrentThreadInServerSilo() )
    return MEMORY[0xFFFFF780000002D8];
  if ( (unsigned int)KeIsExecutingInArbitraryThreadContext()
    || (ThreadServerSilo = PsGetThreadServerSilo(KeGetCurrentThread())) == 0 )
  {
    v2 = &PspHostSiloGlobals;
  }
  else
  {
    v2 = *(_QWORD **)(ThreadServerSilo + 1256);
  }
  return *(_DWORD *)(v2[140] + 4LL);
}
