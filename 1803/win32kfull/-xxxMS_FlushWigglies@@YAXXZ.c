/*
 * XREFs of ?xxxMS_FlushWigglies@@YAXXZ @ 0x1C01C3548
 * Callers:
 *     xxxDrawDragRectEx @ 0x1C01C6034 (xxxDrawDragRectEx.c)
 *     xxxInitializeMoveSizeData @ 0x1C01C7264 (xxxInitializeMoveSizeData.c)
 * Callees:
 *     xxxInternalGetMessage @ 0x1C000DD88 (xxxInternalGetMessage.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

void xxxMS_FlushWigglies(void)
{
  _BYTE v0[48]; // [rsp+30h] [rbp-38h] BYREF

  memset(v0, 0, sizeof(v0));
  while ( (unsigned int)xxxInternalGetMessage((int)v0, 0, 512, 512, 3, 0) )
    ;
}
