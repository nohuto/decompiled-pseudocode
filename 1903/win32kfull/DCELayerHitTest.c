/*
 * XREFs of DCELayerHitTest @ 0x1C00463A8
 * Callers:
 *     ?DCEIsWindowHit@@YAHPEAUtagWND@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x1C0026CB4 (-DCEIsWindowHit@@YAHPEAUtagWND@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z.c)
 *     ?xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C00C8570 (-xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_A.c)
 *     DCELogicalSpeedTopLevelHitTest @ 0x1C01E6770 (DCELogicalSpeedTopLevelHitTest.c)
 *     ?TouchTargetingLayerHitTest@@YAHPEAUtagWND@@UtagPOINT@@HPEBUtagTOUCHTARGETINGCONTACT@@PEAUtagRECT@@PEAGPEAU2@W4tagTARGETING_PROPERTY@@@Z @ 0x1C02043D0 (-TouchTargetingLayerHitTest@@YAHPEAUtagWND@@UtagPOINT@@HPEBUtagTOUCHTARGETINGCONTACT@@PEAUtagREC.c)
 * Callees:
 *     PtInRect @ 0x1C0026FB4 (PtInRect.c)
 *     GrePtInSprite @ 0x1C0046454 (GrePtInSprite.c)
 */

_BOOL8 __fastcall DCELayerHitTest(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // r8
  int v3; // ebx
  __int64 v5; // r8
  unsigned __int8 v6; // r9
  _BOOL8 result; // rax
  unsigned __int16 v8; // di
  int v9; // eax
  int v10; // [rsp+4Ch] [rbp+14h]

  v10 = HIDWORD(a2);
  v2 = *(_QWORD *)(a1 + 40);
  v3 = a2;
  result = 0;
  if ( (*(_BYTE *)(v2 + 24) & 0x20) == 0 )
  {
    if ( !PtInRect((_DWORD *)(v2 + 88), a2) || (v6 & *(_BYTE *)(v5 + 27)) != 0 && (v6 & *(_BYTE *)(v5 + 26)) != 0 )
      return 1;
    v8 = *(_WORD *)(a1 + 256);
    v9 = IsWindowDesktopComposed(a1);
    if ( (unsigned int)GrePtInSprite(*(HDEV *)(gpDispInfo + 40LL), *(HWND *)a1, v3, v10, v8 >= 0x602u, v9) )
      return 1;
  }
  return result;
}
