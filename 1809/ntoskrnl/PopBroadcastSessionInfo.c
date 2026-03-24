/*
 * XREFs of PopBroadcastSessionInfo @ 0x14072985C
 * Callers:
 *     PopPowerSourceChangeCallback @ 0x14017DD00 (PopPowerSourceChangeCallback.c)
 *     PopWin32kPowerSettingCallback @ 0x14017DFC0 (PopWin32kPowerSettingCallback.c)
 *     PopPowerInformationInternal @ 0x14058DF30 (PopPowerInformationInternal.c)
 *     PopLidSwitchChangeCallback @ 0x140868E50 (PopLidSwitchChangeCallback.c)
 *     PopSetAwayModeStatus @ 0x14086C058 (PopSetAwayModeStatus.c)
 *     PopEvaluateInputSuppressionAction @ 0x14086DCBC (PopEvaluateInputSuppressionAction.c)
 *     PopSetWin32kInputTimeout @ 0x140879198 (PopSetWin32kInputTimeout.c)
 * Callees:
 *     PopInvokeWin32Callout @ 0x1405B0C84 (PopInvokeWin32Callout.c)
 */

__int64 __fastcall PopBroadcastSessionInfo(int a1, int a2, __int64 a3)
{
  __int64 result; // rax
  int v4; // [rsp+20h] [rbp-38h] BYREF
  char v5; // [rsp+24h] [rbp-34h]
  int v6; // [rsp+28h] [rbp-30h]
  __int64 v7; // [rsp+30h] [rbp-28h]
  int v8; // [rsp+38h] [rbp-20h]
  __int64 v9; // [rsp+40h] [rbp-18h]

  result = 0LL;
  if ( PsWin32CalloutsEstablished )
  {
    v4 = a1;
    v6 = a2;
    v7 = a3;
    v5 = 0;
    v8 = 0;
    v9 = 0LL;
    return PopInvokeWin32Callout(5u, (__int64)&v4, 2u, 0LL);
  }
  return result;
}
