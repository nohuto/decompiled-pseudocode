/*
 * XREFs of ?xxxMS_FlushWigglies@@YAXXZ @ 0x1C01FE088
 * Callers:
 *     xxxDrawDragRectEx @ 0x1C02006D0 (xxxDrawDragRectEx.c)
 *     xxxInitializeMoveSizeData @ 0x1C0200FD8 (xxxInitializeMoveSizeData.c)
 * Callees:
 *     xxxInternalGetMessage @ 0x1C000DC44 (xxxInternalGetMessage.c)
 *     WPP_RECORDER_SF_ @ 0x1C002D084 (WPP_RECORDER_SF_.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

void xxxMS_FlushWigglies(void)
{
  int v0; // edx
  int v1; // ecx
  _BYTE v2[48]; // [rsp+30h] [rbp-38h] BYREF

  memset(v2, 0, sizeof(v2));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v0) = 4;
    WPP_RECORDER_SF_(v1, v0, 1, 15, (__int64)&WPP_c0d2aea0028b3d709fe1f4aa428b688d_Traceguids);
  }
  while ( (unsigned int)xxxInternalGetMessage((int)v2, 0, 512, 512, 3, 0) )
    ;
}
