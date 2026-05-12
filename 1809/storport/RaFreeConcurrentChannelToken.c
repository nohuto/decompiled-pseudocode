/*
 * XREFs of RaFreeConcurrentChannelToken @ 0x1C0036F74
 * Callers:
 *     RaidAdapterPostScatterGatherExecute @ 0x1C00049A0 (RaidAdapterPostScatterGatherExecute.c)
 * Callees:
 *     <none>
 */

PSLIST_ENTRY __fastcall RaFreeConcurrentChannelToken(__int64 a1, __int64 a2)
{
  return ExpInterlockedPushEntrySList(
           (PSLIST_HEADER)(*(_QWORD *)(a1 + 4816) + ((unsigned __int64)*(unsigned int *)(a2 + 16) << 6)),
           (PSLIST_ENTRY)a2);
}
