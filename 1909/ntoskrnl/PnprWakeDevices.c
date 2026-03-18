/*
 * XREFs of PnprWakeDevices @ 0x1405AAB40
 * Callers:
 *     PnprQuiesceWorker @ 0x1405AAA10 (PnprQuiesceWorker.c)
 *     PnpReplacePartitionUnit @ 0x14086D7C0 (PnpReplacePartitionUnit.c)
 * Callees:
 *     PoBroadcastSystemState @ 0x140597FCC (PoBroadcastSystemState.c)
 *     PnprGetMillisecondCounter @ 0x1405A95CC (PnprGetMillisecondCounter.c)
 *     PoUnblockConsoleSwitch @ 0x1407268A4 (PoUnblockConsoleSwitch.c)
 *     PoEndPowerStateTasks @ 0x1407268C8 (PoEndPowerStateTasks.c)
 *     PoClearBroadcast @ 0x140728D88 (PoClearBroadcast.c)
 *     PoEndPartitionReplace @ 0x1408A8004 (PoEndPartitionReplace.c)
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
