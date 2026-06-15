/*
 * XREFs of PolicyConfigAddDynamicRoutingRule @ 0x1800E1650
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall PolicyConfigAddDynamicRoutingRule(
        DynamicAudioEndpointManager *a1,
        struct _DynamicRoutingRule *a2,
        __int64 *a3)
{
  return DynamicAudioEndpointManager::AddRule(a1, a1, a2, a3);
}
