/*
 * XREFs of RtlSetSystemBootStatusEx @ 0x140895F20
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140566D74 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     RtlpSystemBootStatusRequest @ 0x14071C4F4 (RtlpSystemBootStatusRequest.c)
 */

__int64 __fastcall RtlSetSystemBootStatusEx(__int64 a1, unsigned int a2, void *a3)
{
  return RtlpSystemBootStatusRequest(0x20u, a1, a2, a3);
}
