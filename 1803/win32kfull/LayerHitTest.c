/*
 * XREFs of LayerHitTest @ 0x1C00065BC
 * Callers:
 *     ?DCEChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@PEAU2@PEBU_SUBPIXELS@@@Z @ 0x1C00748A0 (-DCEChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@PEAU2@PEBU_SUBPIXELS@@@Z.c)
 *     xxxWindowHitTest2 @ 0x1C00DAAF0 (xxxWindowHitTest2.c)
 *     ?ClassicIsWindowHit@@YAHPEAUtagWND@@UtagPOINT@@@Z @ 0x1C0105CF4 (-ClassicIsWindowHit@@YAHPEAUtagWND@@UtagPOINT@@@Z.c)
 *     _ChildWindowFromPointEx @ 0x1C012D97C (_ChildWindowFromPointEx.c)
 *     ?TouchTargetingLayerHitTest@@YAHPEAUtagWND@@UtagPOINT@@HPEBUtagTOUCHTARGETINGCONTACT@@PEAUtagRECT@@PEAGPEAU2@W4tagTARGETING_PROPERTY@@@Z @ 0x1C01C9A9C (-TouchTargetingLayerHitTest@@YAHPEAUtagWND@@UtagPOINT@@HPEBUtagTOUCHTARGETINGCONTACT@@PEAUtagREC.c)
 * Callees:
 *     GrePtInSprite @ 0x1C01363EC (GrePtInSprite.c)
 */

_BOOL8 __fastcall LayerHitTest(__int64 a1, __int64 a2)
{
  int v2; // ebx
  _BYTE *v4; // rdx
  unsigned __int16 v6; // di
  int v7; // eax
  int v8; // [rsp+4Ch] [rbp+14h]

  v8 = HIDWORD(a2);
  v2 = a2;
  v4 = *(_BYTE **)(a1 + 40);
  if ( (v4[24] & 0x20) != 0 )
    return 0LL;
  if ( (v4[27] & 0x20) != 0 && (v4[26] & 0x20) != 0 )
    return 1LL;
  v6 = *(_WORD *)(a1 + 240);
  v7 = IsWindowDesktopComposed(a1);
  return (unsigned int)GrePtInSprite(*(HDEV *)(gpDispInfo + 40LL), *(HWND *)a1, v2, v8, v6 >= 0x602u, v7) != 0;
}
