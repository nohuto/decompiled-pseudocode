/*
 * XREFs of PnprWakeDevices @ 0x14057BCE0
 * Callers:
 *     PnprQuiesceWorker @ 0x14057BBC0 (PnprQuiesceWorker.c)
 *     PnpReplacePartitionUnit @ 0x1408349E0 (PnpReplacePartitionUnit.c)
 * Callees:
 *     PoBroadcastSystemState @ 0x1405691E0 (PoBroadcastSystemState.c)
 *     PnprGetMillisecondCounter @ 0x14057A7BC (PnprGetMillisecondCounter.c)
 *     PoUnblockConsoleSwitch @ 0x1406DEE4C (PoUnblockConsoleSwitch.c)
 *     PoEndPowerStateTasks @ 0x1406DEE90 (PoEndPowerStateTasks.c)
 *     PoClearBroadcast @ 0x1406E1CE8 (PoClearBroadcast.c)
 *     PoEndPartitionReplace @ 0x14086D0F0 (PoEndPartitionReplace.c)
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
