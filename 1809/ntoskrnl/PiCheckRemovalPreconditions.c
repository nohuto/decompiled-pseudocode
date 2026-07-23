/*
 * XREFs of PiCheckRemovalPreconditions @ 0x1406F09E8
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x1406F0A30 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     PiGetTargetDeviceNode @ 0x1406F1374 (PiGetTargetDeviceNode.c)
 *     PnpFinalizeVetoedRemove @ 0x1408341FC (PnpFinalizeVetoedRemove.c)
 */

__int64 __fastcall PiCheckRemovalPreconditions(__int64 a1, __int64 a2)
{
  __int64 TargetDeviceNode; // rax
  __int64 v3; // rcx
  __int64 v4; // r10
  int v5; // r11d
  __int64 v6; // r9
  __int64 result; // rax
  __int64 v8; // r8
  __int64 v9; // rdx

  TargetDeviceNode = PiGetTargetDeviceNode(a2);
  v6 = TargetDeviceNode;
  if ( (v5 & 0xFFFFFFFB) == 0 && (*(_DWORD *)(TargetDeviceNode + 396) & 0x1000) != 0 )
  {
    v8 = TargetDeviceNode + 40;
    v9 = 1LL;
LABEL_9:
    PnpFinalizeVetoedRemove(v3, v9, v8);
    return 2147483688LL;
  }
  result = 0LL;
  if ( !v5 && *(_DWORD *)(v4 + 16) == 22 && *(_DWORD *)(v6 + 600) )
  {
    v8 = v6 + 40;
    v9 = 10LL;
    goto LABEL_9;
  }
  return result;
}
