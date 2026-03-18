/*
 * XREFs of ??1RGNOBJAPI@@QEAA@XZ @ 0x1C005ED54
 * Callers:
 *     GreUpdateSpriteClipRgn @ 0x1C00293A4 (GreUpdateSpriteClipRgn.c)
 *     ?vSpComputeNoPresentRegion@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C003E860 (-vSpComputeNoPresentRegion@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     GreSubtractRgnRectList @ 0x1C0058234 (GreSubtractRgnRectList.c)
 *     NtGdiExtSelectClipRgn @ 0x1C00611A0 (NtGdiExtSelectClipRgn.c)
 *     GreExtSelectClipRgn @ 0x1C008E358 (GreExtSelectClipRgn.c)
 *     GreGetRandomRgn @ 0x1C008E4F0 (GreGetRandomRgn.c)
 *     ?vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z @ 0x1C00C6000 (-vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z.c)
 *     NtGdiFrameRgn @ 0x1C0145A10 (NtGdiFrameRgn.c)
 *     ?NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z @ 0x1C0146DC0 (-NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z.c)
 *     NtGdiFillRgn @ 0x1C01472A0 (NtGdiFillRgn.c)
 *     ?InternalSpritesCollision@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHRGN__@@@Z @ 0x1C0273804 (-InternalSpritesCollision@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHRGN__@@@Z.c)
 *     W32kCddClipRegion @ 0x1C0275580 (W32kCddClipRegion.c)
 *     ?GdiGetSpriteClipRgns@@YAHPEAUHDEV__@@PEAUHRGN__@@@Z @ 0x1C027B744 (-GdiGetSpriteClipRgns@@YAHPEAUHDEV__@@PEAUHRGN__@@@Z.c)
 *     ?vForceClientRgnUpdate@@YAXXZ @ 0x1C02839B4 (-vForceClientRgnUpdate@@YAXXZ.c)
 *     GreSetClientRgn @ 0x1C028487C (GreSetClientRgn.c)
 *     GreScaleRgn @ 0x1C02992D4 (GreScaleRgn.c)
 *     GreScaleRgnToDestLogPixel @ 0x1C0299378 (GreScaleRgnToDestLogPixel.c)
 * Callees:
 *     <none>
 */

void __fastcall RGNOBJAPI::~RGNOBJAPI(RGNOBJAPI *this)
{
  if ( !*((_DWORD *)this + 4) )
    RGNOBJ::UpdateUserRgn(this);
  if ( *(_QWORD *)this )
    _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)this + 12LL));
}
