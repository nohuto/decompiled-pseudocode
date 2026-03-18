/*
 * XREFs of ?SetPreference@CSettingsManager@@UEAAXK@Z @ 0x140001680
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CSettingsManager::SetPreference(CSettingsManager *this, int a2)
{
  *((_DWORD *)this + 14) |= a2;
}
