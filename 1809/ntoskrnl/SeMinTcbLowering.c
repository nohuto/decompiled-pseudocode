/*
 * XREFs of SeMinTcbLowering @ 0x1409DF1A8
 * Callers:
 *     sub_14098FE9C @ 0x14098FE9C (sub_14098FE9C.c)
 * Callees:
 *     <none>
 */

_BOOL8 SeMinTcbLowering()
{
  return (SeCiDebugOptions & 4) != 0 || !KdpBootedNodebug && (SeCiDebugOptions & 2) != 0;
}
