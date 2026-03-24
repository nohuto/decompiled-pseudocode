/*
 * XREFs of RtlGetActiveConsoleId @ 0x140010890
 * Callers:
 *     PopGetConsoleDisplayRequestCount @ 0x1400108EC (PopGetConsoleDisplayRequestCount.c)
 *     PopPowerButtonWorkCallback @ 0x1402E47A0 (PopPowerButtonWorkCallback.c)
 *     IopParseDevice @ 0x14063CCE0 (IopParseDevice.c)
 *     PopNotifyConsoleUserPresent @ 0x1406DBBC4 (PopNotifyConsoleUserPresent.c)
 *     PoBlockConsoleSwitch @ 0x1406DDC10 (PoBlockConsoleSwitch.c)
 *     PfpProcessScenarioPhase @ 0x14071BBBC (PfpProcessScenarioPhase.c)
 *     TtmpDisplayBurstPowerSettingCallback @ 0x140761620 (TtmpDisplayBurstPowerSettingCallback.c)
 *     PiCMQueryRemove @ 0x140838634 (PiCMQueryRemove.c)
 * Callees:
 *     PsGetThreadServerSilo @ 0x14007E5E0 (PsGetThreadServerSilo.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1400B9C20 (PsIsCurrentThreadInServerSilo.c)
 *     KeIsExecutingInArbitraryThreadContext @ 0x1401B42EC (KeIsExecutingInArbitraryThreadContext.c)
 */

__int64 RtlGetActiveConsoleId()
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
  return *(unsigned int *)(v2[140] + 4LL);
}
