/*
 * XREFs of PnprWakeDevices @ 0x1405AAB60
 * Callers:
 *     PnprQuiesceWorker @ 0x1405AAA30 (PnprQuiesceWorker.c)
 *     PnpReplacePartitionUnit @ 0x14086E0C0 (PnpReplacePartitionUnit.c)
 * Callees:
 *     PoBroadcastSystemState @ 0x140597FF0 (PoBroadcastSystemState.c)
 *     PnprGetMillisecondCounter @ 0x1405A95EC (PnprGetMillisecondCounter.c)
 *     PoUnblockConsoleSwitch @ 0x140724A04 (PoUnblockConsoleSwitch.c)
 *     PoEndPowerStateTasks @ 0x140724A28 (PoEndPowerStateTasks.c)
 *     PoClearBroadcast @ 0x140727A18 (PoClearBroadcast.c)
 *     PoEndPartitionReplace @ 0x1408A87A4 (PoEndPartitionReplace.c)
 */

__int64 __fastcall PnprWakeDevices(__int64 a1)
{
  int MillisecondCounter; // eax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9

  MillisecondCounter = PnprGetMillisecondCounter(0);
  v3 = PnprContext;
  *(_DWORD *)(PnprContext + 21032) = MillisecondCounter;
  *(_BYTE *)(a1 + 29) = 1;
  PoBroadcastSystemState(a1 + 4, v3, v4, v5);
  PoClearBroadcast();
  PoEndPartitionReplace(a1 + 36, *(unsigned int *)(a1 + 32));
  PoEndPowerStateTasks(a1 + 36);
  PoUnblockConsoleSwitch(a1 + 36, *(unsigned int *)(a1 + 32));
  *(_DWORD *)(PnprContext + 21036) = PnprGetMillisecondCounter(0);
  return 0LL;
}
