/*
 * XREFs of PiProcessQueryRemoveNoFdo @ 0x14087BD6C
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x14072E630 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     PipClearDevNodeProblem @ 0x1406F8FDC (PipClearDevNodeProblem.c)
 *     PiGetTargetDeviceNode @ 0x14072EAEC (PiGetTargetDeviceNode.c)
 *     PipSetDevNodeProblem @ 0x140731754 (PipSetDevNodeProblem.c)
 *     PnpRestartDeviceNode @ 0x1408623E8 (PnpRestartDeviceNode.c)
 *     PipIsProblemReadonly @ 0x140862A84 (PipIsProblemReadonly.c)
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
