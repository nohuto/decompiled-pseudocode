/*
 * XREFs of PnpValidateRegistryString @ 0x140144CBC
 * Callers:
 *     PiDevCfgBuildIndirectString @ 0x1406FC8B8 (PiDevCfgBuildIndirectString.c)
 *     PiDevCfgResolveVariable @ 0x1406FDE58 (PiDevCfgResolveVariable.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x14071CAE0 (PiDevCfgResolveVariableDeviceProperty.c)
 *     PiDevCfgQueryPolicyStringList @ 0x140868D8C (PiDevCfgQueryPolicyStringList.c)
 *     PiDevCfgResolveVariableFormatString @ 0x14086AAE0 (PiDevCfgResolveVariableFormatString.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x14086B200 (PiDevCfgResolveVariableKeyHandle.c)
 *     PiDevCfgResolveVariableKeyValue @ 0x14086B9D0 (PiDevCfgResolveVariableKeyValue.c)
 *     PiDevCfgResolveVariableSwitchCase @ 0x14086BBB0 (PiDevCfgResolveVariableSwitchCase.c)
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
