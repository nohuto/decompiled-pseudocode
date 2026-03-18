/*
 * XREFs of ?xxxMS_FlushWigglies@@YAXXZ @ 0x1C01E89B0
 * Callers:
 *     xxxDrawDragRectEx @ 0x1C01EAC18 (xxxDrawDragRectEx.c)
 *     xxxInitializeMoveSizeData @ 0x1C01EB504 (xxxInitializeMoveSizeData.c)
 * Callees:
 *     xxxInternalGetMessage @ 0x1C00BC3F0 (xxxInternalGetMessage.c)
 *     memset @ 0x1C0163640 (memset.c)
 */

void xxxMS_FlushWigglies(void)
{
  _BYTE v0[56]; // [rsp+30h] [rbp-38h] BYREF

  memset(v0, 0, 0x30uLL);
  while ( (unsigned int)xxxInternalGetMessage((__int64)v0, 0LL, 0x200u, 0x200u, 3, 0) )
    ;
}
