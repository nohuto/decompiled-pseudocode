/*
 * XREFs of PpHotSwapGetDevnodeRemovalPolicy @ 0x1406ED86C
 * Callers:
 *     IoGetDeviceProperty @ 0x1405BFB40 (IoGetDeviceProperty.c)
 *     PiControlGetPropertyData @ 0x140671A60 (PiControlGetPropertyData.c)
 * Callees:
 *     PpDevNodeUnlockTree @ 0x14066FFEC (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x140670114 (PpDevNodeLockTree.c)
 *     PiHotSwapGetDetachableNode @ 0x14071D2A8 (PiHotSwapGetDetachableNode.c)
 */

void __fastcall PpHotSwapGetDevnodeRemovalPolicy(__int64 a1, char a2, unsigned int *a3)
{
  unsigned __int8 v6; // al
  unsigned int v7; // ebx
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF

  PpDevNodeLockTree(0);
  if ( a2 )
    v6 = *(_BYTE *)(a1 + 466);
  else
    v6 = *(_BYTE *)(a1 + 467);
  if ( v6 )
  {
    v7 = 3;
    if ( v6 > 3u )
    {
      if ( v6 != 5 )
        v7 = 2;
    }
    else
    {
      v7 = v6;
    }
  }
  else
  {
    PiHotSwapGetDetachableNode(a1, &v8);
    if ( v8 )
      v7 = (~*(_BYTE *)(v8 + 560) & 8 | 0x10u) >> 3;
    else
      v7 = 1;
  }
  PpDevNodeUnlockTree(0);
  *a3 = v7;
}
