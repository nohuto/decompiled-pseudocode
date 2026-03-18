/*
 * XREFs of PnpValidateMultiSzData @ 0x140145394
 * Callers:
 *     PnpValidateRegistryMultiSz @ 0x14016FA14 (PnpValidateRegistryMultiSz.c)
 *     PnpValidateRegistryValue @ 0x14029F6C4 (PnpValidateRegistryValue.c)
 *     PiDevCfgQueryObjectProperties @ 0x1406FEB14 (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x14071E970 (PiDevCfgResolveVariableDeviceProperty.c)
 *     PiDevCfgResolveMultiSzValue @ 0x14072D1A0 (PiDevCfgResolveMultiSzValue.c)
 *     PiDevCfgClearDeviceMigrationNode @ 0x140865B0C (PiDevCfgClearDeviceMigrationNode.c)
 *     PiDevCfgQueryDeviceMigrationNode @ 0x140867B68 (PiDevCfgQueryDeviceMigrationNode.c)
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
