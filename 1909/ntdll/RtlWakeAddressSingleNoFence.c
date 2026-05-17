/*
 * XREFs of RtlWakeAddressSingleNoFence @ 0x1800FC760
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

signed __int64 __fastcall RtlWakeAddressSingleNoFence(unsigned __int64 a1)
{
  return RtlpWakeByAddress(a1, 0);
}
