/*
 * XREFs of RIMIsEssentialUsage @ 0x1C01185B0
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C0115410 (RIMCreatePointerDeviceInfo.c)
 *     RIMPopulatePointerDevice @ 0x1C011B37C (RIMPopulatePointerDevice.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall RIMIsEssentialUsage(unsigned __int16 a1)
{
  unsigned int v1; // ebx
  unsigned __int16 v2; // ax

  v1 = 0;
  if ( a1 > 0x4D30u )
  {
    if ( a1 == 19775 )
      return 1;
    if ( a1 > 0x4D47u )
    {
      if ( a1 <= 0x4D49u )
        return 1;
      if ( a1 > 0x512Fu )
      {
        if ( a1 <= 0x5131u || a1 == 23856 )
          return 1;
        if ( a1 > 0x5D47u )
        {
          v2 = 23881;
LABEL_19:
          if ( a1 > v2 )
            goto LABEL_20;
          return 1;
        }
      }
    }
  }
  else
  {
    if ( a1 == 19760 )
      return 1;
    if ( a1 >= 0x1130u )
    {
      if ( a1 <= 0x1131u || a1 == 7472 )
        return 1;
      if ( a1 > 0x1D3Cu )
      {
        if ( a1 <= 0x1D3Eu || a1 == 7489 )
          return 1;
        if ( a1 > 0x412Fu )
        {
          v2 = 16689;
          goto LABEL_19;
        }
      }
    }
  }
LABEL_20:
  WPP_RECORDER_SF_(gRimLog, 3u, 0x15u, 0x26u, (__int64)&WPP_8c8630714ce6380095b900d04faa9778_Traceguids);
  return v1;
}
