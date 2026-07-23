/*
 * XREFs of HvlpPowerPolicySettingCallback @ 0x1402774B0
 * Callers:
 *     <none>
 * Callees:
 *     HvlpSetPowerProperty @ 0x140277594 (HvlpSetPowerProperty.c)
 */

__int64 __fastcall HvlpPowerPolicySettingCallback(LPCGUID SettingGuid, _DWORD *Value, ULONG ValueLength, PVOID Context)
{
  __int64 v5; // [rsp+20h] [rbp-1A8h]
  int v6; // [rsp+28h] [rbp-1A0h] BYREF
  __int64 v7; // [rsp+30h] [rbp-198h]

  if ( ValueLength != 4 || !Value )
    return 3221225485LL;
  HIDWORD(v5) = *Value;
  LODWORD(v5) = (_DWORD)Context;
  v7 = v5;
  v6 = 5;
  return HvlpSetPowerProperty(&v6);
}
