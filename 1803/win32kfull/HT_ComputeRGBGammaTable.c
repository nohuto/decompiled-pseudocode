/*
 * XREFs of HT_ComputeRGBGammaTable @ 0x1C022EA30
 * Callers:
 *     <none>
 * Callees:
 *     DivFD6 @ 0x1C00D331C (DivFD6.c)
 *     RaisePower @ 0x1C0133408 (RaisePower.c)
 */

LONG __stdcall HT_ComputeRGBGammaTable(
        USHORT GammaTableEntries,
        USHORT GammaTableType,
        USHORT RedGamma,
        USHORT GreenGamma,
        USHORT BlueGamma,
        LPBYTE pGammaTable)
{
  LONG v10; // ebp
  int v11; // r13d
  __int64 v12; // r15
  int v13; // eax
  LPBYTE v14; // rsi
  LPBYTE v15; // rbx
  LPBYTE v16; // r14
  __int16 v17; // di
  int v18; // eax
  LONG result; // eax
  signed int v20; // [rsp+20h] [rbp-38h]
  signed int v21; // [rsp+24h] [rbp-34h]
  LONG v22; // [rsp+2Ch] [rbp-2Ch]
  int v23; // [rsp+60h] [rbp+8h]

  v22 = GammaTableEntries;
  v10 = GammaTableEntries;
  if ( (unsigned int)GammaTableEntries - 2 > 0xFE )
    return 0;
  v11 = 0;
  v12 = 1LL;
  v23 = DivFD6(1, (unsigned int)GammaTableEntries - 1);
  v13 = RedGamma;
  v14 = pGammaTable;
  v20 = 100 * v13;
  v21 = 100 * GreenGamma;
  if ( GammaTableType == 1 )
  {
    v15 = &pGammaTable[GammaTableEntries];
    v16 = &v15[GammaTableEntries];
  }
  else
  {
    v15 = pGammaTable + 1;
    v16 = pGammaTable + 2;
  }
  v17 = GammaTableEntries - 1;
  if ( v17 )
  {
    if ( GammaTableType != 1 )
      v12 = 3LL;
    do
    {
      *v14 = (char)(32 - RaisePower(v11, v20, 1)) / 64;
      *v15 = (char)(32 - RaisePower(v11, v21, 1)) / 64;
      v18 = RaisePower(v11, 100 * (unsigned int)BlueGamma, 1);
      v14 += v12;
      v15 += v12;
      v11 += v23;
      *v16 = (255 * v18 + 500000) / 1000000;
      v16 += v12;
      --v17;
    }
    while ( v17 );
    v10 = v22;
  }
  *v16 = -1;
  result = v10;
  *v15 = -1;
  *v14 = -1;
  return result;
}
