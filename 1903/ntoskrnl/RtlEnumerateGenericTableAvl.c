/*
 * XREFs of RtlEnumerateGenericTableAvl @ 0x14010D720
 * Callers:
 *     PiDmObjectManagerPopulate @ 0x140756CE0 (PiDmObjectManagerPopulate.c)
 *     EtwpFreeKeyNameList @ 0x14076E67C (EtwpFreeKeyNameList.c)
 *     PopStatsNotifyPowerRequestCsState @ 0x1408B7768 (PopStatsNotifyPowerRequestCsState.c)
 *     VfAvlEnumerateNodes @ 0x14097D96C (VfAvlEnumerateNodes.c)
 * Callees:
 *     RtlEnumerateGenericTableWithoutSplayingAvl @ 0x14010D750 (RtlEnumerateGenericTableWithoutSplayingAvl.c)
 */

PVOID __stdcall RtlEnumerateGenericTableAvl(PRTL_AVL_TABLE Table, BOOLEAN Restart)
{
  if ( Restart )
    Table->RestartKey = 0LL;
  return RtlEnumerateGenericTableWithoutSplayingAvl(Table, (PVOID *)&Table->RestartKey);
}
