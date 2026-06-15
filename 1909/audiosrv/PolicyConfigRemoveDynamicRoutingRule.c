/*
 * XREFs of PolicyConfigRemoveDynamicRoutingRule @ 0x1800E24B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall PolicyConfigRemoveDynamicRoutingRule(DynamicAudioEndpointManager *a1, __int64 a2)
{
  return DynamicAudioEndpointManager::RemoveRule(a1, a1, a2);
}
