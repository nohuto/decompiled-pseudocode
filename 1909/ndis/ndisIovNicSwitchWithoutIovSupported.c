/*
 * XREFs of ndisIovNicSwitchWithoutIovSupported @ 0x1C0032B4C
 * Callers:
 *     ndisIovGetNicSwitchList @ 0x1C001E4F8 (ndisIovGetNicSwitchList.c)
 *     ndisIndicateInitialStateToBinding @ 0x1C0028904 (ndisIndicateInitialStateToBinding.c)
 *     ndisIovCreateDefaultNicSwitch @ 0x1C00329C4 (ndisIovCreateDefaultNicSwitch.c)
 *     ndisOidPreRcvFilterMoveFilter @ 0x1C0060750 (ndisOidPreRcvFilterMoveFilter.c)
 *     ndisSetReceiveFilter @ 0x1C0060FB8 (ndisSetReceiveFilter.c)
 *     ndisOidPostIovCreateNicSwitch @ 0x1C00B2200 (ndisOidPostIovCreateNicSwitch.c)
 *     ndisOidPostIovDeleteNicSwitch @ 0x1C00B25F0 (ndisOidPostIovDeleteNicSwitch.c)
 *     ndisOidPreIovCreateNicSwitch @ 0x1C00B2FC0 (ndisOidPreIovCreateNicSwitch.c)
 *     ndisOidPreIovCreateVPort @ 0x1C00B31D0 (ndisOidPreIovCreateVPort.c)
 *     ndisOidPreIovDeleteNicSwitch @ 0x1C00B3320 (ndisOidPreIovDeleteNicSwitch.c)
 *     ndisOidPreIovDeleteVPort @ 0x1C00B34E0 (ndisOidPreIovDeleteVPort.c)
 *     ndisOidPreIovEnumNicSwitches @ 0x1C00B3680 (ndisOidPreIovEnumNicSwitches.c)
 *     ndisOidPreIovEnumVPorts @ 0x1C00B3BF0 (ndisOidPreIovEnumVPorts.c)
 *     ndisOidPreIovNicSwitchParameters @ 0x1C00B43C0 (ndisOidPreIovNicSwitchParameters.c)
 *     ndisOidPreIovVPortParameters @ 0x1C00B5080 (ndisOidPreIovVPortParameters.c)
 * Callees:
 *     <none>
 */

char __fastcall ndisIovNicSwitchWithoutIovSupported(__int64 a1)
{
  unsigned __int8 v1; // al
  char v2; // dl
  __int64 v3; // rax

  v1 = *(_BYTE *)(a1 + 32);
  v2 = 0;
  if ( v1 > 6u || v1 == 6 && *(_BYTE *)(a1 + 33) >= 0x32u )
  {
    v3 = *(_QWORD *)(a1 + 3568);
    if ( v3 && (*(_DWORD *)(v3 + 32) & 0x40) != 0 )
      return 1;
  }
  return v2;
}
