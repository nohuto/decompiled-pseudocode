/*
 * XREFs of HvlpRegisterPowerPolicyCallbacks @ 0x140277500
 * Callers:
 *     HvlPhase2Initialize @ 0x140193444 (HvlPhase2Initialize.c)
 * Callees:
 *     PoRegisterPowerSettingCallback @ 0x14058AEE0 (PoRegisterPowerSettingCallback.c)
 */

NTSTATUS HvlpRegisterPowerPolicyCallbacks()
{
  NTSTATUS result; // eax
  GUID **v1; // rbx
  __int64 v2; // rdi
  GUID **v3; // rbx
  __int64 v4; // rdi

  result = HvlpEnlightenments;
  if ( (HvlpEnlightenments & 8) != 0 )
  {
    v1 = &HvlpLegacyPowerSettingList;
    v2 = 15LL;
    do
    {
      result = PoRegisterPowerSettingCallback(
                 0LL,
                 *v1,
                 (PPOWER_SETTING_CALLBACK)HvlpLegacyPowerPolicySettingCallback,
                 (PVOID)*((int *)v1 + 2),
                 0LL);
      v1 += 2;
      --v2;
    }
    while ( v2 );
  }
  if ( (HvlpEnlightenments & 0x408) != 0 )
  {
    v3 = &HvlpPowerSettingList;
    v4 = 5LL;
    do
    {
      result = PoRegisterPowerSettingCallback(
                 0LL,
                 *v3,
                 (PPOWER_SETTING_CALLBACK)HvlpPowerPolicySettingCallback,
                 (PVOID)*((int *)v3 + 2),
                 0LL);
      v3 += 2;
      --v4;
    }
    while ( v4 );
  }
  return result;
}
