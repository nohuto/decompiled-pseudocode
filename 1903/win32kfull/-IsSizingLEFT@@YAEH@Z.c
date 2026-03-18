/*
 * XREFs of ?IsSizingLEFT@@YAEH@Z @ 0x1C01FABF4
 * Callers:
 *     ?HandleNoTargetToDockTargetSizing@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@1W4eTHRESHOLD_MARGIN_DIRECTION@@PEAK@Z @ 0x1C01FA408 (-HandleNoTargetToDockTargetSizing@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@1W4eTHRESHOLD_MARGIN_DI.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01FE3AC (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsSizingLEFT(unsigned int a1)
{
  int v1; // eax
  bool result; // al

  result = 0;
  if ( a1 <= 7 )
  {
    v1 = 146;
    if ( _bittest(&v1, a1) )
      return 1;
  }
  return result;
}
