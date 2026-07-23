/*
 * XREFs of PopChangeCapability @ 0x140748394
 * Callers:
 *     NtPowerInformation @ 0x14058D170 (NtPowerInformation.c)
 * Callees:
 *     PopResetCurrentPolicies @ 0x1407487DC (PopResetCurrentPolicies.c)
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
