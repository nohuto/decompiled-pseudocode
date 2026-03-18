/*
 * XREFs of Log @ 0x1C0012490
 * Callers:
 *     RaisePower @ 0x1C00126AC (RaisePower.c)
 *     pDCIAdjClr @ 0x1C00141A0 (pDCIAdjClr.c)
 *     ComputeRGBLUTAA @ 0x1C0014B24 (ComputeRGBLUTAA.c)
 *     AdjustSrcDevGamma @ 0x1C00151F8 (AdjustSrcDevGamma.c)
 * Callees:
 *     FractionToMantissa @ 0x1C0012200 (FractionToMantissa.c)
 *     FD6DivL @ 0x1C0012450 (FD6DivL.c)
 */

__int64 __fastcall Log(int a1)
{
  int v1; // ebx
  int v2; // edx
  int v3; // edi
  int v4; // ecx
  int v6; // eax

  if ( a1 < 10000 )
  {
    if ( a1 < 100 )
    {
      if ( a1 < 10 )
      {
        if ( a1 <= 0 )
          return 4288967296LL;
        v1 = -6000000;
        a1 *= 100000000;
      }
      else
      {
        v1 = -5000000;
        a1 *= 10000000;
      }
    }
    else
    {
      v1 = -3000000;
      if ( a1 < 1000 )
        v1 = -4000000;
      v6 = 100000;
      if ( a1 < 1000 )
        v6 = 1000000;
      a1 *= v6;
    }
  }
  else if ( a1 >= 1000000 )
  {
    if ( a1 >= 10000000 )
    {
      if ( a1 < 100000000 )
      {
        v1 = 1000000;
        a1 *= 10;
      }
      else if ( a1 < 1000000000 )
      {
        v1 = 2000000;
      }
      else
      {
        if ( a1 >= 2147483642 )
          return 3331930LL;
        v1 = 3000000;
        a1 = FD6DivL(a1, 10);
      }
    }
    else
    {
      v1 = 0;
      a1 *= 100;
    }
  }
  else if ( a1 < 100000 )
  {
    v1 = -2000000;
    a1 *= 10000;
  }
  else
  {
    v1 = -1000000;
    a1 *= 1000;
  }
  v2 = a1 / 1000000;
  v3 = *(_DWORD *)&aHonormouseacce[2 * (a1 / 1000000) + 20];
  v4 = a1 % 1000000;
  if ( v4 )
    v3 += FractionToMantissa(v4, dword_1C02D0C60[v2]);
  return (unsigned int)(v3 + v1);
}
