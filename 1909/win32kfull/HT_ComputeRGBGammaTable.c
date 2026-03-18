/*
 * XREFs of HT_ComputeRGBGammaTable @ 0x1C025D1B0
 * Callers:
 *     <none>
 * Callees:
 *     DivFD6 @ 0x1C00C43C4 (DivFD6.c)
 *     RaisePower @ 0x1C00C4610 (RaisePower.c)
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
  int v11; // r12d
  __int64 v12; // r15
  int v13; // r13d
  int v14; // eax
  LPBYTE v15; // rsi
  LPBYTE v16; // rbx
  LPBYTE v17; // r14
  __int16 v18; // di
  signed int v19; // ebp
  int v20; // eax
  LONG result; // eax
  signed int v22; // [rsp+20h] [rbp-38h]
  LONG v23; // [rsp+28h] [rbp-30h]

  v23 = GammaTableEntries;
  v10 = GammaTableEntries;
  if ( (unsigned int)GammaTableEntries - 2 > 0xFE )
    return 0;
  v11 = 0;
  v12 = 1LL;
  v13 = DivFD6(1, (unsigned int)GammaTableEntries - 1);
  v14 = RedGamma;
  v15 = pGammaTable;
  v22 = 100 * GreenGamma;
  if ( GammaTableType == 1 )
  {
    v16 = &pGammaTable[GammaTableEntries];
    v17 = &v16[GammaTableEntries];
  }
  else
  {
    v16 = pGammaTable + 1;
    v12 = 3LL;
    v17 = pGammaTable + 2;
  }
  v18 = GammaTableEntries - 1;
  if ( v18 )
  {
    v19 = 100 * v14;
    do
    {
      *v15 = (char)(32 - RaisePower(v11, v19, 1)) / 64;
      *v16 = (char)(32 - RaisePower(v11, v22, 1)) / 64;
      v20 = RaisePower(v11, 100 * (unsigned int)BlueGamma, 1);
      v15 += v12;
      v16 += v12;
      v11 += v13;
      *v17 = (255 * v20 + 500000) / 1000000;
      v17 += v12;
      --v18;
    }
    while ( v18 );
    v10 = v23;
  }
  *v17 = -1;
  result = v10;
  *v16 = -1;
  *v15 = -1;
  return result;
}
