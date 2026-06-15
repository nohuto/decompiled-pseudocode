/*
 * XREFs of ?Release@PersistedEndpointPolicyRule@@UEAAKXZ @ 0x18005E120
 * Callers:
 *     ?Release@EndpointDevice@@W7EAAKXZ @ 0x180069220 (-Release@EndpointDevice@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall PersistedEndpointPolicyRule::Release(PersistedEndpointPolicyRule *this)
{
  return CUnknown::Release((PersistedEndpointPolicyRule *)((char *)this + 8));
}
