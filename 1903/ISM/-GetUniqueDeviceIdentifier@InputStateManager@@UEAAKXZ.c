/*
 * XREFs of ?GetUniqueDeviceIdentifier@InputStateManager@@UEAAKXZ @ 0x18000E8D0
 * Callers:
 *     ?GetUniqueDeviceIdentifier@InputStateManager@@W7EAAKXZ @ 0x1800387F0 (-GetUniqueDeviceIdentifier@InputStateManager@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InputStateManager::GetUniqueDeviceIdentifier(InputStateManager *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 40);
}
