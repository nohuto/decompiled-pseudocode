/*
 * XREFs of ?GetDropShadow@CSpriteVisual@@AEBAPEAVCDropShadow@@XZ @ 0x1800B8008
 * Callers:
 *     ?RenderContent@CSpriteVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180068610 (-RenderContent@CSpriteVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ??1CSpriteVisual@@UEAA@XZ @ 0x18007B004 (--1CSpriteVisual@@UEAA@XZ.c)
 *     ?GetContentBounds@CSpriteVisual@@UEAAJPEAVCContentBounder@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800B7D00 (-GetContentBounds@CSpriteVisual@@UEAAJPEAVCContentBounder@@PEAV-$TMilRect_@MUMilRectF@@UMilPoint.c)
 *     ?ProcessSetShadow@CSpriteVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SPRITEVISUAL_SETSHADOW@@@Z @ 0x1800B7E50 (-ProcessSetShadow@CSpriteVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SPRITEVISUAL_SETSHADOW@@.c)
 *     ?HasNonEmptyContent@CSpriteVisual@@UEAA_NXZ @ 0x1800B7F60 (-HasNonEmptyContent@CSpriteVisual@@UEAA_NXZ.c)
 * Callees:
 *     <none>
 */

struct CDropShadow *__fastcall CSpriteVisual::GetDropShadow(CSpriteVisual *this)
{
  _DWORD *v1; // r8
  __int64 v2; // rdx
  _BYTE *v3; // r9
  __int64 v4; // rcx
  unsigned int i; // eax

  v1 = (_DWORD *)*((_QWORD *)this + 28);
  if ( (*v1 & 0x8000) == 0 )
    return 0LL;
  v2 = (unsigned int)v1[1];
  v3 = v1 + 2;
  v4 = 0LL;
  for ( i = 0; i < (unsigned int)v2; ++v3 )
  {
    if ( *v3 == 17 )
      break;
    ++i;
  }
  if ( i < (unsigned int)v2 )
    v4 = (__int64)v1 + 8LL * i - (((_BYTE)v2 + 15) & 7) + v2 + 15;
  return *(struct CDropShadow **)v4;
}
