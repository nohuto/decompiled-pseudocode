/*
 * XREFs of PopChangeCapability @ 0x14075AD34
 * Callers:
 *     NtPowerInformation @ 0x140699980 (NtPowerInformation.c)
 *     PopNotifyPolicyDevice @ 0x14074DFC0 (PopNotifyPolicyDevice.c)
 *     PopThermalZoneRemove @ 0x1408A8810 (PopThermalZoneRemove.c)
 * Callees:
 *     PopResetCurrentPolicies @ 0x14075B17C (PopResetCurrentPolicies.c)
 */

__int64 __fastcall PopChangeCapability(_BYTE *a1, __int64 a2)
{
  __int64 result; // rax

  if ( *a1 != (_BYTE)a2 )
  {
    *a1 = a2;
    return PopResetCurrentPolicies(a1, a2);
  }
  return result;
}
