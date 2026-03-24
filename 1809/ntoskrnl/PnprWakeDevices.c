/*
 * XREFs of PnprWakeDevices @ 0x14057ACE0
 * Callers:
 *     PnprQuiesceWorker @ 0x14057ABC0 (PnprQuiesceWorker.c)
 *     PnpReplacePartitionUnit @ 0x140833780 (PnpReplacePartitionUnit.c)
 * Callees:
 *     PoBroadcastSystemState @ 0x1405681E0 (PoBroadcastSystemState.c)
 *     PnprGetMillisecondCounter @ 0x1405797BC (PnprGetMillisecondCounter.c)
 *     PoUnblockConsoleSwitch @ 0x1406DDBAC (PoUnblockConsoleSwitch.c)
 *     PoEndPowerStateTasks @ 0x1406DDBF0 (PoEndPowerStateTasks.c)
 *     PoClearBroadcast @ 0x1406E0A48 (PoClearBroadcast.c)
 *     PoEndPartitionReplace @ 0x14086BE90 (PoEndPartitionReplace.c)
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
