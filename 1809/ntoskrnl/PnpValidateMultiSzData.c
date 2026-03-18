/*
 * XREFs of PnpValidateMultiSzData @ 0x14015D964
 * Callers:
 *     PnpValidateRegistryMultiSz @ 0x1401698F8 (PnpValidateRegistryMultiSz.c)
 *     PnpValidateRegistryValue @ 0x140289638 (PnpValidateRegistryValue.c)
 *     PiDevCfgQueryObjectProperties @ 0x1406F6260 (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x1406F6DD0 (PiDevCfgResolveVariableDeviceProperty.c)
 *     PiDevCfgResolveMultiSzValue @ 0x140705840 (PiDevCfgResolveMultiSzValue.c)
 *     PiDevCfgClearDeviceMigrationNode @ 0x14082BC10 (PiDevCfgClearDeviceMigrationNode.c)
 *     PiDevCfgQueryDeviceMigrationNode @ 0x14082DC0C (PiDevCfgQueryDeviceMigrationNode.c)
 * Callees:
 *     <none>
 */

char __fastcall PnpValidateMultiSzData(_WORD *a1, unsigned int a2)
{
  char result; // al
  unsigned __int64 v3; // r8

  result = 0;
  if ( a2 >= 4 )
  {
    v3 = (unsigned __int64)a2 >> 1;
    if ( !a1[v3 - 1] && !a1[v3 - 2] )
      return 1;
  }
  if ( a2 == 2 && !*a1 )
    return 1;
  return result;
}
