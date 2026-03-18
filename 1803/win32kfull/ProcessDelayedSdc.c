/*
 * XREFs of ProcessDelayedSdc @ 0x1C0138950
 * Callers:
 *     PowerOnGdi @ 0x1C0138810 (PowerOnGdi.c)
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall ProcessDelayedSdc(__int64 a1)
{
  __int64 result; // rax

  if ( gulDelayedSwitchAction && !gProtocolType )
    xxxUserSetDisplayConfig(0LL, 0LL, gulDelayedSwitchAction, 0LL, grpdeskRitInput, 0, 0LL, 0LL, 0LL, a1);
  result = gulDelayedSwitchAction;
  gulDelayedSwitchAction = 0;
  return result;
}
