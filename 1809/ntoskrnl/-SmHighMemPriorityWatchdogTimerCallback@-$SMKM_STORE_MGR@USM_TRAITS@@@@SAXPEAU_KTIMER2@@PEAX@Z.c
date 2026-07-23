/*
 * XREFs of ?SmHighMemPriorityWatchdogTimerCallback@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_KTIMER2@@PEAX@Z @ 0x1403025D0
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x1400D1A80 (ExQueueWorkItem.c)
 */

void __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmHighMemPriorityWatchdogTimerCallback(__int64 a1, __int64 a2)
{
  if ( !_InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 1824), a2 + 1800, 0LL) )
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(a2 + 1800), NormalWorkQueue);
}
