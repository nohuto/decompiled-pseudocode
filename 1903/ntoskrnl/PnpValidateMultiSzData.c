/*
 * XREFs of PnpValidateMultiSzData @ 0x140144CF4
 * Callers:
 *     PnpValidateRegistryMultiSz @ 0x14016F324 (PnpValidateRegistryMultiSz.c)
 *     PnpValidateRegistryValue @ 0x14029F964 (PnpValidateRegistryValue.c)
 *     PiDevCfgQueryObjectProperties @ 0x1406FCD34 (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x14071CAE0 (PiDevCfgResolveVariableDeviceProperty.c)
 *     PiDevCfgResolveMultiSzValue @ 0x14072B300 (PiDevCfgResolveMultiSzValue.c)
 *     PiDevCfgClearDeviceMigrationNode @ 0x14086640C (PiDevCfgClearDeviceMigrationNode.c)
 *     PiDevCfgQueryDeviceMigrationNode @ 0x140868468 (PiDevCfgQueryDeviceMigrationNode.c)
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
