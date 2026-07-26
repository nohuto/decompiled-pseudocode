/*
 * XREFs of ndisReadPMRegistry @ 0x1C002ABE0
 * Callers:
 *     ndisInitializeConfiguration @ 0x1C0105F58 (ndisInitializeConfiguration.c)
 * Callees:
 *     ndisReadPMAdminConfigState @ 0x1C002AD20 (ndisReadPMAdminConfigState.c)
 */

__int64 __fastcall ndisReadPMRegistry(NDIS_HANDLE ConfigurationHandle, __int64 a2)
{
  __int64 result; // rax
  unsigned int v5; // ecx

  *(_DWORD *)(a2 + 3912) ^= (*(_DWORD *)(a2 + 3912) ^ ndisReadPMAdminConfigState(ConfigurationHandle, &WakeOnPatternStr)) & 3;
  *(_DWORD *)(a2 + 3912) ^= (*(_DWORD *)(a2 + 3912) ^ (4
                                                     * ndisReadPMAdminConfigState(
                                                         ConfigurationHandle,
                                                         &WakeOnMagicPacketStr))) & 0xC;
  *(_DWORD *)(a2 + 3912) ^= (*(_DWORD *)(a2 + 3912) ^ (16
                                                     * ndisReadPMAdminConfigState(
                                                         ConfigurationHandle,
                                                         &DeviceSleepOnDisconnectStr))) & 0x30;
  *(_DWORD *)(a2 + 3912) ^= (*(_DWORD *)(a2 + 3912) ^ ((unsigned int)ndisReadPMAdminConfigState(
                                                                       ConfigurationHandle,
                                                                       &PMARPOffloadStr) << 6)) & 0xC0;
  *(_DWORD *)(a2 + 3912) ^= (*(_DWORD *)(a2 + 3912) ^ ((unsigned int)ndisReadPMAdminConfigState(
                                                                       ConfigurationHandle,
                                                                       &PMNSOffloadStr) << 8)) & 0x300;
  *(_DWORD *)(a2 + 3912) ^= (*(_DWORD *)(a2 + 3912) ^ ((unsigned int)ndisReadPMAdminConfigState(
                                                                       ConfigurationHandle,
                                                                       &PMWiFiRekeyOffloadStr) << 10)) & 0xC00;
  *(_DWORD *)(a2 + 3912) ^= (*(_DWORD *)(a2 + 3912) ^ ((unsigned int)ndisReadPMAdminConfigState(
                                                                       ConfigurationHandle,
                                                                       &SelectiveSuspendStr) << 12)) & 0x3000;
  result = (*(_DWORD *)(a2 + 3912) ^ ((unsigned int)ndisReadPMAdminConfigState(
                                                      ConfigurationHandle,
                                                      &NicAutoPowerSaverStr) << 14)) & 0xC000;
  *(_DWORD *)(a2 + 3912) ^= result;
  v5 = *(_DWORD *)(a2 + 3912);
  if ( (v5 & 0xC000) != 0 )
  {
    result = v5 ^ ((unsigned __int16)v5 ^ (unsigned __int16)(v5 >> 2)) & 0x3000;
    *(_DWORD *)(a2 + 3912) = result;
  }
  return result;
}
