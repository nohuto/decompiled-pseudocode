/*
 * XREFs of RtlEnumerateGenericTableAvl @ 0x14010CE10
 * Callers:
 *     PiDmObjectManagerPopulate @ 0x140757770 (PiDmObjectManagerPopulate.c)
 *     EtwpFreeKeyNameList @ 0x1407714D0 (EtwpFreeKeyNameList.c)
 *     PopStatsNotifyPowerRequestCsState @ 0x1408B7038 (PopStatsNotifyPowerRequestCsState.c)
 *     VfAvlEnumerateNodes @ 0x14097D96C (VfAvlEnumerateNodes.c)
 * Callees:
 *     RtlEnumerateGenericTableWithoutSplayingAvl @ 0x14010CE40 (RtlEnumerateGenericTableWithoutSplayingAvl.c)
 */

PVOID __stdcall RtlEnumerateGenericTableAvl(PRTL_AVL_TABLE Table, BOOLEAN Restart)
{
  if ( Restart )
    Table->RestartKey = 0LL;
  return RtlEnumerateGenericTableWithoutSplayingAvl(Table, (PVOID *)&Table->RestartKey);
}
