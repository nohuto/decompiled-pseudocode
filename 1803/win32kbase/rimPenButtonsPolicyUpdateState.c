/*
 * XREFs of rimPenButtonsPolicyUpdateState @ 0x1C01029DC
 * Callers:
 *     rimApplyPointerDevicePolicies @ 0x1C0100724 (rimApplyPointerDevicePolicies.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimPenButtonsPolicyUpdateState(__int64 a1, _DWORD *a2, int a3)
{
  __int64 result; // rax

  if ( (unsigned int)(*(_DWORD *)(a1 + 24) - 5) > 1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  if ( a3 )
  {
    if ( (a2[622] & 2) != 0 )
      a2[8] ^= (a2[8] ^ ~(8 * a2[601])) & 0x20;
    else
      a2[8] &= ~0x20u;
  }
  result = (unsigned int)a2[655];
  if ( (result & 4) == 0 )
  {
    result = (unsigned int)a2[601];
    if ( (result & 4) != 0 )
    {
      result = (a2[8] ^ (16 * a2[622])) & 0x10;
      a2[8] ^= result;
    }
  }
  return result;
}
