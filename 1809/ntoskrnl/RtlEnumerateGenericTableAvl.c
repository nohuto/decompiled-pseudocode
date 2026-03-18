/*
 * XREFs of RtlEnumerateGenericTableAvl @ 0x140134210
 * Callers:
 *     PiDmObjectManagerPopulate @ 0x14072C910 (PiDmObjectManagerPopulate.c)
 *     EtwpFreeKeyNameList @ 0x140742AAC (EtwpFreeKeyNameList.c)
 *     PopStatsNotifyPowerRequestCsState @ 0x14087B190 (PopStatsNotifyPowerRequestCsState.c)
 *     VfAvlEnumerateNodes @ 0x14093E0D8 (VfAvlEnumerateNodes.c)
 * Callees:
 *     RtlEnumerateGenericTableWithoutSplayingAvl @ 0x1400069A0 (RtlEnumerateGenericTableWithoutSplayingAvl.c)
 */

PVOID __stdcall RtlEnumerateGenericTableAvl(PRTL_AVL_TABLE Table, BOOLEAN Restart)
{
  if ( Restart )
    Table->RestartKey = 0LL;
  return RtlEnumerateGenericTableWithoutSplayingAvl(Table, (PVOID *)&Table->RestartKey);
}
