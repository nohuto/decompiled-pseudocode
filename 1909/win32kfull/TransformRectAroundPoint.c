/*
 * XREFs of TransformRectAroundPoint @ 0x1C01E7554
 * Callers:
 *     GetNewMonitor @ 0x1C006B820 (GetNewMonitor.c)
 *     ?TransformRectAroundCursor@@YAXPEAU_MOVESIZEDATA@@PEBUtagRECT@@GPEAU2@2G@Z @ 0x1C01E59A0 (-TransformRectAroundCursor@@YAXPEAU_MOVESIZEDATA@@PEBUtagRECT@@GPEAU2@2G@Z.c)
 *     ?MigrateRectMonitors@@YA_NPEAUtagWND@@PEAUtagRECT@@PEAUtagMONITOR@@122PEAU_MOVESIZEDATA@@K@Z @ 0x1C01FA9F4 (-MigrateRectMonitors@@YA_NPEAUtagWND@@PEAUtagRECT@@PEAUtagMONITOR@@122PEAU_MOVESIZEDATA@@K@Z.c)
 * Callees:
 *     <none>
 */

INT __fastcall TransformRectAroundPoint(
        _DWORD *a1,
        unsigned __int16 a2,
        _DWORD *a3,
        _DWORD *a4,
        unsigned __int16 a5,
        __int64 a6)
{
  INT result; // eax
  int v10; // ecx
  INT v11; // edi

  if ( a3 )
  {
    *a4 = a6 - EngMulDiv(a6 - *a1, a3[2] - *a3, a1[2] - *a1);
    result = EngMulDiv(HIDWORD(a6) - a1[1], a3[3] - a3[1], a1[3] - a1[1]);
    a4[1] = HIDWORD(a6) - result;
    a4[2] = *a4 + a3[2] - *a3;
    v10 = HIDWORD(a6) - result + a3[3] - a3[1];
  }
  else
  {
    v11 = a2;
    *a4 = a6 - EngMulDiv(a6 - *a1, a5, a2);
    a4[1] = HIDWORD(a6) - EngMulDiv(HIDWORD(a6) - a1[1], a5, v11);
    a4[2] = *a4 + EngMulDiv(a1[2] - *a1, a5, v11);
    result = EngMulDiv(a1[3] - a1[1], a5, v11);
    v10 = a4[1] + result;
  }
  a4[3] = v10;
  return result;
}
