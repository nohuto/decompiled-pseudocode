/*
 * XREFs of ndisIovNicSwitchWithoutIovSupported @ 0x1C0016F10
 * Callers:
 *     ndisIovGetNicSwitchList @ 0x1C0014154 (ndisIovGetNicSwitchList.c)
 *     ndisIndicateInitialStateToBinding @ 0x1C00188F4 (ndisIndicateInitialStateToBinding.c)
 *     ndisOidPreRcvFilterMoveFilter @ 0x1C003C460 (ndisOidPreRcvFilterMoveFilter.c)
 *     ndisSetReceiveFilter @ 0x1C003CA90 (ndisSetReceiveFilter.c)
 *     ndisOidPostIovCreateNicSwitch @ 0x1C0070860 (ndisOidPostIovCreateNicSwitch.c)
 *     ndisOidPostIovDeleteNicSwitch @ 0x1C0070BF0 (ndisOidPostIovDeleteNicSwitch.c)
 *     ndisOidPreIovEnumNicSwitches @ 0x1C0071140 (ndisOidPreIovEnumNicSwitches.c)
 *     ndisOidPreIovEnumVPorts @ 0x1C0071650 (ndisOidPreIovEnumVPorts.c)
 *     ndisIovCreateDefaultNicSwitch @ 0x1C00BDD6C (ndisIovCreateDefaultNicSwitch.c)
 *     ndisOidPreIovCreateNicSwitch @ 0x1C00F9870 (ndisOidPreIovCreateNicSwitch.c)
 *     ndisOidPreIovCreateVPort @ 0x1C00F9A20 (ndisOidPreIovCreateVPort.c)
 *     ndisOidPreIovDeleteNicSwitch @ 0x1C00F9B20 (ndisOidPreIovDeleteNicSwitch.c)
 *     ndisOidPreIovDeleteVPort @ 0x1C00F9C80 (ndisOidPreIovDeleteVPort.c)
 *     ndisOidPreIovNicSwitchParameters @ 0x1C00FA0B0 (ndisOidPreIovNicSwitchParameters.c)
 *     ndisOidPreIovVPortParameters @ 0x1C00FAB60 (ndisOidPreIovVPortParameters.c)
 * Callees:
 *     <none>
 */

char __fastcall ndisIovNicSwitchWithoutIovSupported(__int64 a1)
{
  unsigned __int8 v1; // al
  char v2; // dl
  __int64 v4; // rax

  v1 = *(_BYTE *)(a1 + 32);
  v2 = 0;
  if ( v1 > 6u || v1 == 6 && *(_BYTE *)(a1 + 33) >= 0x32u )
  {
    v4 = *(_QWORD *)(a1 + 3592);
    if ( v4 && (*(_DWORD *)(v4 + 32) & 0x40) != 0 )
      return 1;
  }
  return v2;
}
