/*
 * XREFs of PopWnfSprActiveSessionChangeCallback @ 0x14071ED70
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     PopReleasePolicyLock @ 0x140565370 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140565690 (PopAcquirePolicyLock.c)
 *     PopSetPowerSettingValueAcDc @ 0x14058AA3C (PopSetPowerSettingValueAcDc.c)
 *     ExQueryWnfStateData @ 0x1406C82A0 (ExQueryWnfStateData.c)
 */

__int64 __fastcall PopWnfSprActiveSessionChangeCallback(__int64 a1)
{
  int v1; // ebx
  unsigned int v3; // [rsp+20h] [rbp-38h] BYREF
  int v4; // [rsp+28h] [rbp-30h] BYREF
  _BYTE v5[24]; // [rsp+30h] [rbp-28h] BYREF

  v3 = 20;
  v1 = ExQueryWnfStateData(a1, &v4, v5, &v3);
  if ( v1 >= 0 && v3 == 20 )
  {
    PopAcquirePolicyLock();
    PopSetPowerSettingValueAcDc(&GUID_SPR_ACTIVE_SESSION_CHANGE, 20LL, v5);
    PopReleasePolicyLock();
  }
  return (unsigned int)v1;
}
