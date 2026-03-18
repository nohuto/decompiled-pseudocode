/*
 * XREFs of RIMIsEssentialUsage @ 0x1C00ED218
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C00EA954 (RIMCreatePointerDeviceInfo.c)
 *     RIMPopulatePointerDevice @ 0x1C00EFEF4 (RIMPopulatePointerDevice.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall RIMIsEssentialUsage(unsigned __int16 a1)
{
  unsigned int v1; // ebx
  bool v2; // cc

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
          v2 = a1 <= 0x5D49u;
LABEL_19:
          if ( !v2 )
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
          v2 = a1 <= 0x4131u;
          goto LABEL_19;
        }
      }
    }
  }
LABEL_20:
  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x14u,
    0x24u,
    (__int64)&WPP_d24afaddbe1632fa9c89c4aae49a04f3_Traceguids);
  return v1;
}
