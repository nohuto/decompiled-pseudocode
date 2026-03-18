/*
 * XREFs of RaisePower @ 0x1C0133408
 * Callers:
 *     ComputeRGBLUTAA @ 0x1C00D12C0 (ComputeRGBLUTAA.c)
 *     pDCIAdjClr @ 0x1C00D2880 (pDCIAdjClr.c)
 *     AdjustSrcDevGamma @ 0x1C00D3114 (AdjustSrcDevGamma.c)
 *     HT_CreateDeviceHalftoneInfo @ 0x1C00D3F58 (HT_CreateDeviceHalftoneInfo.c)
 *     BuildExpandAAInfo @ 0x1C0116CF0 (BuildExpandAAInfo.c)
 *     HT_ComputeRGBGammaTable @ 0x1C022EA30 (HT_ComputeRGBGammaTable.c)
 *     ComputeBGRMappingTable @ 0x1C022F1B4 (ComputeBGRMappingTable.c)
 * Callees:
 *     MulFD6 @ 0x1C00D17C8 (MulFD6.c)
 *     DivFD6 @ 0x1C00D331C (DivFD6.c)
 *     AntiLog @ 0x1C0133528 (AntiLog.c)
 *     Log @ 0x1C0133680 (Log.c)
 *     FD6DivL @ 0x1C0133720 (FD6DivL.c)
 */

__int64 __fastcall RaisePower(int a1, signed int a2, char a3)
{
  char v3; // di
  unsigned int v4; // ebx
  unsigned int v6; // r9d
  BOOL v7; // esi
  __int64 v8; // rcx
  bool v9; // cc
  __int16 v10; // cx
  BOOL v11; // edi
  unsigned int v12; // eax
  unsigned int v13; // r9d
  __int64 result; // rax

  v3 = a3;
  v4 = a2;
  v6 = 1000000;
  if ( (a3 & 2) != 0 )
  {
    if ( a2 != 1 )
      goto LABEL_3;
    return (unsigned int)a1;
  }
  if ( a2 == 1000000 )
    return (unsigned int)a1;
  if ( a2 == 1000000 * (a2 / 1000000) )
  {
    v4 = a2 / 1000000;
    v3 = a3 | 2;
  }
LABEL_3:
  v7 = a1 <= 0;
  v8 = (unsigned int)-a1;
  v9 = a1 <= 0;
  if ( a1 <= 0 )
  {
    if ( !(_DWORD)v8 )
      return 0LL;
    v9 = a1 <= 0;
  }
  if ( !v9 )
    v8 = (unsigned int)a1;
  if ( v4 )
  {
    if ( (_DWORD)v8 != 10000000 )
      v6 = Log(v8);
    v10 = v3 & 1;
    if ( (v3 & 2) != 0 )
    {
      v11 = (v4 & 1) != 0 && v7;
      if ( !v10 )
      {
        v13 = v4 * v6;
LABEL_13:
        result = AntiLog(v13);
        if ( v11 )
          return (unsigned int)-(int)result;
        return result;
      }
      v12 = FD6DivL(v6, v4);
    }
    else
    {
      if ( (v3 & 1) != 0 )
        v12 = DivFD6(v6, v4);
      else
        v12 = MulFD6(v6, v4);
      v11 = v7;
    }
    v13 = v12;
    goto LABEL_13;
  }
  result = 4293967296LL;
  if ( a1 > 0 )
    return 1000000LL;
  return result;
}
