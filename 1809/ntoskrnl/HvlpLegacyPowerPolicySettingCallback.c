/*
 * XREFs of HvlpLegacyPowerPolicySettingCallback @ 0x140277330
 * Callers:
 *     <none>
 * Callees:
 *     HvlpConfigureLegacyPowerPolicySetting @ 0x1402771EC (HvlpConfigureLegacyPowerPolicySetting.c)
 */

__int64 __fastcall HvlpLegacyPowerPolicySettingCallback(
        LPCGUID SettingGuid,
        _DWORD *Value,
        ULONG ValueLength,
        PVOID Context)
{
  __int64 v5; // [rsp+20h] [rbp-18h] BYREF

  if ( ValueLength != 4 || !Value )
    return 3221225485LL;
  HIDWORD(v5) = *Value;
  LODWORD(v5) = (_DWORD)Context;
  return HvlpConfigureLegacyPowerPolicySetting(&v5);
}
