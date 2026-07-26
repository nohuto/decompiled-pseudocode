/*
 * XREFs of ndisCalculateRssProcessorCount @ 0x1C003461C
 * Callers:
 *     NdisGetRssProcessorInformation @ 0x1C0034510 (NdisGetRssProcessorInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisCalculateRssProcessorCount(__int64 a1)
{
  unsigned __int8 v1; // al
  unsigned int v3; // r10d
  bool v4; // r11
  int *v5; // r9
  __int64 DeviceContext_high; // rbx
  int v7; // eax
  int v8; // ecx
  int v9; // edx

  v1 = *(_BYTE *)(a1 + 32);
  v3 = 0;
  v4 = v1 <= 6u && (v1 != 6 || *(_BYTE *)(a1 + 33) < 0x14u);
  if ( HIDWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) )
  {
    v5 = (int *)ndisRssProcessors;
    DeviceContext_high = HIDWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext);
    do
    {
      if ( !v4 || !*(_WORD *)v5 )
      {
        v7 = *(_DWORD *)(a1 + 4380);
        v8 = *v5;
        if ( (unsigned __int16)*v5 >= (unsigned __int16)v7
          && ((unsigned __int16)v8 > (unsigned __int16)v7 || BYTE2(v8) >= BYTE2(v7)) )
        {
          v9 = *(_DWORD *)(a1 + 4384);
          if ( (unsigned __int16)v9 >= (unsigned __int16)v8
            && ((unsigned __int16)v9 > (unsigned __int16)v8 || BYTE2(v9) >= BYTE2(v8)) )
          {
            ++v3;
          }
        }
      }
      ++v5;
      --DeviceContext_high;
    }
    while ( DeviceContext_high );
  }
  return v3;
}
