/*
 * XREFs of RaisePower @ 0x1C00126AC
 * Callers:
 *     pDCIAdjClr @ 0x1C00141A0 (pDCIAdjClr.c)
 *     ComputeRGBLUTAA @ 0x1C0014B24 (ComputeRGBLUTAA.c)
 *     AdjustSrcDevGamma @ 0x1C00151F8 (AdjustSrcDevGamma.c)
 *     BuildExpandAAInfo @ 0x1C00E64A0 (BuildExpandAAInfo.c)
 *     HT_CreateDeviceHalftoneInfo @ 0x1C0113328 (HT_CreateDeviceHalftoneInfo.c)
 *     HT_ComputeRGBGammaTable @ 0x1C0244A40 (HT_ComputeRGBGammaTable.c)
 *     ComputeBGRMappingTable @ 0x1C02451CC (ComputeBGRMappingTable.c)
 * Callees:
 *     FD6DivL @ 0x1C0012450 (FD6DivL.c)
 *     Log @ 0x1C0012490 (Log.c)
 *     AntiLog @ 0x1C0012568 (AntiLog.c)
 *     MulFD6 @ 0x1C00150C4 (MulFD6.c)
 *     DivFD6 @ 0x1C0015444 (DivFD6.c)
 */

__int64 __fastcall RaisePower(int a1, signed int a2, char a3)
{
  unsigned int v4; // ebx
  int v5; // r10d
  __int64 v6; // r8
  unsigned int v7; // r9d
  BOOL v8; // esi
  __int16 v9; // cx
  int v10; // eax
  BOOL v11; // edi
  int v12; // r9d
  __int64 result; // rax

  v4 = a2;
  v5 = a1;
  v6 = (unsigned int)a1;
  v7 = 1000000;
  if ( (a3 & 2) != 0 )
  {
    if ( a2 != 1 )
      goto LABEL_5;
    return (unsigned int)a1;
  }
  if ( a2 == 1000000 )
    return (unsigned int)a1;
  if ( a2 == 1000000 * (a2 / 1000000) )
  {
    v4 = a2 / 1000000;
    a3 |= 2u;
  }
LABEL_5:
  v8 = a1 <= 0;
  if ( a1 <= 0 )
  {
    v5 = -a1;
    if ( !a1 )
      return 0LL;
  }
  if ( v4 )
  {
    if ( v5 != 10000000 )
      v7 = Log(v5);
    v9 = a3 & 1;
    if ( (a3 & 2) != 0 )
    {
      v11 = (v4 & 1) != 0 && v8;
      if ( !v9 )
      {
        v12 = v4 * v7;
LABEL_14:
        result = AntiLog(v12);
        if ( v11 )
          return (unsigned int)-(int)result;
        return result;
      }
      v10 = FD6DivL(v7, v4);
    }
    else
    {
      if ( (a3 & 1) != 0 )
        v10 = DivFD6(v7, v4, v6);
      else
        v10 = MulFD6(v7, v4, v6);
      v11 = v8;
    }
    v12 = v10;
    goto LABEL_14;
  }
  result = 4293967296LL;
  if ( a1 > 0 )
    return 1000000LL;
  return result;
}
