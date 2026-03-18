/*
 * XREFs of PnpValidateRegistryMultiSz @ 0x14016FA14
 * Callers:
 *     PiDevCfgResolveMultiSzValue @ 0x14072D1A0 (PiDevCfgResolveMultiSzValue.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x140867F88 (PiDevCfgQueryIncludedDriverNode.c)
 *     PiDevCfgResolveVariableExpression @ 0x140868F00 (PiDevCfgResolveVariableExpression.c)
 *     PiDevCfgResolveVariableFormatString @ 0x14086A1E0 (PiDevCfgResolveVariableFormatString.c)
 * Callees:
 *     PnpValidateMultiSzData @ 0x140145394 (PnpValidateMultiSzData.c)
 */

char __fastcall PnpValidateRegistryMultiSz(_DWORD *a1)
{
  char v1; // r9
  char v2; // al

  v1 = 0;
  if ( a1[1] == 7 )
  {
    v2 = PnpValidateMultiSzData((_DWORD *)((char *)a1 + (unsigned int)a1[2]), a1[3]);
    if ( v2 != v1 )
      return 1;
  }
  return v1;
}
