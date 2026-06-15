/*
 * XREFs of ?OnDeviceStateChanged@PersistedEndpointPolicyRule@@UEAAJPEBGKPEAW4RuleAction@@@Z @ 0x180043C50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PersistedEndpointPolicyRule::OnDeviceStateChanged(
        PersistedEndpointPolicyRule *this,
        const unsigned __int16 *a2,
        __int64 a3,
        enum RuleAction *a4)
{
  *(_DWORD *)a4 = 1;
  return 0LL;
}
