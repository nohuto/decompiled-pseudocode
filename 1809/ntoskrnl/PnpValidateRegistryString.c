/*
 * XREFs of PnpValidateRegistryString @ 0x14015DA4C
 * Callers:
 *     PiDevCfgResolveVariable @ 0x1406F469C (PiDevCfgResolveVariable.c)
 *     PiDevCfgBuildIndirectString @ 0x1406F69F4 (PiDevCfgBuildIndirectString.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x1406F8050 (PiDevCfgResolveVariableDeviceProperty.c)
 *     PiDevCfgQueryPolicyStringList @ 0x14082F73C (PiDevCfgQueryPolicyStringList.c)
 *     PiDevCfgResolveVariableFormatString @ 0x140831360 (PiDevCfgResolveVariableFormatString.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x140831A80 (PiDevCfgResolveVariableKeyHandle.c)
 *     PiDevCfgResolveVariableKeyValue @ 0x140832250 (PiDevCfgResolveVariableKeyValue.c)
 *     PiDevCfgResolveVariableSwitchCase @ 0x140832430 (PiDevCfgResolveVariableSwitchCase.c)
 * Callees:
 *     <none>
 */

char __fastcall PnpValidateRegistryString(_DWORD *a1)
{
  char v1; // r8
  unsigned int v2; // eax

  v1 = 1;
  if ( a1[1] != 1 )
    return 0;
  v2 = a1[3];
  if ( v2 < 2 || *(_WORD *)((char *)a1 + 2 * ((unsigned __int64)v2 >> 1) + (unsigned int)a1[2] - 2) )
    return 0;
  return v1;
}
