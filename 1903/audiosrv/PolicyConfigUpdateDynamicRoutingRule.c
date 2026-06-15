/*
 * XREFs of PolicyConfigUpdateDynamicRoutingRule @ 0x1800E3CB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall PolicyConfigUpdateDynamicRoutingRule(
        DynamicAudioEndpointManager *a1,
        __int64 a2,
        struct _DynamicRoutingRule *a3)
{
  return DynamicAudioEndpointManager::UpdateRule(a1, a1, a2, a3);
}
