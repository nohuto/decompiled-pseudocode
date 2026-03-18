/*
 * XREFs of PopWnfSprActiveSessionChangeCallback @ 0x1407492D0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     PopReleasePolicyLock @ 0x140595868 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1405958A8 (PopAcquirePolicyLock.c)
 *     PopSetPowerSettingValueAcDc @ 0x14069D520 (PopSetPowerSettingValueAcDc.c)
 *     ExQueryWnfStateData @ 0x1406E9F80 (ExQueryWnfStateData.c)
 */

__int64 __fastcall PopWnfSprActiveSessionChangeCallback(__int64 a1)
{
  int v1; // ebx
  unsigned int v3; // [rsp+20h] [rbp-38h] BYREF
  int v4; // [rsp+28h] [rbp-30h] BYREF
  _QWORD v5[2]; // [rsp+30h] [rbp-28h] BYREF
  int v6; // [rsp+40h] [rbp-18h]

  v3 = 20;
  v5[0] = 0LL;
  v5[1] = 0LL;
  v6 = 0;
  v1 = ExQueryWnfStateData(a1, &v4, v5, &v3);
  if ( v1 >= 0 && v3 == 20 )
  {
    PopAcquirePolicyLock();
    PopSetPowerSettingValueAcDc(&GUID_SPR_ACTIVE_SESSION_CHANGE, 20LL, v5);
    PopReleasePolicyLock();
  }
  return (unsigned int)v1;
}
