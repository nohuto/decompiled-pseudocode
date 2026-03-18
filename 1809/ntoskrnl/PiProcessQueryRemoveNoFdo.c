/*
 * XREFs of PiProcessQueryRemoveNoFdo @ 0x140840338
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x1406EF7B0 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     PipSetDevNodeProblem @ 0x1406EF580 (PipSetDevNodeProblem.c)
 *     PiGetTargetDeviceNode @ 0x1406F00F4 (PiGetTargetDeviceNode.c)
 *     PipClearDevNodeProblem @ 0x1406F6CF8 (PipClearDevNodeProblem.c)
 *     PnpRestartDeviceNode @ 0x14075FE8C (PnpRestartDeviceNode.c)
 *     PipIsProblemReadonly @ 0x14075FF70 (PipIsProblemReadonly.c)
 */

__int64 __fastcall PiProcessQueryRemoveNoFdo(__int64 a1)
{
  _DWORD *TargetDeviceNode; // rdi
  unsigned int v3; // ebx
  int v4; // r9d
  __int64 v5; // rcx
  int v6; // eax

  TargetDeviceNode = (_DWORD *)PiGetTargetDeviceNode(a1);
  v3 = 0;
  if ( ((TargetDeviceNode[75] - 770) & 0xFFFFFFEF) == 0 )
  {
    v4 = TargetDeviceNode[99];
    if ( (v4 & 0x6000) != 0 && !(unsigned int)PipIsProblemReadonly((__int64)TargetDeviceNode, TargetDeviceNode[101]) )
    {
      PipClearDevNodeProblem(v5);
      v4 = TargetDeviceNode[99];
    }
    v6 = *(_DWORD *)(a1 + 144) & 2;
    if ( (v4 & 0x6000) != 0 )
    {
      if ( !v6 )
        return (unsigned int)-1073741811;
    }
    else if ( v6 )
    {
      PipSetDevNodeProblem((__int64)TargetDeviceNode, *(_DWORD *)(a1 + 16), 0);
    }
    else
    {
      PnpRestartDeviceNode((__int64)TargetDeviceNode);
    }
  }
  return v3;
}
