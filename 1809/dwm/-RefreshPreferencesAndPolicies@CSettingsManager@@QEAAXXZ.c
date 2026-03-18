/*
 * XREFs of ?RefreshPreferencesAndPolicies@CSettingsManager@@QEAAXXZ @ 0x1400021E0
 * Callers:
 *     ?Initialize@CDwmAppHost@@QEAAJPEAUHINSTANCE__@@@Z @ 0x140001E20 (-Initialize@CDwmAppHost@@QEAAJPEAUHINSTANCE__@@@Z.c)
 *     ?PropagateUserLogon@CSettingsManager@@QEAAXPEAUHKEY__@@0_N@Z @ 0x140002140 (-PropagateUserLogon@CSettingsManager@@QEAAXPEAUHKEY__@@0_N@Z.c)
 * Callees:
 *     ?ReadRegistryBitfields@CSettingsManager@@AEAAXW4DwmSettingType@@PEAUBitfieldRegistrySetting@@IPEAK@Z @ 0x1400022D0 (-ReadRegistryBitfields@CSettingsManager@@AEAAXW4DwmSettingType@@PEAUBitfieldRegistrySetting@@IPE.c)
 *     __security_check_cookie @ 0x140002E30 (__security_check_cookie.c)
 */

void __fastcall CSettingsManager::RefreshPreferencesAndPolicies(CSettingsManager *this)
{
  const wchar_t *v2; // [rsp+30h] [rbp-78h] BYREF
  int v3; // [rsp+38h] [rbp-70h]
  int v4; // [rsp+3Ch] [rbp-6Ch]
  const wchar_t *v5; // [rsp+40h] [rbp-68h]
  __int64 v6; // [rsp+48h] [rbp-60h]
  const wchar_t *v7; // [rsp+50h] [rbp-58h]
  __int64 v8; // [rsp+58h] [rbp-50h]
  _QWORD v9[6]; // [rsp+60h] [rbp-48h] BYREF

  v9[1] = 1LL;
  v2 = L"UseDPIScaling";
  v3 = 1;
  v4 = 1;
  v5 = L"AnimationsShiftKey";
  v6 = 2LL;
  v7 = L"DisableLockingMemory";
  v9[0] = L"DisallowAnimations";
  v9[2] = L"DisallowColorizationColorChanges";
  v9[4] = L"DefaultColorizationColorState";
  v8 = 64LL;
  v9[3] = 2LL;
  v9[5] = 4LL;
  CSettingsManager::ReadRegistryBitfields(this, 0LL, &v2);
  CSettingsManager::ReadRegistryBitfields(this, 1LL, v9);
}
