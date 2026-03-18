/*
 * XREFs of rimLidClosedPolicyUpdateStateAndApply @ 0x1C0157E84
 * Callers:
 *     rimApplyPointerDevicePolicies @ 0x1C0155808 (rimApplyPointerDevicePolicies.c)
 * Callees:
 *     ApiSetGetPowerTransitionsState @ 0x1C00A6454 (ApiSetGetPowerTransitionsState.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     memset @ 0x1C00C1440 (memset.c)
 *     RIMCmAddContactSuppressionReasons @ 0x1C015B788 (RIMCmAddContactSuppressionReasons.c)
 */

_DWORD *__fastcall rimLidClosedPolicyUpdateStateAndApply(__int64 a1, __int64 a2)
{
  _DWORD *result; // rax
  _DWORD v5[16]; // [rsp+20h] [rbp-58h] BYREF

  result = memset(v5, 0, 0x3CuLL);
  if ( gbEnableLidClosedInputSuppression )
  {
    result = *(_DWORD **)(a1 + 16);
    if ( !result[526] )
    {
      result = (_DWORD *)ApiSetGetPowerTransitionsState(v5);
      if ( !v5[13] && (*(_DWORD *)(a2 + 8) & 0x100) == 0 )
      {
        result = (_DWORD *)RIMCmAddContactSuppressionReasons(a1, a2, 256LL);
        *(_DWORD *)(a2 + 2420) |= 0x8000u;
      }
    }
  }
  return result;
}
