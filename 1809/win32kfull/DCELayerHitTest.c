/*
 * XREFs of DCELayerHitTest @ 0x1C00A2B0C
 * Callers:
 *     ?xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C002B790 (-xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_A.c)
 *     ?DCEIsWindowHit@@YAHPEAUtagWND@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x1C006ECA0 (-DCEIsWindowHit@@YAHPEAUtagWND@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z.c)
 *     DCELogicalSpeedTopLevelHitTest @ 0x1C01D1B50 (DCELogicalSpeedTopLevelHitTest.c)
 *     ?TouchTargetingLayerHitTest@@YAHPEAUtagWND@@UtagPOINT@@HPEBUtagTOUCHTARGETINGCONTACT@@PEAUtagRECT@@PEAGPEAU2@W4tagTARGETING_PROPERTY@@@Z @ 0x1C01EDDB4 (-TouchTargetingLayerHitTest@@YAHPEAUtagWND@@UtagPOINT@@HPEBUtagTOUCHTARGETINGCONTACT@@PEAUtagREC.c)
 * Callees:
 *     PtInRect @ 0x1C006EFD8 (PtInRect.c)
 *     GrePtInSprite @ 0x1C00A28B0 (GrePtInSprite.c)
 */

_BOOL8 __fastcall DCELayerHitTest(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // r8
  char v3; // r9
  int v4; // ebx
  _BOOL8 result; // rax
  unsigned __int16 v7; // di
  int v8; // eax
  int v9; // [rsp+4Ch] [rbp+14h]

  v9 = HIDWORD(a2);
  v2 = *(_QWORD *)(a1 + 40);
  v3 = 32;
  v4 = a2;
  result = 0;
  if ( (*(_BYTE *)(v2 + 24) & 0x20) == 0 )
  {
    if ( *(_QWORD *)(a1 + 152) && !PtInRect((_DWORD *)(v2 + 88), a2) )
      return 1;
    if ( ((unsigned __int8)v3 & *(_BYTE *)(v2 + 27)) != 0 && ((unsigned __int8)v3 & *(_BYTE *)(v2 + 26)) != 0 )
      return 1;
    v7 = *(_WORD *)(a1 + 240);
    v8 = IsWindowDesktopComposed(a1);
    if ( (unsigned int)GrePtInSprite(*(HDEV *)(gpDispInfo + 40LL), *(HWND *)a1, v4, v9, v7 >= 0x602u, v8) )
      return 1;
  }
  return result;
}
