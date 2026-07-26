/*
 * XREFs of ndisCalculateRssProcessorCount @ 0x1C002149C
 * Callers:
 *     NdisGetRssProcessorInformation @ 0x1C0021390 (NdisGetRssProcessorInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisCalculateRssProcessorCount(__int64 a1)
{
  unsigned __int8 v1; // al
  unsigned int v3; // r10d
  bool v4; // r11
  int *v5; // r8
  __int64 v6; // rbx
  int v7; // edx
  int v8; // ecx
  int v9; // edx

  v1 = *(_BYTE *)(a1 + 32);
  v3 = 0;
  v4 = v1 <= 6u && (v1 != 6 || *(_BYTE *)(a1 + 33) < 0x14u);
  if ( *((_DWORD *)&WPP_MAIN_CB.Queue.Wcb.1 + 5) )
  {
    v5 = (int *)ndisRssProcessors;
    v6 = *((unsigned int *)&WPP_MAIN_CB.Queue.Wcb.1 + 5);
    do
    {
      if ( !v4 || !*(_WORD *)v5 )
      {
        v7 = *(_DWORD *)(a1 + 4420);
        v8 = *v5;
        if ( (unsigned __int16)*v5 >= (unsigned __int16)v7
          && ((unsigned __int16)v8 > (unsigned __int16)v7 || BYTE2(v8) >= BYTE2(v7)) )
        {
          v9 = *(_DWORD *)(a1 + 4424);
          if ( (unsigned __int16)v9 >= (unsigned __int16)v8
            && ((unsigned __int16)v9 > (unsigned __int16)v8 || BYTE2(v9) >= BYTE2(v8)) )
          {
            ++v3;
          }
        }
      }
      ++v5;
      --v6;
    }
    while ( v6 );
  }
  return v3;
}
