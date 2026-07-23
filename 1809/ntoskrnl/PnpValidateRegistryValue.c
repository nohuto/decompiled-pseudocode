/*
 * XREFs of PnpValidateRegistryValue @ 0x140289928
 * Callers:
 *     PiDevCfgResolveVariableConstant @ 0x1408300C0 (PiDevCfgResolveVariableConstant.c)
 *     PiDevCfgResolveVariableKeyCopy @ 0x1408319A0 (PiDevCfgResolveVariableKeyCopy.c)
 *     PiDevCfgResolveVariableKeyValue @ 0x140832250 (PiDevCfgResolveVariableKeyValue.c)
 * Callees:
 *     PnpValidateMultiSzData @ 0x14015DA84 (PnpValidateMultiSzData.c)
 */

char __fastcall PnpValidateRegistryValue(_DWORD *a1)
{
  unsigned int v1; // eax
  char v2; // r8
  unsigned int v3; // eax

  v1 = a1[1];
  v2 = 0;
  if ( !v1 )
    return 1;
  if ( v1 <= 2 )
  {
    v3 = a1[3];
    if ( v3 < 2 || *(_WORD *)((char *)a1 + 2 * ((unsigned __int64)v3 >> 1) + (unsigned int)a1[2] - 2) )
      return v2;
    return 1;
  }
  if ( v1 == 4 )
    return a1[3] == 4;
  if ( v1 == 7 )
    return PnpValidateMultiSzData((_DWORD *)((char *)a1 + (unsigned int)a1[2]), a1[3]);
  if ( v1 != 0x8000 && v1 != -1 )
    return 1;
  return v2;
}
